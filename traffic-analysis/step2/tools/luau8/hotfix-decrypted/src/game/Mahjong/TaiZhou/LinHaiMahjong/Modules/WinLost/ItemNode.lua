local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.WinLost.ItemNode")

local zhuaGangTouMaxCount = 6
local windImg = {
    [CF.GameDefine.MENG_FENG.KW_DONG_FENG] = "settle_feng_0.png",
    [CF.GameDefine.MENG_FENG.KW_NAN_FENG] = "settle_feng_1.png",
    [CF.GameDefine.MENG_FENG.KW_XI_FENG] = "settle_feng_2.png",
    [CF.GameDefine.MENG_FENG.KW_BEI_FENG] = "settle_feng_3.png",
}

function WinLostItemNode:ctor(param)
    param = param or {}
    WinLostItemNode.super.ctor(self, param)
    self._isShowZhuaGangTou = false
end

function WinLostItemNode:createChildren()
    WinLostItemNode.super.createChildren(self)
    self._lostTypeSp:setPositionX(self._lostTypeSp:getPositionX() + 260)
end

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)
    if not self:getWinLostData() then return end
    self:showZhuaGangTou()
end

function WinLostItemNode:showZhuaGangTou()
    --有没有抓杠头
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local zhuaGangTouData = gameData:getZhuaGangTouData()
    if not zhuaGangTouData.mahType or zhuaGangTouData.mahType == CF.GameDefine.ZGTType.ZHUA_GAN_TOU_NONE then
        return
    end
    if self._isShowZhuaGangTou then
        return
    end
    self._isShowZhuaGangTou = true

    local mahs
    if zhuaGangTouData.mahType == CF.GameDefine.ZGTType.ZHUA_GAN_TOU_EVERY_JIA then
        mahs = zhuaGangTouData.everyMahList[self._seatId + 1]
    else
        if not self:isHuSeat(zhuaGangTouData.huSeat) then
            return
        end
        mahs = zhuaGangTouData.singleMahList
    end

    --显示抓杠头牌
    local parent = self._panelFlower:getParent()
    local rootNode = self._panelFlower:clone()
    rootNode:removeAllChildren()
    parent:addChild(rootNode)
    local config = CF.settingData:getDefaultData(nil, true)
    local UIMahHandArea = CF.gameRequire("Modules.GameLayer.View2D.UIMahHandArea")
    self._settleHandMahs = UIMahHandArea.new(CF.GameDefine.LOCAL_SEAT.BOTTOM, config)
    rootNode:addChild(self._settleHandMahs)
    --local handMaxCount = zhuaGangTouMaxCount / 2
    self._settleHandMahs:setMaxHandMahCount(zhuaGangTouMaxCount)
    self._settleHandMahs:setHandMahs(mahs,nil,false)

    self:showMahWindFlag(zhuaGangTouData.mahType, mahs, zhuaGangTouData.huSeat)
    self:showHuFangFlag(zhuaGangTouData.mahType, mahs, zhuaGangTouData.huSeat, zhuaGangTouData.disCardSeat)
end

function WinLostItemNode:showMahWindFlag(mahType, mahs, huSeat)
    if not mahType or mahType ~= CF.GameDefine.ZGTType.ZHUA_GAN_TOU_HU_JIA_SIX then
        return
    end
    local children = self._settleHandMahs:getChildren()
    for index, mah in ipairs(mahs) do
        for seat, value in pairs(huSeat) do
            if value == true then
                local bHave, windSeat = self:judgeMahIsZGTBySeat(seat - 1, mah)
                if bHave and windImg[windSeat] then
                    local imgWindFlag = ccui.ImageView:create()
                    imgWindFlag:loadTexture(windImg[windSeat], ccui.TextureResType.plistType)
                    children[index]:addChild(imgWindFlag)
                    imgWindFlag:setAnchorPoint(0, 0)
                    imgWindFlag:setScale(3)
                    imgWindFlag:setPosition(5, 20)
                    break
                end
            end
        end
    end
end

function WinLostItemNode:showHuFangFlag(mahType, mahs, huSeat, discardSeat)
    if not mahType or mahType ~= CF.GameDefine.ZGTType.ZHUA_GAN_TOU_EVERY_JIA then
        return
    end
    local children = self._settleHandMahs:getChildren()
    for index, mah in ipairs(mahs) do
        local isMenfeng
        local strHuFang = ""
        for seat, value in pairs(huSeat) do
            if value == true then
                local bHave = self:judgeMahIsZGTBySeat(seat - 1, mah)
                if bHave then
                    isMenfeng = true
                    strHuFang = "tz_settle_icon_1.png"
                    break
                end
            end
        end
        if not isMenfeng and (discardSeat >= 0 and discardSeat < CF.roomData:getMaxPlayer()) then
            local bHave = self:judgeMahIsZGTBySeat(discardSeat, mah)
            if bHave then
                --isMenfeng = true
                strHuFang = "tz_fang.png"
            end
        end
        if strHuFang ~= "" then
            local imgHuFangFlag = ccui.ImageView:create()
            imgHuFangFlag:loadTexture(strHuFang, ccui.TextureResType.plistType)
            children[index]:addChild(imgHuFangFlag)
            if strHuFang == "tz_fang.png" then
                imgHuFangFlag:setContentSize(77, 80)
            end
            imgHuFangFlag:setAnchorPoint(0.5, 0)
            imgHuFangFlag:setScale(1.2)
            imgHuFangFlag:setPosition(children[index]:getContentSize().width / 2, 25)
        end
    end
end

--是否抓杠头
function WinLostItemNode:judgeMahIsZGTBySeat(seat, mah)
    local windSeat = self:getWinLostData():windJudge(seat)
    local mahMenFeng = self:getWinLostData():getMenFengByMah(mah)
    if windSeat + 1 == mahMenFeng then
        return true, mahMenFeng
    end
    return false
end

function WinLostItemNode:isHuSeat(huSeats)
    local isHuSeat = false
    for seat, value in pairs(huSeats) do
        if self._seatId == seat - 1 then
            isHuSeat = value
            break
        end
    end
    return isHuSeat
end

return WinLostItemNode�