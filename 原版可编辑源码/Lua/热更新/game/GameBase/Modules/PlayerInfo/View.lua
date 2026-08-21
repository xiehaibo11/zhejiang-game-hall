local PlayerInfoView = class("PlayerInfoView", CF.ViewBase)
local SxVipConfig = require("lobby.Modules.Sxvip.Config")

local MXA_PROP_CNT_IN_LINE = 4

function PlayerInfoView:ctor(param)
    self._seatId = param.seatId or 0
    self._localSeat = CF.roomData:seatToLocal(self._seatId)
    self._playerData = CF.roomData:getPlayerDataBySeatId(self._seatId)
    param = param or {}
    PlayerInfoView.super.ctor(self, param)
    self._headImg = nil

    self._adress:setString("")

    self._playerInfo:setVisible(self._localSeat == CF.roomData:getSelfLocalSeat())
    if self._localSeat == CF.roomData:getSelfLocalSeat() then
        self._panelBlock:setVisible(false)
        self._checkBoxMassSending:setSelected(true)
        self._checkBoxMassSending:setTouchEnabled(false)
        self._checkBoxMassSending:setGrayedAndEnabled(true, false)
    elseif self._playerData then
        local isMass = cc.UserDefault:getInstance():getBoolForKey("KW_MASS_SELECT", false)
        self._checkBoxMassSending:setSelected(isMass)
        self._checkBoxEmojis:setSelected(CF.game:getModule("PlayerInfo"):getBlockedEmojis(self._playerData:getNumberID()))
        self._checkBoxChat:setSelected(CF.game:getModule("PlayerInfo"):getBlockedChat(self._playerData:getNumberID()))
        self._checkBoxVoice:setSelected(CF.game:getModule("PlayerInfo"):getBlockedVoice(self._playerData:getNumberID()))
    end

    self:createChildren()
    self:initGps()
    self:JudgeGoldRoomUI()
    self:updatePlayerRich()
    self:initKickUser()
    self:updateSlideAni()
    self:throwData()
    XH.playerData:flushPlayerDrop()

    self._scrollView:setScrollBarEnabled(false)
    self._listViewSingle:setScrollBarEnabled(false)
    self._listViewMult:setScrollBarEnabled(false)
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090618)
end

function PlayerInfoView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/PlayerInfoLayer.csb"
end

function PlayerInfoView:getBindingInfo()
    return {
        ["_KW_PANAEL_USER_INFO_BG"] = {varName = "_panelBG"},
        ["_KW_SCROLL_VIEW"] = {varName = "_scrollView"},
        ["_KW_PLAYER_INFO"] = {varName = "_playerInfo"},
        ["_KW_PLAYER_INFO_DIAMOND"] = {varName = "_playerInfoDiamond"},
        ["_KW_PLAYER_INFO_ROOMCARD"] = {varName = "_playerInfoRoomCard"},
        ["_KW_TEXT_NICK_NAME"] = {varName = "_nickName"},
        ["_KW_PANAEL_HEAD_POS"] = {varName = "_headPos"},
        ["_KW_TEXT_ID"] = {varName = "_id"},
        ["_KW_TEXT_IP"] = {varName = "_ip"},
        ["_KW_TEXT_GPS"] = {varName = "_adress"},
        ["_KW_BTN_GPS"] = {varName = "_btnGps", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onGpsBtnClick"},
        ["_KW_PANAEL_USER_INFO"] = {varName = "_userInfo"},
        ["_KW_PANAEL_BG"] = {varName = "_userBg", onTouchEnded = "onBtnClose"},
        ["_KW_PROP_ITEM_"] = {varName = "_propItem", beginIndex = 1, endIndex = 2},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_TEXT_GOLD"] = {varName = "_goldText"},
        ["_KW_BTN_KICK"] = {varName = "_btnKick", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnKick"},
        ["_KW_TEXT_VIP"] = {varName = "_vipText"},
        ["_KW_BTN_BUY_VIP"] = {varName = "_btnBuyVip", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnBuyVip"},
        ["_KW_BLOCK"] = {varName = "_panelBlock"},
        ["_KW_CHECKBOX_VOICE"] = {varName = "_checkBoxVoice", type = XH.UI_TYPE.CHECKBOX, onSelect = "onTouchEventCheckVoice"},
        ["_KW_CHECKBOX_CHAT"] = {varName = "_checkBoxChat", type = XH.UI_TYPE.CHECKBOX, onSelect = "onTouchEventCheckChat"},
        ["_KW_CHECKBOX_EMOJIS"] = {varName = "_checkBoxEmojis", type = XH.UI_TYPE.CHECKBOX, onSelect = "onTouchEventCheckEmojis"},
        ["_KW_VIP_INFO"] = {varName = "_panelVip"},
        ["_KW_VIP_INFO_SELF"] = {varName = "_panelVipSelf"},
        ["_KW_VIP_INFO_OTHER"] = {varName = "_panelVipOther"},
        ["_KW_BTN_FREE_USE"] = {varName = "_btnFreeUse", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnBuyVip"},
        ["_KW_BTN_WINRATE_TIP"] = {varName = "_KW_BTN_WINRATE_TIP", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnVipTipWinRate"},
        ["_KW_BTN_WINLOST_TIP"] = {varName = "_KW_BTN_WINLOST_TIP", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnVipTipWinScore"},
        ["_KW_TXT_BUY_VIP"] = {varName = "_txtVipBtn"},
        ["_KW_LIST_VIEW_SINGLE"] = {varName = "_listViewSingle"},
        ["_KW_LIST_VIEW_MULT"] = {varName = "_listViewMult"},
        ["_KW_CHECKBOX_MASS_SENDING"] = {varName = "_checkBoxMassSending", type = XH.UI_TYPE.CHECKBOX, onSelect = "onTouchEventMassSending"},
        ["_KW_ANI"] = {varName = "_ani"},
        ["_KW_PANEL_INFO"] = {varName = "_panelInfo"},
        ["_KW_PANEL_PROP"] = {varName = "_panelProp"},
        ["_KW_PANEL_SLIDE_ANI"] = {varName = "_slideAni"},
    }
end

function PlayerInfoView:getProxyEvents()
    return {
        {module = CF.game:getModule("Player"), eventKeyName = "EVENT_UPDATE_GPS_UI", callBack = "onUpdateGPSUI"},
        {module = CF.game:getModule("PlayerInfo"), eventKeyName = "EVENT_UPDATE_PROPANI", callBack = "updatePropInfoNew" },
        {module = CF.roomData, eventKeyName = "EVENT_PLAYERLIST_CHANGED", callBack = "updatePropInfoNew"},
        {module = XH.playerData, eventKeyName = "EVENT_PLAYER_DROP_CHANGED", callBack = "updatePlayerRich"},
        {module = XH.playerData, eventKeyName = "EVENT_SR_CHANGED", callBack = "updatePlayerRich"},
        {module = CF.roomData, eventKeyName = "EVENT_GAME_PLAYCOUNT_CHANGED", callBack = "onPlayCountChanged"}
    }
end

function PlayerInfoView:initGps()
    self._btnGps:setVisible(CF.roomData:isSupportGps())
end

function PlayerInfoView:createChildren()
    -- 自己
    if self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
    else
        XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080842)
    end

    self:onEventChanged()
    self:updateVipText()
    self:updatePropInfoNew()
    self:getVipModule():checkReq()
end

function PlayerInfoView:throwData()
    --个人头像点击
    if self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
        CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_04)
    else
        CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_01)
    end
end

function PlayerInfoView:onEventChanged()
    local playerData = self._playerData
    if playerData then
        local url = playerData:getAvatarUrl()
        self._nickName:setString(playerData:getNickName())
        self._id:setString("序号:" .. playerData:getNumberID())
        self._ip:setString("网络地址:" .. playerData:getIPName())
        self._goldText:setString("金币:" .. playerData:getPlayTypeScore())
        self:updateImg(url)

        self:updateGPS()
        self:updateHeadFrame()
    end
end

function PlayerInfoView:updateGPS()
    if not self._adress then
        return
    end
    local gpsInfo = CF.roomData:getGpsInfoDataBySeat(self._seatId)
    local adressStr = ""
    if gpsInfo then
        adressStr = gpsInfo["address"] or ""
    end
    self._adress:setString(adressStr)
    self._adress:setVisible(true)
end

function PlayerInfoView:updateImg(url)
    if url == "" then
        url = "http://thirdwx.qlogo.cn/mmopen/vi_32/RZWHFDljz1SW2Azl6kZyxic4ziaibicnUPo8dB3YiaGbhpyx3Tq34Vemk6KqexyJQJtAphjc9TELicPuRryc0UQ4DPmw/132"
    end

    if not self._headImg then
        local size = self._headPos:getContentSize()
        self._headImg = CF.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):addTo(self._headPos)
    end
    self._headImg:setUrl(url)
end

function PlayerInfoView:onGpsBtnClick(send, eventType)
    local func = function()
        if device.platform == "ios" then
            CF.sdkManager:xhCallOCFunc("XH_Extern", "GolinkQx", "{}")
        elseif device.platform == "android" then
            CF.sdkManager:callFunction("jump_permission_system")
        end
    end
    local showTipFunc = function()
        if self._seatId ~= CF.roomData:getSelfSeat() then
            CF.TipTool.showTip(
                {
                    type = CF.TIP_LAYER_TYPE.OK
                },
                "对方已经关闭了位置权限，请提示他开启"
            )
            return
        end
        if not XH.sdkManager:guideOpenGpsServer() then
            CF.TipTool.showTip(
                {
                    type = CF.TIP_LAYER_TYPE.OK,
                    funcOK = func
                },
                "您已经关闭了位置权限,需要您在系统设置中重新开启"
            )
        end
    end
    local gpsInfo = CF.roomData:getGpsInfoDataBySeat(self._seatId)
    if not gpsInfo or not gpsInfo["latitude"] or not gpsInfo["longitude"] then
        showTipFunc()
        return
    end
    if tonumber(gpsInfo["latitude"]) == -1 or tonumber(gpsInfo["longitude"]) == -1 then
        showTipFunc()
        return
    end
    CF.gameRequire("Modules.Gps.View").new():showSelf()
    self:removePlayerInfo()
end

function PlayerInfoView:onUpdateGPSUI(event)
    self:updateGPS()
end

function PlayerInfoView:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, CF.ZORDER.WINDOW)

    if self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
        CF.game:getModule("Guide"):reqPropFreeTimes(-1, true)
    end
end

function PlayerInfoView:onBtnClose(send, eventType)
    self:removePlayerInfo()
end

function PlayerInfoView:JudgeGoldRoomUI()
    local isGold = CF.roomData:isGoldRoom()
    self._btnGps:setVisible(not isGold)
    self._ip:setVisible(not isGold)
    self._adress:setVisible(not isGold)
    self._goldText:setVisible(false)
    self._panelVip:setVisible(not isGold)
    -- self._kwImg1:setVisible(false)
    -- self._kwImg2:setVisible(not isGold)
    self._panelBlock:setPositionX(isGold and 890 or 490)
    self._playerInfo:setPositionX(isGold and 900 or 500)
    self._slideAni:setPositionX(isGold and 1200 or 860)
    self._panelInfo:setContentSize(isGold and cc.size(1700, 750) or cc.size(1230, 750))
    self._panelProp:setContentSize(isGold and cc.size(1660, 400) or cc.size(1230, 400))
    self._scrollView:setContentSize(isGold and cc.size(1660, 400) or cc.size(1230, 400))
end

function PlayerInfoView:updatePlayerRich()
    if self._playerInfoDiamond then
        self._playerInfoDiamond:setString(XH.playerData:getDiamnd())
    end
    if self._playerInfoRoomCard then
        self._playerInfoRoomCard:setString(XH.playerData:getRemodelRoomCard())
    end
end

function PlayerInfoView:getPropAniList()
    local aniList
    local configer = CF.gameRequire("Modules.PlayerInfo.PropAniConfiger").new()
    if CF.roomData:isGoldRoom() then
        aniList = configer:getAniInfoByLobbyID("Gold")
    else
        aniList = configer:getAniInfoByLobbyID(CF.areaData:getLobbyID())
    end

    for i = #aniList, 1, -1 do
        if (tonumber(aniList[i].IsSelf) or 1) < 1 then
            table.remove(aniList, i)
        end
    end
    local aniListEmoji = CF.game:getModule("PlayerInfo"):getEmojiPropsConfig()
    local EmojiList = { single = {}, mult = {} }
    for i = 1, #aniList do
        for key, value in pairs(aniListEmoji) do
            for j = 1, #(value) do
                local info = value[j]
                if aniList[i].Propid == info.propID then
                    local aniListinfo = clone(aniList[i])
                    table.merge(aniListinfo, info)
                    EmojiList[key] = EmojiList[key] or {}
                    table.insert(EmojiList[key], aniListinfo)
                end
            end
        end
    end

    return EmojiList
end

function PlayerInfoView:updatePropInfoNew()
    if CF.roomData:judgeSupportThrowProp() then
        local listViews = {single = self._listViewSingle, mult = self._listViewMult}
        local playerCount = CF.roomData:getCurPlayerCount() - 1 -- 排除自己
        local isMass = self._checkBoxMassSending:isSelected() -- 是否群发
        local aniLists = self:getPropAniList()
        for key, aniList in pairs(aniLists) do
            local innerContentWidth = 0
            -- 加载道具信息
            for i = 1, #aniList do
                local needPropCntOri = aniList[i].propCnt -- 需要的道具数量
                local isMultSend = needPropCntOri and needPropCntOri > 1 -- 是否多连发
                local isVipProp = aniList[i].vipProp
                local cloneNode = listViews[key]:getChildByName("KW_PROP_" .. aniList[i].Index)
                if not cloneNode then
                    if aniList[i].Big then
                        cloneNode = self["_propItem" .. 2]:clone()
                    else
                        cloneNode = self["_propItem" .. 1]:clone()
                    end
                    cloneNode:setName("KW_PROP_" .. aniList[i].Index)
                    local imgFrame = CF.UITool.seekNodeByName(cloneNode, "_KW_IMG_FRAME")
                    local imgCostPropBG = CF.UITool.seekNodeByName(cloneNode, "_KW_IMG_COST_PROP")
                    if imgFrame and imgCostPropBG then
                        local contentSize = cc.size(277, 179)
                        if aniList[i].Big then
                            local imgFramName = isMultSend and "PlayerInfoNew_Img_h.png" or "PlayerInfoNew_Img_zi.png"
                            local imgCostBGName = isMultSend and "PlayerInfoNew_Img_h_gm.png" or "PlayerInfoNew_Img_lan_gm.png"
                            imgFrame:loadTexture(imgFramName, ccui.TextureResType.plistType)
                            imgCostPropBG:loadTexture(imgCostBGName, ccui.TextureResType.plistType)
                        else
                            contentSize = cc.size(179, 179)
                            imgFrame:loadTexture("PlayerInfoNew_Img_lan.png", ccui.TextureResType.plistType)
                        end
                        innerContentWidth = innerContentWidth + contentSize.width
                    end
                    listViews[key]:addChild(cloneNode)
                end

                -- ui
                local iconTextPanel = CF.UITool.seekNodeByName(cloneNode, "_KW_ICON_TEXT_PANEL")
                if iconTextPanel then
                    iconTextPanel:setVisible(false)
                end
                local propImg = CF.UITool.seekNodeByName(cloneNode, "_KW_IMG_PROP")
                if propImg then
                    if aniList[i].AniPicName and aniList[i].AniPicName ~= "" then
                        if isMass and aniList[i].AniPicNameMass then
                            propImg:loadTexture(aniList[i].AniPicNameMass, ccui.TextureResType.plistType)
                        elseif isMultSend and aniList[i].AniPicName10 then
                            propImg:loadTexture(aniList[i].AniPicName10, ccui.TextureResType.plistType)
                        else
                            propImg:loadTexture(aniList[i].AniPicName, ccui.TextureResType.plistType)
                        end
                        propImg:ignoreContentAdaptWithSize(true)
                    else
                        propImg:setVisible(false)
                    end
                end
                local propImg2 = CF.UITool.seekNodeByName(cloneNode, "_KW_IMG_PROP2")
                if propImg2 then
                    if aniList[i].AniPicNameText and aniList[i].AniPicNameText ~= "" then
                        propImg2:setVisible(true)
                        propImg2:loadTexture(aniList[i].AniPicNameText, ccui.TextureResType.plistType)
                        propImg2:ignoreContentAdaptWithSize(true)
                    else
                        propImg2:setVisible(false)
                    end
                end
                local propPanel = CF.UITool.seekNodeByName(cloneNode, "_KW_IMG_PROP_PANEL")
                if propPanel then
                    if aniList[i].AniShow then
                        propPanel:setVisible(true)
                        local aniInfo = isMultSend and aniList[i].AniShow10 or aniList[i].AniShow
                        local aniName = aniInfo.aniName
                        if isMultSend and aniInfo.aniNameMult then
                            aniName = aniInfo.aniNameMult
                        end
                        local aniShow = XH.SpineManager:playAni(propPanel, aniInfo.filePath, aniInfo.fileName, aniName, true)
                        if aniShow then
                            aniShow:setScale(aniInfo.scale)
                            aniShow:setPosition(aniInfo.pos)
                        end
                    else
                        propPanel:setVisible(false)
                    end
                end
                local textCost = CF.UITool.seekNodeByName(cloneNode, "_KW_TEXT_COST")
                -- 数据
                local costPropCount = "0房卡"
                local propid = aniList[i].Propid -- 互动道具的道具id
                local costPropid = propid -- 消耗的道具id
                local costInfo = {id = costPropid, cnt = 1, isVipProp = isVipProp}
                local propCnt = CF.game:getModule("PropUse"):getPropCnt(propid) -- 自己拥有的互动道具的数量
                local needDiamondPropCnt = 0 -- 需要的钻石数量
                local needRoomCardPropCnt = 0 -- 需要的房卡数量
                local needPropCnt = aniList[i].propCnt -- 需要的道具数量
                local priceConfig = aniList[i].priceConfig
                if priceConfig and #(priceConfig.roomCard) > 0 then
                    needRoomCardPropCnt = priceConfig.roomCard[1].propCnt
                    costPropCount = needRoomCardPropCnt .. "房卡"
                    costInfo.cnt = needRoomCardPropCnt
                end
                if priceConfig and #(priceConfig.diamond) > 0 then
                    needDiamondPropCnt = priceConfig.diamond[1].propCnt
                    costPropCount = needDiamondPropCnt .. "钻石"
                    costInfo.cnt = needDiamondPropCnt
                end
                if isMass and playerCount > 0 then
                    needPropCnt = needPropCnt * playerCount
                    needDiamondPropCnt = needDiamondPropCnt * playerCount
                    needRoomCardPropCnt = needRoomCardPropCnt * playerCount
                end

                local function updateLayout(iconTextPanel, imageData, textData)
                    self._spacing = 0
                    local image = ccui.Helper:seekNodeByName(iconTextPanel, "_KW_ICON")
                    if image and imageData.texture then
                        image:ignoreContentAdaptWithSize(true)
                        image:loadTexture(imageData.texture, ccui.TextureResType.plistType)
                        image:setVisible(true)
                    end
                    local text = ccui.Helper:seekNodeByName(iconTextPanel, "_KW_TEXT")
                    if text and textData.text then
                        text:setString(textData.text)
                        text:setVisible(true)
                    end
                    if image and text then
                        local imageWidth = image:getContentSize().width * image:getScale()
                        local imageHeight = image:getContentSize().height * image:getScale()
                        local labelWidth = text:getContentSize().width
                        local labelHeight = text:getContentSize().height

                        local totalWidth = imageWidth + self._spacing + labelWidth
                        local widgetSize = iconTextPanel:getContentSize()

                        image:setPositionX((widgetSize.width - totalWidth) / 2)
                        text:setPositionX(image:getPositionX() + imageWidth + self._spacing)

                        local centerY = widgetSize.height / 2
                        image:setPositionY(centerY)
                        text:setPositionY(centerY)
                    end
                end

                local function showImageTextProp(iconTextPanel, propCnt, configKey, propName, costInfo, costInfoTrack, costPropCount, texture)
                    textCost:setString(propCnt .. propName)

                    costInfo.id = priceConfig[configKey][1].propid
                    costInfo.cnt = propCnt

                    costInfoTrack.costPropid = priceConfig[configKey][1].propid
                    costInfoTrack.cnt = propCnt .. propName

                    costPropCount = propCnt .. propName
                    if iconTextPanel then
                        textCost:setVisible(false)
                        iconTextPanel:setVisible(true)
                        updateLayout(iconTextPanel, {texture = texture}, {text = propCnt})
                    end
                end

                local costInfoTrack = {propid = propid, costPropid = costPropid, cnt = costPropCount, isFree = nil, role = "非会员免费", state = isMass and "群发" or "非群发"}
                if XH.lobby:getModule("RecallNew") and XH.lobby:getModule("RecallNew"):nFreePropTimes() >= needPropCnt then
                    textCost:setVisible(true)
                    textCost:setString("免费:" .. math.floor(XH.lobby:getModule("RecallNew"):nFreePropTimes() / aniList[i].propCnt))
                    costInfoTrack.isFree = true
                elseif CF.getLobbyModule("Sxvip"):getPowerExit(SxVipConfig.SXVIP_POWER.FREE_PROPS) and not CF.getLobbyModule("Sxvip"):isExpire() and isVipProp then
                    -- 会员
                    textCost:setVisible(true)
                    textCost:setString("会员免费")
                    costInfoTrack.role = "会员免费"
                    costInfoTrack.isFree = true
                elseif CF.game:getModule("PlayerInfo"):getEmojiPropsFreeConfig(propid) and key == "single" and needPropCnt <= 1 then
                    -- 免费
                    textCost:setVisible(true)
                    textCost:setString("免 费")
                    costInfoTrack.isFree = true
                elseif propCnt >= needPropCnt then
                    -- 库存
                    textCost:setVisible(true)
                    textCost:setString("剩余:" .. propCnt)
                    if isMultSend then
                        textCost:setString("剩余:" .. math.floor(propCnt / aniList[i].propCnt))
                    end
                    costInfo.id = propid
                    costInfo.cnt = needPropCnt
                    cloneNode.useStack = true
                elseif #priceConfig.diamond > 0 and needDiamondPropCnt > 0 and XH.playerData:getDiamnd() >= needDiamondPropCnt then
                    -- 钻石
                    showImageTextProp(iconTextPanel, needDiamondPropCnt, "diamond", "钻石", costInfo, costInfoTrack, costPropCount, "PlayerInfoNew_icon_diamond.png")
                elseif #priceConfig.roomCard > 0 and needRoomCardPropCnt >= 0 and XH.playerData:getRemodelRoomCard() >= needRoomCardPropCnt then
                    -- 房卡
                    showImageTextProp(iconTextPanel, needRoomCardPropCnt, "roomCard", "房卡", costInfo, costInfoTrack, costPropCount, "PlayerInfoNew_icon_card.png")
                else
                    -- 保底
                    if #priceConfig.diamond > 0 then
                        showImageTextProp(iconTextPanel, needDiamondPropCnt, "diamond", "钻石", costInfo, costInfoTrack, costPropCount, "PlayerInfoNew_icon_diamond.png")
                    else
                        showImageTextProp(iconTextPanel, needRoomCardPropCnt, "roomCard", "房卡", costInfo, costInfoTrack, costPropCount, "PlayerInfoNew_icon_card.png")
                    end
                end

                -- 显示ui几连
                if needPropCntOri and needPropCntOri == 10 then
                    CF.UITool.setVisible(cloneNode, "_KW_TEXT_COMB_10", true)
                else
                    CF.UITool.setVisible(cloneNode, "_KW_TEXT_COMB_10", false)
                end

                local aniBack = CF.UITool.seekNodeByName(cloneNode, "_KW_ANI_BACK")
                if aniBack and aniList[i].AniBack then
                    local aniBackInfo = aniList[i].AniBack
                    XH.SpineManager:playAni(aniBack, aniBackInfo.filePath, aniBackInfo.fileName, aniBackInfo.aniName, true)
                end
                local vipIcon = CF.UITool.seekNodeByName(cloneNode, "_KW_VIP_PROP_ICON")
                if vipIcon then
                    vipIcon:setVisible(aniList[i].vipProp)
                end

                cloneNode:addTouchEventListener(
                    function(send, eventType)
                        if eventType ~= ccui.TouchEventType.ended then
                            return
                        end
                        local propIndex = CF.StringTool.getNumberSuffixByString(send:getName())
                        local extInfo = {
                            string.format("throwprop=%d", 1), -- 必须是第一个
                            string.format("propCnt=%d", needPropCntOri or 0),
                            string.format("inst=%d", propid or 0),
                            string.format("isVipProp=%d", isVipProp and 1 or 0),
                            string.format("taskname=emoji_use"),
                            string.format("gameid=%d", CF.roomData:getGameID()),
                            string.format("notbuycardid=0")
                        }
                        if isMass then
                            local playerSeat = {}
                            local players = CF.roomData:getPlayerDatas()
                            for _, player in pairs(players) do
                                local seat = player:getSeat()
                                if seat ~= CF.roomData:getSelfSeat() then
                                    table.insert(playerSeat, player:getSeat())
                                end
                            end
                            table.insert(extInfo, string.format("isMassSend=%s", table.concat(playerSeat, ",")))
                            if self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and #playerSeat == 0 then
                                CF.TipTool.showToast("当前房间没有牌友，无法使用互动道具")
                                return
                            end
                        end
                        self:onTouchEventPropNew(propIndex, propid, costInfo, costInfoTrack, table.concat(extInfo, ";"), send.useStack)
                    end
                )
            end
            if not self._firstSetInnerContainer then
                self._scrollView:setInnerContainerSize(cc.size(innerContentWidth, 400))
                self._firstSetInnerContainer = true
            end
        end
    end
end

function PlayerInfoView:onTouchEventPropNew(propIndex, useToPropID, costInfo, costInfoTrack, extInfo, useStack)
    if not costInfo or not costInfo.id or not costInfo.cnt then
        return
    end
    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080843, {costInfoTrack = costInfoTrack})

    local sucCall = function()
        XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080844, {costInfoTrack = costInfoTrack})
    end

    local realCostPropCnt = tonumber(string.match(extInfo, "propCnt=(%d+);")) or 1

    local recallCalcCnt = realCostPropCnt
    local backTable = CF.StringTool.getTableByString(extInfo, ";", "=")
    local isMass = backTable["isMassSend"]
    if isMass then
        local realSendPlayers = string.split(isMass, ",")
        recallCalcCnt = #realSendPlayers * recallCalcCnt
    end
    if XH.lobby:getModule("RecallNew") and XH.lobby:getModule("RecallNew"):nFreePropTimes() >= recallCalcCnt then
        CF.game:getModule("PropUse"):dealPropVipFree(useToPropID, 0, self._seatId, propIndex, "reback='1';" .. extInfo)
        if sucCall then
            sucCall()
        end
        self:removePlayerInfo()
        return
    end
    -- 会员道具使用
    if costInfo.isVipProp and CF.getLobbyModule("Sxvip"):getPowerExit(SxVipConfig.SXVIP_POWER.FREE_PROPS) and not CF.getLobbyModule("Sxvip"):isExpire() then
        CF.game:getModule("PropUse"):dealPropVipFree(useToPropID, 0, self._seatId, propIndex, extInfo)
        if sucCall then
            sucCall()
        end
        self:removePlayerInfo()
        return
    end

    local ShopConfig = require("lobby.Modules.Shop.Config")
    if costInfo.id == XH.areaData:getPropDiamndID() then
        local costPropCnt = costInfo.cnt
        if XH.playerData:getDiamnd() < costPropCnt then
            local param = {}
            param.propCount = costPropCnt
            param.propType = ShopConfig.SpecialTag.DIAMOND
            param.isVipProp = costInfo.isVipProp
            XH.viewManager:openView("VipEmojiPropChargeLayer", nil, param)
            self:removePlayerInfo()
            return
        end
    elseif costInfo.id == XH.areaData:getPropRoomCardID() then
        -- 道具足够, 使用时, 转换为小房卡
        local pid, pcnt = XH.areaData:tranformRoomCard(costInfo.id, costInfo.cnt)
        costInfo.id = pid
        costInfo.cnt = pcnt
    end

    local isSuccess = false
    if useStack then -- 有库存，走50接口
        -- isSuccess = CF.game:getModule("PropUse50"):dealProp2(useToPropID, costInfo, self._seatId, propIndex, sucCall, extInfo)
        if CF.roomData:is50() then
            isSuccess = CF.game:getModule("PropUse50"):dealPropOld(costInfo.id, costInfo.cnt, self._seatId, propIndex, function() 
                XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080844, {costInfo = costInfo})
            end, extInfo)
        else
            isSuccess = CF.game:getModule("PropUse"):dealPropOld(costInfo.id, costInfo.cnt, self._seatId, propIndex, function() 
                XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080844, {costInfo = costInfo})
            end, extInfo)
        end
    elseif CF.roomData:is50() or CF.roomData:getGameID() == 42038 or self:isOld33Game() then -- 针对千变双扣特判走50接口使用道具, 老33游戏
        isSuccess = CF.game:getModule("PropUse50"):dealProp2(useToPropID, costInfo, self._seatId, propIndex, sucCall, extInfo)
    else
        -- 免费要走原先的逻辑，这边先不要了，调用 dealPropNew
        isSuccess = CF.game:getModule("PropUse"):dealProp2(useToPropID, costInfo, self._seatId, propIndex, sucCall, extInfo)
    end
    if isSuccess then
        self:removePlayerInfo()
    end
end

function PlayerInfoView:isOld33Game()
    local gameIDTable = {30116,30275,30179,30450,30451,30401,30276,30379,30277,30124}
    local gameID = CF.roomData:getGameID()
    if table.has(gameIDTable, gameID) then
        return true
    end
    return false
end

function PlayerInfoView:removePlayerInfo()
    self:close()
end

function PlayerInfoView:updateHeadFrame()
    local headFrame = self._playerData:getHeadFrameData() or {}
    local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
    GameBagUILogic.showHeadFrame(self._headPos, headFrame.frame_url, cc.size(0, 5), cc.size(45, 45), headFrame.propid)
end

function PlayerInfoView:onBtnKick(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local tipLayer = CF.TipTool.showPopLayer("TipLayer")
    tipLayer:setText("是否将【" .. CF.StringTool.cutStringByLength(self._playerData:getNickName()) .. "】玩家请出房间")
    tipLayer:setButtonMoreEvent(
        tipLayer.ENUM_BUTTON_TYPE.OK,
        function()
            if CF.msgManager.sendReqKickUser then
                CF.msgManager:sendReqKickUser(self._playerData:getNumberID(), CF.areaData:getAreaID())
                self:removePlayerInfo()
            end
        end
    )
end

function PlayerInfoView:initKickUser()
    local playCount = CF.roomData:getPlayCount()
    if playCount > 0 then
        self._btnKick:setVisible(false)
    end
    if CF.roomData:getSelfSeat() ~= CF.roomData:getHostSeat() then
        self._btnKick:setVisible(false)
    end
    if self._seatId == CF.roomData:getHostSeat() then
        self._btnKick:setVisible(false)
    end
    if CF.roomData:getRoomMode2() ~= CF.ROOM_TYPE.BOX_ROOM then
        self._btnKick:setVisible(false)
    end
end

function PlayerInfoView:onPlayCountChanged(event)
    local playCount = CF.roomData:getPlayCount()
    if playCount > 0 then
        self._btnKick:setVisible(false)
    end
end

function PlayerInfoView:getVipModule()
    return CF.getLobbyModule("Sxvip")
end

function PlayerInfoView:updateVipText()
    -- 不支持会员免费使用道具的地区
    if not CF.getLobbyModule("Sxvip"):getPowerExit(SxVipConfig.SXVIP_POWER.FREE_PROPS) then
        self._panelVip:setVisible(false)
        self._btnFreeUse:setVisible(false)
        self._vipText:setVisible(false)
        return
    end
    local time = XH.playerData:getSxvipRemainder()
    local msg = ""
    local isExpire = CF.getLobbyModule("Sxvip"):isExpire()
    local isSelf = self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM
    local infoPanel = isSelf and self._panelVipSelf or self._panelVipOther
    self._panelVip:setVisible(true)
    self._panelVip:addTouchEventListener(
        function(sender, eventType)
            if eventType ~= ccui.TouchEventType.ended then
                return
            end
            if CF.getLobbyModule("Sxvip"):isExpire() then
                XH.viewManager:openView("SxvipPrivilegeView", nil, SxVipConfig.ThrowData.source.friendDataInGame)
                XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090619)
                self:onBtnClose()
            end
        end
    )

    CF.UITool.setVisible(infoPanel, "KW_NORMAL", not isExpire)
    CF.UITool.setVisible(infoPanel, "KW_BLUR", isExpire)
    if isExpire then
        self._txtVipBtn:setString("开通查看")
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt2024032812, {item_id = CF.roomData:getGameID()})

        local aniPath = "animation/Lobby/Base/shoudianji/"
        local params = {path = aniPath, tex = "ShouDianJi.json", ske = "ShouDianJi.atlas", armatureName = "ShouDianJi", scale = 1}
        local spineNode = display.playDargonBonesSpine(params)
        if spineNode then
            spineNode:setPosition(0, 0)
            self._ani:addChild(spineNode)
        end
    else
        self._txtVipBtn:setString("会员续费")
        msg = string.format("到期时间 %s", os.date("%Y年%m月%d日 %H:%M", time))
    end
    self._btnFreeUse:setVisible(isExpire and not isSelf)
    self._btnFreeUse:setVisible(false)
    self._vipText:setString(msg)

    self._panelVipSelf:setVisible(isSelf)
    self._panelVipOther:setVisible(not isSelf)

    if self._playerData then
        local numid = self._playerData:getNumberID()
        local friendInfo = CF.game:getModule("PlayerInfo"):getFriendInfo(numid)
        if friendInfo then
            self:updateFriendInfoUI(infoPanel, friendInfo)
        else
            self:getVipModule():reqFriendInfo(
                numid,
                function(info)
                    local data = info and info.drawReoprt and info.drawReoprt[1]
                    CF.game:getModule("PlayerInfo"):setFriendInfo(numid, data)
                    if tolua.isnull(self) then
                        return
                    end
                    if data then
                        self:updateFriendInfoUI(infoPanel, data)
                    end
                end
            )
        end
    end
end

function PlayerInfoView:updateFriendInfoUI(infoPanel, data)
    local vipModule = self:getVipModule()
    CF.UITool.setText(infoPanel, "KW_TXT_JUSHU", data.totalCount)
    CF.UITool.setText(infoPanel, "KW_TXT_OFFLINE", vipModule:getOffLineDes(data.offlineCnt))
    CF.UITool.setText(infoPanel, "KW_TXT_DISMISS", vipModule:getDismissDes(data.dismissCnt))
    CF.UITool.setText(infoPanel, "KW_TXT_SCORE", vipModule:getFriendWinScore(data))
    CF.UITool.setText(infoPanel, "KW_TXT_WINRATE", vipModule:getFriendWinRateForMe(data))
    CF.UITool.setText(infoPanel, "KW_TXT_WINRATE_TOTAL", vipModule:getFriendWinRateTotal(data))
    local speed = data.playTotal > 0 and data.playTime / data.playTotal or 0
    local imgName = string.format("common_userinfo_%s.png", vipModule:getOutCardSpeedImg(speed))
    CF.UITool.loadTexture(infoPanel, "KW_IMG_SPEED", imgName, ccui.TextureResType.plistType)
end

function PlayerInfoView:onBtnVipTipWinRate(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    CF.TipTool.showToast(SxVipConfig.ToastMsg.friendInfoTotalWinRate)
end

function PlayerInfoView:onBtnVipTipWinScore(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    CF.TipTool.showToast(SxVipConfig.ToastMsg.friendInfoWinScore)
end

function PlayerInfoView:onBtnBuyVip(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt2024032813, {item_id = CF.roomData:getGameID()})
    local isBuyBtn = send == self._btnBuyVip
    XH.viewManager:openView("SxvipPrivilegeView", nil, isBuyBtn and SxVipConfig.ThrowData.source.friendDataInGame or SxVipConfig.ThrowData.source.usePropFreeInGame)
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(isBuyBtn and XH.NewThrowDataDefine.hy24090619 or XH.NewThrowDataDefine.hy24090620)
    self:onBtnClose()
end

function PlayerInfoView:showMembershipDialog()
    if XH.lobby:getModule("Sxvip"):isExpire() then
        local formatStr = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='44' color='%s'>%s</font>"
        local Text = string.format(formatStr, "#CD8551", "会员可以屏蔽对方发送的\n[语音][俏皮话][互动表情]\n让您免受打扰")
        local msgBoxView =
            XH.TipTool.showTip(
            {
                type = XH.TIP_LAYER_TYPE.OK_CANCEL,
                funcOK = function()
                    XH.viewManager:openView("SxvipPrivilegeView", nil, SxVipConfig.ThrowData.source.muteVoice)
                    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090633)
                end,
                richText = true
            },
            Text
        )
        msgBoxView:updateButtonOK2Image("Btn_game_vip_kthy.png")
        XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090632)
        return true
    end
    return false
end

function PlayerInfoView:onTouchEventCheckVoice(send, eventType)
    if self:showMembershipDialog() then
        self._checkBoxVoice:setSelected(CF.game:getModule("PlayerInfo"):getBlockedVoice(self._playerData:getNumberID()))
        XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090631, {page_item_id = "语音"})
        return
    end
    if self._playerData then
        CF.game:getModule("PlayerInfo"):setBlockedVoice(self._playerData:getNumberID(), eventType == ccui.CheckBoxEventType.selected)
    end
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090631, {page_item_id = "语音", item_id = (eventType == ccui.CheckBoxEventType.selected) and "选中" or "取消"})
end

function PlayerInfoView:onTouchEventCheckChat(send, eventType)
    if self:showMembershipDialog() then
        self._checkBoxChat:setSelected(CF.game:getModule("PlayerInfo"):getBlockedChat(self._playerData:getNumberID()))
        XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090631, {page_item_id = "俏皮话"})
        return
    end
    if self._playerData then
        CF.game:getModule("PlayerInfo"):setBlockedChat(self._playerData:getNumberID(), eventType == ccui.CheckBoxEventType.selected)
    end
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090631, {page_item_id = "俏皮话", item_id = (eventType == ccui.CheckBoxEventType.selected) and "选中" or "取消"})
end

function PlayerInfoView:onTouchEventCheckEmojis(send, eventType)
    if self:showMembershipDialog() then
        self._checkBoxEmojis:setSelected(CF.game:getModule("PlayerInfo"):getBlockedEmojis(self._playerData:getNumberID()))
        XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090631, {page_item_id = "丢道具"})
        return
    end
    if self._playerData then
        CF.game:getModule("PlayerInfo"):setBlockedEmojis(self._playerData:getNumberID(), eventType == ccui.CheckBoxEventType.selected)
    end
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090631, {page_item_id = "丢道具", item_id = (eventType == ccui.CheckBoxEventType.selected) and "选中" or "取消"})
end

function PlayerInfoView:onTouchEventMassSending()
    local isMass = self._checkBoxMassSending:isSelected()
    cc.UserDefault:getInstance():setBoolForKey("KW_MASS_SELECT", isMass)
    self:updatePropInfoNew()
end

function PlayerInfoView:updateSlideAni()
    self._isShowSlideAni = cc.UserDefault:getInstance():getBoolForKey("KW_SHOW_SLIDE_ANI", true)
    if not self._isShowSlideAni then
        return
    end
    self._scrollView:addEventListener(handler(self, self.scrollViewDidScroll))
    self._ani:setVisible(false)
    local aniPath = "animation/Lobby/Base/qgb_ty_xshd/"
    local params = {path = aniPath, tex = "qgb_ty_xshd.json", ske = "qgb_ty_xshd.atlas", armatureName = "animation", scale = 1, loop = true}
    local spineNode = display.playDargonBonesSpine(params)
    if spineNode then
        spineNode:setPosition(0, 0)
        self._slideAni:addChild(spineNode)
    end
end

function PlayerInfoView:scrollViewDidScroll(sender, eventType)
    if not self._isShowSlideAni then
        return false
    end
    if eventType == ccui.ScrollviewEventType.scrolling then
        self._isShowSlideAni = false
        self._ani:setVisible(true)
        self._slideAni:setVisible(false)
        cc.UserDefault:getInstance():setBoolForKey("KW_SHOW_SLIDE_ANI", false)
    end
end


return PlayerInfoView
