local GameModule = CF.gameClass("GameModule", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Modules.GameLayer.Module")

GameModule.EVENT_UPDATE_MAI_ZI = "EVENT_UPDATE_MAI_ZI"
GameModule.EVENT_UPDATE_HEAD_MAI_ZI_UI = "EVENT_UPDATE_HEAD_MAI_ZI_UI"


function GameModule:getSubXYDealList()
	local xyDealList = GameModule.super.getSubXYDealList(self)
    xyDealList[#xyDealList+1] = {callback = handler(self,self.onMsgRespondMaiZi),msgClass = CF.GameProtocol.msgRespondMaiZi}
    xyDealList[#xyDealList+1] = {callback = handler(self,self.onMsgMaiZiInfo),msgClass = CF.GameProtocol.msgMaiZiInfo}
	return xyDealList
end

--兰溪底分在PanData处理
function GameModule:onMsgPanData(msgData)
    GameModule.super.onMsgPanData(self, msgData)
    CF.roomData:setFirstBanker(msgData.nFirstBanker)
    CF.roomData:setLaoZhuangNum(msgData.nLaoZhuang-1)
    CF.roomData:setBaseScore(msgData.nBaseScore)
end

--买子
function GameModule:onMsgRespondMaiZi(msgData)
    CF.game:getModule("WinLost"):getWinLostData():setGameMaiZiInfo(msgData.maiziValue)
    self:dispatchEvent( { name = self.EVENT_UPDATE_MAI_ZI ,msg = {data = msgData,show = true } })
end

--买子信息
function GameModule:onMsgMaiZiInfo(msgData)
    CF.game:getModule("WinLost"):getWinLostData():setGameMaiZiInfo(msgData.maiziValue)
    self:dispatchEvent( { name = self.EVENT_UPDATE_HEAD_MAI_ZI_UI ,msg = {data = msgData, show = false }})
end

-- 牌墙
function GameModule:onMsgWallMah(msgData)
    local wallMahCnt = msgData.nWallCnt - 34
    self:getGameData():setSurPlusCounts(wallMahCnt, true)
end

-- 吃碰杠等动作
function GameModule:onMsgAction(msgData)
    GameModule.super.onMsgAction(self, msgData)
    local combType = msgData.tComb.nFlag
    -- 如果是吃碰杠，则把出牌区的牌，删一下
    if combType == CF.GameDefine.COMB_FLAG.CKONG or combType == CF.GameDefine.COMB_FLAG.TKONG or combType == CF.GameDefine.COMB_FLAG.MKONG then
        local wallMahCnt = self:getGameData():getSurPlusCounts()
        if wallMahCnt >= 7 then
            self:getGameData():setSurPlusCounts(wallMahCnt - 7, true)
        else
            self:getGameData():setSurPlusCounts(wallMahCnt, true)
        end
    end
end

return GameModule�