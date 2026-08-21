local RoomInfoView = CF.gameClass("RoomInfoView", "game.Mahjong.BasicMahjong.Modules.RoomInfo.View")

--更新局数...信息
function RoomInfoView:onPlayCountChanged(event)
    if CF.roomData:isBoxRoom() then
        local playCount = CF.roomData:getPlayCount()
        local quanCount,maxQuanCount = CF.roomData:getQuanCount()
        if maxQuanCount == 2 or maxQuanCount == 4  then
            local playerNum = CF.roomData:getChairs()
            local maxJuShu = maxQuanCount * playerNum
            local juShu = 0
            if quanCount > 0 then
                --庄家座位号
                local zhuangSeat = CF.game:getModule("GameLayer"):getGameData():getBankerSeat()
                --起庄者座位号
                local firstZhuangSeat = CF.roomData:getFirstBanker() or 0
                --本圈的第几个庄
                local thisQuanZhuangNum =(zhuangSeat - firstZhuangSeat + playerNum)%playerNum + 1
                juShu = (quanCount-1)*playerNum + thisQuanZhuangNum
            end
            self:setOneInfoNodeValue("playCount", juShu .. "/" .. maxJuShu)
        else
            self:setOneInfoNodeValue("playCount", playCount)
        end
    end
end

return RoomInfoView