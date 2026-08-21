local KickModule = CF.gameClass("KickModule", CF.ModuleBase)
local SxVipConfig = require('lobby.Modules.Sxvip.Config')

KickModule.EVENT_HIDE_GUIDE_ANI = "EVENT_HIDE_GUIDE_ANI"
KickModule.EVENT_UPDATE_PROP_GUIDE = "EVENT_UPDATE_PROP_GUIDE"

KickModule.GUIDE_TYPE = {
    NONE = 0,
    FIRST_GUIDE = 1,
    SECOND_GUIDE = 2,
}

function KickModule:getProxyEvents()
    return {
        {module = CF.netEngine, eventName = CF.GameMProtocol.RespOwnerKickUser.event_key, callBack = "onRecivePopMsgBox"}
    }
end

function KickModule:getSubXYDealList()
    return {
    }
end

function KickModule:ctor(param)
    KickModule.super.ctor(self, param)
    self._kickTimes = 0
end

function KickModule:onRecivePopMsgBox(event)
    local respData =  CF.GameMProtocol.RespOwnerKickUser:new()
    respData:bistream(event.msg.buff, event.msg.len)

    if respData.ucFlag == CF.GameMProtocol.RespOwnerKickUser.FLAG.SUCCEED then
        CF.TipTool.showToast("成功请出玩家")
    else
        CF.TipTool.showToast("请出玩家失败(" .. respData.ucFlag .. ")")
    end
end

function KickModule:sendVipKick(areaid, numid, nickname)
    if XH.lobby:getModule("Sxvip"):isExpire() then
        local formatStr = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='44' color='%s'>%s</font>"
        local Text = string.format(formatStr..formatStr..formatStr..formatStr, "#CD8551", "开通会员可", "#17A199", "免费踢人", "#CD8551", "\n并且会员可以", "#17A199", "防止被踢出")
        local msgBoxView = XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
            funcOK = function()
                XH.viewManager:openView("SxvipPrivilegeView", nil, SxVipConfig.ThrowData.source.tickGuide)
                local m = XH.lobby:getModule("Sxvip.ThrowData")
                m:throwData(XH.NewThrowDataDefine.hy24090624, {block_item_id = m:getBeforeGameStartStr(), game_id = string.format("%d_%d", XH.areaData:getAreaID(), CF.roomData:getGameID())})     
            end,
            richText = true
        }, Text)
        msgBoxView:updateButtonOK1Image("Btn_game_vip_kthy.png")

        local m = XH.lobby:getModule("Sxvip.ThrowData")
        m:throwData(XH.NewThrowDataDefine.hy24090623, {block_item_id = m:getBeforeGameStartStr(), game_id = string.format("%d_%d", XH.areaData:getAreaID(), CF.roomData:getGameID())})        
        return
    end
    local formatStr = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='44' color='%s'>%s</font>"

    nickname = self:escapeXmlChars(nickname)
    local Text = string.format(formatStr..formatStr..formatStr, "#CD8551", "是否确认将", "#17A199", nickname, "#CD8551", "踢出房间？")
    XH.TipTool.showTip({
        type = XH.TIP_LAYER_TYPE.OK_CANCEL,
        funcOK = function()
            if self._kickTimes > self:getKickLimit() then
                CF.TipTool.showToast("您踢人太多啦，先休息一下~")
            else
                CF.msgManager:sendReqVipKickUser(areaid, numid)
            end
        end,
        richText = true
    }, Text)

    CF.reqKickTimes({type = 0}, self, function(_target, req, type, data)
        if type == XH.Req.TYPE.SUCCESS then
            if data and data.resp and data.resp.errCode == 0 then
                self._kickTimes = data.cnt
            end
        end
    end)
end

-- 获取踢人配置
function KickModule:getKickLimit()
    local default = 10
    local configModule = XH.lobby:getModule("Configuration")
    if not configModule then
        return default
    end
    local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
    local configJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    if configJsonData then
        return configJsonData.Sxvip.kick_limit or default
    end
    return default
end


function KickModule:notifyKickSuccess()
    CF.reqKickTimes({type = 1}, self, function(_target, req, type, data)
        if type == XH.Req.TYPE.SUCCESS then
            if data and data.resp and data.resp.errCode == 0 then
                print("success")
            end
        end
    end)
end

function KickModule:escapeXmlChars(inputStr)
    local escapedStr = inputStr
    -- 转义 XML 特殊字符
    escapedStr = string.gsub(escapedStr, "&", "&amp;") -- 必须首先替换 &
    escapedStr = string.gsub(escapedStr, "<", "&lt;")
    escapedStr = string.gsub(escapedStr, ">", "&gt;")
    escapedStr = string.gsub(escapedStr, '"', "&quot;")
    escapedStr = string.gsub(escapedStr, "'", "&apos;")
    return escapedStr
end

return KickModuleY