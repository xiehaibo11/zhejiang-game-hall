---@class TeaHouseAgentBillTableItem : View
local TeaHouseAgentBillTableItem = class("TeaHouseAgentBillTableItem", TeaHouse.View)

local KW_MAX_SINGLE_PLAYER_COUNT = 4
TeaHouseAgentBillTableItem.ColorTextWinScore = cc.c3b(222, 75, 59)
TeaHouseAgentBillTableItem.ColorTextLoseScore = cc.c3b(30, 145, 141)

--名字字号
TeaHouseAgentBillTableItem.SizeTextName = {
    [1] = 36,
    [2] = 36,
    [3] = 36,
    [4] = 36,
    [5] = 34,
    [6] = 34,
    [7] = 34,
    [8] = 34,
}

TeaHouseAgentBillTableItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseAgentBillItem/TeaHouseAgentBillTableItem.csb",
    binding = {
        ["_KW_PANEL_ROOT"] = { tag = "_KW_PANEL_ROOT", name = "_panelRoot", class = "panel" },
        ["_KW_BTN_DETAIL"] = { tag = "_KW_BTN_DETAIL", name = "_btnDetail", class = "btn", events = "onDetailClicked" },
        ["_KW_TEXT_ROOM_NUMBER"] = { tag = "_KW_TEXT_ROOM_NUMBER", name = "_textRoomNumber", class = "text" },
        ["_KW_TEXT_GAME_NAME"] = { tag = "_KW_TEXT_GAME_NAME", name = "_textGameName", class = "text" },
        ["_KW_TEXT_BILL_TIME"] = { tag = "_KW_TEXT_BILL_TIME", name = "_textBillTime", class = "text" },
        ["_KW_TEXT_PLAY_COUNT"] = { tag = "_KW_TEXT_PLAY_COUNT", name = "_textPlayCount", class = "text" },
        ["_KW_TEXT_COST"] = { tag = "_KW_TEXT_COST", name = "_textCost", class = "text" },
        ["_KW_PANEL_NAME_SCORE"] = { tag = "_KW_PANEL_NAME_SCORE", name = "_panelNameScore", class = "panel" },
        ["_KW_PANEL_NAME_SCORE_ITEM"] = { tag = "_KW_PANEL_NAME_SCORE_ITEM", name = "_panelNameScoreItem", class = "panel" },
    }
}

function TeaHouseAgentBillTableItem:ctor(callback)
    TeaHouseAgentBillTableItem.super.ctor(self)

    self._callback = callback

    self:initUI()
end

function TeaHouseAgentBillTableItem:initUI()
    if self._panelRoot then
        self._panelRoot:removeFromParent()
        self:addChild(self._panelRoot)
    end
end

function TeaHouseAgentBillTableItem:updateInfo(info, index)
    self._info = info
    self._index = index
    self:updateNameAndScores(info.ledgerInfo.playerInfos,info.ledgerInfo.endInfoEx)
    if self._textRoomNumber then
        self._textRoomNumber:setString("房间号:" .. (info.ledgerInfo.roomNum or ""))
    end
    local sDate = os.date("%Y-%m-%d %H:%M:%S", info.ledgerInfo.starttime)
    if self._textBillTime then
        self._textBillTime:setString(sDate)
    end
    if self._textPlayCount then
        self._textPlayCount:setString("局数:" .. info.ledgerInfo.finishgames .. "/" .. info.ledgerInfo.totalgames)
    end
    if self._textCost then
        if XH.areaData:isUsedNewGPGames(info.ledgerInfo.gameID) and info.ledgerInfo.prevaa == 1 then
            local usePropCnt = info.ledgerInfo.nUsePropCnt * info.ledgerInfo.playercnt
            if info.ledgerInfo.propsid and info.ledgerInfo.propsid == TeaHouse.BridgeData.getSmallRoomCardID() then
                usePropCnt = usePropCnt / TeaHouse.BridgeData.getSmallRoomCardRatio()
            end    
            self._textCost:setString("房卡消耗:" .. tostring(usePropCnt))
        elseif TeaHouse.BridgeData.getIsNewBoxGameProcess() and info.ledgerInfo.propsid == TeaHouse.BridgeData.getSmallRoomCardID() then
            local nCardCost = info.nCardCost
            nCardCost = nCardCost / TeaHouse.BridgeData.getSmallRoomCardRatio()
            self._textCost:setString("房卡消耗:" .. tostring(nCardCost))    
        elseif (TeaHouse.BridgeData.getIsNewBoxGameProcess() and not TeaHouse.BridgeData.getSmallRoomCardID()) 
        or (TeaHouse.LOBBY_ID.SHAOXING3D == TeaHouse.BridgeData.getLobbyID()
        or TeaHouse.LOBBY_ID.WENZHOU == TeaHouse.BridgeData.getLobbyID()) then
            local nCardCost = info.nCardCost
            self._textCost:setString("房卡消耗:" .. tostring(nCardCost)) 
        else
            local usePropCnt = info.ledgerInfo.nUsePropCnt
            if info.ledgerInfo.propsid and info.ledgerInfo.propsid == TeaHouse.BridgeData.getSmallRoomCardID() then
                usePropCnt = usePropCnt / TeaHouse.BridgeData.getSmallRoomCardRatio()
            end    
            self._textCost:setString("房卡消耗:" .. tostring(usePropCnt))
        end
        -- -- 新GP下发的是人均消耗，老GP下发的是房间总消耗
        -- if info.ledgerInfo.prevaa == 1 and TeaHouse.BridgeData.getIsNewBoxGameProcess() then
        --      usePropCnt = usePropCnt * info.ledgerInfo.playercnt
        -- end
    end
    --显示游戏名
    local gameNameList = XH.areaData:getAreaGameNameList()
    local gameName = gameNameList[info.ledgerInfo.gameID] or ""
    self._textGameName:setString(gameName)
end

function TeaHouseAgentBillTableItem:updateNameAndScores(playerInfos, endInfoEx)
    if not self._panelNameScore or not self._panelNameScoreItem then
        return
    end

    if self._tbNameScoreLayouts then
        for _, v in pairs(self._tbNameScoreLayouts) do
            v:removeFromParent()
        end
    end
    self._tbNameScoreLayouts = {}

    local panelSize = self._panelNameScore:getContentSize()
    local playerCount = #playerInfos
    local singleWidth = panelSize.width / playerCount
    if playerCount > KW_MAX_SINGLE_PLAYER_COUNT then
        singleWidth = panelSize.width / KW_MAX_SINGLE_PLAYER_COUNT
    end
    local singleHeight = panelSize.height / 2
    for i = 1, playerCount do
        local nameScoreLayout = self._panelNameScoreItem:clone()
        local nickNameNode = nameScoreLayout:getChildByName("_KW_TEXT_NICKNAME_ITEM")
        local scoreNode
        if nickNameNode then
            scoreNode = nickNameNode:getChildByName("_KW_TEXT_SCORE_ITEM")
        end

        if nickNameNode then
            local strNickName = TeaHouse.StringTool.getTrimName(playerInfos[i].nickname or "")
            nickNameNode:setString(strNickName .. ":")
            nickNameNode:setFontSize(self.SizeTextName[playerCount])
        end
        if scoreNode then
            local strScore = tostring(playerInfos[i].totalscore)
            scoreNode:setColor(self.ColorTextLoseScore)
            scoreNode:setFontSize(self.SizeTextName[playerCount])

            if playerInfos[i].totalscore >= 0 then
                strScore = "+" .. strScore
                scoreNode:setColor(self.ColorTextWinScore)
            end
            if endInfoEx then
                local endInfoExItem = endInfoEx[tostring(playerInfos[i].numid)]
                if endInfoExItem then
                    local kongsr = endInfoExItem["KONGSC"]
                    local isSuanGangScore = endInfoExItem["ISSGF"] or 0
                    if kongsr and isSuanGangScore == 0 then
                        strScore = strScore .. "("..kongsr..")"
                    end
                end  
            end
            scoreNode:setString(strScore)

            scoreNode:setPositionX(nickNameNode:getContentSize().width + nickNameNode:getPositionX() + 5)
            scoreNode:setPositionY(nickNameNode:getContentSize().height / 2)
        end
        if playerCount <= KW_MAX_SINGLE_PLAYER_COUNT then
            nameScoreLayout:setPositionX(singleWidth * (i - 1 / 2))
        else
            if i <= KW_MAX_SINGLE_PLAYER_COUNT then
                nameScoreLayout:setPositionX(singleWidth * (i - 1 / 2))
            else
                nameScoreLayout:setPositionX(singleWidth * (i - KW_MAX_SINGLE_PLAYER_COUNT - 1 / 2))
            end
            nameScoreLayout:setPositionY(singleHeight * (3 - math.ceil(i / KW_MAX_SINGLE_PLAYER_COUNT) - 1 / 2))
        end
        self._panelNameScore:addChild(nameScoreLayout)
        self._tbNameScoreLayouts[i] = nameScoreLayout
    end
end

function TeaHouseAgentBillTableItem:onDetailClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if self._callback then
        self._callback(self._info)
    end
end

return TeaHouseAgentBillTableItem�