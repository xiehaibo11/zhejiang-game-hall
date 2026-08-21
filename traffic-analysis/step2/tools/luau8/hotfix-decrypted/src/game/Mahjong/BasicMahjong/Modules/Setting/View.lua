local SettingView = CF.gameClass("SettingView", "game.GameBase.Modules.Setting.View")


local KW_SELECT_FLAG = "_KW_TYPE_SELECT_IMG"
local KW_SELECT_FLAG_BG = "_KW_TYPE_BG"
local KW_SELECT_IMG = "_KW_STYEL_IMG"
local KW_PLAYER_TYPE_TEXT = "_KW_PLAYER_TYPE_TEXT"
local TEXT_COLOR_NORMAL     = cc.c3b(191, 119, 79)
local TEXT_COLOR_SELECTED   = cc.c3b(255, 255, 255)

local FINGER_EXCHANGE = "FINGER_EXCHANGE"     
----运营显示的百分比label
local KW_AGENT_TEXT = "_KW_AGENT_TEXT"
local KW_SWITCH_OFF_PNG = "set_mah_btn_off.png"
local KW_SWITCH_NO_PNG = "set_mah_btn_no.png"

local KW_SWITCH_OFF_PNG_2 = "set_mah_btn_off_3.png"             --开关关画面
local KW_SWITCH_NO_PNG_2 = "set_mah_btn_on_3.png"               --开关开画面    

local KW_SWITCH_OFF_PNG_3 = "set_mah_btn_off_4.png"             --女   (出牌语音)
local KW_SWITCH_NO_PNG_3 = "set_mah_btn_on_4.png"               --男

local KW_QUIT_BTN_TEXTUTRE = "set_mah_btn_quit.png"
local SELECTE_BOX_GROUPS = {
    STYLE_SELECT    = "_styleSelect_",
    SET_DETAIL      = "_setDetail_",
    WORD_TYPE       = "_wordType_",
    BACK_TYPE       = "_backType_",
    BODY_TYPE       = "_bodyType_",
    FACE_TYPE       = "_faceType_",
    PLAYER_TYPE     = "_playerType_",
    TABLE_STYLE     = "_tableStyle_",
    OUT_MOVE_STYLE  = "_outMoveStyle_",
    OUT_STYLE       = "_outStyle_",
    OUT_EFFECTS     = "_outEffects_",
    HAND_STYLE      = "_handStyle_",
    HAND_SORT_STYLE = "_handSortStyle_",
    OUT_TABLE_CARD_STYLE  = "_outTableCardStyle_",
    INSERT_STYLE       = "_insertStyle_",
}
local KW_TEXTUTRE_LIST = {
    WORD_TYPE       = {"set_mah_word_", ".png"},
    BACK_TYPE       = {"set_mah_back", ".png"},
    BODY_TYPE       = {"set_mah_body", ".png"},
    FACE_TYPE       = {"set_mah_face", ".png"},
    PLAYER_TYPE     = {"set_mah_btn_plan", ".png"},
    TABLE_STYLE     = {"mah_style_bg_", ".png"},
    OUT_STYLE       = {"set_mah_style_out_", ".png"},
    OUT_EFFECTS     = {"set_mah_effects_", ".png"},
    HAND_STYLE      = {"set_mah_style_hand_direction", ".png"},
    HAND_SORT_STYLE = {"set_mah_hand_style", ".png"},
    OUT_TABLE_CARD_STYLE  = {"set_mah_table_style_", ".png"},
}
local DATAIL_TAGS = {
    MAH         = 1,  --麻将
    TABLE       = 2,  --桌布
    ANIMATION   = 3,  --动画  
    EFFECTS     = 4,  --特效
    HAND        = 5,  --摆牌
    ADVANCED    = 6,  --高级设置 
}

function SettingView:ctor(param)
    param = param or {}
    SettingView.super.ctor(self, param)

    self._switchNames = { "_yxImage", "_txImage", "_yyImage", "_fyImage", "_cpImage", "_gjImage", "_tingImage", "_to3DImage", "_clearImage","_cpyyImage"}
    self._bInitDetailLayer = {}
    self._isFullScence = false
    self._config = nil
    self._customIndex = 0

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
                if CF.settingData:getBackType() ~= index then
                    CF.settingData:setBackType(index)
                    local cusData = CF.settingData:getDefaultData(nil, true)
                    CF.settingData:dispatchMahjongCfg(cusData)
                end
                break
            end
        end
    end
    self:initUI()
    self:updateBtnPos()
end

function SettingView:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/SettingNew.csb"
end

function SettingView:getBindingInfo()
    return {
        ["_KW_PANAEL_BG"] = { varName = "_settingBg", onTouchEnded = "onBtnClose"},
        ["_KW_PANAEL_SET_ROOT"] = { varName = "_settingRoot"},
        ["_KW_BTN_DISMISS"] = { varName = "_btnDismiss", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onDismiss"},
        ["_KW_BTN_SAVE"] = { varName = "_btnSave", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnSave"},
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_PANEL_CLOSE_EX"] = { varName = "_panelCloseEx", type = CF.UI_TYPE.PANEL_TOBUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_TEXT_GAME_VER"] = { varName = "_gameVer"},
        ["_KW_TEXT_LOBBY_VER"] = { varName = "_lobbyVer"},

        ["_KW_HEIGHT_SLIDER"] = { varName = "_heightSlider", onTouch = "onTouchEventSliderChange"},
        ["_KW_WIDTH_SLIDER"] = { varName = "_widthSlider", onTouch = "onTouchEventSliderChange"},
        ["_KW_WORD_SIZE_SLIDER"] = { varName = "_wordSizeSlider", onTouch = "onTouchEventSliderChange"},
        ["_KW_EFFECTS_SIZE_SLIDER"] = { varName = "_effectsSizeSlider", onTouch = "onTouchEventSliderChange"},
        ["_KW_EFFECTS_ICON"] = { varName = "_effectsSizeIcon"},
        ["_KW_SCAN_MAH_IMG_BG2"] = { varName = "_scanMahImgBg2"},
        ["_KW_SCAN_MAH_IMG_BG"] = { varName = "_scanMahImgBg"},
        ["_KW_PANAEL_SET_DETAIL"] = { varName = "_panaelSetDetail"},
        ["_KW_PANAEL_SET_SWITCH"] = { varName = "_panaelSetSwitch"},

        ["_KW_TING"] = { varName = "_tingLogo"},
        ["_KW_TEXT_3D"] = { varName = "_3DLogo"},
        --高级设置手势引导
        ["_KW_UI_FINGER_NODE"] = {varName = "_aniGuide"},

        ["_KW_IMG_YX_1"] = { varName = "_yxImage", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouched"},
        ["_KW_IMG_TX_2"] = { varName = "_txImage", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouched"},
        ["_KW_IMG_YY_3"] = { varName = "_yyImage", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouched"},
        ["_KW_IMG_FY_4"] = { varName = "_fyImage", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouched"},
        ["_KW_IMG_CP_5"] = { varName = "_cpImage", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouched"},
        ["_KW_IMG_GJ_6"] = { varName = "_gjImage", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouched"},
        ["_KW_IMG_TING_7"] = { varName = "_tingImage", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouched"},
        ["_KW_IMG_3D_8"] = { varName = "_to3DImage", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouched"},
        ["_KW_TRUST_BTN"] = { varName = "_trustBtn", type = CF.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onBtnTrust"},
        ["_KW_IMG_CL_9"] = { varName = "_clearImage", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouched"},
        ["_KW_IMG_CPYY_10"] = { varName = "_cpyyImage",type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouched"},
        ["_KW_BTN_PLAYER_TYPE_SAVE"] = { varName = "_btnPlayerTypeSave", type = CF.UI_TYPE.PANEL_TOBUTTON, onTouchEnded = "onBtnSaveCustomStyle"},
        ["_KW_SCAN_TABLE_COLOR_IMG"] = { varName = "_scanTableColorImg"},
        ["_KW_OUTMAH_VOICE_IMG"] = { varName = "_outMahVoiceImg"},

        --语音 
        ["_KW_LISTVIEW_YUYIN_INFO"] = {varName = "_yuyinInfoList"},
        ["_KW_YUYIN_TEXT"] = { varName = "_yuyinItemPanel"},
        ["_KW_YUYIN_BUTTON"] = {varName = "_yuyinItemButton"},
        ["_KW_YUYIN_BUTTON_NODE"] = {varName = "_yuyinItemButtonNode"},

        --底部方案
        ["_KW_BOTTOM_NODE"] = {varName = "_fangan"},
        
        ["_KW_STYLE_SELECT_"] = { varName = SELECTE_BOX_GROUPS.STYLE_SELECT, beginIndex = 1, endIndex = 6, type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onSelectDetailTag"},
        ["_KW_SET_DETAIL_"] = { varName = SELECTE_BOX_GROUPS.SET_DETAIL, beginIndex = 1, endIndex = 6},
        ["_KW_WORD_TYPE_"] = { varName = SELECTE_BOX_GROUPS.WORD_TYPE, beginIndex = 1, endIndex = 8, type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouchEvnetSetCustomStyle"},
        ["_KW_BACK_TYPE_"] = { varName = SELECTE_BOX_GROUPS.BACK_TYPE, beginIndex = 1, endIndex = 8, type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouchEvnetSetCustomStyle"},
        ["_KW_BODY_TYPE_"] = { varName = SELECTE_BOX_GROUPS.BODY_TYPE, beginIndex = 1, endIndex = 2, type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouchEvnetSetCustomStyle"},
        ["_KW_FACE_TYPE_"] = { varName = SELECTE_BOX_GROUPS.FACE_TYPE, beginIndex = 1, endIndex = 2, type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouchEvnetSetCustomStyle"},
        ["_KW_PLAYER_TYPE_"] = { varName = SELECTE_BOX_GROUPS.PLAYER_TYPE, beginIndex = 1, endIndex = 4, type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouchEvnetSetCustomStyle"},
        ["_KW_TABLE_STYLE_"] = { varName = SELECTE_BOX_GROUPS.TABLE_STYLE, beginIndex = 1, endIndex = 7, type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouchEvnetSetCustomStyle"},
        ["_KW_TABLE_STYLE_LIST"] = { varName = "_tableStyleList"},
        ["_KW_OUT_MOVE_STYLE_"] = { varName = SELECTE_BOX_GROUPS.OUT_MOVE_STYLE, beginIndex = 1, endIndex = 2, type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouchEvnetSetCustomStyle"},
        ["_KW_OUT_STYLE_"] = { varName = SELECTE_BOX_GROUPS.OUT_STYLE, beginIndex = 1, endIndex = 2, type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouchEvnetSetCustomStyle"},
        ["_KW_OUT_EFFECTS_"] = { varName = SELECTE_BOX_GROUPS.OUT_EFFECTS, beginIndex = 1, endIndex = 2, type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouchEvnetSetCustomStyle"},
        ["_KW_OUT_EFFECTS_SIZE"]= {varName = "_effectsSizePanel"},
        ["_KW_HAND_STYLE_"] = { varName = SELECTE_BOX_GROUPS.HAND_STYLE, beginIndex = 1, endIndex = 2, type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouchEvnetSetCustomStyle"},
        ["_KW_HAND_SORT_STYLE_"] = { varName = SELECTE_BOX_GROUPS.HAND_SORT_STYLE, beginIndex = 1, endIndex = 2, type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouchEvnetSetCustomStyle"},
        ["_KW_OUT_TABLE_CARD_STYLE_"] = { varName = SELECTE_BOX_GROUPS.OUT_TABLE_CARD_STYLE, beginIndex = 1, endIndex = 2, type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouchEvnetSetCustomStyle"},
        ["_KW_INSERT_STYLE_"] = { varName = SELECTE_BOX_GROUPS.INSERT_STYLE, beginIndex = 1, endIndex = 2, type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouchEvnetSetCustomStyle"},
        
        ["_KW_UI_BTNS_PANEL"] = { varName = "_btnsPanel"},
        ["_KW_BTN_CHANGE"] = { varName = "_btnChange", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnChange"},
        ["_KW_BTN_BACK"] = { varName = "_btnBack", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnBack"},
        ["_KW_BTN_BACK_NEW"] = { varName = "_btnBackNew", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnBack"},
    }
end

function SettingView:initUI()
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/MahjongNew/GameLayer/Image/settingNew.plist")
    for k, _ in pairs(self._switchNames) do
        self:selectMahSwitchStyle(k, true)
    end

    --解散按钮状态
    self._btnDismiss:loadTexture(KW_QUIT_BTN_TEXTUTRE, ccui.TextureResType.plistType)

    if CF.configData:haveTing() then
        self._tingLogo:setVisible(true)
        self._tingImage:setVisible(true)
    else
        self._tingLogo:setVisible(false)
        self._tingImage:setVisible(false)
    end

    if CF.configData:getHaveMahlayer3D() then
        self._3DLogo:setVisible(true)
        self._to3DImage:setVisible(true)
    else
        self._3DLogo:setVisible(false)
        self._to3DImage:setVisible(false)
    end

    --手势引导
    if not cc.UserDefault:getInstance():getBoolForKey(FINGER_EXCHANGE, false) then
        if self._aniGuide then
            self._aniGuide:setVisible(true)
        end
    end

    local style = CF.settingData:getMahTableStyle()
    if self._scanTableColorImg then
        self._scanTableColorImg:loadTexture(KW_TEXTUTRE_LIST["TABLE_STYLE"][1]..style..KW_TEXTUTRE_LIST["TABLE_STYLE"][2], ccui.TextureResType.plistType)
    end
    local currMahCfg = CF.settingData:getDefaultData(nil, true)
    local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")
    self._outShowMah = UIMah.new(CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD, currMahCfg)
    self._insideShowMah = UIMah.new(CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD, currMahCfg)
    if self._scanMahImgBg2 then
        self._insideShowMah:setMahValue(CF.GameDefine.MAH_VALUE.JIAN_FA)
        self._scanMahImgBg2:addChild(self._insideShowMah)
    end
    if self._scanMahImgBg then
        self._outShowMah:setMahValue(CF.GameDefine.MAH_VALUE.JIAN_FA)
        self._scanMahImgBg:addChild(self._outShowMah)
    end

    --金币场和包厢场不同退出方式
    self:updateBtnStatus()

    ---底部方案按钮
    self:setDetailTagActive("PLAYER_TYPE")
    local customStyle = CF.settingData:getPlayerType()
    self:setDetailTagSelected(SELECTE_BOX_GROUPS["PLAYER_TYPE"], self:realIndexSwitchToLocalIndex("PLAYER_TYPE", customStyle))
    --自定义布局方案按钮index ~= 0  说明有自定义按钮 
    if CF.settingData:getCustonTypeIndex() ~= 0 then
--        self._customIndex = CF.settingData:getCustonTypeIndex()
        if self["_playerType_"..self._customIndex] then
            self["_playerType_"..self._customIndex]:setVisible(true)
            local customLabel = self["_playerType_"..self._customIndex]:getChildByName(KW_PLAYER_TYPE_TEXT)
            if customLabel then
                customLabel:setString("自定义")
            end
        end
    end
    local cusData = CF.settingData:getDefaultData(customStyle)
    self._config = clone(cusData)

    local isGameStart = CF.roomData:getIsGameStart()
    local canTrsut =  CF.game:getModule("RoomInfo"):getCanSettingViewTrust()
    local isPlayBack = CF.roomData:isPlayBack()
    local isSeer = CF.roomData:getIsSeer()
    local canUse = isGameStart and canTrsut and not isPlayBack and not isSeer
    self._trustBtn:setTouchEnabled(canUse)
    self._trustBtn:setGrayedAndEnabled(not canUse)
end

function SettingView:updateBtnStatus()
    local isBoxRoom = CF.roomData:isBoxRoom()
    self._btnDismiss:setVisible(isBoxRoom)

    if not isBoxRoom then
        local isNewGold = CF.roomData:isNewGoldRoom()
        self._btnBackNew:setVisible(isNewGold)    
        self._btnsPanel:setVisible(not isNewGold)
        --游戏中不能换桌
        local isGameStart = CF.roomData:getIsGameStart()
        self._btnChange:setTouchEnabled(not isGameStart)
        self._btnChange:setBright(not isGameStart)
    end
end

function SettingView:updateBtnPos()
    local gameid = CF.roomData:getGameID()
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameid)
    if boxGameId then
        gameid = boxGameId
    end
    local dialectCfg = CF.soundManager:getDialetcConfigByGameID(gameid)
    if #dialectCfg > 2 then 
        local tempY = 150
        self._yxImage:setPositionY(self._yxImage:getPositionY() - tempY)
        self._yyImage:setPositionY(self._yyImage:getPositionY() - tempY)
    end
end

--语音
--data从配置文件中获得 然后用data判断什么区域 和 区域下的语音包
function SettingView:initYunyinBtns()
    local gameid = CF.roomData:getGameID()
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameid)
    if boxGameId then
        gameid = boxGameId
    end
    local dialectCfg = CF.soundManager:getDialetcConfigByGameID(gameid)

     local whiteWidth = 30
     local defultBtn
     self._yuyinInfoList:removeAllChildren()
     self._yuyinInfoList:setContentSize(0, self._yuyinInfoList:getContentSize().height)
     for i = 1, #dialectCfg do
        local button = self._yuyinItemButtonNode:clone()
        local selectBG = button:getChildByName("_KW_YUYIN_BUTTON")
        selectBG:setVisible(false)
        button:setTag(dialectCfg[i].index)
        button:getChildByName("_KW_YUYIN_TEXT"):setText(dialectCfg[i].name)
        button:setVisible(true)
        button:addTouchEventListener(handler(self, self.onBtnYuyin))
        local listContentSize = self._yuyinInfoList:getContentSize()
        local textSize = button:getChildByName("_KW_YUYIN_TEXT"):getContentSize()
        local widthTmp = listContentSize.width + whiteWidth * 2 + textSize.width
        selectBG:setContentSize( textSize.width + whiteWidth * 2, selectBG:getContentSize().height)
        button:setPosition(widthTmp - textSize.width / 2 - whiteWidth, listContentSize.height / 2)

        --A两种方言的普通话点击后，B两种以上的如金乡话点击后，确保此时A显示的是本地话
        if not defultBtn then
            if CF.settingData:getMahIsNormalVoice() and i == 1 then
                defultBtn = button
            elseif CF.settingData:getMahIsNormalVoice() == false then 
                if dialectCfg[i].index == CF.settingData:getMahDialectVoiceType() and dialectCfg[i].index ~= 1 then
                    defultBtn = button
                elseif  dialectCfg[i].index -  1 == CF.settingData:getMahDialectVoiceType() and dialectCfg[i].index ~= 1  then  
                    defultBtn = button
                end
            end
        end
        self._yuyinInfoList:setContentSize(widthTmp, listContentSize.height)
        self._yuyinInfoList:addChild(button)
     end
     
     if defultBtn then
         self:onBtnYuyin(defultBtn, ccui.TouchEventType.ended)
     end
end

function SettingView:selectMahSwitchStyle(style, isFirst)
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
            function(settingData) return settingData:getIsClearModel() end,
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
            function(data) CF.settingData:setMahlayerDimension(data);self:close() end,
            function(data) CF.settingData:setIsClearModel(data) end,
            function(data) CF.settingData:setVoiceType(data) end,
        }

        local isEnabled = isEnableTab[style](CF.settingData)
        if not isFirst then
            isEnabled = not isEnabled
        end

        if isEnabled then
            if style == 8 then
                switch:loadTexture(KW_SWITCH_NO_PNG, ccui.TextureResType.plistType)
            elseif style == 10 then 
                switch:loadTexture(KW_SWITCH_NO_PNG_3, ccui.TextureResType.plistType)
            else
                switch:loadTexture(KW_SWITCH_NO_PNG_2, ccui.TextureResType.plistType)
            end 
        else
            if style == 8 then
                switch:loadTexture(KW_SWITCH_OFF_PNG, ccui.TextureResType.plistType)
            elseif style == 10 then 
                switch:loadTexture(KW_SWITCH_OFF_PNG_3, ccui.TextureResType.plistType)
            else
                switch:loadTexture(KW_SWITCH_OFF_PNG_2, ccui.TextureResType.plistType)
            end 
        end
        if not isFirst then
            setData[style](isEnabled)
        end
    end
end

function SettingView:showSelf(zorder)
    zorder = zorder or CF.ZORDER.DIALOG
	local runningScene = display.getRunningScene()
    if runningScene then
        runningScene:addChild(self, zorder)
        self:moveInAnimation()
    end
end

--设置声音,音效....
function SettingView:onTouched(send, eventType)
    local name = send:getName()
    local style = tonumber(CF.StringTool.getNumberSuffixByString(name) or 0)
    self:settingthrowData(name)
    self:selectMahSwitchStyle(style)
end

function SettingView:onBtnTrust()
    local isGameStart = CF.roomData:getIsGameStart()
    if isGameStart then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt2025111702, {game_id = XH.areaData:getAreaID() .. "_" .. CF.roomData:getGameID()})
        CF.game:getModule("IconAnimationManager"):reportData("菜单_托管")
        CF.msgManager:sendTrust(true)
    end
    self:close()
end

function SettingView:settingthrowData(name)
    if name == nil then
        return
    end 
    if name == "_KW_IMG_YX_1" then  --音效
        CF.game:getModule("IconAnimationManager"):reportData("菜单_音效")
    elseif name == "_KW_IMG_YY_3" then  --音乐
        CF.game:getModule("IconAnimationManager"):reportData("菜单_音乐")
    elseif name == "_KW_IMG_FY_4" then --方言
        CF.game:getModule("IconAnimationManager"):reportData("菜单_方言")
    elseif name == "_KW_IMG_CP_5" then --出牌方式
        CF.game:getModule("IconAnimationManager"):reportData("菜单_出牌方式")
    elseif name == '_KW_IMG_GJ_6' then
        CF.game:getModule("IconAnimationManager"):reportData("菜单_出牌轨迹")
    elseif name == "_KW_IMG_TING_7" then --停牌提示
        CF.game:getModule("IconAnimationManager"):reportData("菜单_听牌提示")
    elseif name == "_KW_IMG_CL_9" or name == "_KW_IMG_CL_8" then  --纯洁模式
        CF.game:getModule("IconAnimationManager"):reportData("菜单_纯净模式")
    elseif name == "_KW_STYLE_SELECT_1" then --麻将高级设置
        CF.game:getModule("IconAnimationManager"):reportData("菜单_设置_麻将")
    elseif name == "_KW_STYLE_SELECT_2" then --桌布高级设置
        CF.game:getModule("IconAnimationManager"):reportData("菜单_设置_桌布")
    elseif name == "_KW_STYLE_SELECT_3" then --动画高级设置
        CF.game:getModule("IconAnimationManager"):reportData("菜单_设置_动画")
    elseif name == "_KW_STYLE_SELECT_4" then --特效高级设置
        CF.game:getModule("IconAnimationManager"):reportData("菜单_设置_特效")
    elseif name == "_KW_STYLE_SELECT_5" then --摆牌高级设置
        CF.game:getModule("IconAnimationManager"):reportData("菜单_设置_摆牌")
    elseif name == "_KW_STYLE_SELECT_6" then --高级设置
        CF.game:getModule("IconAnimationManager"):reportData("菜单_设置")
    elseif name == "_KW_HEIGHT_SLIDER" then  --高度
        CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.MASET_09)
    elseif name == "_KW_WIDTH_SLIDER" then   --厚度
        CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.MASET_10)
    elseif name == "_KW_WORD_SIZE_SLIDER" then --大小
        CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.MASET_12)
    elseif name == "WORD_TYPE" then --牌花
        CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.MASET_11)
    elseif name == "BACK_TYPE" then --牌背
        CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.MASET_13)
    elseif name == "BODY_TYPE" then --牌型
        CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.MASET_14)
    elseif name == "FACE_TYPE" then --牌面
        CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.MASET_15)
    elseif name == "TABLE_STYLE" then --切换桌布
        CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.MASET_17)
    elseif name == "_KW_IMG_CPYY_10" or  name == "_KW_IMG_CPYY_9" then --提示音
        CF.game:getModule("IconAnimationManager"):reportData("菜单_语音")
    elseif name == "_KW_IMG_3D_8" then --切换3D
        CF.game:getModule("IconAnimationManager"):reportData("菜单_切换3D")
    elseif string.match(name, "_KW_IMG_CARD_BACK_") then --牌背
        CF.game:getModule("IconAnimationManager"):reportData("菜单_牌背")
    elseif string.match(name, "_KW_IMG_CARD_FACE_") then --牌面
        CF.game:getModule("IconAnimationManager"):reportData("菜单_牌花")
    elseif string.match(name, "_KW_IMG_TABLE_BG_") then --桌布
        CF.game:getModule("IconAnimationManager"):reportData("菜单_桌布")
    end
end 

--设置语音
function SettingView:onBtnYuyin(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    -- 类型值大于1的都是方言，在方言与普通话之间切换时需要重新设置
    if (CF.settingData:getMahDialectVoiceType() > 1 and send:getTag() == 1) then
        CF.settingData:setMahIsNormalVoice(true)
    elseif (CF.settingData:getMahDialectVoiceType() == 1 and send:getTag() > 1) then
        CF.settingData:setMahIsNormalVoice(false)
    end

    self._selectVoiceIndex = send:getTag()
    --更新按钮状态
    self:updateVoiceBtnsState(send)
    CF.settingData:setMahDialectVoiceType(self._selectVoiceIndex)
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.MASET_06)
end 

function SettingView:updateVoiceBtnsState(send)
    --隐藏所有的 _KW_YUYIN_BUTTON_NODE 然后将self._selectVoiceIndex
    local Btns = self._yuyinInfoList:getChildren()
    for _, btn in pairs(Btns) do
        if btn:getTag() == self._selectVoiceIndex then 
            btn:getChildByName("_KW_YUYIN_BUTTON"):setVisible(true)
        else
            btn:getChildByName("_KW_YUYIN_BUTTON"):setVisible(false)
        end
    end
end

--进入动画
function SettingView:moveInAnimation()
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
function SettingView:moveOutAnimation()
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
function SettingView:onBtnChange(send, eventType)
    CF.game:getModule("Setting"):doChangeTable()
    self:moveOutAnimation()
    CF.game:getModule("IconAnimationManager"):reportData("菜单_换桌")
end

--返回大厅
function SettingView:onBtnBack(send, eventType)
    CF.game:getModule("IconAnimationManager"):reportData("菜单_返回大厅")
    if CF.selfPlayerData:getIsNewUserGuide() then
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
function SettingView:onDismiss(send, eventType)
    CF.game:getModule("IconAnimationManager"):reportData("菜单_解散")
    CF.game:getModule("Setting"):doDismiss()
    self:moveOutAnimation()
end

--关闭按钮
function SettingView:onBtnClose(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:moveOutAnimation()
    if self._isFullScence then
        local cusData = CF.settingData:getDefaultData(nil, true)
        CF.settingData:dispatchMahjongCfg(cusData)
    end
end
--进入全屏动画
function SettingView:moveInDetailAnimation()
    if self._isFullScence then
        return
    end
    self:adaptForLiuHai()
    self._isFullScence = true
    if self._settingRoot then
        self._settingRoot:stopAllActions()
        local yPos = self._settingRoot:getPositionY()
        local moveAni = cc.MoveTo:create(0.2, cc.p(0, yPos))
        self._settingRoot:runAction(moveAni)
    end
    if self._btnClose then
        self._btnClose:setPositionX(cc.Director:getInstance():getWinSize().width - 10 - self._btnClose:getContentSize().width/2)
    end
    if self._btnSave then
        self._btnSave:setVisible(true)
    end
    if self._btnDismiss then
        self._btnDismiss:setVisible(false)
    end
    if not CF.roomData:isBoxRoom() then
        self._btnsPanel:setVisible(false)
        self._btnBackNew:setVisible(false)
    end
end
---------------------------------------------------------
-- @brief 用户风格点击事件
-- @date add by Arthur(lijiaxiang) on 2020/6/11
--        @param  send:　       页签按钮
--        @param  eventType:    点击事件
--        @return nil
---------------------------------------------------------
function SettingView:onTouchEvnetSetCustomStyle(send, eventType)
    local name = send:getName()
    local style = CF.StringTool.getNumberSuffixByString(name)
    local nameHead = string.gsub(name,"_"..tostring(style), "")
    nameHead = string.gsub(nameHead,"_KW_", "")
    local index = self:localIndexSwitchToRealIndex(nameHead, style)
    local propID, leftTime = CF.game:getModule("Setting"):getSkinBundlePropInfo(nameHead, index)
    if propID > 0 and leftTime <= os.time() then
        local page
        if nameHead == "TABLE_STYLE" then
            page = "设置界面-桌布"
        elseif nameHead == "BACK_TYPE" then
            page = "设置界面-牌背"
        end
        if page then
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25061201, {page = page, game_id = XH.areaData:getAreaID() .. "_" .. CF.roomData:getGameID(), room_mode = CF.roomData:getRoomMode2()})
        end
        XH.viewManager:openView("XiaGuangView", CF.ZORDER.DIALOG, {scene = page, gameId = XH.areaData:getAreaID() .. "_" .. CF.roomData:getGameID(), roomMode = CF.roomData:getRoomMode2()})
        return
    end
    self:setDetailTagSelected(SELECTE_BOX_GROUPS[nameHead], style)
    if nameHead == "PLAYER_TYPE" then
        self:setPlayerType(self:localIndexSwitchToRealIndex(nameHead, style), send)
    else
        if nameHead == "TABLE_STYLE" and self._scanTableColorImg then
            self._scanTableColorImg:loadTexture(KW_TEXTUTRE_LIST[nameHead][1]..style..KW_TEXTUTRE_LIST[nameHead][2], ccui.TextureResType.plistType)
        end
        self:setCustomStyle(nameHead, self:localIndexSwitchToRealIndex(nameHead, style))
    end
    self:settingthrowData(nameHead)
end
---------------------------------------------------------
-- @brief [高级设置]点击事件
-- @date add by Arthur(lijiaxiang) on 2020/6/11
--        @param  send:　       页签按钮
--        @param  eventType:    点击事件
--        @return nil
---------------------------------------------------------
function SettingView:onSelectDetailTag(send, eventType)
    local name = send:getName()
    local style = CF.StringTool.getNumberSuffixByString(name)
    self:setDetailTagSelected(SELECTE_BOX_GROUPS.STYLE_SELECT, style)
    self:moveInDetailAnimation()
    self:initCurrLayer(style)
    self:hideAllDetailLayer()
    if self[SELECTE_BOX_GROUPS.SET_DETAIL..style] then
        if style == 6 then
            self:initYunyinBtns()
            if not cc.UserDefault:getInstance():getBoolForKey(FINGER_EXCHANGE, false) then
                cc.UserDefault:getInstance():setBoolForKey(FINGER_EXCHANGE, true)
                self._aniGuide:setVisible(false)
                CF.game:getModule("Setting"):notfiySettingGuideStatus()
            end
            self._btnSave:setVisible(false)
            self._fangan:setVisible(false)
            self[SELECTE_BOX_GROUPS.SET_DETAIL..style]:setVisible(true)
            
            local data = {}
            data.userid = CF.selfPlayerData:getNumberID()
            CF.throwDataManager:throwData(CF.ThrowDataDefine.SettingBtn_Gaoji, data)
        else 
            self[SELECTE_BOX_GROUPS.SET_DETAIL..style]:setVisible(true)
            self._btnSave:setVisible(true)
            self._fangan:setVisible(true)
        end
    end

    self:settingthrowData(name)
end
-- 牌高度/厚度/牌花大小改变
function SettingView:onTouchEventSliderChange(send, event)
    local percent = tonumber(string.format("%.2f", send:getPercent()/100))
    if send:getName() == "_KW_HEIGHT_SLIDER" then
        self:setCustomStyle("CARD_HEIGHT", percent)
    elseif send:getName() == "_KW_WIDTH_SLIDER" then
        self:setCustomStyle("CARD_WIDTH", percent)
    elseif send:getName() == "_KW_WORD_SIZE_SLIDER" then
        self:setCustomStyle("CARD_WORD_SIZE", percent)
    elseif send:getName() == "_KW_EFFECTS_SIZE_SLIDER" then
        self:setCustomStyle("OUT_EFFECTS_SIZE", percent)
        if self._effectsSizeIcon then
            self._effectsSizeIcon:setScale(percent)
        end
    end
    self:setAgentLabel(send, send:getPercent())
    self:settingthrowData(send:getName())
end

---------------------------------------------------------
-- @brief 初始化设置面板详情页展示
-- @date add by Arthur(lijiaxiang) on 2020/6/11
--        @param  tag:　       页签号
--        @return nil
---------------------------------------------------------
function SettingView:initCurrLayer(tag)
    ----如果初始化过就不用初始化
    if self._bInitDetailLayer[tag] then
        return
    end
    self._bInitDetailLayer[tag] = true
    local controlNames = {{"FACE_TYPE", "BODY_TYPE", "BACK_TYPE", "WORD_TYPE"},
        {"TABLE_STYLE"},
        {"OUT_MOVE_STYLE", "INSERT_STYLE", "OUT_STYLE"},
        {"OUT_EFFECTS"},
        {"HAND_STYLE", "HAND_SORT_STYLE", "OUT_TABLE_CARD_STYLE"},
        {}
    }
    if tag == DATAIL_TAGS.ANIMATION then
        self:initAnimationDetailLayer()
        self:initInsertAnimationDetailLayer()
    end
    for _,v in pairs(controlNames[tag]) do
        self:setDetailTagActive(v)
        self:setDetailTagSelected(SELECTE_BOX_GROUPS[v], self._config[v])
    end
    self:refreshCardLayer(self._config)
end

-- @brief 初始化详情页: 动画
function SettingView:initInsertAnimationDetailLayer()
    --插牌动画效果
    local docName = {"Ios_shezhi_charu", "Ios_shezhi_bucha"}
    local index = 1
    while true do
        if not self[SELECTE_BOX_GROUPS.INSERT_STYLE..index] or not docName[index] then
            break
        end
        local params = {
            path = "res/animation/Mahjong/Base/"..docName[index].."/",
            ske = docName[index].."_ske.json",
            tex = docName[index].."_tex.json",
            armatureName = "Armature",
            dragonBonesName = docName[index],
            animationName = "newAnimation"
        }
        local ani, _ = display.playDargonBonesAnimByTimes(params, 0)
        local aniBg = self[SELECTE_BOX_GROUPS.INSERT_STYLE..index]:getChildByName(KW_SELECT_IMG)
        if aniBg and ani then
            aniBg:addChild(ani)
        end
        index = index + 1
    end
end

function SettingView:initAnimationDetailLayer()
    --出牌线路动画效果
    local docName = {"cpgj_ani_arc", "cpgj_ani_line"}
    local index = 1
    while true do
        if not self[SELECTE_BOX_GROUPS.OUT_MOVE_STYLE..index] or not docName[index] then
            break
        end
        local params = {
            path = "res/animation/Mahjong/Base/"..docName[index].."/",
            ske = docName[index].."_ske.json",
            tex = docName[index].."_tex.json",
            armatureName = "Armature",
            dragonBonesName = docName[index],
            animationName = "newAnimation"
        }
        local ani, _ = display.playDargonBonesAnimByTimes(params, 0)
        local aniBg = self[SELECTE_BOX_GROUPS.OUT_MOVE_STYLE..index]:getChildByName(KW_SELECT_IMG)
        if aniBg and ani then
            aniBg:addChild(ani)
        end
        index = index + 1
    end
end
-- @brief 隐藏所有设置面板详情页
function SettingView:hideAllDetailLayer()
    local index = 1
    while true do
        if not self[SELECTE_BOX_GROUPS.SET_DETAIL..index] then
            break
        end
        self[SELECTE_BOX_GROUPS.SET_DETAIL..index]:setVisible(false)
        index = index + 1
    end
end
----------------------------------------------------------------------------------------------------------------------------------------------------
function SettingView:refreshCardLayer(cusData)
    if self._bInitDetailLayer[DATAIL_TAGS.MAH] then
        self:setCardHeightSlideUI(string.format("%.2f", cusData.CARD_HEIGHT))
        self:setCardWidthSliderUI(string.format("%.2f", cusData.CARD_WIDTH))
        self:setCardWordSizeSlideUI(string.format("%.2f", cusData.CARD_WORD_SIZE))
        self._insideShowMah:setConfig(self:switchToNormalKey(cusData))
        self._outShowMah:setConfig(self:switchToNormalKey(cusData))
    end
    if self._bInitDetailLayer[DATAIL_TAGS.EFFECTS] then
        self:setOutEffectsSizeSlideUI(cusData.OUT_EFFECTS_SIZE)
    end
    if self._bInitDetailLayer[DATAIL_TAGS.TABLE] then
        if self._scanTableColorImg then
            self._scanTableColorImg:loadTexture(KW_TEXTUTRE_LIST["TABLE_STYLE"][1]..cusData.TABLE_STYLE..KW_TEXTUTRE_LIST["TABLE_STYLE"][2], ccui.TextureResType.plistType)
        end
    end
    local controlNames = {{"FACE_TYPE", "BODY_TYPE", "BACK_TYPE", "WORD_TYPE"},
        {"TABLE_STYLE"},
        {"OUT_MOVE_STYLE", "INSERT_STYLE", "OUT_STYLE"},
        {"OUT_EFFECTS"},
        {"HAND_STYLE", "HAND_SORT_STYLE"},
        {}
    }
    for tag = DATAIL_TAGS.MAH, DATAIL_TAGS.HAND do
        if self._bInitDetailLayer[tag] then
            for _,v in pairs(controlNames[tag]) do
                if cusData[v] then
                    self:setDetailTagSelected(SELECTE_BOX_GROUPS[v], self:realIndexSwitchToLocalIndex(v, cusData[v]))
                end
            end
        end
    end
end
---设置用户自定义
function SettingView:setCustomStyle(tagName, realIndex)
    self._config[tagName] = realIndex
    self:jumpToCustomBtn()
    self._insideShowMah:setConfig(self:switchToNormalKey(self._config))
    self._outShowMah:setConfig(self:switchToNormalKey(self._config))
    if self._scanTableColorImg then
        self._scanTableColorImg:loadTexture(KW_TEXTUTRE_LIST["TABLE_STYLE"][1]..self._config.TABLE_STYLE..KW_TEXTUTRE_LIST["TABLE_STYLE"][2], ccui.TextureResType.plistType)
    end
end
---保存用户自定义
function SettingView:onBtnSaveCustomStyle(send, eventType)
    local setFunc = {
        WORD_TYPE       =   function(settingData, style) settingData:setWordType(style) end,
        BACK_TYPE       =   function(settingData, style) self:setBackType(settingData, style) end,
        BODY_TYPE       =   function(settingData, style) settingData:setBodyType(style) end,
        FACE_TYPE       =   function(settingData, style) settingData:setFaceType(style) end,
        TABLE_STYLE     =   function(settingData, style) self:setMahTableStyle(settingData, style) end,
        OUT_MOVE_STYLE  =   function(settingData, style) settingData:setOutMoveStyle(style) end,
        OUT_STYLE       =   function(settingData, style) settingData:setOutStyle(style) end,
        OUT_EFFECTS     =   function(settingData, style) settingData:setOutEffects(style) end,
        HAND_STYLE      =   function(settingData, style) settingData:setHandStyle(style) end,
        HAND_SORT_STYLE =   function(settingData, style) settingData:setHandSortStyle(style) end,
        CARD_HEIGHT     =   function(settingData, style) settingData:setCardHeight(style) end,
        CARD_WIDTH      =   function(settingData, style) settingData:setCardWidth(style) end,
        CARD_WORD_SIZE  =   function(settingData, style) settingData:setCardWordSize(style) end,
        OUT_TABLE_CARD_STYLE = function(settingData, style) settingData:setOutTableCardStyle(style) end,
        INSERT_STYLE    =   function(settingData, style) settingData:setInsertStyle(style) end,
        OUT_EFFECTS_SIZE  =   function(settingData, style) settingData:setMahEffectsSize(style) end,
    }
    for k,v in pairs(setFunc) do
        if self._config[k] then
            v(CF.settingData, self._config[k])
        end
    end
    if self._customIndex then
        CF.settingData:setCustonTypeIndex(self._customIndex)
    end
    CF.settingData:setPlayerType(0)
    send:setVisible(false)
    CF.TipTool.showToast("当前使用改为自定义", 3)
end

---设置用户自定义界面
function SettingView:setPlayerType(realIndex, sender)
    CF.settingData:setPlayerType(realIndex)
    local cusData, bDefault = CF.settingData:getDefaultData(realIndex)
    if bDefault and CF.settingData:getCustonTypeIndex() == 0 then
        self:setDetailTagActive("PLAYER_TYPE")
    end
    if self._btnPlayerTypeSave then
        self._btnPlayerTypeSave:setVisible(false)
    end
    self._config = clone(cusData)
    self:refreshCardLayer(cusData)
    if sender and sender:getChildByName(KW_PLAYER_TYPE_TEXT) then
        CF.TipTool.showToast("当前使用改为"..sender:getChildByName(KW_PLAYER_TYPE_TEXT):getString(), 1)
    end
end
--- 
function SettingView:jumpToCustomBtn()
    if self["_playerType_"..self._customIndex] then
        self["_playerType_"..self._customIndex]:setVisible(true)
        local customLabel = self["_playerType_"..self._customIndex]:getChildByName(KW_PLAYER_TYPE_TEXT)
        if customLabel then
            customLabel:setString("自定义")
        end
    end
    if self._btnPlayerTypeSave then
        self._btnPlayerTypeSave:setVisible(false)
    end
    self:setDetailTagSelected(SELECTE_BOX_GROUPS["PLAYER_TYPE"], self._customIndex)
end
---设置手牌高度滑动条
function SettingView:setCardHeightSlideUI(value)
    if self._heightSlider then
        self._heightSlider:setPercent(value*100)
        self:setAgentLabel(self._heightSlider, value*100)
    end
end
---设置手牌厚度滑动条
function SettingView:setCardWidthSliderUI(value)
    if self._widthSlider then
        self._widthSlider:setPercent(value*100)
        self:setAgentLabel(self._widthSlider, value*100)
    end
end
---设置手牌牌花大小滑动条
function SettingView:setCardWordSizeSlideUI(value)
    if self._wordSizeSlider then
        self._wordSizeSlider:setPercent(value*100)
        self:setAgentLabel(self._wordSizeSlider, value*100)
    end
end

function SettingView:setOutEffectsSizeSlideUI(value)
    if self._effectsSizeSlider then
        if value then
            value = string.format("%.2f", value)
            self._effectsSizePanel:setVisible(true)
            self._effectsSizeSlider:setPercent(value*100)
            self:setAgentLabel(self._effectsSizeSlider, value*100)
            self._effectsSizeIcon:setScale(value)
        else
            self._effectsSizePanel:setVisible(false)
        end
    end
end

function SettingView:setAgentLabel(sender, value)
    if not sender or not value then return end
    local label = sender:getChildByName(KW_AGENT_TEXT)
    if label then
        label:setString(value .. "%")
    end
end
----------------------------------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------
-- @brief 通过tagName设置一组tag的选中状态 (如:{self._styleSelect_1, self._styleSelect_2})
-- @date add by Arthur(lijiaxiang) on 2020/6/11
--        @param  tagName:　e.g. "_styleSelect_"
--        @param  currIndex:　当前选中的Index, -1为全不选
--        @return nil
---------------------------------------------------------
function SettingView:setDetailTagSelected(tagName, currIndex)
    if not currIndex then return end
    local index = 1
    if not self[tagName..currIndex] and currIndex ~= -1 then
        currIndex = 1
    end 
    while true do
        if not self[tagName..index] then
            break
        end
        self[tagName..index]:setTouchEnabled(index ~= currIndex)
        local flagImg = self[tagName..index]:getChildByName(KW_SELECT_FLAG)
        if flagImg then
            flagImg:setVisible(index == currIndex)
        end
        local flagImgBg = self[tagName..index]:getChildByName(KW_SELECT_FLAG_BG)
        if flagImgBg then
            flagImgBg:setVisible(index == currIndex)
        end
        local customLabel = self[tagName..index]:getChildByName(KW_PLAYER_TYPE_TEXT)
        if customLabel then
            customLabel:setTextColor(index == currIndex and TEXT_COLOR_SELECTED or TEXT_COLOR_NORMAL)
        end
        index = index + 1
    end
end

function SettingView:showLeftTime2(node, showImg, deadTime)
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

function SettingView:setDetailTagActiveTime2(tagKey, index, node)
    local tagInfo = {
        ["TABLE_STYLE"] = {posY = 60, fontSize = 32},
        ["BACK_TYPE"] = {posY = -10, fontSize = 24}
    }
    local yPos = tagInfo[tagKey] and tagInfo[tagKey].posY or 0
    local fontSize = tagInfo[tagKey] and tagInfo[tagKey].fontSize or 32
    local propID, leftTime = CF.game:getModule("Setting"):getSkinBundlePropInfo(tagKey, index)
    if propID ~= 0 then
        local showImg = node:getChildByName(KW_SELECT_IMG)
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
                    self:showLeftTime2(textTime, showImg, leftTime)
                end
            end
        else
            if showImg then
                showImg:setGrayedAndEnabled(true)
            end
        end
    end
end

---------------------------------------------------------
-- @brief 通过tagName设置一组tag的展示个数及内容
-- @date add by Arthur(lijiaxiang) on 2020/6/11
--        @param  tagKey:　e.g. "STYLE_SELECT"
--        @return nil
---------------------------------------------------------
function SettingView:setDetailTagActive(tagKey)
    local listTbl = CF.settingData:getConfigByKey(tagKey)
    if tagKey == "TABLE_STYLE" then
        local x = math.floor((#listTbl + 1) / 2)
        self._tableStyleList:setInnerContainerSize(cc.size(1200, 30 + 330 * x))
        self._tableStyleList:setTouchEnabled(#listTbl > 6)
        for i = 1, #listTbl do
            local n = math.floor((i + 1) / 2) 
            self["_tableStyle_" ..i]:setPositionY(30 + 330 * x - 330 * n)
        end
    end
    local index = 1
    while true do
        if not self[SELECTE_BOX_GROUPS[tagKey]..index] then
            break
        end
        self[SELECTE_BOX_GROUPS[tagKey]..index]:setVisible(listTbl and listTbl[index] and true or false)
        local showImg = self[SELECTE_BOX_GROUPS[tagKey]..index]:getChildByName(KW_SELECT_IMG)
        if listTbl and listTbl[index] and showImg and KW_TEXTUTRE_LIST[tagKey] then
            local imgName = KW_TEXTUTRE_LIST[tagKey][1]..listTbl[index]..KW_TEXTUTRE_LIST[tagKey][2]
            if cc.SpriteFrameCache:getInstance():getSpriteFrame(imgName) then
                showImg:loadTexture(imgName, ccui.TextureResType.plistType)
                self:setDetailTagActiveTime2(tagKey, listTbl[index], self[SELECTE_BOX_GROUPS[tagKey]..index], showImg)
            else
                self[SELECTE_BOX_GROUPS[tagKey]..index]:setVisible(false)
            end
        end
        local customLabel = self[SELECTE_BOX_GROUPS[tagKey]..index]:getChildByName(KW_PLAYER_TYPE_TEXT)
        if customLabel then
            if self._customIndex == 0 and listTbl and not listTbl[index] then
                self._customIndex = index
            end
            local btnLabelText = CF.settingData:getConfigByKey("TAB_LABEL_TEXT")
            local labelText = btnLabelText[index] or ""
            customLabel:setString(labelText)
        end
        index = index + 1
    end
end
---------------------------------------------------------
-- @brief 将实际的枚举值转化为当前按钮的index (如:当前牌背有{2,3,5}, 该函数将实际的5转化为当前按钮index, 即为3) 
-- @date add by Arthur(lijiaxiang) on 2020/6/11
--        @param  tagKey:　e.g. "STYLE_SELECT"
--        @param  realIndex:　实际的枚举值
--        @return 当前按钮的index
---------------------------------------------------------
function SettingView:realIndexSwitchToLocalIndex(tagKey, realIndex)
    if tagKey == "PLAYER_TYPE" and realIndex == 0 then
        return self._customIndex
    end
    local listTbl = CF.settingData:getConfigByKey(tagKey)
    for k,v in pairs(listTbl) do
        if v == realIndex and k ~= "normal" then
            return k
        end
    end
    return 1
end
---------------------------------------------------------
-- @brief 将当前按钮的index转化为实际的枚举值 (如:当前牌背有{2,3,5}, 该函数将当前按钮index 3转化为实际的枚举值, 即为5) 
-- @date add by Arthur(lijiaxiang) on 2020/6/11
--        @param  tagKey:　e.g. "STYLE_SELECT"
--        @param  localIndex:　当前按钮index
--        @return 实际的枚举值
---------------------------------------------------------
function SettingView:localIndexSwitchToRealIndex(tagKey, localIndex)
    if tagKey == "PLAYER_TYPE" and localIndex == self._customIndex then
        return 0
    end    
    local listTbl = CF.settingData:getConfigByKey(tagKey)
    return listTbl[localIndex] or listTbl[1] or 1
end
---------转换成麻将层的key-value结构
function SettingView:switchToNormalKey(cusData)
    local cfg = {}
    cfg.mahShapeType = cusData.BODY_TYPE
    cfg.mahLightType = cusData.FACE_TYPE
    cfg.mahBackColorType = cusData.BACK_TYPE
    cfg.mahFaceType = cusData.WORD_TYPE
    cfg.mahFaceSizeRatio = cusData.CARD_WORD_SIZE
    cfg.mahHeightRatio = cusData.CARD_HEIGHT
    cfg.mahThickRatio  = cusData.CARD_WIDTH
    cfg.combLieType  = cusData.HAND_STYLE
    cfg.handAreaPlaceType  = cusData.HAND_SORT_STYLE
    cfg.mahOutEffectsSize = cusData.OUT_EFFECTS_SIZE
    return cfg
end
-- 刘海屏适配
function SettingView:adaptForLiuHai(notchWidth)
    notchWidth = notchWidth or display.notchWidth
    if notchWidth <= 0 then
        return
    end

    for i = 1, 6 do
        if self["_styleSelect_"..i] then
            self["_styleSelect_"..i]:setPositionX(self["_styleSelect_"..i]:getPositionX() + notchWidth)
        end
    end
    if self._panaelSetDetail then
        self._panaelSetDetail:setPositionX(self._panaelSetDetail:getPositionX() + notchWidth)
    end
    if self._btnDismiss then
        self._btnDismiss:setPositionX(self._btnDismiss:getPositionX() + notchWidth)
    end
    if self._btnsPanel then
        self._btnsPanel:setPositionX(self._btnsPanel:getPositionX() + notchWidth)
    end
    if self._btnBackNew then
        self._btnBackNew:setPositionX(self._btnBackNew:getPositionX() + notchWidth)
    end
    if self._btnClose then
        self._btnClose:setPositionX(self._btnClose:getPositionX() + notchWidth)
    end
    if self._panaelSetSwitch then
        self._panaelSetSwitch:setPositionX(self._panaelSetSwitch:getPositionX() + notchWidth)
    end
    if self._settingRoot then
        local oldSize = self._settingRoot:getContentSize()
        self._settingRoot:setContentSize(cc.size(oldSize.width + notchWidth, oldSize.height))
    end
end

---保存用户自定义
function SettingView:onBtnSave(send, eventType)
    local isDefaultType = true
    if self["_playerType_1"] then
        local selectImg = self["_playerType_1"]:getChildByName("_KW_TYPE_SELECT_IMG")
        if selectImg and selectImg:isVisible() == false then
            isDefaultType = false
        end
    end

    local setFunc = {
        WORD_TYPE       =   function(settingData, style) settingData:setWordType(style) end,
        BACK_TYPE       =   function(settingData, style) self:setBackType(settingData, style) end,
        BODY_TYPE       =   function(settingData, style) settingData:setBodyType(style) end,
        FACE_TYPE       =   function(settingData, style) settingData:setFaceType(style) end,
        TABLE_STYLE     =   function(settingData, style) self:setMahTableStyle(settingData, style) end,
        OUT_MOVE_STYLE  =   function(settingData, style) settingData:setOutMoveStyle(style) end,
        OUT_STYLE       =   function(settingData, style) settingData:setOutStyle(style) end,
        OUT_EFFECTS     =   function(settingData, style) settingData:setOutEffects(style) end,
        HAND_STYLE      =   function(settingData, style) settingData:setHandStyle(style) end,
        HAND_SORT_STYLE =   function(settingData, style) settingData:setHandSortStyle(style) end,
        CARD_HEIGHT     =   function(settingData, style) settingData:setCardHeight(style) end,
        CARD_WIDTH      =   function(settingData, style) settingData:setCardWidth(style) end,
        CARD_WORD_SIZE  =   function(settingData, style) settingData:setCardWordSize(style) end,
        OUT_TABLE_CARD_STYLE = function(settingData, style) settingData:setOutTableCardStyle(style) end,
        INSERT_STYLE    =   function(settingData, style) settingData:setInsertStyle(style) end,
        OUT_EFFECTS_SIZE  =   function(settingData, style) settingData:setMahEffectsSize(style) end,
    }
    for k,v in pairs(setFunc) do
        if self._config[k] then
            v(CF.settingData, self._config[k])
        end
    end

    if isDefaultType == false then --当前设置不是默认方案
        
        if self._customIndex then
            CF.settingData:setCustonTypeIndex(self._customIndex)
        end
        CF.settingData:setPlayerType(0)
    end
    CF.TipTool.showToast("保存成功!", 3)
end

function SettingView:setBackType(settingData, style)
    if XH.lobby:getModule("SkinBundle") then
        local propID = CF.game:getModule("Setting"):getSkinBundlePropInfo("BACK_TYPE", style)
        XH.lobby:getModule("SkinBundle"):setPropEquipped(XH.XGSJ_PROP_ID.MAH, propID ~= 0)
    end
    settingData:setBackType(style)
end

function SettingView:setMahTableStyle(settingData, style)
    if XH.lobby:getModule("SkinBundle") then
        local propID = CF.game:getModule("Setting"):getSkinBundlePropInfo("TABLE_STYLE", style)
        XH.lobby:getModule("SkinBundle"):setPropEquipped(XH.XGSJ_PROP_ID.TABLE, propID ~= 0)
    end
    settingData:setMahTableStyle(style)
end

return SettingViewA�