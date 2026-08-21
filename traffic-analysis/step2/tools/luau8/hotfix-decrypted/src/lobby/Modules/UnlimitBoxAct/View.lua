local UnlimitBoxActView = class("UnlimitBoxActView", XH.ViewBase)
local ViewAniConfig = require("app.Base.ViewAniConfig")

function UnlimitBoxActView:getCSBPath()
    return "cocosStudio/GoldNew/Lobby/CSB/UnlimitBoxAct/UnLimitBoxActLayer.csb"
end

function UnlimitBoxActView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_BUY"] = { varName = "_KW_BTN_BUY", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventBuy" },
        ["_KW_BTN_HELP"] = { varName = "_KW_BTN_HELP", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventHelp" },
        ["_KW_TEXT_LEFT"] = { varName = "_KW_TEXT_LEFT" },
        ["_KW_FREE"] = { varName = "_KW_FREE" },
        ["_KW_COST"] = { varName = "_KW_COST" },
        ["_KW_ORI"] = { varName = "_KW_ORI" },
        ["_KW_IMG_DIS"] = { varName = "_KW_IMG_DIS" },
        ["_KW_TEXT_DIS"] = { varName = "_KW_TEXT_DIS" },
        ["_KW_TEXT_TIMES"] = { varName = "_KW_TEXT_TIMES" },
        ["_KW_POS"] = { varName = "_KW_POS" },
        ["_KW_ROOT_LAYER"] = { varName = "_KW_ROOT_LAYER" },
        ["_KW_ANI_ROOT"] = { varName = "_KW_ANI_ROOT" },
        ["_KW_IMG_FREEICON"] = { varName = "_KW_IMG_FREEICON" },
        ["_KW_POS_BG"] = { varName = "_KW_POS_BG" }
    }
end

function UnlimitBoxActView:getAniConfig()
    return { aniType = ViewAniConfig.AniName.NORMAL, rootNode = self._KW_ROOT_LAYER, popNode = self._KW_ANI_ROOT, btnList = { self._KW_BTN_BUY, self._KW_IMG_DIS } }
end

function UnlimitBoxActView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("UnlimitBoxAct"), eventKeyName = "FLUSH_ACT_INFO", callBack = "flushUI" },
        { module = XH.lobby:getModule("UnlimitBoxAct"), eventKeyName = "PAY_BUTTON_TOUCH", callBack = "enablePayButton" },
    }
end

function UnlimitBoxActView:setElementPosByStatus()
    --未激活
    local posTable1 = {
        _KW_POS_BG = cc.p(1261,370),
        _KW_IMG_FREEICON = cc.p(1187,551),
        _KW_TEXT_TIMES = cc.p(1583,527),
        _KW_TEXT_TIMES_SCAlE = 1
    }
    --已激活
    local posTable2 = {
        _KW_POS_BG = cc.p(1261,325),
        _KW_IMG_FREEICON = cc.p(1240,570),
        _KW_TEXT_TIMES = cc.p(1570,439),
        _KW_TEXT_TIMES_SCAlE = 0.8
    }
    local posTable = posTable1
    if self._info.status == 3 or self._info.status == 4 then
        posTable = posTable2
    end
    self._KW_POS_BG:setPosition(posTable._KW_POS_BG)
    self._KW_IMG_FREEICON:setPosition(posTable._KW_IMG_FREEICON)
    self._KW_TEXT_TIMES:setPosition(posTable._KW_TEXT_TIMES)
    self._KW_TEXT_TIMES:setScale(posTable._KW_TEXT_TIMES_SCAlE)
end

function UnlimitBoxActView:ctor(param)
    UnlimitBoxActView.super.ctor(self, param)
    self:initUI()
end

function UnlimitBoxActView:initUI()
    self:flushUI()
    local page_item_id = "付费"
    if self._info.status == 1 or self._info.status == 3 then
        page_item_id = "免费"
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25060903, { page_item_id = page_item_id })
end

function UnlimitBoxActView:flushUI()
    local actDetail = XH.lobby:getModule("UnlimitBoxAct"):getActDetail()
    local info = XH.lobby:getModule("UnlimitBoxAct"):getActInfo()
    if actDetail == nil then
        XH.lobby:getModule("UnlimitBoxAct"):reqActDetail()
        return
    end
    if info == nil then
        XH.TipTool.showToast("请求活动异常，请重新打开...")
        self:close()
        return
    end
    if info.status == 0 then
        self:close()
        return
    end
    self._info = info
    self._actDetail = actDetail
    self:startSchedule()
    self._KW_FREE:setVisible(self._info.status == 1)
    self._KW_COST:setVisible(self._info.status == 2)
    self._KW_IMG_DIS:setVisible(false)
    if self._info.status == 1 then
        -- 可领取无限金币体验卡
        self._KW_TEXT_TIMES:setString("共" .. self._actDetail.wxdjtyksycs .. "次")
        self._KW_BTN_BUY:setVisible(true)
    elseif self._info.status == 2 then
        -- 可购买无限金币卡
        -- 原价显示规则 无限金币卡的次数*1元
        local productInfo = self:getProductInfo()
        if productInfo then
            -- local oriPrice = self._actDetail.wxdjksycs
            local nowPrice = tonumber(productInfo.price)
            -- local disCount = string.format("%.1f", 10 * nowPrice / oriPrice)
            self._KW_COST:setString(nowPrice .. "元购买")
            self._KW_ORI:setVisible(false)
            -- self._KW_ORI:setString(oriPrice .. "元")
            self._KW_IMG_DIS:setVisible(false)
            -- self._KW_TEXT_DIS:setString(disCount .. "折")
        end
        self._KW_TEXT_TIMES:setString("共" .. self._actDetail.wxdjksycs .. "次")
        self._KW_BTN_BUY:setVisible(true)
    elseif self._info.status == 3 or self._info.status == 4 then
        -- 已购买无限金币体验卡
        -- 已购买无限金币卡
        self._KW_TEXT_TIMES:setString("剩余" .. self._info.propCnt .. "次")
        self._KW_BTN_BUY:setVisible(false)
    end
    self:setElementPosByStatus()
end

function UnlimitBoxActView:setRichText()
    if self._info == nil or self._actDetail == nil then
        return
    end
    local txt = ""
    local time = XH.lobby:getModule("Shop"):getServerTime()
    if self._info.status == 1 then
        local hour = math.floor(self._actDetail.wxdjtykyxq / 3600)
        local min = math.floor((self._actDetail.wxdjtykyxq - hour * 3600) / 60)
        txt = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='40' color='#4C3535'>" .. "活动有效期<font color='#F00000'>" .. hour .. "小时" .. min .. "分</font>，请尽快使用</font>"
    elseif self._info.status == 2 then
        local hour = math.floor(self._actDetail.wxdjkyxq / 3600)
        local min = math.floor((self._actDetail.wxdjkyxq - hour * 3600) / 60)
        txt = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='40' color='#4C3535'>" .. "活动有效期<font color='#F00000'>" .. hour .. "小时" .. min .. "分</font>，请尽快使用</font>"
    elseif self._info.status == 3 or self._info.status == 4 then
        local leftTime = self._info.propEndtime - time
        local hour = math.floor(leftTime / 3600)
        local min = math.floor((leftTime - hour * 3600) / 60)
        if leftTime <= 0 then
            XH.lobby:getModule("UnlimitBoxAct"):reqActInfo(false)
            self:close()
            return
        end
        txt = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='40' color='#4C3535'>" .. "活动有效期剩余<font color='#F00000'>" .. hour .. "小时" .. min .. "分</font>，请尽快使用</font>"
    end
    if self._lastText == txt then
        return
    end
    self._lastText = txt
    self._KW_POS:removeAllChildren()
    local richText = ccui.RichText:createWithXML(self._lastText, {})
    richText:setAnchorPoint(0.5, 0.5)
    richText:setPosition(cc.p(0, 0))
    self._KW_POS:addChild(richText)
end

function UnlimitBoxActView:flushLeftTime()
    if self._info == nil then
        return
    end
    self:setRichText()
    if self._info.status == 3 or self._info.status == 4 then
        self._KW_TEXT_LEFT:setString("已激活")
        return
    end
    local time = XH.lobby:getModule("Shop"):getServerTime()
    local leftTime = self._info.mrgmjssj - time
    if leftTime <= 0 then
        XH.lobby:getModule("UnlimitBoxAct"):reqActInfo(false)
        self:close()
        return
    end
    local hour = math.floor(leftTime / 3600)
    local min = math.floor((leftTime - hour * 3600) / 60)
    local sec = leftTime % 60
    self._KW_TEXT_LEFT:setString(string.format("%02d", hour) .. ":" .. string.format("%02d", min) .. ":" .. string.format("%02d", sec))
end

function UnlimitBoxActView:enablePayButton(event)
    self._KW_BTN_BUY:setTouchEnabled(event.msg.enabled)
end

function UnlimitBoxActView:startSchedule()
    self:removeSchedule()
    self:flushLeftTime()
    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if self and not tolua.isnull(self) then
            self:flushLeftTime()
        end
    end, 1, false)
end

function UnlimitBoxActView:removeSchedule()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function UnlimitBoxActView:onCleanup()
    self:removeSchedule()
    UnlimitBoxActView.super.onCleanup(self)
end

function UnlimitBoxActView:onTouchEventClose()
    self:close()
end

function UnlimitBoxActView:onTouchEventBuy()
    if self._info.status == 1 then
        -- 免费参与
        XH.lobby:getModule("UnlimitBoxAct"):reqJoinFreeAct()
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25060904, { page_item_id = "免费" })
    else
        -- 付费购买
        local productInfo = self:getProductInfo()
        if productInfo == nil then
            XH.TipTool.showToast("商品配置异常，请联系客服...")
            return
        end
        XH.lobby:getModule("Shop"):reqBuyDiamond(productInfo, nil, productInfo.productId, nil, true, nil, -1)
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25060904, { page_item_id = "付费" })
    end
end

function UnlimitBoxActView:getProductInfo()
    local productInfo
    local rmbGoods = XH.lobby:getModule("YGiftBankruptcy"):getRMBGoods()
    local productConfigId = XH.lobby:getModule("UnlimitBoxAct"):getProductConfigByAreaId()
    for i = 1, #rmbGoods do
        if rmbGoods[i].productId == productConfigId then
            productInfo = rmbGoods[i]
            break
        end
    end
    return productInfo
end

function UnlimitBoxActView:onTouchEventHelp()
    local text = "★活动随机出现，出现后持续2小时内可进行\n  购买，超过2小时活动将失效\n★购买后请在有效期内使用完所有次数，否则\n  有效期过后将自动结束\n★购买后仅能在大厅免费创建房间，创建次数\n  用完活动结束"
    XH.TipTool.showTip(
    {
        type = XH.TIP_LAYER_TYPE.CLOSE_ONLY,
        bLeft = true
    },
    text
    )
end


return UnlimitBoxActView�(