local PopSystemModule = class("PopSystemModule", XH.ModuleBase)
local PopConfig = require("lobby.Modules.PopSystem.PopConfig")
local SinglePopInfo = require("lobby.Modules.PopSystem.SinglePopInfo")
local TaskDefine = require("app.Define.TaskDefine")

local TabsActivityConfig = require("lobby.Modules.TabsActivity.Config") 


function PopSystemModule:ctor()
    PopSystemModule.super.ctor(self)
    self:initData()
end

function PopSystemModule:initData()
    self._showPopList = {}
    self._nowSceneType = PopConfig.SCENE_TYPE.NONE
    self._needCheckDataViewsStateInfo = {}
    self._needCheckDataViews = {}
    self._isShowing = false
    self._popCallBack = {}
    self._popClickInfo = {}
    self._popClosedInfo = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_POP_SYSTEM_CLOSE_INFO, {})
end

function PopSystemModule:getReqConfig()
    return {
        ReqWebPopList = { reqPath = "app.Req.ReqCacheWindow", callBack = self.onRespReqWebPopList },
        ReqNewUserActInfo = { reqPath = "app.Req.Task.ReqTaskPercent", callBack = self.onRespIsNewUserCallBack },
        ReqTeaHouseRight = { reqPath = "src.lobby.Req.TeaHouse.ReqTeaHouseRight", callBack = self.onRespTeaHouseRight },
    }
end

function PopSystemModule:getProxyEvents()
    return {
        { module = XH.lobby:getModule("PersonalGiftPack"), eventKeyName = "EVENT_CONFIG_DATA_CHANGED", callBack = "onPersonalGiftPackInfo"},
        { module = XH.lobby:getModule("PrayAct"), eventKeyName = "EVENT_INVITE_PRAYACT_INFO", callBack = "onPrayActInfo"},
        { module = XH.lobby:getModule("ToponAct"),eventKeyName = "KW_TOPON_ACT_SHIN_INFO", callBack = "onToponSigninInfo" },
        { module = XH.viewManager,eventKeyName = "EVENT_CLOSE_VIEW", callBack = "onCloseView" },
        -- { module = XH.lobby:getModule("LuckyTurnTableAct"),eventKeyName = "EVENT_GET_ACT_DATA", callBack = "onLuckyTurnTableActInfo" },
    }
end

function PopSystemModule:onPersonalGiftPackInfo(event)
    local confData = {}
    if event and event.msg and event.msg.configData then
        confData = event.msg.configData
    end
    self:setShowPersonalGiftAct(#confData > 0)
    self:setNeedCheckDataViewState("TabsActivityView_personalGift", #confData > 0)
end

function PopSystemModule:onPrayActInfo(event)
    local giftbox = -1
    if event and event.data and event.data.giftbox then
        giftbox = event.data.giftbox
    end
    self:setNeedCheckDataViewState("TabsActivityView_prayAct", giftbox ~= 3)
end

function PopSystemModule:onToponSigninInfo(event)
    local currTime = 0
    if event and event.data and event.data.actInfo and event.data.actInfo.currTime then
        currTime = event.data.actInfo.currTime
    end
    self:setNeedCheckDataViewState("TabsActivityView_everyDaySign", currTime <= 0)
end

function PopSystemModule:onRespIsNewUserCallBack(cell,ntype,data)
    if data and data.acData then
        local actInfo = json.decode(data.acData)
        if next(actInfo) and actInfo.isActive and XH.loginData:isTodayFirstLogin() then
            return
        end
    end
    self:reqWebPopList()
end

function PopSystemModule:reqWebPopList()
    self._isReqWebData = nil
    self:clearPopListAll()
    self:startReq("ReqWebPopList")
    XH.lobby:getModule("ToponAct"):showDailySignLayer()
    XH.lobby:getModule("LuckyTurnTableAct"):reqActData()
end

function PopSystemModule:reqData()
    if not self:checkCanToShow() then
        return
    end
    self:startReq("ReqNewUserActInfo", XH.playerData:getNumberID(), TaskDefine.APPID, TaskDefine.PROCESSID, 
                TaskDefine.TASK_ID.TASK_NEW_USER_SIGN_IN_ACT, XH.areaData:getSrsGroupID(), XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function PopSystemModule:onRespReqWebPopList(cell, reqType, data)
    local isGuisdeFinish = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_NEW_USER_GUIDE_FINISHED)
    -- local DEBUG = require("app.Config.GlobalConfig").IsDebug        --灰度环境下开启弹窗
    -- if DEBUG then 
    --     isGuisdeFinish = true 
    -- end
    if reqType == XH.Req.TYPE.SUCCESS then
        self._isReqWebData = true
        self:updatePopList(data)
    end
end

function PopSystemModule:isLianYunLink(link)
    if PopConfig.LianYunLinks[link] then
        return true
    end
    return false
end

function PopSystemModule:isLianYun(popInfo)
    return self:isAct(PopConfig.LianYunLinks, popInfo)
end

function PopSystemModule:isGaoXiaoLianYun(popInfo)
    local webConfig = popInfo:getWebViewConf()
    if webConfig == nil or webConfig.btns == nil then
        return false
    end
    for _, btn in pairs(webConfig.btns) do
        local link = btn.link
        if string.find(link, "gaoxiaolianyun_20840") then
            return true
        end
    end
    return false
end

function PopSystemModule:isAct(config, popInfo)
    if popInfo == nil then
        return false
    end
    local webConfig = popInfo:getWebViewConf()
    if webConfig == nil or webConfig.btns == nil then
        return false
    end
    for key, btn in pairs(webConfig.btns) do
        local link = btn.link
        if config[link] then
            return true
        end
    end
    return false
end

function PopSystemModule:isRRBY(popInfo)
    return self:isAct(PopConfig.RRBYLinks, popInfo)
end

function PopSystemModule:updatePopList(webConfData)
    self:clearPopListAll()
    local webListData = webConfData or {}
    local isNotBlock = not XH.lobby:getModule("Sxvip"):isAdFreeEnabled()
    for _, singleConf in pairs(webListData) do
        for i,v in pairs(singleConf.button_config) do
            if PopConfig.IopLianYunGameNameTransfer[v.link] then
                v.link = PopConfig.IopLianYunGameNameTransfer[v.link]
            end
        end
        local popInfo = SinglePopInfo.createWithWebConfig(singleConf)
        if isNotBlock or (not (self:isLianYun(popInfo) or self:isRRBY(popInfo))) then
            if self:isGaoXiaoLianYun(popInfo) then
                if XH.lobby:getModule("Lobby"):isLianYunWhite() then
                    self:addPopInfo(popInfo)
                end
            else
                self:addPopInfo(popInfo)
            end
        end
    end

    for _, singleConf in pairs(PopConfig.ClientPopList) do
        local popInfo = SinglePopInfo.createWithClientConfig(singleConf)
        self:addPopInfo(popInfo)
    end
    self:checkCanStartShowViews()
end

function PopSystemModule:setNeedCheckDataViewState(keyStr, state)
    self._needCheckDataViewsStateInfo[keyStr] = state
    self:checkCanStartShowViews()
end

function PopSystemModule:addNeedCheckDataView(keyStr)
    self._needCheckDataViews[keyStr] = true
end

function PopSystemModule:isInitPopListSuccess()
    return table.nums(self._showPopList) > 0
end

function PopSystemModule:checkDataInitSuccess()
    if not self:isInitPopListSuccess() then
        return false
    end
    for k, _ in pairs(self._needCheckDataViews) do
        if self._needCheckDataViewsStateInfo[k] == nil then
            return false
        end
    end
    return true
end

function PopSystemModule:checkCanStartShowViews()
    if self:checkDataInitSuccess() and self:getReqWebTabsBack() then
        if self._nowSceneType ~= PopConfig.SCENE_TYPE.NONE then
            self:startShow()
            return
        end
    end
    if self._isReqWebData then
        XH.lobby:getModule("Sxvip"):judgeOpenTopTipView()
        self._isReqWebData = nil
    end
end

function PopSystemModule:checkCanToShow()
    --正在显示时不再请求，防止断线重连时重复请求并弹出
    if self._isShowing then
        return false
    end
    return true
end

function PopSystemModule:clearNowOpeningView()
    if self._nowOpeningInfo then
        XH.viewManager:closeView(self._nowOpeningInfo:getViewName())
    end
    self._nowOpeningInfo = nil
end

function PopSystemModule:clearPopListThisScene()
    self:clearNowOpeningView()
    if self._nowSceneType then
        self._showPopList[self._nowSceneType] = {}
    end
    self._isShowing = false
    self._nowSceneType = nil
end

function PopSystemModule:clearPopListAll()
    self:clearNowOpeningView()
    self._showPopList = {}
    self._needCheckDataViews = {}
    self._isShowing = false
end

function PopSystemModule:addPopInfo(popInfo)
    if not popInfo then
        return
    end

    -- 检测弹出次数
    if not popInfo:checkMoment() then
        return
    end

    if not self:checkPop(popInfo._id) then
        return
    end

    -- 记录需要校验数据再判断是否显示的弹窗
    if popInfo:isNeedCheckData() then
        self:addNeedCheckDataView(popInfo:getNameKeyStr())
    end

    local popScenes = popInfo:getPopScenes()
    for _, popScene in pairs(popScenes) do
        self._showPopList[popScene] = self._showPopList[popScene] or {}
        local bInsert = true
        if popInfo and popInfo._webViewConf and popInfo._webViewConf.clickAfter then
            local clickAfter = popInfo._webViewConf.clickAfter
            if clickAfter > 0 then
                local isClickAfter = XH.userDefault:getValue(XH.userDefault.KEY_ID.POPSYSTEM_POP_CLICK_AFTER, false, {popId = popInfo._id})
                if isClickAfter then
                    bInsert = false
                end
            end
        end
        if bInsert then
            table.insert(self._showPopList[popScene], popInfo)
        end
    end
end

function PopSystemModule:removeFirstPopInfo()
    local showInfos = self._showPopList[self._nowSceneType]
    if showInfos then
        table.remove(showInfos, 1)
    end
end

function PopSystemModule:checkViewData(keyStr)
    if not self._needCheckDataViews[keyStr] then
        return true
    end
    if self._needCheckDataViewsStateInfo[keyStr] then
        return true
    end
    return false
end

--递归获取最终需要显示的随机弹窗
function PopSystemModule:getFinalRandomPopInfos(randomInfos, count, finalInfos)
    if count <= 0 or #randomInfos <= 0 then
        return
    end
    local randomWeightTotal = 0
    for _, popInfo in pairs(randomInfos) do
        randomWeightTotal = randomWeightTotal + popInfo:getWeight()
    end
    local randomWeight = math.random(1, randomWeightTotal)
    local tempRandom = 0
    for index, popInfo in ipairs(randomInfos) do
        tempRandom = tempRandom + popInfo:getWeight()
        if tempRandom > randomWeight then
            table.insert(finalInfos, popInfo)
            table.remove(randomInfos, index)
            self:getFinalRandomPopInfos(randomInfos, count - 1, finalInfos)
            return
        end
    end
end

--获取最终需要显示的固定弹窗
function PopSystemModule:getFinalFixPopInfos(fixInfos)
    if not fixInfos or #fixInfos == 0 then
        return
    end
    local smallIndex = 0
    local tempInfos = {}
    for _, info in pairs(fixInfos) do
        local tempIndex = info:getSortIndex()
        if tempIndex > 0 then
            if smallIndex == 0 then
                smallIndex = tempIndex
                table.insert(tempInfos, info)
            elseif tempIndex == smallIndex then
                table.insert(tempInfos, info)
            elseif tempIndex < smallIndex then
                tempInfos = {info}
                smallIndex = tempIndex
            end
        end
    end
    if #tempInfos == 1 then
        return tempInfos
    end
    local randomIndex = math.random(1, #tempInfos)
    return {fixInfos[randomIndex]}
end

function PopSystemModule:getFinalAllPopInfos(finalRandomInfos, finalFixInfos)
    local finalAllInfos = XH.TableTool.mergeTwoTable(finalRandomInfos, finalFixInfos)
    table.sort(finalAllInfos, function(a, b)
        return a._sortIndex < b._sortIndex
    end)
    return finalAllInfos
end

function PopSystemModule:startShowPopViews(sceneTypeKey)
    --如果已经有场景标记，则将当前场景数据清除，本次登录不再显示
    self:clearPopListThisScene()
    if not sceneTypeKey or not PopConfig.SCENE_TYPE[sceneTypeKey] then
        return
    end
    self._nowSceneType = PopConfig.SCENE_TYPE[sceneTypeKey]
    self:checkCanStartShowViews()
end

function PopSystemModule:checkIsInCanPopScene()
    -- 游戏区不允许弹出
    if XH.SceneManager:getInstance():getTopSceneTag() == XH.SCENE_TAG.GAME then
        self:clearPopListThisScene()
        return false
    end
    --新用户&没有新手引导记录 不弹出
    local isGuide = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_NEWGUIDE , false)
    if self:isNewPlayer() and not isGuide then
        return false
    end
    if NG then
        return false
    end
    return true
end

-- 3天内算新用户
function PopSystemModule:isNewPlayer()
    return os.time() - XH.playerData:getRegTime() < 60 * 60 * 24 * 3
end

function PopSystemModule:startShow()
    if not self:checkIsInCanPopScene() then
        return
    end
    if self._isShowing then
        return
    end
    if not self._nowSceneType or not self._showPopList[self._nowSceneType] then
        if self._isReqWebData then
            XH.lobby:getModule("Sxvip"):judgeOpenTopTipView()
            self._isReqWebData = nil
        end
        return
    end
    self:showNextPopView()
end

function PopSystemModule:getNextPopInfo()
    local showInfos = self._showPopList[self._nowSceneType]
    if not showInfos or #showInfos == 0 then
        return nil
    end
    return showInfos[1]
end

function PopSystemModule:showNextPopView()
    if not self:checkIsInCanPopScene() then
        return
    end
    local info = self:getNextPopInfo()
    if not info then
        self:clearPopListThisScene()
        return
    end
    self._isShowing = true
    self._nowOpeningInfo = info
    self:removeFirstPopInfo()

    self._isOpenPopView = true

    local viewName = info:getViewName()
    local openFunc = "open"..viewName
    if self[openFunc] then
        self[openFunc](self, info)
    elseif self._popCallBack[viewName] then
        self._popCallBack[viewName]()
    else
        XH.viewManager:openView(viewName)
    end
    info:recordOpenOnce()
    self:initPopClickInfo(info._id)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.POPSYSTEM_VIEW_PUSH,{block_item_id = info._id or 0})
end

function PopSystemModule:onCloseView(event)
    if not self:getNextPopInfo() then
        if self._isOpenPopView then
            self._isOpenPopView = false
            XH.lobby:getModule("Sxvip"):judgeOpenTopTipView()
        end
        return
    end
    -- 延迟处理，在同时关闭一个界面并打开一个界面时保证能正确判断当前打开的弹窗数
    XH.SysTool.performDelayOnce(function ()
        if XH.viewManager:getViewsCount() == 1 then
            self:showNextPopView()
        end
    end, 0.03)
end

local ThrowDataPageLabel = {
    [PopConfig.SCENE_TYPE.LOBBY] = "大厅页",
    [PopConfig.SCENE_TYPE.GOLD] = "金币场",
}
function PopSystemModule:openPopSystemView(info)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.RENRENBUYU_ONLINE,{label = info._viewNameText})
    local webConf = info:getWebViewConf()
    webConf.fromSceneType = self._nowSceneType
    webConf.fromSceneTypeStr = ThrowDataPageLabel[self._nowSceneType]
    local zorder = nil
    if webConf and webConf.btns then
        for key, _ in pairs(webConf.btns) do
            if key == "videoPanel" then
                zorder = 9999999
                break
            end
        end
    end
    local isOpenSuccess = XH.viewManager:openView("PopSystemView", zorder, webConf)
    if webConf and webConf.fromSceneTypeStr then
        local conventionData = {}
        conventionData.page_label = webConf.fromSceneTypeStr
        conventionData.block_item_id = webConf.id or 0
        conventionData.block_label = webConf.name or ""
        local extraData = {}
        extraData.pic_url = webConf.imageUrl or ""
        extraData.area_id = XH.areaData:getAreaID()
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.POP_VIEW_PUSH,conventionData,extraData)
    end
    return isOpenSuccess
end

function PopSystemModule:openTabsActivityView(info)
    local selectTag = info:getSelectTag()
    if selectTag == "everyDaySign" then
        return XH.viewManager:openView("TabsActivityView", nil, { tab = "DAILYSIGN"})
    elseif selectTag == "systemTask" then
        return XH.viewManager:openView("TabsActivityView", nil, { tab = "TASKSYS"})
    elseif selectTag == "luckyTurn" then
        return XH.viewManager:openView("TabsActivityView", nil, { tab = "LUCKYTURNTABLE"})
    elseif selectTag == "personalGift" then
        return XH.viewManager:openView("TabsActivityView", nil, { tab = "PERSONALGIFT"})
    elseif selectTag == "prayAct" then
        return XH.viewManager:openView("TabsActivityView", nil, { tab = "DAILYFORYUNE"})
    elseif TabsActivityConfig.actsPath[selectTag] then
        return XH.viewManager:openView("TabsActivityView", nil, { tab = selectTag})
    end
    return XH.viewManager:openView("TabsActivityView")
end

-- 三种分享类型url
function PopSystemModule:shareByUrlMod(getWebText, getWebLinkUrl)
    local shareInfo = {
        textTitle = "浙江游戏大厅",  -- 分享标题
        url = getWebLinkUrl,  -- 微信网页模式分享的链接
        type = "url",   -- word是文字分享，url网页模式分享，pic分享图片
        scene = "0",    -- 0是分享到好友会话，1是分享到朋友圈
        imageUrl = "com.xm.zjgamecenter", -- 分享图片地址（分享网页模式，需要传安卓包名）
        text = getWebText, -- 分享内容
        comment = "download", -- 微信不用, 用以区分直接分享下载地址和游戏内link
    }
    XH.sdkManager:startShare(shareInfo, self.shareCallback, self)
end

-- 三种分享类型word
function PopSystemModule:shareByWordMod(getWebText, getWebLinkUrl)
    local shareInfo = {
        textTitle = "浙江游戏大厅", --分享标题
        textTitleUrl = "", --微信不用
        site = "", --微信不用
        siteUrl = "", --微信不用
        imagePath = "", --微信不用
        url = "", --微信网页模式分享的链接
        type = "word", --word是文字分享，url网页模式分享，pic分享图片
        scene = "0", --0是分享到好友会话，1是分享到朋友圈
        imageUrl = "com.xm.zjgamecenter", --分享图片地址（分享网页模式，需要传安卓包名）
        text = getWebText, --分享内容 
        comment = "download", --微信不用, 用以区分直接分享下载地址和游戏内link
    }
    XH.sdkManager:startShare(shareInfo, self.shareCallback, self)
end

-- 三种分享类型pic
function PopSystemModule:shareByImageMod(getWebText, getWebLinkUrl, imagePath)
    local shareInfo = {
        textTitle = "浙江游戏大厅",
        imagePath = imagePath,
        type = "pic",
        scene = 1,
        imageUrl = "",
        text = "",
        sharePath = "",
    }
    XH.sdkManager:startShare(shareInfo)
end

function PopSystemModule:addTeaHousePopView(viewName,state,callbcak)
    if viewName then
        self:setNeedCheckDataViewState(viewName, state)
        self._popCallBack[viewName] = nil
        if callbcak then
            self._popCallBack[viewName] = callbcak
        end
    end
end

function PopSystemModule:setShowPersonalGiftAct(bShow)
    self._needShowPersonalGiftAct = bShow
end

function PopSystemModule:getShowPersonalGiftAct()
    return self._needShowPersonalGiftAct
end

function PopSystemModule:setReqWebTabsBack(back)
    self._reqWebTabsBack = back
    self:checkCanStartShowViews()
end

function PopSystemModule:getReqWebTabsBack()
    return self._reqWebTabsBack
end

function PopSystemModule:reqLastQuitTeaID()
    XH.TipTool.showLoading()
    self:startReq("ReqTeaHouseRight", XH.areaData:getAreaID(), XH.playerData:getNumberID(), XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function PopSystemModule:onRespTeaHouseRight(cell, reqType, data)
    XH.TipTool.hideLoading()
    if reqType == XH.Req.TYPE.SUCCESS then
        if data.nLastLeaveTeaID ~= 0 then
            XH.teaHouseManager:joinTeaHouse(data.nLastLeaveTeaID)
        else
            local GameNewTypeConfiger = require("app.Config.Parse.GameNewTypeConfiger")
            XH.viewManager:openView("CreateBoxRoomView", nil, {gameid = GameNewTypeConfiger:getDefultGameIDByLobbyID(XH.areaData:getLobbyID())})
        end
    end
end

function PopSystemModule:initPopClickInfo(type)
    self._popClickInfo[tostring(type)] = {}
end

function PopSystemModule:checkPop(type)
    local cfg = XH.lobby:getModule("Configuration"):getAllConfigData("PopSystem") or {closeCnt=3, cdDay=7}
    cfg = cfg[tostring(type)] or cfg
    local dailyCnt = cfg.dailyCnt
    if dailyCnt and self._popClosedInfo[tostring(type)] then
        -- 没配置，就不检测这项
        if self._popClosedInfo[tostring(type)].date == os.date("%Y-%m-%d", os.time()) then
            local todayCnt = self._popClosedInfo[tostring(type)].dailyCnt or 0
            if todayCnt >= dailyCnt then
                return false
            end
        end
    end
    local endtime = self._popClosedInfo[tostring(type)] and self._popClosedInfo[tostring(type)].endtime or 0
    if endtime > os.time() or endtime == -1 then
        return false
    end
    if endtime > 0 then
        --cd时间已过
        self._popClosedInfo[tostring(type)] = {cnt=0, endtime=0}
    end
    return true
end

function PopSystemModule:setClick(type, data)
    local key = tostring(data.id)
    local info = self._popClickInfo[key] or {}
    self._popClosedInfo[key] = self._popClosedInfo[key] or {cnt=0, endtime=0, dailyCnt = 0, date = ""}
    if type == "close" then
        if #info == 0 then
            -- 没点过界面内其他按钮
            if data.name and (data.open_no_disturb == nil or data.open_no_disturb == 0) then
                --iop 未开启免打扰模式
                return
            end
            self._popClosedInfo[key].cnt = self._popClosedInfo[key].cnt + 1
            local cfg = XH.lobby:getModule("Configuration"):getAllConfigData("PopSystem") or {closeCnt=3, cdDay=7}
            cfg = cfg[key] or cfg
            local closeCnt = data.close_times or cfg.closeCnt
            local cdDay = data.hide_days or cfg.cdDay
            if self._popClosedInfo[key].cnt >= closeCnt then
                if cdDay == -1 then
                    self._popClosedInfo[key].endtime = -1
                else
                    self._popClosedInfo[key].endtime = os.time() + cdDay * 86400
                end
            end
            if self._popClosedInfo[key] and self._popClosedInfo[key].date ~= os.date("%Y-%m-%d", os.time()) then
                self._popClosedInfo[key].dailyCnt = 0
            end
            if self._popClosedInfo[key] then
                self._popClosedInfo[key].dailyCnt = self._popClosedInfo[key].dailyCnt or 0
                self._popClosedInfo[key].dailyCnt = self._popClosedInfo[key].dailyCnt + 1
                self._popClosedInfo[key].date = os.date("%Y-%m-%d", os.time())
            end
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_POP_SYSTEM_CLOSE_INFO, self._popClosedInfo)
        end
    else
        table.insert(info, type)
        if self._popClosedInfo[key].cnt > 0 then
            self._popClosedInfo[key].cnt = 0
            self._popClosedInfo[key].endtime = 0
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_POP_SYSTEM_CLOSE_INFO, self._popClosedInfo)
        end
    end
end
return PopSystemModule   ^  