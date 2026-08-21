-- 休闲场引导
local GoldGuideView = class("GoldGuideView", XH.ViewBase)

function GoldGuideView:getCSBPath()
    return "cocosStudio/hall/CSB/guide/GoldGuideLayer.csb"
end

function GoldGuideView:getBindingInfo()
    return {       
        ["_KW_BTN_XIUXIANDATING"] = { varName = "KW_BTN_XIUXIANDATING",type = XH.UI_TYPE.BUTTON, onTouchEnded = "on_KW_UI_BTN_XIUXIAN" },
    }
end

function GoldGuideView:ctor(param) 
    GoldGuideView.super.ctor(self)
    self._viewStartTime = os.time()
    if not XH.ChannelTool.checkIsDoubleKouGame() then
        XH.SysTool.performWithDelayGlobal(function ()
            self:close()
            XH.lobby:getModule("Lobby"):showXiuXianGame()
            XH.viewManager:openView("GoldGameGuideView")
            --数据统计
            local data = {}
            data.time1 = self._viewStartTime or 0
            data.time2 = os.time() or 0
            data.staytime = data.time2 - data.time1
            data.userid = XH.playerData:getNumberID()
            XH.throwDataManager:throwData(XH.ThrowDataDefine.HallGameEntranceSelected,data)
        end,3)
    end
end

function GoldGuideView:on_KW_UI_BTN_XIUXIAN(send,eventType)
    self:close()
    XH.lobby:getModule("Guide"):dispatchEvent({name = XH.lobby:getModule("Guide").GUIDE_CHOOSEAREA})
end

return GoldGuideView
