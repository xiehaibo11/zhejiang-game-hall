---@class BridgeTip
local BridgeTip = {}

BridgeTip.TIP_TYPE = {
    OK = 1,
    OK_WITHOUT_CLOSE = 2,
    OK_CANEL = 3,
    OK_CANEL_WITHOUT_CLOSE = 4,
}

function BridgeTip.formatString(msg, ...)
    return XH.ConstString.getStr(msg, ...)
end

local function defaultFunc()

end

function BridgeTip.messageBox(bTop, enumType, funcOK, funcCancel, funcClose, msg, ...)
    local zOrder = XH.ZORDER.TIPLAYER
    if bTop then
        zOrder = XH.ZORDER.TOPLAYER
    end
    msg = BridgeTip.formatString(msg, ...) or msg
    if msg == nil or msg == "" then
        return
    end
    msg = TeaHouse.StringTool.replaceMatchStr(msg)
    local args = {}
    args.enumType = enumType
    args.msg = msg
    args.funcOK = funcOK or defaultFunc
    args.funcCancel = funcCancel or defaultFunc
    args.funcClose = funcClose or defaultFunc
    args.enumType = enumType or defaultFunc
	require("app.Tip.MessageBoxView").new(args):showSelf(zOrder)
end

function BridgeTip.toast(msg)
    XH.TipTool.showToast(msg)
end

return BridgeTip