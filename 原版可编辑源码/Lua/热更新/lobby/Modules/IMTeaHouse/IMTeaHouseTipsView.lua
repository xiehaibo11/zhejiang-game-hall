local IMTeaHouseTipsView = class("IMTeaHouseTipsView", XH.ViewBase)
function IMTeaHouseTipsView:getCSBPath()
    return "cocosStudio/hall/CSB/IMTeaHouse/IMTeaHouseTipsLayer.csb"
end

function IMTeaHouseTipsView:getBindingInfo()
    return {       
        ["_KW_HEAD_PANEL"] = {varName = "_headPanel"},
        ["_KW_PANEL_SHIELD"] = {varName = "_shieldPanel" },
        ["_KW_PANEL_DELETE"] = {varName = "_deletePanel" },
        ["_KW_PANEL_DEL_FROM_TEA"] = {varName = "_delFromTeaPanel"},
        ["_KW_TIP_TITLE"] = {varName = "_tipTitle" , type = XH.UI_TYPE.IMAGE},
        ["_KW_TIP_TITLE_INFO"] = {varName = "_tipTitleInfo" , type = XH.UI_TYPE.IMAGE},
        --头像相关玩家信息
        ["_KW_IMG_HEAD"] = {varName = "_headImg" , type = XH.UI_TYPE.REMOTEIMAGE},
        ["_KW_TXT_NAME"] = {varName = "_nameText", type = XH.UI_TYPE.TEXT},
        ["_KW_TXT_NUM"] = {varName = "_numText", type = XH.UI_TYPE.TEXT},
        --牌友信息界面
        ["_KW_BTND_SHIELD"] = {varName = "_btnShield" , type = XH.UI_TYPE.BUTTON,onTouchEnded = "onShieldClicked"},
        ["_KWA_BTND_DELETE"] = {varName = "_btnDeletePaiYou" , type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchDeletePaiYou"},
        ["_KW_CUT_LINE"] = {varName = "_cutLine"},
        ["_KWA_MSG_LABEL"] = {varName = "_msgLabel"},
        --牌友中删除玩家
        ["_KW_PLAYERNAME_TEXT"] = {varName = "_playerNameText" , type = XH.UI_TYPE.TEXT},
        ["_KW_CONFIRM_BTN"] = {varName = "_confrimBtn",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchDelConFrim"},
        ["_KW_CANCEL_BTN"] = {varName = "_cancelBtn",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchDelCancel"},

        --分组中删除玩家
        ["_KW_DEL_FROM_TEA_TEXT"] = {varName = "_delFromTeaText",type = XH.UI_TYPE.TEXT , onTouchEnded = "onTouchClose"},
        ["_KW_CANCEL_DELTEA_BTN"] = {varName = "_delCanelFrTeaBtn",type = XH.UI_TYPE.BUTTON , onTouchEnded = "onTouchClose"},
        ["_KW_CONFIRM_DELTEA_BTN"] = {varName = "_delSureFrTeaBtn",type = XH.UI_TYPE.BUTTON , onTouchEnded = "onTouchConfirmDelFromTea"},

        ["_KWA_BTND_CLOSE"] = {varName = "_onClosebtn",type = XH.UI_TYPE.BUTTON}
    }
end

local VIEWTYPE = {
    SHIELD = "SHIELD",--屏蔽界面
    DELETEPAIYOU = "DELETEPAIYOU",--删除牌友界面
    DELETEFROMTEA = "DELETEFROMTEA",--从分组中删除界面
}

IMTeaHouseTipsView.SHIELDBTNIMG = {
    [0] = "friend_btn_shield.png",
    [1] = "friend_btn_cancel_shield.png"
}

function IMTeaHouseTipsView:ctor(param)
    IMTeaHouseTipsView.super.ctor(self)
    self.oriPosX = self._headPanel:getPositionX()
    self.oriPosY = self._headPanel:getPositionY()
    if param.data then
        self._scene = param.data.scene
        self._playerName = param.data.name
        self._playerNum = param.data.num
        self._playerUrl = param.data.url
        self._playerState = param.data.flag or XH.IMProtocol.SHIELDTYPE.NOTSHIELD
        self._teaNum = param.data.teaNum
        self:initView(param)
    end
end

function IMTeaHouseTipsView:initView(param)
    self:selectShowViewType(param.data)
    self:initPlayerData(param.data)
end

function IMTeaHouseTipsView:getProxyEvents()
    return {
        --此处监听请求玩家信息的协议，回调加载玩家头像id等信息
        { module = XH.lobby:getModule("Im"), eventKeyName = "EVENT_APPLYLIST_CHANGE", callBack = "onTouchDelSuccessClose" },
    }
end

function IMTeaHouseTipsView:selectShowViewType(data)
    if data.scene == VIEWTYPE.SHIELD then
        self:updatePanelView(true,false,false,false,true,false)
        if data.num and data.num == XH.playerData:getNumberID() then
            self._btnShield:setVisible(false)
            self._btnDeletePaiYou:setVisible(false)
            self._cutLine:setVisible(false)
            self._msgLabel:setVisible(false)
        end
        self._onClosebtn:addTouchEventListener(handler(self, self.onTouchClose))
    elseif data.scene == VIEWTYPE.DELETEPAIYOU then
        self:updatePanelView(false,true,false,true,false,true)
        self.__playerNameText:setString("是否删除【"..XH.StringTool.cutStringByLength(data.name,4).."】，将其移出牌友列表？")
    elseif data.scene == VIEWTYPE.DELETEFROMTEA then
        self:updatePanelView(false,false,true,true,false,true)
        self._delFromTeaText:setString("是否删除【"..XH.StringTool.cutStringByLength(data.name,4).."】，将其移出分组？")
        self._onClosebtn:addTouchEventListener(handler(self, self.onTouchClose))
    end
end

function IMTeaHouseTipsView:updatePanelView(state1,state2,state3,IsChangeHeadPos,state4,state5)
    self._shieldPanel:setVisible(state1)
    self._deletePanel:setVisible(state2)
    self._delFromTeaPanel:setVisible(state3)
    self._tipTitle:setVisible(state4)
    self._tipTitleInfo:setVisible(state5)
    if IsChangeHeadPos then
        local positionX = self._headPanel:getPositionX()
        local positionY = self._headPanel:getPositionY()
        self._headPanel:setPosition(cc.p(positionX + 50,positionY - 100))
    else
        self._headPanel:setPosition(cc.p(self.oriPosX,self.oriPosY))
    end
end

function IMTeaHouseTipsView:initPlayerData(data)
    self._nameText:setString(XH.StringTool.cutStringByLength(data.name,12))
    self._headImg:setUrl(data.url)
    self._numText:setString(data.num)
    if self._playerState and self._btnShield then
        if self._playerState == XH.IMProtocol.SHIELDTYPE.NOTSHIELD or self._playerState == XH.IMProtocol.SHIELDTYPE.SHIELD then
            self._btnShield:loadTexture(self.SHIELDBTNIMG[self._playerState], ccui.TextureResType.plistType)
        end
    end
end

function IMTeaHouseTipsView:onTouchDeletePaiYou(send,eventType)
    self:updatePanelView(false,true,false,true,false,true)
    self._onClosebtn:addTouchEventListener(handler(self, self.onTouchDelCancel))
    self._playerNameText:setString("是否删除【"..XH.StringTool.cutStringByLength(self._playerName,4).."】，将其移出牌友列表？")
end

function IMTeaHouseTipsView:onShieldClicked(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if not self._playerState or (self._playerState ~= XH.IMProtocol.SHIELDTYPE.NOTSHIELD and self._playerState ~= XH.IMProtocol.SHIELDTYPE.SHIELD) then
        self:close()
        return
    end
    local bShield = self._playerState == XH.IMProtocol.SHIELDTYPE.NOTSHIELD and XH.IMProtocol.SHIELDTYPE.SHIELD or XH.IMProtocol.SHIELDTYPE.NOTSHIELD
    XH.lobby:getModule("Im"):reqShield(self._playerNum, bShield)
    self:close()
end

function IMTeaHouseTipsView:onTouchDelConFrim(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if self._playerNum then
        XH.lobby:getModule("Im"):reqDelFriend(self._playerNum)
    end
end

function IMTeaHouseTipsView:onTouchDelSuccessClose(send,eventType)
    XH.TipTool.showToast("删除成功")
    XH.lobby:getModule("Im"):reqFriendListInfo()
    self:close()
end

function IMTeaHouseTipsView:onTouchConfirmDelFromTea(send,eventType)
    XH.lobby:getModule("Im"):reqKickMember(self._teaNum,self._playerNum)
    self:close()
end

function IMTeaHouseTipsView:onTouchDelCancel(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local data = {scene = "SHIELD"}
    self:selectShowViewType(data)
end

function IMTeaHouseTipsView:onTouchClose(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
end

return IMTeaHouseTipsView