local GameModule = CF.gameClass("GameModule", "game.Mahjong.LiShui.LiShuiMahjongBase.Modules.GameLayer.Module")

GameModule.UPDATE_MEN_FENG_IMG = "UPDATE_MEN_FENG_IMG"
GameModule.UPDATE_CIRCLE_FENG_IMG = "UPDATE_CIRCLE_FENG_IMG"

local KW_CIRCLE_FENG_INDEX =
{
    [CF.GameDefine.MAH_VALUE.FENG_DONG] = 1,
    [CF.GameDefine.MAH_VALUE.FENG_NAN] = 2,
    [CF.GameDefine.MAH_VALUE.FENG_XI] = 3,
    [CF.GameDefine.MAH_VALUE.FENG_BEI] = 4,
    [CF.GameDefine.MAH_VALUE.JIAN_ZHONG] = 5,
    [CF.GameDefine.MAH_VALUE.JIAN_FA] = 6,
    [CF.GameDefine.MAH_VALUE.JIAN_BAI] = 7,
}

function GameModule:onMsgPanData(msgData)
    GameModule.super.onMsgPanData(self, msgData)
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    local playerCount = CF.roomData:getChairs()
    if playerCount == 2 then
        for seat = 0, playerCount - 1 do
            local fengSeat = 2 --西风
            if seat ~= msgData.nBanker then 
                winLostData:setMenFeng(seat, fengSeat)
            else 
                winLostData:setMenFeng(seat, 0)
            end
        end
    else
        for seat = 0, playerCount - 1 do
            local fengSeat = (( seat - msgData.nBanker )+ 4 ) % 4
            if seat ~= msgData.nBanker then 
                winLostData:setMenFeng(seat, fengSeat)
            else
                winLostData:setMenFeng(seat, 0)
            end
        end
    end
    winLostData:setCircleFeng(KW_CIRCLE_FENG_INDEX[msgData.nQuanFeng])
    self:dispatchEvent( { name = self.UPDATE_CIRCLE_FENG_IMG, msg = {} })
    self:dispatchEvent( { name = self.UPDATE_MEN_FENG_IMG, msg = {} })
end

return GameModule�