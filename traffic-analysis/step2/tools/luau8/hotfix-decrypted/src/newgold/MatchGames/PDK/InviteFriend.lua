
local InviteFriend = class("InviteFriend", cc.load("mvc").ViewBase)

--csb文件
InviteFriend.RESOURCE_FILENAME = "InviteFriend.csb"

--节点绑定及事件
InviteFriend.RESOURCE_BINDING = {

    Button_1 = {
        varname="btn_share_friend",
        anim=true,
        events={
            {event="touch",method="on_btn_touch"}
        }
    },
    Button_2 = {
        varname="btn_share_club",
        anim=true,
        events={
            {event="touch",method="on_btn_touch"}
        }
    },
    Button_3 = {
        varname="btn_back",
        anim=true,
        events={
            {event="touch",method="on_btn_touch"}
        }
    },
    Panel_1 = {
        varname="mask",
        events={
            {event="click",method="on_mask_clicked"}
        }
    }
}


function InviteFriend:ctor(_type , exitCallback)

    InviteFriend.super.ctor(self)

    self._type = _type or 1
    self.exitCallback = exitCallback

    self.shareType = -1

    self:fixPos()
    self:showMask()

end



function InviteFriend:onExit()
    if self.exitCallback and type(self.exitCallback) == "function" then 
        self.exitCallback()
    end
end

function InviteFriend:friend()

end

--按钮操作
function InviteFriend:on_btn_touch(event)
    local sender = event.target
    if event.name == "ended" then
        if sender == self.btn_back then --返回
            self:removeFromParent()
        elseif sender == self.btn_share_friend then --分享好友
            self:friend()
            self:removeFromParent()
        elseif sender == self.btn_share_club then 
        end
    end
end

--@desc 点击其他区域关闭
function InviteFriend:on_mask_clicked(sender)
    self:removeFromParent()
end

return InviteFriend