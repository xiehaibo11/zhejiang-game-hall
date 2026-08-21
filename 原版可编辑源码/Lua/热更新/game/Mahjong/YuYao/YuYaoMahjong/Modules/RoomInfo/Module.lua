local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.Module")
RoomInfoModule.EVENT_UPDATE_LS_FEN = "EVENT_UPDATE_LS_FEN"
RoomInfoModule.EVENT_UPDATE_GANG_FEN = "EVENT_UPDATE_GANG_FEN"
RoomInfoModule.EVENT_UPDATE_GAMERULE = "EVENT_UPDATE_GAMERULE"
function RoomInfoModule:getSubXYDealList()
    local subXYDealList = RoomInfoModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self, self.onMsgHeadScore), msgClass = CF.GameProtocol.msgHeadScore}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self, self.onMsgGangScore), msgClass = CF.GameProtocol.msgGangFeng}
    return subXYDealList
end

function RoomInfoModule:onMsgHeadScore(msgData)
    self:dispatchEvent({name = "EVENT_UPDATE_LS_FEN", msg = {score = msgData.nHeadScore}})
end

function RoomInfoModule:onMsgGangScore(msgData)
    self._gangScore = msgData.nTotalScore
    self:dispatchEvent({name = "EVENT_UPDATE_GANG_FEN", msg = {score = msgData.nTotalScore}})
end

function RoomInfoModule:getGangScore()
    return self._gangScore or {0,0,0,0}
end
--玩法介绍
function RoomInfoModule:onMsgGameRule(msgData)
    -- local strGameRule =
    RoomInfoModule.super.onMsgGameRule(self, msgData)

    local strGameRule = CF.SysTool.GB_18030_2000_TO_UTF8(msgData.strGameRule)
    if string.find(strGameRule, "2%-4") then
        self._dynamicTable = true
    else
        self._dynamicTable = false
    end
    if not self._bPlayBcak and self._dynamicTable then
        local msg = "动态桌暂未开放，敬请期待！"
        local function leaveFunc()
            CF.game:getModule("Setting"):doReturnToLobby()
            CF.game:getModule("Setting"):moveOutAnimation()
        end
        CF.TipTool.showTipsOk(msg, leaveFunc)
    end
    local func = loadstring("return {" .. msgData.strOriginalGameRule .. "}")
    local ruleTable = func()
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    gameData:setTeaBigWinStyleRule(ruleTable)
    self._oriRule = ruleTable
    self:dispatchEvent({name = "EVENT_UPDATE_GAMERULE", msg = {}})
end

function RoomInfoModule:isShowGangScore()
    return self._oriRule and self._oriRule.showGang == "1"
end

return RoomInfoModule
