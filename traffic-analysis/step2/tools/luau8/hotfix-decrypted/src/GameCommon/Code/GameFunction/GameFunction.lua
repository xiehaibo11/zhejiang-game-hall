local GameFunCtion = {}
local CURRENT_MODULE_NAME = ...
GameFunCtion.ROOM_MODE = {
    PC = 1,
    MOBILE = 2,
    BOXROOM = 3,
    MATCHROOM = 4,
}

function GameFunCtion.getChairs()
    return Game.TableData.getChairs()
end

function GameFunCtion.getTableData()
    return Game.TableData
end

function GameFunCtion.seatToLocal(seat)
    local localSeat = -1
    local chairCount = GameFunCtion.getChairs()
    if seat >= 0 and seat <= chairCount - 1 then
        localSeat = ((seat - GameFunCtion.getSelfSeat() + chairCount) % chairCount + 1) % chairCount + GameFunCtion.getSelfLocalSeat() - 1
        if GameFunCtion.getChairs() == 2 and localSeat == 1 then
            localSeat = 4
        end
    end
    return localSeat
end

function GameFunCtion.localToSeat(localSeat)
    local seat = -1
    local chairCount = GameFunCtion.getChairs()
    if localSeat >= 0 and ( localSeat <= chairCount or chairCount == 2) then
        if chairCount == 2 then
            if localSeat == 4 then
                localSeat = 1
            end
        end
        seat = ((localSeat - GameFunCtion.getSelfLocalSeat() + chairCount) % chairCount + GameFunCtion.getSelfSeat()) % chairCount
    end
    return seat
end

function GameFunCtion.getSelfSeat()
    local playerData = Game.PlayerData.getPlayerByPlayerID(XH.areaData:getAreaID(),XH.playerData:getNumberID())
    if playerData == nil then
        return GameFunCtion.getMaxPlayer()
    end
    return playerData:getSeat()
end

function GameFunCtion.getFriendSeat()
    return (GameFunCtion.getSelfSeat() + 2 ) % GameFunCtion.getMaxPlayer()
end

function GameFunCtion.getSelfPlayer()
    return Game.PlayerData.getPlayerByPlayerID(XH.areaData:getAreaID(),XH.playerData:getNumberID())
end

function GameFunCtion.getSelfLocalSeat()
    return 2
end

function GameFunCtion.getMaxPlayer()
    return 4
end

function GameFunCtion.getMaxChairs()
    return 4
end

function GameFunCtion.getPlayerBySeat(seat)
    return Game.PlayerData.getPlayerBySeat(seat)
end

function GameFunCtion.getPlayerByPlayerID(BrandID,NumberID)
    return Game.PlayerData.getPlayerByPlayerID(BrandID,NumberID)
end

function GameFunCtion.sendStreamPacket(protocol,processID)
    local GameMXY = import("..GameProtocol.GameMXY",CURRENT_MODULE_NAME)
    local tClientToServerMessageData = GameMXY.ClientToServerMessage:new()
    local bos = protocol:bostream()
    tClientToServerMessageData.cmdid = protocol.XY_ID
    tClientToServerMessageData.message = bos:getBytes()
    tClientToServerMessageData.msglen = bos:getLength()
    Game.Interface.sendMessage(tClientToServerMessageData,nil,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)
end
--通过优胜值判断等级
function GameFunCtion.getLvByTypeScore(TypeScore)
    if TypeScore <= 0 then
        return "列兵"
    elseif TypeScore >= 1 and TypeScore <= 10 then
        return "上等兵"
    elseif TypeScore >= 11 and TypeScore <= 30 then
        return "下士"
    elseif TypeScore >= 31 and TypeScore <= 70 then
        return "中士"
    elseif TypeScore >= 71 and TypeScore <= 150 then
        return "上士"
    elseif TypeScore >= 151 and TypeScore <= 310 then
        return "少尉"
    elseif TypeScore >= 311 and TypeScore <= 630 then
        return "中尉"
    elseif TypeScore >= 631 and TypeScore <= 1270 then
        return "上尉"
    elseif TypeScore >= 1271 and TypeScore <= 2550 then
        return "少校"
    elseif TypeScore >= 2551 and TypeScore <= 5110 then
        return "中校"
    elseif TypeScore >= 5111 and TypeScore <= 10230 then
        return "上校"
    elseif TypeScore >= 10231 and TypeScore <= 20470 then
        return "大校"
    elseif TypeScore >= 20471 and TypeScore <= 40950 then
        return "少将"
    elseif TypeScore >= 40951 and TypeScore <= 81910 then
        return "中将"
    elseif TypeScore >= 81911 and TypeScore <= 163830 then
        return "上将"
    elseif TypeScore >= 163831 and TypeScore <= 327670 then
        return "五星上将"
    elseif TypeScore >= 327671 and TypeScore <= 655350 then
        return "关牌元帅"
    elseif TypeScore >= 655351 and TypeScore <= 1310710 then
        return "关牌王"
    elseif TypeScore >= 1310711 and TypeScore <= 2621430 then
        return "关神"
    elseif TypeScore >= 2621431 and TypeScore <= 5242870 then
        return "关圣"
    elseif TypeScore >= 5242871 and TypeScore <= 10485750 then
        return "关王之王"
    elseif TypeScore >= 10485751 then
        return "关牌无敌"   
    end        
end

function GameFunCtion.isVoiceLimitVersion()
    if XH.bf.SysFunc:GetBundleVersion() >= "3.0.0" then 
        return false
    end
    return true
end

function GameFunCtion.isVoicePreDeal()
    if device.platform == "android" or device.platform == "ios" then
        return true
    end
    return false
end

function GameFunCtion.stopSoundInSpeaking()
    if XH.bf.SysFunc:GetBundleVersion() > "3.2.9" then
        AudioEngine.pauseMusic()
    else
        cc.SimpleAudioEngine:destroyInstance()
    end
end

function GameFunCtion.playSoundInSpeaking()
    if XH.bf.SysFunc:GetBundleVersion() > "3.2.9" then
        AudioEngine.resumeMusic()
    else
        local SetData = import("GameCommon.Code.GameData.SetData")

        local musicPercent = SetData.getMusicPercent()
        local soundPercent = SetData.getSoundPercent()
        AudioEngine.setMusicVolume(musicPercent / 100.0)
        AudioEngine.setEffectsVolume(soundPercent / 100.0) 
    end
end

function GameFunCtion.isSupportThirdInvite()
    return false
end

function GameFunCtion.isShowThirdInviteBtn()
    return false
end

function GameFunCtion.callFastvoStartRecord(numid)
    if device.platform == "ios" and XH.bf.SysFunc:GetBundleVersion() > "3.2.9" then
        local mapData = {}
        mapData["0"] = tostring(numid)
        XH.bf.ThirdManager:getInstance():callFunctionWithMap("fastvo_start_record",mapData)
    else
        XH.bf.ThirdManager:getInstance():callFunction("fastvo_start_record")
    end
end

function GameFunCtion.copyClipBoard(string)
    if XH.bf.SysFunc:GetBundleVersion() >= "3.2.8" then 
        local mapData = {["0"] = string}
        XH.bf.ThirdManager:getInstance():callFunctionWithMap("sysfunc_copy_clipboard",mapData)
    end
end

return GameFunCtion
T