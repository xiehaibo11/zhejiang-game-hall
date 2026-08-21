local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.Module")
local RuleConfig = CF.gameRequire("Config.RuleConfig")

RoomInfoModule.EVENT_SHOW_KUNG_SCORE_ANI = "EVENT_SHOW_KUNG_SCORE_ANI"
RoomInfoModule.EVENT_SET_SCORE = "EVENT_SET_SCORE"

--玩法介绍
function RoomInfoModule:onMsgGameRule(msgData)
    local strGameRule = CF.SysTool.GB_18030_2000_TO_UTF8(msgData.strGameRule)
    if strGameRule == "" or strGameRule == nil then
        strGameRule = msgData.strGameRule
    end
    if string.find(strGameRule, "HaveThreeBack") == nil and CF.roomData:getChairs() == 4 then
        if strGameRule ~= "" and not string.match(strGameRule, ";%s*$") then
            strGameRule = strGameRule .. ";"
        end
        strGameRule = strGameRule .. "HaveThreeBack='1';"
    end
    local ruleTable = CF.StringTool.getLuaValueList(strGameRule)
    local tempStrGameRule  = RuleConfig.getGameRuleStr(strGameRule)
    CF.roomData:setGameRule(tempStrGameRule)
    CF.roomData:setPayType(tonumber(ruleTable["PayType"]))
    CF.roomData:setRoomFee(tonumber(ruleTable["RoomFee"]))
end

function RoomInfoModule:getSubXYDealList()
    local subXYDealList = RoomInfoModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgGangFeng), msgClass = CF.GameProtocol.msgGangFeng}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgPlayCount), msgClass = CF.GameProtocol.msgPlayCount}


    return subXYDealList
end

-- 获取局数/圈数信息
function RoomInfoModule:onMsgPlayCount(msgData)
    RoomInfoModule.super.onMsgPlayCount(self, msgData)
    CF.roomData:setGameRoomMode(msgData.gameModeQuan)
    CF.roomData:setPlayCount(msgData.playCount)
end


-- 杠分信息
function RoomInfoModule:onMsgGangFeng(msgData)
    if msgData.bRelink == false then
        self:dispatchEvent( { name = self.EVENT_SHOW_KUNG_SCORE_ANI, msg = {score = msgData.nCurScore}})
    end
    self:dispatchEvent( { name = self.EVENT_SET_SCORE , msg = {score = msgData.nTotalScore}})
end

return RoomInfoModule