local GameSetLayer = class("GameSetLayer", cc.load("mvc").ViewBase)

local eventType = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.EventType")
local ExternalFunc = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.ExternalFunc")

--csb文件
GameSetLayer.RESOURCE_FILENAME = "poker/pdkGame/PDKGameSetLayer.csb"

--节点绑定及事件
GameSetLayer.RESOURCE_BINDING = {
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
        varname="setbkgBtn4",
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
    }
}

function GameSetLayer:ctor(mainRuler, ...)
    self.FY_CFG = {
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD] = "四川话",
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P2R] = "四川话",
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P3R] = "四川话",
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_4P2R] = "四川话",
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_2P] = "四川话",
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XLCH] = "四川话",
    }

    self.mainRuler = g_gameGlobal:getCurrGameKind()
    GameSetLayer.super.ctor(self, ...)
end
function GameSetLayer:onCreate()
    
    local rootPanel = self.resourceNode_
   
    -- self.dismissBtn:setVisible(not g_gameGlobal:getIsPlayingGameLog() and g_gameGlobal:getVipTableID() and g_gameGlobal:getVipTableID()>0)
    -- self.backToLobbyBtnE:setVisible(self.dismissBtn:isVisible())
    -- self.backToLobbyBtn:setVisible(g_gameGlobal:getIsPlayingGameLog() or not g_gameGlobal:getVipTableID() or g_gameGlobal:getVipTableID()==0)

    --音效滑块
    local effectSlider = g_gameGlobal:findChildWithName(rootPanel, "effectSlider")
    --读取本地保存的上次音效数据
    local effectVolume = g_AudioMgrInst:getSfxVolume()
    effectSlider:setPercent(effectVolume * 100)
    --音效按钮
    local effectBtn = effectSlider:getChildByName("effectBtn")
    effectBtn:setPressedActionEnabled(true)
    effectBtn:setTag(100)
    effectBtn:onTouch(handler(self, self.audioBtnOnEvent))
    if effectVolume == 0 then
        self:btnStateChanged(effectBtn, effectVolume)
    end
    
    --音乐滑块
    local musicSlider = g_gameGlobal:findChildWithName(rootPanel, "musicSlider")
    --读取本地保存的上次音乐数据
    local musicVolume = g_AudioMgrInst:getBgmVolume()
    musicSlider:setPercent(musicVolume * 100)
    --音乐按钮
    local musicBtn = musicSlider:getChildByName("musicBtn")
    musicBtn:setPressedActionEnabled(true)
    musicBtn:setTag(100)
    musicBtn:onTouch(handler(self, self.audioBtnOnEvent))
    if musicVolume == 0 then
        self:btnStateChanged(musicBtn, musicVolume, true)
    end
    musicSlider:onEvent(handler(self, self.sliderOnEvent))
    effectSlider:onEvent(handler(self, self.sliderOnEvent))

    self:setPanelSelected(self.setLanPthBtn, true)
    self:setPanelSelected(self.setLanFyBtn, false)

    self:setPanelSelected(self.gpsOpenBtn,true)
    self:setPanelSelected(self.gpsCloseBtn,false)

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

    --self.setBigHandCard:setVisible(false)

    local Text_version = self:findChildWithName(self.resourceNode_, "Text_version");
    if Text_version then
        Text_version:setVisible(true);
        Text_version:setString( "当前版本："..G_APP_VERSION ..".".. string.format("%02d" , G_RES_VERSION ) )
    end
    self:refreshCheckBox()    
end

function GameSetLayer:updateGameWanFaSetting(isFangZhu,isGameStart )
    
    if not tolua.isnull(self.secOpDialog) then
        self.secOpDialog:removeSelf()
        self.secOpDialog = nil
    end
    
    -- body
    self.isGameStart = isGameStart

    self.isFangZhu = isFangZhu

    local function showBtnByParams(showTable)
        self.logBackToLobbyBtn:setVisible(showTable[1])             -- 返回大厅（中间）
        self.FZdismissBtn:setVisible(showTable[2])                  -- 房主解散
        self.gusetExitBtn:setVisible(showTable[3])                  -- 玩家退出
        self.allDismissBtn:setVisible(showTable[4])                 -- 游戏中解散
        self.backToLobbyBtn:setVisible(showTable[5])                -- 返回大厅
    end

    local showModel = {
        -- 金币场 or 回放记录（只有中间返回大厅一个按钮）
        [1] = {true,false,false,false,false},
        -- 游戏未开始，且是房主
        [2] = {false,true,false,false,true},
        -- 游戏未开始，非房主
        [3] = {false,false,true,false,true},
        -- 游戏开始，非金币非回放
        [4] = {false,true,false,false,true},
    }

    local function getShowKinds()
        local kind 

        if g_gameGlobal:getIsPlayingGameLog() or g_gameGlobal:getVipTableID() == 0 then 
            kind = 1
        elseif  g_gameGlobal:getVipTableID() > 0 then 
            if isGameStart then 
                kind = 4
            else 
                if isFangZhu then 
                    kind = 2
                else
                    kind = 3
                end 
            end 
        end 

        return kind 
    end 

    local type = getShowKinds()

    showBtnByParams(showModel[type])
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
    if obj:getName() == "effectBtn" then
        if value > 0  then
            obj:loadTextures("Match/set/effectNormal.png", "Match/set/effectNormal.png", "", ccui.TextureResType.plistType)
        else
            obj:loadTextures("Match/set/effectDisable.png", "Match/set/effectDisable.png", "", ccui.TextureResType.plistType)
        end
        g_AudioMgrInst:setSfxVolume(value)
        g_AudioMgrInst:setSfxVolumeIsCanPlay(value > 0)
        g_UserDataTable.effectVolume = value
    elseif obj:getName() == "musicBtn" then
        if value > 0 then
            obj:loadTextures("Match/set/musicNormal.png", "Match/set/musicNormal.png", "", ccui.TextureResType.plistType)
        else
            obj:loadTextures("Match/set/musicDisable.png", "Match/set/musicDisable.png", "", ccui.TextureResType.plistType)
        end

        if not isOpenPanel then 
            g_AudioMgrInst:setBgmVolume(value)
            g_AudioMgrInst:setBgmVolumeIsCanPlay(value>0)
            g_UserDataTable.musicVolume = value
        end 
    end
end

function GameSetLayer:refreshCheckBox()
    self:setPanelSelected(self.setgreenBtn, g_UserDataTable.gameBgColorType == 1)
    self:setPanelSelected(self.setblueBtn, g_UserDataTable.gameBgColorType == 2)
    self:setPanelSelected(self.setredBtn, g_UserDataTable.gameBgColorType == 3)
    self:setPanelSelected(self.setbkgBtn4, g_UserDataTable.gameBgColorType == 4)
    
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
    
    self:setPanelSelected(self.panelVibration, g_UserDataTable.vibrateNotify == true)
end


function GameSetLayer:on_checkbox_touch(event)

    local sender = event.target

    if event.name == "ended" then
        if sender ==  self.setgreenBtn then 
            g_UserDataTable.gameBgColorType = 1
            ExternalFunc.sendCustomEvent(eventType.GAME_DESK_BG_CHANGE)
        elseif  sender ==  self.setblueBtn then 
            g_UserDataTable.gameBgColorType = 2
            ExternalFunc.sendCustomEvent(eventType.GAME_DESK_BG_CHANGE)
        elseif sender == self.setredBtn then
            g_UserDataTable.gameBgColorType = 3
            ExternalFunc.sendCustomEvent(eventType.GAME_DESK_BG_CHANGE)
        elseif sender == self.setbkgBtn4 then
            g_UserDataTable.gameBgColorType = 4
            ExternalFunc.sendCustomEvent(eventType.GAME_DESK_BG_CHANGE)
        
        elseif sender ==  self.setLanPthBtn then 
            if self.FY_CFG[self.mainRuler] then
                g_gameGlobal:setFyType(self.mainRuler, false)
            end
        elseif sender == self.gpsOpenBtn then 
            g_UserDataTable.gameGPSSetState = true
            g_gameGlobal:getClickCountInstance():nodeClick(g_gameConstant.BTN_COUNT_VALUE + 223)
        elseif sender == self.gpsCloseBtn then 
            g_UserDataTable.gameGPSSetState = false 
            g_gameGlobal:getClickCountInstance():nodeClick(g_gameConstant.BTN_COUNT_VALUE + 224)
        elseif sender ==  self.setLanFyBtn then  
            if self.FY_CFG[self.mainRuler] then
                g_gameGlobal:setFyType(self.mainRuler, true)
            end
        elseif  sender ==  self.setCloseGameEmoji then
            g_UserDataTable.gameEmojClosed = (g_UserDataTable.gameEmojClosed + 1)%2
            g_gameGlobal:getClickCountInstance():nodeClick(g_gameConstant.BTN_COUNT_VALUE + 209 - g_UserDataTable.gameEmojClosed%2)
        elseif sender == self.setGpsWarning then
            g_UserDataTable.gpsWarningSwitch = (g_UserDataTable.gpsWarningSwitch + 1)%2
        elseif sender == self.setBigHandCard then
            g_UserDataTable.bigHandCard = (g_UserDataTable.bigHandCard + 1)%2
            --ExternalFunc.sendCustomEvent(eventType.GAME_HANG_BIG_MODEL_CHANGE)
        elseif event.target == self.setPlayerVoiceClose then
            g_UserDataTable.playerVoiceClose = (g_UserDataTable.playerVoiceClose + 1)%2
            
        elseif event.target == self.panelVibration then
            g_UserDataTable.vibrateNotify = not g_UserDataTable.vibrateNotify
            g_gameGlobal:getClickCountInstance():nodeClick(g_gameConstant.BTN_COUNT_VALUE + 227 + (g_UserDataTable.vibrateNotify and {0} or {1})[1])
        end
        self:refreshCheckBox()
    end
end

function GameSetLayer:on_btn_click(sender)
    if sender == self.closeBtn or sender == self.maskPanel then 
        -- 保存配置
        g_AudioMgrInst:saveSfxVolume()
        self:removeSelf()
        return
    elseif sender == self.FZdismissBtn or sender == self.allDismissBtn or sender == self.gusetExitBtn then
        self:closeVipRoom()
        if sender ~= self.gusetExitBtn then
            g_gameGlobal:getClickCountInstance():nodeClick(g_gameConstant.BTN_COUNT_VALUE + 229)
        end
        return
    elseif sender == self.backToLobbyBtn or sender == self.logBackToLobbyBtn then
        if g_gameGlobal:getIsPlayingGameLog() then
            g_gameGlobal:backToLobby(true)
        else
            local str = (g_gameGlobal:getVipTableID() and g_gameGlobal:getVipTableID()>0) and "返回大厅将会暂停游戏\n确定要暂时返回大厅？" or "是否返回大厅？"
            self.secOpDialog = ShowConfirmCancelBox(str,  function ( ... )            
                g_gameGlobal:backToLobby(true);
            end)
        end
        if sender == self.backToLobbyBtn then
            g_gameGlobal:getClickCountInstance():nodeClick(g_gameConstant.BTN_COUNT_VALUE + 230)
        end
    elseif sender == self.helpBtn then
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

        local tipStr = "牌局开始前解散房间不会扣除" .. "房卡" .. "\n\n是否确定解散？"
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

return GameSetLayer