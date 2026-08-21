local ChooseView = class("ChooseView",XH.ViewBase)

function ChooseView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/BackActivity/BackActivityChoose.csb"
end

function ChooseView:getBindingInfo()
    return {
        ["_KW_BTN_GO_TEAHOUSE"] = { varName = "_KW_BTN_GO_TEAHOUSE", type = XH.UI_TYPE.IMAGE_TOBUTTON ,onTouchEnded = "onTouchEventGoTeaHouse"},
        ["_KW_BTN_GO_BOX"] = { varName = "_KW_BTN_GO_BOX", type = XH.UI_TYPE.IMAGE_TOBUTTON ,onTouchEnded = "onTouchEventGoBox"},
        ["_KW_ROOT_LAYER"] = { varName = "KW_ROOT_LAYER", type = XH.UI_TYPE.LAYOUT ,onTouchEnded = "onTouchEventClose"},
    }
end

function ChooseView:ctor()
    ChooseView.super.ctor(self)
end

function ChooseView:onTouchEventClose(send, eventType)
    self:close()
end

function ChooseView:onTouchEventGoBox(send, eventType)
    XH.viewManager:openView("CreateBoxRoomView")

    self:close()
end

function ChooseView:onTouchEventGoTeaHouse(send, eventType)
    if XH.playerData:checkNewRealName() ~= 0 then return end
    if XH.playerData:checkNewRealNameVisitor() ~= 0 then return end--�ο͵�½
    XH.teaHouseManager:openTeaHouseList()
    self:close()
end

return ChooseView�