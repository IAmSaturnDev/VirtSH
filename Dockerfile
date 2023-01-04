FROM  --platform=arm64v8 ubuntu
COPY . /app
WORKDIR /app
RUN apt-get update
RUN apt-get --assume-yes install g++
RUN apt-get --assume-yes install lua5.4
RUN apt-get --assume-yes install python3
RUN apt-get --assume-yes install python3-pip
RUN apt-get --assume-yes install curl
RUN pip3 install google
CMD g++ VirtSH.cpp -o VirtSH && ./VirtSH

FROM --platform=amd64 ubuntu
COPY . /app
WORKDIR /app
RUN apt-get update
RUN apt-get --assume-yes install g++
RUN apt-get --assume-yes install lua5.4
RUN apt-get --assume-yes install python3
RUN apt-get --assume-yes install python3-pip
RUN apt-get --assume-yes install curl
RUN pip3 install google
CMD g++ VirtSH.cpp -o VirtSH && ./VirtSH
