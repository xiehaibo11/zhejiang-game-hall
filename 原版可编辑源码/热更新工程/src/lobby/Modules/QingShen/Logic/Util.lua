-- -*- coding: utf-8 -*-
--- QingShen 模块共享工具（常量 / 座位解析 / 商品字段 / spine 回调）
local Define = require("lobby.Modules.QingShen.Define")
local PropPushDefine = require("lobby.Modules.PropPush.Define")
local cjson = require("cjson")

local Util = {}
Util.Define = Define
Util.PropPushDefine = PropPushDefine
Util.cjson = cjson

Util.EquipState = {
    TakeOff = "TakeOff",
    Wear = "Wear",
}

Util.HEAD_LOOP_SPINE_NAME = Define.HEAD_LOOP_SPINE_NAME
Util.HEAD_UP_SPINE_NAME = Define.HEAD_UP_SPINE_NAME
Util.QS_ICON_ANIM_LOOP = Define.QS_ICON_ANIM_LOOP
Util.QING_SHEN_PROP_ID = Define.QingShenPropId

Util.QING_SHEN_PROP_SET = {}
for _, id in pairs(Util.QING_SHEN_PROP_ID) do
    local n = tonumber(id)
    if n then
        Util.QING_SHEN_PROP_SET[n] = true
    end
end

Util.ICON_CANDIDATE_PROP_IDS = {}
do
    local ids = Util.ICON_CANDIDATE_PROP_IDS
    for _, id in pairs(Util.QING_SHEN_PROP_ID) do
        if Util.QS_ICON_ANIM_LOOP[id] then
            ids[#ids + 1] = id
        end
    end
end

function Util.getPropPushModule()
    return XH.lobby and XH.lobby.getModule and XH.lobby:getModule("PropPush")
end

local Compat = require("lobby.Modules.PropPush.Compat")

function Util.chairIdFromRoomUserId(userId)
    return Compat.seatFromUserId(userId)
end

function Util.userIdFromChairId(chairId)
    chairId = tonumber(chairId)
    if chairId == nil or chairId < 0 then
        return nil
    end
    return Compat.userIdFromSeat(chairId)
end

function Util.isEquipWorn(state)
    if state == nil then
        return false
    end
    if state == Util.EquipState.TakeOff or state == 0 or state == "0" then
        return false
    end
    return true
end

function Util.iconBadgeSaveKey()
    local uid = Compat.getMyNumberId() or 0
    return Define.ICON_BADGE_SAVE_KEY .. tostring(uid)
end

function Util.exchangeLevelFromGood(g)
    local ext = g and g.ext or ""
    local n = string.match(ext, "level=(%d+)")
    return tonumber(n)
end

function Util.enrichGoodInfoForQingShen(g)
    if not g then
        return
    end
    local act = g.act
    if act then
        g.strategyId = act.strategyId
        g.business = act.business
    end
    if g.gid == nil and g.id ~= nil then
        g.gid = g.id
    end
    local sc = g.scoreConf and g.scoreConf[1]
    local pid = sc and tonumber(sc.propId)
    if not pid or pid == 0 then
        pid = tonumber(g.defaultCostPropid)
    end
    g.costPropId = pid
end

function Util.priceTripleFromGood(g)
    if not g then
        return 0, 0, 1
    end
    local pay = tonumber(g.condition) or tonumber(g.price)
    if not pay or pay <= 0 then
        local sc = g.scoreConf and g.scoreConf[1]
        pay = sc and tonumber(sc.score) or nil
    end
    if not pay or pay <= 0 then
        pay = tonumber(g.displayPrice)
    end
    local show = tonumber(g.displayPrice) or pay
    pay = tonumber(pay) or 0
    show = tonumber(show) or 0
    local disc = (show > 0 and pay >= 0) and (pay / show) or 1
    show = (show > 0) and show or pay
    return pay, show, disc
end

function Util.onSpineCompleteRemove(spine, nextFn)
    spine:registerSpineEventHandler(function()
        display.performWithDelay(spine, function()
            if not spine or tolua.isnull(spine) then
                return
            end
            -- 被换装/同步主动打断时不再执行后续（避免旧神回调再挂一层）
            if spine._qingShenCancelled then
                return
            end
            spine:removeFromParent()
            if nextFn then
                nextFn()
            end
        end, 0)
    end, sp.EventType.ANIMATION_COMPLETE)
end

return Util
