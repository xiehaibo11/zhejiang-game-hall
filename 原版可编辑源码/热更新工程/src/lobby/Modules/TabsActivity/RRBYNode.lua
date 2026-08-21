local RRBYNode = class("RRBYNode", XH.ViewBase)

function RRBYNode:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/TabsActivity/TabRRBYAct.csb"
end

function RRBYNode:getBindingInfo()
    return {
        ["_KW_IMAGE_BG"] = {varName = "_imageBg"},
        ["_KW_NODE_GUN"] = {varName = "_nodeGun"},
        ["_KW_NODE_BTN"] = {varName = "_nodeBtn"},
    }
end

function RRBYNode:ctor(param)
    RRBYNode.super.ctor(self, param)


    local params = {path = "animation/Lobby/Activity/buyu/", tex = "zzb_buyu_banner.json", ske = "zzb_buyu_banner.atlas", armatureName = "animation", scale = 1.0}
    local armatureGun = display.playDargonBonesSpine(params)
    if armatureGun then
        self._nodeGun:addChild(armatureGun)
    end

    params = {path = "animation/Lobby/Activity/buyu/", tex = "zzb_ty_btn.json", ske = "zzb_ty_btn.atlas", armatureName = "animation", scale = 1.0}
    local armatureBtn = display.playDargonBonesSpine(params)
    if armatureBtn then
        self._nodeBtn:addChild(armatureBtn)
    end

    self._imageBg:addTouchEventListener(handler(self, self.onTouchEventGo))
end

function RRBYNode:onTouchEventGo(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if XH.lobby:getModule("RRBuYu"):isDownloading() then 
        XH.TipTool.showToast("正在加载中，请稍等...", 3)
        return
    end
    local enterRRBY = function()
        if device.platform == "android" then
            XH.lobby:getModule("RRBuYu"):isDownloadCompleted(true)
            XH.lobby:getModule("Replugin"):postToSepperllitaPlugin(1)
        elseif device.platform == "ios" then
            XH.lobby:getModule("RRBuYu"):joinInRRBuyu()
        end
    end
    local position = XH.playerData:getPlayerPosition()
    if position.gameID ~= 0 then
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK_CANCEL,
            funcOK = function()
                enterRRBY()
            end
        }, "当前正在对局中，是否前往？")
        return
    end
    enterRRBY()

    cc.UserDefault:getInstance():setBoolForKey("RedPointActivityRRBY", false)
    XH.lobby:getModule("TabsActivity"):showIconRedPoint("RRBY", false)
end

return RRBYNode
