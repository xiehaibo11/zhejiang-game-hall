local WinLostItemNode = CF.gameClass("WinLostItemNode", CF.ViewBase)
local ITEMNODEENDTYPE = require("game.Mahjong.BasicMahjong.Modules.WinLost.ItemNodeConfig") --icon类型
local SCORE_MAX_WIDTH = 312

function WinLostItemNode:ctor(param)
    param = param or {}
    self._seatId = param.seatId or 0
    WinLostItemNode.super.ctor(self)
    self:createChildren()
end

function WinLostItemNode:getWinLostData()
    return CF.game:getModule("WinLost"):getWinLostData()
end

function WinLostItemNode:getPlayerData()
    return CF.roomData:getTempPlayerDataBySeatId(self._seatId)
end

function WinLostItemNode:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/Settle/SettleItem.csb"
end

function WinLostItemNode:getBindingInfo()
    return {
        ["_KW_IMG_FLAG"] = { varName = "_bankerFlagSp"},
        ["_KW_IMG_ZHUANG_BG"] = { varName = "_bankerZhuangBG"},
        ["_KW_IMG_ZHUANG_TYPE"] = { varName = "_bankerZhuangType"},
        ["_KW_FNT_ZHUANG_NUM"] = { varName = "_bankerZhuangNum"},
        ["_KW_TEXT_NICKNAME"] = { varName = "_nicknameLabel"},
        ["_KW_TEXT_SCORE"] = { varName = "_scoreLabel"},
        ["_KW_TEXT_NUMBER_ID"] = { varName = "_numberIDLabel"},
        ["_KW_IMG_HEAD_FRAME"] = { varName = "_headFrame"},
        ["_KW_IMG_HOST"] = { varName = "_hostFlagSp"},
        ["_KW_IMG_WIND"] = { varName = "_windFlagSp"},

        ["_KW_PANEL_HAND_CARD"] = { varName = "_panelHandCard"},
        ["_KW_PANEL_COMBO"] = { varName = "_panelCombo"},

        ["_KW_LABEL_DETAIL"] = { varName = "_detailLabel"},
        ["_KW_FNT_FAN"] = { varName = "_fanLabel"},
        ["_KW_FNT_GANGFEN"] = { varName = "_gangLabel"},
        ["_KW_FNT_HEJI"] = { varName = "_hejiLabel"},

        ["_KW_IMG_END_ICON"] = { varName = "_lostTypeSp"},
        ["_KW_IMG_FENGDING"] = { varName = "_imgFengDing"},

        ["_KW_IMG_CONTRACT"] = { varName = "_contractSp"},
        ["_KW_IMG_DECONTRACT"] = { varName = "_decontractSp"},
        ["_KW_PANEL_FLOWER"] = { varName = "_panelFlower"},
        ["_KW_IMG_END_ICON_POS_"] = {varName = "_endIconPos_",beginIndex = 1, endIndex = 3},
        ["_KW_ITEM_BG_CAISHEN"] = { varName = "_bgShowCaiShen"},
    }
end

function WinLostItemNode:getProxyEvents()
    local winLostData = self:getWinLostData()
    local playerData = self:getPlayerData()
    return {
        {module = winLostData, eventKeyName = "EVENT_RESULT_EXINFO_CHANGED", callBack = "updateSettleUI"},
        {module = winLostData, eventKeyName = "EVENT_RESULT_SHOW_HUANI", callBack = "showHuAni"},
        {module = playerData, eventKeyName = "EVENT_CHANGED", callBack = "updatePlayerHeadUI"}
    }
end

function WinLostItemNode:createChildren()
    self._detailLabel:setString("")
    self._imgFengDing:setVisible(false)
    self:updatePlayerHeadUI()
    self:updateSettleUI()
    self:updateBankerFlag()
    self:updateHostFlag()
    self:updateWindFlag()
    self:updateBG()
    self:showWatermark()
    self:showFengDingFlag()
end

function WinLostItemNode:updateBG()
    if self._bgShowCaiShen then
        local playerData = self:getPlayerData()
        if playerData == nil then
            return
        end
        local isShowCaiYun = CF.game:getModule("CaiYunProp"):isShowCaiYun(playerData:getNumberID())
        self._bgShowCaiShen:setVisible(isShowCaiYun)
    end
end

function WinLostItemNode:updatePlayerHeadUI()
    if self:getPlayerData() then
        self._nicknameLabel:setString(self:getPlayerData():getNickName())
        self:updateImg()
        self:updateHeadFrame()
    end
end

function WinLostItemNode:updateSettleUI()
    if not self:getWinLostData() then return end
    local content = self:getWinLostData():getFanNameBySeat(self._seatId)
    local buyMahContent = self:getWinLostData():getBuyMah(self._seatId)
    local fanNum = self:getWinLostData():getFanNumBySeat(self._seatId)
    if buyMahContent and buyMahContent ~= "" then
        content = content .." 买马x".. buyMahContent
    end
    self._detailLabel:setString(content)
	if fanNum == "" then
		fanNum = "0"
	end
    self._fanLabel:setString(fanNum)

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
    local contentSize = self._hejiLabel:getContentSize()
    if contentSize.width > SCORE_MAX_WIDTH then
        self._hejiLabel:setScale(SCORE_MAX_WIDTH/contentSize.width)
    end

    local mahData = self:getWinLostData():getMahData(self._seatId)
    if mahData and mahData.handData and #mahData.handData > 0 then
        self:updataHandMah(mahData.handData, mahData.handDfData, mahData.combData)
    end

    if mahData and mahData.flowerData and #mahData.flowerData > 0 then
        self:updataFlowerMah(mahData.flowerData)
    end

    self._fanLabel:setVisible(self:getWinLostData():getIsShowFan())

    local lostEndType = self:getWinLostData():getLostEndType(self._seatId)
    if lostEndType then
        self._lostTypeSp:loadTexture(string.format("settle_icon_%d.png", lostEndType), ccui.TextureResType.plistType)
        self._lostTypeSp:setVisible(true)
    else
        self._lostTypeSp:setVisible(false)
    end

    --是否承包
    if self._contractSp then
        self._contractSp:setVisible(self:getWinLostData():getIsContract(self._seatId))
    end
    --是否反承包
    if self._decontractSp then
        self._decontractSp:setVisible(self:getWinLostData():getIsDeContract(self._seatId))
    end

    --展示结束类型
    self:showLostEndType()
end

WinLostItemNode.KW_LOST_END_TYPE_PNG =
{
    [0] = "settle_text_escape.png",  --逃跑
    --    [1] = "hu_type_zimo.png",  --自摸
    [2] = "settle_icon_3.png",  --点炮
    [3] = "settle_icon_5.png", --抢杠
--    [5] = "hu_type_liuju.png", --流局
}

function WinLostItemNode:showLostEndType()
    local lostEndType = self:getWinLostData():getLostEndType(self._seatId)
    if lostEndType and WinLostItemNode.KW_LOST_END_TYPE_PNG[lostEndType] then
        self._lostTypeSp:loadTexture(string.format(WinLostItemNode.KW_LOST_END_TYPE_PNG[lostEndType]), ccui.TextureResType.plistType)
        self._lostTypeSp:setVisible(true)
        local lostTypeSpPos = self:getLostEndTypePos(CF.roomData:getGameID())
        if lostTypeSpPos and self["_endIconPos_" .. lostTypeSpPos] ~= nil then 
            self._lostTypeSp:setPosition(self["_endIconPos_" .. lostTypeSpPos]:getPosition())
        end
    else
        self._lostTypeSp:setVisible(false)
    end
end

function WinLostItemNode:getLostEndTypePos(gameID)
    local conf = ITEMNODEENDTYPE.MahjongDianPaoIconByConfID or {}
    if not conf[gameID] then 
        return nil
    else
        return conf[gameID].showPos
    end 
end

function WinLostItemNode:updateImg()
    local url = self:getPlayerData():getAvatarUrl()
    if url == "" then
        url = "http://thirdwx.qlogo.cn/mmopen/vi_32/RZWHFDljz1SW2Azl6kZyxic4ziaibicnUPo8dB3YiaGbhpyx3Tq34Vemk6KqexyJQJtAphjc9TELicPuRryc0UQ4DPmw/132"
    end

    if not self._headImg then
        local size = self._headFrame:getContentSize()
        self._headImg = CF.RemoteImage.new()
            :setTouchEnabled(true)
            :setPosition(size.width/2 - 0.5, size.height/2 + 0.3)
            :ignoreContentAdaptWithSize(false)
            :setContentSize(size.width - 7, size.height - 7)
            :addTo(self._headFrame)
    end

    self._headImg:setUrl(url)
end

function WinLostItemNode:updateBankerFlag()
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local isBanker = gameData:isBanker(self._seatId)
    local laozhuangNum = gameData:getLaoZhuangNum()
    --如果显示牢庄几则不显示左上角的庄
    if laozhuangNum > 0 and CF.configData:getIsShowLaoZhuang() then
        self._bankerZhuangBG:setVisible(isBanker)
        self._bankerZhuangNum:setString("x"..laozhuangNum)
        self._bankerFlagSp:setVisible(false)
    else
        self._bankerFlagSp:setVisible(isBanker)
    end
end

function WinLostItemNode:updateHostFlag()
    local isHost = CF.roomData:isHost(self._seatId)
    self._hostFlagSp:setVisible(isHost)

    local posX = 50
    self._hostFlagSp:setPositionX(posX)
end

function WinLostItemNode:updateWindFlag()
    local wind = self:getWinLostData():getSeatWind(self._seatId)
    self._windFlagSp:setVisible(false)
    if wind and wind ~= -1 then
        self._windFlagSp:loadTexture(string.format("settle_feng_%d.png", wind), ccui.TextureResType.plistType)
        self._windFlagSp:setVisible(true)
    end
end

-- 暗杠时显示的牌背序号
function WinLostItemNode:_getCKongShowBackIndexs(combData)
    return {1,2,3}
end

function WinLostItemNode:updataHandMah(handMahs, dfMahID, combData)
    local combs = {}
    for _, comb in ipairs(combData) do
        local singleCombData = {}
        singleCombData.mahValues = comb.nMahs
        singleCombData.combFlag = comb.nFlag
        if comb.nFlag and comb.nFlag == CF.GameDefine.COMB_FLAG.CKONG then
            singleCombData.showBackIndexs = self:_getCKongShowBackIndexs(clone(singleCombData)) or {}
        end
        table.insert(combs, singleCombData)
    end
    if self:getHandArea().setJokerData then
        local gameData = CF.game:getModule("GameLayer"):getGameData()
        local jokerData = gameData:getJokerData()
        local insteadsData = gameData:getInsteadMahData()
        self:getHandArea():setJokerData(jokerData, insteadsData)  
    end
    self:getHandArea():showResultMahs(handMahs, dfMahID, combs)
end

function WinLostItemNode:updataFlowerMah(flowerMahs)
    local config = CF.settingData:getDefaultData(nil, true)
    local UIMahFlowerArea = CF.gameRequire("Modules.GameLayer.View2D.UIMahFlowerArea")
    self._settleFlowerMahs = UIMahFlowerArea.new(CF.GameDefine.LOCAL_SEAT.BOTTOM, config)
    self._panelFlower:addChild(self._settleFlowerMahs)
    self._settleFlowerMahs:setFlowers(flowerMahs)
    self._panelFlower:setPositionY(125)
    self._panelFlower:setScale(0.32)
end

function WinLostItemNode:showHuAni(event)
    if not self:getWinLostData() then return end
    local huMahID = self:getWinLostData():getHuMahData(self._seatId)
    if event.data.seat ~= self._seatId then
        return
    end
    if huMahID and huMahID ~= 0 then
        local mahData = self:getWinLostData():getMahData(self._seatId)
        local node = self:getHandArea():findFirstMahNodeByID(huMahID, mahData)
        if node then
            local tempCursor = ccui.Layout:create()
            CF.UITool.playJsonAnimationByName(tempCursor, "gameend_cardlight", "animation/Mahjong/Base/gameend_cardlight/gameend_cardlight.ExportJson", 1, "Animation1", cc.p(0,0))
            tempCursor:setPosition(cc.p(70, 100))
            node:addChild(tempCursor)
        end
    end
end

function WinLostItemNode:getHandArea()
    if not self._handArea then 
        local config = CF.settingData:getDefaultData(nil, true)
        local ItemMahsArea = CF.gameRequire("Modules.WinLost.ItemMahsArea")
        self._handArea = ItemMahsArea.new(config)
        self._panelHandCard:addChild(self._handArea)
    end
    return self._handArea
end

--头像框
function WinLostItemNode:updateHeadFrame()
    local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
    local numid =  self:getPlayerData():getNumberID()
    if CF.game:getModule("CaiYunProp"):isShowCaiYun(numid) then
        GameBagUILogic.showCaiShenHeadFrame(self._headFrame, cc.size(15, 0), cc.size(50, 50))
        return
    end
    GameBagUILogic.showCaiShenHeadFrame(self._headFrame, cc.size(15, 0), cc.size(50, 50), true)
    local headFrame = CF.roomData:getHeadFrameData(numid) or {}
    GameBagUILogic.showHeadFrame(self._headFrame, headFrame.frame_url, cc.size(0 , 0), cc.size(50,50), headFrame.propid)
end

function WinLostItemNode:isFullScreen()
    return false, cc.size(1920, 196)
end

function WinLostItemNode:showWatermark()
    local WatermarkModule = CF.game:getModule("Watermark")
    if not WatermarkModule then return end
     WatermarkModule:addWatermark(self,cc.p(140,140))
end

function WinLostItemNode:showFengDingFlag()
    if not CF.roomData:isSupportFengDing() then
        return
    end
    local fengDingFlag = self:getWinLostData():getFengDingFlag()
    if fengDingFlag then
        self._imgFengDing:setVisible(fengDingFlag[self._seatId] or false)
    end
end

return WinLostItemNode