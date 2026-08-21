local BindPhoneModule = class("BindPhoneModule", XH.ModuleBase)

BindPhoneModule.EVENT_BIND_PHONE_INFO = "EVENT_BIND_PHONE_INFO"

BindPhoneModule.BindType = {
    BIND_TYPE_UNSPECIFIED = 0,
    BIND_TYPE_ONE = 1
}

function BindPhoneModule:ctor()
    BindPhoneModule.super.ctor(self)
    self:resetData()
end

function BindPhoneModule:resetData()
    self._awardInfo = {}
    self._activityID = 0
    self._bindStateSuccess1 = false -- EVENT_BIND_USER_CHANGED
    self._bindStateSuccess2 = false -- EVENT_PHONE_CHANGED
end

function BindPhoneModule:getReqConfig()
    return {
        CellReqPhoneGetCode = {reqPath = "lobby.Req.BindPhone.CellReqPhoneGetCode", callBack = self.respGetCode},
        ReqPropsDiscount = {reqPath = "lobby.Req.GoldLaunch.ReqPropsDiscount", callBack = self.respPropsDiscount},
        ReqAcceptPresenter = {reqPath = "lobby.Req.GoldLaunch.ReqAcceptPresenter", callBack = self.respAcceptPresenter},
        CellReqPhoneBind = {reqPath = "lobby.Req.BindPhone.CellReqPhoneBind", callBack = self.respPhoneBind},
        ReqBindUser = {reqPath = "app.Req.PlayerMessage.ReqBindUser", callBack = self.onReqPhoneBind}
    }
end

function BindPhoneModule:getProxyEvents()
    return {
        {module = XH.playerData, eventKeyName = "EVENT_PHONE_CHANGED", callBack = "onBindPhoneChanged2"},
        {module = XH.playerData, eventKeyName = "EVENT_BIND_USER_CHANGED", callBack = "onBindPhoneChanged1"}
    }
end

-- 先请求ReqPropsDiscount接口，根据服务约定字段tags，返回是否有奖励，如果有奖励，
-- 则根据返回的activity_id字段，再请求ReqAcceptPresenter接口领取奖励
function BindPhoneModule:reqBindPhoneInfo()
    self:startReq("ReqPropsDiscount", {"one_bind"})
end

function BindPhoneModule:respPropsDiscount(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local firstKey, firstValue = next(data.reply.activitys)
        if firstKey == nil then
            return
        end
        if firstValue and firstValue.tag == "one_bind" then
            self._awardInfo = {}
            if firstValue.discounts and firstValue.discounts[1] then
                for _, v in pairs(firstValue.discounts) do
                    self._awardInfo[#self._awardInfo + 1] = v
                end
            end
            if #self._awardInfo > 0 then
                self._activityID = tonumber(firstKey)
            else
                self._activityID = 0
            end
            self:dispatchEvent({name = BindPhoneModule.EVENT_BIND_PHONE_INFO})
            self:checkPopBindPhoneView()
        end
    end
end

function BindPhoneModule:reqIdentifyCode(strPhone)
    self:startReq("CellReqPhoneGetCode", strPhone)
end

function BindPhoneModule:respGetCode(cell, type, data)
end

function BindPhoneModule:reqPhoneBind(parameter)
    local data = {
        tenantid = XH.areaData:getTenantid(),
        phone = parameter.phone,
        code = parameter.code,
        bind_type = parameter.type
    }
    self._reqPhone = parameter.phone
    self:startReq("CellReqPhoneBind", data)
end

function BindPhoneModule:respPhoneBind(cell, reqType, data)
    if reqType == XH.Req.TYPE.SUCCESS then
        XH.playerData:setPlayerPhone(tostring(self._reqPhone or "15356558599"))
        self:dispatchEvent({name = BindPhoneModule.EVENT_BIND_PHONE_INFO})
        XH.viewManager:closeView("BindPhoneView")
        self:reqGetGift()
        self:reqTeaHouseAutoUpgrade()
    else
        XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, cell:getMessage())
    end
end

-- 领取奖励
function BindPhoneModule:reqGetGift()
    if self._activityID == 0 then
        return
    end
    self:startReq("ReqAcceptPresenter", tonumber(self._activityID))
end

function BindPhoneModule:respAcceptPresenter(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        -- 领奖成功
        XH.playerData:flushPlayerDrop()

        local awardInfo = {}
        awardInfo.prize_names = {}
        awardInfo.image_urls = {}
        for _, v in pairs(self._awardInfo) do
            local propId = v.propId
            local propCount = v.count
            -- 如果发奖的道具ID是小房卡或者是绑定房卡，需要除以对应的比例
            if propId == XH.areaData:getPropBindRoomCardID() then
                propCount = propCount / XH.areaData:getPropFreeRoomCardRatio()
            elseif propId == XH.areaData:getPropSmallRoomCardID() then
                propCount = propCount / XH.areaData:getPropSmallRoomCardRatio()
            elseif propId == XH.areaData:getPropLimitedTimeRoomCardID() then
                if XH.areaData:getPropLimitedTimeRoomCardRatio() then
                    propCount = propCount / XH.areaData:getPropLimitedTimeRoomCardRatio()
                end
            end
            awardInfo.prize_names[#awardInfo.prize_names + 1] = "x" .. propCount
            awardInfo.image_urls[#awardInfo.image_urls + 1] = XH.propsData:getExtendPropImgUrlByPropid(propId)
            awardInfo.text = " "
        end
        XH.viewManager:openView("BackActivityAwardView", nil, nil, awardInfo)
        self:resetData()
    end
end

function BindPhoneModule:isShowBindPhoneIcon()
    if self._bindStateSuccess1 == true and self._bindStateSuccess2 == true then
        return self._activityID ~= 0 and not XH.playerData:isBindPhone() and #self._awardInfo > 0
    end
    return false
end

function BindPhoneModule:getAwardInfo()
    return self._awardInfo
end

function BindPhoneModule:isSupportGeYan()
    if XH.StringTool.compareVersions(XH.SysTool:GetBundleVersion(), "1.0.18") < 0 then
        return false
    end
    if XH.SysTool:GetBundleVersion() == "1.1.9" and device.platform ~= "android" then
        return false
    end
    return true
end

function BindPhoneModule:reqGYInfo()
end

function BindPhoneModule:onBindPhoneChanged2(event)
    self._bindStateSuccess2 = true
    print("BindPhoneModule:onBindPhoneChanged2")
    self:dispatchEvent({name = BindPhoneModule.EVENT_BIND_PHONE_INFO})
    self:checkPopBindPhoneView()
end

function BindPhoneModule:onBindPhoneChanged1(event)
    self._bindStateSuccess1 = true
    print("BindPhoneModule:onBindPhoneChanged1")
    self:dispatchEvent({name = BindPhoneModule.EVENT_BIND_PHONE_INFO})
    self:checkPopBindPhoneView()
end

function BindPhoneModule:ReqBindUser(thirdid, phoneNumber)
    self:startReq("ReqBindUser", XH.areaData:getAreaID(), XH.playerData:getNumberID(), thirdid, phoneNumber, nil, XH.areaData:getSrsGroupID(), 10)
end

function BindPhoneModule:onReqPhoneBind(cell, reqType, data)
    if reqType == XH.Req.TYPE.SUCCESS then
        self:reqGetGift()
        XH.playerData:setPlayerPhone(tostring(self._reqPhone or "15356558599"))
        self:dispatchEvent({name = BindPhoneModule.EVENT_BIND_PHONE_INFO})
        XH.viewManager:closeView("BindPhoneView")
        self:reqBindPhoneInfo()
        self:reqTeaHouseAutoUpgrade()
    else
        XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, "一键绑定失败")
    end
end

function BindPhoneModule:reqTeaHouseAutoUpgrade()
    local ReqCreateGroup = require("lobby.Req.Im.ReqTeaHouseAutoUpgrade")
    local reqCreateGroup = ReqCreateGroup:new()
    reqCreateGroup:addReqCallBack(self, self.onReqTeaHouseAutoUpgrade)
    reqCreateGroup:start(XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function BindPhoneModule:onReqTeaHouseAutoUpgrade(cell, ctype, data)
    if ctype == XH.Req.TYPE.SUCCESS then 
        --
    end
end

function BindPhoneModule:checkPopBindPhoneView()
    --新用户&没有新手引导记录 不弹出
    local isGuide = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_NEWGUIDE , false)
    if os.time() - XH.playerData:getRegTime() < 60 * 60 * 24 * 3 and not isGuide then
        return 
    end
    
    local currScene = XH.SceneManager:getInstance():getTopScene()
    local cnt = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_BIND_PHONE_POP_DATE, 0)
    print(
        string.format(
            "[BindPhone] self._bindStateSuccess1=%d,self._bindStateSuccess2=%d,self._activityID=%d,#self._awardInfo=%d,bindphone=%d,scene=%d,popcnt=%d",
            self._bindStateSuccess1 and 1 or 0,
            self._bindStateSuccess2 and 1 or 0,
            self._activityID,
            #self._awardInfo,
            XH.playerData:isBindPhone() and 1 or 0,
            currScene and currScene:getTag() or -1,
            cnt
        )
    )
    if self._bindStateSuccess1 == true and self._bindStateSuccess2 == true then
        if self._activityID ~= 0 and not XH.playerData:isBindPhone() and #self._awardInfo > 0 then
            if currScene and currScene:getTag() == XH.SCENE_TAG.LOBBY then
                if cnt < 1 and XH.lobby:getModule("PopSystem"):checkPop("bindPhone") then
                    XH.viewManager:openView("BindPhoneView", nil, nil, true)
                    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_BIND_PHONE_POP_DATE, 1)
                end
            end
        end
    end
end

function BindPhoneModule:isRealName()
    if XH.configerManager:getIsNewRealName() then 
        return XH.playerData:getIdentityStatus() == 0 or XH.playerData:getIdentityStatus() == 1
    end 
    return false
end

return BindPhoneModule
