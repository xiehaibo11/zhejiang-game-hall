---@class StorageTool
local StorageTool = {}



local function getKeyByNumID(numID)
    local areaID = TeaHouse.BridgeData.getAreaID()
    return areaID .. "_" .. numID
end

function StorageTool.saveOwnerTeaHouseList(numID, infoList)
    local saveData = ""
    for _, info in pairs(infoList) do
        if #saveData == 0 then
            saveData = string.format("%s-%s", info.teaNumber, info.passwd)
        else
            saveData = saveData .. "," .. string.format("%s-%s", info.teaNumber, info.passwd)
        end
    end
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_OWNER_RECORD_NAME, saveData ,{numid = numID})
end

function StorageTool.removeOwnerTeaHouse(numID, teaNumber)
    teaNumber = tostring(teaNumber)
    local data = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_OWNER_RECORD_NAME, "" ,{numid = numID})
    local infoList = TeaHouse.StringTool.splitWithTrim(data, ',')
    for i, infoItem1 in pairs(infoList) do
        local info = TeaHouse.StringTool.splitWithTrim(infoItem1, "-")
        if info[1] == teaNumber then
            table.remove(infoList, i)
            local saveData = ""
            for _, infoItem2 in pairs(infoList) do
                if #saveData == 0 then
                    saveData = infoItem2
                else
                    saveData = string.format("%s,%s", saveData, infoItem2)
                end
            end
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_OWNER_RECORD_NAME, saveData ,{numid = numID})
            break
        end
    end
end

function StorageTool.addOwnerTeaHouse(numID, teaNumber, teaHousePwd)
    local saveData = string.format("%d-%d", teaNumber, teaHousePwd)
    local data = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_OWNER_RECORD_NAME, "" ,{numid = numID})
    if data == nil or #data == 0 then
        data = saveData
    else
        data = string.format("%s,%s", saveData, data)
    end
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_OWNER_RECORD_NAME, saveData ,{numid = numID})
end

function StorageTool.getOwnerTeaHouseList(numID)
    local data = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_OWNER_RECORD_NAME, "" ,{numid = numID})
    return TeaHouse.StringTool.splitWithTrim(data, ",")
end

function StorageTool.saveEnterTeaHouseList(numID, infoList)
    local saveData = ""
    for _, tid in pairs(infoList) do
        if #saveData == 0 then
            saveData = tostring(tid)
        else
            saveData = saveData .. "," .. tostring(tid)
        end
    end
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_ENTER_RECORD_NAME, saveData ,{numid = numID})
end

function StorageTool.getEnterTeaHouseList(numID)
    local data = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_ENTER_RECORD_NAME, "" ,{numid = numID})
    return TeaHouse.StringTool.splitWithTrim(data, ",")
end

function StorageTool.loadTeaHouseFilter(numID, teaNumber)
    local outList = {}
    if numID == nil or teaNumber == nil then
        return outList
    end
    local data =  XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_FILTER_RECORD_NAME, "" ,{numid = numID})
    for _, item in ipairs(string.split(data, ",")) do
        if #item > 0 then
            outList[#outList + 1] = item
        end
    end
    return outList
end

function StorageTool.saveTeaHouseFilter(numID, teaNumber, infoList)
    if numID == nil or teaNumber == nil or infoList == nil then
        return
    end
    local saveData = ""
    for _, info in pairs(infoList) do
        if #saveData == 0 then
            saveData = tostring(info)
        else
            saveData = saveData .. "," .. tostring(info)
        end
    end
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_FILTER_RECORD_NAME, saveData ,{numid = numID})
end

return StorageTool