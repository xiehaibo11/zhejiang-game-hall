local PlayerView = CF.gameClass("PlayerView", CF.ViewBase)

function PlayerView:ctor(param)
    PlayerView.super.ctor(self)
    self._playerHeads = {}
end

function PlayerView:getCSBPath()
    if CF.roomData and CF.roomData:isNewUI() then
        return "cocosStudio/Common/CSB/GameBase/PlayerLayerNew.csb"
    else
        return "cocosStudio/Common/CSB/GameBase/PlayerLayer.csb"
    end
end

function PlayerView:getBindingInfo()
    return {
        ["_KW_PLAYER_HEAD_POS_"] = { varName = "_headPos", beginIndex = 1, endIndex = 4 },
        ["_KW_PANEL_PLAYER_HEAD_"] = { varName = "_head_panel_", beginIndex = 1, endIndex = 4 },
        ["_KW_IMG_READY_"] = { varName = "_readySp_", beginIndex = 1, endIndex = 4 },
        ["_KW_PLAYER_OPENCARD_HEAD_POS_2"] = { varName = "_headOpenCardPos2" },
        ["_KW_PLAYER_OPENCARD_HEAD_POS_4"] = { varName = "_headOpenCardPos4" },
        ["_KW_UI_PLAY_PROP_PANEL"] = {varName="_propAniPanel"},
        ["_KW_JUBAOPEN_ANI"] = {varName="_jubaopenTitleAni"},
        ["_KW_JUBAOPEN_ANI_2"] = {varName="_jubaopenParticleAni"},
    }
end

function PlayerView:getProxyEvents()
    return {
        { module = CF.roomData, eventKeyName = "EVENT_PLAYERLIST_CHANGED", callBack = "onPlayerListChanged" },
        { module = CF.roomData, eventKeyName = "EVENT_PLAYER_STATE_CHANGED", callBack = "onPlayerStateChanged" },
        { module = CF.roomData, eventKeyName = "EVENT_CLEAR_TABLE", callBack = "clearTable" },
        { module = CF.roomData, eventKeyName = "EVENT_ENTER_ANI_PROP_CHANGED", callBack = "onEnterAniPropChanged" },
        { module = CF.game:getModule("Player"), eventKeyName = "EVENT_SHOW_THROW_PROP_ANI", callBack = "onShowThrowPropAni"},
        { module = CF.game:getModule("Continue"), eventKeyName = "EVENT_GAME_CONTINUE", callBack = "onGameContinue" },
        { module = CF.roomData, eventKeyName = "EVENT_GAME_PLAYCOUNT_CHANGED", callBack = "onPlayCountChanged" },
        { module = CF.game:getModule("WinLost"), eventName = "EVENT_SHOW_GUIDE", callBack = "onShowCaiShen"},
        { module = CF.game:getModule("Player"), eventKeyName = "EVENT_HIDE_GUIDE_PROP", callBack = "onHidePropAni"},
        { module = CF.game:getModule("Player"), eventKeyName = "EVENT_INIT_READY_FLAG_UI", callBack = "initReadyFlagUI"},
        { module = CF.game:getModule("Player"), eventKeyName = "EVENT_PLAYER_READY", callBack = "onPlayerReady"},
        { module = CF.game:getModule("JuBaoPen"), eventKeyName = "EVENT_PLAY_TITLE_ANI", callBack = "playTitileAnimation"},
    }
end

function PlayerView:getAdaptationConfig()
    return {
        {node = self._headPos1, bRight = false, bHalf = false},
        {node = self._readySp_1, bRight = false, bHalf = false},
        {node = self._headPos3, bRight = true, bHalf = false},
        {node = self._readySp_3, bRight = true, bHalf = false},
        {node = self._headOpenCardPos2, bRight = false, bHalf = false},
        {node = self._headOpenCardPos4, bRight = true, bHalf = true},
    }
end

function PlayerView:showCaiShenIcon()

end

function PlayerView:updateCaiYunHeadNode(localSeat)
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return
    end
    CF.game:getModule("CaiYunAni"):updatePlayerHead(self._playerHeads[localSeat], localSeat)
end

function PlayerView:updateShuffleHeadNode(localSeat)
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return
    end
    local propUseModule = CF.game:getModule("PropUse")
    if propUseModule and propUseModule.updateShuffleHeadNode then
        propUseModule:updateShuffleHeadNode(self._playerHeads[localSeat], localSeat)
    end
end

--- 请神：按服务端座位取头像节点（对齐宝宝 GetPlayerHeadNodeByChairId）
--- @return headNode, bRight 气泡是否朝右
function PlayerView:getPlayerHeadNodeByChairId(chairId)
    if chairId == nil or not CF.roomData then
        return nil
    end
    local localSeat = CF.roomData:seatToLocal(chairId)
    if not CF.roomData:isValidLocalSeat(localSeat) then
        return nil
    end
    local head = self._playerHeads[localSeat] 
    head = head and head._headFrame
    if not head or tolua.isnull(head) then
        return nil
    end
    -- 左侧/上方座位气泡朝右，右侧座位朝左（本机底部默认朝右）
    local bRight = localSeat ~= CF.GameDefine.LOCAL_SEAT.RIGHT
    return head, bRight
end

--- 请神头像挂接（对齐 CaiYunAni / PropUse 的 updateXxxHeadNode）
function PlayerView:updateQingShenHeadNode(localSeat)
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return
    end
    if not XH.lobby then
        return
    end
    local qingShen = XH.lobby:getModule("QingShen")
    if not (qingShen and qingShen.setTableGetPlayerFaceNodeFunc) then
        return
    end
    -- 与宝宝 GameFrameView:setGameFrameUISink 一致：注册取头像回调
    qingShen:setTableGetPlayerFaceNodeFunc(self, self.getPlayerHeadNodeByChairId)
end

function PlayerView:onPlayerListChanged(event)
    if self and self.removeAllPlayers and self.refrshSinglePlayer then
        self:removeAllPlayers()
        for seatId = 0, CF.roomData:getMaxPlayer() - 1 do
            local playerData = CF.roomData:getPlayerDataBySeatId(seatId)
            self:refrshSinglePlayer(seatId, playerData)
        end
    end
end

function PlayerView:onPlayerStateChanged(event)
    local msg = event.msg
    local seatId = msg.seatId
    local playerData = CF.roomData:getPlayerDataBySeatId(seatId)
    if playerData == nil then
        return
    end

    if playerData:getState() == playerData.USER_STATE.US_SEEING then
        return
    end

    if playerData:getStateEx() == playerData.USER_STATEEX.psReady then
        CF.soundManager:playSoundReady()
    end
    if self.updateReadyState then
        self:updateReadyState(seatId)
    end
end

function PlayerView:updateReadyState(seatId)
    local playerData = CF.roomData:getPlayerDataBySeatId(seatId)
    if playerData == nil then
        return
    end
    local isReady = playerData:getStateEx(playerData) == playerData.USER_STATEEX.psReady
    local localSeat = CF.roomData:seatToLocal(seatId)
    self:showReadyIcon(localSeat, isReady)
end

function PlayerView:refrshSinglePlayer(seatId, playerData)
    if playerData then
        --添加
        self:resetPlayerHead(seatId)
    else
        self:removePlayerHead(seatId)
    end
end

function PlayerView:resetPlayerHead(seatId)
    local localSeat = CF.roomData:seatToLocal(seatId)
    if not CF.roomData:isValidLocalSeat(localSeat) then 
        return
    end
    self:removePlayerHead(seatId)
    local playerHead = self:createPlayerHead(seatId)
    self["_head_panel_"..localSeat]:addChild(playerHead)
    self._playerHeads[localSeat] = playerHead
    if self.updateReadyState then
        self:updateReadyState(seatId)
    end
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
        self:showCaiShenIcon()
        self:addJuBaoPenJiView()
    end
    self:updateCaiYunHeadNode(localSeat)
    self:updateShuffleHeadNode(localSeat)
    self:updateQingShenHeadNode(localSeat)
end

function PlayerView:getHeadPosByLocalSeat(localSeat)
    if not self["_headPos"..localSeat] then
        return cc.p(0,0)
    end
    return cc.p(self["_headPos"..localSeat]:getPosition())
end

function PlayerView:createPlayerHead(seatId)
    local PlayerHead = CF.gameRequire("Modules.Player.HeadNode")
    local localSeat = CF.roomData:seatToLocal(seatId)
    local playerHead = PlayerHead.new({seatId = seatId})
    local headPos = self:getHeadPosByLocalSeat(localSeat)
    playerHead:setPosition(headPos)
    return playerHead
end

function PlayerView:removeAllPlayers()
    for localSeat = 1, CF.roomData:getMaxPlayer() do
        self:removePlayerHeadByLocalSeat(localSeat)
    end
end

function PlayerView:removePlayerHeadByLocalSeat(localSeat)
    if self._playerHeads[localSeat] then
        self._playerHeads[localSeat]:removeSelf()
        self._playerHeads[localSeat] = nil
    end
    --隐藏准备
    self:showReadyIcon(localSeat, false)
end

function PlayerView:removePlayerHead(seatId)
    local localSeat = CF.roomData:seatToLocal(seatId)
    self:removePlayerHeadByLocalSeat(localSeat)
end

--初始化准备状态
function PlayerView:initReadyFlagUI()
    for i = 1, CF.roomData:getChairs() do
        self:showReadyIcon(i, false)
    end
end

function PlayerView:onPlayerReady(event)
   local seatId = event.msg.seatId
   local localSeat = CF.roomData:seatToLocal(seatId)
   local isReady = event.msg.isReady
   self:showReadyIcon(localSeat, isReady)
end

function PlayerView:showReadyIcon(localSeat, bShow)
    if self["_readySp_"..localSeat] then
        self["_readySp_"..localSeat]:setVisible(bShow)
    end
end

function PlayerView:clearTable(event)
    --清除头像数据
    for i = 1, CF.roomData:getMaxPlayer() do
        self:clearPlayerHead(i)
    end
end

function PlayerView:clearPlayerHead(localSeat) 
end

function PlayerView:getHeadPanel(seat)
    if not self._playerHeads or not self._playerHeads[seat] then
        return nil
    end
    local allChilds1 = self._playerHeads[seat]:getChildren()
    if not allChilds1 or #allChilds1 <= 0 then
        return nil
    end
    local allChilds2 = allChilds1[1]:getChildren()
    if not allChilds2 or #allChilds2 <= 0 then
        return nil
    end
    return allChilds2[1]
end

function PlayerView:onShowThrowPropAni(event)
    event = event or {}
    event.msg = event.msg or {}
    event.msg.headPanelFunc = handler(self, self.getHeadPanel)
    CF.game:getModule("Player"):showThrowPropAni(event)
end

--续桌
function PlayerView:onGameContinue(event)

end

function PlayerView:onShowCaiShen(event)
    self:showCaiShenAni(true)
end

function PlayerView:onPlayCountChanged(event)
    self:showGuideAni()
end

function PlayerView:showCaiShenAni(isgameend)
    if not CF.roomData:judgeSupportThrowProp() then
        return
    end
    isgameend = isgameend or false
    local showGuide = false
    local localseat = CF.GameDefine.LOCAL_SEAT.BOTTOM
    if not self._playerHeads[localseat] then
        return 
    end
    local playCount = CF.roomData:getPlayCount()
    local bStart = CF.roomData:isStartGame()
    if isgameend and CF.roomData:isGoldRoom() then
        showGuide = true
    end
    if (not bStart and (not (playCount > 0) or CF.roomData:isGoldRoom())) then
        showGuide = true
    end

    local panelPlayerHead = self["_head_panel_" .. localseat]
    if showGuide then
        -- local selfSeat = CF.roomData:getSelfSeat()
        -- local GuideUILogic = CF.gameRequire("Modules.Guide.UILogic")
        -- local caishenAni = GuideUILogic.showCaiShenAni(panelPlayerHead,selfSeat)
        -- caishenAni:setPosition(cc.p(self._playerHeads[localseat]:getPosition()))
    end
end

--入场动画
function PlayerView:onEnterAniPropChanged(event)
    local data = event.msg.data or {}
    local numid = data.numid
    local propsid = data.propsid
    local playerData = CF.roomData:getPlayerDataNumberID(numid)
    if playerData then
        local localSeat = CF.roomData:seatToLocal(playerData:getSeat())
        local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
        GameBagUILogic.showEnterAni(self._propAniPanel, localSeat, propsid)
    end
end

function PlayerView:showGuideAni()
    self:showCaiShenAni()
    self:showPropGuide()
    print("showGuideAni......")
end

-- 游戏开始，随机再除自己玩家头像展示互动道具引导
function PlayerView:showPropGuide()
    if CF.roomData:judgeSupportThrowProp() and CF.roomData:isStartGame() then
        local players = {}
        for _, v in pairs(CF.roomData:getPlayerDatas()) do
            if v ~= CF.roomData:getSelfPlayerData() then
                players[#players + 1] = v
            end
        end
        if #players > 0 then
            local randomIndex = math.random(1, #players)
            local localSeat = CF.roomData:seatToLocal(players[randomIndex]:getSeat())
            self:showGuidePropAni(localSeat)
        end
    end
end

function PlayerView:showGuidePropAni(localSeat)
    self:performWithDelay(function ()
        local GUIDE_PROP_NODE = "GUIDE_PROP_NODE"
        if not self._playerHeads[localSeat] or self._playerHeads[localSeat]:getChildByName(GUIDE_PROP_NODE) or self._showGuideProp then
            return
        end
        local costInfo
        local hasFree
        local show
        costInfo, hasFree, show = CF.game:getModule("PlayerInfo"):getFreePropInfo()
        if not show or costInfo == "" then
            return
        end
        local GuideAniNode = CF.gameRequire("Modules.Guide.AniNode")
        local guideNode = GuideAniNode.new()
        guideNode:showGuidePropAni(localSeat, costInfo, hasFree)
        guideNode:setName(GUIDE_PROP_NODE)
        self._showGuideProp = true
        self._playerHeads[localSeat]:addChild(guideNode,10)
    end,0.1)
end

function PlayerView:onHidePropAni(event)
    self._showGuideProp = false
end

function PlayerView:addJuBaoPenJiView()
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() or CF.roomData:isGoldRoom() then
        return
    end

    local selfSeat = CF.roomData:getSelfSeat()
    local localseat = CF.GameDefine.LOCAL_SEAT.BOTTOM

    local playerNode = self._playerHeads[localseat]
    if playerNode == nil then
        return
    end

    local name = "JuBaoPenJiView"
    local jiView = playerNode:getChildByName(name)
    if not jiView then
        jiView = CF.gameRequire("Modules.JuBaoPen.JuBaoPenJIVIew").new()
        jiView:setName(name)
        playerNode:addChild(jiView,10)
        jiView:updateItemPos()
    end
end


function PlayerView:calculateAngle(point1, point2)
    local dx = point2.x - point1.x
    local dy = point2.y - point1.y
    -- 使用atan2计算弧度，然后转换为角度
    local radian = math.atan2(dy, dx)
    local angle = math.deg(radian)
    return angle
end

function PlayerView:playTitileAnimation(event)
    local titleLevel = event.titleLevel

    local localseat = CF.GameDefine.LOCAL_SEAT.BOTTOM
    local playerNode = self._playerHeads[localseat]
    if playerNode == nil then
        return
    end

    local jiView = playerNode:getChildByName("JuBaoPenJiView")
    if jiView == nil then
        return
    end
    if self._jubaopenTitleAni == nil then
        return
    end
    local jiIcon = jiView:getJiIcon()
    local worldPos = jiIcon:convertToWorldSpaceAR(cc.p(0, 0))
    local relativePos = self:convertToNodeSpaceAR(worldPos)

    local oldPos = cc.p(self._jubaopenParticleAni:getPosition())
    self._jubaopenParticleAni:setRotation(-self:calculateAngle(relativePos, oldPos))
    self._jubaopenParticleAni:setLocalZOrder(100)

    XH.SpineManager:playAni(self._jubaopenTitleAni, "res/animation/GameCommon/jubaopen/", "zzb_jbp_ch", tostring(titleLevel), false, function()
        XH.SpineManager:playAni(self._jubaopenParticleAni, "res/animation/GameCommon/jubaopen/", "zzb_ty_fei", "animation", false)
    self._jubaopenParticleAni:runAction(cc.Sequence:create(cc.MoveTo:create(17/30, relativePos), cc.CallFunc:create(function() 
        CF.game:getModule("JuBaoPen"):playJiAnimation()
    end),cc.DelayTime:create(1), cc.CallFunc:create(function()
            self._jubaopenParticleAni:setPosition(oldPos)
            self._jubaopenTitleAni:setRotation(0)
        end))) 
    end)
end

return PlayerView