local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

function WinLostItemNode:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/TaiZhou/WaHua/SettleItem.csb"
end

function WinLostItemNode:getBindingInfo()
    local bindInfo = WinLostItemNode.super.getBindingInfo(self)
    bindInfo["_KW_TEXT_FLOWER_COUNT"] = { varName = "_textFlowerCnt" }
    bindInfo["_KW_TEXT_JI_DAO_SCORE"] = { varName = "_textJiDaoScore" }
    bindInfo["_KW_TEXT_BAO_DAO_SCORE"] = { varName = "_textBaoDaoScore" }
    bindInfo["_KW_TEXT_ZONG_DAO_SCORE"] = { varName = "_textZongDaoScore" }
    bindInfo["_KW_PANEL_BAO_DAO"] = { varName = "_panelBaoDao" }
    bindInfo["_KW_TEXT_YA_PO"] = { varName = "_textYaPo" }
    bindInfo["_KW_TEXT_TAO_HUA"] = { varName = "_textTaoHua" }
    bindInfo["_KW_TEXT_COMBO_SCORE"] = { varName = "_textCombScore" }
    return bindInfo
end

function WinLostItemNode:_getCKongShowBackIndexs(combData)
    return {}
end

function WinLostItemNode:createChildren()
    self:updatePlayerHeadUI()
    self:updateSettleUI()
    self:updateBankerFlag()
    self:updateHostFlag()
    self:updateWindFlag()
    WinLostItemNode.super.showWatermark(self)
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

function WinLostItemNode:updateWindFlag()
    local wind = self:getWinLostData():getSeatWind(self._seatId)
    self._windFlagSp:setVisible(false)
    if wind and wind ~= -1 then
        self._windFlagSp:loadTexture(CF.GameDefine.windFlagStr[wind], ccui.TextureResType.plistType)
        self._windFlagSp:setVisible(true)
    end
end

function WinLostItemNode:updateSettleUI()
    if not self:getWinLostData() then return end
    --分数
	local score = self:getWinLostData():getWinLost(self._seatId)
	local scoreString = ""
	local fntPath = "cocosStudio/MahjongNew/GameLayer/Font/win_number-export.fnt"
	if score then
		if score >= 0 then
			scoreString = "+"..score
		else
			fntPath = "cocosStudio/MahjongNew/GameLayer/Font/lose_number-export.fnt"
			scoreString = score
		end
	end

	self._hejiLabel:setFntFile(fntPath)
	self._hejiLabel:setString(scoreString)

    local mahData = self:getWinLostData():getMahData(self._seatId)
    if mahData and mahData.handData then
        self:updataHandMah(mahData.handData, mahData.handDfData, mahData.combData)
    end

    if mahData and mahData.flowerData then
        self:updataFlowerMah(mahData.flowerData)
    end

    local lostEndType = self:getWinLostData():getLostEndType(self._seatId)
    if lostEndType then
        self._lostTypeSp:loadTexture(CF.GameDefine.endPlayerStatePng[lostEndType], ccui.TextureResType.plistType)
        self._lostTypeSp:setVisible(true)
        if lostEndType <= CF.GameDefine.endPlayerState.EPS_CHENGBAO then
            self._lostTypeSp:setContentSize(121, 80)
        else
            self._lostTypeSp:setContentSize(79, 78)
        end
    else
        self._lostTypeSp:setVisible(false)
    end
    local jiDaoScore = self:getWinLostData():getJiDaoScore(self._seatId)
    local baoDaoScore = self:getWinLostData():getBaoDaoScore(self._seatId)
    local zongDaoScore = self:getWinLostData():getZongDaoScore(self._seatId)
    self:setDaoScore(jiDaoScore, baoDaoScore, zongDaoScore)

    local yaPoType = self:getWinLostData():getYaPoType(self._seatId)
    self:setYaPoType(yaPoType)

    local bTaoHua = self:getWinLostData():isTaoHua(self._seatId)
    self:setTaoHuaFanBei(bTaoHua)

    self:updateFlowerCount()
    self:updateDangTouScore()
    self:showHuMah()
end

function WinLostItemNode:updataFlowerMah(flowerMahs)
    local flowerCount = #flowerMahs
    if self._textFlowerCnt then
        self._textFlowerCnt:setString("X" .. flowerCount)
    end
end

function WinLostItemNode:setDaoScore(jiDaoScore, baoDaoScore, zongDaoScore)
    if self._textJiDaoScore then
        self._textJiDaoScore:setString(jiDaoScore)
    end
    if self._textBaoDaoScore then
        self._textBaoDaoScore:setString(baoDaoScore)
        self._panelBaoDao:setVisible(baoDaoScore ~= 0)
    end
    if self._textZongDaoScore then
        self._textZongDaoScore:setString(zongDaoScore)
    end
end

function WinLostItemNode:setYaPoType(yaPoType)
    if self._textYaPo then
        self._textYaPo:setVisible(true)
        self._textYaPo:setString(CF.GameDefine.YAPO_WINLOST[yaPoType])
    end
end

function WinLostItemNode:setTaoHuaFanBei(bTaoHua)
    if self._textTaoHua then
        self._textTaoHua:setVisible(bTaoHua)
    end
end

function WinLostItemNode:updateFlowerCount()
    local mahData = self:getWinLostData():getMahData(self._seatId)
    if mahData and mahData.flowerData then
        local flowerCount = #mahData.flowerData
        if self._textFlowerCnt then
            self._textFlowerCnt:setString("X" .. flowerCount)
        end
    end
end

function WinLostItemNode:updateDangTouScore()
    local mahData = self:getWinLostData():getMahData(self._seatId)
    if not mahData then
        return
    end
    local scoreNode = self._textCombScore:clone()
    scoreNode:setScale(3.5)
    if mahData.nDangTouScore and self:getHandArea().setDfDangTouScore then
        self:getHandArea():setDfDangTouScore(scoreNode, mahData.nDangTouScore)
    end
    if mahData.nCombScore and self:getHandArea().setCombDangTouScore then
        self:getHandArea():setCombDangTouScore(scoreNode, mahData.nCombScore)
    end
end

function WinLostItemNode:showHuMah()
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local huDanFang = gameData:getHuDanFang(self._seatId)
    if huDanFang and huDanFang > 0 then
        self:getHandArea():showHuMah(huDanFang)
    end
end

return WinLostItemNode