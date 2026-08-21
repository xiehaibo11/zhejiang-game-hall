local TransferTipView = class("TransferTipView", XH.ViewBase)

function TransferTipView:getCSBPath()
    return "cocosStudio/hall/CSB/window/FishingKingTransfer/FishingKingTip.csb"
end

function TransferTipView:ctor(param)
    param = param or {}
	TransferTipView.super.ctor(self, param)
end

return TransferTipView