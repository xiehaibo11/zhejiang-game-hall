-- 会员权益
local VipWelfareLayer = class("VipWelfareLayer", XH.ViewBase)
local VipWelfareItem = require("lobby.Modules.NewVip.VipWelfareItem")
local GoldSceneItem = require("lobby.Modules.NewGoldScene.GoldSceneItem")

function VipWelfareLayer:getCSBPath()
    return "cocosStudio/hall/CSB/vip/VipWelfareLayer.csb"
end

function VipWelfareLayer:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_UI_ROOT_LAYER"] = { varName = "_panelRoot", onTouchEnded = "onTouchEventClose" },
        ["_KW_VIP_LIST"] = { varName = "_vipList" },
        ["_KW_VIP_WELFARE_ITEM"] = { varName = "_vipWafareItem" },
    }
end

function VipWelfareLayer:getProxyEvents()
    return {
        { module = XH.lobby:getModule("NewVip"), eventKeyName = "EVENT_VIP_CONF", callBack = "onVipConf" },
    }
end

function VipWelfareLayer:ctor(param)
    param = param or {}
    VipWelfareLayer.super.ctor(self, param)
    self._vipList:setScrollBarEnabled(false)
    XH.lobby:getModule("NewVip"):reqVipConf()
    XH.throwDataManager:throwData(XH.ThrowDataDefine.VipWelfareView, { userid = XH.playerData:getNumberID() })
end

function VipWelfareLayer:onVipConf()
    local vipconf = XH.lobby:getModule("NewVip"):getVipConf()
    self._vipList:removeAllChildren()
    for i = 1, #vipconf do
        local vipWelfareItem = VipWelfareItem.new()
        vipWelfareItem:refreshView(vipconf[i].url, vipconf[i].desc, vipconf[i].state, vipconf[i].lefttime, vipconf[i].propid, vipconf[i].descRenew)
        self._vipList:pushBackCustomItem(vipWelfareItem)
    end
    if XH.lobby:getModule("NewGoldScene"):getIconVisible() then
        local goldSceneItem = GoldSceneItem.new()
        self._vipList:pushBackCustomItem(goldSceneItem)
    end
end

function VipWelfareLayer:onTouchEventClose(send, eventType)
    self:close()
end

return VipWelfareLayer