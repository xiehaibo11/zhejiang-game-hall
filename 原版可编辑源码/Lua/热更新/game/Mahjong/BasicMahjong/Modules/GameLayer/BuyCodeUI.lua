local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")
local BuyCodeUI = CF.gameClass("BuyCodeUI", CF.ViewBase)

local mahPos = {
    [1] = {-0.5},
    [2] = {-1.25,0.25},
    [3] = {-2,-0.5,1},
    [4] = {-2.75,-1.25,0.25,1.75},
    [5] = {-3.5,-2,-0.5,1,2.5},
    [6] = {-4.25,-2.75,-1.25,0.25,1.75,3.25},
    [7] = {-5,-3.5,-2,-0.5,1,2.5,4},
    [8] = {-5.75,-4.25,-2.75,-1.25,0.25,1.75,3.25,4.75},
}

local mahArrayIndex = {1,6,2,7,3,8,4,5}

local windImg = {
    [CF.GameDefine.MAH_VALUE.FENG_DONG] = "ma_icon_dong.png",
    [CF.GameDefine.MAH_VALUE.FENG_NAN] = "ma_icon_nan.png",
    [CF.GameDefine.MAH_VALUE.FENG_XI] = "ma_icon_xi.png",
    [CF.GameDefine.MAH_VALUE.FENG_BEI] = "ma_icon_bei.png",
}

function BuyCodeUI:ctor(param)
    param = param or {}
    BuyCodeUI.super.ctor(self, param)
    --马牌的数量
    self._betMahCount = param.betMahCount or 0
    --马牌的id
    self._betMahList = param.betMahList or {}
    --马牌的风位
    self._betMahDirection = param.betMahDirection or {}
    --胡得人数
    self._huCount = param.huCount or 0
    --胡的玩家真实风位
    self._huDirection = param.huDirection or {}
    --全部玩家的真实风位
    self._allDirection = param.allDirection or {}
    -- 外部传入的买码动画倍速，默认 1（不加速）；<=0 时按 1 处理
    local speed = tonumber(param.playSpeed)
    self._playSpeed = (speed and speed > 0) and speed or 1
    self:createChildren()
end

function BuyCodeUI:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/BuyCodeLayer.csb"
end

function BuyCodeUI:getBindingInfo()
    return {
        ["_KW_PANEL_BUY_MAH_STACK"] = {varName = "_mahStack"},
        ["_KW_PANEL_BUY_MAH_MA"] = {varName = "_mahMa"},
        ["_KW_BTN_EXIT"] = {varName = "_exitBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onExitBtnClicked"},
        ["_KW_PANEL_BUY_LAYER_"] = {varName = "buyLayer", beginIndex = 1, endIndex = 4},
        ["_KW_WIND_POSITISON_"] = {varName = "windPosition", beginIndex = 1, endIndex = 4},
        ["_KW_BUY_IMG_"] = {varName = "buyImg", beginIndex = 1, endIndex = 4},
        ["_KW_BUY_MAH_BEI_"] = {varName = "buyMahBei", beginIndex = 1, endIndex = 4},
        ["_KW_BUY_MAH_FNT_"] = {varName = "buyMahFnt", beginIndex = 1, endIndex = 4},
    }
end

function BuyCodeUI:createChildren()
    self:createMahLayer()

    self:performWithDelay(function ()
        if self and self.deleteMahShowInMa then
            self:deleteMahShowInMa()
        end
    end,0.3 / self._playSpeed)
    self:performWithDelay(function ()
        if self and self.arrageMaMahPosition then
            self:arrageMaMahPosition()
        end
    end,0.7 / self._playSpeed)
    self:performWithDelay(function ()
        if self and self.setMahBlack then
            self:setMahBlack()
        end
    end,0.9 / self._playSpeed)
    self:performWithDelay(function ()
        if self and self.showLightMah then
            self:showLightMah()
        end
    end,1.1 / self._playSpeed)
    self:performWithDelay(function ()
        if self and self.showBuyTextCount then
            self:showBuyTextCount()
        end
    end,1.3 / self._playSpeed)
    self:performWithDelay(function ()
        if self and self.leaveLayer then
            self:leaveLayer()
        end
    end,3 / self._playSpeed)
end

function BuyCodeUI:createMahLayer()
    self._mahArray = {}
    local config = CF.game:getModule("GameLayer"):getMahAllConfig(nil, true)
    for i = 1, 10 do
        self._mahArray[i] = UIMah.new(2,config)
        self._mahArray[i]:setMahValue(CF.GameDefine.MAH_VALUE.BACK)
        self._mahStack:addChild(self._mahArray[i])
    end

    self:arrageMahPosition()
    self._maPaiArray = {}
    for i = 1,#self._betMahList do
        self._maPaiArray[i] = UIMah.new(1,config)
        self._maPaiArray[i]:setMahValue(self._betMahList[i])
       self._maPaiArray[i]:setVisible(false)
       self._mahMa:addChild(self._maPaiArray[i])
    end
    self:showBuyTextLayer()
end

function BuyCodeUI:arrageMahPosition()
    local mahInfo = {}
    for index = 1 , #self._mahArray do
        local order = math.floor(index / 5)
        if index % 5 == 0 then
            order = order - 1
        end
        local indexTemp = math.floor(index % 5) - 1
        if indexTemp == -1 then
            indexTemp = 4
        end
        mahInfo[index] = {}
        mahInfo[index].x = indexTemp * 133 - 133 * 2.5
        mahInfo[index].y = -order * 43
        mahInfo[index].z = -order
    end
    for index = 1 , #self._mahArray do
        local info = mahInfo[index]
        self._mahArray[index]:setPositionX(info.x)
        self._mahArray[index]:setPositionY(info.y)
        self._mahArray[index]:setLocalZOrder(info.z)
    end
end

function BuyCodeUI:arrageMaMahPosition()
    local count = #self._maPaiArray
    local pos = mahPos[count]
    if pos then
        for index = 1 , #self._maPaiArray do
            self._maPaiArray[index]:setPositionX(pos[index]* 133)
            self._maPaiArray[index]:setPositionY(350)
            self._maPaiArray[index]:setLocalZOrder(1)
            local delayTimeBeforeAction = cc.DelayTime:create((index -1)*0.1 / self._playSpeed)
            local fadeIn = cc.FadeIn:create(0.1 / self._playSpeed)
            local callFunc = cc.CallFunc:create(function()
                self._maPaiArray[index]:setVisible(true)
            end)
            local moveAction = cc.MoveTo:create(0.1 / self._playSpeed,cc.p(pos[index]* 133,0))
            local spawn1 = cc.Spawn:create(callFunc, fadeIn,moveAction)
            local seq1 = cc.Sequence:create(delayTimeBeforeAction,spawn1)
            self._maPaiArray[index]:runAction(seq1)
        end
    end
    
end

function BuyCodeUI:deleteMahShowInMa()
    local count = self._betMahCount
    for i = 1,count do
        self._mahArray[mahArrayIndex[i]]:removeSelf()
    end
end

function BuyCodeUI:showBuyTextLayer()
    for i = 1,self._huCount do
        self["buyLayer"..i]:setVisible(true)
        local windTemp = self._huDirection[i]
        if windTemp then
            if windTemp == CF.GameDefine.MAH_VALUE.FENG_DONG then
                self["windPosition"..i]:loadTexture("ma_dongfeng.png", ccui.TextureResType.plistType)
            elseif windTemp == CF.GameDefine.MAH_VALUE.FENG_NAN then
                self["windPosition"..i]:loadTexture("ma_nanfeng.png", ccui.TextureResType.plistType)
            elseif windTemp == CF.GameDefine.MAH_VALUE.FENG_XI then
                self["windPosition"..i]:loadTexture("ma_xifeng.png", ccui.TextureResType.plistType)
            elseif windTemp == CF.GameDefine.MAH_VALUE.FENG_BEI then
                self["windPosition"..i]:loadTexture("ma_beifeng.png", ccui.TextureResType.plistType)
            end
        end
    end
end

function BuyCodeUI:setMahBlack()
    for i = 1,#self._maPaiArray do
        self._maPaiArray[i]:setColor( cc.c3b(119,121,125))
    end
end

function BuyCodeUI:showLightMah()
    for i = 1,#self._maPaiArray do
        for j = 1,#self._huDirection do
            if self._betMahDirection[i] == self._huDirection[j] then
                self._maPaiArray[i]:setColor(cc.c3b(255,255,255))
                local imageHuDirection = ccui.ImageView:create()
                imageHuDirection:loadTexture(windImg[self._huDirection[j]], ccui.TextureResType.plistType)
                imageHuDirection:setPosition(cc.p(70,126))
                imageHuDirection:setScale(2)
                local d = 0.2 / self._playSpeed
                local scaleAction = cc.ScaleTo:create(d,1)
                local fadeIn = cc.FadeIn:create(d)
                local spawn1 = cc.Spawn:create(fadeIn,scaleAction)
                imageHuDirection:runAction(spawn1)
                CF.UITool.playJsonAnimationByName(self._maPaiArray[i],"maima_ani","res/animation/Mahjong/Base/maima_ani/maima_ani.ExportJson",1, "Animation1", cc.p(70,96))
                self._maPaiArray[i]:addChild(imageHuDirection)
                break
            end
        end
    end
end

function BuyCodeUI:showBuyTextCount()
    for i = 1,self._huCount do
        self["buyMahBei"..i]:setVisible(true)
        self["buyMahFnt"..i]:setVisible(true)
        local direction = self._huDirection[i]
        local counts = 0
        for j = 1,#self._betMahDirection do
            if self._betMahDirection[j] == direction then
                counts = counts + 1
            end
        end
        self["buyMahBei"..i]:setString(counts)
        self["buyMahBei"..i]:setScale(2)
        local d = 0.2 / self._playSpeed
        local scaleAction = cc.ScaleTo:create(d,1)
        local fadeIn = cc.FadeIn:create(d)
        local spawn1 = cc.Spawn:create(fadeIn,scaleAction)
        self["buyMahBei"..i]:runAction(spawn1)
    end
end

function BuyCodeUI:onExitBtnClicked(send,eventType)
    self:leaveLayer()
end

function BuyCodeUI:leaveLayer()
    self:removeSelf()
end

function BuyCodeUI:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, 999)
end

return BuyCodeUI