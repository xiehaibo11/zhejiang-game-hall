local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")
local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")

-- 丽水麻将 SettleItem.csd 新增 _KW_PANEL_BETMAH 节点，用于展示买马马牌
function WinLostItemNode:getBindingInfo()
    local bindingInfo = WinLostItemNode.super.getBindingInfo(self)
    bindingInfo["_KW_PANEL_BETMAH"] = { varName = "_panelBetMah" }
    bindingInfo["_KW_POS_FAN_BET"] = { varName = "_posBetMah" }
    bindingInfo["_KW_POS_END_"] = {varName = "_endIconPosBet_",beginIndex = 1, endIndex = 3}

    return bindingInfo
end

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)
    if not self:getWinLostData() then return end
    self:showBetMah()
end

-- 有买马时，在 _panelBetMah 面板里以手牌样式平铺展示马牌
function WinLostItemNode:showBetMah()
    if not self._panelBetMah then return end
    local winLostData = self:getWinLostData()

    local buyMahList = winLostData:getBuyMahList()
    local buyMahDirection = winLostData:getBuyMahDirection()
    if not buyMahList or #buyMahList <= 0 then
        self._panelBetMah:setVisible(false)
        return
    end

    -- 只要有买马，番数标签和 endType 图标位置都按买马位置设置（不论是否胡家）
    if self._fanLabel and self._posBetMah then
        self._fanLabel:setPosition(self._posBetMah:getPosition())
    end
    -- 有买马时，把 endType 图标的位置节点移到马牌行位置节点
    for i = 1, 3 do
        local src = self["_endIconPos_" .. i] or (self._endIconPos_ and self._endIconPos_[i])
        local dst = self["_endIconPosBet_" .. i] or (self._endIconPosBet_ and self._endIconPosBet_[i])
        if src and dst then
            src:setPosition(dst:getPosition())
        end
    end
    if self.showLostEndType then self:showLostEndType() end

    -- 买马面板仅胡牌玩家展示（参考 BuyCode 逻辑：只有胡家才有买马）
    if not winLostData:getIsHuSeat(self._seatId) then
        self._panelBetMah:setVisible(false)
        return
    end

    self._panelBetMah:setVisible(true)
    self._panelBetMah:removeAllChildren()

    -- 直接以 UIMah 平铺展示马牌（参考 BuyCode 的买马区实现，便于逐张牌设置高亮/风位图标）
    local config = CF.settingData:getDefaultData(nil, true)
    local seatWind = winLostData:getSeatWind(self._seatId) or 0
    local windImg = {
        [0] = "ma_icon_dong.png",
        [1] = "ma_icon_nan.png",
        [2] = "ma_icon_xi.png",
        [3] = "ma_icon_bei.png",
    }
    local mahGap = 135
    local startX = 0
    for i = 1, #buyMahList do
        local mahNode = UIMah.new(1, config)
        mahNode:setMahValue(buyMahList[i])
        mahNode:setPosition(cc.p(startX + (i - 1) * mahGap, 120))
        self._panelBetMah:addChild(mahNode)

        -- 中马的马牌（风位与当前玩家一致）高亮，未中马灰显
        local isHit = (buyMahDirection[i] == seatWind)
        if isHit then
            mahNode:setColor(cc.c3b(255, 255, 255))
        else
            mahNode:setColor(cc.c3b(119, 121, 125))
        end

        -- 每张马牌都展示其对应风位玩家的风位 Icon（展示所有人的，不限于自己）
        local mahWind = buyMahDirection[i]
        if mahWind and mahWind >= 0 then
            local imageHuDirection = ccui.ImageView:create()
            imageHuDirection:loadTexture(windImg[mahWind] or "ma_icon_dong.png", ccui.TextureResType.plistType)
            imageHuDirection:setPosition(cc.p(69, 120))
            mahNode:addChild(imageHuDirection)
        end
    end
end

return WinLostItemNode
