local AwardCenterView = class("AwardCenterView", XH.ViewBase)
-- UI名字定义
local KW_BMFONT_ACTIVITY = "_KW_BMFONT_ACTIVITY"
local KW_BMFONT_AWARD = "_KW_BMFONT_AWARD"
local KW_BMFONT_TIME = "_KW_BMFONT_TIME"
local KW_PANEL_TIEM = "_KW_PANEL_TIEM"
local KW_EXCHANGE = "AwardCenterViewExchange"
function AwardCenterView:getCSBPath()
    return "cocosStudio/hall/CSB/AwardCenterLayer.csb"
end
--- 获得节点的绑定信息
function AwardCenterView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_LISTVIEW_AWARD_INFO"] = { varName = "_awardInfoList", type = XH.UI_TYPE.LISTVIEW, onTouch = "onTouchEventList" },
        ["_KW_PANEL_TIEM"] = { varName = "_awardItemPanel" },
        ["_KW_BTN_USER_ADDRESS"] = { varName = "_uerAderssBtn" },
        ["_KW_BTN_EXCHANGE_FU_KA"] = { varName = "_exchangeFuKaBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventExchangeFees" },
        ["_KW_IMG_EXCHANGE_HINT"] = { varName = "_exchangeHintImg"},
    }
end

function AwardCenterView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("AwardCenter"), eventKeyName = "EVNET_AWARD_CENTER_SHOW_RECORD", callBack = "onShowAwardRecord" },
    }
end

function AwardCenterView:ctor(param)
    param = param or {}
    AwardCenterView.super.ctor(self, param)
    self._page = 1
    self._reqNextPageLock = false
    self._awardInfoList:removeAllChildren()
    XH.lobby:getModule("AwardCenter"):reqAwardRecordInfo(self._page)
    self._uerAderssBtn:setVisible(false)
    if (XH.playerData:getHuaFei() or 0) <= 0 then
        self._exchangeFuKaBtn:setVisible(false)
    end
    if not cc.UserDefault:getInstance():getBoolForKey(KW_EXCHANGE, false) then
        self._exchangeHintImg:setVisible(true)
    end
end

function AwardCenterView:onShowAwardRecord(data)
    if data.data then    
        for key, var in pairs(data.data) do
            local item = self._awardItemPanel:clone()
            item:setName(KW_PANEL_TIEM .. "_CLONE" .. key)
            item:setVisible(true)
            XH.UITool.setText(item, KW_BMFONT_ACTIVITY, var.act_name or "")
            XH.UITool.setText(item, KW_BMFONT_AWARD, var.goods_name or "")
            XH.UITool.setText(item, KW_BMFONT_TIME, var.order_time or "")
            self._awardInfoList:setScrollBarEnabled(false)
            self._awardInfoList:pushBackCustomItem(item)
        end
        if #data.data > 0 then
            self._reqNextPageLock = false
        end
    end
end

function AwardCenterView:adjustTextOffset(node)
    if node == nil then
        return
    end
    local len = node:getContentSize().width
    local actuallen  = 230
    if len > actuallen then 
        local offsetX = len - actuallen
        node:setPositionX(node:getPositionX() + offsetX)
    end  
end

function AwardCenterView:onTouchEventList(send, event)
    if event ~= ccui.TouchEventType.ended and event ~= ccui.TouchEventType.canceled then
        return
    end
    local listInnerContaniner = self._awardInfoList:getInnerContainer()
    local posY = listInnerContaniner:getPositionY()
    if posY > 0 then
        if self._reqNextPageLock == false then
            self._page = self._page + 1
            self._reqNextPageLock = true
            XH.lobby:getModule("AwardCenter"):reqAwardRecordInfo(self._page)
        end
    end
end

--- 关闭按钮
function AwardCenterView:onTouchEventClose(send, event)
    self:close()
end

function AwardCenterView:onTouchEventExchangeFees(send, event)
    if not send then
        return
    end
    if (not XH.lobby:getModule("Shop"):isAleardyRealName()) and(not XH.lobby:getModule("Lobby"):getIsForeignIP()) then
        XH.TipTool.showTip( {
            type = XH.TIP_LAYER_TYPE.OK,
            funcOK = function()
                XH.viewManager:openView("IdentityCheckView")
            end
        } , "PLEASE_REAL_NAME_2")
        return
    end
    if not cc.UserDefault:getInstance():getBoolForKey(KW_EXCHANGE, false) then
        cc.UserDefault:getInstance():setBoolForKey(KW_EXCHANGE, true)
        self._exchangeHintImg:setVisible(false)
    end
    local feesPropId = XH.areaData:getPropList().spendFeeID
    local feeNums = XH.lobby:getModule("TicketShop"):getCurHuaFei() or 0
    local getLastPhone = XH.userDefault:getValue(XH.userDefault.KEY_ID.EXCHANGE_FEE_PHONE, "")
    local sysTime = XH.lobby:getModule("TicketShop"):getSysTime()
    if feesPropId then
        XH.viewManager:openView("TicketFeesExchangeView", nil, { productid = feesPropId, feeNums = feeNums, getLastPhone = getLastPhone ,sysTime = sysTime })
    else
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, "该大区暂不支持福卡兑换，敬请期待~")
    end
    self:close()
end

return AwardCenterView_