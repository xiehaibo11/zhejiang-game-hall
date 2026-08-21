local IdentityCheckModule = class("IdentityCheckModule", XH.ModuleBase)
local TaskDefine = require("app.Define.TaskDefine")

IdentityCheckModule.EVNET_REAL_NAME_BACK = "EVNET_REAL_NAME_BACK"
IdentityCheckModule.EVNET_REAL_NAME_BACK_ING = "EVNET_REAL_NAME_BACK_ING"
IdentityCheckModule.EVENT_REALNAME_TIMEOVER = "EVENT_REALNAME_TIMEOVER"
IdentityCheckModule.EVENT_REALNAME_TIMEOVER_LIMIT = "EVENT_REALNAME_TIMEOVER_LIMIT"
IdentityCheckModule.EVENT_REALNAME_AWARD_INFO = "EVENT_REALNAME_AWARD_INFO"

-- IdentityCheckModule.EVNET_REQ_SYS_TIME_CALLBACK = "EVNET_REQ_SYS_TIME_CALLBACK"

function IdentityCheckModule:ctor()
    IdentityCheckModule.super.ctor(self)
end

function IdentityCheckModule:getReqConfig()
    return {
        ReqDefendIdentity = {reqPath = "lobby.Req.IdentityDefend.ReqDefendIdentity", callBack = self.onDefendCallback},
        -- ReqSystemTimes = { reqPath = "app.Req.Task.ReqTaskPercent", callBack = self.onReqSystemTimesCallBack}
        ReqVisitorHeart = {reqPath = "lobby.Req.IdentityDefend.ReqVisitorHeart", callBack = self.onReqVisitorHeartCallback},
        ReqAwardInfo = {reqPath = "app.Req.Task.ReqTaskProtocol", callBack = self.onReqAwardInfoCallBack},
        ReqGetAward = {reqPath = "app.Req.Task.ReqTaskProtocol", callBack = self.onReqGetAwardCallBack}
    }
end

function IdentityCheckModule:ReqAwardInfo()
    self:startReq("ReqAwardInfo", TaskDefine.TASK_ID.TASK_TYPE_REAL_NAME, 0, 0, XH.areaData:getSrsGroupID(), XH.KW_CONFIG_LOGIC_TIME_OUT, ";type=1;")
end

function IdentityCheckModule:onReqAwardInfoCallBack(cell, ctype, data)
    if data == nil or data == "" or data.acData == "" then
        return
    end
    if ctype == XH.Req.TYPE.SUCCESS then
        local actData = cjson.decode(data.acData)
        if actData and #actData.award > 0 then
            self:dispatchEvent({name = IdentityCheckModule.EVENT_REALNAME_AWARD_INFO, data = actData.award})
        end
    end
end

function IdentityCheckModule:ReqGetAward()
    self:startReq("ReqGetAward", TaskDefine.TASK_ID.TASK_TYPE_REAL_NAME, 0, 0, XH.areaData:getSrsGroupID(), XH.KW_CONFIG_LOGIC_TIME_OUT, ";type=2;")
end

function IdentityCheckModule:onReqGetAwardCallBack(cell, ctype, data)
    if data == nil or data == "" or data.acData == "" then
        return
    end
    if ctype == XH.Req.TYPE.SUCCESS then
        local actData = cjson.decode(data.acData)
        if actData and #actData.award > 0 then
            local cilentAward = {}
            for i = 1, #actData.award do
                local award = {}
                award.url = actData.award[i].propImgUrl
                award.desc = actData.award[i].propCount
                cilentAward[#cilentAward + 1] = award
            end
            XH.viewManager:openView("CommonRewardView", XH.ZORDER.TOPLAYER + 1, cilentAward)
        end
    end
end

function IdentityCheckModule:reqDefendIdentity(strName, strIDNum, isAutoBindPhone)
    XH.TipTool.showLoading()
    self._isAutoBindPhone = isAutoBindPhone or false
    self:startReq("ReqDefendIdentity", strName, strIDNum, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function IdentityCheckModule:onDefendCallback(cell, type, datas)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        XH.playerData:flushPlayerDefendIdentity()
        if XH.configerManager:getIsNewRealName() then
            if datas.mtx.data.status == 0 then
                local data = {isAutoBindPhone = self._isAutoBindPhone}
                -- 此处调用百度营销注册接口上报  
                local target = cc.Application:getInstance():getTargetPlatform()
                if target == cc.PLATFORM_OS_IPHONE or target == cc.PLATFORM_OS_IPAD then
                    XH.sdkManager:xhCallOCFunc("", "baidu_Register")
                elseif device.platform == "android" then
                    -- local luaj = require("cocos.cocos2d.luaj")
                    -- luaj.callStaticMethod("org/cocos2dx/lua/AppActivity", "baiduActionRegister")
                    XH.lobby:getModule("BaiduOcpc"):reprotUserData("REGISTER", {numid = XH.playerData:getNumberID()})
                    print("---------baiduRegister-------------")
                end
                self:dispatchEvent({name = IdentityCheckModule.EVNET_REAL_NAME_BACK, msg = data})
                self:ReqGetAward()
            elseif datas.mtx.data.status == 1 then
                self:dispatchEvent({name = IdentityCheckModule.EVNET_REAL_NAME_BACK_ING})
            elseif datas.mtx.data.status == 2 then
                XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK, bTop = true}, "认证失败！")
            end
        else
            local data = {isAutoBindPhone = self._isAutoBindPhone}
            self:dispatchEvent({name = IdentityCheckModule.EVNET_REAL_NAME_BACK, msg = data})
        end
    else
        local message = cell:getMessage()
        if message == "id number error" then
            XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK, bTop = true}, "身份证错误！")
        else
            XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK, bTop = true}, message)
        end
    end
end

function IdentityCheckModule:reqRealNameV()
    self:startReq("ReqVisitorHeart", XH.KW_CONFIG_LOGIC_TIME_OUT, true)
end

function IdentityCheckModule:onReqVisitorHeartCallback(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data.nonlinetime / 60 > 40 then
            self:dispatchEvent({name = IdentityCheckModule.EVENT_REALNAME_TIMEOVER, data = data.nnextplaytime})
        else
            self:dispatchEvent({name = IdentityCheckModule.EVENT_REALNAME_TIMEOVER_LIMIT})
        end
    end
end

-- function IdentityCheckModule:reqSystemTimes()
--     self:startReq("ReqSystemTimes", XH.playerData:getNumberID(), 0, 120, TaskDefine.KW_SYSTEM_TIME, XH.areaData:getSrsGroupID(), 10)
-- end

-- function IdentityCheckModule:onReqSystemTimesCallBack(cell, type, data)
--     self._timestamp = os.time()
--     if type == XH.Req.TYPE.SUCCESS then
--         local timestamp = json.decode(data.acData).time
--         if timestamp ~= nil then
--             self._timestamp = timestamp
--         end
--     end
--     self:dispatchEvent({name = self.EVNET_REQ_SYS_TIME_CALLBACK, data = self._timestamp})
-- end

-- 客户端本地的校验
-- function IdentityCheckModule:isAudlt(IdentityID,sysTime)
--     local y = string.sub(IdentityID,7,10)
--     local m = string.sub(IdentityID,11,12)
--     local d = string.sub(IdentityID,13,14)
--     local userTime = os.time({day=d, month=m, year=y, hour=0, minute=0, second=0})
--     if sysTime - userTime >= 18 *365 * 24 *60 *60  then
--         return true
--     end
--     return false
-- end

function IdentityCheckModule:isSpecialCode()
    return cc.UserDefault:getInstance():getBoolForKey("KW_SPECIAL_CODE_REAlNAME_" .. XH.playerData:getNumberID(), false)
end

function IdentityCheckModule:SpecialCodeBind(isAutoBindPhone)
    self._isAutoBindPhone = isAutoBindPhone or false
    -- 通过特殊登陆的账号 默认请求成功
    if XH.configerManager:getIsNewRealName() then
        local data = {isAutoBindPhone = self._isAutoBindPhone}
        self:dispatchEvent({name = IdentityCheckModule.EVNET_REAL_NAME_BACK, msg = data})
        XH.playerData:setProtected(0)
        if not cc.UserDefault:getInstance():getBoolForKey("KW_SPECIAL_CODE_REALNAME_" .. XH.playerData:getNumberID(), false) then
            cc.UserDefault:getInstance():setBoolForKey("KW_SPECIAL_CODE_REAlNAME_" .. XH.playerData:getNumberID(), true)
        end
    end
end

function IdentityCheckModule:changeUser()
    XH.login:getModule("Login"):changeUser()
end

return IdentityCheckModule
