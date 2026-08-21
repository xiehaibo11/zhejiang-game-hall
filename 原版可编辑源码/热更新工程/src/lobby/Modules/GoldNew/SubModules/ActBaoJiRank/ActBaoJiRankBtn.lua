local BtnBase = import("...Views.BtnBase")
local ActBaoJiRankBtn = class("ActBaoJiRankBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")
local RedPointManager = import("...Manager.RedPointManager")
local Config = import(".Config")
local Utils = import("...Tool.Utils")

function ActBaoJiRankBtn:getCSBPath()
    return XH.Bridge:getCCSResPath("Act/BaoJiRankBtn.csb")
end

function ActBaoJiRankBtn:onInitCSB(csbPath)
    self:initCSB(self:getCSBPath())
end

function ActBaoJiRankBtn:ctor(id, areaId, cfg)
    self._module = XH.Bridge:getModule(LocalConfig.MP.ActBJRank)
    ActBaoJiRankBtn.super.ctor(self, id, areaId, cfg)
    Utils:addSpine(self._aniNode, "ActBtns", "zzb_bjw_rukou", "animation")
    self._isInGame = areaId == LocalConfig.BTN_AREA_ID.IN_GAME and CF ~= nil
    self:updateUI()
end

function ActBaoJiRankBtn:getBindingInfo()
    return {
        ["_panel"] = {varName = "_panel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick"},
        ["_ani"] = {varName = "_ani"},
        ["_imgDingweiBg"] = {varName = "_imgDingweiBg"},
        ["_txtDingweiInfo"] = {varName = "_txtDingweiInfo"},
        ["_txtDingweiInfoInHall"] = {varName = "_txtDingweiInfoInHall"},
        ["_txtRoomInfo"] = {varName = "_txtRoomInfo"},
        ["_scoreProgress"] = {varName = "_scoreProgress"},
        ["_scoreProgressBg"] = {varName = "_scoreProgressBg"},
        ["_txtTime"] = {varName = "_txtTime"},
        ["_imgBtnInGame"] = {varName = "_imgBtnInGame"},
        -- ["_imgBtn"] = {varName = "_imgBtn"},
        ["_imgNoLimit"] = {varName = "_imgNoLimit"},
        ["_aniNode"] = {varName = "_aniNode"},
    }
end

function ActBaoJiRankBtn:getProxyEvents()
    local e = ActBaoJiRankBtn.super.getProxyEvents(self)
    table.insert(e, {module = self._module, eventKeyName = "EVENT_ACT_VAILD", callBack = "onActInfo"})
    table.insert(e, {module = self._module, eventKeyName = "EVENT_BASE_ACT_INFO", callBack = "updateUI"})
    table.insert(e, {module = self._module, eventKeyName = "EVENT_USER_ACT_INFO", callBack = "updateUI"})
    table.insert(e, {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_TIME", callBack = "onTime"})
    return e
end

function ActBaoJiRankBtn:onActInfo(event)
    if not self or tolua.isnull(self) then
        return
    end
    self:checkShow()
    self:updateUI()
end

function ActBaoJiRankBtn:onEnter()
    if self._isInGame then
        self._module:reqUserActInfo()
    end
end

function ActBaoJiRankBtn:onCleanup()
    ActBaoJiRankBtn.super.onCleanup(self)
end

function ActBaoJiRankBtn:checkShow(isFromGroup)
    local bShow = self._module:isValid()
    self:setVisible(bShow)
    if not isFromGroup then
        self:updateGroupBtnShow()
    end
end

function ActBaoJiRankBtn:getActInfo()
    return self._module:getActInfo()
end

function ActBaoJiRankBtn:onTime()
    if tolua.isnull(self) or not self.getActInfo then 
        return 
    end
    local info = self:getActInfo()
    self._txtTime:setString(self._module:getLeftTimeStr(info.weekEndTime - self._module:getServerTime()))
end

function ActBaoJiRankBtn:updateUI()
    local isInGame = self._isInGame
    local info = self:getActInfo()
    local isInDingWei = info.dingwei and info.dingwei.total > info.dingwei.played
    self._txtDingweiInfo:setString("")
    self._txtDingweiInfo:setVisible(isInGame)
    self._aniNode:setVisible(not isInGame)
    self._imgDingweiBg:setVisible(isInGame and isInDingWei)
    self._txtDingweiInfoInHall:setString("")
    self._txtDingweiInfoInHall:setVisible(not isInGame)
    self._txtRoomInfo:setString("")
    self._txtRoomInfo:setVisible(isInGame and not isInDingWei)
    self._scoreProgressBg:setVisible(isInGame and not isInDingWei)
    self._txtTime:setVisible(not isInDingWei and not isInGame)

    -- self._imgBtn:setVisible(not isInGame)
    self._imgBtnInGame:setVisible(isInGame)
    self._imgNoLimit:setVisible(false)

    if info.seasonIdx < 0 or info.seasonStatus == Config.CritSeasonStatus.Default then
        return
    end

    if isInDingWei then
        local dwStr = "定位中" .. info.dingwei.played .. "/" .. info.dingwei.total .. "局"
        self._txtDingweiInfo:setString(dwStr)
        self._txtDingweiInfoInHall:setString(dwStr)
    elseif isInGame then
        local roomLevel = CF.roomData:getRoomLevel() % 10
        local roomName = XH.GOLD_LEVEL_DEFAULT_NAME[roomLevel] or ""
        local roomScoreMax = info.weekRoomScore[roomLevel].scoreLimit
        local roomScore = info.weekRoomScore[roomLevel].score
        self._txtRoomInfo:setString(roomName)
        if roomScoreMax == -1 then
            -- 无限制
            self._scoreProgress:setPercent(100)
            self._imgNoLimit:setVisible(true)
        else
            self._scoreProgress:setPercent(roomScore / roomScoreMax * 100)
            if roomScore >= roomScoreMax then
                self._txtRoomInfo:setString("已达场次上限")
            end
        end
    end
end

function ActBaoJiRankBtn:onClick()
    self:throwClickData()
    XH.Bridge:throwData("oh25050704", {page = "金币大厅"})
    XH.Bridge.viewManager:openView("GoldHallBJRankView")
end

return ActBaoJiRankBtn
