local WatermarkView = CF.gameClass("WatermarkView", CF.ViewBase)

function WatermarkView:ctor(data)
    WatermarkView.super.ctor(self)
    self._seatId = data and data.seatId
    if self._seatId then
        self._localSeat = CF.roomData:seatToLocal(self._seatId)
        self:updatePosition()
    end
end

function WatermarkView:updatePosition()
    self:setPosition(cc.p(53,-53))
end

function WatermarkView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/WatermaskUI.csb"
end

function WatermarkView:getBindingInfo()
    return {
        ["_KW_IMG_MASK"] = { varName = "_kwImgMask"},
    }
end

return WatermarkView�