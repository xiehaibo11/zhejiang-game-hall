local ReqBankruptcyGiftProto = class("ReqBankruptcyGiftProto", XH.ReqProtobuf50)

local function snakeToCamel(str)
    -- 确保只转换下划线后的小写字母
    return (str:gsub("_(%l)", function(match)
        return match:upper()
    end))
end

local function convertKeysToCamelCase(tbl, seen)
    seen = seen or {}
    if seen[tbl] then
        return seen[tbl]
    end
    if type(tbl) ~= "table" then
        return tbl
    end
    local result = {}
    seen[tbl] = result
    for key, value in pairs(tbl) do
        local newKey = key
        local newValue = value
        -- 关键：只转换纯字符串键，不转换数字键
        if type(key) == "string" and key:find("_") then
            newKey = snakeToCamel(key)
        end
        -- 递归转换表值
        if type(value) == "table" then
            newValue = convertKeysToCamelCase(value, seen)
        end
        result[newKey] = newValue
    end
    return result
end

function ReqBankruptcyGiftProto:ctor()
    ReqBankruptcyGiftProto.super.ctor(self)
    self._askId = 0
end

function ReqBankruptcyGiftProto:start(aid, timeout, isShow, gameID)
    gameID = gameID or 0
    timeout = timeout or 10
    if ReqBankruptcyGiftProto.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()
    self._isShow = isShow

    local protocol = {
        aid = aid,
        user_id = XH.playerData:getNumberID(),
        ask_id = self._askId,
        tenant_id = XH.areaData:getTenantid(),
        area_id = XH.areaData:getAreaID(),
        game_id = gameID,
    }
    self:sendProtobuf(protocol,XH.NyxProtobuf.GetBankruptcyGiftRequest, XH.NyxProtobuf.GetBankruptcyGiftReply)
end

function ReqBankruptcyGiftProto:onMsgReceive(msgData)
    if msgData then
        local retData = {}
        retData = convertKeysToCamelCase(msgData)
        if msgData.resp and msgData.resp.err_code == 0 then
            self:success(retData)
        else
            self:fail(retData)
        end
    else
        self:fail()
    end
end

return ReqBankruptcyGiftProto