local ReqH5StartGameRoom = class("ReqH5StartGameRoom")
require("cocos.cocos2d.json")


ReqH5StartGameRoom.LOBBY_REQUEST_SUCCESS = 910000  -- 大厅请求成功
ReqH5StartGameRoom.LOBBY_REQUEST_FAILED  = 910001  -- 大厅请求失败
ReqH5StartGameRoom.LOBBY_CANCEL = 910002           -- 大厅取消
ReqH5StartGameRoom.LOBBY_SUCCESS = 910006          -- 大厅成功
ReqH5StartGameRoom.LOBBY_PAY_FAILED = 910007       -- 支付失败
if device.platform == "android" then
    ReqH5StartGameRoom.LOBBY_REQUEST_SUCCESS = 910000  -- 大厅请求成功
    ReqH5StartGameRoom.LOBBY_REQUEST_FAILED  = 910001  -- 大厅请求失败
    ReqH5StartGameRoom.LOBBY_CANCEL = 910002           -- 大厅取消
    ReqH5StartGameRoom.LOBBY_SUCCESS = 910006          -- 大厅成功
    ReqH5StartGameRoom.LOBBY_PAY_FAILED = 910007       -- 支付失败
end

function ReqH5StartGameRoom:ctor()
    self._callBacks = {}
    self._isStart = false
    self._ThirdResultScriptFuncID = 0
end

function ReqH5StartGameRoom:stop()
    self._callBacks = {}
    self._isStart = false
    if self._ThirdResultScriptFuncID then
        XH.sdkManager:removeSDKCallBackOld(self._ThirdResultScriptFuncID)
    end
end

function ReqH5StartGameRoom:start(cp , numid, nickname, sex, wechaturl, bNeedConfigID)
    if self._isStart then
        return false
    end
    self._isStart = true

    self._ThirdResultScriptFuncID = XH.sdkManager:addSDKCallBackOld(function(flag, data)
        self:onThirdResultCallBack(flag, data)
    end)

    local ext = {}
    if bNeedConfigID then
        ext.config_id = tostring(XH.areaData:getH5ConfigID() or 0)
    end

    local startTime = os.time({day = 1, month = 4, year = 2021, hour = 0, minute = 0, second = 0}) 
    if XH.playerData:getRegTime() >  startTime then
        --为没有AA1_的用户加AA1_
        local matchid = string.match(tostring(numid),"(%d+)")
        if tostring(numid) == tostring(matchid)  then
            numid="AA1_"..tostring(numid)
        end
    end
    
    local mapData = {
        ["0"] = tostring(cp),                                       --cp
        ["1"] = tostring(numid),                                    --授权用户id
        ["2"] = tostring(nickname),                                 --昵称
        ["3"] = tostring(sex),                                      --性别
        ["4"] = tostring(wechaturl),                                --授权用户头像 
        ["5"] = json.encode(ext)                                    --拓展信息
    }
    XH.sdkManager:callFunctionWithMap("start_game_room", mapData)
end


function ReqH5StartGameRoom:addReqCallBack(cell, callbackFunc)
    local t = { f = callbackFunc, c = cell }
    for _, v in ipairs(self._callBacks) do
        if v.f == t.f and v.c == t.c then
            return
        end
    end
    self._callBacks[#self._callBacks + 1] = t
end

function ReqH5StartGameRoom:success(data)
    ReqH5StartGameRoom.super.success(self, data)
end

function ReqH5StartGameRoom:fail(data)
    ReqH5StartGameRoom.super.success(self, data)
end


function ReqH5StartGameRoom:onThirdResultCallBack(flag, data)
    if flag == ReqH5StartGameRoom.LOBBY_REQUEST_FAILED then
        self:fail(data)
        self:stop()
    elseif flag == ReqH5StartGameRoom.LOBBY_REQUEST_SUCCESS then
        self:success(data)
        self:stop()
    end
end

return ReqH5StartGameRoom