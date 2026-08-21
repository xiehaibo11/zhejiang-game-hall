local BottoomBtn = import(".BottoomBtn")
local TopBtn = class("TopBtn", BottoomBtn)
local LocalConfig = import("...Configs.LocalConfig")
local RedPointManager = import("...Manager.RedPointManager")

function TopBtn:getCSBPath()
    return XH.Bridge:getCCSResPath("TopBtn.csb")
end

function TopBtn:ctor(...)
    BottoomBtn.ctor(self, ...)
    self._imgIcon:ignoreContentAdaptWithSize(true)
    if self._id == LocalConfig.BTN_ID.TOP_BAG then
        RedPointManager:registerNode("bag")
        RedPointManager:addListener("bag", function(state)
            if tolua.isnull(self) then
                return
            end
            XH.UITool.setVisible(self, "_panelNew", state)
            XH.UITool.setVisible(self, "_redPoint", state)
            if state then
                self:stopAllActions()
                self:runAction(cc.Sequence:create(cc.DelayTime:create(2), cc.CallFunc:create(function()
                    XH.UITool.setVisible(self, "_panelNew", false)
                end)))
            end
        end)
    end
end

function TopBtn:onClick()
    self:throwClickData()
    if self._id == LocalConfig.BTN_ID.TOP_BAG then
        XH.Bridge:getModule("GoldNew"):openFullView("bag")
    elseif self._id == LocalConfig.BTN_ID.SETTING then
        XH.Bridge.viewManager:openView("GoldHallSettingView")
    elseif self._id == LocalConfig.BTN_ID.CUSTOMER then
        XH.Bridge:gotoKefu("GOLDLOBBY")
    end
end

function TopBtn:showLine(bShow)
    -- self._imgLine:setVisible(bShow)
end

return TopBtn
