local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.GameBase.Modules.RoomInfo.Module")

function RoomInfoModule:getSubXYDealList()
    local subXYDealList = RoomInfoModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgUUID),msgClass = CF.GameProtocol.msgUUID}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgNewRoomRule),msgClass = CF.GameProtocol.msgNewRoomRule}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgCurPanShu),msgClass = CF.GameProtocol.msgCurPanShu}
    return subXYDealList
end

function RoomInfoModule:getLimitXYIDs()
    -- 嘉兴区协议号与基类冲突，将原先协议对应监听置空
    return {30, 1035}
end

function RoomInfoModule:onMsgGameRule(msgData)
end

function RoomInfoModule:onMsgCurPanShu(msgData)
    local newData = {playCount=msgData.cur, maxPlayCount=msgData.goal}
    self:onMsgPlayCount(newData)
end

function RoomInfoModule:onMsgNewRoomRule(msgData)
    local tRule = {}
    tRule.isOpenJoker = msgData.isOpenJoker or 0
    tRule.startBankerNum = msgData.startBankerNum or 1
    tRule.sanTanContract = msgData.sanTanContract or 0
    tRule.gameHuType = msgData.gameHuType or 0
    tRule.openSanTan = msgData.openSanTan or false
    tRule.openHuangFan = msgData.openHuangFan or false
    tRule.taiTouHuQuanShu = msgData.taiTouHuQuanShu or 0
    tRule.maxWin = msgData.maxWin or 0
    tRule.canChow = msgData.canChow or 0
    tRule.gameType = msgData.gameType or 0
    tRule.baseScore = msgData.nBaseScore or 0
    tRule.nFangKa = msgData.nFangKa or 0
    tRule.followSanTan = msgData.openSanTan and msgData.followSanTan or false
    tRule.WuJiangYZM = msgData.WuJiangYZM or 0
    tRule.WJQiangGang = msgData.WJQiangGang or 0
    tRule.WJBuyScore = msgData.WJBuyScore or 0
    local strRule = ""
    if msgData.nBaseScore and msgData.nBaseScore > 0 then
        strRule = string.format("底分:%d/", msgData.nBaseScore)
    end
    if tRule.WuJiangYZM == 1 then
        strRule = strRule .. "吴江/"
    end
    if tRule.WJQiangGang == 1 then
        strRule = strRule .. "抢杠/"
    end
    if tRule.WJBuyScore == 1 then
        strRule = strRule .. "买籽/"
        CF.roomData:setIsWuJiangBuyScore(true)
    else
        CF.roomData:setIsWuJiangBuyScore(false)
    end
    -- 胡牌方式
    if tRule.gameHuType == 0 then
        strRule = strRule .. "自摸/"
    end
    -- 吃牌方式
    if tRule.WuJiangYZM == 0 then
        if tRule.canChow == 0 then
            strRule = strRule .. "禁吃牌/"
        else
            strRule = strRule .. "可吃牌/"
        end
    end
    -- 片数番数
    if tRule.maxWin == 0 then
        if tRule.WuJiangYZM == 1 then
            strRule = strRule .. "无番数限制"
        else
            strRule = strRule .. "无片数限制"
        end
    else
        if tRule.WuJiangYZM == 1 then
            strRule =  strRule .. tostring(tRule.maxWin) .. "番"
        else
            strRule =  strRule .. tostring(tRule.maxWin) .. "片"
        end     
    end
    -- 三摊
    if tRule.openSanTan then
        strRule = strRule .. "/包三摊"
        CF.roomData:setIsSupportSanTan(true)
        if tRule.followSanTan then
            strRule = strRule .. "(自选跟打)"
        end
    else
        CF.roomData:setIsSupportSanTan(false)
    end
    -- 黄番
    if tRule.openHuangFan then
        strRule = strRule .. "/黄番"
    end
    -- 支付方式
    if tRule.nFangKa == 0 then
        local roomid = CF.roomData:getRoomID()
        if roomid and #(tostring(roomid)) > 6 then
            strRule = strRule .. "/圈主付"
        else
            strRule = strRule .. "/房主付"
        end
    else
        strRule = strRule .. "/费用均摊"
    end
    if CF.teaHouseManager:isInTeaHouse() then
        strRule = string.gsub(strRule, "/房主付", "")
    end

    CF.roomData:setTaiTouHuQuanShu(tRule.taiTouHuQuanShu)
    if tRule.taiTouHuQuanShu <= 0 then
        CF.roomData:setIsTaiTouHu(false)
    else
        CF.roomData:setIsTaiTouHu(true)
    end
    CF.roomData:setIsOpenHuangFan(tRule.openHuangFan)
    CF.roomData:setFollowSanTan(tRule.followSanTan)

    CF.roomData:setGameRule(strRule)
end

function RoomInfoModule:getLuaStrValue(luaString,  variable)
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

return RoomInfoModule