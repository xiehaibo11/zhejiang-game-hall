local FirstView = import(".ActFRFirstView")
local ActFRSecondView = class("ActFRSecondView", FirstView)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")
local LocalConfig = import("...Configs.LocalConfig")
local Utils = import("...Tool.Utils")
local RedPointManager = import("...Manager.RedPointManager")
local POP_UI_PATH = LocalConfig.IMG_PATH.POP
local GIFT_PRICE = {6, 30, 68}

function ActFRSecondView:ctor(param)
    ActFRSecondView.super.ctor(self, param)
    param = param or {}
    self._module = XH.Bridge:getModule(LocalConfig.MP.ActFR)
    self._movePos = param.movePos
    self._firstView = param.firstView
end

function ActFRSecondView:getCSBPath()
    return XH.Bridge:getCCSResPath("Act/FirstRechargeSecondView.csb")
end

function ActFRSecondView:getBindingInfo()
    return {
        ["_btnClose"] = {varName = "_btnClose", onTouchEnded = "onTouchEventClose", type = XH.UI_TYPE.BUTTON},
        ["_btnOneGet"] = {varName = "_btnOneGet", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onFirstGetClicked"},
        ["_btnTwoGet"] = {varName = "_btnTwoGet", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onSecondGetClicked"},
        ["_blackbg"] = {varName = "_blackbg"},
        ["_body"] = {varName = "_body"},
        ["_panelOther"] = {varName = "_panelOther"},
        ["_txtLeftTime"] = {varName = "_txtLeftTime"},
        ["_imgLeftTime"] = {varName = "_imgLeftTime"},
        ["_panelPropTip"] = {varName = "_panelPropTip"},
        ["_posAniTitle"] = {varName = "_posAniTitle"},
        ["_panel1"] = {varName = "_panel1"},
        ["_panel2"] = {varName = "_panel2"}
    }
end

function ActFRSecondView:initAni()
    self._aniTitle = Utils:addSpine(self._posAniTitle, "ActFR", "zzb_dt_czkh", "sckh", 1, false)
    self._aniTitle:setVisible(false)
    self._aniCaiDai = Utils:addSpine(self._posAniTitle, "Common", "zzb_ty_caidai", "animation", 1, false)
    self._aniCaiDai:setVisible(false)
    self._aniTitle:runAction(cc.Sequence:create(cc.DelayTime:create(0.2), cc.CallFunc:create(function()
        self._aniTitle:setAnimation(0, "sckh", false)
        self._aniTitle:setVisible(true)
        self._aniCaiDai:setAnimation(0, "animation", false)
        self._aniCaiDai:setVisible(true)
    end)))
end

function ActFRSecondView:onEnter()
    XH.Bridge:throwData("jblb2024052903", {page_label = "首充狂欢礼包", page = "新金币场大厅"})
    self._module:updateSaveInfo("autoShowSecondView", true)
    self:initAni()
    self:initUI()
    self:delayShow(self._body, 0, 18 / 30)
    self:delayShow(self._btnOneGet, 12 / 30, 18 / 30)
    self:delayShow(self._btnTwoGet, 12 / 30, 18 / 30)
    self:delayShowLoop()
end

local showIdx = 2
function ActFRSecondView:delayShowLoop()
    local node = showIdx == 1 and self._btnOneGet or self._btnTwoGet
    node:runAction(cc.Sequence:create(cc.DelayTime:create(1), cc.ScaleTo:create(0.5, 1.1), cc.ScaleTo:create(0.5, 1), cc.ScaleTo:create(0.5, 1.1),
                                      cc.ScaleTo:create(0.5, 1), cc.DelayTime:create(0.2), cc.CallFunc:create(function()
        self:delayShowLoop()
    end)))
    showIdx = 3 - showIdx
end

function ActFRSecondView:getModule()
    return self._module
end

function ActFRSecondView:initUI()
    self._btnGets = {self._btnOneGet, self._btnTwoGet}
    self._panels = {self._panel1, self._panel2}
    self:updateUI()
end

function ActFRSecondView:onActInfo()
    self:updateUI()
end

function ActFRSecondView:updateUI()
    local info = self:getActInfo()
    local leftTime = info[2].expire - self._module:getServerTime()
    self._txtLeftTime:setString(self:secondsToTime(leftTime))
    self._imgLeftTime:setVisible(info[2].status == 0 or info[3].status == 0)
    for i = 1, 2 do
        for j = 1, 3 do
            local panel = self._panels[i]:getChildByName("_panelDay" .. j)
            self:initOneDayGift(panel, info[i + 1].gift[j], self)
            XH.UITool.setVisible(panel, "_imgYLQ", info[i + 1].awardStatus[j] == 2)
        end
        local btnStr = GIFT_PRICE[i + 1] .. "元购买"
        if info[i + 1].status ~= 0 then
            if info[i + 1].status == 2 or not table.indexof(info[i + 1].awardStatus, 1) then
                btnStr = "已领取"
            else
                btnStr = "领取"
            end
        elseif info[i + 1].status == 0 and leftTime < 0 then
            btnStr = "活动已结束"
        end
        XH.UITool.setText(self._btnGets[i], "txt", btnStr)
    end
end

function ActFRSecondView:onTouchEventClose(send, event)
    self:close()
end

function ActFRSecondView:onFirstGetClicked(send, event)
    local dayIdx = self:onGetClick(2)
    Utils:delayTouchEnable(send, 0.5)
    local txt = send:getChildByName("txt"):getString()
    XH.Bridge:throwData("jblb2024052904", {page_label = "首充狂欢礼包", page = "新金币场大厅", page_item_id = txt},
                        {choice = GIFT_PRICE[2], scene_type = dayIdx})
end

function ActFRSecondView:onSecondGetClicked(send, event)
    local dayIdx = self:onGetClick(3)
    Utils:delayTouchEnable(send, 0.5)
    local txt = send:getChildByName("txt"):getString()
    XH.Bridge:throwData("jblb2024052904", {page_label = "首充狂欢礼包", page = "新金币场大厅", page_item_id = txt},
                        {choice = GIFT_PRICE[3], scene_type = dayIdx})
end

function ActFRSecondView:close()
    if self._movePos then
        local easefunc = function(ac)
            return ac -- cc.EaseSineOut:create(ac)
        end
        -- self._panelOther:setVisible(false)
        self._blackbg:setVisible(false)
        -- self._panel1:runAction(cc.MoveTo:create(0.5, self._body:convertToNodeSpace(self._movePos[1])))
        -- self._panel1:runAction(cc.ScaleTo:create(0.5, 0.1))
        -- self._panel2:runAction(cc.MoveTo:create(0.5, self._body:convertToNodeSpace(self._movePos[2])))
        -- self._panel2:runAction(cc.ScaleTo:create(0.5, 0.1))
        self._body:runAction(cc.MoveTo:create(0.5, self:convertToNodeSpace(cc.p(self._movePos[2].x, (self._movePos[2].y + self._movePos[1].y) / 2))))
        self._body:runAction(cc.ScaleTo:create(0.5, 0.1))

        -- self._panel1:runAction(cc.Sequence:create(cc.Spawn:create(easefunc(cc.MoveTo:create(0.5, self._movePos[1]), easefunc(cc.ScaleTo:create(0.5, 0)))), cc.CallFunc:create(function()
        --     -- ActFRSecondView.super.close(self)
        -- end)))
        if not tolua.isnull(self._firstView) then
            self._firstView:showTabs()
        end
        self._body:runAction(cc.Sequence:create(cc.DelayTime:create(0.5), cc.FadeOut:create(0.2), cc.CallFunc:create(function()
            ActFRSecondView.super.close(self)
        end)))
    else
        ActFRSecondView.super.close(self)
    end
end

return ActFRSecondView
�