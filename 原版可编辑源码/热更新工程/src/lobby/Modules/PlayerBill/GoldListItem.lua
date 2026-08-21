---@class GoldListItem : View
local GoldListItem = class("GoldListItem", XH.ViewBase)
local GameSubConfiger = require("app.Config.Parse.GameSubConfiger")
local LobbyConfig = require("lobby.Modules.Lobby.Config")


local gameResults = {
    win = "player_bill_view_img_sheng.png",
    lose = "player_bill_view_img_bai.png",
    draw = "player_bill_view_img_ping.png"
}

-- 通用场次名称（部分游戏如斗地主等为 5 档）
local MathInfo = {
    [1] = "新手场",
    [2] = "进阶场",
    [3] = "高级场",
    [4] = "大师场",
    [5] = "土豪场"
}

-- 十三张场次名称（4 档：新手场、精英场、大师场、至尊场，至尊场为最高档）
local Card13MatchInfo = {
    [1] = "新手场",
    [2] = "精英场",
    [3] = "大师场",
    [4] = "至尊场",
    [5] = "土豪场",
}

-- 根据 gameId 和 roomLevel 获取金币战绩显示的场次名称
local function getGoldBillMatchName(gameId, roomLevel)
    if LobbyConfig.Card13GameIDList then
        for _, id in ipairs(LobbyConfig.Card13GameIDList) do
            if id == gameId then
                local idx = (roomLevel % 10) + 1
                return Card13MatchInfo[idx] or Card13MatchInfo[1]
            end
        end
    end
    return MathInfo[(roomLevel % 10) + 1] or MathInfo[1]
end

function GoldListItem:getCSBPath()
    return "cocosStudio/hall/CSB/GoldPlayerBillListItem.csb"
end

function GoldListItem:getBindingInfo()
    return {
        ["_KW_IMG_ITEM"] = { varName = "_imgItem" },
        ["_KW_TEXT_ITEM_INDEX"] = { varName = "_textIndex" },
        ["_KW_BMFONT_GAMENAME"] = { varName = "_textGameName" },
        ["_KW_BMFONT_MATCH_NAME"] = { varName = "_textMatchName" },
        ["_KW_BMFONT_DATE_TIME"] = { varName = "_textTime" },
        ["_KW_PANEL_NAME_SCORE"] = { varName = "_panelNameScore" },
        ["_KW_PANEL_SINGLE_NAME_SCORE"] = { varName = "_panelSingleNameScore" },
        ["_KW_IMAGE_RESULT"] = { varName = "_imageResult" },
    }
end

function GoldListItem:ctor()
    GoldListItem.super.ctor(self)
    self:initView()
end

function GoldListItem:initView()
    if self._imgItem then
        self._imgItem:removeFromParent()
        self:addChild(self._imgItem)
    end
end

function GoldListItem:getSize()
    if self._imgItem ~= nil then
        return self._imgItem:getContentSize()
    end
    return cc.size(0, 0)
end

-- 十三张在 GameSub 中无配置导致金币场战绩不显示名字，此处兜底
local function getGoldBillGameName(gameId)
    local name = GameSubConfiger:getGameNameByGameId(gameId)
    if name and name ~= "" then
        return name
    end
    if LobbyConfig.Card13GameIDList then
        for _, id in ipairs(LobbyConfig.Card13GameIDList) do
            if id == gameId then
                return LobbyConfig.Card13GameIDName[id] or "十三张"
            end
        end
    end
    return ""
end

function GoldListItem:updateInfo(info, index)
    self:setIndex(index)
    self:setGameName(getGoldBillGameName(info.gameId) or "")

    self._textMatchName:setString(getGoldBillMatchName(info.gameId, info.roomLevel))

    self:setDateTime(os.date("%Y-%m-%d %H:%M", tonumber(info.timestamp)))

    local score = tonumber(info.score) 
    local imageUrl = gameResults.win
    if score == 0 then
        imageUrl = gameResults.draw
    elseif score < 0 then
        imageUrl = gameResults.lose
    end
    self._imageResult:ignoreContentAdaptWithSize(true)
    self._imageResult:loadTexture(imageUrl, ccui.TextureResType.plistType)

    self:updateNameAndScores({numid = XH.playerData:getNumberID(), nickname = XH.playerData:getNickName(), totalscore =  score } )
end

function GoldListItem:onTouchEventCheckBoxSelect(send, eventType)
    --加载默认选项时不需要音效
    if eventType == ccui.CheckBoxEventType.selected then
        if self._selectCallBack then
            self._selectCallBack(self._index, true)
        end
    elseif eventType == ccui.CheckBoxEventType.unselected then
        if self._selectCallBack then
            self._selectCallBack(self._index, false)
        end
    end
end

function GoldListItem:setIndex(index)
    if not self._textIndex then
        return 
    end
    self._index = index
    self._textIndex:setString(tostring(index))
end

function GoldListItem:setGameName(nameStr)
    if not self._textGameName then
        return 
    end
    self._textGameName:setString(nameStr)
end

--时间
function GoldListItem:setDateTime(time)
    if not self._textTime then
        return 
    end
    self._textTime:setString(time)
end


function GoldListItem:updateNameAndScores(playerInfo)
    if not self._panelNameScore or not self._panelSingleNameScore then
        return 
    end

    local textName = ccui.Helper:seekWidgetByName(self._panelSingleNameScore, "KW_TEXT_PLAYER_NAME")
    local nicknameStr = XH.StringTool.cutStringByLength(playerInfo.nickname or "")
    textName:setString(nicknameStr)
    local textScore = ccui.Helper:seekWidgetByName(self._panelSingleNameScore, "KW_TEXT_PLAYER_SCORE")
    local totalScore = playerInfo.totalscore
    if totalScore >= 0 then
        totalScore = "+"..totalScore
    end
    textScore:setString(totalScore)
end

return GoldListItem