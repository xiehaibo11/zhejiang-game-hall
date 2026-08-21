local ChooseRoomGuide = class("ChooseRoomGuide", XH.Bridge.ViewBase)
local LocalConfig = import("..Configs.LocalConfig")
local RemoteConfig = import("..Configs.RemoteConfig")
local Utils = import("..Tool.Utils")

function ChooseRoomGuide:getCSBPath()
    return XH.Bridge:getCCSResPath("ChooseRoomGuide.csb")
end

function ChooseRoomGuide:getBindingInfo()
    return {
        ["_btnGo"] = {varName = "_btnGo", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickGo"},
        ["_btnNext"] = {varName = "_btnNext", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickNext"},
        ["_btnClose"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickClose"},
        ["_panelGuide"] = {varName = "_panelGuide"},
    }
end

function ChooseRoomGuide:getProxyEvents()
    return {
    }
end

function ChooseRoomGuide:ctor(param)
    ChooseRoomGuide.super.ctor(self, param)
    self._chooseRoom = param.chooseRoom
    self._guideCfg = param.guideData
    self._goFunc = param.goFunc
    self:initGuide()
end

function ChooseRoomGuide:onEnter()
end

function ChooseRoomGuide:isFullScreen()
    return true
end
function ChooseRoomGuide:onClickGo(send, event)
    -- local conf = XH.Bridge:getModule("GoldNew"):getGoldRoomInfoByLeisureID(self._guideCfg.toLID)
    -- self._chooseRoom:updateUI(conf)
    if self._goFunc then
        self._goFunc()
    end
    self:close()
end

function ChooseRoomGuide:onClickNext(send, event)
    self._urlIdx = self._urlIdx + 1
    self:updateUI()
end

function ChooseRoomGuide:onClickClose(send, event)
    self:close()
end

function ChooseRoomGuide:initGuide()
    self._urlIdx = 1
    self:updateUI()
end

function ChooseRoomGuide:updateUI()
    local urls = self._guideCfg.urls
    self._btnGo:setVisible(#urls == self._urlIdx)
    self._btnNext:setVisible(#urls > self._urlIdx)
    Utils:setImgUrl(self._panelGuide, self._guideCfg.defaultUrl .. urls[self._urlIdx], true)
end

return ChooseRoomGuide
�