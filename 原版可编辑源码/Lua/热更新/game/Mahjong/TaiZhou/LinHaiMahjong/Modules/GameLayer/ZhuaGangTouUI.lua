local ZhuaGangTouUI = CF.gameClass("ZhuaGangTouUI", CF.ViewBase)

ZhuaGangTouUI.title = {
    [CF.GameDefine.ZGTType.ZHUA_GAN_TOU_DAN] = "tz_fanGangTou.png",
    [CF.GameDefine.ZGTType.ZHUA_GAN_TOU_HU_JIA_SIX] = "tz_zhuaGangTou.png",
    [CF.GameDefine.ZGTType.ZHUA_GAN_TOU_EVERY_JIA] = "tz_zhuaChong.png"
}

local mahWindImg = {
    [CF.GameDefine.MENG_FENG.KW_DONG_FENG] = "ma_icon_dong.png",
    [CF.GameDefine.MENG_FENG.KW_NAN_FENG] = "ma_icon_nan.png",
    [CF.GameDefine.MENG_FENG.KW_XI_FENG] = "ma_icon_xi.png",
    [CF.GameDefine.MENG_FENG.KW_BEI_FENG] = "ma_icon_bei.png",
}

-- local windImg = {
--     [CF.GameDefine.MENG_FENG.KW_DONG_FENG] = "ma_icon_dong.png",
--     [CF.GameDefine.MENG_FENG.KW_NAN_FENG] = "ma_icon_nan.png",
--     [CF.GameDefine.MENG_FENG.KW_XI_FENG] = "ma_icon_xi.png",
--     [CF.GameDefine.MENG_FENG.KW_BEI_FENG] = "ma_icon_bei.png",
-- }

local SCALE_ZHUA_CHONG = 0.8

function ZhuaGangTouUI:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/TaiZhou/ZhuaGangTouLayer.csb"
end

function ZhuaGangTouUI:getBindingInfo()
    return {
        ["_KW_PANEL_ZHUA_GANG_TOU"] = {varName="_panelZhuaGangTou"},
        ["_KW_PANAEL_TITLE"] = {varName="_panelTitle"},
        ["_KW_IMG_TITLE"] = {varName="_imgTitle"},
        ["_KW_ZHUA_GANG_TOU_LIST"] = {varName="_listZhuaGangTou"},
        ["_KW_PANEL_MAHS_ITEM"] = {varName="_panelMahsItem"},
        ["_KW_IMG_MAHS_BG"] = {varName="_imgMahsBg"},
        ["_KW_MAHS_LIST"] = {varName="_listMahs"},
        ["_KW_MAH_ITEM"] = {varName="_panelMahItem"},
    }
end

function ZhuaGangTouUI:ctor(param)
    param = param or {}
    ZhuaGangTouUI.super.ctor(self, param)
    --抓杠头类型
    self._zhuaGanTouType = param.mahType or 0
    --牌的id
    if self._zhuaGanTouType == CF.GameDefine.ZGTType.ZHUA_GAN_TOU_EVERY_JIA then
        self._mahs = param.everyMahList
    else
        self._mahs = param.singleMahList
    end
    self._huSeat = param.huSeat or {}
    self._disCardSeat = param.disCardSeat

    self._lightMahPanels = {} --闪光的mahItem
    self._mahPanelItems = {} --所有的列表的Item
    self._everyMahPanelItems = {} --每个都抓杠头的情况下的item
    self._zhuaGangTouCount = 0
    self:createChildren()
end

function ZhuaGangTouUI:createChildren()
    self:createMahLayer()
    --CF.SysTool.performWithDelayGlobal(function ()
    --    self:arrageMaMahPosition()
    --end, 0.1)
    CF.SysTool.performWithDelayGlobal(function ()
        self:showLightMah()
    end, 0.2)
    --CF.SysTool.performWithDelayGlobal(function ()
    --    self:leaveLayer()
    --end,3)
end

function ZhuaGangTouUI:getProxyEvents()
    return {
        {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_WINLOST_RESULT", callBack = "onWinlostResult"},
    }
end

function ZhuaGangTouUI:createMahLayer()
    if self._imgTitle then
        self._imgTitle:loadTexture(ZhuaGangTouUI.title[self._zhuaGanTouType], ccui.TextureResType.plistType)
    end
    if self._listZhuaGangTou and self._panelMahsItem then
        self._listZhuaGangTou:setItemModel(self._panelMahsItem)
        self._listZhuaGangTou:removeAllChildren()
    end
    if self._zhuaGanTouType == CF.GameDefine.ZGTType.ZHUA_GAN_TOU_DAN then --翻杠头
        self:addMahsItem(self._mahs)
    elseif self._zhuaGanTouType == CF.GameDefine.ZGTType.ZHUA_GAN_TOU_HU_JIA_SIX then  --抓杠头
        self:addMahsItem(self._mahs)
        self:showMahWindFlag()
    elseif self._zhuaGanTouType == CF.GameDefine.ZGTType.ZHUA_GAN_TOU_EVERY_JIA then  --抓冲
        local gameData = CF.game:getModule("GameLayer"):getGameData()
        local bankerSeat = gameData:getBankerSeat()
        for seat = bankerSeat, bankerSeat + CF.roomData:getChairs() - 1 do
            local itemIndex = (seat - bankerSeat) % CF.roomData:getChairs() + 1
            local mahIndex = seat % CF.roomData:getChairs() + 1
            self._everyMahPanelItems[itemIndex] = {}
            self:addMahsItem(self._mahs[mahIndex], itemIndex)
        end
        self:showHuFangFlag()
        self:showPlayerHeadUI()
    end

    --调整list大小
    local items = self._listZhuaGangTou:getItems()
    local itemSize = items[1]:getContentSize()
    local nLineCount = self._listZhuaGangTou:getChildrenCount()
    local listZhuaGangTouWidth = self._listZhuaGangTou:getContentSize().width
    local listZhuaGangTouHeight = itemSize.height * nLineCount
    self._listZhuaGangTou:setContentSize(listZhuaGangTouWidth, listZhuaGangTouHeight)
    self._listZhuaGangTou:setInnerContainerSize(cc.size(listZhuaGangTouWidth, listZhuaGangTouHeight))
    local panelZhuaGangTouHeiht = self._panelTitle:getContentSize().height + listZhuaGangTouHeight
    self._panelZhuaGangTou:setContentSize(listZhuaGangTouWidth, panelZhuaGangTouHeiht)
    self._listZhuaGangTou:setPositionY(listZhuaGangTouHeight / 2)
    self._panelTitle:setPositionY(listZhuaGangTouHeight)
    if self._zhuaGanTouType == CF.GameDefine.ZGTType.ZHUA_GAN_TOU_EVERY_JIA and nLineCount == CF.roomData:getMaxPlayer() then
        self._panelTitle:setPositionY(self._panelTitle:getPositionY() - 50)
    end
end

function ZhuaGangTouUI:getScale()
    if self._zhuaGanTouType == CF.GameDefine.ZGTType.ZHUA_GAN_TOU_EVERY_JIA then
        return SCALE_ZHUA_CHONG
    end
    return 1
end

--添加一行麻将
function ZhuaGangTouUI:addMahsItem(mahs, itemIndex)
    if not mahs or next(mahs) == nil then return end
    self._listZhuaGangTou:pushBackDefaultItem()
    local listItems = self._listZhuaGangTou:getItems()
    local panelMahsItem = listItems[#listItems]
    local list = panelMahsItem:getChildByName("KW_MAHS_LIST")
    if not list then return end
    list:setItemModel(self._panelMahItem)
    --local scale = self:getScale()
    local config = CF.settingData:getDefaultData(nil, true)
    local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")
    for i = 1, #mahs do
        list:pushBackDefaultItem()
        local items = list:getItems()
        local item = items[#items]
        local mahNode = UIMah.new(CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD, config)
        mahNode:setMahValue(mahs[i])
        mahNode:setScale(0.85)

        if itemIndex then
            table.insert(self._everyMahPanelItems[itemIndex], item)
        else
            table.insert(self._mahPanelItems, item)
        end
        local mahPanel = item:getChildByName("KW_PANEL_MAH")
        if mahPanel then
            mahPanel:addChild(mahNode)
            if self._zhuaGanTouType == CF.GameDefine.ZGTType.ZHUA_GAN_TOU_DAN then
                table.insert(self._lightMahPanels, mahPanel)
            end
        end
    end
    if self._zhuaGanTouType == CF.GameDefine.ZGTType.ZHUA_GAN_TOU_EVERY_JIA then
        --要显示头像，麻将子右移
        list:setPositionX(list:getPositionX() + 80)
        list:setPositionY(list:getPositionY() - 40)
        list:setItemsMargin(10)
        local panelItemSize = panelMahsItem:getContentSize()
        panelMahsItem:setContentSize(panelItemSize.width, 200)
    end
    local space = list:getItemsMargin()
    local itemWidth = self._panelMahItem:getContentSize().width
    local itemCount = list:getChildrenCount()
    local listWidth = (itemCount - 1) * space + itemWidth * itemCount
    list:setContentSize(listWidth, list:getContentSize().height)
    list:setInnerContainerSize(cc.size(listWidth, list:getContentSize().height))
    list:setClippingEnabled(false)
    if itemIndex and itemIndex ~= CF.roomData:getChairs() then
        local imgMahBg = panelMahsItem:getChildByName("KW_IMG_MAHS_BG")
        if imgMahBg then
            imgMahBg:loadTexture("tz_mahEveryBoxBg.png", ccui.TextureResType.plistType)
        end
    end
end

function ZhuaGangTouUI:showPlayerHeadUI()
    local listItems = self._listZhuaGangTou:getItems()
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local bankerSeat = gameData:getBankerSeat()
    for seat = bankerSeat, bankerSeat + CF.roomData:getChairs() - 1 do
        local playerSeat = seat % CF.roomData:getChairs()
        local index = (seat - bankerSeat) + 1
        local panelMahsItem = listItems[index]
        local headFrame = panelMahsItem:getChildByName("KW_IMG_HEAD_FRAME")
        self:updatePlayerHeadUI(playerSeat, headFrame)
    end
end

--显示麻将背景东南西北
function ZhuaGangTouUI:showMahWindFlag()
    if self._zhuaGanTouType ~= CF.GameDefine.ZGTType.ZHUA_GAN_TOU_HU_JIA_SIX then
        return
    end
    for index, mah in ipairs(self._mahs) do
        for seat, value in pairs(self._huSeat) do
            if value == true then
                local bHave, windSeat = self:judgeMahIsZGTBySeat(seat - 1, mah)
                if bHave and mahWindImg[windSeat] then
                    local imgMahWind = self._mahPanelItems[index]:getChildByName("KW_IMG_MAH_WIND")
                    if imgMahWind then
                        imgMahWind:loadTexture(mahWindImg[windSeat], ccui.TextureResType.plistType)
                        imgMahWind:setVisible(true)
                    end
                    local mahPanel = self._mahPanelItems[index]:getChildByName("KW_PANEL_MAH")
                    table.insert(self._lightMahPanels, mahPanel)
                    break
                end
            end
        end
    end
end

--显示麻将角标胡或放
function ZhuaGangTouUI:showHuFangFlag()
    if self._zhuaGanTouType ~= CF.GameDefine.ZGTType.ZHUA_GAN_TOU_EVERY_JIA then
        return
    end
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local bankerSeat = gameData:getBankerSeat()
    for seat = bankerSeat, bankerSeat + CF.roomData:getChairs() - 1 do
        local itemIndex = (seat - bankerSeat) % CF.roomData:getChairs() + 1
        local mahIndex = seat % CF.roomData:getChairs() + 1
        for index, mah in ipairs(self._mahs[mahIndex]) do
            local isMenfeng = false
            local strHuFang = ""
            for huSeat, value in pairs(self._huSeat) do
                if value == true then
                    isMenfeng = self:judgeMahIsZGTBySeat(huSeat - 1, mah)
                    if isMenfeng then
                        strHuFang = "tz_settle_icon_1.png"
                        break
                    end
                end
            end
            if isMenfeng == false and (self._disCardSeat >= 0 and self._disCardSeat < CF.roomData:getMaxPlayer()) then
                isMenfeng = self:judgeMahIsZGTBySeat(self._disCardSeat, mah)
                if isMenfeng then
                    strHuFang = "tz_fang.png"
                end
            end
            if strHuFang ~= "" then
                local imgHuFangFalg = self._everyMahPanelItems[itemIndex][index]:getChildByName("KW_IMG_HU_FANG_FLAG")
                if imgHuFangFalg then
                    imgHuFangFalg:loadTexture(strHuFang, ccui.TextureResType.plistType)
                    imgHuFangFalg:setVisible(true)
                    if strHuFang == "tz_fang.png" then
                        imgHuFangFalg:setContentSize(77, 80)
                    end
                    local mahPanel = self._everyMahPanelItems[itemIndex][index]:getChildByName("KW_PANEL_MAH")
                    local mahNode = mahPanel:getChildren()
                    if mahNode[1] then
                        imgHuFangFalg:removeFromParent()
                        mahNode[1]:addChild(imgHuFangFalg)
                        imgHuFangFalg:setPosition(20, 20)
                    end
                end
            end
        end
    end
end

--麻将光亮效果
function ZhuaGangTouUI:showLightMah()
    if self._zhuaGanTouType == CF.GameDefine.ZGTType.ZHUA_GAN_TOU_EVERY_JIA then
        return
    end
    for i = 1, #self._lightMahPanels do
        CF.UITool.playJsonAnimationByName(self._lightMahPanels[i],"maima_ani","res/animation/Mahjong/Base/maima_ani/maima_ani.ExportJson",1, "Animation1")
    end
end

function ZhuaGangTouUI:arrageMaMahPosition()
    for i = 1, #self._mahPanelItems do
        --local delayTimeBeforeAction = cc.DelayTime:create((i -1)*0.1)
        --local fadeIn = cc.FadeIn:create(0.1)
        --local seq = cc.Sequence:create(delayTimeBeforeAction,fadeIn)
        --self._mahPanelItems[i]:runAction(seq)
        self._mahPanelItems[i]:setOpacity(255)
    end
end

--是否抓杠头
function ZhuaGangTouUI:judgeMahIsZGTBySeat(seat, mah)
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    local windSeat = winLostData:windJudge(seat)
    local mahMenFeng = winLostData:getMenFengByMah(mah)
    if windSeat + 1 == mahMenFeng then
        return true, mahMenFeng
    end
    return false
end

--更新玩家头像UI
function ZhuaGangTouUI:updatePlayerHeadUI(seat, headNode)
    if not headNode then return end
    headNode:setVisible(true)
    local playerData = CF.roomData:getPlayerDataBySeatId(seat)
    if playerData then
        local txtNickName = headNode:getChildByName("KW_TEXT_NICKNAME")
        if txtNickName then
            txtNickName:setString(playerData:getNickName())
        end
        self:updateImg(headNode, playerData)
        self:updateWindFlag(seat, headNode)
    end
end

function ZhuaGangTouUI:updateImg(headNode, playerData)
    if not headNode or not playerData then return end
    local url = playerData:getAvatarUrl()
    if url == "" then
        url = CF.GameDefine.defaultHeadUrl
    end
    local size = headNode:getContentSize()
    local headImg = CF.RemoteImage.new()
    headImg:setTouchEnabled(true)
    headImg:setPosition(size.width/2, size.height/2 + 1)
    headImg:ignoreContentAdaptWithSize(false)
    headImg:setContentSize(size.width - 7, size.height - 7)
    headImg:addTo(headNode)
    headImg:setUrl(url)
end

--更新头像上东南西北标识
function ZhuaGangTouUI:updateWindFlag(seat, headNode)
    if not headNode then return end
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local bankerSeat = gameData:getBankerSeat()
    local playerCount = CF.roomData:getChairs()

    local fengSeat = 0 -- 东风
    if playerCount == 2 then
        if seat ~= bankerSeat then
            fengSeat = 2 --西风
        end
    else
        fengSeat = ((seat - bankerSeat) + 4 ) % 4
    end
    local imgWindFlag = headNode:getChildByName("KW_IMG_WIND")
    if imgWindFlag then
        imgWindFlag:loadTexture(string.format("settle_feng_%d.png", fengSeat), ccui.TextureResType.plistType)
    end
end

function ZhuaGangTouUI:onWinlostResult()
    self:removeSelf()
end

function ZhuaGangTouUI:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, 999)
    self:setName("ZhuaGangTouUI")
end

return ZhuaGangTouUI