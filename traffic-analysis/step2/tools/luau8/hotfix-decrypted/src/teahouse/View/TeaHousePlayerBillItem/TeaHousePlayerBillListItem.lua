---@class TeaHousePlayerBillListItem : View
local TeaHousePlayerBillListItem = class("TeaHousePlayerBillListItem", TeaHouse.View)

TeaHousePlayerBillListItem.ColorText = cc.c3b(163,111,72)
TeaHousePlayerBillListItem.ColorTextSelf = cc.c3b(30,145,141)

--名字字号
TeaHousePlayerBillListItem.SizeTextName = {
    [1] = 42,
    [2] = 42,
    [3] = 42,
    [4] = 42,
    [5] = 38,
    [6] = 38,
    [7] = 34,
    [8] = 34,
}

TeaHousePlayerBillListItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHousePlayerBillItem/TeaHousePlayerBillListItem.csb",
    binding = {
        ["_KW_IMG_ITEM"] = { tag = "_KW_IMG_ITEM", name = "_imgItem", class = "img" },
        ["_KW_TEXT_ITEM_INDEX"] = { tag = "_KW_TEXT_ITEM_INDEX", name = "_textIndex", class = "text" },
        ["_KW_TEXT_GAMENAME"] = { tag = "_KW_TEXT_GAMENAME", name = "_textGameName", class = "text" },
        ["_KW_TEXT_ROOMID"] = { tag = "_KW_TEXT_ROOMID", name = "_textRoomId", class = "text" },
        ["_KW_TEXT_PLAYCOUNT"] = { tag = "_KW_TEXT_PLAYCOUNT", name = "_textPlayCount", class = "text" },
        ["_KW_TEXT_DATE_TIME"] = { tag = "_KW_TEXT_DATE_TIME", name = "_textTime", class = "text" },
        ["_KW_TEXT_ROOMCARD"] = { tag = "_KW_TEXT_ROOMCARD", name = "_textRoomCard", class = "text" },
        ["_KW_BTN_DETIAL"] = { tag = "_KW_BTN_DETIAL", name = "_btnDetail", class = "btn", events = "onBtnEventDetail" },
        ["_KW_PANEL_NAME_SCORE"] = { tag = "_KW_PANEL_NAME_SCORE", name = "_panelNameScore", class = "panel" },
        ["_KW_PANEL_SINGLE_NAME_SCORE"] = { tag = "_KW_PANEL_SINGLE_NAME_SCORE", name = "_panelSingleNameScore", class = "panel" },
    }
}

function TeaHousePlayerBillListItem:ctor()
    TeaHousePlayerBillListItem.super.ctor(self)
    self:initView()
end

function TeaHousePlayerBillListItem:initView()
    if self._imgItem then
        self._imgItem:removeFromParent()
        self:addChild(self._imgItem)
    end
    if self._btnDetail then
        self._btnDetail:setSwallowTouches(false)
    end
end

function TeaHousePlayerBillListItem:getSize()
    if self._imgItem ~= nil then
        return self._imgItem:getContentSize()
    end
    return cc.size(0, 0)
end

function TeaHousePlayerBillListItem:updateInfo(info, index)
    self:setIndex(index)
    local gameNameList = TeaHouse.BridgeData.getGameNameList()
    self:setGameName(gameNameList[info.gameID] or "")
    self:setRoomId(tostring(info.config or ""))
    self:setPlayCount(info.finishgames, info.totalgames)
    self:setDateTime(os.date("%Y-%m-%d %H:%M", info.starttime))

    --大小卡
    local exchangeRate = 1
    local smallCardId = TeaHouse.BridgeData.getSmallRoomCardID()
    local smallCardRatio = TeaHouse.BridgeData.getSmallRoomCardRatio()
    if info.nPropid ~= nil and info.nPropid == smallCardId then
        exchangeRate = smallCardRatio or 1
    end
    if info.prevaa == 1 then
        local checkIsOldGPGame = function(gameid)
            local gameids = TeaHouse.BridgeData.getUsedOldGPGames()
            if gameids then
                for _,v in pairs(gameids) do
                    if gameid == v then
                        return true
                    end
                end
            end
            return false
        end
        if TeaHouse.BridgeData.getIsNewBoxGameProcess() and not checkIsOldGPGame(info.gameID) then
            self:setRoomCard(info.nUsePropCnt/exchangeRate)
        elseif XH.areaData:isUsedNewGPGames(info.gameID) then  -- 该游戏为新GP游戏
            self:setRoomCard(info.nUsePropCnt/exchangeRate)
        else
            self:setRoomCard(info.nUsePropCnt/(info.playercnt*exchangeRate))
        end
    elseif info.nPayType ~= nil 
    and (info.nPayType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA 
    or info.nPayType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_WINNER) then
        self:setRoomCard(info.fee or 0, true)
    elseif info.originpaytype == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_AA then
        self:setRoomCard(info.nUsePropCnt/(info.playercnt*exchangeRate))
    else
        self:setRoomCard(info.nUsePropCnt/exchangeRate)
    end
    self:updateNameAndScores(info.playerInfos, info.endInfoEx)
end

function TeaHousePlayerBillListItem:setIndex(index)
    if not self._textIndex then
        return 
    end
    self._index = index
    self._textIndex:setString(tostring(index))
end

function TeaHousePlayerBillListItem:setGameName(nameStr)
    if not self._textGameName then
        return 
    end
    self._textGameName:setString(nameStr)
end

--房间号
function TeaHousePlayerBillListItem:setRoomId(roomId)
    if not self._textRoomId or not roomId then
        return 
    end
    self._textRoomId:setString(roomId)
end

--局数
function TeaHousePlayerBillListItem:setPlayCount(count, countTotal)
    if not self._textPlayCount or not count or not countTotal then
        return 
    end
    self._textPlayCount:setString(count.."/"..countTotal)
end

--时间
function TeaHousePlayerBillListItem:setDateTime(time)
    if not self._textTime then
        return 
    end
    self._textTime:setString(time)
end

--房卡
function TeaHousePlayerBillListItem:setRoomCard(roomCard, bFee)
    if not self._textRoomCard then
        return 
    end
    local extText = ""
    if bFee then
        self._textRoomCard:setString(extText .. "比赛场卡x" .. roomCard)
    else
        self._textRoomCard:setString(extText .. "房卡x" .. roomCard)
    end
end

function TeaHousePlayerBillListItem:updateNameAndScores(playerInfos,endInfoEx)
    if not self._panelNameScore or not self._panelSingleNameScore then
        return 
    end

    if self._tbNameScoreLayouts then
        for _, v in pairs(self._tbNameScoreLayouts) do
            v:removeFromParent()
        end
    end
    self._tbNameScoreLayouts = {}

    local displayUserId = TeaHouse.manager.playerBill:getDisplayUserId()
    local panelSize = self._panelNameScore:getContentSize()
    local playerCount = #playerInfos
    local singleWidth = panelSize.width/playerCount
    for i = 1, playerCount do
        local nameScoreLayout = self._panelSingleNameScore:clone()

        local textName = ccui.Helper:seekWidgetByName(nameScoreLayout, "KW_TEXT_PLAYER_NAME")
        textName:setString(TeaHouse.StringTool.getTrimName(playerInfos[i].nickname or ""))
        textName:setTextColor(displayUserId == playerInfos[i].numid and self.ColorTextSelf or self.ColorText)
        textName:setFontSize(self.SizeTextName[playerCount])

        local textScore = ccui.Helper:seekWidgetByName(nameScoreLayout, "KW_TEXT_PLAYER_SCORE")
        local totalScore = playerInfos[i].totalscore
        if totalScore >= 0 then
            totalScore = "+"..totalScore
        end
        if endInfoEx then
            local endInfoExItem = endInfoEx[tostring(playerInfos[i].numid)]
            if endInfoExItem then
                local kongsr = endInfoExItem["KONGSC"]
                local isSuanGangScore = endInfoExItem["ISSGF"] or 0
                if kongsr and isSuanGangScore == 0 then
                    totalScore = totalScore .. "("..kongsr..")"
                end
            end  
        end
        textScore:setString(totalScore)
        textScore:setTextColor(displayUserId == playerInfos[i].numid and self.ColorTextSelf or self.ColorText)
        textScore:setFontSize(self.SizeTextName[playerCount])

        nameScoreLayout:setPositionX(singleWidth*(i-1/2))
        self._panelNameScore:addChild(nameScoreLayout)
        self._tbNameScoreLayouts[i] = nameScoreLayout
    end
end

function TeaHousePlayerBillListItem:setDetailBtnFunc(func)
    self._detailFunc = func
end

function TeaHousePlayerBillListItem:onBtnEventDetail(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    if self._detailFunc then
        self._detailFunc(self._index)
    end
end

return TeaHousePlayerBillListItem$ 