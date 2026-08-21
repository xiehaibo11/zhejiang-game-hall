local IMTeaHouseApplyFriendView = class("IMTeaHouseApplyFriendView", XH.ViewBase)
function IMTeaHouseApplyFriendView:getCSBPath()
    return "cocosStudio/hall/CSB/IMTeaHouse/IMTeaHouseApplyFriend.csb"
end

function IMTeaHouseApplyFriendView:getBindingInfo()
    return {       
        ["_KW_APPLY_LIST"] = {varName = "_applyViewList",type = XH.UI_TYPE.LISTVIEW},
        ["_KW_PANEL_ITEM"] = {varName = "_panelItem"},
        ["_KW_NO_APPLY_PANEL"] = {varName = "_noApplyPanel"},
        --玩家头像模块
        ["_KW_IMG_HEAD"] = {varName = "_headImg",type = XH.UI_TYPE.REMOTEIMAGE},
        ["_KW_PLAYER_NAME"] = {varName = "_nameText"},
        ["_KW_PLAYER_ID"] = {varName = "_numText"},
        ["_KW_BTND_CLOSE"] = {varName = "_onClosebtn", type = XH.UI_TYPE.BUTTON , onTouchEnded = "onTouchClose"},
        ["_KW_PLAYER_STATE"] = {varName ="_userStateImg" , type = XH.UI_TYPE.IMAGE}
    }
end

function IMTeaHouseApplyFriendView:ctor()
    IMTeaHouseApplyFriendView.super.ctor(self)
    XH.lobby:getModule("Im"):reqApplyNum(os.time())
    self._applyList = {} 
end

function IMTeaHouseApplyFriendView:getProxyEvents()
    return {
        --此处监听请求玩家信息的协议，回调加载玩家头像id等信息
        { module = XH.lobby:getModule("Im"), eventKeyName = "EVENT_APPLYLIST_CHANGE", callBack = "updetePlayerInfo" },
    }
end


function IMTeaHouseApplyFriendView:updetePlayerInfo(data)
    self._applyViewList:removeAllItems()
    if data and data.info then
        self._applyList = data.info
    end
    if next(self._applyList) ~= nil then
        self._noApplyPanel:setVisible(false)
        self._applyViewList:setVisible(true)
    else
        self._noApplyPanel:setVisible(true)
        self._applyViewList:setVisible(false)
        return
    end
    local widthSize = self._panelItem:getContentSize().width
    local heightSize = self._panelItem:getContentSize().height
    self._applyViewList:setInnerContainerSize(cc.size(widthSize,heightSize * #self._applyList))
    for index, v in ipairs(self._applyList) do
        local temp = self._panelItem:clone()
        temp:getChildByName("_KW_PLAYER_NAME"):setString(XH.StringTool.cutStringByLength(v.nickname,12))
        temp:getChildByName("_KW_PLAYER_ID"):setString(v.numid)
        temp:setName("player"..index)
        if v.online then
            XH.UITool.loadTexture(temp, "_KW_PLAYER_STATE","friend_state_on_line.png" , ccui.TextureResType.plistType)
        else
            XH.UITool.loadTexture(temp, "_KW_PLAYER_STATE","friend_state_off_line.png" , ccui.TextureResType.plistType)
        end
        local agreeNode = temp:getChildByName("_KW_BTN_AGREE")
        agreeNode:setName("player"..index)
        agreeNode:addTouchEventListener(handler(self, self.onTouchHeadAgreeEvents))
        agreeNode.playerId = v.numid
        local refuseNode = temp:getChildByName("_KW_BTN_REFUSE")
        refuseNode:setName("player"..index)
        refuseNode:addTouchEventListener(handler(self, self.onTouchHeadRefuseEvents))
        refuseNode.playerId = v.numid
        self:updateImg(temp:getChildByName("_KW_IMG_HEAD"), v.headurl)        
        self._applyViewList:addChild(temp)
    end
    

end

function IMTeaHouseApplyFriendView:updateImg(node,url)
    if (not url) or (url == "")  then
        return
    end
    local size = node:getContentSize()
    local imageNode = XH.RemoteImage.new()
        :setPosition(size.width/2, size.height/2)
        :setContentSize(size.width,size.height)
        :ignoreContentAdaptWithSize(false)
        :addTo(node)
    imageNode:setUrl(url)
end

function IMTeaHouseApplyFriendView:onTouchHeadAgreeEvents(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local numberid = self:dealMessage(send)
    if numberid then
        XH.lobby:getModule("Im"):reqDelFriendApply(numberid,true)
    else
        XH.TipTool.showToast("玩家账号有误，请刷新重试")
    end
end

function IMTeaHouseApplyFriendView:onTouchHeadRefuseEvents(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local numberid = self:dealMessage(send)
    if numberid then
        XH.lobby:getModule("Im"):reqDelFriendApply(numberid,false)
    else
        XH.TipTool.showToast("操作异常，请重试")
    end
end

function IMTeaHouseApplyFriendView:dealMessage(send)

    if send:getName() then
        for k,v in ipairs(self._applyList) do
            if v.numid == send.playerId then
                table.remove(self._applyList,k)
                return v.numid
            end
        end
    end
    return false
end

function IMTeaHouseApplyFriendView:onTouchClose(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    --刷新申请列表
    XH.lobby:getModule("Im"):reqApplyNum(0)
    self:close()
end

return IMTeaHouseApplyFriendView