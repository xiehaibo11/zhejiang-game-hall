local PromoteHallView = class("PromoteHallView", XH.ViewBase)
local LobbyConfig = require("lobby.Modules.Lobby.Config")
local PromoteConfig = require("lobby.Modules.Promote.Config")

function PromoteHallView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/Promote/PromoteHallLayer.csb"
end

function PromoteHallView:getBindingInfo()
    return {["_KW_TITILE2"] = {varName = "KW_TITILE2"}, ["_KW_TITILE1"] = {varName = "KW_TITILE1"}, ["_KW_ROOT_LAYER"] = {varName = "_rootLayer"}, ["_KW_SCROLLVIEW"] = {varName = "_scrollView"}, ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"}, ["_KW_BTN_GO"] = {varName = "_btnGo", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnGo"}, ["_KW_BTN_SHARE"] = {varName = "_btnShare", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnShare"}}
end

function PromoteHallView:ctor()
    PromoteHallView.super.ctor(self)
    self._needTime = -1
    self._lTime = 0
    self:initUI()
    XH.lobby:getModule("TeaHouseList"):reqTeaHouseList()
end

function PromoteHallView:startRunAction()
    local repeatAct2 = cc.RepeatForever:create(cc.Sequence:create(cc.CallFunc:create(function()
        self._lTime = self._lTime + 0.05
        if self._lTime >= self._needTime and self._needTime ~= 0 then
            self:scrollToRight()
            self._lTime = 0
        end
        local defaultX = -1500
        if self._scrollView:getInnerContainerPosition().x == defaultX then
            self._btnShare:setVisible(true)
            self._btnGo:setVisible(true)
            self._btnClose:setVisible(true)
            self._needTime = 0
            self.KW_TITILE1:stopAllActions()
        end
    end), cc.DelayTime:create(0.05)))
    self.KW_TITILE1:runAction(repeatAct2)
end

function PromoteHallView:scrollToRight()
    if self._needTime == 0 then
        return
    end
    self._scrollView:stopOverallScroll()
    local needTime = (1500 + self._scrollView:getInnerContainerPosition().x) / 750
    self._scrollView:scrollToRight(needTime, false)
    self._needTime = needTime
end

function PromoteHallView:initUI()
    self:startRunAction()
    self:scrollToRight()
end

function PromoteHallView:removefulshPropSchedule()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function PromoteHallView:onBtnClose()
    self:removefulshPropSchedule()
    local todatTimes = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_PROMOTE_HALL_CLOSE, 0)
    if todatTimes ~= 0 then
        self:close()
        return
    end
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_PROMOTE_HALL_CLOSE, 1)
    XH.lobby:getModule("Lobby"):getLobbyIconWorldPos(LobbyConfig.ICON_ID.PROMOTE_ACT, function(worldPos, size)
        if worldPos ~= nil then
            local worldSize = cc.Director:getInstance():getWinSize()
            local perX = worldPos.x / worldSize.width
            local perY = worldPos.y / worldSize.height
            self._rootLayer:setAnchorPoint(cc.p(perX, perY))
            self._rootLayer:setPosition(cc.p(self._rootLayer:getContentSize().width * perX, self._rootLayer:getContentSize().height * perY))
            self._rootLayer:runAction(cc.Sequence:create(cc.ScaleTo:create(1, 0), cc.CallFunc:create(function()
                self:close()
            end)))
        else
            self:close()
        end
    end)
end

function PromoteHallView:onBtnGo()
    local teahouseLists = XH.lobby:getModule("TeaHouseList"):getTeaHousePendingList()
    if teahouseLists == nil then
        teahouseLists = {}
    end
    local teahouseData = XH.teaHouseManager:getTeaHouseData()
    if teahouseData ~= nil then
        local reNewInfos = teahouseData:getTeaHouseList()
        for teaid, info in pairs(reNewInfos) do
            teahouseLists[#teahouseLists + 1] = info
        end
    end
    if #teahouseLists > 0 then
        -- 进入最近一次的比赛场
        local teaid = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_PROMOTE_LAST_TEAID, 0)
        local nTeaNumber = 0
        local joinTeaid = 0
        for i = 1, #teahouseLists do
            if teahouseLists[i].nPasswd == teaid then
                joinTeaid = teaid
                nTeaNumber = teahouseLists[i].nTeaNumber
                break
            end
        end
        if joinTeaid == 0 then
            joinTeaid = teahouseLists[1].nPasswd
            nTeaNumber = teahouseLists[1].nTeaNumber
        end
        -- 进入比赛场拉
        XH.lobby:getModule("Promote"):reqSpreadInviteClick(nTeaNumber)
        -- XH.teaHouseManager:joinTeaHouse(joinTeaid, nil, XH.lobby:getModule("Promote").joinModeRoom)
        XH.teaHouseManager:joinTeaHouse(joinTeaid, nil, XH.lobby:getModule("Promote").openUserTipView)
    else
        local gameid = 0
        if PromoteConfig[XH.areaData:getLobbyID()] ~= nil then
            gameid = PromoteConfig[XH.areaData:getLobbyID()].GAMEID
        end
        XH.viewManager:openView("CreateBoxRoomView", nil, {isPromote = true, gameid = gameid})
    end
    XH.throwDataManager:throwData(XH.ThrowDataDefine.PROMOTE_ACT_CLICK1, {userid = XH.playerData:getNumberID()})
    self:close()
end

function PromoteHallView:onBtnShare()
    XH.throwDataManager:throwData(XH.ThrowDataDefine.PROMOTE_ACT_CLICK2, {userid = XH.playerData:getNumberID()})
    XH.lobby:getModule("Promote"):shreToWx()
end

return PromoteHallView
