FROM  --platform=arm64 ubuntu
COPY . /app
RUN apt update
RUN apt --assume-yes install g++
RUN apt --assume-yes install lua5.4
RUN pip3 install google
CMD g++ VirtSH.cpp -o VirtSH && ./VirtSH

FROM --platform=amd64 ubuntu
COPY . /app
RUN apt update
RUN apt --assume-yes install g++
RUN apt --assume-yes install lua5.4
RUN pip3 install google
CMD g++ VirtSH.cpp -o VirtSH && ./VirtSH
