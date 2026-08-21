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
local KW_LISTVIEW_SCORE = "KW_LISTVIEW_SCORE"
local KW_PANEL_SCORE_ITEM_TEMPLATE = "KW_PANEL_SCORE_ITEM_TEMPLATE"
local KW_BTN_SHARE = "KW_BTN_SHARE"


GameBigWinLostLayer.KW_SHARE_TYPE = {
    KW_WX = 1,
    KW_LB = 4,
    KW_BILL = 5,
    KW_MW = 6,
}

function GameBigWinLostLayer:ctor()
    GameBigWinLostLayer.super.ctor(self)
    self._playerInfoNode = {}
    self._callBackFunc = nil
    self._playerCount = 4
    self._isRedBoxAniAdded = false
    self._shareData = {}
end

function GameBigWinLostLayer:init(func,playerCount,bContinueGame)
    self._callBackFunc = func
    if playerCount then
        self._playerCount = playerCount
    end
    self._csbResourcePath = KW_CREATE_BOX_ROOM_CSB_PATH .. self._playerCount .. '_LB' .. ".csb"
    GameBigWinLostLayer.super.init(self)
    if bContinueGame then
        self:showContinueGame(bContinueGame)
    end
    Game.UIFunction.adapt9BoxHD(self._popLayer)
    local screenSize = cc.Director:getInstance():getWinSize()
    local bgNode = XH.GT.UIFunction.seekWidgetByName(self._popLayer, "KW_ROOT_LAYER")
    if bgNode then
        bgNode:setPositionX(screenSize.width/2)
    end
    self._canTouchBackground = false

    if KW_CONFIG_IS_IOS_CHECK then
        XH.GT.UIFunction.setVisible(self._popLayer, KW_BTN_OK, false)
        XH.GT.UIFunction.setVisible(self._popLayer, KW_BTN_FRIEND_OK, false)
        XH.GT.UIFunction.setPositionX(self._popLayer,KW_BTN_BACK_LOBBY,490)
    end

    XH.GT.UIFunction.addTouchEventListener(self._popLayer, KW_BTN_CLOSE, handler(self,self.onTouchEventClose))
    XH.GT.UIFunction.addTouchEventListener(self._popLayer, KW_BTN_OK, handler(self,self.onBtnShareOne))
    XH.GT.UIFunction.addTouchEventListener(self._popLayer, KW_BTN_FRIEND_OK, handler(self,self.onBtnShareFriend))
    XH.GT.UIFunction.addTouchEventListener(self._popLayer, KW_BTN_BACK_LOBBY, handler(self,self.onTouchEventBackLobby))
    XH.GT.UIFunction.addTouchEventListener(self._popLayer, KW_BTN_BIG_CONTINUE, handler(self,self.onTouchEventContinueGame))
    XH.GT.UIFunction.addTouchEventListener(self._popLayer, KW_BTN_SHARE, handler(self,self.onTouchEventShareAll))

    XH.GT.UIFunction.setVisible(self._popLayer, KW_BTN_SHARE, false)
    
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
    -- XH.GT.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_BIG_WIN_LOST_BACK_LOBBY)

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

function GameBigWinLostLayer:onTouchEventClose(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    -- XH.GT.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_BIG_WIN_LOST_BACK_LOBBY)
    self:showLayer(false)
    local func = self._callBackFunc
    if func then
        func(send, eventType)
    end
end

function GameBigWinLostLayer:onTouchEventBackLobby(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    -- XH.GT.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_BIG_WIN_LOST_BACK_LOBBY)
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

function GameBigWinLostLayer:onBtnShareOne()
    -- XH.GT.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_BIG_WIN_LOST_SHARE_FRIENDS)
    if device.platform == "windows" then
        return
    end

    local year = os.date("%Y")
    local mouth = os.date("%m")
    local day = os.date("%d")
    local hour = os.date("%H")
    local min = os.date("%M")
    local second = os.date("%S")
    local strTime = year .. mouth .. day .. hour .. min .. second
    local imgName = "winlost" .. strTime .. ".jpg"
    local function shareFunc(succeed, outputFile)
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
    self:captureScreenshot(share, imgName)
    -- cc.utils:captureScreen(shareFunc, "winlost.jpg")
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
    -- XH.GT.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_BIG_WIN_LOST_SHARE_CIRCLE)

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

    local function shareFunc(succeed, outputFile)
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
    self:captureScreenshot(share, "winlost.jpg")
    -- cc.utils:captureScreen(shareFunc, "winlost.jpg")
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

function GameBigWinLostLayer:setRoomHost(lSeat)
    for localSeat = 1 , Game.FrameworkFunction.getMaxPlayer()do
        if lSeat == localSeat then
            XH.GT.UIFunction.setVisible(self._playerInfoNode[localSeat],KW_UI_ROOM_HOST,true)
        else
            XH.GT.UIFunction.setVisible(self._playerInfoNode[localSeat],KW_UI_ROOM_HOST,false)
        end
    end
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

            self._playerInfoNode[i]:setContentSize(212,410)
            local nameNode = XH.GT.UIFunction.seekWidgetByName(self._playerInfoNode[i],KW_TEXT_PLAYER_NAME)
            if nameNode then
                nameNode:setColor(cc.c3b(255,255,255))
                if nameNode.setTextColor then
                    nameNode:setTextColor(cc.c3b(255,255,255))
                end
            end
            local idNode = XH.GT.UIFunction.seekWidgetByName(self._playerInfoNode[i],KW_TEXT_PLAYER_NUMBER_ID)
            if idNode then
                idNode:setColor(cc.c3b(255,255,255))
                if idNode.setTextColor then
                   idNode:setTextColor(cc.c3b(255,255,255)) 
                end
            end
            local playerNode = XH.GT.UIFunction.seekWidgetByName(self._popLayer, KW_PLAYER_INFO_PANEL .. seat)
            if playerNode then
                local lisview = XH.GT.UIFunction.seekWidgetByName(playerNode, KW_LISTVIEW_SCORE)
                if lisview then
                    local items = lisview:getItems()
                    if next(items) then
                        for _ , item in pairs(items) do
                            local children = item:getChildren()
                            if next(children) then
                                for _ , node in pairs(children)do
                                    node:setColor(cc.c3b(255,255,255))
                                    if node.setTextColor then
                                        node:setTextColor(cc.c3b(255,255,255))
                                    end
                                end
                            end
                        end
                    end
                end
            end
            
            local totalTitle = XH.GT.UIFunction.seekWidgetByName(self._playerInfoNode[i],KW_UI_TOTAL_SCORE)
            if totalTitle then
                totalTitle:setColor(cc.c3b(255,255,255))
                if totalTitle.setTextColor then
                    totalTitle:setTextColor(cc.c3b(255,255,255))
                end
            end
            local totalText = XH.GT.UIFunction.seekWidgetByName(self._playerInfoNode[i],KW_TEXT_PLAYER_TOTAL_SCORE)
            if totalText then
                totalText:setColor(cc.c3b(255,255,255))
                if totalText.setTextColor then
                   totalText:setTextColor(cc.c3b(255,255,255))
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

function GameBigWinLostLayer:setPerTotoalScore(localseat, scoreText)
    localseat = localseat or 0
    scoreText = scoreText or ""
    if localseat <= 0 or localseat >= 5 then
        return
    end
    if scoreText == "" then
        return
    end

    local playerNode = XH.GT.UIFunction.seekWidgetByName(self._popLayer, KW_PLAYER_INFO_PANEL..localseat)
    if playerNode then
        XH.GT.UIFunction.setText(playerNode, KW_TEXT_PLAYER_TOTAL_SCORE, scoreText)
    end
end

function GameBigWinLostLayer:setPerPlayCountScore(localseat, num, score)
    -- body
    localseat = localseat or 0
    num = num or -1
    score = score or ""

    if localseat <= 0 or localseat >= 5 then
        return
    end
    if num == -1 then
        return
    end
    if score == "" then
        return
    end
    local playerNode = XH.GT.UIFunction.seekWidgetByName(self._popLayer, KW_PLAYER_INFO_PANEL..localseat)
    if playerNode == nil then
        return
    end
    local lisview = XH.GT.UIFunction.seekWidgetByName(playerNode, KW_LISTVIEW_SCORE)
    if lisview == nil then
        return
    end
    local template = XH.GT.UIFunction.seekWidgetByName(self._popLayer, KW_PANEL_SCORE_ITEM_TEMPLATE)
    if template == nil then
        return
    end
    local text = "第"..num.."局"
    local tcopy = template:clone()
    XH.GT.UIFunction.setText(tcopy, "KW_TEXT_TYPE", text)
    XH.GT.UIFunction.setText(tcopy, "KW_TEXT_VALUE", tostring(score))
    lisview:pushBackCustomItem(tcopy)

    local width = tcopy:getContentSize().width
    local height = tcopy:getContentSize().height + lisview:getInnerContainerSize().height
    lisview:setInnerContainerSize(cc.size(width, height))
    lisview:setScrollBarEnabled(false)
end

function GameBigWinLostLayer:captureScreenshot(callback, fileName)
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

function GameBigWinLostLayer:onTouchEvenShareBill()
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
        "局数：" .. "共" .. (self._shareData.playCnt) .. "局",
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
    XH.GT.showPopLayer("WeakHintCopyLayer", { "已复制到粘贴板，可跳转到第三方聊天框粘贴并发送！" })
end

function GameBigWinLostLayer:onTouchEventShareAll(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setColor(cc.c3b(160,160,160))
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setColor(cc.c3b(255,255,255))
    end

    if eventType ~= ccui.TouchEventType.ended then
        return
    end
   
    XH.GT.showPopLayer("ShareBigWinLostLayer",{function (param)
        if param == GameBigWinLostLayer.KW_SHARE_TYPE.KW_WX then
            return handler(self, self.onBtnShareOne)
        elseif param == GameBigWinLostLayer.KW_SHARE_TYPE.KW_BILL then
            return handler(self, self.onTouchEvenShareBill)
        end
    end})
end

function GameBigWinLostLayer:setShareData(data)
    self._shareData = data
end

function GameBigWinLostLayer:showPlayerFrameByUrl(seat, url )
    local faceNode = Game.UIFunction.seekWidgetByName(self._playerInfoNode[seat], KW_UI_PLAYER_FACE)
    if faceNode and XH.GT.showPlayerFrame then
        XH.GT.showPlayerFrame(faceNode, 60, 60, true, url)
    end
end

return GameBigWinLostLayer