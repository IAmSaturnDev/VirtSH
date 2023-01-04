io.write("Enter the name of your list: ")
---@type string
local list_name = io.read()
local list = {}

while true do
    io.write("Enter something to add to the list or type done: ")
    ---@type string
    local item = io.read()

    if item == "done" then
        break
    end
    table.insert(list, item)
end

print("Items in: '" .. list_name .. "'")

for i = 1, #list do
    print(list[i])
end