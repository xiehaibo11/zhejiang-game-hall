local NotEnoughLayer = class("NotEnoughLayer", NG.ViewBase)
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")

function NotEnoughLayer:ctor()
    NotEnoughLayer.super.ctor(self)
    self._newRoomInfo = nil
    self._lastRoomInfo = nil
end

function NotEnoughLayer:getCSBPath()
    return "cocosStudio/GoldNew/Game/GameBase/CSB/GoldTip/NotEnoughLayer.csb"
end

function NotEnoughLayer:getBindingInfo()
    return {
        --  
        ["_KW_BTN_GO_DOWN"] = { varName = "_btnGoDown", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onBtnGoDownClicked" },
        ["_KW_BTN_BUY_GOLD"] = { varName = "_btnBuyGold", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onBtnBuyGoldClicked" },
        ["_KW_TXT_LIMIT"] = { varName = "_txtLimit" }
    }
end

function NotEnoughLayer:initView()
    if self._lastRoomInfo ~= nil then
        self._txtLimit:setString(self._lastRoomInfo.minscore .. "欢乐豆")
    end
    if self._newRoomInfo == nil then
        self._btnGoDown:setVisible(false)
        self._btnBuyGold:setPositionX(380)
    else
        self._btnGoDown:setVisible(true)
        self._btnBuyGold:setPositionX(500)
    end
end

function NotEnoughLayer:onBtnGoDownClicked()
    if NG.goldGame.gameID == GoldAreaConfig.MAH_BBXL then
        NG.goldGame:getModule("GameMain"):reqJoinRoom(self._newRoomInfo.level)
    else
        NG.goldGame:getModule("GameMain"):reqJoinRoom(self._newRoomInfo.appId)
    end
    self:close()
end

function NotEnoughLayer:onBtnBuyGoldClicked()
    NG.viewManager:openView("NewGold_StoreView", nil, { productType = 1 })
    self:close()
end

function NotEnoughLayer:showSelf(newRoomInfo, lastRoomInfo)
    local parent = display.getRunningScene()
    parent:addChild(self, NG.ZORDER.WINDOW)
    self._newRoomInfo = newRoomInfo
    self._lastRoomInfo = lastRoomInfo
    self:initView()
end

return NotEnoughLayer