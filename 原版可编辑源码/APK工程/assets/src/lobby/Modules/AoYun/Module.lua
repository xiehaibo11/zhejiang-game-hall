local AoYunModule = class("AoYunModule", XH.ModuleBase)
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
local LobbyConfig = require("lobby.Modules.Lobby.Config")

AoYunModule.flushNormalInfo = "flushNormalInfo"
AoYunModule.flushUserInfo = "flushUserInfo"
AoYunModule.EVENT_NUIAddLobbyIcon = "EVENT_NUIAddLobbyIcon"

function AoYunModule:ctor()
    AoYunModule.super.ctor(self)
    self._act = nil
    self._userInfo = nil
    self._normalInfo = nil
end

function AoYunModule:getReqConfig()
    return {
        CellActDetailRequest = { reqPath = "lobby.Req.LuckTask.ReqActDetail", callBack = self.respActDetail },
        CellAoYunInfo = { reqPath = "lobby.Req.LuckTask.ReqAoYunInfo", callBack = self.respUserInfo },
        CellAoYunSubmit = { reqPath = "lobby.Req.LuckTask.ReqAoYunInfo", callBack = self.respSubmit },
        CellAoYunAward = { reqPath = "lobby.Req.LuckTask.ReqAoYunInfo", callBack = self.respAward },
    }
end

function AoYunModule:setActivityInfo(info)
    self._act = info
    if info then
        local time = self:getServerTime()
        if time < tonumber(info.offline) and time > tonumber(info.online) then
            self:setActivityId(info.aid)
        else
            self:setActivityId()
        end
    else
        self:setActivityId()
    end
end

function AoYunModule:setActivityId(actId)
    self._actId = actId
    -- 刷新icon显示
    self:isShowIcon()
end

function AoYunModule:getUserInfo()
    return self._userInfo
end

function AoYunModule:getNormalInfo()
    return self._normalInfo
end

-- 请求活动规则详情
function AoYunModule:reqActDetail()
    if not self._actId then
        return
    end
    self:startReq("CellActDetailRequest", self._actId, 10)
end

function AoYunModule:respActDetail(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._normalInfo = data
        self:dispatchEvent({ name = AoYunModule.flushNormalInfo, data = {} })
    end
end

-- 请求活动个人信息
function AoYunModule:reqUserInfo()
    if not self._actId then
        return
    end
    XH.TipTool.showLoading()
    self:startReq("CellAoYunInfo", self._actId, 0, 0, 10)
end

function AoYunModule:respUserInfo(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self._userInfo = data
        self:dispatchEvent({ name = AoYunModule.flushUserInfo, data = {} })
    else
        XH.TipTool.showToast("请求用户信息失败，请重新打开页面重试")
    end
end

-- 提交数量
function AoYunModule:reqSubmit(id)
    if not self._actId then
        return
    end
    XH.TipTool.showLoading()
    self:startReq("CellAoYunSubmit", self._actId, 1, id, 10)
end

function AoYunModule:respSubmit(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        XH.TipTool.showToast("提交成功~")
        self:reqUserInfo()
    else
        XH.TipTool.showToast("提交失败，请重试")
    end
end

-- 领奖
function AoYunModule:reqAward()
    if not self._actId then
        return
    end
    XH.TipTool.showLoading()
    self:startReq("CellAoYunAward", self._actId, 2, 0, 10)
end

function AoYunModule:respAward(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        local awardInfo = {}
        awardInfo.prize_names = {}
        awardInfo.image_urls = {}
        awardInfo.prize_names[#awardInfo.prize_names + 1] = "x" .. data.act.showAward
        awardInfo.image_urls[#awardInfo.image_urls + 1] = "http://palmastatic.wenzhoushuke.com/materials/images/20240605/10364986837.png"
        XH.viewManager:openView("BackActivityAwardView", nil, nil, awardInfo)
        self:reqUserInfo()
        XH.playerData:flushPlayerDrop()
    else
        XH.TipTool.showToast("领奖失败，请重试")
    end
end

-- 奥运结束 都是灰置提交阶段
function AoYunModule:isGraySubButton()
    return self:isOffLineAct()
end

function AoYunModule:getServerTime()
    local time = XH.lobby:getModule("Shop"):getServerTime()
    local DEBUG = require("app.Config.GlobalConfig").IsDebug -- 灰度
    if DEBUG then
        time = os.time()
    end
    return time
end

function AoYunModule:isOffLineAct()
    if not self._act then
        return false
    end
    local now = self:getServerTime()
    if now > tonumber(self._act["end"]) then
        return true
    end
    return false
end

-- 奥运未开始，文案显示不同
function AoYunModule:isOnlineAct()
    if not self._act then
        return true
    end
    local now = self:getServerTime()
    if now < tonumber(self._act.start) then
        return true
    end
    return false
end

-- 是否显示ICON
function AoYunModule:isShowIcon()
    local isShow = self._actId ~= nil
    -- 刷新icon显示
    self:dispatchEvent({ name = AoYunModule.EVENT_NUIAddLobbyIcon, data = { icon = LobbyConfig.ICON_ID.AOYUN_ACT, isShow = isShow } })
    if isShow then
        local hallTiems = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_AOYUN_ACT_VIEW, 0)
        if hallTiems < 1 then
            XH.viewManager:openView("AoYunView")
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_AOYUN_ACT_VIEW, hallTiems + 1)
        end
    end
    return isShow
end

return AoYunModule