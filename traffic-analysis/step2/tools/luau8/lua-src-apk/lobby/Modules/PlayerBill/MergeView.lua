---@class PlayerBillMergeView : View
local PlayerBillMergeView = class("PlayerBillMergeView", XH.ViewBase)

function PlayerBillMergeView:getCSBPath()
    return "cocosStudio/hall/CSB/PlayerBillMergeView.csb"
end

function PlayerBillMergeView:getBindingInfo()
    return {
        ["_KW_TEXT_GAME_NAME"] = { varName = "_textGameName" },
        ["_KW_TEXT_ROOM_ID"] = { varName = "_textRoomID" },
        ["_KW_TEXT_PLAY_INFO"] = { varName = "_textPlayInfo" },
        ["_KW_TEXT_TIME"] = { varName = "_textTime" },
        ["_KW_BTN_BACK"] = { varName = "_btnBack", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnEventBack" },
        ["_KW_BTN_SHARE_BILL"] = { varName = "_btnShareBill", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnEventShareBill" },
        ["_KW_BTN_COPY_BILL"] = { varName = "_btnCopyBill", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnEventCopyBill" },
        ["_KW_PANEL_HEAD_LIST_ITEM"] = { varName = "_panelHeadListItem" },
        ["_KW_LISTVIEW_HEAD_LIST"] = { varName = "_listviewHeadList" },
    }
end

function PlayerBillMergeView:ctor(info)
    PlayerBillMergeView.super.ctor(self)
    self._info = info or {}
    self:initData()
    self:initView()
end

function PlayerBillMergeView:initData()
    self._playerInfo = {}
    self._gameNames = {}
    self._roomIDs = {}
    self._playInfo = {
        panTotal = 0,
        jieTotal = 0,
        personCount = 0
    }

    for _, billInfo in pairs(self._info) do
        if billInfo.config then
            self._roomIDs[billInfo.config] = true
        end
        self._gameNames[billInfo.gameID] = true

        for _, player in pairs(billInfo.playerInfos) do
            if not self._playerInfo[player.numid] then
                self._playerInfo[player.numid] = {}
                self._playerInfo[player.numid].numid = player.numid
                self._playerInfo[player.numid].name = player.nickname
                self._playerInfo[player.numid].url = player.szUrl
                self._playerInfo[player.numid].score = 0

                self._playInfo.personCount = self._playInfo.personCount + 1
            end
            self._playerInfo[player.numid].score = self._playerInfo[player.numid].score + player.totalscore
        end

        self._playInfo.panTotal = self._playInfo.panTotal + billInfo.finishgames
        self._playInfo.jieTotal = self._playInfo.jieTotal + 1
    end
end

local KW_MAX_GAMENAME_COUNT = 5 --最大显示游戏名数量
local KW_MAX_ROOMID_COUNT = 6 --最大显示房间号数量
function PlayerBillMergeView:initView()
    local gameNameIndex = 0
    local gameStr = ""
    local gameNameList = XH.areaData:getAreaGameNameList()
    for gameID, _ in pairs(self._gameNames) do
        local gameName = gameNameList[gameID] or ""
        if gameNameIndex >= KW_MAX_GAMENAME_COUNT then
            gameStr = gameStr .. ",......"
            break
        end
        gameStr = gameStr == "" and gameName or gameStr .. "," .. gameName
        gameNameIndex = gameNameIndex + 1
    end

    local roomIDIndex = 0
    local roomIDstr = ""
    for roomID, _ in pairs(self._roomIDs) do
        if roomIDIndex >= KW_MAX_ROOMID_COUNT then
            roomIDstr = roomIDstr .. ",......"
            break
        end
        roomIDstr = roomIDstr == "" and roomID or roomIDstr .. "," .. roomID
        roomIDIndex = roomIDIndex + 1
    end

    local lineShowPlayers = {}
    local headCountLine = 0
    for _, player in pairs(self._playerInfo) do
        table.insert(lineShowPlayers, player)
        headCountLine = (headCountLine + 1) > 3 and 3 or (headCountLine + 1)
        if #lineShowPlayers == 3 then
            self:addHeadListItem(lineShowPlayers, headCountLine)
            lineShowPlayers = {}
        end
    end
    self:addHeadListItem(lineShowPlayers, headCountLine)

    self:setGameName(gameStr)
    if XH.ChannelTool.checkIsDoubleKouGame() then
        self:setGameName("双扣")
    end
    self:setRoomID("房间号：" .. roomIDstr)
    self:setTime("时间：" .. os.date("%Y/%m/%d %H:%M", os.time()))
    self:setPlayInfo("共计：" .. self._playInfo.panTotal .. "盘（" .. self._playInfo.jieTotal .. "节） 玩家：" .. self._playInfo.personCount .. "人")
end

function PlayerBillMergeView:setGameName(nameStr)
    if not self._textGameName then
        return 
    end
    self._textGameName:setString(nameStr)
end

function PlayerBillMergeView:setRoomID(roomIDstr)
    if not self._textRoomID then
        return 
    end
    self._textRoomID:setString(roomIDstr)
end

function PlayerBillMergeView:setPlayInfo(playInfoStr)
    if not self._textPlayInfo then
        return 
    end
    self._textPlayInfo:setString(playInfoStr)
end

function PlayerBillMergeView:setTime(time)
    if not self._textTime then
        return 
    end
    self._textTime:setString(time)
end

function PlayerBillMergeView:setPlayerAndPlayCount()
    
end

function PlayerBillMergeView:onBtnEventBack(send, eventType)
    self:close()
end

function PlayerBillMergeView:onBtnEventShareBill(send, eventType)
    if not XH.sdkManager:isCanShareToThird() then
        self:doMergeInfoShareCopy()
        return
    end
    local appName = XH.SysTool:getAppName()
    
    local shareToWeChat = function(succeed, outputFile)
        if not succeed or not cc.FileUtils:getInstance():isFileExist(outputFile) then
            print("captureScreen failed")
            return
        end

        local shareInfo = {
            textTitle = appName or "",
            imagePath = outputFile,
            type = "pic",
            scene = 0,
            imageUrl = "",
            text = "",
            sharePath = "",
        }

        XH.sdkManager:startShare(shareInfo)
    end
    XH.SysTool.captureScreenshot(shareToWeChat, "billmerge.jpg")
end

function PlayerBillMergeView:onBtnEventCopyBill(send, eventType)
    self:doMergeInfoShareCopy()
end

function PlayerBillMergeView:doMergeInfoShareCopy()
    local shareStr = ""
    local playerInfo = {}
    for _, player in pairs(self._playerInfo) do
        table.insert(playerInfo, player)
    end
    table.sort(playerInfo, function(a, b)
        return a.score > b.score
    end)

    for index, playerPerInfo in ipairs(playerInfo) do
        local tempStr = string.format("玩家%d %s(%s): %s", index, playerPerInfo.name, playerPerInfo.numid, playerPerInfo.score)

        shareStr = shareStr .. tempStr .. "\n"
    end

    XH.SysTool.copyString(shareStr)
    XH.TipTool.showToast("复制战绩成功！粘贴分享给您的好友吧！")

    if XH.sdkManager:isInstallWeChat() then
        cc.Application:getInstance():openURL("weixin://")
    end
end

local KW_BILL_MERGE_HEAD_POS_PERCENT = {
    {0.5},
    {0.25, 0.75},
    {0.165, 0.5, 0.835}
} 
function PlayerBillMergeView:addHeadListItem(headInfos, headCountLine)
    if not self._panelHeadListItem then
        return
    end
    local item = self._panelHeadListItem:clone()
    if not item then
        return 
    end

    local size = self._listviewHeadList:getContentSize()
    local itemSize = item:getContentSize()
    itemSize.width = size.width
    item:setContentSize(itemSize)
    
    local headCount = headCountLine > 3 and 3 or headCountLine
    local PlayerBillMergeItem = require("lobby.Modules.PlayerBill.MergeItem")
    for index, headInfo in ipairs(headInfos) do
        if index > 3 then
            break
        end
        local headItem = PlayerBillMergeItem.new(headInfo)
        local percent = KW_BILL_MERGE_HEAD_POS_PERCENT[headCount][index]
        headItem:setPosition(cc.p(percent*itemSize.width,itemSize.height/2))
        item:addChild(headItem) 
    end
    self._listviewHeadList:addChild(item)
end

return PlayerBillMergeView�