local QuickRechargeVipView = class("QuickRechargeVipView", XH.ViewBase)

local DEFAULT_DOWNLOAD_IMAGE_DIR = device.writablePath .. "tmpImageCachDir/"

function QuickRechargeVipView:getCSBPath()
    return "cocosStudio/hall/CSB/MessageBoxEx/QuickChargeVip.csb"
end

function QuickRechargeVipView:getBindingInfo()
    return {
        ["_KWA_BTND_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_NAME_PROP"] = { varName = "_propName" },
        ["_KW_IMG_PROP"] = { varName = "_propImg" },
        ["_KW_NAME_COST"] = { varName = "_costName" },
        ["_KW_BTN_MORE"] = { varName = "_btnMore", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventMore" },
        ["_KW_BTN_CHARGE"] = { varName = "_btnCharge", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventCharge" },
    }
end

function QuickRechargeVipView:getProxyEvents()
    return {
    }
end

function QuickRechargeVipView:ctor(param)
    param = param or {}
    QuickRechargeVipView.super.ctor(self, param)
    self._info = param
    XH.lobby:getModule("Shop"):startReq("ReqDiamondProductsInfo", XH.configerManager:getShopAppId(), XH.configerManager:getShopPackageAppId())
    self:initUI()
end

function QuickRechargeVipView:initUI()
    if not self._info or not self._info.title or not self._info.score or not self._info.consume_prop_name then
        return
    end
    self._propName:setText(self._info.title)
    self._costName:setText(XH.ConstString.getStr("QUICK_RECHARGE_TIP", self._info.score, self._info.consume_prop_name))
    self:setPropImg()
end

function QuickRechargeVipView:setPropImg()
    self._propImg:ignoreContentAdaptWithSize(true)
    local imageName = XH.StringTool.getImageNameByUrl(self._info.thumbnail)
    local imagePath = DEFAULT_DOWNLOAD_IMAGE_DIR .. imageName
    local isFileEXist = cc.FileUtils:getInstance():isFileExist(imagePath)
    if isFileEXist then
        self._propImg:loadTexture(imagePath, ccui.TextureResType.localType)
        return
    end
    local downloadImage = require("app.Req.DownloadImage")
    local reqDownloadImage = downloadImage:new()
    reqDownloadImage:addReqCallBack(self, function(imgNode, cell, type)
        if type == XH.Req.TYPE.SUCCESS then
            self._propImg:loadTexture(imagePath, ccui.TextureResType.localType)
        end
    end )
    reqDownloadImage:setUrl(self._info.thumbnail, false)
end

function QuickRechargeVipView:onTouchEventMore(send, eventType)
    XH.viewManager:openView("SxvipShopView")
    self:close()
end

function QuickRechargeVipView:onTouchEventCharge(send, eventType)
    -- 道具充足直接走兑换，道具不足走购买流程
    if XH.lobby:getModule("QuickRecharge"):checkPropEnough(self._info.consume_prop_id, self._info.score) then
        XH.lobby:getModule("QuickRecharge"):reqExchangeGoods(self._info.itemid, self._info.prop_type, self._info.id)
    else
        local diamonds = XH.lobby:getModule("QuickRecharge"):getDiamondProduct()
        if not next(diamonds) then
            XH.TipTool.showToast(XH.ConstString.getStr("QUICK_RECHARGE_NOT_ENOUGH"))
        else
            if self._info.consume_prop_id == XH.areaData:getPropList().propDiamndID then
                XH.lobby:getModule("QuickRecharge"):reqSingleQuickRecharge(diamonds, self._info)
            else
                -- 暂不支持多层道具转换
                -- XH.lobby:getModule("QuickRecharge"):reqMultiQuickRecharge(diamonds, self._info)
                XH.TipTool.showToast(XH.ConstString.getStr("QUICK_RECHARGE_NOT_ENOUGH"))
            end
        end
    end
    self:close()
end

function QuickRechargeVipView:onTouchEventClose(send, eventType)
    self:close()
end

return QuickRechargeVipView