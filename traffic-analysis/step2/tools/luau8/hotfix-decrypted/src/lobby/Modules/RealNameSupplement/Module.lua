-- 实名补充
local RealNameSupplementModule = class("RealNameSupplementModule", XH.ModuleBase)
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")

local SAVE_KEY = "KW_REAL_NAME_SUPPLEMENT_%d_%d"

function RealNameSupplementModule:ctor()
    RealNameSupplementModule.super.ctor(self)
    self._isReqFinish = false -- 是否请求完成

    self._isBoxOrTea = false -- 是否约局
    self._isFish = false -- 是否捕鱼
    self._isSpecialList = false -- 是否是特殊名单用户
    self._isFishRecharge = false -- 是否是捕鱼充值用户

    -- 弹出方式
    self._popMethod = 0 -- 弹出方式 0:非强弹，1:强弹
    self._popTiming = 0 -- 弹出时机 1:弹出时机1， 2:弹出时机2
    self._popFrequency = 0 -- 弹出频率 几天一次
    self:getAllConfig()
end

function RealNameSupplementModule:getProxyEvents()
    return {
        {module = XH.roomManager, eventKeyName = "EVENT_GAME_SCENE_EXIT", callBack = "onGameSceneExit"},
        {module = XH.lobby:getModule("Configuration"), eventKeyName = "EVENT_REQ_CONFIGURATION_SUCCESS", callBack = "onGetConfiguration"},
        {module = XH.login:getModule("Login"), eventKeyName = "LOGIN_EVENT_SUCCESS", callBack = "onLoginSuccessCallBack"}
    }
end

function RealNameSupplementModule:onLoginSuccessCallBack(event)
    self._isReqFinish = false
    self._popMethod = 0
    self._popTiming = 0
    self._popFrequency = 0
    self:getAllConfig()
end

function RealNameSupplementModule:getAllConfig()
    self._config = {}
    local configJsonData = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    if configJsonData and configJsonData.RealNameSupplement then
        for i = 1, #configJsonData.RealNameSupplement do
            local x = string.split(configJsonData.RealNameSupplement[i], ",")
            table.map(
                x,
                function(v, _)
                    return tonumber(v) or v
                end
            )
            table.insert(self._config, x)
        end
    end
end

function RealNameSupplementModule:onGetConfiguration(event)
    if event.data.key and event.data.key == ConfigurationDefine.Config.ALL then
        self:getAllConfig()
    end
end

function RealNameSupplementModule:onGameSceneExit(event)
    self:checkSupplement(2)
end

function RealNameSupplementModule:getReqConfig()
    return {
        ReqGetRealName = {reqPath = "lobby.Modules.RealNameSupplement.ReqGetRealName", callBack = self.respGetRealName}
    }
end

function RealNameSupplementModule:reqGetRealName()
    self:startReq("ReqGetRealName", nil, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function RealNameSupplementModule:respGetRealName(req, type, data)
    self._isReqFinish = true
    if type == XH.Req.TYPE.SUCCESS then
        self._isBoxOrTea = data.isBoxOrTea or false
        self._isFish = data.isFish or false
        self._isSpecialList = data.isSpecialList or false
        self._isFishRecharge = data.isFishRecharge or false
        self:checkSupplement(1)
    end
end

function RealNameSupplementModule:getNDaysLaterZeroTime(n)
    local currentTime = os.date("*t", XH.lobby:getModule("Shop"):getServerTime()) -- 获取当前时间的表
    local zeroTime = {year = currentTime.year, month = currentTime.month, day = currentTime.day, hour = 0, min = 0, sec = 0}
    local zeroTimestamp = os.time(zeroTime) -- 转换为当天零点的时间戳
    local futureTimestamp = zeroTimestamp + n * 86400 -- 计算N天后的时间戳
    return futureTimestamp
end

function RealNameSupplementModule:saveShow()
    local data = {
        isBoxOrTea = self._isBoxOrTea,
        isFish = self._isFish,
        isSpecialList = self._isSpecialList,
        isFishRecharge = self._isFishRecharge,
        time = self:getNDaysLaterZeroTime(self._popFrequency) -- 保存下次弹出时间
    }
    cc.UserDefault:getInstance():setStringForKey(string.format(SAVE_KEY, XH.areaData:getAreaID(), XH.playerData:getNumberID()), json.encode(data))
end

function RealNameSupplementModule:checkShow()
    local content = cc.UserDefault:getInstance():getStringForKey(string.format(SAVE_KEY, XH.areaData:getAreaID(), XH.playerData:getNumberID()), "")
    if content == "" then
        return true
    end
    local json
    local ok, _ =
        pcall(
        function()
            json = cjson.decode(content)
        end
    )
    if ok and json then
        if json.isBoxOrTea == self._isBoxOrTea and json.isFish == self._isFish and json.isSpecialList == self._isSpecialList and json.isFishRecharge == self._isFishRecharge then
            if XH.lobby:getModule("Shop"):getServerTime() > json.time then
                -- 数据都相同, 到达时间了, 可以弹出
                return true
            end
        else
            -- 数据变化了, 可以弹出
            return true
        end
    end
    return false
end

function RealNameSupplementModule:checkSupplement(timing)
    if self._isReqFinish == false then
        return false
    end
    if next(self._config) == nil then
        -- 没有配置
        return false
    end
    if XH.playerData:getProtectedInwhitelist() == 0 then
        -- 非白名单用户
        return
    end
    if XH.playerData:getIdentityStatus() ~= 2 then
        -- 未实名用户
        return
    end
    -- if self._isSpecialList then
    --     -- 特殊名单用户，直接强弹
    --     return
    -- end
    for i = 1, #self._config do
        if self._config[i][1] == (self._isBoxOrTea and 1 or 0) and self._config[i][2] == (self._isFish and 1 or 0) and self._config[i][6] == (self._isFishRecharge and 1 or 0) then
            self._popMethod = self._config[i][3]
            self._popTiming = self._config[i][4]
            self._popFrequency = self._config[i][5]
        end
    end
    if self._popTiming ~= timing then
        return
    end
    if XH.SceneManager:getInstance():getTopScene():getTag() ~= XH.SCENE_TAG.LOBBY then
        return
    end
    if self:checkShow() then
        XH.viewManager:openView("IdentityCheckView", nil, {isSupplement = true, forceRealName = self._popMethod == 1})
        self:saveShow()
    end
end

return RealNameSupplementModule
�