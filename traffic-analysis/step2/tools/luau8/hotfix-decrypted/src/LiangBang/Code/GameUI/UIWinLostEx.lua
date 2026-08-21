local UIWinLost = class("UIWinLost") 
local CURRENT_MODULE_NAME = ...
local PathKeyWord = import("..Config.PathKeyWord",CURRENT_MODULE_NAME)
local GameSceneDefine = import("..GameScene.GameSceneDefine",CURRENT_MODULE_NAME)
local KW_UI_WIN_LOST_CSB_PATH = GameSceneDefine.KW_GAME_CSB_PATH .. "GameWinLost.csb"
local KW_PATH_RESOUCE_FONT = "LiangBang/LiangBang/Fonts"
local CellWXImageDownload = import("GameCommon.Code.GameTeaBusiness.CellWXImageDownload")
local CardAlgorithm = import("..GameAlgorithmTZ.CardAlgorithm",CURRENT_MODULE_NAME)

local UICardsArea = import("GameCommon.Code.CardLayer.CardLayerBase.UICardsArea")
local UICardDefine = import("LiangBang.Code.CardLayer.UICardDefine")

local KW_NUM_MIN_XIANGFAN = 4 
local SY_XIANMIAN_KEY = false

local KW_ROOT_LAYER = "KW_ROOT_LAYER"
local KW_BTN_GO_ON = "KW_BTN_GO_ON"
local KW_BTN_CLOSE = "KW_BTN_CLOSE"

local KW_PLAYER_INFO_PANEL = 'KW_PLAYER_INFO_PANEL_'
local KW_TEXT_PLAYER_NUMBER_ID = 'KW_TEXT_PLAYER_NUMBER_ID'
local KW_UI_PLAYER_FACE = 'KW_UI_PLAYER_FACE'
local KW_UI_ROOM_HOST = 'KW_UI_ROOM_HOST'
local KW_TEXT_SCORE = 'KW_TEXT_SCORE_'
local KW_TEXT_PLAYER_TOTAL_SCORE = 'KW_TEXT_PLAYER_TOTAL_SCORE'
local KW_TEXT_PLAY_COUNT = 'KW_TEXT_PLAY_COUNT'
local KW_TEXT_ROOM_CREATE_TIME = 'KW_TEXT_ROOM_CREATE_TIME'
local KW_TEXT_ROOM_NUMBER = 'KW_TEXT_ROOM_NUMBER'
local KW_IMG_RANK = 'KW_IMG_RANK'
local KW_IMG_RANK_TITLE = 'KW_IMG_RANK_TITLE'
local KW_PANEL_WINLOST_CENTER = 'KW_PANEL_WINLOST_CENTER'

local KW_LISTVIEW_CARD = 'KW_LISTVIEW_CARD'
local KW_PANEL_CARD_TYPE_ITEM = 'KW_PANEL_CARD_TYPE_ITEM'
local KW_NODE_CARD = 'KW_NODE_CARD'
local KW_TEXT_CARD_SCORE = 'KW_TEXT_CARD_SCORE'
local KW_IMG_TITLE_WIN = 'KW_IMG_TITLE_WIN'
local KW_IMG_TITLE_LOST = 'KW_IMG_TITLE_LOST'
local KW_SCROVIEW = 'KW_SCROVIEW'
local KW_BTN_TOTAL_RESULT = 'KW_BTN_TOTAL_RESULT'

local KW_BTN_SHARE_WECHAT = 'KW_BTN_SHARE_WECHAT'
local KW_BTN_SHUFFLE = 'KW_BTN_SHUFFLE'
local KW_TEXT_GAME_RULE = 'KW_TEXT_GAME_RULE'
local KW_PANEL_BG = 'KW_PANEL_BG'
local KW_TEXT_GAME_SCORE_SELF = "KW_TEXT_GAME_SCORE_SELF"
local KW_TEXT_GAME_SCORE_OTHER = "KW_TEXT_GAME_SCORE_OTHER"
local KW_UI_IMG_SELF = "KW_UI_IMG_SELF"
local KW_TEXT_PLAYER_NAME = "KW_TEXT_PLAYER_NAME"
local KW_BTN_SHARE_ALL = "KW_BTN_SHARE_ALL"

local ENUM_WINLOST_ENDTYPE = {
    KW_ENDTYPE_TAOPAO = 1,
    KW_ENDTYPE_CHAODI = 2,
    KW_ENDTYPE_PINGKOU = 3,
    KW_ENDTYPE_DANKOU = 4,
    KW_ENDTYPE_SHUANGKOU = 5,
}

local ENUM_WINLOST_ENDTYPE_PNG = {
    KW_ENDTYPE_TAOPAO = "end_title_taopao.png",
    KW_ENDTYPE_CHAODI = "end_title_chaodi.png",
    KW_ENDTYPE_PINGKOU = "end_title_pingkou.png",
    KW_ENDTYPE_DANKOU = "end_title_dankou.png",
    KW_ENDTYPE_SHUANGKOU = "end_title_shuangkou.png",
}
--名次
local ENUM_RANK_PNG = {
    'wnilost_lb_num_1.png',
    'wnilost_lb_num_2.png',
    'wnilost_lb_num_3.png',
    'wnilost_lb_num_4.png',
}
-- 两帮图片
local ENUM_LIANGBANG = {
    'wnilost_yb_img_1.png',    --一帮
    'wnilost_lb_img_1.png',    --两帮
    'wnilost_md_img_1.png',    --免打
}

local ENUM_PLAYER_BG_PNG = {
    'wnilost_lb_img_bg_light.png',
    'wnilost_lb_img_bg_gray.png',
}

UIWinLost.KW_SHARE_TYPE = {
    KW_WX = 1,
    KW_LB = 4,
    KW_BILL = 5,
    KW_MW = 6,
}

--字体
local KW_WIN_TEXT_FNT = "yhdt_end_number1-export.fnt"
local KW_LOST_TEXT_FNT = "yhdt_end_number2-export.fnt"

local ENUM_END_TYPE = {
    EndType_LB_None = 0,
    EndType_LB_YiBang = 1,
    EndType_LB_LiangBang = 2,
    EndType_LB_MianDa = 3,
}

local ENUM_WIN_ORDER_TYPE = {
    KW_ENDTYPE_PINGKOU = {1,0},
    KW_ENDTYPE_DANKOU = {1,3},
    KW_ENDTYPE_SHUANGKOU = {1,2}
}

--座位转换函数(将座位转换成本地座位，自己在第一个,1,2,3,4)
function UIWinLost:changeSeatToResult(seat, selfServerSeat) -- seat: 0 1 2 3
    local selfSeat = selfServerSeat or Game.FrameworkFunction.getSelfSeat() 
    if seat == selfSeat then
        return 1
    end
    if  Game.FrameworkFunction.getChairs() == 2 then
        return 2
    else
        if seat == (selfSeat + 1) % Game.FrameworkFunction.getChairs() then
            return 2
        elseif seat == (selfSeat + 2) % Game.FrameworkFunction.getChairs() then
            return 3
        elseif seat == (selfSeat + 3) % Game.FrameworkFunction.getChairs() then
            return 4
        end 
    end
end

function UIWinLost:ctor()
    self._rootNode = nil
    self._playerCount = 4
    self._uiEndInfo = {}
    self._playerName = {}
    self._sWinOrder = {}
    self._gameID = 0
    self._sEndType = 0
    self._bigWinLostPanel = nil
    self._shareData = {}
end

function UIWinLost:init(node,playCount,gameID)
    if playCount then 
        self._playerCount = playCount
    end
    if gameID then
        self._gameID = gameID
    end

    local csbNode = cc.CSLoader:createNode(KW_UI_WIN_LOST_CSB_PATH)
    self._rootNode = csbNode:getChildByName(KW_ROOT_LAYER)
    if self._rootNode == nil then
        return
    end
    self._rootNode:removeFromParent(false)
    node:addChild(self._rootNode)

    --adapt
    --[[
    local screenSize = cc.size(1920,1080)
    local scale = (screenSize.width/screenSize.height) / (1136/640)
    if self._rootNode then
        self._rootNode:setScale(scale)
    end
    ]]

    Game.UIFunction.addTouchEventListenerByObj(self._rootNode,KW_BTN_GO_ON,self,self.onBtnEventContinue)
    Game.UIFunction.addTouchEventListenerByObj(self._rootNode,KW_BTN_CLOSE,self,self.onBtnEventClose)

    Game.UIFunction.addTouchEventListenerByObj(self._rootNode,KW_BTN_SHARE_WECHAT,self,self.onBtnEventShareWeChat)
    Game.UIFunction.addTouchEventListenerByObj(self._rootNode,KW_BTN_SHUFFLE,self,self.onBtnEventShuffle)
    Game.UIFunction.addTouchEventListenerByObj(self._rootNode,KW_BTN_TOTAL_RESULT,self,self.onBtnEventTotalResult)
    Game.UIFunction.addTouchEventListenerByObj(self._rootNode,KW_PANEL_BG,self,self.onBtnEventPanelBg)
    Game.UIFunction.addTouchEventListenerByObj(self._rootNode,KW_BTN_SHARE_ALL,self,self.onBtnEventShareAll)

    Game.UIFunction.setVisible(self._rootNode,KW_BTN_SHUFFLE,false)
    Game.UIFunction.setVisible(self._rootNode,KW_BTN_SHARE_ALL,false)

    for seat = 0 , Game.FrameworkFunction.getMaxPlayer() - 1 do 
        local localSeat = Game.FrameworkFunction.seatToLocal(seat)
        self._uiEndInfo[localSeat] = ccui.Helper:seekWidgetByName(self._rootNode,KW_PLAYER_INFO_PANEL .. localSeat)
    end

    local winlostCener = self._rootNode:getChildByName(KW_PANEL_WINLOST_CENTER)
    if winlostCener then
        local infoItem = ccui.Helper:seekWidgetByName(winlostCener, KW_PANEL_CARD_TYPE_ITEM)
        for index = 1 ,  Game.FrameworkFunction.getMaxPlayer() do
            local listViewNode = ccui.Helper:seekWidgetByName(self._uiEndInfo[index], KW_LISTVIEW_CARD)
            if listViewNode then
                listViewNode:setTouchEnabled(true)
                listViewNode:setScrollBarEnabled(false)
                listViewNode:removeAllChildren()
                if infoItem then
                    local scrowView = ccui.Helper:seekWidgetByName(infoItem, KW_SCROVIEW)
                    if scrowView then
                        scrowView:setSwallowTouches(false)
                    end
                    listViewNode:setItemModel(infoItem)
                end
            end
        end
    end
    cc.SpriteFrameCache:getInstance():addSpriteFrames(UICardDefine.KW_PATH_CARD_IMG)
end

function UIWinLost:captureScreenshot(callback, fileName)
    local fileFullPath = cc.FileUtils:getInstance():getWritablePath() .. fileName
    if cc.FileUtils:getInstance():isFileExist(fileFullPath) then
        os.remove(fileFullPath)
    end

    local screenSize = cc.Director:getInstance():getWinSize()
    local scale = 0.6
    local render = cc.RenderTexture:create(screenSize.width * scale, screenSize.height * scale, cc.TEXTURE2_D_PIXEL_FORMAT_RGB_A8888, 0x88F0)
    render:setKeepMatrix(true)
    render:begin()

    cc.Director:getInstance():getRunningScene():visit()
    render:endToLua()
    render:saveToFile(fileName, cc.IMAGE_FORMAT_JPEG, false)
    local retry = 6
    local callbackHanlder
    callbackHanlder = function()
        local exist = cc.FileUtils:getInstance():isFileExist(fileFullPath)
        if exist then
            callback(true, fileFullPath)
        elseif retry >= 0 then
          XH.SysTool.performWithDelayGlobal(callbackHanlder,0.5)
            retry = retry - 1
        else
            callback(false, nil)
        end
    end
    XH.SysTool.performWithDelayGlobal(callbackHanlder,0.5)
end

function UIWinLost:onBtnEventContinue(send,eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.95)
        send:setColor(cc.c3b(160,160,160))
        Game.GameSound.playButtonClick()
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255,255,255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:onBtnEventClose(send,eventType)
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("UIWinLost.ContinueGame")
    eventDispatcher:dispatchEvent(event)
    Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DOUBLE_BUCKLE_WIN_LOST_CONTINUE + self._gameID * 100)
end

function UIWinLost:showWinLostPanel(render)
    if self._rootNode then
        self._rootNode:setVisible(render)
        if render then 
            Game.GameSound.playSoundEnd()
        end
    end
end

function UIWinLost:onBtnEventClose(send,eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.95)
        send:setColor(cc.c3b(160,160,160))
        Game.GameSound.playButtonClick()
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255,255,255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:showWinLostPanel(false)
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("UIWinLost.ContinueGame")
    eventDispatcher:dispatchEvent(event)
    Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DOUBLE_BUCKLE_WIN_LOST_CLOSE + self._gameID * 100)

    if self._bigWinLostPanel then
        self._bigWinLostPanel._popLayer:setVisible(true)
    end
end

function UIWinLost:onBtnEventShareWeChat()
    print('share wechat')
    if device.platform == "windows" then
        return
    end
    local function shareFunc(succeed, outputFile)
        if not succeed then print("截图失败！！！") return end
        local info = {
            textTitle = "台州麻将", --分享标题
            imagePath = outputFile, --微信不用
            type = "pic", --word是文字分享，url网页模式分享，pic分享图片
            scene = 0, --0是分享到好友会话，1是分享到朋友圈
            imageUrl = "", --分享图片地址（分享网页模式，需要传安卓包名）
            text = "", --分享内容
            sharePath = GameSceneDefine.KW_MOCHUANG_LINK_URL,
        }
        XH.bf.CellShare:getInstance():start(info)
    end
    self:captureScreenshot(shareFunc, "winlost.jpg")
    -- cc.utils:captureScreen(shareFunc, "winlost.jpg")
end

function UIWinLost:onBtnEventShuffle(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.95)
        send:setColor(cc.c3b(160,160,160))
        Game.GameSound.playButtonClick()
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255,255,255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DATONG_WIN_LOST_SHUFFLE + self._gameID * 100)
    -- self:showWinLostPanel(false)
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("UIWinLost.Shuffle")
    if SY_XIANMIAN_KEY then
        event._free = 1
    else
        event._free = 0
    end
    eventDispatcher:dispatchEvent(event)
end

function UIWinLost:onBtnEventTotalResult(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.95)
        send:setColor(cc.c3b(160,160,160))
        Game.GameSound.playButtonClick()
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255,255,255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:showWinLostPanel(false)
    if self._bigWinLostPanel then
        self._bigWinLostPanel._popLayer:setVisible(true)
    end
end

function UIWinLost:onBtnEventPanelBg(send, eventType)
    if eventType == ccui.TouchEventType.began then
        if self._rootNode then self._rootNode:setVisible(false) end
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        if self._rootNode then self._rootNode:setVisible(true) end
    end
end
-- number id
function UIWinLost:setPlayerNumberID(seat, strID)
    local localseat = self:changeSeatToResult(seat)
    Game.UIFunction.setText(self._uiEndInfo[localseat],KW_TEXT_PLAYER_NUMBER_ID,strID)
end
-- head img
function UIWinLost:setPlayerPic(seat, sex , url)
    local localSeat = self:changeSeatToResult(seat)
    local tmpHeadUI = ccui.Helper:seekWidgetByName(self._uiEndInfo[localSeat],KW_UI_PLAYER_FACE)

    if tmpHeadUI then
        if sex == 48 or sex == 0 then
            sex = 0
        elseif sex == 49 or sex == 1 then
            sex = 1
        else
            sex = 1
        end
        local texturename = "game_sex_img_" .. sex .. ".png" 
        tmpHeadUI:loadTexture(texturename, ccui.TextureResType.plistType)
        if url ~= "" then
            local cellWXImageDownload = CellWXImageDownload:new()
            cellWXImageDownload:addCellCallBack(self,function(self,cell, type, data)
                if type == 1 then
                    if tmpHeadUI ~= nil then
                        tmpHeadUI:loadTexture(data,ccui.TextureResType.localType)
                        local size = tmpHeadUI:getContentSize()
                        tmpHeadUI:setScale(180/size.width,180/size.height)
                    end
                end
            end)
            cellWXImageDownload:start(url,60)
        end
    end
end
-- room host
function UIWinLost:setRoomHost(hostSeat)
    if not hostSeat then return end
    local localSeat = self:changeSeatToResult(hostSeat)
    for i = 1 , Game.FrameworkFunction.getChairs() do
        local _tmpSeat = self:changeSeatToResult(i - 1) 
        if _tmpSeat == localSeat then
            Game.UIFunction.setVisible(self._uiEndInfo[_tmpSeat],KW_UI_ROOM_HOST ,true) 
        else
            Game.UIFunction.setVisible(self._uiEndInfo[_tmpSeat],KW_UI_ROOM_HOST ,false)
        end
    end
end
-- typeValue
function UIWinLost:setScore(seat,typeIndex,strType)
    local localseat = self:changeSeatToResult(seat)
    Game.UIFunction.setText(self._uiEndInfo[localseat],KW_TEXT_SCORE .. typeIndex, tostring(strType))
end
--局数
function UIWinLost:setPlayCount(strCount)
    Game.UIFunction.setText(self._rootNode,KW_TEXT_PLAY_COUNT, strCount)
end
--time
function UIWinLost:setSystemTime()
    local date = os.date("%Y/%m/%d %H:%M:%S")
    Game.UIFunction.setText(self._rootNode,KW_TEXT_ROOM_CREATE_TIME, tostring(date))
end
--room nubmer
function UIWinLost:setRomNumber(strNumber)
    Game.UIFunction.setText(self._rootNode,KW_TEXT_ROOM_NUMBER, tostring(strNumber))
end
--swinorder { [1] = 0 , [2] = 1 , [3] = 3 , [4] = 2} 服务端座位号->名次
function UIWinLost:setWinOrder(sWinOrder)
    self._sWinOrder = sWinOrder
    -- 单通 or 双通
    print('hcc>>endType:' .. tostring(self._sEndType))
    if self._sEndType == ENUM_END_TYPE.EndType_LB_MianDa then
        return
    end

    local zeroNum = 0
    for index , value in pairs(sWinOrder) do
        if value == 0 then
            zeroNum = zeroNum + 1
        end
    end

    if zeroNum == 2 then
        for index , value in pairs(sWinOrder) do
            if value ~= 0 then
                local localSeat = self:changeSeatToResult(index - 1)
                Game.UIFunction.loadTexture(self._uiEndInfo[localSeat], KW_IMG_RANK, ENUM_RANK_PNG[value],ccui.TextureResType.plistType)
                Game.UIFunction.setVisible(self._uiEndInfo[localSeat] , KW_IMG_RANK , true)
            end
        end
    else
       for index , value in pairs(sWinOrder) do
            if value == 0 then
                value = 4
            end
            local localSeat = self:changeSeatToResult(index - 1)
            Game.UIFunction.loadTexture(self._uiEndInfo[localSeat], KW_IMG_RANK, ENUM_RANK_PNG[value],ccui.TextureResType.plistType)
            Game.UIFunction.setVisible(self._uiEndInfo[localSeat] , KW_IMG_RANK , true)
        end
    end
end

function UIWinLost:setEndTypeTitleRank(endType)
    if endType ~= ENUM_END_TYPE.EndType_LB_None then
        Game.UIFunction.setVisible(self._rootNode, KW_IMG_RANK_TITLE ,true)
        Game.UIFunction.loadTexture(self._rootNode, KW_IMG_RANK_TITLE, ENUM_LIANGBANG[endType],ccui.TextureResType.plistType)
    else
        Game.UIFunction.setVisible(self._rootNode, KW_IMG_RANK_TITLE ,false)
    end
end

function UIWinLost:setEndType(endType)
    self._sEndType = endType
end

function UIWinLost:setWinLostTitle(totalScore)
    if next(totalScore) then
        for serverSeat , score in pairs(totalScore) do
            local selfSeat = Game.FrameworkFunction.getSelfSeat()
            if selfSeat == serverSeat - 1 then
                local isWin = score >= 0
                if isWin then
                    Game.UIFunction.setVisible(self._rootNode, KW_IMG_TITLE_WIN ,true)
                    Game.UIFunction.setVisible(self._rootNode, KW_IMG_TITLE_LOST ,false)  
                else
                    Game.UIFunction.setVisible(self._rootNode, KW_IMG_TITLE_WIN ,false)
                    Game.UIFunction.setVisible(self._rootNode, KW_IMG_TITLE_LOST ,true)    
                end
            end
        end
    end
end

function UIWinLost:clearWinLostPanelUI()
    for seat = 1,self._playerCount do
        Game.UIFunction.setText(self._uiEndInfo[seat],KW_TEXT_PLAYER_NUMBER_ID,"")
        Game.UIFunction.setText(self._uiEndInfo[seat],KW_TEXT_PLAYER_TOTAL_SCORE,"")
        Game.UIFunction.setVisible(self._uiEndInfo[seat],KW_UI_ROOM_HOST ,false)
        Game.UIFunction.setVisible(self._uiEndInfo[seat] , KW_IMG_RANK , false)
        Game.UIFunction.setVisible(self._uiEndInfo[seat], KW_IMG_RANK_TITLE ,false)
        for index = 1 , 4 do
            Game.UIFunction.setText(self._uiEndInfo[seat],KW_TEXT_SCORE .. index,'0')
        end
        local faceNode = Game.UIFunction.seekWidgetByName(self._uiEndInfo[seat], "KW_UI_PLAYER_FACE")
        if faceNode then
            faceNode:removeAllChildren()
        end
    end

    Game.UIFunction.setText(self._rootNode,KW_TEXT_ROOM_NUMBER, "")
    Game.UIFunction.setText(self._rootNode,KW_TEXT_ROOM_CREATE_TIME, '')
    Game.UIFunction.setText(self._rootNode,KW_TEXT_PLAY_COUNT, '')
    Game.UIFunction.setText(self._rootNode,KW_TEXT_GAME_RULE, '')

    local winlostCener = self._rootNode:getChildByName(KW_PANEL_WINLOST_CENTER)
    if winlostCener then
        local infoItem = ccui.Helper:seekWidgetByName(winlostCener, KW_PANEL_CARD_TYPE_ITEM)
        for index = 1 ,  Game.FrameworkFunction.getMaxPlayer() do
            local listViewNode = ccui.Helper:seekWidgetByName(self._uiEndInfo[index], KW_LISTVIEW_CARD)
            if listViewNode then
                listViewNode:removeAllChildren()
            end
        end
    end
end

function UIWinLost:setBigWinLostPanel(panel)
    self._bigWinLostPanel = panel
end

function UIWinLost:showBigWinLostBtn(isFinal)
    if isFinal == true then
        Game.UIFunction.setVisible(self._rootNode,KW_BTN_GO_ON,false)
        Game.UIFunction.setVisible(self._rootNode,KW_BTN_TOTAL_RESULT,true)
    else
        Game.UIFunction.setVisible(self._rootNode,KW_BTN_GO_ON,true)
        Game.UIFunction.setVisible(self._rootNode,KW_BTN_TOTAL_RESULT,false) 
    end
end

function UIWinLost:setShuffleBtnEnable(enable)
    local shuffleBtn = Game.UIFunction.seekWidgetByName(self._rootNode, KW_BTN_SHUFFLE)
    if enable then
        if shuffleBtn then
            shuffleBtn:setTouchEnabled(true)
            shuffleBtn:setColor(cc.c3b(255,255,255))
        end        
    else
        if shuffleBtn then
            shuffleBtn:setTouchEnabled(false)
            shuffleBtn:setColor(cc.c3b(160,160,160))
        end
    end
end

function UIWinLost:setGameRule(str)
    Game.UIFunction.setText(self._rootNode,KW_TEXT_GAME_RULE, tostring(str))
end

function UIWinLost:setSelfSideScore(score)
    Game.UIFunction.setText(self._rootNode,KW_TEXT_GAME_SCORE_SELF, '本方得分：' .. tostring(score))
end

function UIWinLost:setOtherSideScore(score)
   Game.UIFunction.setText(self._rootNode,KW_TEXT_GAME_SCORE_OTHER, '对方得分：' .. tostring(score))
end

function UIWinLost:setBothSiceScore(graspScore)
    if not next(graspScore) then
        return
    end
    local selfScore = 0
    local otherScore = 0
    for index,v in pairs(graspScore) do
        if index - 1 == Game.FrameworkFunction.getSelfSeat() or index - 1 == Game.FrameworkFunction.getFriendSeat() then
            selfScore = selfScore + v
        else
            otherScore = otherScore + v
        end
    end
    self:setSelfSideScore(selfScore)
    self:setOtherSideScore(otherScore)
end

function UIWinLost:showSelfImg()
    local localSeat = 1
    for i = 1 , Game.FrameworkFunction.getChairs() do
        local _tmpSeat = self:changeSeatToResult(i - 1) 
        if _tmpSeat == localSeat then
            Game.UIFunction.setVisible(self._uiEndInfo[_tmpSeat],KW_UI_IMG_SELF ,true) 
        else
            Game.UIFunction.setVisible(self._uiEndInfo[_tmpSeat],KW_UI_IMG_SELF ,false)
        end
    end
end

function UIWinLost:setPlayerName(seat,strName)
    local localseat = self:changeSeatToResult(seat)
    Game.UIFunction.setText(self._uiEndInfo[localseat],KW_TEXT_PLAYER_NAME,tostring(strName))
end

function UIWinLost:setImgBg()
    local selfSeat = Game.FrameworkFunction.getSelfSeat()
    local friendSeat = Game.FrameworkFunction.getFriendSeat()
    local selfLocalSeat = self:changeSeatToResult(selfSeat)
    local friendLocalSeat = self:changeSeatToResult(friendSeat)
    if self._uiEndInfo[selfLocalSeat] then
        self._uiEndInfo[selfLocalSeat]:loadTexture(ENUM_PLAYER_BG_PNG[2],ccui.TextureResType.plistType)
    end
    if self._uiEndInfo[friendLocalSeat] then
        self._uiEndInfo[friendLocalSeat]:loadTexture(ENUM_PLAYER_BG_PNG[2],ccui.TextureResType.plistType)
    end
end

function UIWinLost:onTouchEvenShareBill()
    if self._shareData == nil or next(self._shareData) == nil then
        return
    end
    local year = os.date("%Y")
    local mouth = os.date("%m")
    local day = os.date("%d")
    local hour = os.date("%H")
    local min = os.date("%M")
    local second = os.date("%S")
    local strTime = year .. mouth .. day .. hour .. min .. second
    local info = {
        "游戏：" .. (XH.GT.GAME_NAME_LIST[self._shareData.gameId] or ""),
        "房号：" .. (self._shareData.roomId or ""),
        "局数：" .. "第" .. (self._shareData.playCnt) .. "局",
        "时间：" .. (os.date("%Y-%m-%d %H:%M:%S") or ""),
        "--------------------------",
    }
    for k, value in pairs(self._shareData) do
        if value and type(value) == "table" and next(value) and value.numid then
            if value.totalScore > 0 then
                info[#info + 1] = string.format("+%s %s(%s)", value.totalScore, value.name, value.numid)
            else
                info[#info + 1] = string.format("%s %s(%s)", value.totalScore, value.name, value.numid)
            end
        end
    end
    local shareText = table.concat(info, "\r\n")

    XH.GT.copyClipBoard(shareText)
    XH.TipTool.showToast("已复制到粘贴板，可跳转到第三方聊天框粘贴并发送！")
end

function UIWinLost:onBtnEventShareAll(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160,160,160))
        Game.GameSound.playButtonClick()
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(1.0)
        send:setColor(cc.c3b(255,255,255))
    end

    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    XH.GT.showPopLayer("ShareBigWinLostLayer",{function (param)
        if param == UIWinLost.KW_SHARE_TYPE.KW_WX then
            return handler(self, self.onBtnEventShareWeChat)
        elseif param == UIWinLost.KW_SHARE_TYPE.KW_BILL then
            return handler(self, self.onTouchEvenShareBill)
        end
    end})
end

function UIWinLost:setShareData(data)
    self._shareData = data
end

function UIWinLost:showHeadFrame(seat, url)
    local tseat = self:changeSeatToResult(seat)
    if XH.GT.showPlayerFrame then
        XH.GT.showPlayerFrame(Game.UIFunction.seekWidgetByName(self._uiEndInfo[tseat], "KW_UI_PLAYER_FACE"), 80,80, true, url)
    end
end

return UIWinLost!f