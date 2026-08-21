local UnlimitedGiftModule = class("UnlimitedGiftModule", XH.ModuleBase)
local TaskDefine = require("app.Define.TaskDefine")
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
UnlimitedGiftModule.EVENT_UNGIFT_REFRESH_VIEW = "EVENT_UNGIFT_REFRESH_VIEW"
UnlimitedGiftModule.EVENT_UNGIFT_TRY_ENTER_DARKDOUBLEKOU = "EVENT_UNGIFT_TRY_ENTER_DARKDOUBLEKOU"
UnlimitedGiftModule.EVENT_UNGIFT_OPEN_BOX_ANIM = "EVENT_UNGIFT_OPEN_BOX_ANIM"
UnlimitedGiftModule.EVENT_UNGIFT_BTN_STATUS = "EVENT_UNGIFT_BTN_STATUS"

function UnlimitedGiftModule:ctor()
    UnlimitedGiftModule.super.ctor(self)
    self._aid = 0 -- 活动id
    self._actInfo = nil -- 活动基础信息
    self._actData = nil -- 活动具体信息
    self._goldBoxId = 0 -- 金币箱Id
    self._areaId = nil
end

function UnlimitedGiftModule:getReqConfig()
    return {
        ReqSystemTimes = { reqPath = "app.Req.Task.ReqTaskPercent", callBack = self.onRequestSysTime },
        ReqWuXianJingXiInfo = {reqPath = "lobby.Req.UnlimitedGift.ReqWuXianJingXiInfo", callBack = self.respWuXianJingXiInfo},
        ReqWuXianJingXiReward = {reqPath = "lobby.Req.UnlimitedGift.ReqWuXianJingXiReward", callBack = self.respWuXianJingXiReward},
        ReqActDetail = { reqPath = "lobby.Req.LuckTask.ReqActDetail", callBack = self.respActDetail },
        ReqActList = {reqPath = "lobby.Req.LuckTask.ReqActList", callBack = self.respActList},
        ReqExchangeProductList = {reqPath = "lobby.Req.Shop.ReqExchangeProductList", callBack = self.respProductsInfo}
    }
end
function UnlimitedGiftModule:getProxyEvents()
    return{
        { module = XH.lobby:getModule("Configuration"), eventKeyName = "EVENT_REQ_CONFIGURATION_SUCCESS", callBack = "onGetConfiguration" },
    }
end
function UnlimitedGiftModule:openUnlimitedGift(areaId)
    self._areaId = areaId
    if self._aid and self._aid > 0 then
        self:reqWuXianJingXiInfo(true)
    else
        self._actData = nil
        XH.TipTool.showToast("活动已结束")
        self:dispatchEvent({name = self.EVENT_UNGIFT_BTN_STATUS})
        self:reqActList()
    end
    self._diffTime = nil
    self:RequestSysTime()
    XH.TipTool.showLoading()
end

function UnlimitedGiftModule:setActivityId(info)
    self._aid = info.aid
    self._actInfo = info
    self:startReq("ReqActDetail", info.aid)
    self:reqWuXianJingXiInfo()
    local prop_type = self:getShopPropType()
    if prop_type > 0 then
        self:reqExchangeProductsInfo(prop_type)
    end
end

function UnlimitedGiftModule:respActDetail(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data and data.res and data.res.special then
            self._detailInfo = data.res
            self._detailName = self._detailInfo.name
            local ok, special = pcall(cjson.decode, data.res.special)
            if ok and special and special.info then
                local ok2, info = pcall(cjson.decode, special.info)
                if ok2 and info then
                    self._detailInfo.info = info
                end
            end
        end
    end
end

function UnlimitedGiftModule:getActivityId()
    return self._aid
end

function UnlimitedGiftModule:getDetailInfo()
    return self._detailInfo
end

function UnlimitedGiftModule:getGoldBoxId(jbxpid)
    if self._detailInfo and self._detailInfo.info and self._detailInfo.info.jbx and #self._detailInfo.info.jbx > 0 then
        local jbx = self._detailInfo.info.jbx
        for i = 1,#jbx do
            if jbx[i].jbxpid == jbxpid then
                return tonumber(jbx[i].jbxid)
            end
        end
    end
    return 1
end

function UnlimitedGiftModule:getGoldBoxInfo(id)
    if self._detailInfo and self._detailInfo.info and self._detailInfo.info.jbx and #self._detailInfo.info.jbx > 0 then
        local jbx = self._detailInfo.info.jbx
        for i = 1,#jbx do
            if jbx[i].jbxid == id then
                return jbx[i]
            end
        end
    end
    return nil
end

function UnlimitedGiftModule:RequestSysTime()
    self:startReq("ReqSystemTimes", XH.playerData:getNumberID(), 0, 120, TaskDefine.KW_SYSTEM_TIME, XH.areaData:getSrsGroupID(), 10)
end

function UnlimitedGiftModule:onRequestSysTime(cell, ntype, data)
    XH.TipTool.hideLoading()
    if ntype == XH.Req.TYPE.SUCCESS then
        self._timestamp = json.decode(data.acData).time
        if self._timestamp ~= nil and self._actData ~= nil then
            self._diffTime = self._timestamp - os.time()
        end
    end
end

function UnlimitedGiftModule:getServerTime()
    local diffTime = self._diffTime or 0
    if self._timestamp then
        return os.time() + diffTime
    end
    return os.time()
end

function UnlimitedGiftModule:getLeftTime()
    if self._actData then
        return self._actData.actEndtime - self:getServerTime()
    end
    return 0
end

function UnlimitedGiftModule:reqWuXianJingXiInfo(isOpenView)
    -- local rmbGoods = XH.lobby:getModule("YGiftBankruptcy"):getRMBGoods()
    if self._aid > 0 then
        self:startReq("ReqWuXianJingXiInfo", {act_id = self._aid, isOpenView = isOpenView} , 10)
    end
end

function UnlimitedGiftModule:respWuXianJingXiInfo(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._actData = data
        self:dispatchEvent({name = self.EVENT_UNGIFT_REFRESH_VIEW})
        local activeTask = self:getActiveTask()
        if self:findIndex(activeTask.rwlx,5) then
            local typeId = activeTask.px[1]
            if typeId == 10001 and activeTask.status == 1 then
                self:reqWuXianJingXiReward_Common()
            end
        end
        if req.isOpenView then
            XH.viewManager:openView("UnlimitedGiftView", nil, self._areaId)
        end
    elseif type == XH.Req.TYPE.FAIL then
        if data and data.resp and data.resp.errCode then
            local errCode = data.resp.errCode
            if self._actData and errCode == 16008 then --活动CD处理
                self._actData = nil
                self:dispatchEvent({name = self.EVENT_UNGIFT_BTN_STATUS})
                self:reqActList()
                XH.TipTool.showToast("活动已结束")
                XH.viewManager:closeView("UnlimitedGiftView")
            end
        else
            XH.TipTool.showToast("请求活动信息失败")
        end
    elseif type == XH.Req.TYPE.TIMEOUT then
        XH.TipTool.showToast("请求活动信息超时")
    end
end

function UnlimitedGiftModule:findIndex(tbl,value)
    if tbl and #tbl > 0 then
        for i = 1,#tbl do
            if tbl[i] == value then return true end
        end
    end
    return false
end

function UnlimitedGiftModule:checkHYRewardState()
    local ret = 0
    if self._aid > 0 and self._actData and self._actData.hyrw then
        ret = self._actData.hyrw.status
    end
    return ret
end

function UnlimitedGiftModule:reqWuXianJingXiReward_HY()
    self._goldBoxId = 0
    if self._aid > 0 and self._actData and self._actData.hyrw then
        local hyrw = self._actData.hyrw
        if hyrw.jbxpid and #hyrw.jbxpid > 0 then
            for i = 1,#hyrw.jbxpid do
                if hyrw.jbxpid[i] > self._goldBoxId then
                    self._goldBoxId = hyrw.jbxpid[i]
                end
            end
        end
        self:reqWuXianJingXiReward(1,nil,hyrw.hyid)
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dzl25050604, {page_item_id = self._detailName, block_item_id = math.floor(hyrw.hyid/1000), item_id = hyrw.hyid})
    end
end

function UnlimitedGiftModule:getActiveTask()
    if self._aid > 0 and self._actData and self._actData.jtrw then
        local jtrw = self._actData.jtrw
        for i = 1,#jtrw do
            if jtrw[i].active == 1 then
                return jtrw[i]
            end
        end
    end
    return {}
end

function UnlimitedGiftModule:hasReward()
    local ret = false
    if self._aid > 0 and self._actData then
        ret = ret or self:checkHYRewardState() == 1
        local activeTask = self:getActiveTask()
        local jtid = activeTask.jtid
        local status = activeTask.status
        if jtid ~= nil then
            ret = ret or status == 1
        end
    end
    return ret
end

function UnlimitedGiftModule:reqWuXianJingXiReward_Common()
    self._goldBoxId = 0
    self._playHyAnim = true
    if self._aid > 0 and self._actData and self._actData.jtrw then
        local activeTask = self:getActiveTask()
        local jtid = activeTask.jtid
        -- local status = activeTask.status
        if activeTask.hy == 0 then
            self._playHyAnim = false
        end
        if activeTask.jbxpid and #activeTask.jbxpid > 0 then
            self._goldBoxId = activeTask.jbxpid[1]
        end
        if jtid ~= nil then
            self:reqWuXianJingXiReward(0,jtid,nil)
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dzl25050603, {page_item_id = self._detailName, block_item_id = math.floor(jtid/1000), item_id = jtid})
        end
    end
end

function UnlimitedGiftModule:isPlayHyAnim()
    return self._playHyAnim
end

function UnlimitedGiftModule:reqWuXianJingXiReward(reward_type,jtid,hyid)
    XH.TipTool.showLoading()
    self:startReq("ReqWuXianJingXiReward", {act_id = self._aid, reward_type = reward_type, jtid = jtid, hyid = hyid}, 10)
end

function UnlimitedGiftModule:respWuXianJingXiReward(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        if data and data.rewardBox then
            local callBack = function()
                local rewardBox = data.rewardBox
                local award = {}
                for i = 1,#rewardBox do
                    local reward = rewardBox[i]
                    for j = 1,#reward.rewardInfo do
                        local rewardInfo = reward.rewardInfo[j]
                        table.insert(award, {url = rewardInfo.icon, desc = tostring(rewardInfo.count)})
                    end
                end
                if #award > 0 then
                    XH.viewManager:openView("CommonRewardView", XH.ZORDER.TOPLAYER + 1, award, false, function()
                        self:reqWuXianJingXiInfo()
                    end)
                else
                    if self._goldBoxId > 0 then
                        XH.TipTool.showToast("抽奖失败")
                    end
                    self:reqWuXianJingXiInfo()
                end
                XH.playerData:flushPlayerDrop()
                XH.playerData:flushGoldCoin()
                self._goldBoxId = 0
            end

            if self._goldBoxId > 0 then
                self:dispatchEvent({name = self.EVENT_UNGIFT_OPEN_BOX_ANIM, msg = {jbxpid = self._goldBoxId,callBack = callBack}})
            else
                callBack()
            end
        end
    elseif type == XH.Req.TYPE.FAIL then
        if data and data.resp and data.resp.errCode then
            local errCode = data.resp.errCode
            if errCode == 16000 then
                XH.TipTool.showToast("没有此活动")
            elseif errCode == 16004 then
                XH.TipTool.showToast("奖励已领取")
            elseif errCode == 16006 then
                XH.TipTool.showToast("任务未达标")
            elseif errCode == 16008 then
                XH.TipTool.showToast("活动已结束")
            else
                if self._goldBoxId > 0 then
                    self:openBoxFail()
                else
                    XH.TipTool.showToast("领奖失败")
                end
            end
        else
            if self._goldBoxId > 0 then
                self:openBoxFail()
            else
                XH.TipTool.showToast("领奖失败")
            end
        end
        self:reqWuXianJingXiInfo()
    else
        if self._goldBoxId > 0 then
            self:openBoxFail()
        end
        self:reqWuXianJingXiInfo()
    end
end

function UnlimitedGiftModule:openBoxFail()
    local callBack = function()
        XH.TipTool.showToast("抽奖失败")
    end
    self:dispatchEvent({name = self.EVENT_UNGIFT_OPEN_BOX_ANIM, msg = {jbxpid = self._goldBoxId,callBack = callBack}})
    self._goldBoxId = 0
end

function UnlimitedGiftModule:getActData()
    return self._actData
end

function UnlimitedGiftModule:doGotoTarget()
    self:dispatchEvent({name = self.EVENT_UNGIFT_TRY_ENTER_DARKDOUBLEKOU})
end

function UnlimitedGiftModule:reqBuyPropByProductId(productId,propId,propNum)
    local rmbGoods = XH.lobby:getModule("YGiftBankruptcy"):getRMBGoods()
    if #rmbGoods == 0 then
        XH.TipTool.showToast("未找到匹配档位的商品" .. productId .. "，请联系客服~")
        return
    end
    for i = 1, #rmbGoods do
        print(rmbGoods[i].productId)
        if rmbGoods[i].productId == productId then
            local shopInfo = self:getShopInfo(productId)
            self:doPay(rmbGoods[i],nil,shopInfo.id,shopInfo.prop_type)
            return
        end
    end
    XH.TipTool.showToast("未找到匹配档位的商品" .. productId .. "，请联系客服!")
end

function UnlimitedGiftModule:doPay(productInfo, autoOrder, itemId, propType)
    if not XH.sdkManager:isSupportBuy() then
        return
    end
    XH.TipTool.showLoading()
    local gameId = 30579
    local channelID = XH.SysTool:getChannelID()
    local numId = XH.playerData:getNumberID()
    local userId = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())
    local areaId = tostring(XH.playerData:getBrandID())
    local propid = XH.areaData:getPropDiamndID()
    local groupid = XH.areaData:getSrsGroupID()
    if XH.isEmbeddedApp() then
        local startParam = XH.PluginModule.getStartParams()
        groupid = startParam.groupID
        XH.TipTool.hideLoading()
    end
    -- 传了这个表示走新的发货流程
    local defaultScriptName = "deliver_award"
    local extTable = {
        gameid = gameId,
        areaid = areaId,
        propid = propid,
        channelid = channelID,
        numid = numId,
        source = areaId .. XH.areaData:getLobbyID(),
        script_name = defaultScriptName,
        order_id = "",
        groupid = groupid,
        gifttype = "",
        item_id = itemId,
        prop_type = propType,
        vip_sub = "1",
        sid = XH.areaData:getAreaWindID()
    }
    if XH.isEmbeddedApp() then
        local param = XH.PluginModule.getStartParams()
        extTable.embed_app_id = param.appID
        extTable.embed_shop = 1
        extTable.plugin_gold = 1
    end
    local ext = json.encode(extTable)
    XH.lobby:getModule("Shop"):recordBuyParam(productInfo, "deliver_award", "", autoOrder, false, XH.areaData:getPropDiamndID(), nil, {ext = ext})
    local proForpey = {
        order_id = "",
        product_id = productInfo.productId,
        product_name = productInfo.name,
        product_price = productInfo.price,
        product_count = "1",
        role_id = numId,
        role_name = userId,
        role_grade = "",
        role_balance = "",
        server_id = "",
        ext = ext,
        ["notify_url"] = "",
        is_auto_order = autoOrder and tostring(autoOrder) or "0"
    }
    local DEBUG = require("app.Config.GlobalConfig").IsDebug
    if DEBUG then
        proForpey.is_test = 1
    end
    local target = cc.Application:getInstance():getTargetPlatform()
    if target == cc.PLATFORM_OS_IPHONE or target == cc.PLATFORM_OS_IPAD then
        XH.sdkManager:xhCallOCFunc("XH_IAP", "xhBuy:", proForpey)
    elseif device.platform == "android" then
        if XH.isEmbeddedApp() then
            XH.TipTool.hideLoading()
            XH.viewManager:openView("PayTypeView", nil, proForpey)
        elseif XH.ChannelTool.checkIsECarChannel() then --车载渠道，传H5道具参数 暂未处理
            XH.TipTool.hideLoading()
        elseif XH.SysTool.CompareToBundleVersion and XH.SysTool:CompareToBundleVersion("1.2.1") then
            XH.TipTool.hideLoading()
            XH.viewManager:openView("PayTypeView", nil, proForpey)
        else
            XH.sdkManager:callFunctionWithMap(XH.ThirdDefine.SDK_INTERFACE_NAMES_KEY.BUY, {["0"] = proForpey})
        end
    else
        XH.TipTool.hideLoading()
    end
end

function UnlimitedGiftModule:isPayWithGift(msg)
    if not msg then
        return false
    end
    local data = msg.productInfo
    if data and data.productId then
        local splitTable = string.split(data.productId, "_")
        local first = splitTable[1]
        if not first then
            return false
        end
        if first == "wxjx" then
            self:onRechargeSuccess(data.productId)
            return true
        end
    end
    return false
end

function UnlimitedGiftModule:onRechargeSuccess(productId)
    -- local propInfo = XH.lobby:getModule("BagSysNew"):getPropInfo(self.purchase_propId)
    local goods = self:getShopInfo(productId)
    if goods then
        local award = {}
        -- self.purchase_propNum = self.purchase_propNum or 1
        -- local imageUrl = ""
        -- propInfo.props_img = propInfo.props_img or {}
        -- for _, pinfo in pairs(propInfo.props_img) do
        --     if pinfo.package_id and tonumber(pinfo.package_id) == 2 then
        --         local imgArray = pinfo.img
        --         if imgArray then
        --             for idx = 1 , #imgArray do
        --                 imageUrl = imgArray[idx].img_url or ""
        --             end
        --         end
        --         break
        --     end
        -- end
        if goods.type == "prop" then
            table.insert(award, {url = goods.image, desc = tostring(goods.prop_count)})
        else
            table.insert(award, {url = goods.image, desc = tostring(goods.value)})
        end
        XH.viewManager:openView("CommonRewardView", XH.ZORDER.TOPLAYER + 1, award, false, function()
            self:reqWuXianJingXiInfo()
        end)
        XH.playerData:flushPlayerDrop()
        XH.playerData:flushGoldCoin()
        -- self.purchase_propId = nil
    else
        self:reqWuXianJingXiInfo()
    end
end

function UnlimitedGiftModule:reqActList()
    self:startReq("ReqActList", 10)
end

function UnlimitedGiftModule:respActList(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local unlimitedGiftInfo = {}
        for _, info in pairs(data.act) do
            if info.type == "WuXianJingXi" then
                table.insert(unlimitedGiftInfo,info)
            end
        end
        if #unlimitedGiftInfo > 0 then
            table.sort(
                unlimitedGiftInfo,
                function(a, b)
                    return a.aid < b.aid
                end
            )
            self:setActivityId(unlimitedGiftInfo[1])
        else
            self._actData = nil
            self:dispatchEvent({name = self.EVENT_UNGIFT_BTN_STATUS})
        end
    else
        print("ReqActList TIMEOUT")
    end
end

function UnlimitedGiftModule:getShopPropType()
    local prop_type = 0
    local configModule = XH.lobby:getModule("Configuration")
    if configModule then
        local configJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
        if configJsonData and configJsonData.UnlimitedGift then
            local lobbyid = XH.areaData:getLobbyID()
            prop_type = configJsonData.UnlimitedGift.prop_type[tostring(lobbyid)] or 0
        end
    end
    return prop_type
end

function UnlimitedGiftModule:reqExchangeProductsInfo(propType)
    if self._isRequestShopList then
        return
    end
    self._isRequestShopList = true
    local numId = XH.playerData:getNumberID()
    local userId = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())
    local areaId = XH.playerData:getBrandID()
    self:startReq("ReqExchangeProductList", numId, userId, areaId, XH.areaData:getAreaWindID(), 0, XH.KW_CONFIG_LOGIC_TIME_OUT, "", propType)
end

function UnlimitedGiftModule:respProductsInfo(req, type, data)
    self._isRequestShopList = false
    if type == XH.Req.TYPE.SUCCESS then
        for _, goods in ipairs(data) do
            goods.product_id = goods.mark
            goods.prop_type = goods.prop_type or self:getShopPropType()
        end
        self.goods_list = data
    end
end

function UnlimitedGiftModule:getShopInfo(productId)
    for _, goods in ipairs(self.goods_list) do
        if goods.product_id == productId then
            return goods
        end
    end
    return nil
end

function UnlimitedGiftModule:onGetConfiguration(event)
    local key = event.data.key
    if key and key == ConfigurationDefine.Config.ALL then
        local prop_type = self:getShopPropType()
        if prop_type > 0 then
            self:reqExchangeProductsInfo(prop_type)
        else
            XH.TipTool.showToast("无限惊喜礼包兑换商城配置缺失")
        end
    end
end

return UnlimitedGiftModule�S  