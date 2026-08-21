local BtnBase = import("..BtnBase")
local LuckyBagBtn = class("LuckyBagBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")

function LuckyBagBtn:ctor(id, areaId, cfg)
    LuckyBagBtn.super.ctor(self, id, areaId, cfg)
end

function LuckyBagBtn:getCfgSize()
    return cc.size(160, 160)
end

function LuckyBagBtn:getProxyEvents()
    local e = LuckyBagBtn.super.getProxyEvents(self)
    table.insert(e, {module = XH.lobby:getModule("Share"), eventKeyName = "EVENT_UPDATE_LUCKY_BAG_ICON", callBack = "onEventUpdateLuckyBagIcon"})
    return e
end

function LuckyBagBtn:onEventUpdateLuckyBagIcon(event)
    if not event or not event.data then
        return
    end

    local visible = event.data.visible or false
    if not visible then
        self:checkShow(true)
    end
end


function LuckyBagBtn:checkShow(isFromGroup)
    self:setVisible(XH.Bridge:getModule("Share"):isLuckyBagShow()) -- 设置按钮可见性
    if not isFromGroup then
        self:updateGroupBtnShow()
    end
end

function LuckyBagBtn:initIcon(name)
    LuckyBagBtn.super.initIcon(self, name)
    local source = self._areaId ==  LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT and "金币选场" or "金币大厅"
    local luckyBagIcon = require("src.lobby.Modules.Share.LuckyBagIconView"):new({source = source})
    luckyBagIcon:setName("LuckyBagIcon")
    local size = self:getContentSize()
    luckyBagIcon:setPosition(cc.p(size.width/2, size.height/2))
    self:addChild(luckyBagIcon)
    luckyBagIcon:changeIcon(true)
end

return LuckyBagBtn
/