local TrustLayer = NG.GAME.gameClass("TrustLayer", NG.ViewBase)
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")

function TrustLayer:ctor()
    TrustLayer.super.ctor(self)

    self:initView()
end

function TrustLayer:getCSBPath()
    return "cocosStudio/GoldNew/Game/HPLandlord/CSB/GameMain/TrustLayer.csb"
end

function TrustLayer:getProxyEvents()
    return {
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_PLAYER_TRUST", callBack = "onPlayerTrust"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_ON_MSG_RESULT", callBack = "onGameResult"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_PLAYER_CONNECT_FAILED", callBack = "onMsgConnectEnd"},
    }
end

function TrustLayer:getBindingInfo()
    return {
        ["_KW_PANEL_BG"] = {varName = "_bgPanel"},
        ["_KW_BTN_CANCEL_TRUST"] = {varName = "_trustBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickCancelTrust"},
    }
end

function TrustLayer:initView()
    
end

function TrustLayer:onMsgConnectEnd()
    self:close()
end

function TrustLayer:onClickCancelTrust()
    NG.msgManager:sendMsgTrust(false)
end

function TrustLayer:onPlayerTrust(event)
    local gameData = NG.goldGame:getModule("GameMain"):getData()
    local isTrust = gameData:getTrustByLocalSeat(event.msg.localSeat)
    if event.msg.localSeat == GameMainDefine.SELF_LOCAL_SEAT and not isTrust then
        self:close()
    end
end

function TrustLayer:onGameResult()
    self:close()
end

function TrustLayer:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, NG.ZORDER.WINDOW)
end

return TrustLayer�