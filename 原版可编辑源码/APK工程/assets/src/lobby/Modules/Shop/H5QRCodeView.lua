local H5QRCodeView = class("H5QRCodeView", XH.ViewBase)
function H5QRCodeView:getCSBPath()
    return "cocosStudio/hall/CSB/window/PayTypeH5.csb"
end

function H5QRCodeView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_SHOW_AREA"] = { varName = "_panelArea"},
    }
end


function H5QRCodeView:ctor(param)
    param = param or {}
    H5QRCodeView.super.ctor(self, param)
    self._proForpey = param
    
    if param then
        self:onShowQTPay()
    end
end

function H5QRCodeView:onShowQTPay()
    local width = self._panelArea:getContentSize().width/2
    local height = self._panelArea:getContentSize().height/2
    local propImg = XH.RemoteImage.new()
        :setTouchEnabled(false)
        :setAnchorPoint(cc.p(0.5, 0.5))
        :setPosition(width,height)
        :addTo(self._panelArea)
        :setScale(2)
        propImg:setUrl(self._proForpey,false)
end

function H5QRCodeView:onTouchEventClose(send, eventType)
    self:close()
end

return H5QRCodeView