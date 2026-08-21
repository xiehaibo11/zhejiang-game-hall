local UIWinLost = class("UIWinLost") 
local CURRENT_MODULE_NAME = ...
local PathKeyWord = import("..Config.PathKeyWord",CURRENT_MODULE_NAME)
local GameSceneDefine = import("..GameScene.GameSceneDefine",CURRENT_MODULE_NAME)
local KW_UI_WIN_LOST_CSB_PATH = GameSceneDefine.KW_GAME_CSB_PATH .. "GameWinLost.csb"
local KW_PATH_RESOUCE_FONT = "LiangBang/LiangBang/Fonts"
local KW_NUM_MIN_XIANGFAN = 4 

local KW_ROOT_LAYER = "KW_ROOT_LAYER"

local KW_BTN_GO_ON = "KW_BTN_GO_ON"

local KW_TEXT_PLAYER_WINLOST = "KW_TEXT_PLAYER_WINLOST"
local KW_TEXT_MUT = "KW_TEXT_MUT"
local KW_TEXT_MUT_BACK = "KW_TEXT_MUT_BACK"
local KW_TEXT_XIANG = "KW_TEXT_XIANG"
local KW_TEXT_XIANG_BACK = "KW_TEXT_XIANG_BACK"
local KW_TEXT_PLAYER_NAME_ = "KW_TEXT_PLAYER_NAME_"
local KW_TEXT_TIME = "KW_TEXT_TIME"
local KW_TEXT_BREAK = "KW_TEXT_BREAK"

local KW_UI_END_STYLE = "KW_UI_END_STYLE"
local KW_UI_PLAYER_WINLOST_BG_ = "KW_UI_PLAYER_WINLOST_BG_"
local KW_UI_WINLOST_BG = "KW_UI_WINLOST_BG"
local KW_UI_END_STYLE = "KW_UI_END_STYLE"
local KW_UI_END = "KW_UI_END"
local KW_UI_BREAK = "KW_UI_BREAK"

local KW_POS_END_LIGHT_ANI = "KW_POS_END_LIGHT_ANI"
local KW_POS_END_STYLE_FROM = "KW_POS_END_STYLE_FROM"
local KW_POS_END_STYLE_TO = "KW_POS_END_STYLE_TO"

-- 图片
local KW_WIN_BG_PNG = "fan_number_win.png"
local KW_LOST_BG_PNG = "fan_number_lost.png"
local KW_PLAYER_LOST_BG_PNG = "jifen_bg_lost.png"
local KW_PLAYER_WIN_BG_PNG = "jifen_bg_win.png"

--字体
local KW_LOST_TEXT_FNT = "end_jifen_lost-export.fnt"
local KW_WIN_TEXT_FNT = "end_jifen_win-export.fnt"

 
local ENUM_WINLOST_ENDTYPE = {
    KW_ENDTYPE_TAOPAO = 1,
    KW_ENDTYPE_CHAODI = 2,
    KW_ENDTYPE_PINGKOU = 3,
    KW_ENDTYPE_DANKOU = 4,
    KW_ENDTYPE_SHUANGKOU = 5,
}
local ENUM_WINLOST_ENDTYPE_PNG = {
    KW_ENDTYPE_TAOPAO = "end_title_taopao.png",
    KW_ENDTYPE_CHAODI = "end_title_chaodi.png",
    KW_ENDTYPE_PINGKOU = "end_title_pingkou.png",
    KW_ENDTYPE_DANKOU = "end_title_dankou.png",
    KW_ENDTYPE_SHUANGKOU = "end_title_shuangkou.png",
}
local ENUM_WIN_ORDER_TYPE = {
    KW_ENDTYPE_PINGKOU = {1,0},
    KW_ENDTYPE_DANKOU = {1,3},
    KW_ENDTYPE_SHUANGKOU = {1,2}
}

function UIWinLost:ctor()
    self._rootNode = nil
    self._playerCount = 4
    self._uiEndInfo = {}
    self._playerName = {}
    self._sWinMut = 0 
    self._sCaiXiang = {}
    self._iNoOutZhaDan = false
    self._iCaiXiang = false
    self._sEscapeSeat = 0 
    self._sEndType = 0 
    self._sChaoDiSeat = 0 
    self._sWinOrder = {}
    self._gameID = 0
end

function UIWinLost:init(node,playCount,gameID)
    if playCount then 
        self._playerCount = playCount
    end
    if gameID then
        self._gameID = gameID
    end

    local csbNode = cc.CSLoader:createNode(KW_UI_WIN_LOST_CSB_PATH)
    self._rootNode = csbNode:getChildByName(KW_ROOT_LAYER)
    if self._rootNode == nil then
        return
    end
    self._rootNode:removeFromParent(false)
    node:addChild(self._rootNode)
    
    Game.UIFunction.addTouchEventListenerByObj(self._rootNode,KW_BTN_GO_ON,self,self.onBtnEventContinue)

    for seat = 0 , Game.FrameworkFunction.getMaxPlayer() - 1 do 
        local localSeat = Game.FrameworkFunction.seatToLocal(seat)
        self._uiEndInfo[localSeat] = ccui.Helper:seekWidgetByName(self._rootNode,KW_UI_PLAYER_WINLOST_BG_ .. localSeat)
    end

end

function UIWinLost:onBtnEventContinue(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:onBtnEventClose(send,eventType)
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("UIWinLost.ContinueGame")
    eventDispatcher:dispatchEvent(event)
    Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DOUBLE_BUCKLE_WIN_LOST_CONTINUE + self._gameID * 100)
end

function UIWinLost:showWinLostPanel(render)
    if self._rootNode then
        self._rootNode:setVisible(render)
        if render then 
            Game.UIFunction.playCsbFrameAni(self._rootNode,"KW_ROOT_LAYER",KW_UI_WIN_LOST_CSB_PATH,0,56,false)
            Game.GameSound.playSoundEnd()
        end
        self:showClock(30,false)
    end
    self._iCaiXiang = false
    self._iNoOutZhaDan = false
end

function UIWinLost:onBtnEventClose(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:showWinLostPanel(false)
    Game.UIFunction.loadTexture(self._rootNode, KW_UI_WINLOST_BG, KW_LOST_BG_PNG,ccui.TextureResType.plistType)
    for seat = 1 ,Game.FrameworkFunction.getMaxPlayer()  do
        if self._uiEndInfo[seat] then 
            self._uiEndInfo[seat]:loadTexture(KW_PLAYER_LOST_BG_PNG,ccui.TextureResType.plistType)
            Game.UIFunction.setFntFile(self._uiEndInfo[seat],KW_TEXT_PLAYER_WINLOST,KW_PATH_RESOUCE_FONT ..  "/" .. KW_LOST_TEXT_FNT)
            Game.UIFunction.setText(self._uiEndInfo[seat],KW_TEXT_PLAYER_WINLOST,0)
            Game.UIFunction.setText(self._rootNode,KW_TEXT_MUT ,0) 
        end
    end
    for i = 1 , 2 do 
        Game.UIFunction.setText(self._rootNode,KW_TEXT_PLAYER_NAME_ .. i ,"")
        Game.UIFunction.setVisible(self._rootNode,KW_TEXT_PLAYER_NAME_ .. i ,false) 
    end 
    Game.UIFunction.setVisible(self._rootNode,KW_UI_END ,true) 
    Game.UIFunction.setVisible(self._rootNode,KW_UI_BREAK ,false) 
    Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DOUBLE_BUCKLE_WIN_LOST_CLOSE + self._gameID * 100)
end


--
function UIWinLost:setPlayerName(seat,strName)
    local localSeat = Game.FrameworkFunction.seatToLocal(seat)
    self._playerName[localSeat] = strName
end 

function UIWinLost:setPlayerScore(score)
    for seat = 0 , #score do 
        local playerScore = score[seat]
        local localSeat = Game.FrameworkFunction.seatToLocal(seat)
        if self._uiEndInfo[localSeat] then 
            Game.UIFunction.setText(self._uiEndInfo[localSeat],KW_TEXT_PLAYER_WINLOST,playerScore)
            Game.UIFunction.setVisible(self._uiEndInfo[localSeat],KW_UI_PLAYER_WINLOST_BG_ .. localSeat ,true)
            if playerScore > 0 then 
                if seat == Game.FrameworkFunction.getSelfSeat() then 
                    Game.UIFunction.loadTexture(self._rootNode, KW_UI_WINLOST_BG, KW_WIN_BG_PNG,ccui.TextureResType.plistType)
                end
                Game.UIFunction.setText(self._uiEndInfo[localSeat],KW_TEXT_PLAYER_WINLOST,"+" .. playerScore)
                self._uiEndInfo[localSeat]:loadTexture(KW_PLAYER_WIN_BG_PNG,ccui.TextureResType.plistType)
                Game.UIFunction.setFntFile(self._uiEndInfo[localSeat],KW_TEXT_PLAYER_WINLOST,KW_PATH_RESOUCE_FONT .. "/" .. KW_WIN_TEXT_FNT)
            else 
                Game.UIFunction.setText(self._uiEndInfo[localSeat],KW_TEXT_PLAYER_WINLOST,playerScore)
                self._uiEndInfo[localSeat]:loadTexture(KW_PLAYER_LOST_BG_PNG,ccui.TextureResType.plistType)
                Game.UIFunction.setFntFile(self._uiEndInfo[localSeat],KW_TEXT_PLAYER_WINLOST,KW_PATH_RESOUCE_FONT ..  "/" .. KW_LOST_TEXT_FNT)
            end
        end
    end
end 

function UIWinLost:setCaiXiangScore(ibool,score)
    self._iCaiXiang = ibool
    self._iNoOutZhaDan = true
    self._sCaiXiang  = score
end 

function UIWinLost:setWinMut(sWinMut)
    local scaixiang=clone(self._sCaiXiang)
    if self._iCaiXiang then
        Game.UIFunction.setVisible(self._rootNode,KW_TEXT_MUT ,false)
        Game.UIFunction.setVisible(self._rootNode,KW_TEXT_MUT_BACK ,false)
        Game.UIFunction.setVisible(self._rootNode,KW_TEXT_XIANG ,true)
        Game.UIFunction.setVisible(self._rootNode,KW_TEXT_XIANG_BACK ,true)
        local seat = Game.FrameworkFunction.getSelfSeat()
        local nSeat = (seat+2)%4
        local caixiang = scaixiang[seat]-scaixiang[nSeat]
        if caixiang>0 then
            Game.UIFunction.setText(self._rootNode,KW_TEXT_XIANG ,"+"..caixiang)
        else
            Game.UIFunction.setText(self._rootNode,KW_TEXT_XIANG ,caixiang)
        end  
    else
        self._sWinMut = sWinMut
        Game.UIFunction.setVisible(self._rootNode,KW_TEXT_MUT ,true)
        Game.UIFunction.setVisible(self._rootNode,KW_TEXT_MUT_BACK ,true)
        Game.UIFunction.setVisible(self._rootNode,KW_TEXT_XIANG ,false)
        Game.UIFunction.setVisible(self._rootNode,KW_TEXT_XIANG_BACK ,false)
        if self._sWinMut >= KW_NUM_MIN_XIANGFAN then 
            Game.UIFunction.setText(self._rootNode,KW_TEXT_MUT ,self._sWinMut)
        else 
            Game.UIFunction.setText(self._rootNode,KW_TEXT_MUT ,0) 
        end	
    end
end 

function UIWinLost:setEndType(sEndType)
    self._sEndType = sEndType
    for key,type in pairs(ENUM_WINLOST_ENDTYPE)do
        if self._sEndType == type then 
            Game.UIFunction.loadTexture(self._rootNode, KW_UI_END_STYLE , ENUM_WINLOST_ENDTYPE_PNG[key] ,ccui.TextureResType.plistType) 
            if self._sEndType == ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_TAOPAO or self._sEndType == ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_CHAODI then 
                Game.UIFunction.setVisible(self._rootNode,KW_UI_END ,false)
                Game.UIFunction.setVisible(self._rootNode,KW_UI_BREAK ,true)
            end
            break
        end
    end
end 

function UIWinLost:setEscapeSeat(seat)
    if self._sEndType == ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_TAOPAO then 
        local localSeat = Game.FrameworkFunction.seatToLocal(seat)
        Game.UIFunction.setText(self._rootNode,KW_TEXT_BREAK ,self._playerName[localSeat] .. "逃跑")
    end
end 

function UIWinLost:setChaoDiSeat(seat)
    if self._sEndType == ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_CHAODI then 
        local localSeat = Game.FrameworkFunction.seatToLocal(seat)
        Game.UIFunction.setText(self._rootNode,KW_TEXT_BREAK ,self._playerName[localSeat] .. "抄底")
    end
end 

function UIWinLost:setWinOrder(sWinOrder)
    self._sWinOrder = sWinOrder
    local winOrder = {}

    if self._sEndType == ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_PINGKOU then 
        winOrder = self:getWinSeat(ENUM_WIN_ORDER_TYPE.KW_ENDTYPE_PINGKOU)
    elseif self._sEndType == ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_DANKOU then 
        winOrder = self:getWinSeat(ENUM_WIN_ORDER_TYPE.KW_ENDTYPE_DANKOU)
    elseif self._sEndType == ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_SHUANGKOU then 
        winOrder = self:getWinSeat(ENUM_WIN_ORDER_TYPE.KW_ENDTYPE_SHUANGKOU)
    else 
        return 
    end
    local caixiang=clone(self._sCaiXiang)
    if self._iCaiXiang then
        local seat = Game.FrameworkFunction.getSelfSeat()
        local nseat = (seat+2)%4
        for i = 1 , 2 do 
            if i==1 then
                local localSeat = Game.FrameworkFunction.seatToLocal(seat)
                Game.UIFunction.setText(self._rootNode,KW_TEXT_PLAYER_NAME_ .. i ,self._playerName[localSeat])
                Game.UIFunction.setVisible(self._rootNode,KW_TEXT_PLAYER_NAME_ .. i ,true)
            else
                local localSeat = Game.FrameworkFunction.seatToLocal(nseat)
                Game.UIFunction.setText(self._rootNode,KW_TEXT_PLAYER_NAME_ .. i ,self._playerName[localSeat])
                Game.UIFunction.setVisible(self._rootNode,KW_TEXT_PLAYER_NAME_ .. i ,true)
            end
        end
    else
        for i = 1 , #winOrder do 
            local seat = winOrder[i]
            local localSeat = Game.FrameworkFunction.seatToLocal(seat)
            Game.UIFunction.setText(self._rootNode,KW_TEXT_PLAYER_NAME_ .. i ,self._playerName[localSeat])
            Game.UIFunction.setVisible(self._rootNode,KW_TEXT_PLAYER_NAME_ .. i ,true)
        end
    end  
end 

function UIWinLost:getWinSeat(orderType)
    local winOrder = {}
    for i = 1 , #orderType do 
        winOrder[#winOrder + 1] =  self:findOrderSeat(orderType[i])
    end
    return winOrder
end
function UIWinLost:findOrderSeat(order)
    for i = 0,#self._sWinOrder do
        if self._sWinOrder[i] == order then
            return i
        end
    end
    return nil
end
--function UIWinLost:setXianShu(seat,Xian)
--    
--end 

--  

function UIWinLost:setContinueBtnState(state)
    Game.UIFunction.setButtonState(self._rootNode,KW_BTN_GO_ON,state)
end

--继续按钮隐藏
function UIWinLost:showContinueBtn(flag)
    Game.UIFunction.setVisible(self._rootNode,KW_BTN_GO_ON,flag)
end

function UIWinLost:showClock(time,render)   
    local uiClock = ccui.Helper:seekWidgetByName(self._rootNode,KW_TEXT_TIME)
    if uiClock then
        uiClock:setString(string.format("%02d",tonumber(time)))
        uiClock:setVisible(render)
        local nTime = tonumber(time)
        uiClock:stopAllActions()
        if render == true then
            uiClock:runAction(cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(1),
                cc.CallFunc:create(function()
                    nTime = nTime - 1
                    if nTime >= 0 then
                        local strTime = string.format("%02d",tonumber(nTime))
                        uiClock:setString(strTime)
                    end
                end))))
        end
    end
    
end

function UIWinLost:clearWinLostPanelUI()
    for seat = 0,self._playerCount - 1 do
        Game.UIFunction.setText(self._uiEndInfo[seat + 1],KW_TEXT_GAME_MAX_FAN,"")
        Game.UIFunction.setText(self._uiEndInfo[seat + 1],KW_TEXT_EXT_INFO,"")
        Game.UIFunction.setVisible(self._uiEndInfo[seat + 1],KW_TEXT_FAN_NUM,false)
        Game.UIFunction.setVisible(self._uiEndInfo[seat + 1],KW_TEXT_HU_FAN_TYPE,false)
        Game.UIFunction.setVisible(self._uiEndInfo[seat + 1],KW_PANEL_BET_MAH,false)
        Game.UIFunction.setVisible(self._uiEndInfo[seat + 1],KW_UI_WIND,false)
    end
end

function UIWinLost:getINoOutZhaDan()
    return self._iNoOutZhaDan
end

return UIWinLost�6