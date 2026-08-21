local PopLayer = import(".PopLayer")
local GameBigWinLostLayer = class("GameBigWinLostLayer", PopLayer)
local CURRENT_MOUDEL_NAME = ...
local pathKeyWord = import("..Config.PathKeyWord",CURRENT_MOUDEL_NAME)
local CellWXImageDownload = import("GameCommon.Code.GameTeaBusiness.CellWXImageDownload")
local KW_CREATE_BOX_ROOM_CSB_PATH = pathKeyWord.KW_PATH_POP_LAYER_ART_RESOURCE .. "/game_big_win_lost_layer_"
local KW_BTN_CLOSE = "KW_BTN_CLOSE"
local KW_PLAYER_INFO_PANEL = "KW_PLAYER_INFO_PANEL_"
local KW_TEXT_PLAYER_NAME = "KW_TEXT_PLAYER_NAME"
local KW_TEXT_PLAYER_NUMBER_ID = "KW_TEXT_PLAYER_NUMBER_ID"
local KW_TEXT_PLAYER_TOTAL_SCORE = "KW_TEXT_PLAYER_TOTAL_SCORE"
local KW_TEXT_PLAY_COUNT = "KW_TEXT_PLAY_COUNT"
local KW_TOTOAL_END_HEAD_BACK = "KW_TOTOAL_END_HEAD_BACK"
local KW_END_PANEL_FACE_UI = "KW_END_PANEL_FACE_UI"
local KW_END_PANEL_NORMAL_FACE_UI = "KW_END_PANEL_NORMAL_FACE_UI"
local KW_TEXT_TYPE = "KW_TEXT_TYPE_"
local KW_UI_ROOM_HOST = "KW_UI_ROOM_HOST"
local KW_UI_BEST_WINNER = "KW_UI_BEST_WINNER"
local KW_UI_PLAYER_INFO_PANEL = "KW_UI_PLAYER_INFO_PANEL"
local KW_BTN_OK = "KW_BTN_OK"
local KW_BTN_FRIEND_OK = "KW_BTN_FRIEND_OK"
local KW_BTN_BIG_CONTINUE = "KW_BTN_BIG_CONTINUE"
local KW_UI_PLAYER_FACE = "KW_UI_PLAYER_FACE"
local KW_UI_TOTAL_SCORE = "KW_UI_TOTAL_SCORE"
local KW_BTN_BACK_LOBBY = "KW_BTN_BACK_LOBBY"
local KW_TEXT_ROOM_NUM = "KW_TEXT_ROOM_NUM"

function GameBigWinLostLayer:ctor()
    GameBigWinLostLayer.super.ctor(self)
    self._playerInfoNode = {}
    self._callBackFunc = nil
    self._playerCount = 4
    self._isRedBoxAniAdded = false
end

function GameBigWinLostLayer:init(func,playerCount,bContinueGame)
    self._callBackFunc = func
    if playerCount then
        self._playerCount = playerCount
    end
    self._csbResourcePath = KW_CREATE_BOX_ROOM_CSB_PATH .. self._playerCount .. ".csb"
    GameBigWinLostLayer.super.init(self)
    if bContinueGame then
        self:showContinueGame(bContinueGame)
    end
   
    
    XH.GT.UIFunction.addTouchEventListener(self._popLayer, KW_BTN_CLOSE,
    function (send, eventType)
        self:onTouchEventBackground(send, eventType)
    end
    )
    
    if KW_CONFIG_IS_IOS_CHECK then
        XH.GT.UIFunction.setVisible(self._popLayer, KW_BTN_OK, false)
        XH.GT.UIFunction.setVisible(self._popLayer, KW_BTN_FRIEND_OK, false)
        XH.GT.UIFunction.setPositionX(self._popLayer,KW_BTN_BACK_LOBBY,490)
    end
    
    XH.GT.UIFunction.addTouchEventListener(self._popLayer, KW_BTN_OK, function (send, eventType)
        self:onBtnShareOne(send, eventType)
    end)
    
    XH.GT.UIFunction.addTouchEventListener(self._popLayer, KW_BTN_FRIEND_OK, function (send, eventType)
        self:onBtnShareFriend(send, eventType)
    end)
    
    XH.GT.UIFunction.addTouchEventListener(self._popLayer, KW_BTN_BACK_LOBBY, function (send, eventType)
        self:onTouchEventBackground(send, eventType)
    end)
    
    XH.GT.UIFunction.addTouchEventListener(self._popLayer, KW_BTN_BIG_CONTINUE, function (send, eventType)
        self:onTouchEventContinueGame(send, eventType)
    end)
    
    local index = 1
    while true do
        local node = XH.GT.UIFunction.seekWidgetByName(self._popLayer,KW_PLAYER_INFO_PANEL .. index)
        if node then
            self._playerInfoNode[index] = node
        else
            break    
        end
        index = index + 1
    end
    local data = os.date("%Y-%m-%d %H:%M", socket.gettime())
    XH.GT.UIFunction.setText(self._popLayer,"KW_TEXT_ROOM_CREATE_TIME",data)
end

function GameBigWinLostLayer:onTouchEventBackground(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.GT.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_BIG_WIN_LOST_BACK_LOBBY)

    if self._canTouchBackground == false then
        return
    end
    
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("GameBigWinLostLayer.ContinueGame")
    event.bContinue = false
    eventDispatcher:dispatchEvent(event) 

    self:showLayer(false)
    
    local func = self._callBackFunc
    func(send, eventType)
end

function GameBigWinLostLayer:onTouchEventContinueGame(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if self._canTouchBackground == false then
        return
    end
    
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("GameBigWinLostLayer.ContinueGame")
    event.bContinue = true
    eventDispatcher:dispatchEvent(event) 
   
    
end

function GameBigWinLostLayer:onBtnShareOne(send, eventType)
    if eventType == ccui.TouchEventType.began then
    end

    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.GT.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_BIG_WIN_LOST_SHARE_FRIENDS)

    local year = os.date("%Y")
    local mouth = os.date("%m")
    local day = os.date("%d")
    local hour = os.date("%H")
    local min = os.date("%M")
    local second = os.date("%S")
    local strTime = year .. mouth .. day .. hour .. min .. second

    local function share(succeed, outputFile)
        if not succeed or not cc.FileUtils:getInstance():isFileExist(outputFile) then print("截图失败！！！") return end
        local info = {
            textTitle = KW_CONFIG_APP_NAME .. strTime or "", --分享标题
            imagePath = outputFile, --微信不用
            type = "pic", --word是文字分享，url网页模式分享，pic分享图片
            scene = 0, --0是分享到好友会话，1是分享到朋友圈
            imageUrl = "", --分享图片地址（分享网页模式，需要传安卓包名）
            text = KW_TEXT_SHARE_TO_CICLE_BIG_WINLOST or "", --分享内容 
            sharePath = KW_MOCHUANG_LINK_URL or "",
        }
        XH.bf.CellShare:getInstance():start(info)
    end
    if device.platform == "ios" then
        cc.utils:captureScreen(share, "winlost.jpg")
    else
        cc.utils:captureScreen(share, "/mnt/sdcard/winlost.jpg")
    end
end
function GameBigWinLostLayer:showContinueGame(render)
    if render then
        XH.GT.UIFunction.setVisible(self._popLayer,KW_BTN_BIG_CONTINUE,true)
        XH.GT.UIFunction.setVisible(self._popLayer,KW_BTN_BACK_LOBBY,false)
    else
        XH.GT.UIFunction.setVisible(self._popLayer,KW_BTN_BIG_CONTINUE,false)
        XH.GT.UIFunction.setVisible(self._popLayer,KW_BTN_BACK_LOBBY,true)
    end
    
end

function GameBigWinLostLayer:onBtnShareFriend(send, eventType)
    if eventType == ccui.TouchEventType.began then
    end

    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.GT.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_BIG_WIN_LOST_SHARE_CIRCLE)

    if device.platform == "windows" then
        local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
        local event = cc.EventCustom:new("RedBoxListenerEvent.GameBigWinLostLayer")
        event.actionType = "succeed"
        eventDispatcher:dispatchEvent(event)
        return
    end


    local year = os.date("%Y")
    local mouth = os.date("%m")
    local day = os.date("%d")
    local hour = os.date("%H")
    local min = os.date("%M")
    local second = os.date("%S")
    local strTime = year .. mouth .. day .. hour .. min .. second

    local function share(succeed, outputFile)
        if not succeed then print("截图失败！！！") return end
        local info = {
            textTitle = KW_CONFIG_APP_NAME .. strTime or "", --分享标题
            imagePath = outputFile, --微信不用
            type = "pic", --word是文字分享，url网页模式分享，pic分享图片
            scene = 1, --0是分享到好友会话，1是分享到朋友圈
            imageUrl = "", --分享图片地址（分享网页模式，需要传安卓包名）
            text = KW_TEXT_SHARE_TO_FRIEND_BIG_WINLOST or "", --分享内容 
            sharePath = KW_MOCHUANG_LINK_URL or "",
        }
        XH.bf.CellShare:getInstance():addCellCallBack(XH.bf.CellShare:getInstance(), function(cell, cellShare, success, flag)
            if success then
                -- local TransmitShareTask = import(KW_PATH_COMMON_GAMETEABUSSINESS..".Task.TransmitShareTask")
                -- local transmitShareTask = TransmitShareTask:new()
                -- local shareFriends = 2 --用于https的标记1是点击分享朋友圈，2是大分享朋友圈
                -- transmitShareTask:start(shareFriends,15)    
                local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
                local event = cc.EventCustom:new("RedBoxListenerEvent.GameBigWinLostLayer")
                event.actionType = "succeed"
                eventDispatcher:dispatchEvent(event)
            end
        end)
        XH.bf.CellShare:getInstance():start(info)
    end
    if device.platform == "ios" then
        cc.utils:captureScreen(share, "winlost.jpg")
    else
        cc.utils:captureScreen(share, "/mnt/sdcard/winlost.jpg")
    end
end

function GameBigWinLostLayer:setPlayerName(seat,strName)
    XH.GT.UIFunction.setText(self._playerInfoNode[seat],KW_TEXT_PLAYER_NAME,strName)
end

function GameBigWinLostLayer:setPlayerNumberID(seat,numberID)
    XH.GT.UIFunction.setText(self._playerInfoNode[seat],KW_TEXT_PLAYER_NUMBER_ID,numberID)
end

function GameBigWinLostLayer:setTotalScore(seat,totalScore)
    XH.GT.UIFunction.setText(self._playerInfoNode[seat],KW_TEXT_PLAYER_TOTAL_SCORE,totalScore)
end

function GameBigWinLostLayer:setTotalScoreColor(seat,color)
    XH.GT.UIFunction.setColor(self._playerInfoNode[seat],KW_TEXT_PLAYER_TOTAL_SCORE,color)
end

function GameBigWinLostLayer:setType(seat,typeIndex,strType)
    XH.GT.UIFunction.setText(self._playerInfoNode[seat],KW_TEXT_TYPE .. typeIndex,strType)
end

function GameBigWinLostLayer:setTypeColor(seat,typeIndex,color)
    XH.GT.UIFunction.setColor(self._playerInfoNode[seat],KW_TEXT_TYPE .. typeIndex,color)
end

function GameBigWinLostLayer:setRoomHost(seat)
    XH.GT.UIFunction.setVisible(self._playerInfoNode[seat],KW_UI_ROOM_HOST,true)
end

function GameBigWinLostLayer:setBestWinnerBG(seat,pngKewWord,textureType)
    XH.GT.UIFunction.loadTexture(self._playerInfoNode[seat],KW_PLAYER_INFO_PANEL .. seat,pngKewWord,textureType)
end

function GameBigWinLostLayer:setBestWinner(seat)
    for i = 1,#self._playerInfoNode do
    	if i == seat then
            XH.GT.UIFunction.setVisible(self._playerInfoNode[i],KW_UI_BEST_WINNER,true)
            XH.GT.UIFunction.loadTexture(self._playerInfoNode[i],KW_UI_PLAYER_INFO_PANEL,
                "box_room_end_panel_info_back_light.png",ccui.TextureResType.plistType)
            if self._playerCount ~= 2 then
                XH.GT.UIFunction.loadTexture(self._playerInfoNode[i],KW_PLAYER_INFO_PANEL .. i,
                    "game_over_list_bg1_2.png",ccui.TextureResType.plistType)
            else
                XH.GT.UIFunction.loadTexture(self._playerInfoNode[i],KW_PLAYER_INFO_PANEL .. i,
                    "game_over_list_bg2_2.png",ccui.TextureResType.plistType)
            end
            local nameNode = XH.GT.UIFunction.seekWidgetByName(self._playerInfoNode[i],KW_TEXT_PLAYER_NAME)
            if nameNode then
                nameNode:setColor(cc.c3b(255,255,255))
            end
            local idNode = XH.GT.UIFunction.seekWidgetByName(self._playerInfoNode[i],KW_TEXT_PLAYER_NUMBER_ID)
            if idNode then
                idNode:setColor(cc.c3b(255,255,255))
            end
            local scoreUINode = XH.GT.UIFunction.seekWidgetByName(self._playerInfoNode[i],KW_UI_TOTAL_SCORE)
            local scoreTextNode = XH.GT.UIFunction.seekWidgetByName(self._playerInfoNode[i],KW_TEXT_PLAYER_TOTAL_SCORE)
            if scoreUINode then
                scoreUINode:setColor(cc.c3b(255,255,255))
            end
            if scoreTextNode then
                scoreTextNode:setColor(cc.c3b(255,255,255))
            end
            for index = 1,6 do
                local textTypeNode = XH.GT.UIFunction.seekWidgetByName(self._playerInfoNode[i],KW_TEXT_TYPE .. index)
                if textTypeNode then
                    textTypeNode:setColor(cc.c3b(255,255,255))
                end
            end
        end
    end
end

function GameBigWinLostLayer:setAvatarPic(seat, sex, url)
    local face = XH.GT.UIFunction.seekWidgetByName(self._playerInfoNode[seat], KW_UI_PLAYER_FACE)
    if face then
        if sex == 48 or sex == 0 then
            sex = 0
        elseif sex == 49 or sex == 1 then
            sex = 1
        else
            sex = 1
        end
        local texturename = "game_sex_img_" .. sex .. ".png" 
        face:loadTexture(texturename, ccui.TextureResType.plistType)
        if url ~= "" then
            local cellWXImageDownload = CellWXImageDownload:new()
            cellWXImageDownload:addCellCallBack(self,function(self,cell, type, data)
                if type == 1 then
                    if face ~= nil then
                        face:loadTexture(data,ccui.TextureResType.localType)
                        local size = face:getContentSize()
                        face:setScale(82/size.width,87/size.height)
                    end
                end
            end)
            cellWXImageDownload:start(url,60)
        end
    end
end

function GameBigWinLostLayer:setPlayCount(currentPlayCount, totalPlayCount)
    local strPlayCount = "游戏局数：" .. currentPlayCount .. "/" .. totalPlayCount
    XH.GT.UIFunction.setText(self._popLayer,KW_TEXT_PLAY_COUNT,strPlayCount)
end

function GameBigWinLostLayer:setRoomNumber(roomNumber)
    local strRoomNumber = "房间号：" .. roomNumber
    XH.GT.UIFunction.setText(self._popLayer,KW_TEXT_ROOM_NUM,strRoomNumber)
end


return GameBigWinLostLayer]7