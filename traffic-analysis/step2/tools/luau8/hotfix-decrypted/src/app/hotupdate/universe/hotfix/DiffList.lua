local DiffList = un.instance()

-- local KEY_COUNT = "___DiffList_Count___"

function DiffList:ctor()
    self._table = {}
    self._count = 0
end

function DiffList:add(file, name, zipMd5, size, diffType)
    self._table[file] = {
        ["name"] = name,
        ["zipMd5"] = zipMd5,
        ["diffType"] = diffType,
        ["size"] = size,
    }
    self._count = self._count + 1
end

function DiffList:get(file)
    return self._table[file]
end

function DiffList:remove(file)
    if self._table[file] then
        self._table[file] = nil
        self._count = self._count - 1
    end
end

function DiffList:foreach(func)
    local table = self._table
    for k,v in pairs(table) do
        func(k, v)
    end
end

function DiffList:getCount()
    return self._count
end

function DiffList:getTotalDownloadFileCountAndSize()
    local count = 0
    local size = 0
    local table = self._table
    for k,v in pairs(table) do
        if v["diffType"] ~= un.const.FileDiffType.DELETE then
            count = count + 1
            size = size + v["size"]
        end
    end
    return count, size
end

-- function DiffList:save(file)
--     if self._count > 0 then
--         local temp = table.shallow_copy(self._table)
--         temp[KEY_COUNT] = self._count

--         local content = un.utils.json2str(temp)
--         if content and #content > 0 then
--             un.FileInterface.writeStringToFile(content, file)
--         else
--             print("DiffList save failed.")
--         end
--     end
-- end

-- function DiffList:load(file)
--     local fileInter = un.FileInterface
--     if file and #file > 0 and fileInter.isFileExist(file) then
--         local content = fileInter.getStringFromFile(file)
--         local temp = un.utils.str2json(content)
--         if temp and temp[KEY_COUNT] then
--             self._count = temp[KEY_COUNT]
--             temp[KEY_COUNT] = nil
--             self._table = temp
--         else
--             print("DiffList load failed.")
--         end
--     end
-- end

un.hotfix.DiffList = DiffList


e