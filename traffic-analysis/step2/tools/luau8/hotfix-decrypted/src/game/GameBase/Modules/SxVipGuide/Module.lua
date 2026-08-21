local SxVipGuideModule = CF.gameClass("SxVipGuideModule", CF.ModuleBase)
local LOCAL_KEY = "SxVipGuideModule_LastShowInfo"
SxVipGuideModule.EVENT_SHOW_TIP = "EVENT_SHOW_TIP"

function SxVipGuideModule:getProxyEvents()
    return {
        {module = CF.roomData, eventKeyName = "EVENT_PLAYERLIST_CHANGED", callBack = "onPlayerListChanged"}
    }
end

function SxVipGuideModule:ctor()
    SxVipGuideModule.super.ctor(self)
    self._friendInfo = {}
    self._reqInfo = {}
    local roomId = CF.roomData:getRoomID()
    -- local isBox = CF.roomData:isBoxRoom()
    local lastShowInfo = cc.UserDefault:getInstance():getStringForKey(LOCAL_KEY, "")
    if lastShowInfo ~= "" then
        lastShowInfo = json.decode(lastShowInfo)
    else
        lastShowInfo = {}
    end
    self._isShow = lastShowInfo.roomid == roomId and lastShowInfo.roomid ~= ""
    self._showRoomid = lastShowInfo.roomid
    self._isClicked = lastShowInfo.clicked
    self._showNumid = lastShowInfo.numid
end

function SxVipGuideModule:clicked()
    self._isClicked = true
    local info = {roomid = CF.roomData:getRoomID(), clicked = true, numid = self._showNumid}
    cc.UserDefault:getInstance():setStringForKey(LOCAL_KEY, json.encode(info))
end

function SxVipGuideModule:getShowInfo()
    if not self:getVipModule():isExpire() or CF.roomData:isPlayBack() then
        return {roomid = 0, clicked = true, numid = 0}
    end
    return {roomid = self._showRoomid, clicked = self._isClicked, numid = self._showNumid}
end

function SxVipGuideModule:noticeShowTip(numId)
    local playerData = CF and CF.roomData and CF.roomData:getPlayerDataByNumberID(numId)
    if playerData then
        self._showNumid = numId
        self._showRoomid = CF.roomData:getRoomID()
        self:dispatchEvent({name = self.EVENT_SHOW_TIP, msg = {numId = numId}})
        CF.SysTool.performWithDelayGlobal(
            --防止头像组件还没创建完成
            function()
                self:dispatchEvent({name = self.EVENT_SHOW_TIP, msg = {numId = numId}})
            end,
            2
        )
        self:endShow()
    end
end

function SxVipGuideModule:endShow()
    self._isShow = true
    if not CF.roomData then
        return
    end
    local info = {roomid = CF.roomData:getRoomID(), numid = self._showNumid}
    cc.UserDefault:getInstance():setStringForKey(LOCAL_KEY, json.encode(info))
end

function SxVipGuideModule:getVipModule()
    return CF.getLobbyModule("Sxvip")
end

function SxVipGuideModule:onPlayerListChanged()
    if not CF.roomData:isBoxRoom() or self._isShow then
        return
    end
    if not self:getVipModule():isExpire() then
        return
    end
    if CF.roomData:isPlayBack() or not CF.game then
        return
    end
    for seatId = 0, CF.roomData:getMaxPlayer() - 1 do
        local playerData = CF.roomData:getPlayerDataBySeatId(seatId)
        if playerData then
            local numId = playerData:getNumberID()
            local key = numId .. ""
            if not playerData:isSeeing() and numId ~= XH.playerData:getNumberID() then
                if not self._friendInfo[key] then
                    self:getVipModule():reqFriendInfo(
                        numId,
                        function(info)
                            local data = info and info.drawReoprt and info.drawReoprt[1]
                            if CF and CF.game then
                                CF.game:getModule("PlayerInfo"):setFriendInfo(numId, data)
                            end
                            self._friendInfo[key] = data
                            self._reqInfo[key] = nil
                            self:checkShow()
                        end
                    )
                    self._reqInfo[key] = true
                end
            end
        end
    end
end

function SxVipGuideModule:checkShow()
    if self._isShow then
        return
    end
    local reqNum = 0
    for k, v in pairs(self._reqInfo) do
        if v then
            reqNum = reqNum + 1
        end
    end
    if reqNum > 0 then
        return
    end

    local checkTable = {}
    for k, v in pairs(self._friendInfo) do
        table.insert(checkTable, v)
    end
    if #checkTable == 0 then
        return
    end
    table.sort(
        checkTable,
        function(a, b)
            return a.totalCount > b.totalCount
        end
    )
    local friendCfg = CF.getLobbyModule("Sxvip"):getFriendConfig()
    local totalCount = (friendCfg.gameTip and friendCfg.gameTip.totalCount) or 0
    local showProb = (friendCfg.gameTip and friendCfg.gameTip.showProb) or 100
    if checkTable[1].totalCount >= totalCount then
        if math.random(1, 100) <= showProb then
            self:noticeShowTip(checkTable[1].userId)
        else
            self:endShow()
        end
    end
end

function SxVipGuideModule:clear()
end
return SxVipGuideModule
�