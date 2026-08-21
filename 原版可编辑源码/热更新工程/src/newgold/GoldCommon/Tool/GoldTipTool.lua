local GoldTipTool = {}

function GoldTipTool.showLoading(hideTime)
    XH.TipTool.showLoading(hideTime)
end

function GoldTipTool.hideLoading()
    XH.TipTool.hideLoading()
end

function GoldTipTool.resetLoading()
    XH.TipTool.resetLoading()
end

function GoldTipTool.showToast(msg, time, pos,bImmediately,...)
    XH.TipTool.showToast(msg, time, pos,bImmediately,...)
end

function GoldTipTool.showTip(info, msg, ...)
    XH.TipTool.showTip(info, msg, ...)
end

function GoldTipTool.showDebugTip(msg)
    XH.TipTool.showDebugTip(msg)
end

return GoldTipTool