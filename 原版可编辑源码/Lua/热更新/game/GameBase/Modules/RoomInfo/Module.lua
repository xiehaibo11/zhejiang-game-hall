local RoomInfoModule = CF.gameClass("RoomInfoModule", CF.ModuleBase)

RoomInfoModule.EVENT_PLAY_COUNT_CHANGED = "EVENT_PLAY_COUNT_CHANGED"

function RoomInfoModule:getSubXYDealList()
    return {
        {callback = handler(self,self.onMsgUUID),msgClass = CF.LogicBaseProtocol.msgUUID},
        {callback = handler(self,self.onMsgPlayCount),msgClass = CF.GameProtocol.msgPlayCount},
        {callback = handler(self,self.onMsgGameRule),msgClass = CF.GameProtocol.msgGameRule},
        {callback = handler(self,self.onMsgBase),msgClass = CF.GameProtocol.msgBase},
        {callback = handler(self,self.onMsgRoomHostSeat),msgClass = CF.GameProtocol.msgRoomHostSeat},
    }
end

function RoomInfoModule:onMsgUUID(msgData)
    if msgData.strUUID == "" then
        self._uuid = msgData.uluuid
    else
        self._uuid = msgData.strUUID
    end
end

function RoomInfoModule:getUUID()
    return self._uuid
end

function RoomInfoModule:getCanSettingViewTrust()
    if self._canSettingViewTrust == nil then
        self._canSettingViewTrust = false
    end
    return self._canSettingViewTrust
end

function RoomInfoModule:onMsgPlayCount(msgData)    
    CF.roomData:setPlayCount(msgData.playCount)
    CF.roomData:setMaxPlayCount(msgData.maxPlayCount)

    if msgData.playCount == 1 and CF.roomData:getRoomMode() ~= CF.ROOM_MODE.MOBILE then
        local numid = CF.selfPlayerData:getNumberID()
        local strKey = "uuid_" .. CF.areaData.getAreaID() .."_" .. numid
        cc.UserDefault:getInstance():setStringForKey(strKey, self._uuid)
    end
end

function RoomInfoModule:onMsgGameRule(msgData)    
    local strGameRule = self:analyseGameRuleStr(msgData.strGameRule)
    CF.roomData:setGameRule(strGameRule)
    return strGameRule
end

function RoomInfoModule:analyseGameRuleStr(strGameRule)
    return CF.SysTool.GB_18030_2000_TO_UTF8(strGameRule)
end

function RoomInfoModule:onMsgBase(msgData)    
    CF.roomData:setBaseScore(msgData.iBase) 
end

function RoomInfoModule:getShowRoomID()
    return string.format("%06d", CF.roomData:getRoomID())
end

function RoomInfoModule:onMsgRoomHostSeat(msgData)
    CF.roomData:setHostSeat(msgData.seat)
end

function RoomInfoModule:playAnimation()
end

function RoomInfoModule:checkShowTrustTips()
    local roomid = CF.roomData:getRoomID()
    if roomid == 0 then
        return
    end
    local gameRule = CF.roomData:getGameRule()
    if gameRule == "" or gameRule == nil then
        return
    end
    local trustTimeStr = string.match(gameRule, "超时%d+秒托管")
    if trustTimeStr then
        local isNotShow = CF.roomData:isPlayBack() or CF.roomData:getIsSeer()
        local trustTimeNum = tonumber(string.match(trustTimeStr,"%d+"))
        if trustTimeNum > 0 and not isNotShow then
            local gameid = CF.roomData:getGameID() or 0
            local saveData = XH.userDefault:getValue(XH.userDefault.KEY_ID.GAME_TRUST_TIP, {}, gameid)
            if not saveData.isCheck and saveData.roomid ~= roomid then
                XH.TipTool.showTip({
                    type = XH.TIP_LAYER_TYPE.OK_NO_CLOSE,
                    bShowCheckBox = true,
                    funcOK = function(isCheck)
                        local saveData = {
                            isCheck = isCheck,
                            roomid = roomid
                        }
                        XH.userDefault:setValue(XH.userDefault.KEY_ID.GAME_TRUST_TIP, saveData, gameid)
                    end,
                }, string.format("当前房间已开启%d秒未出牌自动托管功能（房间规则已标记）", trustTimeNum or 0))
            end
        end
    end
end

return RoomInfoModule