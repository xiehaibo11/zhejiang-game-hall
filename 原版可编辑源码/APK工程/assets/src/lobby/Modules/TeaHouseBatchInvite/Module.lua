
local TeaHouseBatchInviteModule = class("TeaHouseBatchInviteModule", XH.ModuleBase)

function TeaHouseBatchInviteModule:ctor() 
    TeaHouseBatchInviteModule.super.ctor(self)
end

function TeaHouseBatchInviteModule:getProxyEvents()
    return {
        { module = XH.netEngine, eventName = XH.TeaHouseProtocol.RespRecomendInvitation.event_key, callBack = "onRespDealRecomendInvitation" },
        { module = XH.netEngine, eventName = XH.MatchLinkProtocol.BroadcastMessage.event_key, callBack = "onRespNewInvite"},
    }
end

function TeaHouseBatchInviteModule:getReqConfig()
    return {
        reqRecomendInvitation = { reqPath = "lobby.Req.TeaHouse.ReqRecomendInvitation" },
        reqDealRecomendInvitation = { reqPath = "lobby.Req.TeaHouse.ReqDealRecomendInvitation" },
        ReqPlayerPosition = {reqPath = "lobby.Req.Room.ReqPlayerPosition", callBack = self.onPlayerPositionCallBack},
    }
end

function TeaHouseBatchInviteModule:reqRecomendInvitation()
    if XH.areaData:isTeaSvrSupportBacthInvite() then 
        self:startReq("reqRecomendInvitation", 15)
    end
end

function TeaHouseBatchInviteModule:reqDealRecomendInvitation(appid, acceptInvite, numid, teaid)
    self:startReq("reqDealRecomendInvitation",appid,acceptInvite,numid,teaid, 15)
end

function TeaHouseBatchInviteModule:onRespDealRecomendInvitation(event)
    local respData = XH.TeaHouseProtocol.RespRecomendInvitation:new()
    respData:bistream(event.msg.buff, event.msg.len)
    if respData.ucFlag == XH.TeaHouseProtocol.RespRecomendInvitation.UCFLAG.HAVEMOREDATA 
        or respData.ucFlag == XH.TeaHouseProtocol.RespRecomendInvitation.UCFLAG.LASTONE then
        if respData.numid ~=0 and self:isNeedPopInviteDialog() then
           if XH.SceneManager:getInstance():getTopSceneTag() == XH.SCENE_TAG.LOBBY or XH.SceneManager:getInstance():getTopSceneTag() == XH.SCENE_TAG.TEAHOUSE then
                XH.viewManager:openView("TeaHouseInviteView", nil, {teaHouseInfo = respData})
           end
        end
    elseif respData.ucFlag == XH.TeaHouseProtocol.RespRecomendInvitation.UCFLAG.JOINFAIL then
        XH.TipTool.showToast("加入亲友圈失败")
    elseif respData.ucFlag == XH.TeaHouseProtocol.RespRecomendInvitation.UCFLAG.JOINSUCCESS then
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
            funcOK = function()
                XH.teaHouseManager:joinTeaHouse(respData.teapwd)
            end
        }, "加入亲友圈成功")
    elseif respData.ucFlag == XH.TeaHouseProtocol.RespRecomendInvitation.UCFLAG.ERRDATA then
        XH.TipTool.showToast("加入亲友圈发生错误",2)
    end
end

function TeaHouseBatchInviteModule:onRespNewInvite(event)
    local resp = XH.MatchLinkProtocol.BroadcastMessage:new()
    resp:bistream(event.msg.buff, event.msg.len)
    if resp.nMsgId == XH.MatchLinkProtocol.BroadcastMessage.MSGID.NOTIFY_TEA_INVITE then
        self:reqRecomendInvitation()
    end
end

function TeaHouseBatchInviteModule:isNeedPopInviteDialog()
    local key = string.format("LOBBY_TEAHOUSE_INVITE_PALYER_POP_TIMES_%s_%s",os.date("%Y-%m-%d"),XH.playerData:getNumberID())
    local pop_num =  cc.UserDefault:getInstance():getIntegerForKey(key, 0)
    if pop_num < 10 then--二期改成10
        cc.UserDefault:getInstance():setIntegerForKey(key, pop_num + 1)
        return true
    end
    return false
end

return TeaHouseBatchInviteModule