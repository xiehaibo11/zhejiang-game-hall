local MahSurplusPanel = CF.gameClass("MahSurplusPanel", CF.ViewBase)
local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")

local gScale = 0.5

function MahSurplusPanel:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/RuiAn/MahSurplus.csb"
end

function MahSurplusPanel:getBindingInfo()
    return  {
        ["_KW_IMG_SURPLUS_FRAME"] = {varName = "_mahFrame"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
    }
end

function MahSurplusPanel:ctor(param)
    MahSurplusPanel.super.ctor(self, param)
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    self._mahs = winLostData._surplusMahs
    self:createChildren()
end

function MahSurplusPanel:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "HIDE_MAH_SURPLUS_PANEL", callBack = "onHideSelf"},
    }
end

function MahSurplusPanel:createChildren()
    self:createMahLayer()
    self:arrageMaMahPosition()
end

function MahSurplusPanel:createMahLayer()
    local config = CF.game:getModule("GameLayer"):getMahAllConfig(nil, true)
    self._maPaiArray = {}
    for i = 1,#self._mahs do
        self._maPaiArray[i] = UIMah.new(CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD, config)
        self._maPaiArray[i]:setMahValue(self._mahs[i])
        self._maPaiArray[i]:setScale(gScale)
        self._maPaiArray[i]:setVisible(false)
        self._mahFrame:addChild(self._maPaiArray[i])
    end
end

function MahSurplusPanel:arrageMaMahPosition()
    local count = #self._maPaiArray
    local space = 0
    local border = 60
    local winFrameW = self._mahFrame:getContentSize().width
    local winFrameH = self._mahFrame:getContentSize().height
    local mahWidth = 0
    local mahHeight = 0
    if count > 0 then
        local mahContent = self._maPaiArray[1]:getContentSize()
        mahWidth = math.floor(mahContent.width * gScale)
        mahHeight = math.floor(mahContent.height * gScale)
    end
    local lineCount = math.floor((winFrameW - border*2)/mahWidth)
    if lineCount > 16 then
        lineCount = 16
    end
    if lineCount > 1 then
        space = math.floor((winFrameW - border*2 - mahWidth*lineCount)/(lineCount-1))
    end
    local row = 0
    local column = 0
    for index = 1 , count do
        if column >= lineCount then
            column = 0
            row = row + 1
        end
        self._maPaiArray[index]:setPositionX(border + (column) * (mahWidth+space) + mahWidth/2)
        self._maPaiArray[index]:setPositionY(winFrameH - row * (mahHeight+space) - border - mahHeight/2)
        self._maPaiArray[index]:setLocalZOrder(1)
        self._maPaiArray[index]:setVisible(true)
        column = column + 1
    end
end

function MahSurplusPanel:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, 999)
    self:setName("MahSurplusPanel")
end

function MahSurplusPanel:onHideSelf(event)
    self:removeSelf()
end

function MahSurplusPanel:onBtnClose(send, eventType)
    self:removeSelf()
end

return MahSurplusPanel[