---@class TeaHouseMemberAddCardLogItem : View
local TeaHouseMemberAddCardLogItem = class("TeaHouseMemberAddCardLogItem", TeaHouse.View)

local KW_ICON_DEFAULT_PNG = "tea_house_member_item_head.png"
local KW_ICON_DEFAULT_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_member_view.plist"

TeaHouseMemberAddCardLogItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseMemberItem/TeaHouseMemberLogItem.csb",
    binding = {
        ["_KW_IMG_LOG_ITEM"] = { tag = "_KW_IMG_LOG_ITEM", name = "_imgLogItem", class = "img" },
        ["_KW_PANEL_HEAD"] = { tag = "_KW_PANEL_HEAD", name = "_panelHead", class = "panel" },
        ["_KW_TEXT_NAME"] = { tag = "_KW_TEXT_NAME", name = "_textName", class = "text" },
        ["_KW_TEXT_INDEX"] = { tag = "_KW_TEXT_INDEX", name = "_textIndex", class = "text" },
        ["_KW_TEXT_TIME"] = { tag = "_KW_TEXT_TIME", name = "_textTime", class = "text" },
        ["_KW_TEXT_OP_NAME"] = { tag = "_KW_TEXT_OP_NAME", name = "_textOpName", class = "text" },
        ["_KW_TEXT_JOIN_TIP"] = { tag = "_KW_TEXT_JOIN_TIP", name = "_textJoinTip", class = "text" },
        ["_KW_TEXT_QUIT_TIP"] = { tag = "_KW_TEXT_QUIT_TIP", name = "_textQuitTip", class = "text" },
        ["_KW_TEXT_KICK_TIP"] = { tag = "_KW_TEXT_KICK_TIP", name = "_textKickTip", class = "text" },
        ["_KW_TEXT_CARD_RECORD"] = { tag = "_KW_TEXT_CARD_RECORD", name = "_textAddCardLog", class = "text" },
    }
}

function TeaHouseMemberAddCardLogItem:ctor()
    TeaHouseMemberAddCardLogItem.super.ctor(self)

    self._info = nil

    self:initUI()
end

function TeaHouseMemberAddCardLogItem:initUI()
    if self._imgLogItem then
        self._imgLogItem:removeFromParent()
        self:addChild(self._imgLogItem)
    end
    if self._textJoinTip then
        self._textJoinTip:setVisible(false)
    end
    if self._textQuitTip then
        self._textQuitTip:setVisible(false)
    end
    if self._textKickTip then
        self._textKickTip:setVisible(false)
    end
end

function TeaHouseMemberAddCardLogItem:getSize()
    if self._imgLogItem ~= nil then
        return self._imgLogItem:getContentSize()
    end
    return cc.size(0, 0)
end

function TeaHouseMemberAddCardLogItem:updateInfo(info)
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
        if info.tToUserinfo then      
            TeaHouse.SysTool.loadRemoteImage(self._remoteImage, info.tToUserinfo.acHeadUrl, KW_ICON_DEFAULT_PNG, KW_ICON_DEFAULT_PLIST)
        else
            TeaHouse.SysTool.loadRemoteImage(self._remoteImage, info.player_url, KW_ICON_DEFAULT_PNG, KW_ICON_DEFAULT_PLIST)
        end
    end
    if self._textName then
        if info.tToUserinfo then      
            self._textName:setString(TeaHouse.StringTool.getTrimName(info.tToUserinfo.acNickName, 12))
        else
            self._textName:setString(TeaHouse.StringTool.getTrimName(info.player_nick, 12))
        end
    end
    if self._textIndex then
        if info.tToUserinfo then      
            self._textIndex:setString("序号:" .. info.tToUserinfo.nNumId)
        else
            self._textIndex:setString("序号:" .. info.player_numid)
        end
    end
    if self._textTime then
        if info.tToUserinfo then      
            self._textTime:setString(os.date("%Y.%m.%d %H:%M:%S", info.nOptTime))
        else
            self._textTime:setString(os.date("%Y.%m.%d %H:%M:%S", info.time))
        end
    end
    --解析comments判断是给比赛场划卡还是预付模式划卡
    if  self._textAddCardLog then
        if info.nPropCount then
            local msgHead = "增加了"
            if info.nPropCount < 0 then
                msgHead = "减少了"
            end
            self._textAddCardLog:setVisible(true)
            self._textAddCardLog:setString(msgHead .. math.abs(info.nPropCount) .. "张房卡")
            self._textAddCardLog:setPositionX(480)

        else
        --预付划卡
            local addCardToPlayer = string.match(info.comments, "nAddCnt=(%d+)")
            local minusCardToPlayer = string.match(info.comments, "nAddCnt=%p(%d+)")
            local teaPropNum = string.match(info.comments, "teaprops=(%d+)")
            local addFangFeiToPlayer
            local minusFangFeiToPlayer
            local remainFangFei
            if info.oper_type == TeaHouse.TeaHouseProtocol.RespTeaAndPlayerOperation.OPERTYPE.ADD_PLAYERFEE then
                addFangFeiToPlayer = string.match(info.comments, "nAddCnt=(%d+)")--日志要改，此处注释 等服务给新的字段
                minusFangFeiToPlayer = string.match(info.comments, "nAddCnt=%p(%d+)")
                remainFangFei = string.match(info.comments, "havefee=(%d+)")
            end
            local cardLogPos = self._textAddCardLog:getPositionX()
            local transCardNum
            local msgHead = ""
            if addCardToPlayer  then
                msgHead = "增加了"
                transCardNum = tonumber(addCardToPlayer)
            end
            if minusCardToPlayer  then
                msgHead = "减少了"
                transCardNum = tonumber(minusCardToPlayer)
            end
            if teaPropNum then
                if TeaHouse.BridgeData.getSmallRoomCardRatio() 
                and not (TeaHouse.LOBBY_ID.SHAOXING3D == TeaHouse.BridgeData.getLobbyID())
                and not (TeaHouse.LOBBY_ID.WENZHOU == TeaHouse.BridgeData.getLobbyID()) then --个别区配了小卡，但是没在用小卡，需要加上特判
                    teaPropNum = tonumber(teaPropNum/TeaHouse.BridgeData.getSmallRoomCardRatio())
                else
                    teaPropNum = tonumber(teaPropNum)
                end
            end
            if transCardNum then
                self._textAddCardLog:setVisible(true)
                if info.oper_type == TeaHouse.TeaHouseProtocol.RespTeaAndPlayerOperation.OPERTYPE.ADD_PLAYERFEE then
                    transCardNum = transCardNum/100
                    self._textAddCardLog:setString(msgHead .. math.abs(transCardNum) .. "比赛场卡")
                else
                    self._textAddCardLog:setString(msgHead .. math.abs(transCardNum) .. "张房卡")
                end
                if teaPropNum then
                    -- self._textAddCardLog:setPositionX(cardLogPos-150)
                    local text = self._textAddCardLog:getString()
                    self._textAddCardLog:setString(text..",当前比赛场房卡为"..teaPropNum)
                end
                if remainFangFei then
                    remainFangFei = remainFangFei/100
                    -- self._textAddCardLog:setPositionX(cardLogPos-150)
                    local text = self._textAddCardLog:getString()
                    self._textAddCardLog:setString(text..",当前比赛场卡为"..remainFangFei)
                end
            end
            -- 领队或者副领队修改库存propcount=2,owner propcnt=4071
            local addCardToTea = string.match(info.comments, "propcount=(%d+)")
            if addCardToTea then
                self._textAddCardLog:setVisible(true)
                self._textAddCardLog:setString("比赛场库存增加" .. math.abs(addCardToTea) .. "张房卡")
                if teaPropNum then
                    -- self._textAddCardLog:setPositionX(cardLogPos-220)
                    local text = self._textAddCardLog:getString()
                    self._textAddCardLog:setString(text..",当前比赛场房卡为"..teaPropNum)
                end
                if self._textIndex then
                    local teaHousePwd = string.format("%06d", TeaHouse.manager.teahouseData:getTeaHousePwd())
                    self._textIndex:setString("口令:" .. teaHousePwd)
                end
                if self._textName then
                    self._textName:setString("比赛场库存")
                end
            end
        end
    end
    
    if self._textOpName then
        if info.tFromUserinfo then      
            self._textOpName:setString(TeaHouse.StringTool.getTrimName(info.tFromUserinfo.acNickName, 12))
        else
            self._textOpName:setString(TeaHouse.StringTool.getTrimName(info.oper_nick, 12))
        end
    end
end

return TeaHouseMemberAddCardLogItem#  