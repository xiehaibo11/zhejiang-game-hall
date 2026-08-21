local UserPathModule = class("UserPathModule", XH.ModuleBase)

function UserPathModule:ctor()
    UserPathModule.super.ctor(self)
    self:initData()
    self:loadData()
end

function UserPathModule:initData()
    self._regTime = -1
    self._firstStart = false
    self._waitReport = {}
    self._isInitSucc = false
    if _G.NEW_THROW_DATA then
        self._isInitSucc = true
    end
end

function UserPathModule:loadData()
    self._firstStart = cc.UserDefault:getInstance():getIntegerForKey("IS_FIRST_IN_KEY", 0) == 0
    if self._firstStart then
        cc.UserDefault:getInstance():setIntegerForKey("IS_FIRST_IN_KEY", 1)
    end
end

function UserPathModule:setRegTime()
    self._regTime = XH.playerData:getRegTime()
end

function UserPathModule:startTrack()
    self:setRegTime()
    self._isInitSucc = true
    if #self._waitReport > 0 then
        for i, _ in ipairs(self._waitReport) do
            self:throwDataRepeat(self._waitReport[i].dataName, self._waitReport[i].recordData, self._waitReport[i].isJudgeNewPlayer, self._waitReport[i].extKey);
        end
        self._waitReport = {}
    end
end

function UserPathModule:isNewPlayer()
    return os.time() - self._regTime < 60 * 60 * 24
end

function UserPathModule:firstStart()
    return self._firstStart and "首次" or "非首次"
end

function UserPathModule:throwDataOnce(dataName, recordData, isJudgeNewPlayer, extKey)
    if not dataName or not recordData then
        return
    end
    local extKey = extKey or ""
    local recordKey = self:getRecordKey(dataName, extKey)
    if cc.UserDefault:getInstance():getIntegerForKey(recordKey, 0) == 0 then
        -- 可以开始上报数据
        if self._isInitSucc then
            self:throwDataRepeat(dataName, recordData, isJudgeNewPlayer, extKey)
        else
            table.insert(self._waitReport, {dataName = dataName, recordData = recordData, extKey = extKey ,isJudgeNewPlayer = isJudgeNewPlayer})
        end
        cc.UserDefault:getInstance():setIntegerForKey(recordKey, 1)
    end
end

function UserPathModule:throwDataRepeat(dataName, recordData, isJudgeNewPlayer, isSupplement)
    if not dataName or not recordData then
        return
    end
    if isJudgeNewPlayer then
        recordData.page_item_id = self:isNewPlayer() and "新用户" or "非新用户"
    end
    if isSupplement then
        recordData.block_item_id = "补充实名"
    else
        recordData.block_item_id = ""
    end
    if XH.NewThrowDataManager and self._isInitSucc then
        XH.NewThrowDataManager:throwData(dataName, recordData, recordData.customize)
    else
        table.insert(self._waitReport, {dataName = dataName, recordData = recordData, isJudgeNewPlayer = isJudgeNewPlayer})
    end
end

function UserPathModule:getRecordKey(dataName, extKey)
    return 'USER_PATH_' .. (dataName or "") .. '_' .. (extKey or "")
end

return UserPathModule�