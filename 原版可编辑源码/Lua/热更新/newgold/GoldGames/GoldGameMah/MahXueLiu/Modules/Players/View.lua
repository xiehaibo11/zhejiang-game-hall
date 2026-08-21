local PlayersView = NG.GAME.gameClass("PlayersView", NG.ViewBase)
local RoomTableData = NG.GAME.gameRequire("Data.RoomTableData")
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")

function PlayersView:ctor()
    PlayersView.super.ctor(self)

    self._playerHeads = {}
    self:initView()
end

function PlayersView:getCSBPath()
    return "cocosStudio/GoldNew/Game/MahXueLiu/CSB/Player/PlayerLayer.csb"
end

function PlayersView:getBindingInfo()
    return {
        ["_KW_PLAYER_HEAD_POS_1"] = { varName = "_headPos1" },
        ["_KW_PLAYER_HEAD_POS_2"] = { varName = "_headPos2" },
        ["_KW_PLAYER_HEAD_POS_3"] = { varName = "_headPos3" },
        ["_KW_PLAYER_HEAD_POS_4"] = { varName = "_headPos4" },
        ["_KW_IMG_READY_1"] = { varName = "_readyIcon1" },
        ["_KW_IMG_READY_2"] = { varName = "_readyIcon2" },
        ["_KW_IMG_READY_3"] = { varName = "_readyIcon3" },
        ["_KW_IMG_READY_4"] = { varName = "_readyIcon4" },
        ["_KW_ANI_GOLD"] = { varName = "_KW_ANI_GOLD" },
        ["_KW_PANEL_GOLD"] = { varName = "_KW_PANEL_GOLD" },
    }
end

function PlayersView:getProxyEvents()
    return {
        { module = NG.goldGame:getModule("Players"), eventKeyName = "EVENT_NEW_PLAYER_DATA", callBack = "onNewPlayerData" },
        { module = NG.goldGame:getModule("Players"), eventKeyName = "EVENT_PLAYER_STATE_CHANGE", callBack = "onPlayerStateChange" },
        { module = NG.goldGame:getModule("Players"), eventKeyName = "EVENT_PLAYER_LEAVE", callBack = "onPlayerLeave" },
        { module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_TALK_MSG", callBack = "onTalkMsg" },
        { module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_RELINK_ENTER", callBack = "onRelinkEnter" },
        { module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_TAKE_FIRST", callBack = "onTakeFirst" },
        { module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_PLAY_CARD", callBack = "onPlayCard" },
        { module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_BANKER", callBack = "onBanker" },
        { module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_RESET_TABLE", callBack = "onResetTable" },
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_ON_MSG_RESULT", callBack = "onGameResult" },
        -- {module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_PLAYER_TRUST", callBack = "onPlayerTrust"},
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_SHOW_KUNG_SCORE_ANI", callBack = "onGuaFeng" },
        { module = NG.goldLobby:getModule("GoldCommon"), eventKeyName = "KW_FLUSH_NOTIFY_PROPS", callBack = "onFlushProps" },
        { module = NG.goldGame:getModule("Ocean"), eventKeyName = "EVENT_OCEAN_MSG", callBack = "onOceanMsg" },
    }
end

function PlayersView:initView()
    self:addPlayerHead(GameMainDefine.SELF_LOCAL_SEAT)
    self:updatePlayerHeadData(GameMainDefine.SELF_LOCAL_SEAT)
    for i = 1, 4 do
        if self["_headPos" .. i] then
            NG.goldGame:getModule("Players"):setUIData(0, i, self["_headPos" .. i])
        end
    end
    -- local lc = cc.LayerColor:create(cc.c4b(250,0,0,255), 50, 50)
    -- self:addChild(lc) 
    -- lc:setPosition(cc.p(NG.goldGame:getModule("Players"):getUIData(0,1):getPosition()))
    -- lc:runAction(cc.MoveTo:create(2, cc.p(NG.goldGame:getModule("Players"):getUIData(0,2):getPosition())))
end

function PlayersView:removePlayerHead(localSeat)
    if not self._playerHeads[localSeat] then
        return
    end
    self._playerHeads[localSeat]:removeFromParent()
    self._playerHeads[localSeat] = nil
end

function PlayersView:onFlushProps()
    local pd = NG.GAME.roomTableData:getPlayerByLocalSeat(GameMainDefine.SELF_LOCAL_SEAT)
    if pd then
        pd:setSr(GoldPlayerData.JoyBean)
        self:updatePlayerHeadData(GameMainDefine.SELF_LOCAL_SEAT)
    end
end

function PlayersView:onOceanMsg(event)

end
function PlayersView:onGuaFeng(event)
    local msg = event.msg
    self:playResultGoldAni(msg.iCurScore)
    for i = 0, 3 do
        local localSeat = NG.GAME.roomTableData:seatToLocal(i)
        local head = self._playerHeads[localSeat]
        local playerData = NG.GAME.roomTableData:getPlayerByLocalSeat(localSeat)
        if playerData then
            playerData:setSr(msg.iTotalScore[i])
        end
        if head then
            head:setGoldNum(playerData:getSr())
        end
    end
end

function PlayersView:addPlayerHead(localSeat)
    self:removePlayerHead(localSeat)
    if not self["_headPos" .. localSeat] then
        return
    end
    local head
    if localSeat == 2 then
        head = NG.GAME.gameRequire("Modules.Players.SelfPlayerHead").new({ localSeat = localSeat })
    else
        head = NG.GAME.gameRequire("Modules.Players.PlayerHead").new({ localSeat = localSeat })
    end
    if head then
        head:setName("PlayerHead")
        self["_headPos" .. localSeat]:addChild(head)
        self._playerHeads[localSeat] = head
    end
    return head
end

function PlayersView:onNewPlayerData(event)
    local localSeat = NG.GAME.roomTableData:seatToLocal(event.msg.seat)
    self:addPlayerHead(localSeat)
    self:updatePlayerHeadData(localSeat)
end

function PlayersView:updatePlayerHeadData(localSeat)
    local head = self._playerHeads[localSeat]
    local playerData = NG.GAME.roomTableData:getPlayerByLocalSeat(localSeat)
    if head and playerData then
        head:setPlayerName(playerData:getNickname())
        head:setGoldNum(playerData:getSr())
        head:setSex(playerData:getSex())
        head:setHeadUrl(playerData:getHeadUrl())
    elseif head and localSeat == GameMainDefine.SELF_LOCAL_SEAT then
        head:setPlayerName(GoldPlayerData.NickName)
        head:setGoldNum(GoldPlayerData.JoyBean)
        head:setSex(GoldPlayerData.Sex)
        head:setHeadUrl(GoldPlayerData.Head)
    end
end

function PlayersView:onPlayerLeave(event)
    if NG.goldGame:getModule("GameMain"):getData():getGameStart(false) then
        return
    end
    local localSeat = NG.GAME.roomTableData:seatToLocal(event.msg.seat)
    self:showReadyIcon(localSeat, false)
    if localSeat ~= GameMainDefine.SELF_LOCAL_SEAT then
        self:removePlayerHead(localSeat)
    else
        --如果是自己离开，直接清除其他玩家头像
        self:removePlayerHead(GameMainDefine.PlayerEnum.LEFT)
        self:removePlayerHead(GameMainDefine.PlayerEnum.RIGHT)
    end
end

function PlayersView:onPlayerStateChange(event)
    local localSeat = NG.GAME.roomTableData:seatToLocal(event.msg.seat)
    local playerData = NG.GAME.roomTableData:getPlayerBySeat(event.msg.seat)
    self:showReadyIcon(localSeat, playerData:getPlayState() == 2)
end

function PlayersView:showReadyIcon(localSeat, isShow)
    if self["_readyIcon" .. localSeat] then
        self["_readyIcon" .. localSeat]:setVisible(isShow or false)
    end
end

function PlayersView:onTalkMsg(msg)
    print('俏皮话')
    local data = msg.data
    local playerData = RoomTableData:getInstance():getPlayerByNumid(data.m_areaid, data.m_numberid)
    if playerData then
        self:showTalkMsg(playerData:getLocalSeat(), data.m_talkindex)
    end
end

function PlayersView:showTalkMsg(localSeat, talkIndex)
    if not self["_headPos" .. localSeat] then
        return
    end
    local head = self["_headPos" .. localSeat]:getChildByName("PlayerHead")
    if head then
        head:showTalkMsg(talkIndex)
    end
end

function PlayersView:updateHandCardsCount(isShow)
    -- for localSeat, playerHead in pairs(self._playerHeads) do
    --     local count = NG.goldGame:getModule("GameMain"):getData():getHandCardsCount(localSeat)
    --     playerHead:showCardNum(isShow or false, count)
    -- end
end

function PlayersView:onRelinkEnter(event)
    self:updateHandCardsCount(true)
end

function PlayersView:onPlayCard(event)
    self:updateHandCardsCount(true)
end

function PlayersView:onTakeFirst(event)
    self:updateHandCardsCount(true)
end

function PlayersView:onBanker(event)
    local gameData = NG.goldGame:getModule("GameMain"):getData()
    local bankerSeat = gameData:getBankerSeat()
    for localSeat, playerHead in pairs(self._playerHeads) do
        playerHead:showLandlordIcon(bankerSeat == localSeat)
    end
end

function PlayersView:onResetTable()
    for localSeat = 1, GameMainDefine.MAX_PLAYER do
        self:showReadyIcon(localSeat, false)
        if localSeat ~= GameMainDefine.SELF_LOCAL_SEAT then
            self:removePlayerHead(localSeat)
        end
    end
end

function PlayersView:onGameResult()
    self:updateHandCardsCount(false)

end

function PlayersView:showTrust(localSeat, isTrust)
    if not self._playerHeads[localSeat] then
        return
    end
    self._playerHeads[localSeat]:showTrust(isTrust)
end

function PlayersView:onPlayerTrust(event)
    local localSeat = event.msg.localSeat
    local gameData = NG.goldGame:getModule("GameMain"):getData()
    local isTrust = gameData:getTrustByLocalSeat(localSeat)
    self:showTrust(localSeat, isTrust)
end

-- 头像播放金币飘动画
function PlayersView:playResultGoldAni(winLost)
    self._KW_PANEL_GOLD:removeAllChildren()
    local fromGoldIconFlyNodes = {}
    local toGoldIconFlyNodes = {}
    -- 输的往赢的飞
    local goldNodes = self:getGoldNoedes()
    if #goldNodes ~= 4 then
        return
    end
    for i = 0, 3 do
        local localSeat = NG.GAME.roomTableData:seatToLocal(i)
        if winLost[i] > 0 then -- 赢
            toGoldIconFlyNodes[#toGoldIconFlyNodes + 1] = goldNodes[localSeat]
        elseif winLost[i] < 0 then -- 输
            fromGoldIconFlyNodes[#fromGoldIconFlyNodes + 1] = goldNodes[localSeat]
        end
    end
    local totalCount = 8
    local curCount = 0
    for i = 1, #fromGoldIconFlyNodes do
        for j = 1, #toGoldIconFlyNodes do
            for k = 1, totalCount do
                curCount = curCount + 1
                local isEnd = false
                if curCount == totalCount * 2 then
                    isEnd = true
                end
                self:startGoldAniSingle(fromGoldIconFlyNodes[i], toGoldIconFlyNodes[j], isEnd)
            end
        end
    end
end

-- 获取所有金币节点
function PlayersView:getGoldNoedes()
    local goldNodes = {}
    for i = 1, 4 do
        local tempHead = self._playerHeads[i]
        if tempHead ~= nil then
            local worldPos = tempHead._goldNode:convertToWorldSpace(cc.p(0, 0))
            local localPos = self._KW_PANEL_GOLD:convertToNodeSpace(worldPos) --世界坐标转换为本地坐标
            local posX = localPos.x + tempHead._goldNode:getContentSize().width * 0.5
            local posY = localPos.y + tempHead._goldNode:getContentSize().height * 0.5
            goldNodes[#goldNodes + 1] = cc.p(posX, posY)
        end
    end
    return goldNodes
end

-- 创建金币动画节点
function PlayersView:startGoldAniSingle(pos, endPos, isEnd)
    local goldNode = self._KW_ANI_GOLD:clone()
    local params = { path = "NewGoldRes/Spine/Common/", tex = "Caifuzhuanyi_jinbi.json", ske = "Caifuzhuanyi_jinbi.atlas", armatureName = "animation4" }
    local spineNode = display.playDargonBonesSpine(params)
    if spineNode then
        self._KW_PANEL_GOLD:addChild(goldNode)
        goldNode:setAnchorPoint(cc.p(0.5, 0.5))
        goldNode:addChild(spineNode)
        goldNode:setVisible(true)
        goldNode:setScale(2)
        goldNode:setPosition(pos)
        local dt = math.floor(math.random() * 5) * 0.1 + 0.3
        local actSequence = cc.Sequence:create(cc.DelayTime:create(0.1), cc.MoveTo:create(dt, endPos), cc.DelayTime:create(0.1), cc.CallFunc:create(function(isEnd)
            if isEnd then
                self._KW_PANEL_GOLD:removeAllChildren()
                NG.goldGame:getModule("GameMain"):showHeadSGAni()
            end
        end))
        goldNode:runAction(actSequence)
        return goldNode
    end
    return nil
end

return PlayersView