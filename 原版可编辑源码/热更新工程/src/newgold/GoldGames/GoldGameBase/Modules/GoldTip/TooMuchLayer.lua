local TooMuchLayer = class("TooMuchLayer", NG.ViewBase)
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")

function TooMuchLayer:ctor()
    TooMuchLayer.super.ctor(self)
    self._newRoomInfo = nil
    self._lastRoomInfo = nil
end

function TooMuchLayer:getCSBPath()
    return "cocosStudio/GoldNew/Game/GameBase/CSB/GoldTip/TooMuchLayer.csb"
end

function TooMuchLayer:getBindingInfo()
    return {
        --  
        ["_KW_BTN_GO_UP"] = {varName = "_btnGoUp", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onBtnGoUpClicked"},
        ["_KW_TXT_TIP"] = {varName = "_txtTip"}
    }
end

function TooMuchLayer:initView()
    local tip = "您的欢乐豆过多"
    if self._newRoomInfo ~= nil then
        tip = string.format("您的欢乐豆过多，请前往%s游戏。", self._newRoomInfo.name)
    end
    self._txtTip:setString(tip)
end

function TooMuchLayer:onBtnGoUpClicked()
    if self._newRoomInfo ~= nil then
        if NG.goldGame.gameID == GoldAreaConfig.MAH_BBXL then
            NG.goldGame:getModule("GameMain"):reqJoinRoom(self._newRoomInfo.level)
        else
            NG.goldGame:getModule("GameMain"):reqJoinRoom(self._newRoomInfo.appId)
        end
    else
        NG.TipTool.showToast("选场异常，请尝试退出重进")
    end
    self:close()
end

function TooMuchLayer:showSelf(newRoomInfo, lastRoomInfo)
    local parent = display.getRunningScene()
    parent:addChild(self, NG.ZORDER.WINDOW)
    self._newRoomInfo = newRoomInfo
    self._lastRoomInfo = lastRoomInfo
    self:initView()
end

return TooMuchLayer
