local RoomInfoView = CF.gameClass("RoomInfoView", "game.DoubleKou.BaseDoubleKou.Modules.RoomInfo.View")
local AnimationManager = CF.gameRequire("Manager.AnimationManager")

function RoomInfoView:getInfoNodeConfig()
    if CF.roomData and CF.roomData:isNewUI() then
        return {
            {Name = "win", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "赢", DefaultValueStr = "x1", img = "img_game_xl_ying.png", DefaultVisible = true},
            {Name = "lost", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "输", DefaultValueStr = "x1", img = "img_game_xl_shu.png", DefaultVisible = true},
            {Name = "gongScore", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "贡", DefaultValueStr = "0",img = "img_game_xl_gong.png", DefaultVisible = true},
            {Name = "addMultiple", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "倍    数", DefaultValueStr = "x1",img = "img_game_xl_bei.png", DefaultVisible = true},
        }
    else
        return {
            {Name = "baseScore", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "底    分", DefaultValueStr = "-", DefaultVisible = true},
            {Name = "winLost", NodeType = self.INFO_NODE_TYPE.TWO, KeyStr1 = "输", DefaultValueStr1 = "x1", KeyStr2 = "赢", DefaultValueStr2 = "x1", DefaultVisible = true},
            {Name = "addMultiple", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "倍    数", DefaultValueStr = "x1", DefaultVisible = true},
        }
    end
end

function RoomInfoView:getProxyEvents()
    local superTable = RoomInfoView.super.getProxyEvents(self)
    superTable[#superTable + 1] =  { module = CF.game:getModule("AddMultiple"), eventKeyName = "EVENT_ADD_MULTIPLE_INFO", callBack = "onAddMultiple" }
    superTable[#superTable + 1] =  { module = CF.roomData, eventKeyName = "EVENT_CLEAR_TABLE", callBack = "onClearTable"}
    superTable[#superTable + 1] =  { module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_GONG_SCORE_CHANGED", callBack = "onGongScoreChanged"}
    superTable[#superTable + 1] =  { module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_WIN_FIRE_ANI", callBack = "onPlayWinFireAni"}
    superTable[#superTable + 1] =  { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_CLEAR_WIN_FIRE_ANI", callBack = "onClearWinFireAni"}
    superTable[#superTable + 1] =  { module = CF.game:getModule("Match"), eventKeyName = "EVENT_MATCH_STATE_CHANGED", callBack = "onMatchStateChanged" }
    superTable[#superTable + 1] =  { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onMatchStateChanged" }
    return superTable
end

function RoomInfoView:initUI()
    RoomInfoView.super.initUI(self)
    if CF.roomData:is220Model() and CF.roomData:isNewUI() then
        self._roomInfoBg:setVisible(false)
    end
end

function RoomInfoView:onAddMultiple(event)
    if self and self.setOneInfoNodeValue then
        self:setOneInfoNodeValue("addMultiple", "x" .. event.msg.data.multi)
    end
end

function RoomInfoView:onClearTable(event)
    if self and self.setOneInfoNodeValue then
        self:setOneInfoNodeValue("addMultiple", "x" .. 1)
    end
end

function RoomInfoView:onGongScoreChanged(event)
    if not event or not event.msg then
        return
    end
    if self and self.setOneInfoNodeValue then
        self:setOneInfoNodeValue("gongScore", event.msg.gongScore or 0)
    end
end

function RoomInfoView:onPlayWinFireAni()
    local node = self:getInfoNodeByName("win")
    local node2 = CF.UITool.seekNodeByName(node, "KW_IMG_DI")
    if not node or not node._imgTitle or not node2 then
        return
    end
    node2:removeAllChildren()
    node._imgTitle:removeAllChildren()
    AnimationManager.playWinFireAni(node._imgTitle, node2)
end

function RoomInfoView:onClearWinFireAni()
    local node = self:getInfoNodeByName("win")
    local node2 = CF.UITool.seekNodeByName(node, "KW_IMG_DI")
    if not node or not node._imgTitle or not node2 then
        return
    end
    node2:removeAllChildren()
    node._imgTitle:removeAllChildren()
end

function RoomInfoView:onMatchStateChanged()
    if CF.roomData:isMatching() then
        self._roomInfoBg:setVisible(false)
    else
        self._roomInfoBg:setVisible(true)
    end
end

return RoomInfoView�