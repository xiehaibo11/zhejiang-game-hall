---@class BillTool 账单工具
local BillTool = class("BillTool")

--保存文件(时间为xxxx-xx-xx)
function BillTool.writeBillInfo(tBillInfo, nTime, sFileName)
    if not cc.FileUtils:getInstance():isDirectoryExist(cc.FileUtils:getInstance():getWritablePath() .. nTime) then
        cc.FileUtils:getInstance():createDirectory(cc.FileUtils:getInstance():getWritablePath() .. nTime)
    end
    local uFile = io.open(cc.FileUtils:getInstance():getWritablePath() .. nTime .. "/" .. sFileName, "wb")
    for key, var in pairs(tBillInfo) do
        local sWriteJSON

        local ok, msg = pcall(function()
            sWriteJSON = cjson.encode(var)
        end)

        if not ok then
            print("cjson failed: " .. msg)
            if uFile then
                uFile:close()
            end
            return
        end
         --转换成json格式
        if uFile and type(var) == "table" then
            uFile:write(sWriteJSON .. "\n")
            uFile:flush()
        end
    end
    if uFile then
        uFile:close()
    end
end

--读取(时间为xxxx-xx-xx)
function BillTool.readTableInfoEx(sFileName, tOutInfo)
    local uFile = io.open(sFileName, "rb")
    if uFile then
        tOutInfo = tOutInfo or {}
        for var in uFile:lines() do
            local tTempTable

            local ok, msg = pcall(function()
                tTempTable = cjson.decode(var)
            end)

            if not ok then
                print("cjson failed: " .. msg)
                uFile:close()
                return
            end
            
            table.insert(tOutInfo, tTempTable)
        end
        uFile:close()
    end
end

return BillTool