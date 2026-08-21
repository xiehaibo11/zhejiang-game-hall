local NotifyModule = class("NotifyModule", XH.ModuleBase)
local ReqNotify = require("app.Req.ReqNotify")

NotifyModule.ENENT_NOTIFY_CHANGED_MSG = "ENENT_NOTIFY_CHANGED_MSG"

function NotifyModule:ctor()
    NotifyModule.super.ctor(self)
    self._notifyList = {}
end

function NotifyModule:reqNotifyInfo()
    local reqNotify = ReqNotify.new()
    reqNotify:addReqCallBack(self, self.onReqNotifyResult)
    reqNotify:start()
end

function NotifyModule:reqNotifyInfoForActivity()
    for i=1,5 do                                                       --初始化公告红点
        XH.lobby:getModule("TabsActivity"):showIconRedPoint("_KW_BTN_ITEM_OFF"..i,false)
    end       
    local reqNotify = ReqNotify.new()
    reqNotify:addReqCallBack(self, self.onReqNotifyResultForAvtivity)
    reqNotify:start()
end

function NotifyModule:onReqNotifyResultForAvtivity(req, type, resp)    --公告红点遍历
    local areaId = XH.areaData:getAreaID()
    local lobbyId = XH.areaData:getLobbyID()
    if type == XH.Req.TYPE.SUCCESS then
        self._notifyList[areaId] = resp or {}
    end
    local notifyList = XH.lobby:getModule("Notify"):getNotifyList()
    if notifyList then
        for i, data in pairs(notifyList) do
            local name = "_KW_BTN_ITEM_OFF"..i..lobbyId
            local user_version = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_ANNOUNCE_VERSION, "",{key = name})
            if data.version ~= user_version then
                -- 取消活动红点 jlw
                -- XH.lobby:getModule("TabsActivity"):showIconRedPoint("_KW_BTN_ITEM_OFF"..i,true)
                XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_ANNOUNCE_VERSION, data.version,{key = name})
            end
            if XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_ANNOUNCE, false,{key = name}) ==false then
                -- 取消活动红点
                -- XH.lobby:getModule("TabsActivity"):showIconRedPoint("_KW_BTN_ITEM_OFF"..i,true)
            end 
        end
    end
end

function NotifyModule:onReqNotifyResult(req, type, resp)
    local respData = {type = type, msg = req:getMessage()}
    local areaId = XH.areaData:getAreaID()
    if type == XH.Req.TYPE.SUCCESS then
        self._notifyList[areaId] = resp or {}
    end
    self:dispatchEvent({name = NotifyModule.ENENT_NOTIFY_CHANGED_MSG, data = respData})
end

function NotifyModule:getNotifyList()
    local areaId = XH.areaData:getAreaID()
    return self._notifyList[areaId] or {}
end

function NotifyModule:isGetNotifyList()
    return false
end

return NotifyModule