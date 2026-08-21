local GoldDisIconView = class("GoldDisIconView", NG.ViewBase)
local GoldNewDefine = require("src.newgold.GoldLobby.Modules.Gold.Define")
local GoldStoreDefine = require("newgold.GoldLobby.Modules.GoldStore.Define")
local GoldActDefine = require("newgold.GoldLobby.Modules.GoldBankrupt.Define")

-- 一把翻本
function GoldDisIconView:getCSBPath()
    return "cocosStudio/GoldNew/Lobby/CSB/GoldBankrupt/GoldDisIcon.csb"
end

function GoldDisIconView:getBindingInfo()
    return {
        -- 
        ["_KW_BTN"] = { varName = "_KW_BTN", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClick" },
        ["_KW_TEXT_TIME"] = { varName = "_KW_TEXT_TIME" },
        ["_KW_ANI"] = { varName = "_KW_ANI" },
    }
end

function GoldDisIconView:getProxyEvents()
    return {
        { module = NG.goldLobby:getModule("GoldStore"), eventKeyName = "EVNET_SHOPMANAGER_EXCHANGE_SUCCESS", callBack = "onExchangeSuccess" },
        { module = NG.goldLobby:getModule("GoldBankrupt"), eventKeyName = "EVNET_GOLD_ACT_DISCOUNT_INFO", callBack = "onActDisInfo" },
    }
end

function GoldDisIconView:ctor(param)
    GoldDisIconView.super.ctor(self, param)
    self._isInTime = false
    self._isHall = param.isHall
    self:initUI()
    self:initAni()
    self:hide()
    -- self:updateTime(os.time() + 300)
    NG.goldLobby:getModule("GoldBankrupt"):reqActInfo(0, 0, GoldActDefine.ACT_REQ_TYPE.INFO)
end

function GoldDisIconView:initAni()
    local params = { path = "cocosStudio/GoldNew/Lobby/Json/bankrupt/", tex = "skeleton.json", ske = "skeleton.atlas", armatureName = "animation", scale = 1 }
    local spineNode = display.playDargonBonesSpine(params)
    if spineNode then
        self._KW_ANI:addChild(spineNode)
        spineNode:setScale(1)
    end
    -- local params = { path = "cocosStudio/GoldNew/Lobby/Json/bankrupt/", tex = "Ybfb_jt.json", ske = "Ybfb_jt.atlas", armatureName = "animation" }
    -- local spineNode = display.playDargonBonesSpine(params)
    -- if spineNode then
    --     self._KW_ANI_1:addChild(spineNode)
    --     spineNode:setScale(2.5)
    -- end
end

-- 时间转化
function GoldDisIconView:formatTime(time)
    local hour = math.floor(time / 3600);
    local minute = math.floor((time - hour * 3600) / 60)
    local second = math.floor(time % 60)
    if hour == 0 then
        return string.format("%02d:%02d", minute, second)
    else
        return string.format("%02d:%02d:%02d", hour, minute, second)
    end
end

function GoldDisIconView:updateTime(timestamp)
    if tolua.isnull(self) then return end
    timestamp = timestamp or 0
    self._leftTime = timestamp - os.time()
    self._isInTime = self._leftTime > 0

    self._KW_TEXT_TIME:stopAllActions()
    if self._leftTime <= 0 then
        self._leftTime = 0
        self:hide()
    else
        self:show()
        self._KW_TEXT_TIME:runAction(cc.Sequence:create(cc.DelayTime:create(1), cc.CallFunc:create(function()
            self:updateTime(timestamp)
        end)))
    end
    self._KW_TEXT_TIME:setString(self:formatTime(self._leftTime))
end

function GoldDisIconView:initUI()
end


function GoldDisIconView:onClick()
    NG.goldLobby:getModule("GoldBankrupt"):showActView(0, true)
    -- NG.goldLobby:getModule("GoldBankrupt"):updateShowActState(false, false)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_GOLD_ACT_ICON_CLICK, nil, { click_source = self._isHall and 0 or 1 })
end

-- 获取到商品信息
function GoldDisIconView:onExchangeSuccess(event)
    if event.data == nil or event.data.propType ~= GoldStoreDefine.GOLD_TYPE_DISCOUNT then
        return
    end
    self:hide()
    self:updateTime(0)
end

-- 当前的折扣信息
function GoldDisIconView:onActDisInfo(event)
    if event.data == nil then
        return
    end
    self:updateTime(event.data.endTime or 0)
end

return GoldDisIconView