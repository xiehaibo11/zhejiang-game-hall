local NewPlayTypeDelAutoModeTips = class("NewPlayTypeDelAutoModeTips", XH.ViewBase)
local GameNewTypeConfiger = require("app.Config.Parse.GameNewTypeConfiger")

local KW_CONTENT_LINES = 3
local KW_CONTENT_STR = {
    [1] = {
        "保留【%s】固定玩法",
        "可领取%d房卡奖励",
        "房卡奖励领取后，该固定玩法会保留3天"
    },
    [2] = {
        "已领取创建奖励，桌子需要保留3天哦",
        "推广【%s】玩法消耗可提升2.5倍",
        "%02d:%02d后可操作"
    },
    [3] = {
        "若桌子删除，后续对局奖励将无法领取",
        "建议不要删除哦",
        ""
    }
}

function NewPlayTypeDelAutoModeTips:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/NewPlayType/NewPlayTypeDelModeTips.csb"
end

function NewPlayTypeDelAutoModeTips:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_TXT_CONTENT_"] = { varName = "_content", beginIndex = 1, endIndex = 4 },
        ["_KW_BTN_DELETE"] = { varName = "_btnDel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventDel" },
        ["_KW_BTN_GET"] = { varName = "_btnGetAward", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventGetAward" },
        ["_KW_BTN_OK"] = { varName = "_btnOk", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_SAVE"] = { varName = "_btnSave", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },

    }
end

function NewPlayTypeDelAutoModeTips:ctor(param)
    param = param or {}
    NewPlayTypeDelAutoModeTips.super.ctor(self, param)

    self._type = param.tipsType
    self._playModeId = param.playModeId
    self._remainTime = param.remainTime
    self:initUI()
end

function NewPlayTypeDelAutoModeTips:initUI()
    if self._type == XH.lobby:getModule("NewPlayType").DEL_AUTO_MODE_TIPS_TYPE.NOTGET then
        self:initNotGetUI()
    elseif self._type == XH.lobby:getModule("NewPlayType").DEL_AUTO_MODE_TIPS_TYPE.GETEDAWARDNOTTIMEOUT then
        self:initGetAwardNotTimeoutUI()
    elseif self._type == XH.lobby:getModule("NewPlayType").DEL_AUTO_MODE_TIPS_TYPE.GETEDAWARDTIMEOUT then
        self:initGetAwardTimeoutUI()
    end
end

function NewPlayTypeDelAutoModeTips:initNotGetUI()
    self:initContentByType()
    if self._btnDel and self._btnGetAward then
        self._btnDel:setVisible(true)
        self._btnGetAward:setVisible(true)
    end
end

function NewPlayTypeDelAutoModeTips:initGetAwardNotTimeoutUI()
    self:initContentByType()
    if self._btnOk then
        self._btnOk:setVisible(true)
    end
end

function NewPlayTypeDelAutoModeTips:initGetAwardTimeoutUI()
    self:initContentByType()
    if self._btnDel and self._btnSave then
        self._btnDel:setVisible(true)
        self._btnSave:setVisible(true)
    end
end

function NewPlayTypeDelAutoModeTips:onTouchEventClose(send, eventType)
    self:close()
end

function NewPlayTypeDelAutoModeTips:onTouchEventDel(send, eventType)
    if self._playModeId then
        XH.teaHouseManager:deletePlayModeEx(self._playModeId)
    end
    self:close()
end

function NewPlayTypeDelAutoModeTips:onTouchEventGetAward(send, eventType)
    XH.lobby:getModule("NewPlayType"):getGreetPrize()
    self:close()
end

function NewPlayTypeDelAutoModeTips:initContentByType()
    if not self._type or not KW_CONTENT_STR[self._type] then
        return
    end
    for i = 1, KW_CONTENT_LINES do
        if self["_content" .. i] then
            self["_content" .. i]:setString(KW_CONTENT_STR[self._type][i])
        end
    end
    local greetInfo = XH.lobby:getModule("NewPlayType"):getGreetInfo()
    if greetInfo and greetInfo.greet_prize and self._type == XH.lobby:getModule("NewPlayType").DEL_AUTO_MODE_TIPS_TYPE.NOTGET then
        local str = self["_content" .. 2]:getString()
        self["_content" .. 2]:setString(string.format(str, greetInfo.greet_prize))
    end
    local autoPlayModeInfos = GameNewTypeConfiger:getAutoCreatePlayModeInfoByLobbyID(XH.areaData:getLobbyID())
    if autoPlayModeInfos and autoPlayModeInfos.gameName then
        if self._remainTime then
            local str = self["_content" .. 2]:getString()
            self["_content" .. 2]:setString(string.format(str, autoPlayModeInfos.gameName))
            str = self["_content" .. 3]:getString()
            local hour = math.floor(self._remainTime / 3600)
            local minute = math.ceil((self._remainTime - hour * 3600) / 60)
            self["_content" .. 3]:setString(string.format(str, hour, minute))
        else
            local str = self["_content" .. 1]:getString()
            self["_content" .. 1]:setString(string.format(str, autoPlayModeInfos.gameName))
        end
    end
end

return NewPlayTypeDelAutoModeTipsK