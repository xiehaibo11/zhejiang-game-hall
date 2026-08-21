local ChooseRoom = class("ChooseRoom", XH.Bridge.ViewBase)
local LocalConfig = import("..Configs.LocalConfig")
local RemoteConfig = import("..Configs.RemoteConfig")
local ActionUtils = import("..Tool.ActionUtils")
local Utils = import("..Tool.Utils")
local MenuBar = import("..Views.MenuBar")
local UI_PATH = LocalConfig.IMG_PATH.CHOOSE_ROOM
local IMG_CFG = {
    bg = UI_PATH .. "Img_xc_%d.png",
    colorRibbon = UI_PATH .. "Img_cd_%d.png",
    bgDY = UI_PATH .. "Img_yinying%d.png",
    RS = UI_PATH .. "Img_xc_rs%d.png",
    font = UI_PATH .. "fnt/Img_xc_zi%d-export.fnt",
    color = {cc.c3b(0x6d, 0x8f, 0x6f), cc.c3b(0x4d, 0x9d, 0xbe), cc.c3b(0x89, 0x6f, 0x69), cc.c3b(0xa1, 0x7c, 0x41), cc.c3b(0xac, 0x6b, 0x5c)},
    crTxtOutLineColor = {
        cc.c3b(0x45, 0x8d, 0x40), cc.c3b(0x4b, 0x69, 0xa6), cc.c3b(0x58, 0x4b, 0xa6), cc.c3b(0xbd, 0x7f, 0x1e), cc.c3b(0xd0, 0x4c, 0x1d),
        cc.c3b(0x55, 0x56, 0x8d)
    }
}
local IMG_CR = {zs = LocalConfig.IMG_PATH.MAIN .. "Img_ZS.png", jb = LocalConfig.IMG_PATH.MAIN .. "Img_JB.png"}

function ChooseRoom:getCSBPath()
    return XH.Bridge:getCCSResPath("ChooseRoom.csb")
end

function ChooseRoom:getBindingInfo()
    return {
        ["_imgLeftBg"] = {varName = "_imgLeftBg"},
        ["_item"] = {varName = "_item"},
        ["_itemSmall"] = {varName = "_itemSmall"},
        ["_list"] = {varName = "_list"},
        ["_txtInColorRibbon"] = {varName = "_txtInColorRibbon"},
        ["_imgInColorRibbon"] = {varName = "_imgInColorRibbon"},
        ["_itemWanfa"] = {varName = "_itemWanfa"},
        ["_listWanfa"] = {varName = "_listWanfa"},
        ["_menuBarBottom"] = {varName = "_menuBarBottom"}
    }
end

function ChooseRoom:getProxyEvents()
    return {
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_ROOM_ONLINE_COUNT", callBack = "onRespGoldPlayerCount"},
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_SELECT_ROOM", callBack = "onEventSelectRoom"},
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_GOLD_GAME_CONF_UPDATED", callBack = "onGoldGameConfUpdated"},
        {module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_WIN_SIZE_CHANGE", callBack = "onWinSizeChange"},
        {module = XH.lobby:getModule("BattlePass.DarkShuangKou"), eventKeyName = "KW_EVENT_UPDATE_UI", callBack = "refreshBottomMenu"}
    }
end

function ChooseRoom:ctor(param)
    ChooseRoom.super.ctor(self, param)
    self._goldView = param.goldView
    self._btnQuickStart = param.quickBtn
    self._item:setVisible(false)
    self._itemSmall:setVisible(false)
    self._itemWanfa:setVisible(false)
    self._imgLeftBg:setVisible(false)
    self._list:setScrollBarEnabled(false)
    self._listWanfa:setScrollBarEnabled(false)
end

function ChooseRoom:onWinSizeChange()
    self:setContentSize(display.width, display.height)
    if self._rommConf then
        self:updateUI(self._rommConf)
    end
end

function ChooseRoom:onEnter()
    -- self:changeListSize(self._isMix)
end

function ChooseRoom:startShow(isPart, isQuick)
    if not isPart then
        ActionUtils:runTopFadeIn(self._imgLeftBg, true)
        ActionUtils:runTopFadeIn(self._listWanfa, true)
        self._goldView:startShow("top")
    end
    if not isQuick then
        for i, v in ipairs(self._list:getChildren()) do
            ActionUtils:runChooseRoomMoveFadeIn(v, i, true)
        end
    end
    -- 进入选场界面时请求服务配置，返回后通过 EVENT_GOLD_GAME_CONF_UPDATED 刷新
    if self._gameID then
        XH.Bridge:getModule("GoldNew"):reqGoldGameConf(self._gameID)
    end
end

function ChooseRoom:startHide()

end

function ChooseRoom:isFullScreen()
    return true
end

function ChooseRoom:onEventSelectRoom(event)
    for i, v in ipairs(self._items or {}) do
        local bShow = event.info.GameID == v.roomInfo.GameID and event.info.Level == v.roomInfo.Level
        if not v.chooseAni and bShow then
            v.chooseAni = Utils:addSpine(v:getChildByName("_aniSelect"), "ChooseRoom", "zzb_jbdt_tjxf", "animation")
        end
        if v.chooseAni then
            v.chooseAni:setVisible(bShow)
        end
    end
end

function ChooseRoom:getClockLevel()
    local currentTime = os.date("*t")
    local hour = currentTime.hour
    local level = 0
    if hour >= 0 and hour < 11 then
        level = 1
    elseif hour >= 11 and hour < 14 then
        level = 2
    elseif hour >= 14 and hour < 18 then
        level = 3
    elseif hour >= 18 and hour < 24 then
        level = 4
    end
    return level
end

function ChooseRoom:getDateDiff()
    local targetTime = os.time({year = 2025, month = 11, day = 4, hour = 0, min = 0, sec = 0})

    -- 获取今日0点的时间戳
    local today = os.date("*t")
    today.hour = 0
    today.min = 0
    today.sec = 0
    local todayTime = os.time(today)

    -- 计算差值并转为天数
    local diffSeconds = os.difftime(todayTime, targetTime)
    local daysDiff = math.floor(math.abs(diffSeconds / 86400))

    return daysDiff
end

function ChooseRoom:getPlayerCountStrategy1(level)
    local retPlayerCount = 0 -- 最终返回值
    local rule = {
        {min = 100, max = 300, addValue = 20, addCount = 30},
        {min = 100, max = 300, addValue = 20, addCount = 20},
        {min = 100, max = 200, addValue = 15, addCount = 20},
        {min = 100, max = 200, addValue = 8, addCount = 20},
        {min = 100, max = 200, addValue = 5, addCount = 20}
    }
    local info = rule[level]
    if info then
        local randMinMax = math.random(info.min, info.max)
        local addDayValue = info.addValue * math.min(info.addCount, self:getDateDiff())
        local rand10 = math.random(0, 10)
        retPlayerCount = retPlayerCount + randMinMax + addDayValue + rand10
    end
    return retPlayerCount
end

function ChooseRoom:getPlayerCountStrategy2(baseCount, level)
    local retPlayerCount = baseCount -- 最终返回值
    local rule = {
        {addValue = 30, addCount = 50},
        {addValue = 25, addCount = 40},
        {addValue = 15, addCount = 50},
        {addValue = 15, addCount = 30},
        {addValue = 15, addCount = 30}
    }
    local info = rule[level]
    if info then
        local addDayValue = info.addValue * math.min(info.addCount, self:getDateDiff())
        retPlayerCount = retPlayerCount + addDayValue
    end
    return retPlayerCount
end

-- 通过策略获取人数
function ChooseRoom:getPlayerCountByStrategy(strategyid, count, level)
    local retPlayerCount = 0
    -- 选择策略
    local tmpLevel = level
    if level and level > 0 then
        tmpLevel = level % 10
    end
    if strategyid == 1 then
        retPlayerCount = self:getPlayerCountStrategy1(tmpLevel)
    elseif strategyid == 2 then
        retPlayerCount = self:getPlayerCountStrategy2(count, tmpLevel)
    else
        return count
    end
    local clockRate = {0.7, 1.2, 1, 1.4}
    local clockLevel = self:getClockLevel()
    if clockLevel > 0 then
        retPlayerCount = math.floor(retPlayerCount * (clockRate[clockLevel] or 1))
    end
    return retPlayerCount
end

function ChooseRoom:onRespGoldPlayerCount(event)
    if not event.info or #event.info == 0 then
        return
    end
    for _, node in pairs(self._list:getChildren()) do
        if node.roomInfo then
            for i = 1, #event.info do
                local data = event.info[i]
                if data.game_id == self._gameID then
                    for j = 1, #data.session_online_list do
                        local onLineData = data.session_online_list[j]
                        if onLineData.session_id == node.roomInfo.Level then
                            local cnt = self:getPlayerCountByStrategy(2, onLineData.count, node.roomInfo.Level)
                            XH.UITool.setVisible(node, "_panelPlayerCount", true)
                            XH.UITool.setText(node, "_txtPlayerCount", cnt)
                            local UIType = node.roomInfo.Level % 10
                            UIType = UIType > 5 and 5 or UIType
                            XH.UITool.setTextColor(node, "_txtPlayerCount", IMG_CFG.color[UIType])
                        end
                    end
                end
            end
        end
    end
end

function ChooseRoom:getRichString(rich)
    if rich < 0 then
        return 1000
    end
    if rich < 10000 then
        return rich
    end
    if rich < 100000000 then
        return rich / 10000 .. "万"
    end
    return rich / 100000000 .. "亿"
end

function ChooseRoom:changeListSize(isMix)
    local pSize = self:getContentSize()
    local height = self._list:getContentSize().height
    local notchWidth = XH.UITool.getLiuHaiWidth()
    if isMix then
        local gap = 20
        self._list:setContentSize(pSize.width - notchWidth - self._itemWanfa:getContentSize().width - gap, height)
        self._list:setPositionX(self._itemWanfa:getContentSize().width + gap)
    else
        self._list:setContentSize(pSize.width - notchWidth, height)
        self._list:setPositionX(0)
    end
    -- self._listWanfa:setContentSize(self._listWanfa:getContentSize().width, pSize.height)
end

function ChooseRoom:updateUI(roomConf)
    -- self._gameIndex = gameIndex
    self._rommConf = roomConf
    local mixInfo = RemoteConfig:getGameMixInfo(roomConf)
    local isHaveMix = #mixInfo > 1
    self:changeListSize(isHaveMix)
    self._isMix = isHaveMix
    self._imgLeftBg:setVisible(isHaveMix)
    self._listWanfa:setVisible(isHaveMix)
    if isHaveMix then
        self._listWanfa:removeAllChildren()
        local notchWidth = XH.UITool.getLiuHaiWidth()
        for i, v in ipairs(mixInfo) do
            local item = self._itemWanfa:clone()
            item:setCascadeOpacityEnabled(true)
            self._listWanfa:pushBackCustomItem(item)
            item:setVisible(true)
            XH.UITool.setText(item, "_txtName", v.roomInfo.GameTitleWanfa or v.roomInfo.GameTitle)
            if notchWidth > 0 then
                local itemSize = item:getContentSize()
                XH.UITool.setContentSize(item, "_imgSelect", notchWidth + itemSize.width, itemSize.height)
            end

            XH.UIButton.create(item, XH.UIButton.CLICK_STYLE.NOSCALE, function()
                self:updateRoomList(i)
                self:updateWanFaList(i)
                self:startShow(true)
                self._btnQuickStart:updateByRoomConf(v)
                XH.Bridge:getModule("GoldNew"):dispatchUpdateChooseRoomConf(v)
            end)
        end
        self:updateWanFaList(1)
    end
    self._mixInfo = mixInfo
    self:updateRoomList(1)
    if self._menuBar then
        self._menuBar:setVisible(false)
    end
    self:runAction(cc.Sequence:create(cc.DelayTime:create(0.3), cc.CallFunc:create(function()
        self:updateBottomMenu(roomConf.roomInfo.GameID)
        if self._menuBar then
            XH.UITool.runLobbyAction(self._menuBar, {"", "commonFadeIn"})
        end
    end)))
    self:checkShowChooseRoomGuide()
end

function ChooseRoom:updateBottomMenu(gameID)
    local param = LocalConfig.MENU_BAR_CFG[LocalConfig.BTN_AREA_ID.CHOOSEROOM_BOTTOM_ACT]
    param.btnConfig = RemoteConfig:getConfigByAreaId(LocalConfig.BTN_AREA_ID.CHOOSEROOM_BOTTOM_ACT, gameID)
    -- print(json.encode(param.btnConfig))
    local ok = xpcall(function()
        if self._menuBar and self._menuBar.init then
            self._menuBar:init(param)
        else
            self._menuBar = MenuBar.create(self._menuBarBottom, param)
        end
        self._menuBar:setVisible(true)
    end, __G__TRACKBACK__)
end

function ChooseRoom:refreshBottomMenu()
    local gameID = self._gameID
    if gameID and gameID == 30579 then
        self:updateBottomMenu(gameID)
    end
end

function ChooseRoom:updateWanFaList(selectIdx)
    for i, v in ipairs(self._listWanfa:getChildren()) do
        XH.UITool.setVisible(v, "_imgSelect", i == selectIdx)
        XH.UITool.setTextColor(v, "_txtName", i == selectIdx and cc.c3b(0x9d, 0x46, 0) or cc.c3b(255, 255, 255))
        v:setTouchEnabled(i ~= selectIdx)
    end
end

function ChooseRoom:updateRoomList(selectIdx)
    cc.SpriteFrameCache:getInstance():addSpriteFrames(XH.Bridge:getImgResPath("ChooseRoom/_Plist.plist"))
    local roomConf = self._mixInfo[selectIdx]
    self._goldView:updateGameName(roomConf)
    local roomInfo = roomConf.roomInfo
    self._gameID = roomInfo.GameID
    self._roomConf = roomConf
    local reqData = {}

    local otherGameInfo = RemoteConfig:getOtherGameInfo(roomInfo.LeisureID) or {}
    local svSize = self._list:getContentSize()
    self._list:removeAllChildren()
    self._items = {}
    local roomCnt = #roomConf.roomLevelInfos
    local count = 0
    for _ in pairs(otherGameInfo) do
        count = count + 1
    end

    local realCount = count + roomCnt
    local itemWidth = self._item:getContentSize().width
    local gap = self._list:getItemsMargin()
    local bigNum = svSize.width - itemWidth * realCount - (realCount - 1) * gap
    if bigNum / 2 > gap then
        local widget = ccui.Widget:create()
        local width = bigNum / 2 - gap
        widget:setContentSize(width, 10)
        self._list:pushBackCustomItem(widget)
    end
    local isHaveTagCR = false
    for i, v in pairs(otherGameInfo) do
        if v.Tag and v.Tag.CR then
            isHaveTagCR = true
            break
        end
    end
    local tagCR = (roomConf.roomInfo.Tag and roomConf.roomInfo.Tag.CR) or {}
    local isShort = isHaveTagCR or (tagCR and #tagCR > 0)
    local itemMode = isShort and self._itemSmall or self._item

    for i = 1, roomCnt do
        local item = itemMode:clone()
        self._items[i] = item
        self._list:pushBackCustomItem(item)
        item:setVisible(true)

        local roomLevelInfo = roomConf.roomLevelInfos[i]
        local tempInfo = {}
        tempInfo.ConfID = roomInfo.LeisureID
        tempInfo.GameID = roomInfo.GameID
        tempInfo.Level = roomInfo.roomFlag[i] or 1
        local UIType = tempInfo.Level % 10
        UIType = UIType > 5 and 5 or UIType
        if type(roomInfo.SrsGroupId) == "table" then
            tempInfo.SrsGroupId = roomInfo.SrsGroupId[i]
        end

        local bg = XH.UITool.seekNodeByName(item, "_imgBg")
        local imgRS = XH.UITool.seekNodeByName(item, "_imgRS")
        bg.roomInfo = tempInfo
        -- bg:setTouchEnabled(true)
        -- bg:addTouchEventListener(handler(self, self.onJoinGoldRoomTouchEvent))
        XH.UIButton.create(item, XH.UIButton.CLICK_STYLE.NOSCALE, function()
            self:onJoinGoldRoomTouchEvent(bg)
        end)

        bg:setSwallowTouches(false)
        bg:loadTexture(string.format(IMG_CFG.bg, UIType), ccui.TextureResType.plistType)
        imgRS:loadTexture(string.format(IMG_CFG.RS, UIType), ccui.TextureResType.plistType)
        -- XH.UITool.loadTexture(item, "_imgBgDY", string.format(IMG_CFG.bgDY, UIType), ccui.TextureResType.plistType)

        if roomInfo.BaseScoreImage and roomInfo.BaseScoreImage ~= "" then
            XH.UITool.loadTexture(item, "_imgDifen", roomInfo.BaseScoreImage, ccui.TextureResType.plistType)
            XH.UITool.setTextColor(item, "_txtGoldLimit", IMG_CFG.color[UIType])
        end

        local roomDesc
        if roomLevelInfo.maxrich == -1 then
            roomDesc = self:getRichString(roomLevelInfo.minrich) .. "以上"
        else
            roomDesc = self:getRichString(roomLevelInfo.minrich) .. "-" .. self:getRichString(roomLevelInfo.maxrich)
        end

        XH.UITool.setText(item, "_txtGoldLimit", "" .. roomDesc)
        XH.UITool.setTextColor(item, "_txtGoldLimit", IMG_CFG.color[UIType])
        XH.UITool.setFntFile(item, "_fontBaseScore", string.format(IMG_CFG.font, UIType))
        item:getChildByName("_fontBaseScore"):setCascadeColorEnabled(true)
        if roomLevelInfo.dynamic_cost then
            XH.UITool.setText(item, "_fontBaseScore", roomLevelInfo.basescore .. '以上')
        else
            XH.UITool.setText(item, "_fontBaseScore", roomLevelInfo.basescore)
        end
        XH.UITool.setPositionX(item, "_fontBaseScore", item:getContentSize().width / 2)
        local tagInfo = roomInfo.Tag or {}
        local tagRT = tagInfo.RT or {}
        local tagLT = tagInfo.LT or {}
        local tagCR = tagInfo.CR or {}
        self:createItemTagUI(item, tagRT[i] or "", tagLT[i] or "", tagCR[i] or "")
        -- XH.UITool.setVisible(item, "KW_IMG_FLAG_7CS", roomLevelInfo.gameid == 30117 and roomLevelInfo.roomnameflag == 4)

        item.roomInfo = tempInfo or nil
        item:setVisible(true)

        if roomInfo.GoldMode == 50 then
            reqData[i] = {gameID = roomInfo.GameID, level = tempInfo.Level}
        else
            local cnt = self:getPlayerCountByStrategy(1, 0, tempInfo.Level)
            XH.UITool.setVisible(item, "_panelPlayerCount", true)
            XH.UITool.setText(item, "_txtPlayerCount", cnt)
            XH.UITool.setTextColor(item, "_txtPlayerCount", IMG_CFG.color[UIType])
        end
        -- 检测房间是否已经关闭
        XH.UITool.setVisible(item, "imgHide", XH.Bridge:getModule("Gold"):checkClose(roomLevelInfo))
    end
    self:createOtherGameItem(itemMode, otherGameInfo, isShort)

    -- self:runAction(cc.Sequence:create(cc.DelayTime:create(0.1), cc.CallFunc:create(function()
    for i, v in ipairs(self._items) do
        Utils:addSpine(v:getChildByName("_ani"), "ChooseRoom", "zzb_jbdt_xfsg", "animation")
        v.chooseAni = Utils:addSpine(v:getChildByName("_aniSelect"), "ChooseRoom", "zzb_jbdt_tjxf", "animation")
        v.chooseAni:setVisible(false)
    end
    -- end)))
    -- self:startShow()
    XH.Bridge:getModule("GoldNew"):reqRoomPlayerCount(reqData)
    XH.Bridge:throwData("xjb25022810", {game_id = XH.areaData:getAreaID() .. "_" .. roomInfo.GameID, oldsr = XH.playerData:getSR() or 0})
end

function ChooseRoom:onJoinGoldRoomTouchEvent(item)
    -- 进房之前先刷新入场卡数量
    XH.Bridge:getModule("BagSysNew"):reqDoubleCards(true, function()
        local levelInfo = item.roomInfo
        XH.Bridge:throwData("xjb25022811", {game_id = XH.areaData:getAreaID() .. "_" .. levelInfo.GameID, oldsr = XH.playerData:getSR() or 0},
                            {source = levelInfo.Level})
        local roominfo = XH.Bridge:getModule("GoldNew"):getGoldRoomInfoByLeisureID(levelInfo.ConfID)
        XH.Bridge:getModule("Gold"):reqJoinGoldRoom(levelInfo.ConfID, levelInfo.Level, levelInfo.SrsGroupId)
    end)
end

function ChooseRoom:createItemTagUI(item, tagRT, tagLT, tagCR)
    if tagRT and tagRT ~= "" then
        local tag = XH.UITool.seekNodeByName(item, "_imgTagRT")
        tag:setVisible(true)
        XH.UITool.setText(tag, "txt", tagRT)
    end
    if tagLT and tagLT ~= "" then
        local tag = XH.UITool.seekNodeByName(item, "_imgTagLT")
        local txt = XH.UITool.seekNodeByName(tag, "txt")
        tag:setVisible(true)
        XH.UITool.setText(tag, "txt", tagLT)
        tag:setContentSize(txt:getContentSize().width + 41, 63)
        txt:setPositionX(tag:getContentSize().width / 2)
    end
    if tagCR and #tagCR > 0 then
        local tag1 = XH.UITool.seekNodeByName(item, "_imgColorRibbon1")
        local tag2 = XH.UITool.seekNodeByName(item, "_imgColorRibbon2")
        local tags = {tag1, tag2}
        for j = 1, 2 do
            tags[j]:setVisible(tagCR[j] ~= nil)
            if tagCR[j] then
                local infos = string.split(tagCR[j], "#")
                local crType = tonumber(infos[1]) or 1
                tags[j]:loadTexture(string.format(IMG_CFG.colorRibbon, crType), ccui.TextureResType.plistType)
                local childen = {}

                for k = 2, #infos do
                    local inf = string.split(infos[k], "_")
                    local colorR = tonumber(string.sub(inf[1], 1, 2), 16) or 255
                    local colorG = tonumber(string.sub(inf[1], 3, 4), 16) or 255
                    local colorB = tonumber(string.sub(inf[1], 5, 6), 16) or 255
                    local content = inf[2]
                    if #inf == 1 then
                        colorR = 255
                        colorG = 255
                        colorB = 255
                        content = inf[1]
                    end
                    local node = nil
                    if IMG_CR[content] ~= nil then
                        node = self._imgInColorRibbon:clone()
                        node:loadTexture(IMG_CR[content], ccui.TextureResType.plistType)
                    else
                        node = self._txtInColorRibbon:clone()
                        node:setString(content)
                        node:enableOutline(IMG_CFG.crTxtOutLineColor[crType], 2)
                        node:setColor(cc.c3b(colorR, colorG, colorB))
                    end
                    node:setPositionY(42)
                    table.insert(childen, node)
                    tags[j]:addChild(node)
                end
                Utils:doLayoutHoriz(childen, tags[j]:getContentSize().width, 0)
            end
        end
    end
end

function ChooseRoom:createOtherGameItem(itemMode, otherGameInfo, isShort)
    local items = {}
    local UIType = 1
    for k, v in pairs(otherGameInfo) do
        local item = itemMode:clone()
        item:setVisible(true)
        self._list:pushBackCustomItem(item)
        local roomConf = XH.Bridge:getModule("GoldNew"):getGoldRoomInfoByLeisureID(tonumber(k))
        local roomInfo = roomConf.roomInfo
        local isOnlyOneLevel = #roomConf.roomLevelInfos == 1
        local roomLevelInfo = isOnlyOneLevel and roomConf.roomLevelInfos[1] or {}
        local bg = XH.UITool.seekNodeByName(item, "_imgBg")
        bg:setSwallowTouches(false)
        if v.icon and not isShort then
            bg:loadTexture(UI_PATH .. v.icon, ccui.TextureResType.plistType)
        elseif v.iconShort and isShort then
            bg:loadTexture(UI_PATH .. v.iconShort, ccui.TextureResType.plistType)
        else
            bg:loadTexture(string.format(IMG_CFG.bg, UIType), ccui.TextureResType.plistType)
        end
        local imgRS = XH.UITool.seekNodeByName(item, "_imgRS")
        imgRS:setVisible(false)
        -- XH.UITool.loadTexture(item, "_imgBgDY", string.format(IMG_CFG.bgDY, UIType), ccui.TextureResType.plistType)
        if isOnlyOneLevel then
            local roomDesc
            if roomLevelInfo.maxrich == -1 then
                roomDesc = self:getRichString(roomLevelInfo.minrich) .. "以上"
            else
                roomDesc = self:getRichString(roomLevelInfo.minrich) .. "-" .. self:getRichString(roomLevelInfo.maxrich)
            end
            XH.UITool.setText(item, "_txtGoldLimit", "" .. roomDesc)
            XH.UITool.setTextColor(item, "_txtGoldLimit", cc.c3b(161, 79, 65))
            XH.UITool.setFntFile(item, "_fontBaseScore", UI_PATH .. "fnt/Img_xc_bw-export.fnt")
            item:getChildByName("_fontBaseScore"):setCascadeColorEnabled(true)
            XH.UITool.setText(item, "_fontBaseScore", roomLevelInfo.basescore)
        end

        local tagRT = (v.Tag and v.Tag.RT) or ""
        local tagLT = (v.Tag and v.Tag.LT) or ""
        local tagCR = (v.Tag and v.Tag.CR) or ""
        self:createItemTagUI(item, tagRT, tagLT, tagCR)
        XH.UIButton.create(item, XH.UIButton.CLICK_STYLE.NOSCALE, function()
            XH.Bridge:getModule("Lobby"):reqJoinGoldRoom(roomInfo.LeisureID, roomInfo.roomFlag)
        end)
        Utils:addSpine(item:getChildByName("_ani"), "ChooseRoom", "zzb_jbdt_xfsg", "animation")
        table.insert(items, item)
    end
    return items
end

function ChooseRoom:checkShowChooseRoomGuide()
    local cfg = RemoteConfig:getConfigByName('rule')
    local lid = self._roomConf.roomInfo.LeisureID
    if cfg and cfg.chooseRoomGuide and lid and cfg.chooseRoomGuide[lid..""] then
        local guideCfg = cfg.chooseRoomGuide[lid..""]
        guideCfg.defaultUrl = guideCfg.defaultUrl or cfg.defaultUrl
        if XH.Bridge:getModule("GoldNew"):checkShowChooseRoomGuide(lid, guideCfg.times or 1) then
            local idx = Utils:findIdx(self._mixInfo,function(x) return x.roomInfo.LeisureID == guideCfg.toLID end)
            XH.Bridge.viewManager:openView("GoldHallChooseRoomGuideView", nil, {chooseRoom = self, guideData = guideCfg, goFunc = function() 
                if idx > 0 then
                    self:updateRoomList(idx)
                    self:updateWanFaList(idx)
                    self:startShow(true)
                    self._btnQuickStart:updateByRoomConf(self._mixInfo[idx])
                else
                    local conf = XH.Bridge:getModule("GoldNew"):getGoldRoomInfoByLeisureID(guideCfg.toLID)
                    XH.Bridge:getModule("GoldNew"):dispatchShowChooseRoom(conf)
                end
            end})
            XH.Bridge:getModule("GoldNew"):addChooseRoomGuideTimes(lid)
        end
    end
end

-- 服务配置 reqGoldGameConf 返回后刷新当前选场/页签的 UI（只刷新数据，不触发动画）
function ChooseRoom:onGoldGameConfUpdated(event)
    if not event or not event.gameid or event.gameid ~= self._gameID then
        return
    end
    if not self._roomConf or not self._roomConf.roomInfo then
        return
    end
    local roomConf = XH.Bridge:getModule("GoldNew"):getGoldRoomInfoByLeisureID(self._roomConf.roomInfo.LeisureID)
    if not roomConf or not roomConf.roomLevelInfos then
        return
    end
    for k, v in pairs(self._items) do
        local roomLevelInfo = roomConf.roomLevelInfos[k]
        if roomLevelInfo then
            local roomDesc
            if roomLevelInfo.maxrich == -1 then
                roomDesc = self:getRichString(roomLevelInfo.minrich) .. "以上"
            else
                roomDesc = self:getRichString(roomLevelInfo.minrich) .. "-" .. self:getRichString(roomLevelInfo.maxrich)
            end
            XH.UITool.setText(v, "_txtGoldLimit", "" .. roomDesc)
            if roomLevelInfo.dynamic_cost then
                XH.UITool.setText(v, "_fontBaseScore", roomLevelInfo.basescore .. '以上')
            else
                XH.UITool.setText(v, "_fontBaseScore", roomLevelInfo.basescore)
            end
            XH.UITool.setPositionX(v, "_fontBaseScore", v:getContentSize().width / 2)
        end
    end
end

return ChooseRoom
i