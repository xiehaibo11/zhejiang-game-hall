local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

function WinLostItemNode:ctor(param)
    WinLostItemNode.super.ctor(self, param)
    self._isShowMaiMa = false
end

function WinLostItemNode:createChildren()
    WinLostItemNode.super.createChildren(self)
    if CF.game:getModule("GameLayer"):getMaxHandCounts() == CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN then
        self._lostTypeSp:setPositionX(self._lostTypeSp:getPositionX() + 260)
    end
end

function WinLostItemNode:updatePlayerHeadUI()
    WinLostItemNode.super.updatePlayerHeadUI(self)
    if self._scoreLabel then
        self._scoreLabel:setVisible(false)
    end
    if self._numberIDLabel then
        self._numberIDLabel:setVisible(true)
        self._numberIDLabel:setString(self:getPlayerData():getNumberID())
    end
end

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)
    if not self:getWinLostData() then return end

    local lostEndType = self:getWinLostData():getLostEndType(self._seatId)
    local endType = self:getWinLostData():getEndType()
    if not lostEndType and endType == CF.GameDefine.END_TYPE.ET_DRAWN then
        lostEndType = CF.GameDefine.endPlayerState.EPS_DRAWN
    elseif CF.roomData:getGameID() == 30399 and endType ==  CF.GameDefine.END_TYPE.ET_DRAWN then --大溪麻将特判
        lostEndType = CF.GameDefine.endPlayerState.EPS_DRAWN
    end
    if lostEndType then
        self._lostTypeSp:loadTexture(string.format("tz_settle_icon_%d.png", lostEndType), ccui.TextureResType.plistType)
        self._lostTypeSp:setContentSize(121, 80)
        self._lostTypeSp:setScale(1.2)
        self._lostTypeSp:setVisible(true)
    end

    if CF.configData.isHaveLaZiHu and CF.configData:isHaveLaZiHu() then
        self:updateLaZiFlag()
    end

    if CF.configData.isHaveMaiMa and CF.configData:isHaveMaiMa() then
        self:showBuyHorseMahs()
    end

    if CF.configData.isHaveMaiDi and CF.configData:isHaveMaiDi() then
        self:showMaiDiFlag()
    end
end

--是否腊子胡
function WinLostItemNode:updateLaZiFlag()
    local nLaZiHuSeat = self:getWinLostData():getLaZiHuSeat(self._seatId)
    if nLaZiHuSeat and nLaZiHuSeat == self._seatId then
        local imgLaZi = self._headFrame:getChildByName("IMG_LA_ZI")
        if imgLaZi then
            imgLaZi:setVisible(true)
        else
            imgLaZi = ccui.ImageView:create()
            imgLaZi:loadTexture("tz_over_lazi.png", ccui.TextureResType.plistType)
            self._headFrame:addChild(imgLaZi)
            imgLaZi:setName("IMG_LA_ZI")
            imgLaZi:setPosition(-30, self._headFrame:getContentSize().height / 2)
        end
    else
        local imgLaZi = self._headFrame:getChildByName("IMG_LA_ZI")
        if imgLaZi then
            imgLaZi:setVisible(false)
        end
    end
end

function WinLostItemNode:showBuyHorseMahs()
    --有没有买马
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local maiMaData = gameData:getMaiMaData()
    if not maiMaData.maCount or maiMaData.maCount == 0 then
        return
    end
    if self._isShowMaiMa then
        return
    end
    self._isShowMaiMa = true
    --有没有胡牌
    local isHuSeat = false
    local huSeats = self:getWinLostData():getHuSeats()
    for _, v in pairs(huSeats) do
        if v == self._seatId then
            isHuSeat = true
            break
        end
    end
    if not isHuSeat then
        return
    end
    --显示买马牌
    local parent = self._panelFlower:getParent()
    local rootNode = self._panelFlower:clone()
    rootNode:removeAllChildren()
    parent:addChild(rootNode, -1)
    rootNode:setPositionX(self._panelFlower:getPositionX() - 150)
    local mahs = maiMaData.betMahList or  {}

    local config = CF.settingData:getDefaultData(nil, true)
    local UIMahFlowerArea = CF.gameRequire("Modules.GameLayer.View2D.UIMahFlowerArea")
    self._settleBuyHorseMahs = UIMahFlowerArea.new(CF.GameDefine.LOCAL_SEAT.BOTTOM, config)
    rootNode:addChild(self._settleBuyHorseMahs)
    self._settleBuyHorseMahs:setFlowers(mahs)
end

function WinLostItemNode:showMaiDiFlag()
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
                imgMaiDi:setPosition(self._headFrame:getContentSize().width - 10, self._headFrame:getContentSize().height - 10)
            end
        end
    else
        local imgMaiDi = self._headFrame:getChildByName("IMG_MAI_DI")
        if imgMaiDi then
            imgMaiDi:setVisible(false)
        end
    end
end

return WinLostItemNode}