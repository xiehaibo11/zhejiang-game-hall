local SurrenderLayer    = CF.gameClass("SurrenderLayer", CF.ViewBase)

local SURRENDER_TYPE = {surrender = 1  , buyCard = 2}

function SurrenderLayer:getCSBPath()
    return "res/cocosStudio/DaTong/GameLayer/CSB/SurrenderLayer.csb"
end

function SurrenderLayer:getBindingInfo()
    return {
        ["_KW_FRIEND_NAME"]     = {varName="_requestName"},
        ["_KW_SURRENDER_DJS"]   = {varName="_clockRoot"},
        ["_KW_TEXT_TIME"]       = {varName="_clockTip"},
        ["_KW_BTN_CLOSE"]       = {varName="_btnClose", type = CF.UI_TYPE.BUTTON, onTouchEnded="onBtnClose"},
        ["_KW_BTN_BUYCARD"]     = {varName="_btnBuyCard", type = CF.UI_TYPE.BUTTON, onTouchEnded="onBtnBuyCard"},
        ["_KW_BTN_SURRENDER"]   = {varName="_btnSurrender", type = CF.UI_TYPE.BUTTON, onTouchEnded="onBtnSurrender"},
    }
end

function SurrenderLayer:ctor(param)
    SurrenderLayer.super.ctor(self,param)
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
    self._reqNumid= param.numid 
    self._timeLimit = param.time or 0

    self:createChildren()
end

function SurrenderLayer:createChildren()
    self:startclock(self._timeLimit)
    self:initPlayersInfo()
    self._btnClose:setVisible(false)
end

function SurrenderLayer:initPlayersInfo()
    local players = CF.roomData:getPlayerDatas() 
    for _, player in pairs(players) do
        if player:getNumberID() == self._reqNumid then
            if self._requestName then
                self._requestName:setString(tostring(player:getNickName()))
            end
            break
        end
    end
end

function SurrenderLayer:setColockTime(tm)
    tm = tm or 0
    local tipStr = tm .. "秒"
    if self._clockTip then
        self._clockTip:setVisible(true)
        self._clockTip:setString(tipStr)    
    end
end

function SurrenderLayer:startclock(tm)
    tm = tm or 0
    local isHaveTimeLimit = tm > 0
    if self._clockRoot then
        self._clockRoot:setVisible(isHaveTimeLimit)
    end
    --倒计时刷新
    if isHaveTimeLimit then
        self:setColockTime(tm)
        if self._clockRoot then
            self._clockRoot:stopAllActions()
        end

        CF.UITool.createRepeateAction(self._clockRoot, 1, function()
            tm = tm -1
            if tm < 0 then
                if self._clockRoot then
                    self._clockRoot:stopAllActions()
                end
                self:removeSelf()
            else
                self:setColockTime(tm)
            end
        end)
    end
end

function SurrenderLayer:showSelf(zorder)
    local parent = display.getRunningScene()
    parent:addChild(self, CF.ZORDER.WINDOW)
    return self
end

function SurrenderLayer:onBtnClose(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:removeSelf()
end

function SurrenderLayer:onBtnBuyCard(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
   if not CF.roomData:isPlayBack() then
        CF.msgManager:sendResPonseSurrenderMsg(SURRENDER_TYPE.buyCard)
   end
   self:removeSelf()
end

function SurrenderLayer:onBtnSurrender(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if not CF.roomData:isPlayBack() then
        CF.msgManager:sendResPonseSurrenderMsg(SURRENDER_TYPE.surrender)
    end
    self:removeSelf()
end

return SurrenderLayer