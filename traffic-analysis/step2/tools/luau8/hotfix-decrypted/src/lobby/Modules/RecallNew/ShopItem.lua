local RecallNewShopItem = class("RecallNewShopItem", XH.ViewBase)
local Utils = require("lobby.Modules.GoldNew.Tool.Utils")

function RecallNewShopItem:getCSBPath()
    return "cocosStudio/hall/CSB/RecallNew/RecallNewShopItem.csb"
end

function RecallNewShopItem:getBindingInfo()
    return {
        ["_panel"] = { varName = "_panel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchClick" },
        ["_giftList"] = { varName = "_giftList" },
        ["_panelGift1"] = { varName = "_panelGift1" },
        ["_txtName"] = { varName = "_txtName" },
        ["_txtPrice"] = { varName = "_txtPrice" },
        ["_imgIconLocal_1"] = { varName = "_imgIconLocal_1" },
        ["_imgIconLocal_2"] = { varName = "_imgIconLocal_2" },
        ["_imgIconLocal_3"] = { varName = "_imgIconLocal_3" },
    }
end

function RecallNewShopItem:getProxyEvents()
    return {}
end

function RecallNewShopItem:ctor(param)
    RecallNewShopItem.super.ctor(self, param)
    local recallNewGifts = XH.lobby:getModule("RecallNew"):getShopGiftData()
    if param and param.index and recallNewGifts[param.index] then
        self._gift = recallNewGifts[param.index]
        self:initGift(recallNewGifts[param.index])
        local showIndex = param.index
        if showIndex > 3 then
            showIndex = 3
        end
        for i = 1, 3 do
            self["_imgIconLocal_" .. i]:setVisible(i == showIndex)
        end
    end
end

function RecallNewShopItem:isFullScreen()
    return false
end

function RecallNewShopItem:onTouchClick()
    if not self._gift then
        return
    end
    local productInfo = {
        productId = self._gift.productId,
        name = self._gift.productName,
        price = self._gift.price,
        pay_attach = {
            stid = self._gift.act.strategyId,
            package_id = require("app.Config.GlobalConfig").IsDebug and 9040 or XH.configerManager:getShopPackageAppId(),
        }
    }
    XH.lobby:getModule("Shop"):reqBuyDiamond(productInfo, nil, productInfo.productId, nil, false, nil, -1)
end

function RecallNewShopItem:initGift(giftInfo)
    Utils:addSpine(XH.UITool.seekNodeByName(self._panel, "_nodeAniBtn"), "Shop", "zzb_ty_ansg", "animation")
    self._giftList:removeAllChildren()
    self._giftList:setScrollBarOpacity(0)
    self._txtName:setString(giftInfo.productName)
    self._txtPrice:setString(giftInfo.price .. "元")
    if giftInfo.act and giftInfo.act.rebate then
        for i = 1, #giftInfo.act.rebate do
            local awardInfo = giftInfo.act.rebate[i]
            local item = self._panelGift1:clone()
            local layout = XH.UITool.seekNodeByName(item, "_layout")
            local aniNode = XH.UITool.seekNodeByName(item, "_ani")
            if aniNode and not aniNode._ani then
                aniNode._ani = Utils:addSpine(aniNode, "Common", "zzb_ty_jlsg", "animation")
            end
            Utils:updatePropImg(layout, awardInfo.propId)
            local showName = "x" .. awardInfo.award
            item:getChildByName("_txt"):setString(showName)
            item:setVisible(true)
            if #giftInfo.act.rebate == 1 then
                item:setPosition(cc.p(self._giftList:getContentSize().width / 2, self._giftList:getContentSize().height / 2))
            elseif #giftInfo.act.rebate == 2 then
                local zIndex = i == 1 and -1 or 1
                item:setPosition(cc.p(self._giftList:getContentSize().width / 2 + self._panelGift1:getContentSize().width * 0.6 * zIndex, self._giftList:getContentSize().height / 2))
            elseif #giftInfo.act.rebate == 3 then
                item:setPosition(cc.p(item:getContentSize().width * (i - 0.5) + 20, self._giftList:getContentSize().height / 2))
            else
                item:setPosition(cc.p(item:getContentSize().width * (i - 0.5), self._giftList:getContentSize().height / 2))
            end
            self._giftList:addChild(item)
        end
        local size = 3
        if #giftInfo.act.rebate > 3 then
            size = #giftInfo.act.rebate
        end
        self._giftList:setInnerContainerSize(cc.size(size * self._panelGift1:getContentSize().width, self._giftList:getContentSize().height))
    end
end

return RecallNewShopItem�