local MaiZiWindow = CF.gameClass("MaiZiWindow", CF.ViewBase)

MaiZiWindow.ClsName = "MaiZi"
MaiZiWindow.ObjName = "MaiZi"

function MaiZiWindow:getCSBPath()
    return "res/cocosStudio/MahjongNew/GameLayer/CSB/JiaXing/MaiZi.csb"
end

function MaiZiWindow:getBindingInfo()
    return {
        ["_KW_PANEL_MAI_ZI"] = {varName="_maiZiPanel"},
        ["_KW_BTN_MAI_ZI"] = {varName="_maiZiBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded  = "onMaiZiBtnClicked"},
        ["_KW_BTN_MAI_ZI_CANCEL"] = {varName="_maiZiCancelBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded  = "onMaiZiCancelBtnClicked"},
    }
end

function MaiZiWindow:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_HIDE_MAIZI", callBack = "onHideMaiZi"},
    }
end

function MaiZiWindow:ctor(param)
    MaiZiWindow.super.ctor(self,param)
    self:setName(self.ObjName)
end

--将窗体显示到屏幕
function MaiZiWindow:showSelf(order)
	local zorder = order or CF.ZORDER.WINDOW
	local runningScene = display.getRunningScene()
    if runningScene then
        runningScene:addChild(self,zorder)
    end
	return self
end

function MaiZiWindow:onHideMaiZi()
    self:close()
end

-- 买
function MaiZiWindow:onMaiZiBtnClicked(send, eventType)
    CF.msgManager:sendMZi(1)
    self:close()
end

-- 取消
function MaiZiWindow:onMaiZiCancelBtnClicked(send, eventType)
    CF.msgManager:sendMZi(0)
    self:close()
end

return MaiZiWindow