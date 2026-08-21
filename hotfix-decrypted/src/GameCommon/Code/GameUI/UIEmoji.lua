local CURRENT_MODULE_NAME = ...
local UIEmoji = class("UIEmoji")
local GameEmojisHotUpdate = import("..Hotupdate.GameEmojis.GameEmojisHotUpdate",CURRENT_MODULE_NAME)
local Cell = import("..Hotupdate.HotUpdateBase.Cell",CURRENT_MODULE_NAME)
local GameCommonDefine = require("GameCommon.Code.GameCommonDefine")

local KW_UI_EMOJI_CSB_PATH = GameCommonDefine.KW_PATH_RESOUCE_CSB  .. "/Emoji/Emoji.csb"
local KW_ROOT_LAYER = "KW_ROOT_LAYER"
local KW_PANEL_EMOJI = "KW_PANEL_EMOJI"
local KW_POS_EMOJI_PANEL_OUT = "KW_POS_EMOJI_PANEL_OUT"
local KW_POS_EMOJI_PANEL_IN = "KW_POS_EMOJI_PANEL_IN"
local KW_LISTVIEW_EMOJI = "KW_LISTVIEW_EMOJI"
local KW_PANEL_EMOJI_CONTENT_ITEM = "KW_PANEL_EMOJI_CONTENT_ITEM"
local KW_POS_EMOJI_ITEM_ = 'KW_POS_EMOJI_ITEM_'
local KW_PIC_EMOJI = "KW_PIC_EMOJI"
local KW_PIC_EMOJI_ITEM = "KW_PIC_EMOJI_ITEM"
local KW_LISTVIEW_EMOJI_TITE = "KW_LISTVIEW_EMOJI_TITE"
local KW_PIC_EMOJI_TITLE_BG = "KW_PIC_EMOJI_TITLE_BG"
local KW_PIC_EMOJI_TITLE = "KW_PIC_EMOJI_TITLE"
local KW_PATH_EMOJI_ROOT = "Emoji/"
local KW_FILE_NAME_DISPLAY_ORDER = "displayOrder.lua"
local KW_FILE_NAME_NAME_MAP = "nameMap.lua"
local KW_PATH_EMOJI_HOTUPDATE = GameCommonDefine.KW_GAME_PATH .."/EmojiHotUpdate"
if KW_HOTUPDATE_VERSION3 then
	KW_PATH_EMOJI_HOTUPDATE = GameCommonDefine.KW_GAME_PATH.."/EmojiHotUpdate3"
end
local KW_PATH_DISPLAY_ORDER = KW_PATH_EMOJI_HOTUPDATE .. "/" .. KW_FILE_NAME_DISPLAY_ORDER
local KW_PIC_NAME_EMOJI_TITLE_DEFAULT = "face_card_btn_1.png"
local KW_PIC_NAME_EMOJI_TITLE_PRESS = "face_card_btn_2.png"

local KW_POS_DOWNLOAD = "KW_POS_DOWNLOAD"
local KW_UI_NEED_DOWNLOAD = "KW_UI_NEED_DOWNLOAD"
local KW_DATA_EMOJI_DOWNLOAD_ = "KW_DATA_EMOJI_DOWNLOAD_"
local KW_BTN_DOWNLOAD = "KW_BTN_DOWNLOAD"
local KW_UI_DOWNLOAD_ = "KW_UI_DOWNLOAD_"
local KW_TEXT_EMOJI_NAME = "KW_TEXT_EMOJI_NAME"
local KW_UI_EMOJI_ANIMATION = "KW_UI_EMOJI_ANIMATION"
local KW_TEXT_NO_EMOJI = "KW_TEXT_NO_EMOJI"

function UIEmoji:ctor()
    self._rootNode = nil
    self._isIn = false
    self._downloadEmojiName = ""
end

function UIEmoji:init(node)
    local csbNode = cc.CSLoader:createNode(KW_UI_EMOJI_CSB_PATH)
    self._rootNode = csbNode:getChildByName(KW_ROOT_LAYER)
    if self._rootNode == nil then
        return
    end
    self._rootNode:removeFromParent(false)
    node:addChild(self._rootNode)
    self._rootNode:addTouchEventListener(handler(self,self.onTouchEventBg))
    Game.UIFunction.addTouchEventListenerByObj(self._rootNode,KW_BTN_DOWNLOAD,self,self.onBtnEventDownload)
    self:loadAllEmojiTitle()
    local listenerEmoji = cc.EventListenerCustom:create("UpdateEmoji.CallBack",handler(self,self.onEventDisptcherUpdateEmojiCallBack))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithSceneGraphPriority(listenerEmoji, self._rootNode)
end

function UIEmoji:loadAllEmojiTitle()
    local emojiTitleListView = ccui.Helper:seekWidgetByName(self._rootNode,KW_LISTVIEW_EMOJI_TITE)
    if emojiTitleListView == nil then
        return
    end
    local displayOrder = {}
    local displayPath = cc.FileUtils:getInstance():fullPathForFilename(KW_PATH_DISPLAY_ORDER)
    if cc.FileUtils:getInstance():isFileExist(displayPath) then
        local data = cc.FileUtils:getInstance():getStringFromFile(displayPath)
        local doFile = loadstring(data)
        displayOrder = doFile()
    end
    for key,value in ipairs(displayOrder) do
        local emojiTitleFilePath = KW_PATH_EMOJI_HOTUPDATE ..  "/" .. value .. ".png"
        local emojiTitlePngPath = cc.FileUtils:getInstance():fullPathForFilename(emojiTitleFilePath)
        if cc.FileUtils:getInstance():isFileExist(emojiTitlePngPath) then
            local titleItem = ccui.Helper:seekWidgetByName(self._rootNode,KW_PIC_EMOJI_TITLE_BG)
            if titleItem then
                local titleItemTmp = titleItem:clone()
                titleItemTmp:setName(value)
                Game.UIFunction.loadTexture(titleItemTmp,KW_PIC_EMOJI_TITLE,emojiTitleFilePath,ccui.TextureResType.localType)
                titleItemTmp:addTouchEventListener(handler(self,self.onTouchEmojiTitle))
                emojiTitleListView:addChild(titleItemTmp)
            end
        end
    end
    local children = emojiTitleListView:getChildren()
    if children[1] then 
        self:onTouchEmojiTitle(children[1], ccui.TouchEventType.ended)
    end
end

function UIEmoji:resetAllEmojiTitleBG()
    local emojiTitleListView = ccui.Helper:seekWidgetByName(self._rootNode,KW_LISTVIEW_EMOJI_TITE)
    if emojiTitleListView == nil then
        return
    end
    local children = emojiTitleListView:getChildren()
    for i = 1, #children do
        children[i]:loadTexture(KW_PIC_NAME_EMOJI_TITLE_DEFAULT,ccui.TextureResType.plistType)
    end
end

function UIEmoji:onTouchEmojiTitle(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._downloadEmojiName = send:getName()
    self:resetAllEmojiTitleBG()
    local emojiListView = ccui.Helper:seekWidgetByName(self._rootNode,KW_LISTVIEW_EMOJI)
    if emojiListView == nil then
        return
    end
    emojiListView:removeAllChildren()
    local emojiDownloadPanel = ccui.Helper:seekWidgetByName(self._rootNode,KW_POS_DOWNLOAD)
    if emojiDownloadPanel then 
        local children = emojiDownloadPanel:getChildren()
        for i = 1 ,#children do
            children[i]:setVisible(false)
        end
    end

    Game.UIFunction.setVisible(self._rootNode,KW_UI_NEED_DOWNLOAD,false)
    send:loadTexture(KW_PIC_NAME_EMOJI_TITLE_PRESS,ccui.TextureResType.plistType)

    if device.platform == "windows" then
        self:loadEmoji(send:getName())
        return
    end
    local haveDownload = cc.UserDefault:getInstance():getBoolForKey(KW_DATA_EMOJI_DOWNLOAD_ .. send:getName(), false)
    if haveDownload then 
        self:loadEmoji(send:getName())
    else
        if emojiDownloadPanel:getChildByName(KW_UI_DOWNLOAD_ .. send:getName())then 
            Game.UIFunction.setVisible(self._rootNode,KW_UI_DOWNLOAD_ .. send:getName(),true)
        else 
			if KW_HOTUPDATE_VERSION3 then
				self:updateEmoji(send:getName(),true)
			else
				local network = XH.bf.SysFunc:GetCurNet()
				if network[1] == 1 then 
					self:updateEmoji(send:getName(),true)
				else 
					Game.UIFunction.setVisible(self._rootNode,KW_UI_NEED_DOWNLOAD,true)
				end
			end
           
        end
    end
end

function UIEmoji:onTouchEmojiItem(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("Emoji.Send")
    event.emojiCode = send:getName()
    eventDispatcher:dispatchEvent(event)
    self._rootNode:setTouchEnabled(true)
    self:showEmojiPanel(false)
end

function UIEmoji:onBtnEventDownload(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    Game.UIFunction.setVisible(self._rootNode,KW_UI_NEED_DOWNLOAD,false)
    self:updateEmoji(self._downloadEmojiName,true)
end

function UIEmoji:loadEmoji(emojiName)
    local emojiListView = ccui.Helper:seekWidgetByName(self._rootNode,KW_LISTVIEW_EMOJI)
    if emojiListView == nil then
        return
    end
    emojiListView:removeAllChildren()
    local emojiListViewItem = ccui.Helper:seekWidgetByName(self._rootNode,KW_PANEL_EMOJI_CONTENT_ITEM)
    if emojiListViewItem == nil then
        return
    end
    local itemContentSize = emojiListViewItem:getContentSize()
    emojiListView:setContentSize(itemContentSize.width,itemContentSize.height)
    local itemChildCount = emojiListViewItem:getChildrenCount()
    local emojiNameMapFilePath = KW_PATH_EMOJI_ROOT .. emojiName .. "/" .. KW_FILE_NAME_NAME_MAP
    local nameMap = {}
    if cc.FileUtils:getInstance():isFileExist(emojiNameMapFilePath) then
        nameMap = dofile(cc.FileUtils:getInstance():fullPathForFilename(emojiNameMapFilePath))
    end
    local index = 0
    local ListViewItemTmpCnt = 0
    local emojiListViewItemTmp = emojiListViewItem
    for key,value in ipairs(nameMap) do
        local emojiIconFilePath = KW_PATH_EMOJI_ROOT .. emojiName .. "/icon/" .. key .. ".png"
        if cc.FileUtils:getInstance():isFileExist(emojiIconFilePath) then
            index = index + 1
            local localIndex = math.fmod(index - 1,itemChildCount) + 1
            if localIndex == 1 then
                ListViewItemTmpCnt = ListViewItemTmpCnt + 1
                emojiListViewItemTmp = emojiListViewItem:clone()
                emojiListView:addChild(emojiListViewItemTmp)
            end
            local emojiListViewItemTmpChildPosNode = emojiListViewItemTmp:getChildByName(KW_POS_EMOJI_ITEM_ .. localIndex)
            if emojiListViewItemTmpChildPosNode then
                local emojiItem = ccui.Helper:seekWidgetByName(self._rootNode,KW_PIC_EMOJI_ITEM)
                local emojiItemTmp = emojiItem:clone()
                if emojiItemTmp then
                    emojiItemTmp:setPosition(0,0)
                    emojiItemTmp:setName(emojiName .. "/" .. value)
                    Game.UIFunction.loadTexture(emojiItemTmp,KW_PIC_EMOJI,emojiIconFilePath,ccui.TextureResType.localType)
                    emojiItemTmp:addTouchEventListener(handler(self,self.onTouchEmojiItem))
                    emojiListViewItemTmpChildPosNode:addChild(emojiItemTmp)
                end
            end
        end
    end
    emojiListView:setInnerContainerSize(cc.size(itemContentSize.width,itemContentSize.height * ListViewItemTmpCnt))
end

function UIEmoji:playEmojiWithTarget(emojiCode, posNode)
    local strSet = Game.StringFunction.spiltStringByFlag(emojiCode,"/")
    local emojiName = strSet[1] or ""
    local emojiLanguage = strSet[2] or ""
    local emojiNameMapFilePath = KW_PATH_EMOJI_ROOT .. emojiName .. "/" .. KW_FILE_NAME_NAME_MAP
    local nameMap = {}
    if cc.FileUtils:getInstance():isFileExist(emojiNameMapFilePath) then
        nameMap = dofile(cc.FileUtils:getInstance():fullPathForFilename(emojiNameMapFilePath))
    end
    if posNode:getChildByName(KW_UI_EMOJI_ANIMATION) then 
        posNode:removeChildByName(KW_UI_EMOJI_ANIMATION) 
    end
    Game.UIFunction.setVisible(posNode,KW_TEXT_EMOJI_NAME,false)

    local uiEmoji = posNode:getParent()
    if uiEmoji == nil  then 
        return 
    end

    posNode:stopAllActions()

    local emojiFileName = ""
    for key,value in ipairs(nameMap) do
        if value == emojiLanguage then
            emojiFileName = tostring(key)
            break
        end
    end
    if emojiFileName == "" then 
        uiEmoji:setVisible(true)
        local uiText = ccui.Helper:seekWidgetByName(posNode,KW_TEXT_EMOJI_NAME)
        if uiText then 
            uiText:setString(emojiLanguage)
            uiText:setVisible(true)
            local uiTextSize = uiText:getContentSize()
            Game.UIFunction.setPositionX(uiText,KW_TEXT_NO_EMOJI,uiTextSize.width/2)
        end
        posNode:schedule(function()
            if uiEmoji == nil  then 
                return 
            end
            uiEmoji:setVisible(false)
            Game.UIFunction.setVisible(posNode,KW_TEXT_EMOJI_NAME,false)
        end,2)
    else 
        local emojiAnimationRootPath = KW_PATH_EMOJI_ROOT .. emojiName .. "/animation/"
        if cc.FileUtils:getInstance():isFileExist(emojiAnimationRootPath .. emojiName .. ".ExportJson") then
            local index = 0
            while true do 
                if cc.FileUtils:getInstance():isFileExist(emojiAnimationRootPath .. emojiName .. index .. ".plist") then
                    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(
                        emojiAnimationRootPath .. emojiName .. index .. ".png", 
                        emojiAnimationRootPath .. emojiName .. index .. ".plist", 
                        emojiAnimationRootPath .. emojiName .. ".ExportJson")
                else 
                    break
                end
                index = index + 1
            end
            local lastCreatArmature = ccs.Armature:create(emojiName)
            if lastCreatArmature then
                uiEmoji:setVisible(true)
                posNode:addChild(lastCreatArmature)
                lastCreatArmature:setName(KW_UI_EMOJI_ANIMATION)
                lastCreatArmature:setAnchorPoint(cc.p(0.5, 0.5))
                lastCreatArmature:getAnimation():play(emojiName .. "_" .. emojiFileName, -1, 1)
                posNode:schedule(function()
                    if posNode == nil or uiEmoji == nil then 
                        return 
                    end
                    local armatureNode = posNode:getChildByName(KW_UI_EMOJI_ANIMATION)
                    if armatureNode then
                        armatureNode:getAnimation():setMovementEventCallFunc(function()
                            posNode:removeChild(armatureNode) 
                            uiEmoji:setVisible(false)
                        end)
                    end
                end, 2)
            end

        end
    end
end


function UIEmoji:isEmojiLayerIn()
    return self._isIn
end


function UIEmoji:onTouchEventBg(send,eventType)   
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._rootNode:setTouchEnabled(true)
    self:showEmojiPanel(false)
end

function UIEmoji:showEmojiPanel(bShow)
    if self._rootNode == nil then
        return
    end
    if self._isIn == bShow then
        return
    end
    self._isIn = bShow
    local emojiPanel = ccui.Helper:seekWidgetByName(self._rootNode,KW_PANEL_EMOJI)
    if emojiPanel then
        emojiPanel:stopAllActions()
        if bShow then
            self._rootNode:setTouchEnabled(true)
            self._rootNode:setVisible(true)
            local inNode = ccui.Helper:seekWidgetByName(self._rootNode, KW_POS_EMOJI_PANEL_IN)
            if inNode then
                local action = cc.Sequence:create(cc.MoveTo:create(0.2,cc.p(inNode:getPositionX(),inNode:getPositionY())))
                emojiPanel:runAction(action)
            end
        else
            local outNode = ccui.Helper:seekWidgetByName(self._rootNode,KW_POS_EMOJI_PANEL_OUT)
            if outNode then
                local action = cc.Sequence:create(cc.MoveTo:create(0.2,cc.p(outNode:getPositionX(),outNode:getPositionY())),
                    cc.CallFunc:create(function()
                        self._rootNode:setVisible(false)
                    end))
                emojiPanel:runAction(action)
            end
        end
    end
end

function UIEmoji:updateBackground()
    local emojiTitleListView = ccui.Helper:seekWidgetByName(self._rootNode,KW_LISTVIEW_EMOJI_TITE)
    if emojiTitleListView == nil then
        return
    end
    local children = emojiTitleListView:getChildren()
    for i = 1 , #children do 
        local emojiName = children[i]:getName()
        local haveDownload = cc.UserDefault:getInstance():getBoolForKey(KW_DATA_EMOJI_DOWNLOAD_ .. emojiName, false)
        if haveDownload then 
            self:updateEmoji(emojiName,false)
        else 
			if KW_HOTUPDATE_VERSION3 then
				self:updateEmoji(emojiName,false)
			else
				local network = XH.bf.SysFunc:GetCurNet()
                if network[1] == 1 then 
                    self:updateEmoji(emojiName,false)
                end
			end
        end
    end
end

function UIEmoji:updateEmoji(emojiName,render)
    if device.platform == "windows" then
        return
    end

    -- local emojiDownloadPanel = ccui.Helper:seekWidgetByName(self._rootNode,KW_POS_DOWNLOAD)
    -- if emojiDownloadPanel then 
    --     if emojiDownloadPanel:getChildByName(KW_UI_DOWNLOAD_ .. emojiName) then
    --         return 
    --     end
    --     local emojiDownloadItem = ccui.Helper:seekWidgetByName(self._rootNode,"KW_UI_DOWNLOAD_ITEM")
    --     local emojiDownloadItemCopy = emojiDownloadItem:clone()
    --     if emojiDownloadItemCopy then 
    --         emojiDownloadItemCopy:setName(KW_UI_DOWNLOAD_ .. emojiName)
    --         emojiDownloadItemCopy:setPosition(cc.p(0,0))
    --         emojiDownloadItemCopy:setVisible(render)
    --         emojiDownloadPanel:addChild(emojiDownloadItemCopy)

    --         local searchPaths = cc.FileUtils:getInstance():getSearchPaths()
    --         table.insert(searchPaths,1, cc.FileUtils:getInstance():getWritablePath() .. emojiName .. "/")
    --         cc.FileUtils:getInstance():setSearchPaths(searchPaths)
    --         local isExist = cc.FileUtils:getInstance():isFileExist(GameCommonDefine.KW_GAME_PATH .."/EmojiHotUpdate/project_" .. emojiName .. ".manifest")
		-- 	local isExist3 = cc.FileUtils:getInstance():isFileExist(GameCommonDefine.KW_GAME_PATH .."/EmojiHotUpdate3/project_" .. emojiName .. ".manifest")
    --         if isExist or isExist3 then
		-- 		if KW_HOTUPDATE_VERSION3 then
		-- 			local GameEmojisResChecker = import("..Hotupdate.GameEmojis.GameEmojisResChecker",CURRENT_MODULE_NAME)
		-- 			local gameEmojisResChecker = GameEmojisResChecker:new()
		-- 			gameEmojisResChecker._startHotFix(emojiDownloadPanel, GameCommonDefine.KW_GAME_PATH, "EmojiHotUpdate3/project_" .. emojiName .. ".manifest", emojiName)
		-- 		else
		-- 			local EmojiHotUpdate = import("..Hotupdate.GameEmojis.GameEmojisHotUpdate",CURRENT_MODULE_NAME)
		-- 			local emojiHotUpdate = EmojiHotUpdate:new()
		-- 			emojiHotUpdate:addCellCallBack(self,self.onUpdateCallBack)
		-- 			emojiHotUpdate:checkUpdate(emojiDownloadItemCopy,GameCommonDefine.KW_GAME_PATH .."/EmojiHotUpdate/project_" .. emojiName .. ".manifest",emojiName)
		-- 		end
    --         end

    --     end
    -- end
end

function UIEmoji:onUpdateCallBack(cell, type, data)
    if  type == Cell.TYPE.SUCCESS then
        cc.UserDefault:getInstance():setBoolForKey(KW_DATA_EMOJI_DOWNLOAD_ .. cell._emojiName, true)
        if cell._haveNewVersion then
            Game.Interface.showPopLayer("WeakHintLayer",{"表情包更新成功"})
        end
    else 
        Game.Interface.showPopLayer("WeakHintLayer",{"表情包更新失败"})
    end

    local emojiDownloadPanel = ccui.Helper:seekWidgetByName(self._rootNode,KW_POS_DOWNLOAD)
    if emojiDownloadPanel then 
        local uiDownload = emojiDownloadPanel:getChildByName(KW_UI_DOWNLOAD_ .. cell._emojiName)
        if uiDownload then 
            uiDownload:removeFromParent()
        end
    end
    if cell._emojiName == self._downloadEmojiName then
        local emojiTitleListView = ccui.Helper:seekWidgetByName(self._rootNode,KW_LISTVIEW_EMOJI_TITE)
        if emojiTitleListView then
            local child = emojiTitleListView:getChildByName(cell._emojiName)
            if child then 
                self:onTouchEmojiTitle(child, ccui.TouchEventType.ended)
            end
        end
    end

end

function UIEmoji:onEventDisptcherUpdateEmojiCallBack(event)
    if event._emojiName == self._downloadEmojiName then
        local emojiTitleListView = ccui.Helper:seekWidgetByName(self._rootNode,KW_LISTVIEW_EMOJI_TITE)
        if emojiTitleListView then
            local child = emojiTitleListView:getChildByName(event._emojiName)
            if child then 
                self:onTouchEmojiTitle(child, ccui.TouchEventType.ended)
            end
        end
    end
end

return UIEmoji   �L  