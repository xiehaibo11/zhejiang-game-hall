---@class TipTool : BridgeTip 扩展提示工具，注方法被覆盖
local TipTool = TeaHouse.BridgeTip

function TipTool.formatString(msg, ...)
    local text = TeaHouse.TextConfig[msg]
    if text ~= nil then
        msg = text
    else
        return 
    end
    return string.format(msg, ...)
end

function TipTool.showTip(info, msg, ...)
    info = info or { type = TipTool.TIP_TYPE.OK }
    TipTool.messageBox(false, info.type, info.funcOK, info.funcCancel, info.funcClose, msg, ...)
end

function TipTool.showToast(msg)
    local text = TeaHouse.TextConfig[msg]
    if text ~= nil then
        msg = text
    end
    -- local toastView = TeaHouse.manager.viewManager:getView("TeaHouseToastView")
    -- if toastView == nil then
    --     toastView = TeaHouse.manager.viewManager:openView("TeaHouseToastView", 10)
    -- end
    -- if toastView ~= nil then
    --     toastView:setMessage(msg)
    -- end
    TipTool.toast(msg)
end

return TipTool