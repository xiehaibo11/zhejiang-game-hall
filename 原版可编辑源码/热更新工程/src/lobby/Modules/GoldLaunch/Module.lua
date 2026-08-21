local GoldLaunchModule = class("GoldLaunchModule", XH.ModuleBase)
local GoldLaunchConfig = require("lobby.Modules.GoldLaunch.Config")
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")

function GoldLaunchModule:ctor()
    GoldLaunchModule.super.ctor(self)
end

function GoldLaunchModule:resetParam()
    self._actId = nil
    self._actInfo = nil
end

function GoldLaunchModule:getReqConfig()
    return {
        ReqPropsDiscount = { reqPath = "lobby.Req.GoldLaunch.ReqPropsDiscount", callBack = self.respPropsDiscount },
        ReqAcceptPresenter = { reqPath = "lobby.Req.GoldLaunch.ReqAcceptPresenter", callBack = self.respAcceptPresenter },
    }
end

-- 请求免费信息（各地区单独实现）
function GoldLaunchModule:reqGiftInfo(scene)
    if true then
        return
    end
    self._scene = scene
    self:resetParam()
    local lobbyID = XH.areaData:getLobbyID()
    local tags = lobbyID == 900023 and { "new_user_gift_gold_5" } or { "new_user_gift_gold" }
    self:startReq("ReqPropsDiscount", tags)
end

function GoldLaunchModule:respPropsDiscount(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local firstKey, firstValue = next(data.reply.activitys)
        self._actId = firstKey
        self._actInfo = firstValue
        self:dealSceneLogic(self._scene)
    else
        self:resetParam()
    end
end

-- 是否存在待领取的奖励
function GoldLaunchModule:canGetAward()
    if self._actInfo ~= nil then
        return true
    end
    return false
end

-- 处理弹窗逻辑
function GoldLaunchModule:dealSceneLogic(scene)
    if self._actInfo == nil or scene == nil then
        return
    end
    if scene == GoldLaunchConfig.Type.GOLDLOBBY then
        if NG == nil or NG.goldLobby == nil then
            return
        end
        NG.goldLobby:getModule("GoldCommon"):notifyAutoJoinRoom()
    elseif scene == GoldLaunchConfig.Type.LOBBY then
        -- 每日弹窗3次
        local popTimes = cc.UserDefault:getInstance():getIntegerForKey(self:getLocalKey(), 0)
        if popTimes >= 3 then
            return
        end
        cc.UserDefault:getInstance():setIntegerForKey(self:getLocalKey(), popTimes + 1)
        XH.viewManager:openView("GoldLaunchView", nil, { type = GoldLaunchConfig.Type.LOBBY })
    end
end

function GoldLaunchModule:getLocalKey()
    local numid = XH.playerData:getNumberID()
    return os.date("%Y%m%d") .. "_NEW_USER_GIFT_GOLD" .. numid
end

function GoldLaunchModule:getActInfo()
    return self._actInfo
end

-- {
--   propId
--   remoteImg
--   chTitle
-- }
function GoldLaunchModule:getPropInfoByPropId(propId)
    local cfg = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    if cfg and cfg.imgs and cfg.imgs[tostring(propId)] then
        return cfg.imgs[tostring(propId)]
    end
    return nil
end

-- 领取奖励（各地区单独实现）
function GoldLaunchModule:reqGetGift()
    if self._actId == nil then
        return
    end
    local activity_id = tonumber(self._actId)
    self:startReq("ReqAcceptPresenter", activity_id)
end

function GoldLaunchModule:respAcceptPresenter(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        -- 领奖成功
        self:resetParam()
        if NG ~= nil then
            NG.goldLobby:getModule("GoldCommon"):flushPlayerProp()
        end
    end
end

function GoldLaunchModule:getScoreStr(score)
    score = tonumber(score)
    if score < 10000 then
        return score
    end
    if score < 100000000 then
        return tonumber(string.format("%.2f", self:fitNumberLen(score / 10000, 5))) .. "万"
    end
    return tonumber(string.format("%.2f", self:fitNumberLen(score / 100000000, 5))) .. "亿"
end

function GoldLaunchModule:fitNumberLen(score, len)
    local str = tostring(score)
    local nNum = 0
    local rStr = ""
    for i = 1, #str do
        local temp = string.sub(str, i, i)
        if temp == "." then
            --
        elseif tonumber(temp) >= 0 or tonumber(temp) <= 9 then
            nNum = nNum + 1
        end
        rStr = rStr .. temp
        if nNum >= len then
            return tonumber(rStr)
        end
    end
    return tonumber(rStr)
end

return GoldLaunchModule