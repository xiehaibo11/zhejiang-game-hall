local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.NingBoMahjong.NBMahjongBase.Modules.RoomInfo.Module")

function RoomInfoModule:ctor(param)
    param = param or {}
    RoomInfoModule.super.ctor(self, param)
    self._teaBigWinStyleRule = {}  --游戏规则字段
end

-- 规则信息
function RoomInfoModule:onMsgGameRule(msgData)
    RoomInfoModule.super.onMsgGameRule(self, msgData)
    local func = loadstring( "return {" .. msgData.strOriginalGameRule .. "}")
    local ruleTable = func()
    self._teaBigWinStyleRule = ruleTable
end

function RoomInfoModule:getTeaBigWinStyleRule()
    return self._teaBigWinStyleRule
end

return RoomInfoModule�