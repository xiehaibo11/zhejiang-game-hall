local ActPeGPView = class("ActPeGPView", XH.Bridge.ViewBase)
local ViewAniConfig = require("app.Base.ViewAniConfig")
local Config = import(".Config")
local LocalConfig = import("...Configs.LocalConfig")
local Utils = import("...Tool.Utils")
local ActPeGPItem = import(".ActPeGPItem")
local ActionUtils = import("...Tool.ActionUtils")
local POP_UI_PATH = LocalConfig.IMG_PATH.POP

function ActPeGPView:ctor(fromScene, param)
    self._isInCollection = false
    if param and param.isInCollection then
        self._isInCollection = true -- 初始化ui会用到，所以提前设置
    end
    self._module = XH.Bridge:getModule(LocalConfig.MP.ActPeGP)
    ActPeGPView.super.ctor(self, param)
    self._list:setScrollBarEnabled(false)
    if param and param.isInCollection then
        self:setInCollection(true, param.parentSize)
    end
    self._isAutoPop = param and param.auto
    if self._isAutoPop then
        XH.lobby:getModule("PopSystem"):initPopClickInfo("goldPeGP")
    end
    self._pos = {self._pos1, self._pos2, self._pos3}
    XH.Bridge:throwData("jblb2024052903", {page_label = "限时周期礼包", page = "新金币场大厅"},
                                     {click_source = fromScene or ""})
end

function ActPeGPView:getCSBPath()
    return XH.Bridge:getCCSResPath("Act/PeGPView.csb")
end

function ActPeGPView:getAniConfig()
    if self._isInCollection then
        return nil
    end
    return {aniType = ViewAniConfig.AniName.NORMAL, popNode = self._body}
end

function ActPeGPView:getBindingInfo()
    return {
        ["_body"] = {varName = "_body"},
        ["_btnClose"] = {varName = "_btnClose", onTouchEnded = "onTouchEventClose", type = XH.UI_TYPE.BUTTON},
        ["_layoutBg"] = {varName = "_layoutBg"},
        ["_posAni"] = {varName = "_posAni"},
        ["_posAniTitle"] = {varName = "_posAniTitle"},
        ["_posAniTop"] = {varName = "_posAniTop"},
        ["_list"] = {varName = "_list"},
        ["_pos1"] = {varName = "_pos1"},
        ["_pos2"] = {varName = "_pos2"},
        ["_pos3"] = {varName = "_pos3"}
    }
end

function ActPeGPView:getProxyEvents()
    return {{module = self._module, eventKeyName = "EVENT_ACT_INFO", callBack = "updateUI"}}
end

function ActPeGPView:onEnter()
    self._module:reqActInfo()
    self:initUI()
end

function ActPeGPView:getModule()
    return self._module
end

function ActPeGPView:initUI()
    if not self._isInCollection then
        Utils:addSpine(self._posAniTitle, "Common", "zzb_ty_btgx2", "animation", 1, false, 0.3)
        Utils:addSpine(self._posAniTop, "Common", "zzb_ty_tcbk", "animation", 1, false)
        Utils:addSpine(self._posAni, "ActPeGP", "zzb_dt_xslb", "loop", 1, true, 0)
        local widget = ccui.Widget:create()
        local width = (self._list:getContentSize().width - 501 * 3 - 20 * 2) / 2
        widget:setContentSize(width, 10)
        self._list:pushBackCustomItem(widget)
        self._list:setTouchEnabled(false)
        self._list:setCascadeOpacityEnabled(true)
    end
    local path = LocalConfig.IMG_PATH.SPINE_ROOT .. "ActPeGP/"
    self._items = {}
    for i = 1, 4 do
        local item = ActPeGPItem.new(nil, self._isAutoPop)
        -- self._pos[i]:addChild(item)
        self._list:pushBackCustomItem(item)
        self._items[i] = item
        item:setCascadeOpacityEnabled(true)
    end
    self:updateUI()
end

function ActPeGPView:updateUI()
    local info = self._module:getActInfo(self._isInCollection)
    for i, v in ipairs(info) do
        v.sortV = v.lblx
        if self._isInCollection and v.buyNum >= v.limitNum then
            v.sortV = 999  + i-- 已领的放最后
        end
    end
    table.sort(info, function(a, b)
        return a.sortV < b.sortV
    end)
    for i = 1, #self._items do
        if info[i] then
            self._items[i]:updateUI(info[i])
            self._items[i]:setVisible(true)
        else
            self._items[i]:setVisible(false)
        end
    end
end

function ActPeGPView:isFullScreen()
    return true
end

function ActPeGPView:onTouchEventClose(send, event)
    if self._isAutoPop then
        XH.lobby:getModule("PopSystem"):setClick("close", {id="goldPeGP"})
    end
    self:close()
end
function ActPeGPView:getInCollectionPos()
    local anPos = self:getAnchorPoint()
    local viewSize = self:getContentSize()
    return cc.p(viewSize.width * (anPos.x - 0.5), viewSize.height * (anPos.y - 0.5) + 60)
end

function ActPeGPView:setInCollection(bCollection, parentSize)
    self._isInCollection = bCollection
    self._btnClose:setVisible(not bCollection)
    self._layoutBg:setVisible(not bCollection)
    self._list:setTouchEnabled(bCollection)
    if parentSize then
        self._list:setContentSize(parentSize.width, self._list:getContentSize().height)
    end
    if bCollection then
        -- self:setScale(0.8)
    end
end

return ActPeGPView
