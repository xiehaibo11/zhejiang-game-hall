local ZhaMahUI = class("ZhaMahUI", CF.ViewBase)
local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")

ZhaMahUI.ClsName = "ZhaMahUI"
ZhaMahUI.ObjName = "ZhaMahUI"

ZhaMahUI.isShow = false

function ZhaMahUI:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/WenZhou/ShowZhaMah.csb"
end

function ZhaMahUI:getBindingInfo()
    return {
        ["_KW_PANEL_ZHAMAH"] = { varName = "_zhaPanel" },
        ["_KW_IMG_ZHAMAH_FRAME"] = { varName = "_mahFrame" },
        ["_KW_IMG_ZHAMAH_CHECK"] = { varName = "_mahCheck" },
    }
end

function ZhaMahUI:ctor(param)
    param = param or {}
    ZhaMahUI.super.ctor(self, param)
    self._mahs = param.mahs or {}
    self._realcnt = param.realcnt or 0
    self:createChildren()

end

function ZhaMahUI:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ZHAMA_HIDE", callBack = "close"},
    }
end

function ZhaMahUI:createChildren()
    self:createMahLayer()
    CF.SysTool.performWithDelayGlobal(function ()
        if ZhaMahUI.isShow then
            self:arrageMaMahPosition()
        end
    end,0.1)
    CF.SysTool.performWithDelayGlobal(function ()
        if ZhaMahUI.isShow then
            self:showLightMah()
        end
    end,0.3)
end

function ZhaMahUI:createMahLayer()
    local config = CF.game:getModule("GameLayer"):getMahAllConfig(nil, true)
    self._maPaiArray = {}
    for i = 0,#self._mahs do
        self._maPaiArray[i] = UIMah.new(1, config)
        self._maPaiArray[i]:setMahValue(self._mahs[i])
        self._maPaiArray[i]:setVisible(false)
        self._maPaiArray[i]:setAnchorPoint(cc.p(0.5, 0.5))
        self._mahFrame:addChild(self._maPaiArray[i])
    end
end

function ZhaMahUI:arrageMaMahPosition()
    local count = #self._maPaiArray + 1
    local space = 15
    local border = 30
    local mahWidth = 0
    local mahHeight = 0
    local frameH = self._mahFrame:getContentSize().height
    if count > 0 then
        local mahContent = self._maPaiArray[0]:getContentSize()
        mahWidth = mahContent.width
        mahHeight = mahContent.height
    end
    local frameW = border+border+(mahWidth+space)*count-space
    if frameH < mahHeight + border*2 then
        frameH = mahHeight + border * 2
    end
    for index = 0 , count-1 do
        self._maPaiArray[index]:setPositionX(border + (index) * (mahWidth+space) + mahWidth/2)
        self._maPaiArray[index]:setPositionY(frameH/2)
        self._maPaiArray[index]:setLocalZOrder(1)
        self._maPaiArray[index]:setVisible(true)
    end
    self._mahFrame:setContentSize(frameW, frameH)
end

function ZhaMahUI:showLightMah()
    for i = 0,#self._mahs do
        local isZhong = false
        if self._realcnt == 1 then
            isZhong = true
        else
            local mah = self._mahs[i]
            if mah == CF.GameDefine.MAH_VALUE.WAN_1 or mah == CF.GameDefine.MAH_VALUE.TIAO_1 or mah == CF.GameDefine.MAH_VALUE.TONG_1
                or mah == CF.GameDefine.MAH_VALUE.WAN_5 or mah == CF.GameDefine.MAH_VALUE.TIAO_5 or mah == CF.GameDefine.MAH_VALUE.TONG_5
                or mah == CF.GameDefine.MAH_VALUE.WAN_9 or mah == CF.GameDefine.MAH_VALUE.TIAO_9 or mah == CF.GameDefine.MAH_VALUE.TONG_9
                or mah == CF.GameDefine.MAH_VALUE.JIAN_ZHONG then
                isZhong = true
            end
        end
        if isZhong then
            local check = self._mahCheck:clone()
            check:setVisible(true)
            check:setPositionX(self._maPaiArray[i]:getContentSize().width/2)
            self._maPaiArray[i]:addChild(check)
        end
    end
end

function ZhaMahUI:close(event)
    self:removeSelf()
    ZhaMahUI.isShow = false
end

function ZhaMahUI:showSelf(zorder)
    zorder = zorder or CF.ZORDER.TIPLAYER
    local parent = display.getRunningScene()
    parent:addChild(self, zorder + 3)
    self:setName("ZhaMahUI")
    ZhaMahUI.isShow = true
end

return ZhaMahUI�