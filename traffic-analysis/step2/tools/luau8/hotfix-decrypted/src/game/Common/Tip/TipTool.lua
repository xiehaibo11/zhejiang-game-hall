local TipTool = {}

function TipTool.showLoading(hideTime)
    XH.TipTool.showLoading(hideTime)
end

function TipTool.hideLoading()
    XH.TipTool.hideLoading()
end

function TipTool:resetLoading()
    XH.TipTool.resetLoading()
end

function TipTool.showToast(msg, time, ...)
    XH.TipTool.showToast(msg, time, ...)
end

function TipTool.showTip(info, msg, ...)
    XH.TipTool.showTip(info, msg, ...)
end

function TipTool.showPopLayer(layerClassName,initArvg,...)
    if not CF.game then
        return
    end

    return CF.popLayerManager:showLayer(layerClassName,initArvg)
end

--提示弹窗封装
function TipTool.showTips(str, okFunc, cancelFunc)
    local tipLayer = TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.OK_CANCEL})
    tipLayer:setText(str)
    if okFunc then
        tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.OK, okFunc)
    end
    if cancelFunc then
        tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.CANCEL, cancelFunc)
    end
end

--提示弹窗封装
function TipTool.showTipsOk(str, okFunc)
    local tipLayer = TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.OK})
    tipLayer:setText(str)
    if okFunc then
        tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.OK, okFunc)
        tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.CLOSE, okFunc)
    end
end

function TipTool.showAutoCardTip(sceneTag, type)
    XH.TipTool.showAutoCardTip(sceneTag, type)
end

function TipTool.showScrollTip(showType,showText)
    XH.TipTool.showScrollTip(showType,showText)
end

function TipTool.clearScrollTip()
    XH.TipTool.clearScrollTip()
end


return TipTool�