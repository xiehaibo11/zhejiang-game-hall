---@class TeaHouseGuideModule : Module
local TeaHouseGuideModule = class("TeaHouseGuideModule", TeaHouse.Module)

TeaHouseGuideModule.EVENT_TYPE_START_CREATE_GUIDE = "EVENT_TYPE_START_CREATE_GUIDE"
TeaHouseGuideModule.EVENT_TYPE_START_MEMBER_POWER_GUIDE = "EVENT_TYPE_START_MEMBER_POWER_GUIDE"
TeaHouseGuideModule.EVENT_TYPE_NEW_JOIN = "EVENT_TYPE_NEW_JOIN"

local CREATE_GUIDE_FLEW = {
    None = 0,
    ShowTip = 1,
    Over = 2,
}

local JOIN_GUIDE_FLOW= {
    None = 0,
    ShowBtnTip = 1,
    ShowAgreeTip = 2,
    ShowPowerTip = 3,
    Over = 4,
}

function TeaHouseGuideModule:onCreate()
    TeaHouseGuideModule.super.onCreate(self)

    local teahouseList = TeaHouse.manager.teahouseList
    self:createListener(teahouseList)
    :addEventListener(teahouseList.EVENT_TEA_HOUSE_LIST_ADD, handler(self, self.onTeaHouseListAdd))

    local teahouseMain = TeaHouse.manager.teahouseMain
    self:createListener(teahouseMain)
    :addEventListener(teahouseMain.EVENT_TEA_HOUSE_INFO_UPDATE, handler(self, self.onTeaHouseInfoUpdate))

    local teahouseMember = TeaHouse.manager.teahouseMember
    self:createListener(teahouseMember)
    :addEventListener(teahouseMember.EVENT_MEMBER_LIST_CHANGED, handler(self, self.onMemberListUpdate))

    self._createTeaHouse = false
    self._joinTeaHouse = false
end

function TeaHouseGuideModule:onDestroy()
    self:removeScheToShowSchedule()
    TeaHouseGuideModule.super.onDestroy(self)
end

function TeaHouseGuideModule:onTeaHouseListAdd(event)
    if event then
        local teaHouseList = TeaHouse.manager.teahouseData:getTeaHouseList()
        local ownerNum = 0
        for teaid, info in pairs(teaHouseList) do
            if info.nTeaOwnerNumid == TeaHouse.BridgeData.getNumberID() then
                ownerNum = ownerNum + 1
            end
        end
        -- TOOP
        if ownerNum == 1 and (self:isCreateGuideFlowNoneTip() or self:isCreateGuideFlowShowTip()) then
            self._createTeaHouse = true
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_FIRST_CREATE_TEA_HOUSE, CREATE_GUIDE_FLEW.ShowTip)
        elseif ownerNum > 1 and self:isCreateGuideFlowShowTip() then
            self._createTeaHouse = true
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_FIRST_CREATE_TEA_HOUSE, CREATE_GUIDE_FLEW.ShowTip)
        else
            self:endCreateTeaHouseGuide()
        end
    end
end

function TeaHouseGuideModule:onTeaHouseInfoUpdate(event)
    if event then
        local teahouseData = TeaHouse.manager.teahouseData
        if teahouseData:isOwner() and (XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_FIRST_SET_PLAYER_JOIN, JOIN_GUIDE_FLOW.None) <= JOIN_GUIDE_FLOW.ShowBtnTip)
            and (teahouseData:getPlayerCount() == self:getTeaHouseFirstMemberJoin()) then
            self._joinTeaHouse = true
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_FIRST_SET_PLAYER_JOIN, JOIN_GUIDE_FLOW.ShowBtnTip)
        elseif self:isJoinGuideFlowNoneTip() then
            self:endSetPlayerJoinGuide()
        end
        self:removeScheToShowSchedule()
        self._scheToShow = cc.Director:getInstance():getScheduler():scheduleScriptFunc( function()
            self:dispatchEvent({ name = self.EVENT_TYPE_NEW_JOIN, data = self:isJoinGuideFlowBtnTip() })
            self:removeScheToShowSchedule()
        end , 0.7, false)
    end
end

function TeaHouseGuideModule:removeScheToShowSchedule()
    if self._scheToShow then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._scheToShow)
        self._scheToShow = nil
    end
end

function TeaHouseGuideModule:onMemberListUpdate(event)
    if event and event.data then
        local data = event.data 
        if data.joinTeaHouse > 0 and self:isJoinGuideFlowAgreeTip() then
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_FIRST_SET_PLAYER_JOIN, JOIN_GUIDE_FLOW.ShowPowerTip)
            self:startMemberPowerGuide()
        elseif data.joinTeaHouse > 0 and self:isJoinGuideFlowPowerTip() then
            self:startMemberPowerGuide()
        elseif data.joinTeaHouse == 0 then
            self:dispatchEvent({ name = self.EVENT_TYPE_START_MEMBER_POWER_GUIDE, data = false })
        end
    end
end

--XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_FIRST_CREATE_TEA_HOUSE, true)
--XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_FIRST_SET_PLAYER_JOIN, true)
function TeaHouseGuideModule:startCreateTeaHouseGuide()
    if self:isCreateGuideFlowShowTip() then
        self._createTeaHouse = false
        self:dispatchEvent({ name = self.EVENT_TYPE_START_CREATE_GUIDE })
        return true
    end
    return false
end

function TeaHouseGuideModule:startMemberPowerGuide()
    if self:isJoinGuideFlowPowerTip() then
        self:dispatchEvent({ name = self.EVENT_TYPE_START_MEMBER_POWER_GUIDE, data = true })
    end
end

function TeaHouseGuideModule:isCreateHouse()
    return self._createTeaHouse
end

function TeaHouseGuideModule:isCreateGuideFlowNoneTip()
    return XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_FIRST_CREATE_TEA_HOUSE, CREATE_GUIDE_FLEW.None) == CREATE_GUIDE_FLEW.None
end

function TeaHouseGuideModule:isCreateGuideFlowShowTip()
    return XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_FIRST_CREATE_TEA_HOUSE, CREATE_GUIDE_FLEW.None) == CREATE_GUIDE_FLEW.ShowTip
end

function TeaHouseGuideModule:isJoinGuideFlowNoneTip()
    return XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_FIRST_SET_PLAYER_JOIN, JOIN_GUIDE_FLOW.None) == JOIN_GUIDE_FLOW.None
end

function TeaHouseGuideModule:isJoinGuideFlowAgreeTip()
    return (XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_FIRST_SET_PLAYER_JOIN, JOIN_GUIDE_FLOW.None) == JOIN_GUIDE_FLOW.ShowAgreeTip) or self:isJoinGuideFlowBtnTip()
end

function TeaHouseGuideModule:isJoinGuideFlowBtnTip()
    return XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_FIRST_SET_PLAYER_JOIN, JOIN_GUIDE_FLOW.None) == JOIN_GUIDE_FLOW.ShowBtnTip
end

function TeaHouseGuideModule:isJoinGuideFlowPowerTip()
    return XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_FIRST_SET_PLAYER_JOIN, JOIN_GUIDE_FLOW.None) == JOIN_GUIDE_FLOW.ShowPowerTip
end

function TeaHouseGuideModule:nextJoinGuideFlow(step)
    step = step or 1
    local flow = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_FIRST_SET_PLAYER_JOIN, JOIN_GUIDE_FLOW.None)
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_FIRST_SET_PLAYER_JOIN, flow + step)
    self:dispatchEvent({ name = self.EVENT_TYPE_NEW_JOIN, data = self:isJoinGuideFlowBtnTip() })
end

function TeaHouseGuideModule:endCreateTeaHouseGuide()
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_FIRST_CREATE_TEA_HOUSE, CREATE_GUIDE_FLEW.Over)
end

function TeaHouseGuideModule:endSetPlayerJoinGuide()
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_FIRST_SET_PLAYER_JOIN, JOIN_GUIDE_FLOW.Over)
end

function TeaHouseGuideModule:cleanGuideCode()
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_FIRST_CREATE_TEA_HOUSE, CREATE_GUIDE_FLEW.None)
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_FIRST_SET_PLAYER_JOIN, JOIN_GUIDE_FLOW.None)
end

function TeaHouseGuideModule:getTeaHouseFirstMember()
    if TeaHouse.BridgeData:isRemodelArea() then
        return 1
    end
    if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.SHAOXING3D then
        return 0
    end
    if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.YUYAO then
        return 0
    end
    if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.NINGBO then
        return 0
    end
    if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.ZHOUSHAN then
        return 0
    end
    return 0
end

function TeaHouseGuideModule:getTeaHouseFirstMemberJoin()
    if TeaHouse.BridgeData:isRemodelArea() then
        return 1
    end
    if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.SHAOXING3D then
        return 1
    end
    if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.YUYAO then
        return 1
    end
    if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.NINGBO then
        return 1
    end
    if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.ZHOUSHAN then
        return 1
    end
    return 0
end

return TeaHouseGuideModule