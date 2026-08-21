local SelfPlayerHead = NG.GAME.gameClass("SelfPlayerHead", "newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.Players.PlayerHead")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")

function SelfPlayerHead:getCSBPath()
    return "cocosStudio/GoldNew/Game/HPLandlord/CSB/Player/PlayerHead_2.csb"
end

function SelfPlayerHead:getBindingInfo()
    local bindingInfo = SelfPlayerHead.super.getBindingInfo(self)
    return bindingInfo
end

-- todo 临时同步数据
function SelfPlayerHead:setGoldNum(goldNum)
    SelfPlayerHead.super.setGoldNum(self, goldNum)
    GoldPlayerData.JoyBean = goldNum
end

function SelfPlayerHead:onClickHead()
    local playInfo = {}
    playInfo.NickName = GoldPlayerData.NickName
    playInfo.NumId = GoldPlayerData.NumId
    playInfo.JoyBean = GoldPlayerData.JoyBean
    playInfo.Sex = GoldPlayerData.Sex
    playInfo.headUrl = GoldPlayerData.Head
    local playerdata = NG.GAME.roomTableData:getSelf()
    if playerdata ~= nil then
        playInfo.GameCount = playerdata._win + playerdata._lose + playerdata._draw + playerdata._escape
        playInfo.WinRate = "0%"
        if playInfo.GameCount > 0 then
            playInfo.WinRate = math.floor(playerdata._win * 100 / playInfo.GameCount) .. "%"
        end
        playInfo.headUrl = playerdata._headUrl
    end
    NG.GAME.gameRequire("Modules.PlayerInfo.PlayerInfoLayer").new():showSelf(playInfo)
end

return SelfPlayerHead�