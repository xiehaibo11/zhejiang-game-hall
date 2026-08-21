local SkinBundleModule = class("SkinBundleModule", XH.ModuleBase)
local defaultState = {owned = false, equipped = false, overdueTime = 0}
local LOCAL_TEST = false
local LOCAL_TEST_TIME = 20

SkinBundleModule.EVENT_SKIN_BUNDLE_SHOW = "EVENT_SKIN_BUNDLE_SHOW"
SkinBundleModule.BUNDLE_INFO = {
    {props = XH.XGSJ_PROP_ID, module = XH.lobby:getModule("XiaGuang")},
    default = {props = XH.XGSJ_PROP_ID}
}

function SkinBundleModule:ctor()
    SkinBundleModule.super.ctor(self)
    self._propState = {}
    self._scheduleID = {}
end

function SkinBundleModule:setPropEquipped(propID, equipped)
    local bundleID = self:getPropIDInBundlerID(propID)
    if bundleID > 0 then
        local stateInfo = self._propState[propID]
        local info = self:getSkinBundleInfo(bundleID)
        if equipped == true then
            if stateInfo.owned and stateInfo.equipped == false and stateInfo.overdueTime > os.time() then
                if not LOCAL_TEST then
                    (info.module):wear(propID, nil, false)
                end
            end
        else
            if stateInfo.equipped == true then
                if not LOCAL_TEST then
                    (info.module):takeOff(propID, nil, false)
                end
            end
        end
        self._propState[propID].equipped = equipped
    end
end

function SkinBundleModule:isPropIDInSkinBundle(propID)
    if self:getPropIDInBundlerID(propID) > 0 then
        return true
    end
    return false
end

function SkinBundleModule:getPropIDInBundlerID(propID)
    for i = 1, #SkinBundleModule.BUNDLE_INFO do
        local info = SkinBundleModule.BUNDLE_INFO[i]
        for _, v in pairs(info.props) do
            if v == propID then
                return i
            end
        end
    end
    return 0
end

function SkinBundleModule:getPropState(propID)
    return self._propState[propID] or clone(defaultState)
end

function SkinBundleModule:isPropInUse(propID)
    if not self:isPropIDInSkinBundle(propID) then
        return false
    end
    local stateInfo = self._propState[propID]
    if stateInfo and stateInfo.owned and stateInfo.equipped and stateInfo.overdueTime > os.time() then
        return true
    end
    return false
end

function SkinBundleModule:getSkinBundleInfo(bundleID)
    return SkinBundleModule.BUNDLE_INFO[bundleID] or SkinBundleModule.BUNDLE_INFO["default"]
end

function SkinBundleModule:updatePropState(bundleID)
    local info = self:getSkinBundleInfo(bundleID)
    for _, propID in pairs(info.props) do
        local leftTime = (info.module):getPropLeftTime(propID)
        local state = {
            owned = leftTime ~= 0,
            equipped = (info.module):getWearState(propID),
            overdueTime = leftTime + os.time()
        }
        self._propState[propID] = state
        if LOCAL_TEST then
            self._propState[propID] = {owned = true, equipped = true, overdueTime = os.time() + LOCAL_TEST_TIME} -- TODO
        end
    end
    self:dispatchEvent({name = self.EVENT_SKIN_BUNDLE_SHOW})

    if self._scheduleID[bundleID] ~= nil then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._scheduleID[bundleID])
        self._scheduleID[bundleID] = nil
    end
    local delayTime = XH.lobby:getModule("XiaGuang"):getPropLeftTimeSmallest()
    if LOCAL_TEST then
        delayTime = LOCAL_TEST_TIME
    end
    if delayTime > 0 then
        self._scheduleID[bundleID] =
            XH.SysTool.performDelayOnce(
            function()
                if LOCAL_TEST then
                    local info2 = self:getSkinBundleInfo(bundleID)
                    for _, propID in pairs(info2.props) do
                        self._propState[propID] = {owned = false, equipped = false, overdueTime = 0} -- TODO
                    end
                else
                    XH.lobby:getModule("BagSysNew"):reqSelfBagData()
                end
                self:dispatchEvent({name = self.EVENT_SKIN_BUNDLE_SHOW}) -- 过期
                cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._scheduleID[bundleID])
                self._scheduleID[bundleID] = nil
            end,
            delayTime
        )
    end
end

return SkinBundleModule