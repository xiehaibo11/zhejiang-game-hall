---@class BridgeSys
local BridgeSys = {}

function BridgeSys.getChannelID()
    return XH.SysTool:getChannelID()
end

function BridgeSys.GetOsVersion()
    return XH.SysTool.GetOsVersion()
end

function BridgeSys.GetDevid()
    return XH.SysTool.GetDevid()
end

function BridgeSys.copyClipboard(text)
    return XH.SysTool.copyString(text)
end

local DEFAULT_SHARE_TEXT = "我在《浙江游戏大厅》等你来游戏，快来一起玩吧"
function BridgeSys.share(shareInfo)
    if not BridgeSys.isInStalledWeChat() then
        local shareText = DEFAULT_SHARE_TEXT
        if shareInfo.copyTextWhenNoWX and shareInfo.copyTextWhenNoWX ~= "" then
            shareText = shareInfo.copyTextWhenNoWX
        end
        XH.SysTool.copyString(shareText)
        XH.TipTool.showToast("邀请信息已复制成功，粘贴分享给您的好友吧！", 2)
        return
    end
    local ReqShare = require("app.Req.SDK.ReqShare")
    local reqShare = ReqShare:new()
    reqShare:start(shareInfo)
end

function BridgeSys.isInStalledWeChat()
    return XH.sdkManager:isInstallWeChat()
end

function BridgeSys.openWeChat()
    if BridgeSys.isInStalledWeChat() then
        cc.Application:getInstance():openURL("weixin://")
    end
end

return BridgeSys