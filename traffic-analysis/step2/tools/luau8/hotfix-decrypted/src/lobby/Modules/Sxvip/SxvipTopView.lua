local SxvipTopView = class("SxvipTopView", XH.ViewBase)

function SxvipTopView:getCSBPath()
    return "cocosStudio/hall/CSB/Sxvip/SxvipTopLayer.csb"
end

function SxvipTopView:getBindingInfo()
    return {
        ["_KW_PANEL"] = { varName = "_KW_PANEL" },
        ["_KW_TEXT"] = { varName = "_KW_TEXT" },
        ["_KW_BTN_CONTINUE"] = { varName = "_KW_BTN_CONTINUE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnContinue" },
    }
end

function SxvipTopView:ctor()
    SxvipTopView.super.ctor(self)
    local str = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='32' color='#ffffff'>" .. "您的会员已过期，请您及时续费恢复特权使用哦~" .. "</font>"
    if not XH.lobby:getModule("Sxvip"):isExpire() then
        str = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='32' color='#ffffff'>" .. "您的会员还有" .. "<font color='#ff592d'>" .. self:getLeftTime() .. "</font>" .. "就要到期了,多项特权将无法使用" .. "</font>"
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hy25022701, nil, { count = self:getRecordTime() })
    local richText = ccui.RichText:createWithXML(str, {})
    richText:setAnchorPoint(cc.p(0, 0.5))
    richText:ignoreContentAdaptWithSize(false)
    richText:setHorizontalAlignment(cc.TEXT_ALIGNMENT_LEFT)
    local contentSize = self._KW_PANEL:getContentSize()
    richText:setContentSize(contentSize)
    self._KW_TEXT:addChild(richText)
    richText:setPosition(cc.p(0, 0))
    XH.SysTool.performDelayOnce(function()
        if not self or tolua.isnull(self) then
            return
        end
        self:close()
    end, 8)
end

function SxvipTopView:getRecordTime()
    if XH.lobby:getModule("Sxvip"):isExpire() then
        return -1
    end
    local time = XH.lobby:getModule("Sxvip"):getRemainTime()
    return math.floor(time / 3600)
end

function SxvipTopView:getLeftTime()
    local time = XH.lobby:getModule("Sxvip"):getRemainTime()
    if time > 86400 then
        local day = math.floor(time / 86400)
        local hour = math.floor((time - day * 86400) / 3600)
        return day .. "天" .. hour .. "小时"
    else
        return "0天" .. math.floor(time / 3600) .. "小时"
    end
end

function SxvipTopView:onBtnContinue()
    XH.lobby:getModule("Sxvip"):reqPrivilege()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hy25022702, nil, { source = "续费提醒", count = self:getRecordTime() })
    XH.viewManager:openView("SxvipShopView", nil, { name = "续费提醒" })
    self:close()
end

return SxvipTopView@
