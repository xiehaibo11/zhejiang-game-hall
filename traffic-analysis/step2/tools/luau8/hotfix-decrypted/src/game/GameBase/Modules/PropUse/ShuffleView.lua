local ShuffleView = CF.gameClass("ShuffleView", CF.ViewBase)

ShuffleView.ClassName = "ShuffleView"

function ShuffleView:ctor(param)
    self._param = param or {}
    ShuffleView.super.ctor(self)
    self:setName(self.ClassName)
    self:initUI()
end

function ShuffleView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/ShuffleAniLayer.csb"
end

function ShuffleView:getBindingInfo()
    return {
        ["_KW_PANEL_SHUFFLE_ANI_POS"] = {varName = "_panelShuffleAniPos"},
        ["_KW_PANEL_SHUFFLE_ANI_POS_NEW"] = {varName = "_panelShuffleAniPosNew"},
        ["_KW_PANEL_SHUFFLE_ANI_POS_SAOGUANG"] = {varName = "_panelShuffleAniPosSaoGuang"},
        ["_KW_IMG_SHUFFLE_PLAYER"] = {varName = "_imgShufflePlayerBg"},
        ["_KW_IMG_SHFFULE_ING"] = {varName = "_imgShuffleing"},
        ["_KW_TXT_SHFFULE_PLAYER"] = {varName = "_txtshufflePlayers"},
        ["_KW_PANEL_BG"] = {varName = "_BG"},
        ["_KW_BTN_SKIP"] = {varName = "_btnSkip", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventSkip"},
        ["_KW_LISTVIEW_SHUFFLE"] = {varName="_shuffleListView"},
    }
end

function ShuffleView:getProxyEvents()
    return {
        { module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_SHUFFLE_CLOSE_VIEW", callBack = "onCloseView" },
        { module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_UPDATE_SHUFFLE_PLAYER", callBack = "onUpdateShufflePlayer" },
        { module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_SHOW_SHUFFLE_LIST", callBack = "onShowShuffleList" },
    }
end

function ShuffleView:onUpdateShufflePlayer(event)
    if not event or not event.msg or not event.msg.text then
        return
    end
    self:updateShufflePlayer(event.msg.text)
end

function ShuffleView:onShowShuffleList(event)
    if not event or not event.msg or not event.msg.shufflelist then
        return
    end
    self:showShuffleList(event.msg.shufflelist)
end


function ShuffleView:initUI()
    self:initGameTypeUI()
end

function ShuffleView:initGameTypeUI()
    self._imgShuffleing:setVisible(true)
    self._txtshufflePlayers:setVisible(false)
end

--将窗体显示到屏幕
function ShuffleView:showSelf(zOrder)
    zOrder = zOrder or CF.ZORDER.WINDOW
    local runningScene = display.getRunningScene()
    if runningScene then
        runningScene:addChild(self, zOrder)
    end
    --添加洗牌动画
    if CF.game:getModule("PropUse"):isSupportNewAni() then
        self:playShuffleAniNew()
    else
        self:playShuffleAni()
    end
    return self
end

function ShuffleView:playShuffleAni()
    local jsonPath = "res/animation/GameCommon/sk-xp-ani/sk-xp-ani.ExportJson"
    CF.UITool.playJsonAnimationByName(self._panelShuffleAniPos, "sk-xp-ani", jsonPath, 10, "Animation1", nil, nil, function()
        self._panelShuffleAniPos:removeAllChildren()
        if CF.roomData and CF.game and CF.roomData:isPlayBack() then
            CF.game:getModule("PlayBack"):play()
            self:close()
        else
            self:startNextGame()
        end
    end)
end

function ShuffleView:playShuffleAniNew()
    cc.SpriteFrameCache:getInstance():addSpriteFrames("res/tex/plist/doublekou_change_card.plist")
    local baseAni = "animation"
    local changeCardModule = CF.game:getModule("ChangeCard")
    local isChanged = changeCardModule and changeCardModule:isChangeCardSuccess()
    if isChanged then
        baseAni = "animation2"
    end
    local spinePath = "animation/GameCommon/PokerGame/zzb_xipai/"
    CF.SpineManager:playAni(self._panelShuffleAniPosNew, spinePath, "zzb_xipai", baseAni, false)
    local spinePath2 = "animation/Lobby/Base/zzb_ty_shuaguang/"
    CF.SpineManager:playAni(self._panelShuffleAniPosSaoGuang, spinePath2, "zzb_ty_shuaguang", "animation", false)
    self:runAction(cc.Sequence:create(cc.DelayTime:create(2.90),cc.CallFunc:create(function()
        self._panelShuffleAniPosNew:removeAllChildren()
        self._panelShuffleAniPosSaoGuang:removeAllChildren()
        if CF.roomData and CF.game and CF.roomData:isPlayBack() then
            CF.game:getModule("PlayBack"):play()
            self:close()
        else
            self:startNextGame()
        end
    end)))
end

--跳过洗牌动画
function ShuffleView:onTouchEventSkip(send, eventType)
    self:startNextGame()
end

function ShuffleView:startNextGame()
    -- 看是否开启切牌
    local cutCardsDefine = CF.gameRequire("Modules.PropUse.CutCardsDefine") 
    local gameID = CF.roomData and CF.roomData:getGameID()
    if CF.roomData and CF.roomData:isOpenCutCards() then
        if type(self._param) == "string" then
            if string.find(self._param, "preCut=1") then
                CF.game:getModule("PropUse"):reqCutCardWithProp(false)
                self:close()
                return
            end
        end
        local cutCardsView = CF.gameRequire("Modules.PropUse.CutCardsView").new(self._param)
        cutCardsView:showSelf()
        self:close()
        return
    end
    if CF.roomData and CF.roomData.isSupportPreShuffle and CF.roomData:isSupportPreShuffle() then
        CF.game:getModule("PropUse"):shuffleFinished()
    else
        CF.game:getModule("CenterBtns"):onStartGameEvent()  -- 不支持预洗牌的直接开局
    end
    self:close()
end

function ShuffleView:updateShufflePlayer(playerName)
    if not playerName then
        return
    end
    self._txtshufflePlayers:setString(playerName)
    self._txtshufflePlayers:setVisible(true)
end

--用列表显示洗牌玩家(用了这个方法后，原先的洗牌文字会隐藏换成这个新的内容)
function ShuffleView:showShuffleList(shuffleList)
    if self._imgShufflePlayerBg then
        self._imgShufflePlayerBg:setVisible(false)
    end

    if not next(shuffleList) or not self._shuffleListView then
        return
    end

    if CF.game:getModule("PropUse"):isSupportNewAni() then
        self._shuffleListView:setScale(0.7)
        self._shuffleListView:setPositionY(300)
    end

    self._shuffleListView:setVisible(true)
    local items = self._shuffleListView:getItems()
    for _ , item in ipairs(items) do
        item:setVisible(false)
    end

    for index , shuffleText in ipairs(shuffleList) do
        local item = items[index]
        if item then
            item:setVisible(true)
            CF.UITool.setText(item, "KW_TXT_SHFFULE_PLAYER", shuffleText)
            self:showParticleInListItem(item)
        end
    end
end

--播放列表内洗牌动画光效
function ShuffleView:showParticleInListItem(itmeNode)
    if not itmeNode then return end
    local textNode = ccui.Helper:seekWidgetByName(itmeNode,"KW_TXT_SHFFULE_PLAYER")
    if not textNode then return end
    local particleNode = textNode:getChildByName("KW_ANI_PARTICLE_IN_LIST")
    if not particleNode then return end
    local strSize = textNode:getContentSize()
    particleNode:setPositionX(0)
    local actionTime = 1.5
    particleNode:stopAllActions()
    particleNode:setScale(3)
    local targetPosX = strSize.width
    local targetPosY = particleNode:getPositionY()
    local actSpawn = cc.MoveTo:create(actionTime, cc.p(targetPosX, targetPosY))
    local actSequence = cc.Sequence:create(cc.CallFunc:create(function()
                            particleNode:setVisible(true)
                        end), actSpawn, cc.CallFunc:create(function()
                            particleNode:setVisible(false)
                        end))
    particleNode:runAction(actSequence)
end

function ShuffleView:onCloseView()
   self:close() 
end

return ShuffleView
>