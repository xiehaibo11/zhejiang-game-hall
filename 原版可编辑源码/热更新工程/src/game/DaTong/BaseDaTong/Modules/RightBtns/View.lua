local RightBtnsView = CF.gameClass("RightBtnsView", "game.GameBase.Modules.RightBtns.View")

function RightBtnsView:getBindingInfo()
    local uiList = RightBtnsView.super.getBindingInfo(self)
    uiList["_KW_LEFT_BTN_SPEAK"] = {varName = "_leftSpeakBtn", type = CF.UI_TYPE.BUTTON, onTouch = "onSpeakBtnClicked"}
    return uiList
end

function RightBtnsView:getProxyEvents()
    local proxyEvents = RightBtnsView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.roomData, eventKeyName = "EVENT_GAME_UPDATE_SEER", callBack = "onUpdateBtnVisible"}
    return proxyEvents
end

function RightBtnsView:onUpdateBtnVisible()
    self._msgBtn:setVisible(not CF.roomData:getIsSeer())
    if self._leftSpeakBtn then
        self._leftSpeakBtn:setVisible(not CF.roomData:getIsSeer())
    end
end

function RightBtnsView:getAdaptationConfig()
    local uiList = RightBtnsView.super.getAdaptationConfig(self)
    uiList[#uiList+1] = {node = self._speakBtn, bRight = false, bHalf = false}
    return uiList
end

function RightBtnsView:getAdaptationConfig()
    local uiList = RightBtnsView.super.getAdaptationConfig(self)
    uiList[#uiList+1] = {node = self._leftSpeakBtn, bRight = false, bHalf = false}
    return uiList
end

function RightBtnsView:updateSpeakBtn()
    if self._speakBtn then
        self._speakBtn:setVisible(false)
    end

    if self._leftSpeakBtn then
        self._leftSpeakBtn:setVisible(self:isShowSpeakBtn())
    end
end

function RightBtnsView:isShowSpeakBtn()
    local isShow = RightBtnsView.super.isShowSpeakBtn(self)
    if CF.roomData:isPlayBack() then
        isShow = false
    end
    return isShow
end

function RightBtnsView:updateMsgBtn()
    RightBtnsView.super.updateMsgBtn(self)
    if self._msgBtn then
        self._msgBtn:setPositionY(self._msgBtn:getPositionY() - 60)
    end
end

--just for test
--[[
function RightBtnsView:onSpeakBtnClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    -- CF.game:getModule("WinLost"):testWinlost()
    -- CF.game:getModule("BigWinLost"):testWinlost()
    -- local shuffleList = {}
    -- local KW_TMP_THESAURUS = {"金主", "豪门", "富豪", "贵族", "财主"}
    -- for i = 0 , CF.roomData:getMaxPlayer() - 1 do
    --         local shufferText = string.format("%s玩家%s，正在洗牌...", KW_TMP_THESAURUS[math.random(1, #KW_TMP_THESAURUS)], "name_"..i)
    --         table.insert(shuffleList,shufferText)
    -- end
    -- if #shuffleList > 0 then
    --     if tolua.isnull(self._shuffleAniLayer) then
    --         self._shuffleAniLayer = CF.gameRequire("Modules.PropUse.ShuffleView").new()
    --         self._shuffleAniLayer:showSelf()
    --         self._shuffleAniLayer:showShuffleList(shuffleList)
    --     else
    --         self._shuffleAniLayer:showShuffleList(shuffleList)
    --     end
    -- end
    CF.game:getModule("GameLayer"):dispatchEvent(
            {
                name = "EVENT_SHOW_CARDTYPE_SELECT",
                msg = {
                    cardIDs = {3,4},
                    cardTypeArr = {{type=401,jokerReplaceData={}},{type=202,jokerReplaceData={}}}
                }
            }
        )
end
]]
return RightBtnsView