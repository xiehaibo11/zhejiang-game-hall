local MaiMaUI = CF.gameClass("MaiMaUI", CF.ViewBase)

function MaiMaUI:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/TaiZhou/MaiMaLayer.csb"
end

function MaiMaUI:getBindingInfo()
    return {
        ["_KW_PANEL_BUY_MAH_MA"] = {varName="_mahMa"},
    }
end

local mahPos = {
    [1] = {0},
    [2] = {-1, 1},
}
local space = 200

function MaiMaUI:ctor(param)
    param = param or {}
    MaiMaUI.super.ctor(self, param)
    --马牌的数量
    self._betMahCount = param.betMahCount or 0
    --马牌的id
    self._betMahList = param.betMahList or {}

    self:createChildren()
end

function MaiMaUI:getProxyEvents()
    return {
        {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_WINLOST_RESULT", callBack = "onWinlostResult"},
    }
end

function MaiMaUI:createChildren()
    self:createMahLayer()
    CF.SysTool.performWithDelayGlobal(function ()
        self:arrageMaMahPosition()
    end,0.1)
    CF.SysTool.performWithDelayGlobal(function ()
        self:showLightMah()
    end,0.3)
    --CF.SysTool.performWithDelayGlobal(function ()
    --    self:leaveLayer()
    --end,3)
end

function MaiMaUI:createMahLayer()
    local config = CF.settingData:getDefaultData(nil, true)
    local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")
    self._maPaiArray = {}
    for i = 1,#self._betMahList do
        self._maPaiArray[i] = UIMah.new(CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD, config)
        self._maPaiArray[i]:setMahValue(self._betMahList[i])
        self._maPaiArray[i]:setVisible(false)
        self._mahMa:addChild(self._maPaiArray[i])
    end
end

function MaiMaUI:arrageMaMahPosition()
    local count = #self._maPaiArray
    local pos = mahPos[count]
    if pos then
        for index = 1 , #self._maPaiArray do
            self._maPaiArray[index]:setPositionX(pos[index]* space)
            self._maPaiArray[index]:setPositionY(300)
            self._maPaiArray[index]:setLocalZOrder(1)
            local delayTimeBeforeAction = cc.DelayTime:create((index -1)*0.1)
            local fadeIn = cc.FadeIn:create(0.1)
            local callFunc = cc.CallFunc:create(function()
                self._maPaiArray[index]:setVisible(true)
            end)
            local moveAction = cc.MoveTo:create(0.1,cc.p(pos[index]* space,0))
            local spawn1 = cc.Spawn:create(callFunc, fadeIn,moveAction)
            local seq1 = cc.Sequence:create(delayTimeBeforeAction,spawn1)
            self._maPaiArray[index]:runAction(seq1)
        end
    end
end

function MaiMaUI:showLightMah()
    for i = 1,#self._maPaiArray do
        CF.UITool.playJsonAnimationByName(self._maPaiArray[i],"maima_ani","res/animation/Mahjong/Base/maima_ani/maima_ani.ExportJson",1, "Animation1", cc.p(70,96))
    end
end

function MaiMaUI:onWinlostResult(event)
    self:removeSelf()
end

function MaiMaUI:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, 999)
    self:setName("MaiMaUI")
end

return MaiMaUI�