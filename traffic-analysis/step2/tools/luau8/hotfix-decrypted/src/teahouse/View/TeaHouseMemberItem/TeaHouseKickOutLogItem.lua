---@class TeaHouseKickOutLogItem : View
local TeaHouseKickOutLogItem = class("TeaHouseKickOutLogItem", TeaHouse.View)

local KW_ICON_DEFAULT_PNG = "tea_house_member_item_head.png"
local KW_ICON_DEFAULT_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_member_view.plist"

TeaHouseKickOutLogItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseMemberItem/TeaHouseKickOutLogItem.csb",
    binding = {
        ["_KW_IMG_LOG_ITEM"] = { tag = "_KW_IMG_LOG_ITEM", name = "_imgLogItem", class = "img" },
        ["_KW_PANEL_HEAD"] = { tag = "_KW_PANEL_HEAD", name = "_panelHead", class = "panel" },
        ["_KW_TEXT_NAME"] = { tag = "_KW_TEXT_NAME", name = "_textName", class = "text" },
        ["_KW_TEXT_INDEX"] = { tag = "_KW_TEXT_INDEX", name = "_textIndex", class = "text" },
        ["_KW_TEXT_TIME1"] = { tag = "_KW_TEXT_TIME1", name = "_textTime1", class = "text" },
        ["_KW_TEXT_TIME2"] = { tag = "_KW_TEXT_TIME2", name = "_textTime2", class = "text" },
        ["_KW_TEXT_QUIT_TIP"] = { tag = "_KW_TEXT_QUIT_TIP", name = "_textQuitTip", class = "text" },
        ["_KW_TEXT_OP_NAME"] = { tag = "_KW_TEXT_OP_NAME", name = "_textOpName", class = "text" },
        ["_KW_BTN_CLEAR"] = { tag = "_KW_BTN_CLEAR", name = "_btnClear", class = "btn", events = "onClearClicked" },
        ["_KW_BTN_INVITE"] = { tag = "_KW_BTN_INVITE", name = "_btnInvite", class = "btn", events = "onInviteClicked" },
    }
}

function TeaHouseKickOutLogItem:ctor()
    TeaHouseKickOutLogItem.super.ctor(self)

    self._info = nil

    self:initUI()
end

function TeaHouseKickOutLogItem:initUI()
    if self._imgLogItem then
        self._imgLogItem:removeFromParent()
        self:addChild(self._imgLogItem)
    end
end

function TeaHouseKickOutLogItem:getSize()
    if self._imgLogItem ~= nil then
        return self._imgLogItem:getContentSize()
    end
    return cc.size(0, 0)
end

function TeaHouseKickOutLogItem:updateInfo(info)
    self._info = info
    if self._panelHead then
        if not self._remoteImage then
            local size = self._panelHead:getContentSize()
            self._remoteImage = TeaHouse.RemoteImage.new()
            :setPosition(size.width / 2, size.height / 2)
            :ignoreContentAdaptWithSize(false)
            :setContentSize(size.width - 5, size.height - 5)
            :addTo(self._panelHead)
            cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_ICON_DEFAULT_PLIST)
            self._remoteImage:loadTexture(KW_ICON_DEFAULT_PNG, ccui.TextureResType.plistType)
        end
        TeaHouse.SysTool.loadRemoteImage(self._remoteImage, info.acUrl, KW_ICON_DEFAULT_PNG, KW_ICON_DEFAULT_PLIST)
    end
    if self._textName then
        self._textName:setString(TeaHouse.StringTool.getTrimName(info.acNickName, 12))
    end
    if self._textIndex then
        self._textIndex:setString("序号:" .. info.nPlayerNumId)
    end
    if self._textTime1 then
        self._textTime1:setString(os.date("%Y.%m.%d", info.nTime))
    end
    if self._textTime2 then
        self._textTime2:setString(os.date("%H:%M:%S", info.nTime))
    end
    
    if self._textQuitTip then
        self._textQuitTip:setVisible(info.cOperType == TeaHouse.manager.teahouseMember.LOG_TYPE.QUIT or
         info.cOperType == TeaHouse.manager.teahouseMember.LOG_TYPE.MQUIT )
    end

    if self._textOpName then
        self._textOpName:setString(TeaHouse.StringTool.getTrimName(info.acOperNickName, 12))
    end
    if self:checkShowBtn() then
        self._btnInvite:setVisible(true)
    else
        self._btnInvite:setVisible(false)
    end
end

function TeaHouseKickOutLogItem:checkShowBtn()
    local teahouseData = TeaHouse.manager.teahouseData
    -- 自己不展示 
    -- 自己是副领队，但是没有踢人权限，不展示
    if teahouseData:isOwner() then
        return true
    elseif teahouseData:isAdmin() then
        if TeaHouse.BridgeData.getNumberID() == self._info.numid or not (teahouseData:checkSelfPower("ModifyMember") and teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.AUDIT)) then
            return false
        else
            return true
        end
    else
        return false
    end
end

function TeaHouseKickOutLogItem:onClearClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.TipTool.showTip({ 
        type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL_WITHOUT_CLOSE,
        funcOK = function()
            if not self or tolua.isnull(self) or not self._info then
                return
            end
            TeaHouse.manager.teahouseMember:onReqDelKickLog(self._info.nPlayerAreaId, self._info.nPlayerNumId, self._info.nOperAreaId, self._info.nOperNumId, self._info.nTeaId, self._info.nTime)
            -- 自测回调
            -- TeaHouse.manager.teahouseMember:onRespDelKickLog(nil,TeaHouse.Req.TYPE.SUCCESS,{
            --     ucFlag = 0,
            --     nPlayerAreaId = self._info.nPlayerAreaId,
            --     nPlayerNumId = self._info.nPlayerNumId,
            --     nOperAreaId = self._info.nOperAreaId,
            --     nOperNumId = self._info.nOperNumId,
            --     nTeaId = self._info.nTeaId,
            --     nTime = self._info.nTime,
            --     })            
        end,         
    }, "DELETE_KICK_LOG")
end

-- 邀请入圈
function TeaHouseKickOutLogItem:onInviteClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:getMaxPlayerCount() > 0 and teahouseData:getPlayerCount() >= teahouseData:getMaxPlayerCount() then
        TeaHouse.TipTool.showToast("TEAHOUSE_REACH_MAX_NUMBER")
    else
        TeaHouse.TipTool.showTip({ 
            type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL_WITHOUT_CLOSE,
            funcOK = function()
                if not self or tolua.isnull(self) or not self._info then
                    TeaHouse.TipTool.showToast("邀请失败")
                    return
                end
                local tempList = {}
                table.insert(tempList,self._info.nPlayerNumId)
                -- nTeaId, nInviteAreaId,nInviteNumId,nChannel,nTime
                TeaHouse.manager.teahouseMember:onReqInvitePlayer(self._info.nTeaId,self._info.nPlayerAreaId,self._info.nPlayerNumId,1,self._info.nTime)
                -- XH.lobby:getModule("Im"):reqInvitePlayer(self._info.nTeaId,self._info.nPlayerNumId,1,true,1,self._info.nTime)

                -- TeaHouse.manager.teahouseMember:onReqSendRecomendInvite(tempList,1,1,self._info.nTime,self._info.nOperNumId)
                -- TeaHouse.manager.teahouseMember:onRespSendRecomendInvite(nil,TeaHouse.Req.TYPE.SUCCESS,nil,self._info.nTime,self._info.nOperNumId)
            end,         
        }, "INVITE_PLAYER_FROM_KICK")
    end
end

return TeaHouseKickOutLogItem�