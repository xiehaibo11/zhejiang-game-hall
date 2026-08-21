local GoldHourLoginAwardView = class("GoldHourLoginAwardView", NG.ViewBase)
local GoldHourLoginAwardDefine = require("newgold.GoldLobby.Modules.GoldHourLoginAward.Define")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")

-- 整点福利
function GoldHourLoginAwardView:getCSBPath()
    return "cocosStudio/GoldNew/Lobby/CSB/HourLoginAward/HourLoginAwardLayer.csb"
end

function GoldHourLoginAwardView:getBindingInfo()
    return {
        -- 
        ["_KW_CLOSE"] = {varName = "_KW_CLOSE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickClose"},
        ["_KW_AWARD_"] = {varName = "_KW_AWARD_", beginIndex = 1, endIndex = 2},
        ["_KW_AWARD_GET_"] = {varName = "_KW_AWARD_GET_", beginIndex = 1, endIndex = 2},
        ["_KW_ANI_"] = {varName = "_KW_ANI_", beginIndex = 1, endIndex = 2},
        ["_KW_BTN_GET_"] = {varName = "_KW_BTN_GET_", beginIndex = 1, endIndex = 2, type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickGetAward"},
        ["_KW_BTN_UNGET_"] = {varName = "_KW_BTN_UNGET_", beginIndex = 1, endIndex = 2},
        ["_KW_BTN_GETED_"] = {varName = "_KW_BTN_GETED_", beginIndex = 1, endIndex = 2},
        ["_KW_BTN_TIMEOUT_"] = {varName = "_KW_BTN_TIMEOUT_", beginIndex = 1, endIndex = 2},
        ["_KW_TIME_"] = {varName = "_KW_TIME_", beginIndex = 1, endIndex = 2}
    }
end

function GoldHourLoginAwardView:getProxyEvents()
    return {
        --
        {module = NG.goldLobby:getModule("GoldHourLoginAward"), eventKeyName = "EVENT_ZDFL_INFO_SUCCESS", callBack = "flushInfo"}
    }
end

function GoldHourLoginAwardView:ctor(param)
    GoldHourLoginAwardView.super.ctor(self, param)
    self:initUI()
    NG.goldLobby:getModule("GoldHourLoginAward"):reqActInfo()
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.NEW_GOLD_THROW_25, nil, {area_id = GoldAreaConfig.AreaID})
end

function GoldHourLoginAwardView:flushInfo()
    self._info = NG.goldLobby:getModule("GoldHourLoginAward"):getActInfo()
    if self._info == nil or self._info.info == nil or self._info.data == nil then
        NG.TipTool.showToast("活动已结束")
        self:close()
        return
    end
    self:updateInfos()
end

-- 领奖
function GoldHourLoginAwardView:onClickGetAward(send)
    if self._info.info == nil then
        NG.TipTool.showToast("请求领奖异常，请重新打开页面重试")
        return
    end
    local name = send:getName()
    local idx = string.split(name, "_KW_BTN_GET_")[2]
    local goods = json.decode(self._info.info.ext).goods
    NG.goldLobby:getModule("GoldHourLoginAward"):reqActGameRewards(goods[tonumber(idx)].id)
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.NEW_GOLD_THROW_24, nil, {area_id = GoldAreaConfig.AreaID})
end

function GoldHourLoginAwardView:onClickClose()
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.NEW_GOLD_THROW_23, nil, {area_id = GoldAreaConfig.AreaID})
    self:close()
end

-- 更新领奖状态
function GoldHourLoginAwardView:updateAwardState(idx, canAward)
    self["_KW_AWARD_GET_" .. idx]:setVisible(canAward)
    self["_KW_AWARD_" .. idx]:setVisible(not canAward)
end

-- 更新按钮状态
function GoldHourLoginAwardView:updateBtnState(idx, state)
    self["_KW_BTN_GET_" .. idx]:setVisible(state == GoldHourLoginAwardDefine.STATE.CANAWARD) -- 可领取
    self["_KW_BTN_UNGET_" .. idx]:setVisible(state == GoldHourLoginAwardDefine.STATE.UNOPEN) -- 未开启
    self["_KW_BTN_TIMEOUT_" .. idx]:setVisible(state == GoldHourLoginAwardDefine.STATE.HADAWARD) -- 已领取
    self["_KW_BTN_GETED_" .. idx]:setVisible(state == GoldHourLoginAwardDefine.STATE.TIMEOUT) -- 已过期
end

function GoldHourLoginAwardView:updateInfos()
    local goods = json.decode(self._info.info.ext).goods
    for i = 1, 2 do
        local info = goods[i]
        self:updateAwardState(i, NG.goldLobby:getModule("GoldHourLoginAward"):getAwardState(info.id) == GoldHourLoginAwardDefine.STATE.CANAWARD)
        self:updateBtnState(i, NG.goldLobby:getModule("GoldHourLoginAward"):getAwardState(info.id))
        self["_KW_TIME_" .. i]:setString(info.start .. "-" .. info["end"])
    end
end

function GoldHourLoginAwardView:initUI()
    -- for i = 1, 2 do
    --     local params = {path = "cocosStudio/GoldNew/Lobby/Json/Zhengdianfuli/", tex = "Zhengdianfuli.json", ske = "Zhengdianfuli.atlas", armatureName = "animation"}
    --     local spineNode = display.playDargonBonesSpine(params)
    --     if spineNode then
    --         self["_KW_ANI_" .. i]:addChild(spineNode)
    --         spineNode:setScale(2.5)
    --     end
    -- end
end

return GoldHourLoginAwardView

U