local GameModule = CF.gameClass("GameModule", "game.Mahjong.LiShui.LiShuiMahjongBase.Modules.GameLayer.Module")

function GameModule:onMsgAction(msgData)
    local seat = msgData.nSeat
    local localSeat = CF.roomData:seatToLocal(seat)
    if localSeat == CF.roomData:getSelfLocalSeat() then
        self:getGameData():setHuPower(false)
    end
    local convertFlag = CF.GameDefine.COMB_FLAG_TO_TYPE[msgData.tComb.nFlag]
    
    --暗杠不显示牌
    local tempComb = clone(msgData.tComb)
    if (not CF.roomData:isPlayBack()) and convertFlag == CF.GameDefine.COMB_TYPE.CONCEALED_KONG and seat ~= CF.roomData:getSelfSeat() then
		if string.find(CF.roomData:getGameRule(), "洗脑") == nil then
			for i =0, msgData.tComb.nCount do
				tempComb.nMahs[i] = CF.GameDefine.MAH_VALUE.BACK
			end
        end
    end
    -- 播放行牌动画
    self:getGameData():setCombMahData(seat, tempComb, true)
    -- 如果是吃碰杠，则把出牌区的牌，删一下
    if convertFlag == CF.GameDefine.COMB_TYPE.CHOW or convertFlag == CF.GameDefine.COMB_TYPE.PONG or convertFlag == CF.GameDefine.COMB_TYPE.EXPOSED_KONG then
        self:getGameData():deleteLastOutMahData(msgData.tComb.nFromSeat)
        local nMahs = msgData.tComb.nMahs
        local inMahs = msgData.tComb.nInMahs[1] 
        for i = 1,#nMahs do
            if nMahs[i] == inMahs then
                table.remove(nMahs, i) 
                break
            end
        end
        self:getGameData():deleteHandMahData(seat, nMahs)
    end

    -- 如果是暗杠或者补杠，如果手牌中有单放，整理一下
    if convertFlag == CF.GameDefine.COMB_TYPE.CONCEALED_KONG then
        local nMahs = msgData.tComb.nMahs
        self:getGameData():deleteHandMahData(seat, nMahs)
    end
    if convertFlag == CF.GameDefine.COMB_TYPE.FILL_KONG then
        local inMahs = msgData.tComb.nInMahs[1] 
        self:getGameData():deleteHandMahData(seat, {inMahs})
    end
    
    self:showMahAcitonAni(localSeat, msgData.tComb.nFlag)
    -- TODO 0721 播放行牌音效
    local bMan = false
    local playerData = CF.roomData:getPlayerDataBySeatId(seat)
    if playerData then
        bMan = playerData:getSex() == 1
    end
    local actionIndex = convertFlag
    local bFangYan = not CF.settingData:getMahIsNormalVoice()
    local gameid = bFangYan and CF.roomData:getGameID() or nil
    CF.soundManager:playSoundMahAction(actionIndex, bMan, gameid)
    
end


return GameModule�	