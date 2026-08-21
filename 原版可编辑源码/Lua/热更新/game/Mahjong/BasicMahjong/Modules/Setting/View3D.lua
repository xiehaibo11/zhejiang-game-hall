local SettingView3D = CF.gameClass("SettingView3D", CF.ViewBase)

local KW_SELECT_FLAG = "KW_IMG_FLAG"
local KW_SWITCH_OFF_PNG = "mah_btn_off.png"
local KW_SWITCH_NO_PNG = "mah_btn_no.png"
local KW_QUIT_BTN_TEXTUTRE = "mah_btn_quit.png"
local KW_SWITCH_OFF_PNG_3 = "set_mah_btn_off_4.png"             --女   (出牌语音)
local KW_SWITCH_NO_PNG_3 = "set_mah_btn_on_4.png"               --男

function SettingView3D:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/Setting3D.csb"
end

function SettingView3D:getBindingInfo()
    return {
        ["_KW_SCROLLVIEW_CONTENT"] = { varName = "_scrollViewContent" },
        ["_KW_PANEL_CONTENT_ROOT"] = { varName = "_panelContentRoot" },
        ["_KW_PANAEL_BG"] = { varName = "_settingBg" },
        ["_KW_PANAEL_SET_ROOT"] = { varName = "_settingRoot" },
        ["_KW_BTN_DISMISS"] = { varName = "_btnDismiss", onTouchEnded = "onDismiss" },
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", onTouchEnded = "onBtnClose" },
        ["_KW_TEXT_GAME_VER"] = { varName = "_gameVer" },
        ["_KW_TEXT_LOBBY_VER"] = { varName = "_lobbyVer" },

        ["_KW_TING"] = { varName = "_tingLogo"},

        ["_KW_IMG_YX_1"] = { varName = "_yxImage", onTouchEnded = "onTouched" },
        ["_KW_IMG_TX_2"] = { varName = "_txImage", onTouchEnded = "onTouched" },
        ["_KW_IMG_YY_3"] = { varName = "_yyImage", onTouchEnded = "onTouched" },
        ["_KW_IMG_FY_4"] = { varName = "_fyImage", onTouchEnded = "onTouched" },
        ["_KW_IMG_CP_5"] = { varName = "_cpImage", onTouchEnded = "onTouched" },
        ["_KW_IMG_GJ_6"] = { varName = "_gjImage", onTouchEnded = "onTouched" },
        ["_KW_IMG_TING_7"] = { varName = "_tingImage", onTouchEnded = "onTouched" },
        ["_KW_IMG_2D_8"] = { varName = "_to2DImage", onTouchEnded = "onTouched" },
        ["_KW_IMG_CPYY_9"] = { varName = "_cpyyImage",onTouchEnded = "onTouched"},

        ["_KW_IMG_CARD_BACK_1"] = { varName = "_cardBack_1", onTouchEnded = "onSelectMahBackStyle" },
        ["_KW_IMG_CARD_BACK_2"] = { varName = "_cardBack_2", onTouchEnded = "onSelectMahBackStyle" },
        ["_KW_IMG_CARD_BACK_6"] = { varName = "_cardBack_6", onTouchEnded = "onSelectMahBackStyle" },

        ["_KW_IMG_CARD_FACE_1"] = { varName = "_cardFace_1", onTouchEnded = "onSelectMahFaceStyle" },
        ["_KW_IMG_CARD_FACE_2"] = { varName = "_cardFace_2", onTouchEnded = "onSelectMahFaceStyle" },
        ["_KW_IMG_CARD_FACE_3"] = { varName = "_cardFace_3", onTouchEnded = "onSelectMahFaceStyle" },
        ["_KW_IMG_CARD_FACE_4"] = { varName = "_cardFace_4", onTouchEnded = "onSelectMahFaceStyle" },

        ["_KW_IMG_CARD_FACE_LIGHT_1"] = { varName = "_cardFaceLight_1", onTouchEnded = "onSelectMahLightStyle" },
        ["_KW_IMG_CARD_FACE_LIGHT_2"] = { varName = "_cardFaceLight_2", onTouchEnded = "onSelectMahLightStyle" },

        ["_KW_OUT_EFFECTS_1"] = { varName = "_out_effect_1", onTouchEnded = "onSelectEffectStyle" },
        ["_KW_OUT_EFFECTS_2"] = { varName = "_out_effect_2", onTouchEnded = "onSelectEffectStyle" },

        ["_KW_IMG_TABLE_BG_1"] = { varName = "_tableStyle_1", onTouchEnded = "onSelectMahTableStyle" },
        ["_KW_IMG_TABLE_BG_7"] = { varName = "_tableStyle_7", onTouchEnded = "onSelectMahTableStyle" },
        ["_KW_IMG_TABLE_BG_3"] = { varName = "_tableStyle_3", onTouchEnded = "onSelectMahTableStyle" },
        ["_KW_IMG_TABLE_BG_4"] = { varName = "_tableStyle_4", onTouchEnded = "onSelectMahTableStyle" },
        ["_KW_IMG_TABLE_BG_5"] = { varName = "_tableStyle_5", onTouchEnded = "onSelectMahTableStyle" },

        -- 200金币场没有换桌
        ["_KW_UI_BTNS_PANEL"] = { varName = "_btnsPanel" },
        ["_KW_BTN_CHANGE"] = { varName = "_btnChange", onTouchEnded = "onBtnChange" },
        ["_KW_BTN_BACK"] = { varName = "_btnBack", onTouchEnded = "onBtnBack" },
        ["_KW_BTN_BACK_NEW"] = { varName = "_btnBackNew", onTouchEnded = "onBtnBack" },

        ["_KW_PANEL_VISUAL_ANGLE"] = { varName = "_visualAnglePanel" },
        ["_KW_3D_VISUAL_ANGLE_1"] = { varName = "_btn3DVisualAngle_1", onTouchEnded = "onSelect3DVisualAngle" },
        ["_KW_3D_VISUAL_ANGLE_2"] = { varName = "_btn3DVisualAngle_2", onTouchEnded = "onSelect3DVisualAngle" },
        ["_KW_TRUST_BTN"] = { varName = "_trustBtn", type = CF.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onBtnTrust"},
    }
end

function SettingView3D:ctor(param)
    param = param or {}
    SettingView3D.super.ctor(self, param)

    self._tableStyleVarNames = { "_tableStyle_1", "_tableStyle_2", "_tableStyle_3", "_tableStyle_4", "_tableStyle_5", "_tableStyle_6", "_tableStyle_7" }
    -- self._tableStyleVarNames = { "_tableStyle_1", "_tableStyle_2"} --暂时只有一种选择
    self._faceStyleVarNames = { "_cardFace_1", "_cardFace_2", "_cardFace_3",  "_cardFace_4"}
    self._faceLightStyleVarNames = {"_cardFaceLight_1", "_cardFaceLight_2"}
    self._backStyleVarNames = { "_cardBack_1", "_cardBack_2", "_cardBack_3", "_cardBack_4", "_cardBack_5", "_cardBack_6" }
    self._switchNames = { "_yxImage", "_txImage", "_yyImage", "_fyImage", "_cpImage", "_gjImage", "_tingImage", "_to2DImage","_cpyyImage"}
    self._outCardStyleVarNames = { "_outCardCB_1", "_outCardCB_2" }
    self._effectStyleVarNames = { "_out_effect_1", "_out_effect_2" }
    self._3DVisualVarNames = { "_btn3DVisualAngle_1", "_btn3DVisualAngle_2"}

    if XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.TABLE) then
        local listTbl = CF.settingData:getConfigByKey("TABLE_STYLE")
        for _, index in ipairs(listTbl) do
            local propID, leftTime = CF.game:getModule("Setting"):getSkinBundlePropInfo("TABLE_STYLE", index)
            if propID ~= 0 then
                if CF.settingData:getMahTableStyle() ~= index then
                    CF.settingData:setMahTableStyle(index)
                end
                break
            end
        end
    end
    if XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.MAH) then
        local listTbl = CF.settingData:getConfigByKey("BACK_TYPE")
        for _, index in ipairs(listTbl) do
            local propID, leftTime = CF.game:getModule("Setting"):getSkinBundlePropInfo("BACK_TYPE", index)
            if propID ~= 0 then
                if CF.settingData:getMahBackStyle() ~= index then
                    CF.settingData:setMahBackStyle(index)
                end
                break
            end
        end
    end
    self:initUI()
    self:initEvents()
end

function SettingView3D:initEvents()
    self._settingBg:addTouchEventListener(handler(self, self.onBtnClose))
end

function SettingView3D:initUI()
    self:selectMahBackStyle(CF.settingData:getMahBackStyle())
    self:selectMahFaceStyle(CF.settingData:getMahFaceStyle())
    self:selectMahTableStyle(CF.settingData:getMahTableStyle())
    self:selectMahLightStyle(CF.settingData:getMahLightStyle())
    self:selectEffectStyle(CF.settingData:getOutEffectStyle())
    self:select3DVisualAngle(CF.settingData:get3DVisualAngle())

    local selectIndxe = CF.settingData:getMahOutCardStyle()
    for key,v in pairs(self._outCardStyleVarNames) do
        local chBox = self[v]
        if chBox then
            chBox:setSelected(key == selectIndxe)
        end
    end
    
    for k, _ in pairs(self._switchNames) do
        self:selectMahSwitchStyle(k, true)
    end

    self._btnDismiss:loadTexture(KW_QUIT_BTN_TEXTUTRE, ccui.TextureResType.plistType)

    if CF.configData:haveTing() then
        self._tingLogo:setVisible(true)
        self._tingImage:setVisible(true)
    end

    --金币场和包厢场不同退出方式
    self:updateBtnStatus()
    for index, v in pairs(self._tableStyleVarNames) do
        if self[v] then
            local propID, leftTime = CF.game:getModule("Setting"):getSkinBundlePropInfo("TABLE_STYLE", index)
            if propID > 0 then
                self:setDetailTagActiveTime("TABLE_STYLE", index, self[v])
            end
        end
    end
    for index, v in pairs(self._backStyleVarNames) do
        if self[v] then
            local propID, leftTime = CF.game:getModule("Setting"):getSkinBundlePropInfo("BACK_TYPE", index)
            if propID > 0 then
                self:setDetailTagActiveTime("BACK_TYPE", index, self[v])
            end
        end
    end

    local isGameStart = CF.roomData:getIsGameStart()
    local canTrsut =  CF.game:getModule("RoomInfo"):getCanSettingViewTrust()
    local isPlayBack = CF.roomData:isPlayBack()
    local isSeer = CF.roomData:getIsSeer()
    local canUse = isGameStart and canTrsut and not isPlayBack and not isSeer
    self._trustBtn:setTouchEnabled(canUse)
    self._trustBtn:setGrayedAndEnabled(not canUse)
end

function SettingView3D:showLeftTime(node, showImg, deadTime)
    if deadTime - os.time() < 0 then
        node:setVisible(false)
        if showImg then
            showImg:setGrayedAndEnabled(true)
        end
        return
    end
    function timeFormat(deadTime)
        local time = deadTime - os.time()
        if time < 0 then
            return ""
        end
        local day = math.floor(time / 60 / 60 / 24)
        local hour = math.floor(time / 60 / 60) % 24
        local min = math.floor(time / 60) % 60
        local sec = time % 60
        local str = string.format("%d天", day)
        if day == 0 then
            str = string.format("%02d:%02d:%02d", hour, min, sec)
        end
        return str
    end
    node:setString("" .. timeFormat(deadTime))
    node:stopAllActions()
    local callback =
    cc.CallFunc:create(
        function()
            node:setString("" .. timeFormat(deadTime))
            if deadTime - os.time() < 0 then
                node:setVisible(false)
                if showImg then
                    showImg:setGrayedAndEnabled(true)
                end
            end
        end
    )
    local squence = cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(1), callback))
    node:runAction(squence)
end

function SettingView3D:setDetailTagActiveTime(tagKey, index, node)
    local tagInfo = {
        ["TABLE_STYLE"] = {posY = 25, fontSize = 32},
        ["BACK_TYPE"] = {posY = -10, fontSize = 24}
    }
    local yPos = tagInfo[tagKey] and tagInfo[tagKey].posY or 0
    local fontSize = tagInfo[tagKey] and tagInfo[tagKey].fontSize or 32
    local propID, leftTime = CF.game:getModule("Setting"):getSkinBundlePropInfo(tagKey, index)
    if propID ~= 0 then
        local showImg = node
        if leftTime > os.time() then
            if XH.lobby:getModule("SkinBundle"):isPropIDInSkinBundle(propID) then
                local textTime = node:getChildByName("_KW_TEXT_TIME")
                if not textTime then
                    local text = ccui.Text:create()
                    text:setName("_KW_TEXT_TIME")
                    text:setFontName("res/cocosStudio/Common/Font/fangzhengcuyuan.TTF")
                    text:setFontSize(fontSize)
                    text:setColor(cc.c3b(0xff, 0xff, 0xff))
                    text:enableOutline(cc.c3b(0x41, 0x41, 0x41), 2)
                    text:setAnchorPoint(0.5, 0.5)
                    text:setPosition(node:getContentSize().width / 2, yPos)
                    node:addChild(text)
                    textTime = text
                end
                if textTime then
                    self:showLeftTime(textTime, showImg, leftTime)
                end
            end
        else
            if showImg then
                showImg:setGrayedAndEnabled(true)
            end
        end
    end
end

function SettingView3D:updateBtnStatus()
    local boxRoomMode = CF.roomData:getRoomMode()
    local isBoxRoom = CF.ROOM_MODE.BOXROOM == boxRoomMode
    self._btnDismiss:setVisible(isBoxRoom)

    if not isBoxRoom then
        local isNewGold = (CF.roomData:getRoomMode2() == CF.ROOM_TYPE.NEW_GOLD_ROOM or CF.roomData:getRoomMode2() == CF.ROOM_TYPE.DISPATCH_QUEUE)
        self._btnBackNew:setVisible(isNewGold)    
        self._btnsPanel:setVisible(not isNewGold)
        --游戏中不能换桌
        local isGameStart = CF.roomData:getIsGameStart()
        self._btnChange:setTouchEnabled(not isGameStart)
        self._btnChange:setBright(not isGameStart)
    end
end

function SettingView3D:setVersion(gameVer, lobbyVer)
    self._gameVer:setString("游戏版本: " .. gameVer)
    self._lobbyVer:setString("大厅版本: " .. lobbyVer)
end

function SettingView3D:selectMahBackStyle(style)
    for k, v in pairs(self._backStyleVarNames) do
        if self[v] then
            local flagImg = self[v]:getChildByName(KW_SELECT_FLAG)
            flagImg:setTouchEnabled(k == style)
            flagImg:setVisible(k == style)
        end
    end
end

function SettingView3D:selectMahFaceStyle(style)
    for k, v in pairs(self._faceStyleVarNames) do
        local flagImg = self[v]:getChildByName(KW_SELECT_FLAG)
        flagImg:setTouchEnabled(k == style)
        flagImg:setVisible(k == style)
    end
end

function SettingView3D:selectMahLightStyle(style)
    for k, v in pairs(self._faceLightStyleVarNames) do
        local flagImg = self[v]:getChildByName(KW_SELECT_FLAG)
        flagImg:setTouchEnabled(k == style)
        flagImg:setVisible(k == style)
    end
end

function SettingView3D:selectMahTableStyle(style)
    for k, v in pairs(self._tableStyleVarNames) do
        if self[v] then
            local flagImg = self[v]:getChildByName(KW_SELECT_FLAG)
            flagImg:setTouchEnabled(k == style)
            flagImg:setVisible(k == style)
        end
    end
end

function SettingView3D:selectMahSwitchStyle(style, isFirst)
    if style then
        local switch = self[self._switchNames[style]]
        if not switch then 
            return
        end
        local isEnableTab = {
            function(settingData) return settingData:getSoundPercent() > 0 end,
            function(settingData) return settingData:getMahIsHaveAni() end,
            function(settingData) return settingData:getMusicPercent() > 0 end,
            function(settingData) return not settingData:getMahIsNormalVoice() end,
            function(settingData) return settingData:getMahOutCardStyle() == 1 end,
            function(settingData) return settingData:getMahIsHaveTrace() end,
            function(settingData) return settingData:getHaveTing() end,
            function(settingData) return false end,
            function(settingData) return settingData:getVoiceType() end,
        }

        local setData = {
            function(data) CF.settingData:setSoundPercent(data and 100 or 0) end,
            function(data) CF.settingData:setMahIsHaveAni(data) end,
            function(data) CF.settingData:setMusicPercent(data and 100 or 0) end,
            function(data) CF.settingData:setMahIsNormalVoice(not data) end,
            function(data) CF.settingData:setMahOutCardStyle(data and 1 or 2) end,
            function(data) CF.settingData:setMahIsHaveTrace(data) end,
            function(data) CF.settingData:setHaveTing(data) end,
            function(data) CF.settingData:setMahlayerDimension(data);self:moveOutAnimation() end,
            function(data) CF.settingData:setVoiceType(data) end,
        }

        local isEnabled = isEnableTab[style](CF.settingData)
        if not isFirst then
            isEnabled = not isEnabled
        end

        if isEnabled then
            if style == 9 then 
                switch:loadTexture(KW_SWITCH_NO_PNG_3, ccui.TextureResType.plistType)
            else
                switch:loadTexture(KW_SWITCH_NO_PNG, ccui.TextureResType.plistType)
            end
        else
            if style == 9 then 
                switch:loadTexture(KW_SWITCH_OFF_PNG_3, ccui.TextureResType.plistType)
            else
                switch:loadTexture(KW_SWITCH_OFF_PNG, ccui.TextureResType.plistType)
            end
        end
        if not isFirst then
            setData[style](isEnabled)
        end
    end
end

function SettingView3D:showSelf(zorder)
    zorder = zorder or CF.ZORDER.DIALOG
	local runningScene = display.getRunningScene()
    if runningScene then
        runningScene:addChild(self, zorder)
        self:moveInAnimation()
    end
end

--设置牌背
function SettingView3D:onSelectMahBackStyle(send, eventType)
    local name = send:getName()
    print(name)

    local style = CF.StringTool.getNumberSuffixByString(name)
    local propID, leftTime = CF.game:getModule("Setting"):getSkinBundlePropInfo("BACK_TYPE", style)
    self:settingthrowData(name)
    if propID > 0 and leftTime <= os.time() then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25061201, {page = "设置界面-牌背", game_id = XH.areaData:getAreaID() .. "_" .. CF.roomData:getGameID(), room_mode = CF.roomData:getRoomMode2()})
        XH.viewManager:openView("XiaGuangView", CF.ZORDER.DIALOG, {scene = "设置界面-牌背", gameId = XH.areaData:getAreaID() .. "_" .. CF.roomData:getGameID(), roomMode = CF.roomData:getRoomMode2()})
        return
    end

    self:selectMahBackStyle(style)
    if XH.lobby:getModule("SkinBundle") then
        -- 这边暂时只能特判
        XH.lobby:getModule("SkinBundle"):setPropEquipped(XH.XGSJ_PROP_ID.MAH, propID > 0)
    end
    CF.settingData:setMahBackStyle(style)
end

--设置牌面
function SettingView3D:onSelectMahFaceStyle(send, eventType)
    local name = send:getName()
    print(name)

    local style = CF.StringTool.getNumberSuffixByString(name)
    self:selectMahFaceStyle(style)
    CF.settingData:setMahFaceStyle(style)
    self:settingthrowData(name)
end

--设置牌面亮度
function SettingView3D:onSelectMahLightStyle(send, eventType)
    local name = send:getName()
    print(name)

    local style = CF.StringTool.getNumberSuffixByString(name)
    self:selectMahLightStyle(style)
    CF.settingData:setMahLightStyle(style)
    self:settingthrowData(name)
end

--设置桌布
function SettingView3D:onSelectMahTableStyle(send, eventType)
    local name = send:getName()
    print(name)

    local style = CF.StringTool.getNumberSuffixByString(name)
    local propID, leftTime = CF.game:getModule("Setting"):getSkinBundlePropInfo("TABLE_STYLE", style)
    self:settingthrowData(name)
    if propID > 0 and leftTime <= os.time() then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25061201, {page = "设置界面-桌布", game_id = XH.areaData:getAreaID() .. "_" .. CF.roomData:getGameID(), room_mode = CF.roomData:getRoomMode2()})
        XH.viewManager:openView("XiaGuangView", CF.ZORDER.DIALOG, {scene = "设置界面-桌布", gameId = XH.areaData:getAreaID() .. "_" .. CF.roomData:getGameID(), roomMode = CF.roomData:getRoomMode2()})
        return
    end

    self:selectMahTableStyle(style)
    if XH.lobby:getModule("SkinBundle") then
        -- 这边暂时只能特判
        XH.lobby:getModule("SkinBundle"):setPropEquipped(XH.XGSJ_PROP_ID.TABLE, style == 7)
    end
    CF.settingData:setMahTableStyle(style)
end

--设置声音,音效....
function SettingView3D:onTouched(send, eventType)
    local name = send:getName()
    print(name)
    local style = tonumber(CF.StringTool.getNumberSuffixByString(name) or 0)
    self:selectMahSwitchStyle(style)
    self:settingthrowData(name)
end

function SettingView3D:settingthrowData(name)
    if name == nil then
        return
    end
    if name == "_KW_IMG_YX_1" then --音效
        CF.game:getModule("IconAnimationManager"):reportData("菜单_音效")
    elseif name == "_KW_IMG_YY_3" then --音乐
        CF.game:getModule("IconAnimationManager"):reportData("菜单_音乐")
    elseif name == "_KW_IMG_FY_4" then --方言
        CF.game:getModule("IconAnimationManager"):reportData("菜单_方言")
    elseif name == "_KW_IMG_CP_5" then --出牌方式
        CF.game:getModule("IconAnimationManager"):reportData("菜单_出牌方式")
    elseif name == "_KW_IMG_2D_8" then --切换2D
        CF.game:getModule("IconAnimationManager"):reportData("菜单_切换2D")
    elseif name == "_KW_IMG_CPYY_9" then --语音
        CF.game:getModule("IconAnimationManager"):reportData("菜单_语音")
    elseif string.match(name, "_KW_IMG_CARD_BACK_") then --牌背
        CF.game:getModule("IconAnimationManager"):reportData("菜单_牌背")
    elseif string.match(name, "_KW_IMG_CARD_FACE_") then --牌面
        CF.game:getModule("IconAnimationManager"):reportData("菜单_牌花")
    elseif string.match(name, "_KW_IMG_CARD_FACE_LIGHT_") then --牌面亮度
        CF.game:getModule("IconAnimationManager"):reportData("菜单_牌面")
    elseif string.match(name, "_KW_OUT_EFFECTS_") then --特效
        CF.game:getModule("IconAnimationManager"):reportData("菜单_特效")
    elseif string.match(name, "_KW_IMG_TABLE_BG_") then --桌布
        CF.game:getModule("IconAnimationManager"):reportData("菜单_桌布")
    elseif string.match(name, "_KW_3D_VISUAL_ANGLE_") then --3D视觉角度
        CF.game:getModule("IconAnimationManager"):reportData("菜单_3D视觉角度")
    end
end
--出牌方式
function SettingView3D:onSelectOutCardStyle(send, eventType)
    local name = send:getName()
    local style = tonumber(CF.StringTool.getNumberSuffixByString(name) or 0)

    for k, v in pairs(self._outCardStyleVarNames) do
        if k ~= style then
            self[v]:setSelected(not (ccui.CheckBoxEventType.selected == eventType))
        end
    end

    local saveStyle = style
    if ccui.CheckBoxEventType.unselected == eventType then
        saveStyle = (style == 1) and 2 or 1
    end
    print("xxxxx:" .. saveStyle)
    CF.settingData:setMahOutCardStyle(saveStyle)
end

--进入动画
function SettingView3D:moveInAnimation()
    if self._settingRoot then
        self._settingRoot:stopAllActions()
        local width = self._settingRoot:getContentSize().width
        local totalWidth = self._settingBg:getContentSize().width
        local yPos = self._settingRoot:getPositionY()
        local endPosX = totalWidth - width
        local moveAni = cc.MoveTo:create(0.2, cc.p(endPosX, yPos))
        self._settingRoot:runAction(moveAni)
    end
end

--关闭动画
function SettingView3D:moveOutAnimation()
    if self._settingRoot then
        self._settingRoot:stopAllActions()

        local yPos = self._settingRoot:getPositionY()
        local endPosX = self._settingBg:getContentSize().width
        local moveAni = cc.MoveTo:create(0.2, cc.p(endPosX, yPos))
        local fun = cc.CallFunc:create(function()
            self:close()
        end)

        local ani = cc.Sequence:create(moveAni, fun)
        self._settingRoot:runAction(ani)
    end
end

--换桌
function SettingView3D:onBtnChange(send, eventType)
    CF.game:getModule("Setting"):doChangeTable()
    self:moveOutAnimation()
    CF.game:getModule("IconAnimationManager"):reportData("菜单_换桌")
end

--返回大厅
function SettingView3D:onBtnBack(send, eventType)
    CF.game:getModule("IconAnimationManager"):reportData("菜单_返回大厅")
    if CF.selfPlayerData:getIsNewUserGuide()  then
        CF.TipTool.showTip({
            type = CF.TIP_LAYER_TYPE.OK_CANCEL,
            funcOK = function()
                CF.game:getModule("Setting"):doReturnToLobby()
                self:moveOutAnimation()
                CF.getLobbyModule("Guide"):reqSetNewUserGuideState(CF.getLobbyModule("Guide").GUIDE_STATE["end"])
            end,
        }, "退出引导将无法获得丰富奖励，是否确认退出？")
    else
        CF.game:getModule("Setting"):doReturnToLobby()
        self:moveOutAnimation()
    end
end


--解散
function SettingView3D:onDismiss(send, eventType)
    CF.game:getModule("IconAnimationManager"):reportData("菜单_解散")
    CF.game:getModule("Setting"):doDismiss()
    self:moveOutAnimation()
end

--关闭按钮
function SettingView3D:onBtnClose(send, eventType)
    self:moveOutAnimation()
end

function SettingView3D:onBtnTrust()
    local isGameStart = CF.roomData:getIsGameStart()
    if isGameStart then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt2025111702, {game_id = XH.areaData:getAreaID() .. "_" .. CF.roomData:getGameID()})
        CF.game:getModule("IconAnimationManager"):reportData("菜单_托管")
        CF.msgManager:sendTrust(true)
    end
    self:close()
end

function SettingView3D:onSelectEffectStyle(send, eventType)
    local name = send:getName()
    print(name)

    local style = CF.StringTool.getNumberSuffixByString(name)
    self:selectEffectStyle(style)
    CF.settingData:setOutEffectStyle(style)
    self:settingthrowData(name)
end

function SettingView3D:selectEffectStyle(style)
    for k, v in pairs(self._effectStyleVarNames) do
        local flagImg = self[v]:getChildByName(KW_SELECT_FLAG)
        flagImg:setTouchEnabled(k == style)
        flagImg:setVisible(k == style)
    end
end

function SettingView3D:onSelect3DVisualAngle(send, eventType)
    local name = send:getName()
    print(name)

    local style = CF.StringTool.getNumberSuffixByString(name)
    self:select3DVisualAngle(style)
    CF.settingData:set3DVisualAngle(style)
    self:settingthrowData(name)
end

function SettingView3D:select3DVisualAngle(style)
    for k, v in pairs(self._3DVisualVarNames) do
        local flagImg = self[v]:getChildByName(KW_SELECT_FLAG)
        flagImg:setTouchEnabled(k == style)
        flagImg:setVisible(k == style)
    end
end



return SettingView3D