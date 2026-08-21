local BtnBase = import("..BtnBase")
local StoreBtn = class("StoreBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")
local RemoteConfig = import("...Configs.RemoteConfig")
local RedPointManager = import("...Manager.RedPointManager")

function StoreBtn:getCSBPath()
    return XH.Bridge:getCCSResPath("StoreBtn.csb")
end

function StoreBtn:onInitCSB(csbPath)
    self:initCSB(self:getCSBPath())
end

function StoreBtn:getBindingInfo()
    return {["_panel"] = {varName = "_panel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick"}, ["_ani"] = {varName = "_ani"}}
end

-- function StoreBtn:getProxyEvents()
--     return {}
-- end

function StoreBtn:ctor(id, areaId, cfg)
    self._module = XH.Bridge:getModule(LocalConfig.MP.SHOP)
    StoreBtn.super.ctor(self, id, areaId, cfg)

    self:initSpine({path = "StoreBtn/", tex = "zzb_jbdt_sc.json", ske = "zzb_jbdt_sc.atlas", armatureName = "animation", scale = 1}, self._ani)

    self._redPointPath = "shop"
    if XH.Bridge:getModule("GoldNew"):isSupport("shop") then
        RedPointManager:registerNode(self._redPointPath)
        RedPointManager:addListener(self._redPointPath, function(state)
            if tolua.isnull(self) then
                return
            end
            XH.UITool.setVisible(self, "_imgRedPoint", state)
        end)
    end
    -- local iconVer = RemoteConfig:getShopIconRedPointVer()
    -- if iconVer and XH.Bridge:getModule("GoldNew.SubModules.Shop"):isSNeedShowRedPoint({goods_mark = "redpoint=" .. iconVer, id = "icon"}) then
    --     RedPointManager:setState(self._redPointPath, true, false)
    -- end
    -- self._iconVer = iconVer
end

function StoreBtn:addTestNode()
    local txt = cc.Label:createWithSystemFont("test", "Arial", 20)
    local size = self:getContentSize()
    -- txt:setAnchorPoint(0.5, 0.5)
    txt:setPosition(self:getContentSize().width / 2, self:getContentSize().height / 2 - 30)
    txt:setString("" .. self._id)
    self:addChild(txt)
end

function StoreBtn:onClick()
    self:throwClickData()
    XH.Bridge:throwData("dj24080866", {page = "金币大厅"})
    XH.Bridge:getModule("GoldNew"):openFullView("shop")


    -- if XH.Bridge:getModule("GoldNew"):isSupport("shop") then
    --     XH.Bridge.viewManager:openView("GoldHallShopView")
    -- else
    --     XH.Bridge.viewManager:openView("ShopView")
    -- end
    -- if self._iconVer then
    --     RedPointManager:setState(self._redPointPath, false)
    --     XH.Bridge:getModule("GoldNew.SubModules.Shop"):addRedPointInfo({goods_mark = "redpoint=" .. self._iconVer, id = "icon"})
    -- end
end
return StoreBtn
