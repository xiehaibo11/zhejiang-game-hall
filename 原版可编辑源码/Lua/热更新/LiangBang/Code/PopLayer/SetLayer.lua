local PopLayer = import(".PopLayer")
local SetLayer = class("SetLayer",PopLayer)
local CURRENT_MOUDLE_NAME = ...
local SetData = import(".SetData")
local pathKeyWord = import("..Config.PathKeyWord",CURRENT_MOUDEL_NAME)
local KW_UI_SET_CSB_PATH                      = pathKeyWord.KW_PATH_POP_LAYER_ART_RESOURCE .. "/set.csb"
local KW_UI_SET_BG                            = "game_set_bg"
local KW_UI_SET_EFFECT_SLIDER                 = "game_set_yinxiao_slider"
local KW_UI_SET_MUSIC_SLIDER                  = "game_set_yinyue_slider"
local KW_UI_SET_FANGYAN_BTN                   = "fangyan_power_btn"
local KW_UI_SET_ANI_BTN                       = "movie_power_btn"
local KW_UI_SET_ANI_TITLE                     = "set_movie_title"
local KW_UI_SET_CLOSE_BTN                     = "game_set_close_bt"

local KW_UI_SET_CLICK_TYPE_BTN                 = "clicktype_power_btn"
local KW_UI_CLICK_TYPE_TEXT                    = "set_clicktype_title"

local KW_UI_GAME_SET_VERSION_CONTENT = "KW_UI_GAME_SET_VERSION_CONTENT"
local KW_TEXT_VERSION_BUNDLE = "KW_TEXT_VERSION_Bundle"
local KW_TEXT_VERSION_ = "KW_TEXT_VERSION_"

function SetLayer:ctor()
    SetLayer.super.ctor(self)
    self._gameID = 0
end

function SetLayer:init(gameID)
    if gameID then
        self._gameID = gameID
    end
    self._csbResourcePath = KW_UI_SET_CSB_PATH
    SetLayer.super.init(self)
    local bg = XH.GT.UIFunction.seekWidgetByName(self._popLayer,KW_UI_SET_BG)
    if bg ~= nil then
        bg:setTouchEnabled(true)
    end
    
    local soundSlider = XH.GT.UIFunction.seekWidgetByName(self._popLayer,KW_UI_SET_EFFECT_SLIDER)
    if soundSlider ~= nil then
        soundSlider:setPercent(SetData.getSoundPercent())
    end

    local musicSlider = XH.GT.UIFunction.seekWidgetByName(self._popLayer,KW_UI_SET_MUSIC_SLIDER)
    if musicSlider ~= nil then
        musicSlider:setPercent(SetData.getMusicPercent());
    end

    XH.GT.UIFunction.setBtnSelect(self._popLayer,KW_UI_SET_FANGYAN_BTN,SetData.getDialectOpen())
    XH.GT.UIFunction.setVisible(self._popLayer,KW_UI_SET_ANI_BTN,false)
    XH.GT.UIFunction.setVisible(self._popLayer,KW_UI_SET_ANI_TITLE,false)

    if KW_CONFIG_IS_IOS_CHECK == false then
	   self:showVersion()
	else
        XH.GT.UIFunction.setVisible(self._popLayer,KW_UI_GAME_SET_VERSION_CONTENT,false)
	end

    XH.GT.UIFunction.addTouchEventListener(self._popLayer,KW_UI_SET_EFFECT_SLIDER,
        function (send,eventType)
            self.onTouchEventSoundSlider(self,send,eventType)
        end)
        
    XH.GT.UIFunction.addTouchEventListener(self._popLayer,KW_UI_SET_MUSIC_SLIDER,
        function (send,eventType)
            self.onTouchEventMusicSlider(self,send,eventType)   
        end)
        
    XH.GT.UIFunction.addTouchEventListener(self._popLayer,KW_UI_SET_FANGYAN_BTN,
        function (send,eventType)
            self.onTouchEventFangYanBtn(self,send,eventType)
        end)
        
    XH.GT.UIFunction.addTouchEventListener(self._popLayer,KW_UI_SET_CLICK_TYPE_BTN,
        function (send,eventType)
            self.onTouchEventClickTypeBtn(self,send,eventType)
        end)
        
    XH.GT.UIFunction.addTouchEventListener(self._popLayer,KW_UI_SET_ANI_BTN,
        function (send,eventType)
            self.onTouchEventAniBtn(self,send,eventType)
        end)
    
    XH.GT.UIFunction.addTouchEventListener(self._popLayer,KW_UI_SET_CLOSE_BTN,
        function (send,eventType)
            self.onTouchEventCloseBtn(self,send,eventType)
        end)
end


function SetLayer:showLayer(isVisible)
    SetLayer.super.showLayer(self,isVisible)
end

function SetLayer:onTouchEventSoundSlider(send,eventType)
    if eventType == ccui.TouchEventType.began then        
    end

    if eventType ~= ccui.TouchEventType.ended then
        return 
    end
    XH.GT.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_LOBBY_MORE_SETTING_SOUND + self._gameID * 100)
    SetData.setSoundPercent(send:getPercent())
end

function SetLayer:onTouchEventMusicSlider(send,eventType)
    if eventType == ccui.TouchEventType.began then      
    end

    if eventType ~= ccui.TouchEventType.ended then
        return 
    end
    XH.GT.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_LOBBY_MORE_SETTING_MUSIC + self._gameID * 100)
    SetData.setMusicPercent(send:getPercent())
end

function SetLayer:onTouchEventFangYanBtn(send,eventType)
    if eventType == ccui.TouchEventType.began then     
    end

    if eventType ~= ccui.TouchEventType.began then
        return
    end
    local isSelect = true
    if SetData.getDialectOpen() then
        isSelect = false
        XH.GT.onCustomTimesEveBF(KW_TK_CLOSE_DIALECT_BTN)
    end
    XH.GT.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_LOBBY_MORE_SETTING_DIALECT + self._gameID * 100)
    XH.GT.GameSound.playSoundCheckBox(isSelect)
    SetData.setDialectOpen(isSelect)
end

function SetLayer:onTouchEventClickTypeBtn(send,eventType)
    if eventType == ccui.TouchEventType.began then     
    end

    if eventType ~= ccui.TouchEventType.began then
        return
    end
    local isSelect = true
    if SetData.getDoubleClickOpen() then
        isSelect = false
    end
    
    XH.GT.GameSound.playSoundCheckBox(isSelect)
    SetData.setDoubleClickOpen(isSelect)
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("SetLayer.IsDoubleClick")
    event.bIsDoubleClick = isSelect
    eventDispatcher:dispatchEvent(event)
end

function SetLayer:onTouchEventAniBtn(send,eventType)
    if eventType == ccui.TouchEventType.began then     
    end
    if eventType ~= ccui.TouchEventType.began then
        return
    end
    local isSelect = true
    if SetData.getAniOpen() then
    	isSelect = false
    end
    SetData.setAniOpen(isSelect)
end

function SetLayer:onTouchEventCloseBtn(send,eventType)
    if eventType == ccui.TouchEventType.began then     
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.GT.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_LOBBY_MORE_SETTING_CLOSE + self._gameID * 100)
    XH.GT.GameSound.playSoundCloseWindow()
    self:showLayer(false)
end

function SetLayer:showClickTypeBtn(bRender)
    XH.GT.UIFunction.setBtnSelect(self._popLayer,KW_UI_SET_CLICK_TYPE_BTN,SetData.getDoubleClickOpen())
    XH.GT.UIFunction.setVisible(self._popLayer,KW_UI_SET_CLICK_TYPE_BTN,bRender)
    XH.GT.UIFunction.setVisible(self._popLayer,KW_UI_CLICK_TYPE_TEXT,bRender)
end

function SetLayer:showVersion()
  --   local versionTable = {}
  --   local storagePath = cc.FileUtils:getInstance():getWritablePath() .. "HotUpdateCacheDir/"    
    
  --   local mainfestPath = storagePath .. "TempHotUpdateCache/"
     
  --   local maniList = HotUpdateList.HotUpdateList
  --   maniList["Lobby"] = "GameHotUpdate/project.manifest"
         
  --   for k,v in pairs(maniList) do                                
  --       local assetsManagerEx = cc.AssetsManagerEx:create(v, storagePath,mainfestPath .. k .. "/")
  --       local localManifest = assetsManagerEx:getLocalManifest()
  --       if localManifest then
  --           versionTable[k] = localManifest:getVersion()
  --       end
  --   end
   
	--  -- set version
  --   local versionContent = XH.GT.UIFunction.seekWidgetByName(self._popLayer, KW_UI_GAME_SET_VERSION_CONTENT)
	-- if versionContent then
  --   	local bundleVersion = ccui.Helper:seekWidgetByName(versionContent,KW_TEXT_VERSION_BUNDLE )
  --   	if bundleVersion ~= nil then
  --       	bundleVersion:setString( "")
  --  		end
  --    	for k,v in pairs(versionTable) do
  --       	local gameVersion = ccui.Helper:seekWidgetByName(versionContent, KW_TEXT_VERSION_ .. k)
  --           print('hcc>>gamename: ' .. tostring(k))
  --       	if gameVersion ~= nil then
  --           	gameVersion:setString(v)
  --       	end
  --   	end
	-- end     

end

return SetLayer