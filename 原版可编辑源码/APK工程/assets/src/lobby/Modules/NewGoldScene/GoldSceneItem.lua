-- 会员界面，连炸斗地主入口
local GoldSceneItem = class("GoldSceneItem", XH.ViewBase)

function GoldSceneItem:getCSBPath()
    return "cocosStudio/hall/CSB/goldscene/GoldSceneItem.csb"
end

function GoldSceneItem:getBindingInfo()
    return {
        ["_KW_VIP_ROOT"] = { varName = "_vipRoot" },
        ["_KW_BTN_OPEN"] = { varName = "_KW_BTN_OPEN", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchGoldScene" },
    }
end

function GoldSceneItem:ctor()
    GoldSceneItem.super.ctor(self)
    self:initView()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_GOLD_THROW_ERQI_5, nil, { area_id = XH.areaData:getAreaID() })
end

function GoldSceneItem:initView()
    local size = self._vipRoot:getContentSize()
    self:setContentSize(size)
end

function GoldSceneItem:onTouchGoldScene()
    local param = {}
    param.isShowCZCW = true
    XH.lobby:getModule("Lobby"):enterNewGold(param)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_GOLD_THROW_ERQI_6, nil, { area_id = XH.areaData:getAreaID() })
    XH.viewManager:closeView("TabsActivityView")
end

return GoldSceneItem