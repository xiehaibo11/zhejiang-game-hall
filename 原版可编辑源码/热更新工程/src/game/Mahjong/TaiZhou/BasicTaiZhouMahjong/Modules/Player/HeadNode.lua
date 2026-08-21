local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.Mahjong.BasicMahjong.Modules.Player.HeadNode")

function PlayerHeadNode:getProxyEvents()
    local proxyEvents = PlayerHeadNode.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onPlayerStart" }
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_CHENGBAO", callBack = "showChengBao"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_MAIDI", callBack = "showMaiDi"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_MAI_DI_FLAG", callBack = "showMaiDiFlag"} --大溪麻将
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_NIU_FLAG", callBack = "showNiuFlag"} --大溪麻将
    return proxyEvents
end

function PlayerHeadNode:onPlayerStart(event)
    local imgChengBao = self._headFrame:getChildByName("IMG_CHENG_BAO")
    if imgChengBao then
        imgChengBao:setVisible(false)
    end
    local imgMaiDi = self._headFrame:getChildByName("IMG_MAI_DI")
    if imgMaiDi then
        imgMaiDi:setVisible(false)
    end
    local imgNiu = self._headFrame:getChildByName("IMG_NIU_FLAG")
    if imgNiu then
        imgNiu:setVisible(false)
    end
end

function PlayerHeadNode:showChengBao(event)
    if self._seatId ~= event.msg.seat then
        return
    end
    local bShow = event.msg.show
    if bShow then
        local imgChengBao = self._headFrame:getChildByName("IMG_CHENG_BAO")
        if imgChengBao then
            imgChengBao:setVisible(true)
        else
            imgChengBao = ccui.ImageView:create()
            imgChengBao:loadTexture("tz_chengbao.png", ccui.TextureResType.plistType)
            self._headFrame:addChild(imgChengBao)
            imgChengBao:setName("IMG_CHENG_BAO")
            imgChengBao:setScale(1.2)
            imgChengBao:setPosition(10, 10)
            if CF.roomData:seatToLocal(self._seatId) == 3 then
                imgChengBao:setPosition(90, 10)
            end
        end
    else
        local imgChengBao = self._headFrame:getChildByName("IMG_CHENG_BAO")
        if imgChengBao then
            imgChengBao:setVisible(false)
        end
    end
end

function  PlayerHeadNode:showMaiDi(event)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local isMaiDi = gameData:getMaiDiData(self._seatId)
    if isMaiDi then
        local imgMaiDi = self._headFrame:getChildByName("IMG_MAI_DI")
        if imgMaiDi then
            imgMaiDi:setVisible(true)
        else
            imgMaiDi = ccui.ImageView:create()
            imgMaiDi:loadTexture("tz_maidi.png", ccui.TextureResType.plistType)
            if imgMaiDi then
                self._headFrame:addChild(imgMaiDi)
                imgMaiDi:setName("IMG_MAI_DI")
                imgMaiDi:setScale(1.5)
                local headSize = self._headFrame:getContentSize()
                imgMaiDi:setPosition(headSize.width - 10, headSize.height - 10)
            end
        end
    else
        local imgMaiDi = self._headFrame:getChildByName("IMG_MAI_DI")
        if imgMaiDi then
            imgMaiDi:setVisible(false)
        end
    end
end

function  PlayerHeadNode:showMaiDiFlag(event)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local maiDiScore = gameData:getMaiDiData(self._seatId)
    if maiDiScore and maiDiScore > 0 then
        local imgMaiDi = self._headFrame:getChildByName("IMG_MAI_DI")
        if imgMaiDi then
            imgMaiDi:setVisible(true)
            local txtMaiDi = imgMaiDi:getChildByName("TEXT_MAI_DI_SCORE")
            if txtMaiDi then
                txtMaiDi:setString("+" .. maiDiScore)
            end
        else
            imgMaiDi = ccui.ImageView:create()
            if imgMaiDi then
                self._headFrame:addChild(imgMaiDi)
                imgMaiDi:loadTexture("tz_maidi.png", ccui.TextureResType.plistType)
                imgMaiDi:setName("IMG_MAI_DI")
                imgMaiDi:setScale(1.5)
                imgMaiDi:setAnchorPoint(1, 1)
                local headSize = self._headFrame:getContentSize()
                imgMaiDi:setPosition(headSize.width, headSize.height)
                local txtMaiDi = ccui.Text:create()
                txtMaiDi:setName("TEXT_MAI_DI_SCORE")
                txtMaiDi:setFontName("res/cocosStudio/Common/Font/fangzhengcuyuan.TTF")
                txtMaiDi:setFontSize(22)
                txtMaiDi:setColor(cc.c3b(255, 215, 135))
                txtMaiDi:setString("+" .. maiDiScore)
                txtMaiDi:setAnchorPoint(0, 0.5)
                txtMaiDi:setPosition(imgMaiDi:getContentSize().width-5, imgMaiDi:getContentSize().height/2)
                imgMaiDi:addChild(txtMaiDi)
            end
        end
    else
        local imgMaiDi = self._headFrame:getChildByName("IMG_MAI_DI")
        if imgMaiDi then
            imgMaiDi:setVisible(false)
        end
    end
end

function  PlayerHeadNode:showNiuFlag(event)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local isPlayCaiShen = gameData:getIsPlayCaiShen(self._seatId)
    if isPlayCaiShen then
        local imgNiu = self._headFrame:getChildByName("IMG_NIU_FLAG")
        if imgNiu then
            imgNiu:setVisible(true)
        else
            imgNiu = ccui.ImageView:create()
            if imgNiu then
                imgNiu:loadTexture("tz_niu_flag.png", ccui.TextureResType.plistType)
                self._headFrame:addChild(imgNiu)
                imgNiu:setName("IMG_NIU_FLAG")
                imgNiu:setScale(1.5)
                imgNiu:setAnchorPoint(1, 1)
                local headSize = self._headFrame:getContentSize()
                imgNiu:setPosition(headSize.width, headSize.height + 42)
                local localSeat = CF.roomData:seatToLocal(self._seatId)
                if localSeat == 4 then
                    imgNiu:setPosition(0, headSize.height)
                end
            end
        end
    else
        local imgNiu = self._headFrame:getChildByName("IMG_NIU_FLAG")
        if imgNiu then
            imgNiu:setVisible(false)
        end
    end
end

return PlayerHeadNode