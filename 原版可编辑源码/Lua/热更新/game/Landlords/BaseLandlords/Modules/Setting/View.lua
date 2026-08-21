local SettingView           = CF.gameClass("SettingView", "game.GameBase.Modules.Setting.View")
local KW_SELECT_FLAG        = "KW_IMG_FLAG"
local KW_SWITCH_OFF_PNG     = "landlords_set_btn_off.png"
local KW_SWITCH_NO_PNG      = "landlords_set_btn_no.png"
local KW_QUIT_BTN_TEXTUTRE  = "landlords_set_btn_quit.png"

local KW_SWITCH_OFF_PNG_3 = "landlords_set_btn_woman.png"                --女(出牌语音)
local KW_SWITCH_NO_PNG_3 = "landlords_set_btn_man.png"                   --男 

function SettingView:ctor(param)
    param = param or {}
    SettingView.super.ctor(self, param)

    self._tableStyleVarNames = { "_tableStyle_1", "_tableStyle_2", "_tableStyle_3","_tableStyle_4", "_tableStyle_5" }
    self._backStyleVarNames  = { "_cardBack_1", "_cardBack_2" }
    self._switchNames = { "_yxImage", "_fyImage", "_yyImage","_clearImage","_cpyyImage" }

    if XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.TABLE) then
        if CF.settingData:getLandlordsTableStyle() ~= CF.settingData.tagInfo.TABLE_STYLE.index then
            CF.settingData:setLandlordsTableStyle(CF.settingData.tagInfo.TABLE_STYLE.index)
        end
    end
    if XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.POKER) then
        if CF.settingData:getLandlordsBackStyle() ~= CF.settingData.tagInfo.BACK_TYPE.index then
            CF.settingData:setLandlordsBackStyle(CF.settingData.tagInfo.BACK_TYPE.index)
        end
    end
    self:initUI()
end

function SettingView:getCSBPath()
    return "res/cocosStudio/Landlords/GameLayer/CSB/Setting.csb"
end

function SettingView:getBindingInfo()
    return {
        ["_KW_PANAEL_BG"] = {varName = "_settingBg", onTouchEnded = "onBtnClose"},
        ["_KW_PANAEL_SET_ROOT"] = {varName = "_settingRoot"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_TEXT_GAME_VER"] = {varName = "_gameVer"},
        ["_KW_TEXT_LOBBY_VER"] = {varName = "_lobbyVer"},
        ["_KW_BTN_DISMISS"] = {varName = "_btnDismiss", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onDismiss"},
        ["_KW_PANEL_BTN_GOLDROOM"] = {varName = "_goldRoomPanel"},
        ["_KW_PANEL_BTN_BOXROOM"] = {varName = "_boxRoomPanel"},
        ["_KW_BTN_CHANGE_TABLE"] = {varName = "_btnChangeTabel", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onChangeTable"},
        ["_KW_BTN_BACK_NEW"] = {varName = "_btnBackNew", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onReturnLobby"},
        ["_KW_IMG_YX_1"] = {varName = "_yxImage", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouched"},
        ["_KW_IMG_FY_2"] = {varName = "_fyImage", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouched"},
        ["_KW_IMG_YY_3"] = {varName = "_yyImage", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouched"},
        ["_KW_IMG_CJ_4"] = {varName = "_clearImage", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouched"},
        ["_KW_IMG_CPYY_5"] = { varName = "_cpyyImage",type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouched"},
        ["_KW_IMG_CARD_BACK_1"] = {varName = "_cardBack_1", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onselectBackStyle"},
        ["_KW_IMG_CARD_BACK_2"] = {varName = "_cardBack_2", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onselectBackStyle"},
        ["_KW_IMG_CARD_BACK_3"] = {varName = "_cardBack_3"},
        ["_KW_IMG_TABLE_BG_"] = {
            varName = "_tableStyle_",
            beginIndex = 1,
            endIndex = 5,
            type = CF.UI_TYPE.IMAGE_TOBUTTON,
            style = CF.UIButton.CLICK_STYLE.NOEFFECT,
            onTouchEnded = "onselectLandlordsTableStyle"
        }
    }
end

function SettingView:initUI()
    self:selectLandlordsBackStyle(CF.settingData:getLandlordsBackStyle())
    self:selectLandlordsFaceStyle(CF.settingData:getLandlordsFaceStyle())
    self:selectLandlordsTableStyle(CF.settingData:getLandlordsTableStyle())

    for k, _ in pairs(self._switchNames) do
        self:selectLandlordsSwitchStyle(k, true)
    end

    if CF.roomData:isGoldRoom() then
        local isNewGold = CF.roomData:isNewGoldRoom()
        self._btnBackNew:setVisible(isNewGold)    
        self._goldRoomPanel:setVisible(not isNewGold)

        --游戏中不能换桌
        local isGameStart = false
        local selfPlayer = CF.roomData:getSelfPlayerData()
        if selfPlayer then
            if selfPlayer:getStateEx() == selfPlayer.USER_STATEEX.psPlaying then
                isGameStart = true
            end
        end
        self._btnChangeTabel:setTouchEnabled(not isGameStart)
        self._btnChangeTabel:setBright(not isGameStart)
        self._btnDismiss:setVisible(false)
    else
        self._btnDismiss:setVisible(true)
        self._btnDismiss:loadTextureNormal(KW_QUIT_BTN_TEXTUTRE, ccui.TextureResType.plistType)
    end
    self:setVersion("1.0.0", "1.0.0")
    self:setDetailTagActiveTime("TABLE_STYLE")
    self:setDetailTagActiveTime("BACK_TYPE")
end

function SettingView:setVersion(gameVer, lobbyVer)
    self._gameVer:setString("游戏版本: " .. gameVer)
    self._lobbyVer:setString("大厅版本: " .. lobbyVer)
end

function SettingView:selectLandlordsBackStyle(style)
    for k, v in pairs(self._backStyleVarNames) do
        self[v]:setVisible(true)
        local flagImg = self[v]:getChildByName(KW_SELECT_FLAG)
        flagImg:setTouchEnabled(k == style)
        flagImg:setVisible(k == style)
    end
end

function SettingView:selectLandlordsFaceStyle(style)
end

function SettingView:selectLandlordsTableStyle(style)
    for k, v in pairs(self._tableStyleVarNames) do
        local flagImg = self[v]:getChildByName(KW_SELECT_FLAG)
        flagImg:setTouchEnabled(k == style)
        flagImg:setVisible(k == style)
    end
end

function SettingView:selectLandlordsSwitchStyle(style, isFirst)
    if style then
        local settingData = CF.settingData
        local switch = self[self._switchNames[style]]

        local isEnableTab = {
            function(settingData2) return settingData2:getSoundPercent() > 0 end,
            function(settingData2) return not settingData2:getLandlordsIsNormalVoice() end,
            function(settingData2) return settingData2:getMusicPercent() > 0 end,
            function(settingData2) return settingData2:getIsClearModel() end,
            function(settingData2)return settingData2:getVoiceType() end,
        }

        local setData = {
            function(data) settingData:setSoundPercent(data and 100 or 0) end,
            function(data) settingData:setLandlordsIsNormalVoice(not data) end,
            function(data) settingData:setMusicPercent(data and 100 or 0) end,
            function(data) settingData:setIsClearModel(data) end,
            function(data) settingData:setVoiceType(data) end,
        }

        local isEnabled = isEnableTab[style](settingData)
        if not isFirst then
            isEnabled = not isEnabled
        end

        if isEnabled then
            if style == 5 then
                switch:loadTexture(KW_SWITCH_NO_PNG_3, ccui.TextureResType.plistType)
            else 
                switch:loadTexture(KW_SWITCH_NO_PNG, ccui.TextureResType.plistType)
            end
        else
            if style == 5 then
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

--设置牌背
function SettingView:onselectLandlordsBackStyle(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local name = send:getName()

    local style = CF.StringTool.getNumberSuffixByString(name)
    self:selectLandlordsBackStyle(style)
    CF.settingData:setLandlordsBackStyle(style)
end

--设置牌面
function SettingView:onselectLandlordsFaceStyle(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local name = send:getName()

    local style = CF.StringTool.getNumberSuffixByString(name)
    self:selectLandlordsFaceStyle(style)
    CF.settingData:setLandlordsFaceStyle(style)
end

--设置桌布
function SettingView:onselectLandlordsTableStyle(send, eventType)
    local name = send:getName()
    self:settingThrowData(name)
    if self:checkXGProp(name) then
        return
    end
    local style = CF.StringTool.getNumberSuffixByString(name)
    if CF.settingData:checkVIPTable(style) then
        return
    end
    self:selectLandlordsTableStyle(style)
    if XH.lobby:getModule("SkinBundle") then
        -- 这边暂时只能特判
        XH.lobby:getModule("SkinBundle"):setPropEquipped(XH.XGSJ_PROP_ID.TABLE, style == CF.settingData.tagInfo.TABLE_STYLE.index)
    end
    CF.settingData:setLandlordsTableStyle(style)
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.YUEJU_17)
end

--设置声音,音效....
function SettingView:onTouched(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local name = send:getName()
    local style = tonumber(CF.StringTool.getNumberSuffixByString(name) or 0)
    self:selectLandlordsSwitchStyle(style)
    self:settingThrowData(name)
end

--埋点数据上抛
function SettingView:settingThrowData(name)
    if name == nil then
        return
    end
    if name == "_KW_IMG_YX_1" then --音效
        CF.game:getModule("IconAnimationManager"):reportData("菜单_音效")
    elseif name == "_KW_IMG_FY_2" then --方言
        CF.game:getModule("IconAnimationManager"):reportData("菜单_方言")
    elseif name == "_KW_IMG_YY_3" then --音乐
        CF.game:getModule("IconAnimationManager"):reportData("菜单_音乐")
    elseif name == "_KW_IMG_CJ_4" then --纯洁模式
        CF.game:getModule("IconAnimationManager"):reportData("菜单_纯净模式")
    elseif name == "_KW_IMG_CPYY_5" then --提示音
        CF.game:getModule("IconAnimationManager"):reportData("菜单_语音")
    elseif string.match(name, "_KW_IMG_CARD_BACK_") then --牌背
        CF.game:getModule("IconAnimationManager"):reportData("菜单_牌背")
    elseif string.match(name, "_KW_IMG_TABLE_BG_") then --桌布
        CF.game:getModule("IconAnimationManager"):reportData("菜单_桌布")
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

function SettingView:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self)
    self:moveInAnimation()
end

--解散
function SettingView:onDismiss(send, eventType)
    CF.game:getModule("IconAnimationManager"):reportData("菜单_解散")
    CF.game:getModule("Setting"):doDismiss()
    self:moveOutAnimation()
end

function SettingView:onReturnLobby(send, eventType)
    CF.game:getModule("IconAnimationManager"):reportData("菜单_返回大厅")
    if CF.selfPlayerData:getIsNewUserGuide() then
        CF.TipTool.showTip({
            bTop = true,
            type = CF.TIP_LAYER_TYPE.OK_CANCEL_NO_CLOSE,
            funcOK = function(  )
                CF.getLobbyModule("Guide"):reqSetNewUserGuideState(CF.getLobbyModule("Guide").GUIDE_STATE["end"])
                CF.game:getModule("Setting"):doReturnToLobby()
                self:moveOutAnimation()
            end,
        }, "退出引导将无法获得丰富奖励，是否确认退出？")
    else
        CF.game:getModule("Setting"):doReturnToLobby()
        self:moveOutAnimation()
    end
end

function SettingView:onChangeTable(send, eventType)
    CF.game:getModule("Setting"):doChangeTable()
    self:close()
    CF.game:getModule("IconAnimationManager"):reportData("菜单_换桌")
end

--关闭按钮
function SettingView:onBtnClose(send, eventType)
    self:moveOutAnimation()
end

function SettingView:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, CF.ZORDER.WINDOW)
    self:moveInAnimation()
end

--设置牌背
function SettingView:onselectBackStyle(send, eventType)
    local name = send:getName()
    self:settingThrowData(name)
    if self:checkXGProp(name) then
        return
    end
    local style = CF.StringTool.getNumberSuffixByString(name)
    self:selectLandlordsBackStyle(style)
    if XH.lobby:getModule("SkinBundle") then
        -- 这边暂时只能特判
        XH.lobby:getModule("SkinBundle"):setPropEquipped(XH.XGSJ_PROP_ID.POKER, style == CF.settingData.tagInfo.BACK_TYPE.index)
    end
    CF.settingData:setLandlordsBackStyle(style)
end

return SettingView
