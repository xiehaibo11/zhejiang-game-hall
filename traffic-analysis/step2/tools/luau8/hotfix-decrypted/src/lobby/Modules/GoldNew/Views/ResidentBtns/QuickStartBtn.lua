local BtnBase = import("..BtnBase")
local QuickStartBtn = class("QuickStartBtn", BtnBase)

function QuickStartBtn:getCSBPath()
    return XH.Bridge:getCCSResPath("QuickStartBtn.csb")
end

function QuickStartBtn:onInitCSB(csbPath)
    self:initCSB(self:getCSBPath())
end

function QuickStartBtn:getBindingInfo()
    return {
        ["_btn"] = {varName = "_btn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick"},
        ["_txtGameName"] = {varName = "_txtGameName"},
        ["_ani"] = {varName = "_ani"}
    }
end

function QuickStartBtn:getProxyEvents()
    return {
        {module = XH.goldConfigManager, eventKeyName = "GOLD_EVENT_ROOMINFO", callBack = "onRespGoldRoomInfo"},
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_DO_QUICK_START", callBack = "onEventQuickStart"},
        {module = XH.playerData, eventKeyName = "EVENT_SR_CHANGED", callBack = "onPlayerSRUpdate"},
        {module = XH.lobby:getModule("Configuration"), eventKeyName = "EVENT_REQ_CONFIGURATION_SUCCESS", callBack = "onGetConfiguration"},
        {module = XH.lobby:getModule("RecallNew"), eventKeyName = "EVENT_DO_QUICK_START_GOLD", callBack = "onClick"},
    }
end

function QuickStartBtn:onGetConfiguration(event)
    if not XH.isEmbeddedApp() then
        return
    end
    local key = event.data.key
    local ConfigurationDefine = XH.Bridge:require("lobby.Modules.Configuration.Define")
    if key and key == ConfigurationDefine.Config.GOLD then
        self:updateUI()
    end
end

function QuickStartBtn:ctor(node)
    self._csbRoot = node
    self._module = XH.Bridge:getModule("GoldNew")
    QuickStartBtn.super.ctor(self)
    self:initSpine({path = "QuickStart/", tex = "zzb_jbdt_ksks.json", ske = "zzb_jbdt_ksks.atlas", armatureName = "animation", scale = 1}, self._ani)
    self:updateUI()
end

function QuickStartBtn:addTestNode()
end

function QuickStartBtn:onClick()
    XH.Bridge:throwData("xjb25022807", {game_id = self._quickInfo.GameID})
    XH.Bridge:getModule("Gold"):reqJoinGoldRoom(self._quickInfo.ConfID, self._quickInfo.Level)
end

function QuickStartBtn:updateUI(roomConf)
    if roomConf then
        self:updateByRoomConf(roomConf)
    else
        self:onRespGoldRoomInfo()
    end
end

function QuickStartBtn:updateByRoomConf(roomConf)
    if not roomConf or next(roomConf.roomInfo) == nil then
        return
    end
    local playerSR = XH.playerData:getSR() or 0
    local levelRoom = roomConf.roomLevelInfos
    for j = #levelRoom, 1, -1 do
        local roominfo = levelRoom[j]
        if (playerSR >= roominfo.minrich) and ((playerSR <= roominfo.maxrich) or (roominfo.maxrich == -1)) then
            self._quickInfo = {ConfID = roomConf.roomInfo.LeisureID, Level = roominfo.roomnameflag, GameID = roomConf.roomInfo.GameID}
            self._txtGameName:setString(roomConf.roomInfo.GameTitle .. " " .. XH.GOLD_LEVEL_DEFAULT_NAME[roominfo.roomnameflag % 10])
            self._module:dispatchSelectRoom(self._quickInfo)
            return self._quickInfo.ConfID, self._quickInfo.Level
        end
    end
    self._quickInfo = {ConfID = roomConf.roomInfo.LeisureID, Level = roomConf.roomInfo.roomFlag[1], GameID = roomConf.roomInfo.GameID}
    self._txtGameName:setString(roomConf.roomInfo.GameTitle .. " " .. (XH.GOLD_LEVEL_DEFAULT_NAME[roomConf.roomInfo.roomFlag[1] % 10] or ""))
    self._module:dispatchSelectRoom(self._quickInfo)
    return self._quickInfo.ConfID, self._quickInfo.Level
end

function QuickStartBtn:onPlayerSRUpdate(event)
    if self._quickInfo and self._quickInfo.ConfID > 0 then
        local roomConf = XH.Bridge:getModule("GoldNew"):getGoldRoomInfoByLeisureID(self._quickInfo.ConfID)
        if roomConf then
            self:updateByRoomConf(roomConf)
        end
    end
end

function QuickStartBtn:onEventQuickStart(event)
    XH.Bridge:getModule("Gold"):reqJoinGoldRoom(self._quickInfo.ConfID, self._quickInfo.Level)
end

function QuickStartBtn:onRespGoldRoomInfo(event)
    local lastGameInfo = XH.Bridge:getModule("GoldNew"):getLastGameInfo(0, 0)
    local ConfID = lastGameInfo.ConfID
    local roomConf = XH.Bridge:getModule("GoldNew"):getGoldRoomInfoByLeisureID(ConfID)
    if not roomConf or next(roomConf.roomInfo) == nil then
        local roomlist = XH.Bridge:getModule("GoldNew"):getCurAreaMainEntryInfo()
        if roomlist[1][1] == nil then
            return
        end
        roomConf = XH.Bridge:getModule("GoldNew"):getGoldRoomInfoByLeisureID(roomlist[1][1].LeisureID)
    end
    if roomConf then
        self:updateByRoomConf(roomConf)
    end
end
return QuickStartBtn
E