local GameSetLayer = class("GameSetLayer", cc.load("mvc").ViewBase)


--csb文件
GameSetLayer.RESOURCE_FILENAME = "GamePdkSetLayer.csb"

--节点绑定及事件
GameSetLayer.RESOURCE_BINDING = {
    ["Panel_1/bg/Button_bg_green"] = {
        varname="setgreenBtn",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },
    ["Panel_1/bg/Button_bg_blue"] = {
        varname="setblueBtn",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },

    ["Panel_1/bg/Button_bg_coffe"] = {
        varname="setcoffeBtn",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },

    -- ["Panel_1/bg/Button_paibei1"] = {
    --     varname="setPaibeiBtn1",
    --     events={
    --         {event="touch",method="on_checkbox_touch"}
    --     }
    -- },
    -- ["Panel_1/bg/Button_paibei2"] = {
    --     varname="setPaibeiBtn2",
    --     events={
    --         {event="touch",method="on_checkbox_touch"}
    --     }
    -- },
    -- ["Panel_1/bg/Button_paibei3"] = {
    --     varname="setPaibeiBtn3",
    --     events={
    --         {event="touch",method="on_checkbox_touch"}
    --     }
    -- },

    ["Panel_1/bg/Button_lan_pth"] = {
        varname="setLanPthBtn",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },

    ["Panel_1/bg/Button_hudong_on"] = {
        varname="hudongOnBtn",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },

    -- ["Panel_1/bg/Button_hudong_off"] = {
    --     varname="hudongOffBtn",
    --     events={
    --         {event="touch",method="on_checkbox_touch"}
    --     }
    -- },

    ["Panel_1/bg/Button_card1"] = {
        varname="nomalCardBtn",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },

    ["Panel_1/bg/Button_card2"] = {
        varname="peyeCardBtn",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },

    ["Panel_1/bg/Button_card3"] = {
        varname="newNomalCardBtn",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },

    ["Panel_1/bg/Button_close"] = {
        varname="closeBtn",
        events={
            {event="click",method="on_btn_click"}
        }
    },

    ["Panel_1/bg/Button_1"] = {
        varname="kefuBtn",
        events={
            {event="click",method="on_btn_click"}
        }
    },

    ["Panel_1/bg/Button_1_0"] = {
        varname="yinsiBtn",
        events={
            {event="click",method="on_btn_click"}
        }
    },

    ["Panel_1/bg/Button_2"] = {
        varname="shockopn",
        events={
            {event="click",method="on_btn_click"}
        }
    },

    ["Panel_1/bg/Button_3"] = {
        varname="shockoff",
        events={
            {event="click",method="on_btn_click"}
        }
    },

    -- ["Panel_1/bg/Button_1_1"] = {
    --     varname="fuwuBtn",
    --     events={
    --         {event="click",method="on_btn_click"}
    --     }
    -- },


    ["Panel_1/bg/prevCheatBox"] = {
        varname="prevCheatBox",
    },

    ["Panel_1/bg/prevCheatLabel"] = {
        varname="prevCheatLabel",
    },

    ["Panel_1/bg/Button_hideVoice"] = {
        varname="hideTalkVoiceBtn",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },
    ["Panel_1/bg/Button_Man"] = {
        varname="btnMan",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },
    ["Panel_1/bg/Button_Woman"] = {
        varname="btnWoman",
        events={
            {event="touch",method="on_checkbox_touch"}
        }
    },
    
    ["Panel_1/bg/label1_0_2"] = {
        varname="voiceSexLabel",
    },
    ["Panel_1/bg/label1_0_1_0_1"] = {
        varname="voiceSexLabel_man",
    },
    ["Panel_1/bg/label1_0_1_0_1_0"] = {
        varname="voiceSexLabel_woman",
    },
}

function GameSetLayer:ctor(...)
    GameSetLayer.super.ctor(self, ...)
end
function GameSetLayer:onCreate()
    
    -- 创建半透明黑色背景
    self:fixPos()
    self:showMask()
    -- 加载设置合图
    cc.SpriteFrameCache:getInstance():addSpriteFrames("Textures/Set/set.plist")

    local rootPanel = self.resourceNode_:getChildByName("Panel_1")
    
    --音效滑块
    local effectSlider = ccui.Helper:seekWidgetByName(rootPanel, "effectSlider")
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
    local musicSlider = ccui.Helper:seekWidgetByName(rootPanel, "musicSlider")
    --读取本地保存的上次音乐数据
    local musicVolume = g_AudioMgrInst:getBgmVolume()
    musicSlider:setPercent(musicVolume * 100)
    --音乐按钮
    local musicBtn = musicSlider:getChildByName("musicBtn")
    musicBtn:setPressedActionEnabled(true)
    musicBtn:setTag(100)
    musicBtn:onTouch(handler(self, self.audioBtnOnEvent))
    if musicVolume == 0 then
        self:btnStateChanged(musicBtn, musicVolume)
    end
    effectSlider:onEvent(handler(self, self.sliderOnEvent))
    musicSlider:onEvent(handler(self, self.sliderOnEvent))
    if g_UserDataTable.gameShockSwitch then
        self.shockopn:setVisible(true)
        self.shockoff:setVisible(false)
    else
        self.shockopn:setVisible(false)
        self.shockoff:setVisible(true)
    end

    self:refreshCheckBox()


    self:initGpsWarningSetting()

    self:netEvent()

    if g_gameGlobal:getIsPlayingGameLog() then
        self.btnMan:hide()
        self.btnWoman:hide()
        self.voiceSexLabel:hide()
        self.voiceSexLabel_man:hide()
        self.voiceSexLabel_woman:hide()
    end
end

function GameSetLayer:netEvent()

    local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))

    -- self:addChild(eventObj.new("onSexChange", function (event, data)        
    --     local sex = data.sex
    --     g_UserDataTable.voiceSex = sex
    --     self:refreshCheckBox()
    -- end))


end

function GameSetLayer:initGpsWarningSetting()

    local function doChcek()
        if self.prevCheatBox:isSelected() then 
            g_UserDataTable.gpsWarningSwitch = 1
        else
            g_UserDataTable.gpsWarningSwitch = 0
        end
    end

    self.prevCheatBox:onClick(function() 
        doChcek()
    end)
    self.prevCheatBox:setSelected( g_UserDataTable.gpsWarningSwitch == 1 )

    --防作弊提示
    self.prevCheatLabel:setTouchEnabled(true)
    self.prevCheatLabel:onClick(function() 
        local isSelected = self.prevCheatBox:isSelected()
        self.prevCheatBox:setSelected( not isSelected )  


        doChcek()
    end)

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

function GameSetLayer:btnStateChanged(obj, value)
    if obj:getName() == "effectBtn" then
        if value > 0  then
            obj:loadTextures("MatchAH/".."Textures/Set/effectNormal.png", "MatchAH/".."Textures/Set/effectNormal.png", "", ccui.TextureResType.plistType)
        else
            obj:loadTextures("MatchAH/".."Textures/Set/effectDisable.png", "MatchAH/".."Textures/Set/effectDisable.png", "", ccui.TextureResType.plistType)
        end
        g_AudioMgrInst:setSfxVolume(value)
        g_UserDataTable.effectVolume = value
    elseif obj:getName() == "musicBtn" then
        if value > 0 then
            obj:loadTextures("MatchAH/".."Textures/Set/musicNormal.png", "MatchAH/".."Textures/Set/musicNormal.png", "", ccui.TextureResType.plistType)
        else
            obj:loadTextures("MatchAH/".."Textures/Set/musicDisable.png", "MatchAH/".."Textures/Set/musicDisable.png", "", ccui.TextureResType.plistType)
        end
        g_AudioMgrInst:setBgmVolume(value)
        g_UserDataTable.musicVolume = value
    end
end

function GameSetLayer:refreshCheckBox()

    local isGreen = g_UserDataTable.gameBgColorType == 1

    self.setgreenBtn:setSelected(g_UserDataTable.gameBgColorType == 1)
    self.setblueBtn:setSelected(g_UserDataTable.gameBgColorType == 3)
    self.setcoffeBtn:setSelected(g_UserDataTable.gameBgColorType == 2)

    self.setLanPthBtn:setSelected(g_UserDataTable.gameLanguageCfgIndex == 1)

    -- self.setPaibeiBtn1:setSelected(g_UserDataTable.gamePaibeiCfgIndex == 0)
    -- self.setPaibeiBtn2:setSelected(g_UserDataTable.gamePaibeiCfgIndex == 1)
    -- self.setPaibeiBtn3:setSelected(g_UserDataTable.gamePaibeiCfgIndex == 2)

    local isOpen = g_UserDataTable.gameFaceCfgIndex == 1
    self.hudongOnBtn:setSelected(not isOpen)
    -- self.hudongOffBtn:setSelected( not isOpen)


    self.nomalCardBtn:setSelected(g_UserDataTable.gamePdkCardCfgIndex == 1)
    self.peyeCardBtn:setSelected( g_UserDataTable.gamePdkCardCfgIndex == 2)
    self.newNomalCardBtn:setSelected( g_UserDataTable.gamePdkCardCfgIndex == 3)


    -- GlobalEventManager:onEvent("gameBgChanged")
    -- GlobalEventManager:onEvent("cardFrameColorChanged")
    -- GlobalEventManager:onEvent("cardFrontSizeChanged")
    
    -- local gameBase = require("newgold.MatchGames.PDK.GameBase"):getInstance()
    -- if gameBase then 
    --     gameBase:refreshBackGround()
    --     gameBase:refreshCardFrameColor()
    --     gameBase:refreshCardFrontSize()
    -- end

    local isOpen = g_UserDataTable.gameHideTalkVoiceIndex == 1
    self.hideTalkVoiceBtn:setSelected(not isOpen)

    self.btnMan:setSelected(g_UserDataTable.voiceSex == 1)
    self.btnWoman:setSelected(g_UserDataTable.voiceSex == 0)

end


function GameSetLayer:on_checkbox_touch(event)

    local sender = event.target

    if event.name == "ended" then
        if sender ==  self.setgreenBtn then 
            g_UserDataTable.gameBgColorType = 1
            GlobalEventManager:onEvent("gameBgChanged")
        elseif  sender ==  self.setblueBtn then 
            g_UserDataTable.gameBgColorType = 3
            GlobalEventManager:onEvent("gameBgChanged")
        elseif sender == self.setcoffeBtn then 
            g_UserDataTable.gameBgColorType = 2
            GlobalEventManager:onEvent("gameBgChanged")
        elseif  sender ==  self.setLanPthBtn then 
            g_UserDataTable.gameLanguageCfgIndex = 1
        elseif sender == self.setPaibeiBtn1 then 
            --黄色牌背
            g_UserDataTable.gamePaibeiCfgIndex = 0
            GlobalEventManager:onEvent("cardFrameColorChanged")
        elseif sender == self.setPaibeiBtn2 then  
            --绿色牌背
            g_UserDataTable.gamePaibeiCfgIndex = 1
            GlobalEventManager:onEvent("cardFrameColorChanged")
        elseif sender == self.setPaibeiBtn3 then 
            --蓝色牌背
            g_UserDataTable.gamePaibeiCfgIndex = 2
            GlobalEventManager:onEvent("cardFrameColorChanged")

        elseif sender == self.hudongOnBtn then 
            
            local isSelected = self.hudongOnBtn:isSelected()
            g_UserDataTable.gameFaceCfgIndex = isSelected and 2 or 1
        elseif sender == self.hudongOffBtn then 
            g_UserDataTable.gameFaceCfgIndex = 2
        elseif sender == self.nomalCardBtn then 
            g_UserDataTable.gamePdkCardCfgIndex = 1
            GlobalEventManager:onEvent("pdkCardChanged")
        elseif sender == self.peyeCardBtn then 
            g_UserDataTable.gamePdkCardCfgIndex = 2
            GlobalEventManager:onEvent("pdkCardChanged")
        elseif sender == self.newNomalCardBtn then 
             g_UserDataTable.gamePdkCardCfgIndex = 3
            GlobalEventManager:onEvent("pdkCardChanged")
        elseif sender == self.hideTalkVoiceBtn then 

            local isSelected = self.hideTalkVoiceBtn:isSelected()
            g_UserDataTable.gameHideTalkVoiceIndex = isSelected and 2 or 1
        elseif sender == self.btnMan then 
            g_UserDataTable.voiceSex = 1

            g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_GAME_OPERTAION,{
                opertaionID = g_gameConstant.GAME_OPERATION_DO_SET_SEX,
                opValue = 1,
            })
            
        elseif sender == self.btnWoman then 
            g_UserDataTable.voiceSex = 0
            g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_GAME_OPERTAION,{
                opertaionID = g_gameConstant.GAME_OPERATION_DO_SET_SEX,
                opValue = 0,
            })
        end

        self:refreshCheckBox()

    elseif event.name == "cancelled" then 
        self:refreshCheckBox()
    end

end




function GameSetLayer:on_btn_click(sender)
    if sender == self.closeBtn then 
        -- 保存配置
        self:removeSelf()
        return
    elseif sender == self.kefuBtn then 
    elseif sender == self.yinsiBtn then 
    elseif sender == self.fuwuBtn then 
    
    elseif sender == self.shockopn then
        self.shockopn:setVisible(false)
        self.shockoff:setVisible(true)
        g_UserDataTable.gameShockSwitch = false
    elseif sender == self.shockoff then
        self.shockopn:setVisible(true)
        self.shockoff:setVisible(false)
        g_UserDataTable.gameShockSwitch = true
    end
end


return GameSetLayer�8