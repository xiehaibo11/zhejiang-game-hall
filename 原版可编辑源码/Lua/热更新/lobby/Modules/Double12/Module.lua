local Double12ActModule = class("Double12ActModule", XH.ModuleBase)
local TaskDefine = require("app.Define.TaskDefine")

Double12ActModule.EVENT_ACT_INFO = "EVENT_ACT_INFO"
Double12ActModule.EVENT_ON_REWARD = "EVENT_ON_REWARD"

function Double12ActModule:ctor()
    Double12ActModule.super.ctor(self)
    self._actId = 0
    self._actInfo = {}
    self._isAutoShow = true
    self._isShow = cc.UserDefault:getInstance():getBoolForKey("Double12ActModule_BSHOW" .. XH.playerData:getNumberID(), true)

    -- self:dispatchEvent({name = self.EVENT_ACT_INFO, data = {bShow = true}})
end

function Double12ActModule:getReqConfig()
    return {
        ReqInfo = {reqPath = "lobby.Req.Act.ReqDouble12Info", callBack = self.onRespInfo},
        ReqGetAward = {reqPath = "lobby.Req.Act.ReqDouble12Award", callBack = self.onRespGetAward}
    }
end

function Double12ActModule:setActivityId(id, info)
    if id == nil or id == 0 then
        return
    end
    if self._actId > 0 and id > self._actId then
        --存在多个策略，用小的
        return
    end
    self._actId = id
    self._iopInfo = info
    self:reqInfo()
end

function Double12ActModule:changePropCnt(reward, keyPropId, keyCount)
    local value = XH.playerData:changeBindCardRate(reward[keyPropId], reward[keyCount])
    if reward[keyPropId] == XH.areaData:getPropList().limitedTimeRoomCardID then
        reward[keyCount] = value / XH.areaData:getPropLimitedTimeRoomCardRatio()
    end
end

-- 将驼峰命名转为下划线命名
local function camel_to_snake_case(str)
    return string.gsub(str, "([A-Z])", "_%1"):lower()
end

local function convert_keys(t)
    if type(t) ~= "table" then
        return t
    end

    local new_t = {}
    for k, v in pairs(t) do
        -- 只转换字符串类型的 key，保留数字 key 不变
        local new_k = type(k) == "string" and camel_to_snake_case(k) or k
        new_t[new_k] = convert_keys(v)
    end
    return new_t
end

function Double12ActModule:reqInfo()
    if XH.isEmbeddedApp() then
        return
    end
    if self._actId == nil or not self._isShow then
        return
    end
    self:startReq("ReqInfo", {act_id = self._actId}, XH.KW_CONFIG_LOGIC_TIME_OUT)
end
function Double12ActModule:onRespInfo(req, type, data)
    self._iconShow = false
    if type == XH.Req.TYPE.SUCCESS then
        local ok, info = pcall(function()
            return json.decode(XH.SysTool:base64_decode(data.data))
        end)
        if ok then
            info = convert_keys(info)
            for i, v in ipairs(info.pool_prize or {}) do
                self:changePropCnt(v, "prop_id", "prop_value")
            end
            self._actInfo = info
            self._iconShow = info ~= nil and info.pool_prize ~= nil
            if info.join_status == 1 then
                cc.UserDefault:getInstance():setBoolForKey("Double12ActModule_BSHOW" .. XH.playerData:getNumberID(), false)
            else
                if self._isAutoShow then
                    XH.viewManager:openView("Double12View", nil, {page = "主大厅"})
                end
            end
            -- self._isAutoShow = false
        end
    end
    self:dispatchEvent({name = self.EVENT_ACT_INFO, data = {visible = self._iconShow}})
end
function Double12ActModule:reqGetAward()
    self:startReq("ReqGetAward", {act_id = self._actId}, XH.KW_CONFIG_LOGIC_TIME_OUT)
end
function Double12ActModule:onRespGetAward(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local ok, info = pcall(function()
            return json.decode(XH.SysTool:base64_decode(data.data))
        end)
        if ok then
            info = convert_keys(info)
            local award = info.pool_prize and info.pool_prize[1]
            if award then
                self:changePropCnt(award, "prop_id", "prop_value")
                self:dispatchEvent({name = self.EVENT_ON_REWARD, data = {award = award}})
            end
            cc.UserDefault:getInstance():setBoolForKey("Double12ActModule_BSHOW", false)
            return
        end
    else
    end
    self:dispatchEvent({name = self.EVENT_ON_REWARD, info = nil})
end

function Double12ActModule:checkShow()
    return self._iconShow
end
function Double12ActModule:getActInfo()
    return self._actInfo
end

function Double12ActModule:toWxPublic()
    local WXPublicConfig = require("lobby.Modules.WXPublic.Config")
    if not WXPublicConfig.PublicConfig[XH.areaData:getLobbyID()] then
        XH.TipTool.showToast("请联系客服")
        return
    end
    XH.viewManager:openView("WXPublicView")
    -- XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.WX_PUBLIC_CLICK_LOBBY_ICON)
end

function Double12ActModule:getWxPublic()
    local WXPublicConfig = require("lobby.Modules.WXPublic.Config")
    return (WXPublicConfig.PublicConfig[XH.areaData:getLobbyID()] or {Name = ""}).Name
end

function Double12ActModule:isInAutoStartTime()
    local cfg = XH.lobby:getModule("Configuration"):getLobbyConfig("Double12") or {step={must={}}}
    if not cfg.step then
        return false
    end
    local curTime = XH.lobby:getModule("Shop"):getServerTime()
    for i,v in ipairs(cfg.step.must or {}) do
        if v > 0 then
            if curTime <= self._iopInfo.start + 86400 * v then
                return true
            end
        else
            if curTime >= self._iopInfo["end"] + 86400 * v then
                return true
            end
        end
    end
    return false
end
return Double12ActModule
