local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.BaseCardGame.Modules.RoomInfo.Module")

RoomInfoModule.EVENT_GAME_MUT_CHANGED = "EVENT_GAME_MUT_CHANGED"

function RoomInfoModule:ctor()
    RoomInfoModule.super.ctor(self)
    self._winMut = 1
    self._lostMut = 1
end

function RoomInfoModule:getSubXYDealList()
    local list = RoomInfoModule.super.getSubXYDealList(self)
    list[#list + 1] = {callback = handler(self,self.onMsgPanInfo),msgClass = CF.GameProtocol.msgPanInfo}
    list[#list + 1] = {callback = handler(self,self.onMsgRoomRule),msgClass = CF.GameProtocol.msgRoomRule}
    return list
end

function RoomInfoModule:onMsgPanInfo(msgData)
    if msgData.bDoubleOpen then
        if CF.game:getModule("GameLayer")._gameData:getSelfLightTen() then
            self._winMut = 2
            self._lostMut = 4
        else
            self._winMut = 4
            self._lostMut = 2
        end
    end
    self:dispatchEvent({name = self.EVENT_GAME_MUT_CHANGED ,
                        msg = {
                            isPlayWin = true, iWinTime = self._winMut, iLostTime = self._lostMut
                        }})
end

function RoomInfoModule:onMsgRoomRule(msgData)
    local rule = msgData.rule
    local getLuaStrValue = function (luaString,  variable)
        local value = ""
        local vs = string.split(luaString, ";")
        for i = 1,#vs do
            local vss = string.split(vs[i], "=")
            if (#vss >= 2 and vss[1] == variable)then
                value = vss[2]
                if (string.len(value) >= 2)then
                    if (string.sub(value,1,1) == "\'" and string.sub(value,#value,#value)  == "\'")then
                        value = string.sub(value,2,string.len(value) - 1)
                    end
                end
                return value
            end
        end
        return value
    end
    CF.roomData:setBaseScore(getLuaStrValue(rule,"base"))
    if CF.roomData:isGameRuleTips() then
        if CF.teaHouseManager and CF.teaHouseManager:isInTeaHouse() then
            return
        end
        local nFangKa = getLuaStrValue(rule,"nFangKa")
        if nFangKa == "0" then
            CF.roomData:setGameRule("房主付")
        else
            CF.roomData:setGameRule("费用均摊")
            CF.TipTool.showToast("您已进入费用均摊房间！", 2)
        end
    else
        CF.roomData:setGameRule(" ")
    end
end

return RoomInfoModule