local ReadyTipModule = CF.gameClass("ReadyTipModule", CF.ModuleBase)
ReadyTipModule.EVENT_SHOW_FINGER = "EVENT_SHOW_FINGER"

ReadyTipModule.SHOWTEXT_1 = {"好友还在等你哟,快点开始对局吧~"}

ReadyTipModule.SHOWTEXT_2 = { 
    "好友还在查看战绩，请耐心等待哦~",
    "可向好友发送互动道具，催促好友~",
    "点击“俏皮话”提醒好友开始下一局啦~"
}

ReadyTipModule.SHOWTYPE = {
    NONE = 0,
    ONE = 1,        --单行文字,类似只显示一句话
    MORE = 2,       --多行随机文字
}

function ReadyTipModule:getSubXYDealList()
    return {
        {callback = handler(self,self.onMsgResult),msgClass = CF.GameProtocol.msgResult},        --麻将   --红十
        {callback = handler(self,self.onMsgResult), msgClass = CF.GameProtocol.msgEndInfo},      --舟山地区
        {callback = handler(self, self.onMsgResult), msgClass = CF.GameProtocol.msgWinLostDT},   --打通
        {callback = handler(self, self.onMsgResult), msgClass = CF.GameProtocol.msgWinLost},     --双扣 --斗地主 --关牌
        {callback = handler(self, self.onMsgResult), msgClass = CF.GameProtocol.msgResultInfo},  --绍兴地区
        {callback = handler(self, self.onMsgResult), msgClass = CF.GameProtocol.msgEndDetail},   --嵊州地区

        -- {callback = handler(self,self.onMsgStart),msgClass = CF.GameProtocol.msgGameRuleUser},  --牌类游戏开始
        -- {callback = handler(self,self.onMsgStart),msgClass = CF.GameProtocol.msgStartGame},     --麻将游戏开始
    }
end

-- --游戏开始处理   下周优化
-- function ReadyTipModule:onMsgStart()
--     CF.TipTool.clearScrollTip()
--     self:showReadyTip()
-- end

--小结束页面处理
function ReadyTipModule:onMsgResult()
    self:showReadyTip()
end

function ReadyTipModule:showReadyTip()
    if CF.roomData:isGoldRoom() or self:isShowBigWinLost() then
        return
    end
    if CF.roomData:getPlayCount() == 0 then 
        return 
    end
    --争对丽水区的麻将游戏特殊处理
    if CF.areaData:getLobbyID() == CF.LOBBY_ID.LISHUI and CF.gameSub:isMahjong(CF.roomData:getGameID()) then 
        return
    end
    local delayFunction = function(delayTime)
        if self._delayFuncListener ~= nil then
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._delayFuncListener)
        end
        self._delayFuncListener = cc.Director:getInstance():getScheduler():scheduleScriptFunc( function()
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._delayFuncListener)
            self:isShowReady()
        end , delayTime, false)
    end
    local delayTime = 5
    delayFunction(delayTime)
end


function ReadyTipModule:isShowReady()
    if not CF.roomData then
        return 
    end
    local scene = display.getRunningScene()
    local node = scene:getChildByName("ScrollTipLayer")
    if node then
        return
    end
    if CF.roomData:getIsGameOver() then
        return
    end
    local selfPlayerData = CF.roomData:getSelfPlayerData()
    if not selfPlayerData then 
        return
    end
    if selfPlayerData:getStateEx() == selfPlayerData.USER_STATEEX.psPlaying then
        return
    end
    if selfPlayerData:getStateEx() ~= selfPlayerData.USER_STATEEX.psReady then
        CF.TipTool.showScrollTip(self.SHOWTYPE.ONE,self.SHOWTEXT_1)
        self:updateReadyTipPos()
        self:dispatchEvent({name = ReadyTipModule.EVENT_SHOW_FINGER})
    end
    if selfPlayerData:getStateEx() == selfPlayerData.USER_STATEEX.psReady then
         CF.TipTool.showScrollTip(self.SHOWTYPE.MORE,self.SHOWTEXT_2)
    end
end

function ReadyTipModule:isShowBigWinLost()
    if CF.roomData then 
        return CF.roomData:getIsGameOver()
    end
end

--针对在小结束页面中的TIP改变位置
function ReadyTipModule:updateReadyTipPos()
    local scene = display.getRunningScene()
    local node = scene:getChildByName("ScrollTipLayer")
    local settle = scene:getChildByName("MahWinLostView")
    if node and not settle then
        local x = node:getPositionX()
        local y = node:getPositionY() + 265
        node:move(x,y)
    end
end

return ReadyTipModule