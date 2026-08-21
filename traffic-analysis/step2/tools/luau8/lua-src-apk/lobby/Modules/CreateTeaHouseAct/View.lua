local viewBase = require("lobby.Modules.PopSystem.View")
local CreateTeaHouseActView = class("CreateTeaHouseActView", viewBase)

function CreateTeaHouseActView:ctor(param)
    param = param or {}
	CreateTeaHouseActView.super.ctor(self,param)
    XH.lobby:getModule("CreateTeaHouseAct"):reqWebActivity()
end

function CreateTeaHouseActView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("CreateTeaHouseAct"), eventKeyName = "EVENT_FULSH_VIEW_CONFIG", callBack = "onShowView"},
    }
end

function CreateTeaHouseActView:onShowView(event)
    local eventData = event.msg.configData or {}
    self._webViewConf = eventData  
    self:initUI()
end

--针对创建比赛场活动
--点击事件
function CreateTeaHouseActView:goActBtnTotalExt(goActBtn, value)
    if value.link == "CREATETEAHOUSEACT" then
        goActBtn:setClickCallBack(handler(self, self.onTouchEventCreateTeaHouse))
    elseif value.link == "close" then
        goActBtn:setClickCallBack(handler(self, self.onTouchEventBGClose))
    elseif value.link == "WOZAIXIANGXIANG" then 
        goActBtn:setClickCallBack(handler(self, self.onTouchEventBtnClose))
    end
end

function CreateTeaHouseActView:onTouchEventCreateTeaHouse(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    --进入创建比赛场页面
    XH.lobby:getModule("CreateTeaHouseAct"):createTeaHouseByAct()
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.TEA_CREATE_2)
    self:close()
end

function CreateTeaHouseActView:onTouchEventBtnClose(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.TEA_CREATE_3)
    self:close()
end

return CreateTeaHouseActView