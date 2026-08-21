local EnterRoomGiftPackModule = class("EnterRoomGiftPackModule", NG.ModuleBase)

function EnterRoomGiftPackModule:ctor()
    EnterRoomGiftPackModule.super.ctor(self)
end

-- 获取排序后的活动列表
function EnterRoomGiftPackModule:getActList()
    local addAct = {}
    local czcwAct = self:getCzcwAct()
    if czcwAct ~= nil then
        addAct[#addAct + 1] = czcwAct
    end
    local signAct = self:getSignAct()
    if signAct ~= nil then
        addAct[#addAct + 1] = signAct
    end
    local hourAct = self:getHourAct()
    if hourAct ~= nil then
        addAct[#addAct + 1] = hourAct
    end
    return self:sortActList(addAct)
end

-- 重新排序（上述为排序1，此处为排序2）
function EnterRoomGiftPackModule:sortActList(act)
    local sortActCan = {}
    local sortActWait = {}
    local sortActTomorrow = {}
    for i = 1, #act do
        if act[i].status == "免费领取" then
            sortActCan[#sortActCan + 1] = act[i]
        elseif act[i].status == "明日可领" then
            sortActTomorrow[#sortActTomorrow + 1] = act[i]
        else
            sortActWait[#sortActWait + 1] = act[i]
        end
    end
    for i = 1, #sortActWait do
        sortActCan[#sortActCan + 1] = sortActWait[i]
    end
    for i = 1, #sortActTomorrow do
        sortActCan[#sortActCan + 1] = sortActTomorrow[i]
    end
    return sortActCan
end

-- 签到状态
function EnterRoomGiftPackModule:getSignAct()
    local signAct = NG.goldLobby:getModule("GoldDailySignIn"):getActInfo()
    if signAct ~= nil then
        local canSign = signAct.progressLog[#signAct.progressLog]
        local act = {
            name = "每日签到",
        }
        local itemInfo
        for i = 1, #signAct.content do
            if signAct.progress == (i - 1) and canSign == 0 then
                itemInfo = signAct.content[i]
                break
            elseif signAct.progress == i and canSign == 1 then
                itemInfo = signAct.content[i + 1] or signAct.content[1]
                break
            end
        end
        if canSign == 0 then
            act.status = "免费领取"
        else
            act.status = "明日可领"
        end
        if itemInfo ~= nil then
            act.award = itemInfo.rewards[1].count .. " " .. itemInfo.rewards[1].name
        end
        return act
    end
    return nil
end

-- 超值畅玩状态
function EnterRoomGiftPackModule:getCzcwAct()
    local info = NG.goldLobby:getModule("GoldPlayAward"):getActInfo()
    if info ~= nil then
        local isCanGetFree = NG.goldLobby:getModule("GoldPlayAward"):isCanGetFree()
        local leftCnt = NG.goldLobby:getModule("GoldPlayAward"):getLeftCnt()
        local cnt = 6 -- 先写死，后面有调整再说
        if isCanGetFree and leftCnt == 0 then
            return {
                name = "超值畅玩",
                award = "开局补豆 " .. cnt .. "次",
                status = "免费领取"
            }
        end
    end
    return nil
end

-- 整点福利状态
function EnterRoomGiftPackModule:getHourAct()
    local info = NG.goldLobby:getModule("GoldHourLoginAward"):getActInfo()
    if info ~= nil then
        local act = {
            name = "整点福利",
            award = "5000 欢乐豆"
        }
        if NG.goldLobby:getModule("GoldHourLoginAward"):isCanGetAward() then
            act.status = "免费领取"
        else
            local time = NG.goldLobby:getModule("GoldHourLoginAward"):getAwardTimeToDay()
            if time == nil then
                act.status = "明日可领"
            else
                act.status = time .. "可领"
            end
        end
        return act
    end
    return nil
end

return EnterRoomGiftPackModule