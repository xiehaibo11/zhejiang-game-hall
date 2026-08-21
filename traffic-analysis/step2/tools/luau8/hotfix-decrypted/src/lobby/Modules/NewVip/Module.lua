local VipModule = class("VipModule", XH.ModuleBase)
local TaskDefine = require("app.Define.TaskDefine")

VipModule.EVENT_VIP_CONF = "EVENT_VIP_CONF"
VipModule.EVENT_VIP_REFRESH_SYSTEM = "EVENT_VIP_REFRESH_SYSTEM"
VipModule.EVENT_SHOW_VIP = "EVENT_SHOW_VIP"

function VipModule:ctor()
    VipModule.super.ctor(self)
    self._vipList = {}
end

function VipModule:getReqConfig()
    return {
        ReqTaskProtocol = { reqPath = "app.Req.Task.ReqTaskProtocol", callBack = self.onRespTaskProtocolCallBack },
        ReqSystemTimes = {reqPath = "app.Req.Task.ReqTaskPercent", callBack = self.onReqTaskPercentCallBack},
    }
end

function VipModule:getProxyEvents()
    return {
        { module = XH.netEngine, eventName = XH.MatchLinkProtocol.RespNotifyTaskPercent.event_key, callBack = "onRespNotifyTaskPercent" },
        { module = XH.login:getModule("Login"), eventKeyName = "LOGIN_EVENT_SUCCESS", callBack = "onLoginSuccessCallBack" },
    }
end

function VipModule:reqVipConf()
    local paramStr = ";vipConf = 1"
    self:reqTaskProtocol(paramStr)
end

function VipModule:reqVipAward(propid)
    if not propid then 
        return 
    end
    local paramStr = ";vipAward = 1;" .. "propId = " .. propid
    self:reqTaskProtocol(paramStr)
end

function VipModule:reqVipUser(propid)
    if not propid then 
        return 
    end
    local paramStr = ";useVipProp = 1;" .. "propId = " .. propid
    self:reqTaskProtocol(paramStr)
end

function VipModule:reqTaskProtocol(paramStr)
    print("VipModule:reqTaskProtocol paramStr " .. paramStr)
    local appId = 0
    self:startReq("ReqTaskProtocol", TaskDefine.KW_VIP_PROP, 0, appId, XH.areaData:getSrsGroupID(), XH.KW_CONFIG_LOGIC_TIME_OUT, paramStr)
end

function VipModule:reqVipState()
    local paramStr = ";vipState = 1;"
    self:reqTaskProtocol(paramStr)
end

function VipModule:onRespTaskProtocolCallBack(req, type, data)
    if type ==  XH.Req.TYPE.SUCCESS then
        if req._taskID == TaskDefine.KW_VIP_PROP then
            dump(data, "VipModule:data:")
            if not data.acData or data.acData == "" then
                return
            end
            local respData = json.decode(data.acData)
            if respData.vipConf then
                self._vipList = respData.vipList
                self:dispatchEvent({name = self.EVENT_VIP_CONF})
            elseif respData.vipAward then
                self:reqVipConf()
                self:showVipAward(respData.awardData)
            elseif respData.vipUse then
                self:showVipAward(respData.awardData,true)
                self:dispatchEvent({name = self.EVENT_SHOW_VIP,isVip = true})
            elseif respData.vipState then
                self:dispatchEvent({name = self.EVENT_SHOW_VIP,isVip = respData.isVip})
                if respData.showVip then
                    XH.viewManager:openView("TabsActivityView", nil, { tab = "VIPGIFT"})
                end
            end
        end
    end 
end

function VipModule:onLoginSuccessCallBack()
    XH.SysTool.performDelayOnce(function()
		self:reqVipState()
	end, 0.1)
end

function VipModule:showVipAward(awardData,callback)
    local callFunc = nil
    if callback then
        callFunc = function()
            self:reqVipConf()
        end
    end
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/Image/common/common_icon.plist")
    XH.viewManager:openView("CommonRewardView", nil, awardData ,true, callFunc)
    XH.playerData:flushPlayerDrop()
    XH.playerData:flushGoldCoin()
end

function VipModule:getVipConf()
    table.sort(self._vipList,function(a, b) return a.state > b.state end)
    return self._vipList
end

function VipModule:onRespNotifyTaskPercent(event)
    local data =  XH.MatchLinkProtocol.RespNotifyTaskPercent:new()
    data:bistream(event.msg.buff, event.msg.len)
    if data.nTaskId == TaskDefine.KW_VIP_PROP then
        if not data.acData or data.acData == "" then
            return
        end
        local respData = json.decode(data.acData)
        self:showVipAward(respData.awardData,true)
        self:dispatchEvent({name = self.EVENT_SHOW_VIP, isVip = true})
    end
end

function VipModule:test()
    -- local str = "{\"vipUse\":true,\"awardData\":[{\"ret\":0,\"info\":\"领取成功\",\"cnt\":180000,\"url\":\"ico_gold_4.png\",\"propid\":-1,\"desc\":\"18万金币\"}]}"
    -- local respData = json.decode(str)
    
    local str = "[{\"starttime\":1603111060,\"desc\":\"1万金币\",\"cnt\":10000,\"url\":\"ico_gold_3.png\",\"propid\":-1,\"endtime\":1603715860},{\"starttime\":1603111087,\"endtime\":1603715860,\"cnt\":10000,\"url\":\"ico_gold_3.png\",\"propid\":-1,\"desc\":\"1万金币\"}]"
    local configData = json.decode(str)
    local receiveData = {}
    for i = 1, #configData do
		--[{"starttime":1603109517,"endtime":1603714317,"cnt":10000,"url":"ico_gold_3.png","propid":-1,"desc":"1万金币"}]
		--[{"starttime":1603111060,"desc":"1万金币","cnt":10000,"url":"ico_gold_3.png","propid":-1,"endtime":1603715860},{"starttime":1603111087,"endtime":1603715860,"cnt":10000,"url":"ico_gold_3.png","propid":-1,"desc":"1万金币"}]
			-- LOGD("sendVipReward time " .. os.time() .. " starttime " .. configData[i].starttime .. " endtime " .. configData[i].endtime)
			if os.time() > configData[i].starttime and os.time() <= configData[i].endtime then
					local reward_propid = tonumber(configData[i].propid)
					local reward_cnt = tonumber(configData[i].cnt)
					local tempData = {}
					-- local rel = Task.SendUserAward(aid, nid, info.notifyGameID, reward_propid, reward_cnt, _D.TASK_TYPE_VIP_PROP_USE, "vipsend")
					tempData.cnt = reward_cnt
					tempData.propid = reward_propid
					-- tempData.ret = rel
					tempData.url = configData[i].url
					tempData.desc = configData[i].desc
					-- tempData.info = rel == 0 and "领取成功" or "领取失败"
					receiveData[#receiveData + 1] = tempData
			end
		end
    -- self:showVipAward(respData.awardData,true)
    print("xxxxxxxxxx")
end

return VipModule�