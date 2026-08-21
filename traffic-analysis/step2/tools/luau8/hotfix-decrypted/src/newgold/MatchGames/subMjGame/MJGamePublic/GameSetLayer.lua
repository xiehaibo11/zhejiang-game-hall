local GameSetLayer = class("GameSetLayer", cc.load("mvc").ViewBase)

local eventType = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.EventType")
local ExternalFunc = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.ExternalFunc")

--csb文件
GameSetLayer.RESOURCE_FILENAME = "GameSetLayer.csb"

--节点绑定及事件
GameSetLayer.RESOURCE_BINDING = {
    ["Panel_content/panel_gameBg"] = {
        varname = "bgPanel"
    },
    ["Panel_content/panel_gameBg/Panel_bg1"] = {
        varname="setgreenBtn",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },
    ["Panel_content/panel_gameBg/Panel_bg2"] = {
        varname="setblueBtn",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },
    ["Panel_content/panel_gameBg/Panel_bg3"] = {
        varname="setredBtn",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },
    ["Panel_content/panel_gameBg/Panel_bg4"] = {
        varname="setBkgBtn4",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },
    ["Panel_content/panel_language/Panel_lanPth"] = {
        varname="setLanPthBtn",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },
    ["Panel_content/panel_language/Panel_lanFy"] = {
        varname="setLanFyBtn",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },

    ["Panel_content/Button_close"] = {
        varname="closeBtn",
        events={
            {event="click",method="on_btn_click"}
        }
    },
    ["Panel_content/Button_FangZhu_dismiss"] = {       -- 房主在游戏开始前解散房间
        varname="FZdismissBtn",
        events={
            {event="click",method="on_btn_click"}
        }
    },
    ["Panel_content/Button_backToLobby"] = {            -- 公用的返回大厅
        varname="backToLobbyBtn",
        events={
            {event="click",method="on_btn_click"}
        }
    },
    ["Panel_content/Button_Log_backToLobby"] = {            -- 公用的返回大厅
        varname="logBackToLobbyBtn",
        events={
            {event="click",method="on_btn_click"}
        }
    },
    ["Panel_content/Button_guest_exit"] = {             -- 游戏未开始时，其他玩家想要退出游戏
        varname="gusetExitBtn",
        events={
            {event="click",method="on_btn_click"}
        }
    },
    ["Panel_content/Panel_GPS"] = {
        varname="GpsPanel",
    },
    ["Panel_content/Panel_GPS/Panel_GPS_Open"] = {             -- GPS——开
        varname="gpsOpenBtn",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },

    ["Panel_content/Panel_GPS/Panel_GPS_Close"] = {             -- GPS——关
        varname="gpsCloseBtn",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },

    ["Panel_content/Button_All_dismiss"] = {             -- 游戏开始后，玩家想要申请解散游戏
        varname="allDismissBtn",
        events={
            {event="click",method="on_btn_click"}
        }
    },

    ["Panel_Mask"] = {
        varname="maskPanel",
        events={
            {event="click",method="on_btn_click"}
        }
    },
    ["Panel_content/Button_help"] = {
        varname="helpBtn",
        events={
            {event="click",method="on_btn_click"}
        }
    },
    ["Panel_content/panel_language"] = {
        varname="panelLanguage"
    },
    ["Panel_content/panel_other/Panel_gameEmoji"] = {
        varname="setCloseGameEmoji",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },
    
    ["Panel_content/panel_other/Panel_vibration"] = {
        varname="panelVibration",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },
    
    ["Panel_content/panel_other/Panel_gpsWarning"] = {
        varname="setGpsWarning",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },
    ["Panel_content/panel_other/Panel_bigHandCard"] = {
        varname="setBigHandCard",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },
    ["Panel_content/panel_other/Panel_playerVoiceConfig"] = {
        varname="setPlayerVoiceClose",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },
    
    -----
    -- 过胡
    ["Panel_content/Panel_guohu"] = {
        varname="guohuPanel",
    },
    ["Panel_content/Panel_guohu/Panel_Guohu_Open"] = {             -- 过胡——开
        varname="guohuOpenBtn",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },

    ["Panel_content/Panel_guohu/Panel_Guohu_Close"] = {             -- 过胡——关
        varname="guohuCloseBtn",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },
}

function GameSetLayer:ctor(mainRuler, ...)
    self.FY_CFG = {
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD] = "四川话",
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P2R] = "四川话",
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P3R] = "四川话",
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_4P2R] = "四川话",
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_2P] = "四川话",
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XLCH] = "四川话",
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDZ] = "四川话",
        [g_gameConstant.GAME_PLAY_RULE_SC_LSMJ] = "四川话",
        [g_gameConstant.GAME_PLAY_RULE_SC_PZHMJ] = "四川话",
        [g_gameConstant.GAME_PLAY_RULE_SC_MZMJ] = "四川话",
        [g_gameConstant.GAME_PLAY_RULE_SC_DGKMJ] = "四川话",
        [g_gameConstant.GAME_PLAY_RULE_RCMJ_RCWF] = "四川话",
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_7]  = "四川话",
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_JOKER]  = "四川话",
    }

    self.mainRuler = mainRuler or 0
    GameSetLayer.super.ctor(self, ...)
end
function GameSetLayer:onCreate()
    
    local rootPanel = self.resourceNode_
   
    -- self.dismissBtn:setVisible(not g_gameGlobal:getIsPlayingGameLog() and g_gameGlobal:getVipTableID() and g_gameGlobal:getVipTableID()>0)
    -- self.backToLobbyBtnE:setVisible(self.dismissBtn:isVisible())
    -- self.backToLobbyBtn:setVisible(g_gameGlobal:getIsPlayingGameLog() or not g_gameGlobal:getVipTableID() or g_gameGlobal:getVipTableID()==0)

    --音效滑块
    local effectSlider = g_gameGlobal:findChildWithName(rootPanel, "effectSlider")
    effectSlider:onEvent(handler(self, self.sliderOnEvent))
    --读取本地保存的上次音效数据
    local effectVolume = NG.audioManager:GetSFXVolume()
    effectSlider:setPercent(effectVolume * 100)
    --音效按钮
    local effectBtn = effectSlider:getChildByName("effectBtn")
    effectBtn:setTag(100)
    effectBtn:onTouch(handler(self, self.audioBtnOnEvent))
    if effectVolume == 0 then
        self:btnStateChanged(effectBtn, effectVolume)
    end
    -- 斗十四屏蔽掉该选项
    if g_gameGlobal:getCurrentWanFa().wanfa == g_gameConstant.GAME_PLAY_RULE_SCCP_DSS then 
        self.guohuPanel:setVisible(false)
        self.panelVibration:setVisible(false)
    end 
     
    --音乐滑块
    local musicSlider = g_gameGlobal:findChildWithName(rootPanel, "musicSlider")
    musicSlider:onEvent(handler(self, self.sliderOnEvent))
    --读取本地保存的上次音乐数据
    local musicVolume = NG.audioManager:GetMusicVolume()
    musicSlider:setPercent(musicVolume * 100)
    --音乐按钮
    local musicBtn = musicSlider:getChildByName("musicBtn")
    musicBtn:setTag(100)
    musicBtn:onTouch(handler(self, self.audioBtnOnEvent))
    if musicVolume == 0 then
        self:btnStateChanged(musicBtn, musicVolume, true)
    end

    self:setPanelSelected(self.setLanPthBtn, true)
    self:setPanelSelected(self.setLanFyBtn, false)

    self:setPanelSelected(self.gpsOpenBtn,true)
    self:setPanelSelected(self.gpsCloseBtn,false)
    
    self:setPanelSelected(self.guohuOpenBtn, false)
    self:setPanelSelected(self.guohuCloseBtn, true)

    self.setLanPthBtn:setTouchEnabled(false)
    self.setLanFyBtn:setTouchEnabled(false)

    self.setLanFyBtn:setVisible(false)

    if self.FY_CFG[self.mainRuler] then
        local fyText = self.setLanFyBtn:getChildByName("Text")
        if fyText then
            fyText:setString(self.FY_CFG[self.mainRuler])
        end
        self.setLanFyBtn:setVisible(true)
        self.setLanPthBtn:setTouchEnabled(true)
        self.setLanFyBtn:setTouchEnabled(true)
    end

    local Text_version = self:findChildWithName(self.resourceNode_, "Text_version");
    if Text_version then
        Text_version:setVisible(false)
    end
    self:refreshCheckBox()    
    
    ExternalFunc.addCustomEventListener(
        self,
        eventType.ROOM_QUICK_START_STATE_CHANGED,
        function(evt, data)
            if data == true and not tolua.isnull(self.secOpDialog) then
                self.secOpDialog:removeSelf()
                self.secOpDialog = nil
                self:removeFromParent()
            end
        end
    )
end

function GameSetLayer:updateGameWanFaSetting(isFangZhu,isGameStart )
    
    if not tolua.isnull(self.secOpDialog) then
        self.secOpDialog:removeSelf()
        self.secOpDialog = nil
    end
    
    -- body

    self.isGameStart = isGameStart

    self.isFangZhu = isFangZhu

    if not g_gameGlobal:getIsPlayingGameLog() then 
        if g_gameGlobal:getVipTableID() and g_gameGlobal:getVipTableID() > 0 then 
            self.backToLobbyBtn:setVisible(true)
            if isGameStart then
                self.FZdismissBtn:setVisible(false)
                self.gusetExitBtn:setVisible(false)
                self.allDismissBtn:setVisible(false)
            else
                if isFangZhu then 
                    self.FZdismissBtn:setVisible(true)
                    self.gusetExitBtn:setVisible(false)
                    self.allDismissBtn:setVisible(false)
                else
                    self.FZdismissBtn:setVisible(false)
                    self.gusetExitBtn:setVisible(true)
                    self.allDismissBtn:setVisible(false)
                end 
            end
        else
            self.logBackToLobbyBtn:setVisible(true)
            self.FZdismissBtn:setVisible(false)
            self.gusetExitBtn:setVisible(false)
            self.allDismissBtn:setVisible(false)
            self.backToLobbyBtn:setVisible(false)
        end 
    else
        self.logBackToLobbyBtn:setVisible(true)
        self.FZdismissBtn:setVisible(false)
        self.gusetExitBtn:setVisible(false)
        self.allDismissBtn:setVisible(false)
        self.backToLobbyBtn:setVisible(false)
    end 
    if g_gameGlobal:gettLijiKaiJuState() then
        self.gusetExitBtn:setVisible(false)
        self.FZdismissBtn:setVisible(false)
        self.allDismissBtn:setVisible(false)
        self.backToLobbyBtn:setVisible(false)
        self.logBackToLobbyBtn:setVisible(true)
    end
end

function GameSetLayer:setPanelSelected(configPanel, isSelect)
    if isSelect == nil then isSelect = false end
    if configPanel == nil then return end
    local checkbox = configPanel:getChildByName("CheckBox")
    if checkbox then
        checkbox:setSelected(isSelect)
    end
end


function GameSetLayer:sliderOnEvent(event)
    if event.name == "ON_PERCENTAGE_CHANGED" then
        local target = event.target
        local value = target:getPercent() / 100
        local audioBtn = target:getChildByTag(100)
        self:btnStateChanged(audioBtn, value)
    end
end

function GameSetLayer:audioBtnOnEvent(event)
    if event.name == "ended" then
        local parentSlider = event.target:getParent()
        if parentSlider:getPercent() > 0 then
            parentSlider:setPercent(0)
        elseif parentSlider:getPercent() == 0 then
            parentSlider:setPercent(100)
        end
        local value = parentSlider:getPercent() / 100
        self:btnStateChanged(event.target, value)
    end
end

function GameSetLayer:btnStateChanged(obj, value,isOpenPanel)
    if obj and obj:getName() == "effectBtn" then
        if value > 0  then
            obj:loadTextures("Match/".."set/effectNormal.png", "Match/".."set/effectNormal.png", "", ccui.TextureResType.plistType)
        else
            obj:loadTextures("Match/".."set/effectDisable.png", "Match/".."set/effectDisable.png", "", ccui.TextureResType.plistType)
        end
        NG.audioManager:SetEffectVolume(value)
        g_UserDataTable.effectVolume = value
    elseif obj and obj:getName() == "musicBtn" then
        if value > 0 then
            obj:loadTextures("Match/".."set/musicNormal.png", "Match/".."set/musicNormal.png", "", ccui.TextureResType.plistType)
        else
            obj:loadTextures("Match/".."set/musicDisable.png", "Match/".."set/musicDisable.png", "", ccui.TextureResType.plistType)
        end

        if not isOpenPanel then 
            NG.audioManager:SetMusicVolume(value)
            g_UserDataTable.musicVolume = value
        end 
    end
end

function GameSetLayer:refreshCheckBox()
    self:setPanelSelected(self.setgreenBtn, g_UserDataTable.gameBgColorTypeMJ == 1)
    self:setPanelSelected(self.setblueBtn, g_UserDataTable.gameBgColorTypeMJ == 2)
    self:setPanelSelected(self.setredBtn, g_UserDataTable.gameBgColorTypeMJ == 3)
    self:setPanelSelected(self.setBkgBtn4, g_UserDataTable.gameBgColorTypeMJ == 4)
    

    if self.FY_CFG[self.mainRuler] then
        local isFy = g_gameGlobal:isFyType(self.mainRuler)
        self:setPanelSelected(self.setLanPthBtn, not isFy)
        self:setPanelSelected(self.setLanFyBtn, isFy)
    end

    self:setPanelSelected(self.setCloseGameEmoji, g_UserDataTable.gameEmojClosed == 1)
    self:setPanelSelected(self.setGpsWarning, g_UserDataTable.gpsWarningSwitch == 1)   
    self:setPanelSelected(self.setBigHandCard, g_UserDataTable.bigHandCard == 1)   
    self:setPanelSelected(self.setPlayerVoiceClose, g_UserDataTable.playerVoiceClose == 1)

    self:setPanelSelected(self.gpsOpenBtn, g_UserDataTable.gameGPSSetState)
    self:setPanelSelected(self.gpsCloseBtn, not g_UserDataTable.gameGPSSetState)
    
    self:setPanelSelected(self.guohuOpenBtn, g_UserDataTable.isGuohuNotice)
    self:setPanelSelected(self.guohuCloseBtn, not g_UserDataTable.isGuohuNotice)
    
    self:setPanelSelected(self.panelVibration, g_UserDataTable.vibrateNotify == true)

    -- 金币场隐藏定位开关
    if not tolua.isnull(self.GpsPanel) then
        local vipID = g_gameGlobal:getVipTableID()
        
        local gpsVisible = vipID and vipID > 0 and self.mainRuler ~= g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_2P
        local needHide = self.GpsPanel:isVisible()
        self.GpsPanel:setVisible(gpsVisible)
        if needHide and not gpsVisible and not tolua.isnull(self.guohuPanel) then
            self.guohuPanel:setPositionY(self.guohuPanel:getPositionY() + 60)
            self.guohuPanel:setTouchEnabled(false) --这里禁止点击，不然上移会挡住震动提醒的点击
        end
    end     
end


function GameSetLayer:on_checkbox_touch(event)

    local sender = event.target

    if event.name == "ended" then
        if sender ==  self.setgreenBtn then 
            g_UserDataTable.gameBgColorTypeMJ = 1
            ExternalFunc.sendCustomEvent(eventType.GAME_DESK_BG_CHANGE)
        elseif  sender ==  self.setblueBtn then 
            g_UserDataTable.gameBgColorTypeMJ = 2
            ExternalFunc.sendCustomEvent(eventType.GAME_DESK_BG_CHANGE)
        elseif sender == self.setredBtn then
            g_UserDataTable.gameBgColorTypeMJ = 3
            ExternalFunc.sendCustomEvent(eventType.GAME_DESK_BG_CHANGE)
        elseif sender == self.setBkgBtn4 then
            g_UserDataTable.gameBgColorTypeMJ = 4
            ExternalFunc.sendCustomEvent(eventType.GAME_DESK_BG_CHANGE)
        elseif sender ==  self.setLanPthBtn then 
            if self.FY_CFG[self.mainRuler] then
                g_gameGlobal:setFyType(self.mainRuler, false)
            end
        elseif sender == self.gpsOpenBtn then 
            g_UserDataTable.gameGPSSetState = true
        elseif sender == self.gpsCloseBtn then 
            g_UserDataTable.gameGPSSetState = false 
        elseif sender ==  self.setLanFyBtn then  
            if self.FY_CFG[self.mainRuler] then
                g_gameGlobal:setFyType(self.mainRuler, true)
            end
        elseif  sender ==  self.setCloseGameEmoji then
            g_UserDataTable.gameEmojClosed = (g_UserDataTable.gameEmojClosed + 1)%2
        elseif sender == self.setGpsWarning then
            g_UserDataTable.gpsWarningSwitch = (g_UserDataTable.gpsWarningSwitch + 1)%2
        elseif sender == self.setBigHandCard then
            g_UserDataTable.bigHandCard = (g_UserDataTable.bigHandCard + 1)%2
            --ExternalFunc.sendCustomEvent(eventType.GAME_HANG_BIG_MODEL_CHANGE)
        elseif event.target == self.setPlayerVoiceClose then
            g_UserDataTable.playerVoiceClose = (g_UserDataTable.playerVoiceClose + 1)%2
        
        -- 过胡
        elseif event.target == self.guohuOpenBtn then
            g_UserDataTable.isGuohuNotice = true
        elseif event.target == self.guohuCloseBtn then
            g_UserDataTable.isGuohuNotice = false
        
        elseif event.target == self.panelVibration then
            g_UserDataTable.vibrateNotify = not g_UserDataTable.vibrateNotify
        end
        self:refreshCheckBox()
    end
end

--若只显示一种语言弄个接口
function GameSetLayer:showOneLanguage(textStr)
    local str = "普通话"
    if textStr and #textStr>0 then 
        str = textStr
    end
    local Text = self.setLanPthBtn:getChildByName("Text")
    Text:setString(str)
    self.setLanFyBtn:setVisible(false)
end

function GameSetLayer:on_btn_click(sender)
    if sender == self.closeBtn or sender == self.maskPanel then 
        self:removeSelf()
        return
    elseif sender == self.FZdismissBtn or sender == self.allDismissBtn or sender == self.gusetExitBtn then
        self:closeVipRoom()
        return
    elseif sender == self.backToLobbyBtn or sender == self.logBackToLobbyBtn then
        g_gameGlobal:backToLobby(true)
    elseif sender == self.helpBtn then
        local helpLayer = require("app.lobby.HelpLayer"):create()
        cc.Director:getInstance():getRunningScene():addChild(helpLayer, 301)
    end
    self:refreshCheckBox()
end


function GameSetLayer:closeVipRoom()

    if self.isGameStart then 
        CloseAllPopMsgView()
        if not tolua.isnull(self) then
            self:removeSelf()
        end
        local playerTableOperationMsg = {}
        playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_WAITING_OR_CLOSE_VIP
        playerTableOperationMsg.opValue = 1     --1是请求解散，2是同意解散，3不同意
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
    else 

        local tipStr = "牌局开始前解散房间不会扣除房卡\n\n是否确定解散？"
        if not self.isFangZhu then 
            tipStr = "牌局未开始，您是否退出房间？"
        end 

        self.secOpDialog = ShowConfirmCancelBox(tipStr,  function ( ... )
            -- body

            if not tolua.isnull(self) then
                local vipTableID = g_gameGlobal:getVipTableID()
                if vipTableID then
                    local playerGameOpertaionMsg = {}
                    playerGameOpertaionMsg.opertaionID = g_gameConstant.GAME_OPERATION_APPLY_CLOSE_VIP_ROOM;
                    playerGameOpertaionMsg.opValue= vipTableID
                    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_GAME_OPERTAION, playerGameOpertaionMsg)

                   
                    g_gameGlobal:switchLobbyScene()
                    g_gameGlobal:setIsInPaiZhuo(false)
                end
              
            end
        end)
    end 
end

return GameSetLayer{P