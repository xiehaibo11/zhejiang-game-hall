local TipTool = {}

function TipTool.showLoading(hideTime)
    local LoadingManager = require("app.Tip.LoadingManager")
    LoadingManager.getInstance():addOnce(hideTime)
end

function TipTool.hideLoading()
    local LoadingManager = require("app.Tip.LoadingManager")
    LoadingManager.getInstance():minusOnce()
end

function TipTool:resetLoading()
    local LoadingManager = require("app.Tip.LoadingManager")
    LoadingManager.getInstance():reset()
end

---------------------------------------------------------
--@brief 显示一条弱提示
--@param str 需要显示的内容
--@param time 显示的时间,可以省略默认4S
--@return nil
---------------------------------------------------------
function TipTool.showToast(msg, time, pos,bImmediately,...)
    local showText = XH.ConstString.getStr(msg, ...)
    showText = XH.StringTool.replaceMatchStr(showText)
    local ToastManager = require("app.Tip.ToastManager")
    ToastManager.getInstance():show(showText, time, pos)
end

--显示提示弹窗相关
--显示提示弹窗相关
local function messageBoxOK(bTop, enumType, funcOK, funcCancel, msg, funcClose, bCrossScene, bShowCheckBox, bLeft, ...)
    local zOrder = XH.ZORDER.TIPLAYER
    if bTop then 
        zOrder = XH.ZORDER.TOPLAYER
    end
    msg = XH.ConstString.getStr(msg, ...) or msg
    msg = XH.StringTool.replaceMatchStr(msg)
    local args = {}
    args.enumType = enumType
    args.msg = msg
    args.funcOK = funcOK
    args.funcCancel = funcCancel
    args.funcClose = funcClose
    args.enumType = enumType
    args.showCheckBox = bShowCheckBox
    args.bLeft = bLeft
    local popNode = XH.SceneManager:getInstance():getPopNode()
    local tipView = require("app.Tip.MessageBoxView").new(args)
    if bCrossScene and popNode then
        popNode:addChild(tipView)
    else
        tipView:showSelf(zOrder)
    end
end

function TipTool.showTip(info, msg, ...)
    local bTop = info.bTop == nil and false or info.bTop
    local type = info.type or XH.TIP_LAYER_TYPE.OK
    local funcOK = info.funcOK
    local funcCancel = info.funcCancel
    local funcClose = info.funcClose
    local bCrossScene = info.bCrossScene
    local bShowCheckBox = info.bShowCheckBox
    local bLeft = info.bLeft
    messageBoxOK(bTop, type, funcOK, funcCancel, msg, funcClose, bCrossScene, bShowCheckBox, bLeft, ...)
end

local isExist = false

function TipTool.showClipboardTip(info)
    if device.platform == "ios" then
        XH.sdkManager:xhCallOCFunc("XHsysfunc", "XH_sysfuncGetClipboardContent", {})
        return
    end

    local allow = cc.UserDefault:getInstance():getBoolForKey("copy_allow", false)
    if allow then
        if device.platform == "android" then
            XH.sdkManager:callFunction(XH.ThirdDefine.SDK_INTERFACE_NAMES_KEY.SYS_FUNC_GET)
        end
    else
        local copyTime = cc.UserDefault:getInstance():getIntegerForKey("copy_dialog_time", 0)
        if (info and info.always) or (os.time() - copyTime >= 86400) and not isExist then
            isExist = false
            cc.UserDefault:getInstance():setBoolForKey("copy_allow", true)
            if device.platform == "android" then
                XH.SysTool.performDelayOnce(function()
                    XH.viewManager:openView("PermissionTipView", nil, "剪切板权限：", "获取剪切板数据，用于快速加入房间")
                end, 1)
                if XH.sdkManager:isSupportFunctionAndroid("set_clip_allow") then
                    XH.sdkManager:callFunctionWithMap("set_clip_allow", { ["0"] = "allow"})
                end
                XH.sdkManager:callFunction(XH.ThirdDefine.SDK_INTERFACE_NAMES_KEY.SYS_FUNC_GET)
            end
            -- TipTool.showTip({
            --     type = XH.TIP_LAYER_TYPE.OK_CANCEL_NO_CLOSE,
            --     funcOK = function ()
            --         isExist = false
            --         cc.UserDefault:getInstance():setBoolForKey("copy_allow", true)
            --         if device.platform == "android" then
            --             if XH.sdkManager:isSupportFunctionAndroid("set_clip_allow") then
            --                 XH.sdkManager:callFunctionWithMap("set_clip_allow", { ["0"] = "allow"})
            --             end
            --             XH.sdkManager:callFunction(XH.ThirdDefine.SDK_INTERFACE_NAMES_KEY.SYS_FUNC_GET)
            --         end
            --     end,
            --     funcCancel = function ()
            --         isExist = false
            --         cc.UserDefault:getInstance():setIntegerForKey("copy_dialog_time", os.time())
            --     end,
            --     bCrossScene = true,
            --     bTop = true,
            -- }, info.msg or "是否允许使用剪切板，快速加入房间")
        end
    end
end

function TipTool.showDebugTip(msg)
    local popNode = XH.SceneManager:getInstance():getPopNode()
    if popNode then
        local tipLayer = require("app.Tip.DebugTipLayer").new()
        tipLayer:setText(msg)
        popNode:addChild(tipLayer)
	end
end

function TipTool.showChoseTip(info,...)
    local popNode = XH.SceneManager:getInstance():getPopNode()
    if popNode then
        local tipLayer = require("app.Tip.ChoseTipLayer").new(info)
        popNode:addChild(tipLayer)
	end
end

function TipTool.showAutoCardTip(sceneTag, type)
    local tipLayer = require("app.Tip.AutoCardTipLayer").new({sceneTag = sceneTag, type = type})
    tipLayer:showSelf()
end

function TipTool.showScrollTip(showType,showText)
    local scene = display.getRunningScene()
    local node = scene:getChildByName("ScrollTipLayer")
    if node then
        return
    end 
    local ToastManager = require("app.Tip.ToastManager")
    ToastManager.getInstance():showScrollTip(showType,showText)
end

function TipTool.clearScrollTip()
    local ToastManager = require("app.Tip.ToastManager")
    ToastManager.getInstance():clearScrollTip()
end

local function messageBoxLogOff(bTop, enumType, funcOK, funcCancel, msg, funcClose, ...)
    local zOrder = XH.ZORDER.TIPLAYER
    if bTop then
        zOrder = XH.ZORDER.TOPLAYER
    end
    msg = XH.ConstString.getStr(msg, ...) or msg
    msg = XH.StringTool.replaceMatchStr(msg)
    local args = {}
    args.enumType = enumType
    args.msg = msg
    args.funcOK = funcOK
    args.funcCancel = funcCancel
    args.funcClose = funcClose
    args.enumType = enumType
	require("app.Tip.MessageBoxLogOffView").new(args):showSelf(zOrder)
end

function TipTool.showLogOffTip(info, msg, ...)
    local bTop = info.bTop == nil and false or info.bTop
    local type = info.type or XH.TIP_LAYER_TYPE.OK
    local funcOK = info.funcOK
    local funcCancel = info.funcCancel
    local funcClose = info.funcClose
    messageBoxLogOff(bTop, type, funcOK, funcCancel, msg, funcClose, ...)
end

return TipTool