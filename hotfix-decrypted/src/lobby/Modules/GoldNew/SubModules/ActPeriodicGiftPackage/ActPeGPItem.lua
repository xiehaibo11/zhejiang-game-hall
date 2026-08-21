local ActPeGPItem = class("ActPeGPItem", XH.Bridge.ViewBase)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")
local LocalConfig = import("...Configs.LocalConfig")
local Utils = import("...Tool.Utils")
local ActionUtils = import("...Tool.ActionUtils")
local Config = import(".Config")
local RedPointManager = import("...Manager.RedPointManager")
local PIC_PATH = LocalConfig.IMG_PATH.ACT_PEGP

function ActPeGPItem:ctor(param, isAutoPop)
    self._module = XH.Bridge:getModule(LocalConfig.MP.ActPeGP)
    self._isInShop = param and param.isInShop or false
    ActPeGPItem.super.ctor(self, param)
    self:initUI()
    self:updateUI(param)
    self._isAutoPop = isAutoPop
    -- XH.UITool.printNodeInfo(self)

    self._panel:removeFromParent()
    self:removeAllChildren()
    self:addChild(self._panel)
end

function ActPeGPItem:getCSBPath()
    if self._isInShop then
        return XH.Bridge:getCCSResPath("Act/PeGPShopItem.csb")
    end
    return XH.Bridge:getCCSResPath("Act/PeGPItem.csb")
end

function ActPeGPItem:getBindingInfo()
    return {
        ["_panel"] = {varName = "_panel", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onFirstGetClicked"},
        ["_listLeft"] = {varName = "_listLeft"},
        ["_panelRandGift1"] = {varName = "_panelRandGift1"},
        ["_panelRandGift2"] = {varName = "_panelRandGift2"},
        ["_panelRandGift3"] = {varName = "_panelRandGift3"},
        ["_panelGift1"] = {varName = "_panelGift1"},
        ["_panelGift2"] = {varName = "_panelGift2"},
        ["_panelGift3"] = {varName = "_panelGift3"},
        ["_imgIconLocal"] = {varName = "_imgIconLocal"},
        ["_txtMid"] = {varName = "_txtMid"},
        ["_txtTop"] = {varName = "_txtTop"},
        ["_txtTop2"] = {varName = "_txtTop2"},
        ["_imgTitle"] = {varName = "_imgTitle"},
        ["_imgDes"] = {varName = "_imgDes"},
        ["_imgTxtMidBg"] = {varName = "_imgTxtMidBg"},
        ["_panelCycleOne"] = {varName = "_panelCycleOne"},
        ["_panelCycleOther"] = {varName = "_panelCycleOther"},
        ["_txtPrice"] = {varName = "_txtPrice"},
        ["_txtLimit"] = {varName = "_txtLimit"},
        ["_btnBuy"] = {varName = "_btnBuy"},
        ["_txt2bei"] = {varName = "_txt2bei"},
        ["_txt3bei"] = {varName = "_txt3bei"},
        ["_txt4bei"] = {varName = "_txt4bei"},
        ["_aniBuy"] = {varName = "_aniBuy"},
        ["_nodeAni"] = {varName = "_nodeAni"},
        ["_txtGoldNum"] = {varName = "_txtGoldNum"},
        ["_txtName"] = {varName = "_txtName"}
    }
end

function ActPeGPItem:getProxyEvents()
    return {}
end

function ActPeGPItem:isFullScreen()
    return false
end

function ActPeGPItem:onEnter()
end

function ActPeGPItem:initUI()
    self:setSwallowTouches(false)
    self._panelGifts = {self._panelGift1, self._panelGift2}
    XH.UIButton.create(self._panel, XH.UIButton.CLICK_STYLE.NOSCALE, function()
        self:onTouchClick()
    end)
    Utils:addSpine(self._aniBuy, "Shop", "zzb_ty_ansg", "animation")
    Utils:addSpine(XH.UITool.seekNodeByName(self._panel, "_nodeAniBtn"), "Shop", "zzb_ty_ansg", "animation")
    if self._imgTitle then
        self._imgTitle:ignoreContentAdaptWithSize(true)
    end
    if self._imgDes then
        self._imgDes:ignoreContentAdaptWithSize(true)
    end
end

function ActPeGPItem:updateUI(info)
    if not info or not info.lbid then
        return
    end
    self._info = info
    -- local productInfo = self._module:getProductInfo(info.lbid)
    -- if not productInfo then
    --     printError("礼包不存在" .. info.lbid)
    -- end
    info.randGift = info.randGift or {}
    info.gift = info.gift or {}
    local isDayType = info.lblx == Config.LBLX.CYCLE1
    local isFree = info.lblx == Config.LBLX.FREE
    self._txtName:setString(info.title)
    self:initGift(self._panelRandGift1, info.randGift[1])
    self:initGift(self._panelRandGift2, info.randGift[2])
    self:initGift(self._panelRandGift3, info.randGift[3])
    self:initGift(self._panelGift1, info.gift[1])
    self:initGift(self._panelGift2, info.gift[2])
    for i = 1, 2 do
        local addGiveNum = self._module:getAddGiveNum(info.lblx, i)
        local nodeAddNum = XH.UITool.seekNodeByName(self._panelGifts[i], "_imgAddNum")
        if nodeAddNum then
            nodeAddNum:setVisible(addGiveNum ~= nil)
            if addGiveNum then
                XH.UITool.setText(self._panelGifts[i], "_txtAddNum", addGiveNum)
                ActionUtils:runScaleActions(nodeAddNum, {20 / 30, 6 / 30, 6 / 30, 6 / 30, 6 / 30, 6 / 30}, {1, 1.2, 0.94, 1.1, 0.93, 1.1})
            end
        end
        if isFree and info.limitNum <= info.buyNum then
            XH.UITool.setVisible(self._panelGifts[i], "_img_ylq_bg", true)
        end
    end
    -- self:initGift(self._panelGift3, info.gift[3])
    self._panelCycleOne:setVisible(isDayType)
    self._panelCycleOther:setVisible(not isDayType)
    self._txtName:setSkewX(4)
    self._txt2bei:setSkewX(8)
    self._txt3bei:setSkewX(8)
    self._txt4bei:setSkewX(8)
    self._txt2bei:setString(info.beiShu[1] or "")
    self._txt3bei:setString(info.beiShu[2] or "")
    self._txt4bei:setString(info.beiShu[3] or "")
    if isFree then
        RedPointManager:addListener("shop/rec/rec/freegift", function(state)
            if tolua.isnull(self) then
                return
            end
            XH.UITool.setVisible(self, "_imgRedPoint", state)
        end)
    end
    if self._isInShop then
        if info.lblx == Config.LBLX.CYCLE7 or info.lblx == Config.LBLX.CYCLE30 then
            self._txtTop:setString("购买礼包立得")
            self._txtTop2:setString("")
        elseif info.lblx == Config.LBLX.FREE then
            self._txtTop:setString("领取获得")
            self._txtTop2:setString("")
        end
        Utils:doLayoutHoriz({self._txtTop, self._txtTop2}, self:getContentSize().width, 3)
    else
        if info.lblx == Config.LBLX.CYCLE7 then
            self:loadTexture(self, "_imgBg", "Img_lan_da.png")
            self:loadTexture(self, "_imgTitle", "Img_mz_zi.png")
            self:loadTexture(self, "_imgDes", "Img_lan_zi.png")
        elseif info.lblx == Config.LBLX.CYCLE30 then
            self:loadTexture(self, "_imgBg", "Img_h_da.png")
            self:loadTexture(self, "_imgTitle", "Img_my_zi.png")
            self:loadTexture(self, "_imgDes", "Img_h_zi.png")
            self:loadTexture(self, "_imgTxtMidBg", "Img_h_ew.png")
            XH.UITool.enableOutline(self, "_txtMid", cc.c3b(0xea, 0x71, 0x4b), 2)
        elseif info.lblx == Config.LBLX.FREE then
            if info.limitNum <= info.buyNum then
                self:loadTexture(self, "_imgBg", "Img_lv2_dah.png")
            else
                self:loadTexture(self, "_imgBg", "Img_lv2_da.png")
            end
            self:loadTexture(self, "_imgTitle", "Img_mrth_zi.png")
            self:loadTexture(self, "_imgDes", "Img_lv2_zi.png")
            self:loadTexture(self, "_imgTxtMidBg", "Img_lv_ew.png")
            XH.UITool.enableOutline(self, "_txtMid", cc.c3b(0x57, 0xb5, 0x3a), 2)
        elseif info.lblx == Config.LBLX.CYCLE1 then
            self:loadTexture(self, "_imgBg", "Img_lv_da.png")
            self:loadTexture(self, "_imgTitle", "Img_mrlb_zi.png")
            self:loadTexture(self, "_imgDes", "Img_lv_zi.png")
        end
    end
    self._lbid = info.lbid
    if info.lblx == Config.LBLX.CYCLE1 then
        -- local showIdx = info.buyNum + 1
        -- if info.buyNum >= info.limitNum then
        --     showIdx = info.buyNum
        -- end
        -- self._lbid = info.lbids[showIdx]
        self._txtGoldNum:setString("×" .. (info.gift[1].propCnt or 0))
        if not self._aniGold then
            self._aniGold = Utils:addSpine(self._nodeAni, "Shop", "zzb_ty_xingguang", "animation")
        end
    else
        if info.lblx ~= Config.LBLX.FREE then
            self._txtMid:setString("额外赠送奖励")
        end
    end
    local price = (self._module:getProductInfo(self._lbid) or {})["price"] or "-"
    self._txtPrice:setString(isFree and "免费领取" or price)
    if isFree and info.limitNum <= info.buyNum then
        self._txtPrice:setString("明日再来")
        self._txtPrice:setFontSize(66)
        self._txtPrice:setTextColor(cc.c3b(255,255,255))
        self._panel:setTouchEnabled(false)
    end
    self._txtLimit:setString(isFree and "" or string.format("(限购%d/%d)", info.buyNum or 0, info.limitNum or 0))
    Utils:doLayoutHoriz({self._txtPrice, self._txtLimit}, self._btnBuy:getContentSize().width, 5)
end

function ActPeGPItem:getBody()
    return self._panel
end

function ActPeGPItem:loadTexture(node, name, path)
    XH.UITool.loadTexture(node, name, PIC_PATH .. path, ccui.TextureResType.plistType)
end

function ActPeGPItem:initGift(item, info)
    if not info then
        item:setVisible(false)
        return
    end
    item:setVisible(true)
    local layout = XH.UITool.seekNodeByName(item, "_layout")
    local txt = XH.UITool.seekNodeByName(item, "_txt")
    local aniNode = XH.UITool.seekNodeByName(item, "_ani")
    if aniNode and not aniNode._ani then
        aniNode._ani = Utils:addSpine(aniNode, "Common", "zzb_ty_jlsg", "animation")
    end
    if txt then
        Utils:setImgUrl(layout, info.rewardImg, true)
        local showName = info.showName or (info.propCnt and "x" .. info.propCnt or info.rewardName)
        txt:setString(showName)
    end
end

function ActPeGPItem:onTouchClick()
    local info = self._info
    if self._isAutoPop then
        XH.lobby:getModule("PopSystem"):setClick("buy", {id="goldPeGP"})
    end
    XH.Bridge:throwData("jblb2024052904", {page_label = "限时周期礼包", page = "新金币场大厅", page_item_id = self._txtPrice:getString()},
                        {info = string.format("%d_%s_%s_%d", info.lblx, self._txtPrice:getString(), info.gift[1].rewardName, info.lbid)})

    local isDayType = info.lblx == Config.LBLX.CYCLE1
    local isFree = info.lblx == Config.LBLX.FREE
    if info.limitNum <= info.buyNum then
        if isDayType then
            XH.TipTool.showToast("已到达购买上限，请明天再来!")
        elseif isFree then
            XH.TipTool.showToast("今日已免费获得，请明天再来!")
        elseif info.lblx == Config.LBLX.CYCLE7 then
            XH.TipTool.showToast("已到达购买上限，请下周再来！")
        elseif info.lblx == Config.LBLX.CYCLE30 then
            XH.TipTool.showToast("已到达购买上限，请下月再来！")
        end
        return
    end
    if info.lblx == Config.LBLX.FREE then
        self._module:reqGetAward()
    else
        self._module:reqBuyGift(self._lbid)
    end
end

return ActPeGPItem
  �*  