local ActFRShopView = class("ActFRShopView", XH.Bridge.ViewBase)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")
local LocalConfig = import("...Configs.LocalConfig")
local Utils = import("...Tool.Utils")
local RedPointManager = import("...Manager.RedPointManager")
local POP_UI_PATH = LocalConfig.IMG_PATH.POP

function ActFRShopView:ctor(param)
    self._module = XH.Bridge:getModule(LocalConfig.MP.ActFR)
    ActFRShopView.super.ctor(self, param)
    local info = self:getActInfo()
    self:initOneDayGift(self._panel, info[1].gift[1])
    self._panel:removeFromParent()
    self:removeAllChildren()
    self:addChild(self._panel)
    XH.UIButton.create(self._panel, XH.UIButton.CLICK_STYLE.NOSCALE, function()
        self:onTouchClick()
    end)
    XH.Bridge:throwData("jblb2024052901", {page_label = "首充礼包", page = "新金币大厅商城"})
end

function ActFRShopView:getActInfo()
    return self._module:getActInfo()
end

function ActFRShopView:getCSBPath()
    return XH.Bridge:getCCSResPath("Act/FirstRechargeShopItem.csb")
end

function ActFRShopView:getBindingInfo()
    return {
        ["_panel"] = {varName = "_panel", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onTouchClick"}, 
        ["_listLeft"] = {varName = "_listLeft"},
        ["_txtName"] = {varName = "_txtName"},
    }
end

function ActFRShopView:getProxyEvents()
    return {}
end

function ActFRShopView:isFullScreen()
    return false
end

function ActFRShopView:onEnter()
end

function ActFRShopView:onTouchClick()
    XH.Bridge:throwData("jblb2024052902", {page_label = "首充礼包", page = "新金币大厅商城"})
    XH.Bridge.viewManager:openView("GoldHallFRFirstView")
end

function ActFRShopView:initOneDayGift(item, info)
    if not info then
        return
    end
    Utils:addSpine(XH.UITool.seekNodeByName(self._panel, "_nodeAniBtn"), "Shop", "zzb_ty_ansg", "animation")
    self._txtName:setSkewX(4)
    for i = 1, #info do
        local propid = info[i].prop_id
        local layoutGift = item:getChildByName("_panelGift" .. i)
        local layout = XH.UITool.seekNodeByName(layoutGift, "_layout")
        local txt = XH.UITool.seekNodeByName(layoutGift, "_txt")
        if txt then
            if info[i].prop_cnt > 0 then
                txt:setString("x" .. info[i].prop_cnt)
            elseif info[i].expire > 0 then
                local dayCnt = math.floor(info[i].expire / 86400)
                local hourCnt = math.floor(info[i].expire / 3600) % 24
                local str = ""
                if dayCnt >= 1 then
                    str = str .. dayCnt .. "天"
                end
                if hourCnt >= 1 then
                    str = str .. hourCnt .. "小时"
                end
                txt:setString(str)
            end
        end
        if layout and propid then
            local baseInfo = Utils:getBasePropInfo(propid)
            local propDesc = Utils:getAwardDesc(baseInfo.name or "", propid, info[i].prop_cnt, info[i].expire)
            if baseInfo.imageUrl and baseInfo.imageUrl ~= "" then
                Utils:setImgUrl(layout, baseInfo.imageUrl, true)
            elseif baseInfo.imageName then
                local iv = layout.iv
                if not iv then
                    iv = ccui.ImageView:create()
                    local size = layout:getContentSize()
                    iv:setContentSize(size.width, size.height)
                    iv:setPosition(size.width / 2, size.height / 2)
                    layout:addChild(iv)
                    layout.iv = iv
                end
                iv:loadTexture(baseInfo.imageName, ccui.TextureResType.plistType)
                Utils:setFillMode(iv, layout:getContentSize(), "Contain")
            end
        end
    end
end

return ActFRShopView
