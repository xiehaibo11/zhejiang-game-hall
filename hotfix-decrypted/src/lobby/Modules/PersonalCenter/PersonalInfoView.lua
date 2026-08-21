local PersonalInfoView = class("PersonalInfoView", XH.ViewBase)
local ShopConfig = require("lobby.Modules.Shop.Config")

local DEFAULT_STRING = "------"

local VIPConfig={
        {
            cc.c3b(9,160,112),  "普通会员",
        },
        {
            cc.c3b(59,100,193),   "中级会员"
        },
        {   
            cc.c3b(205,68,68),   "高级会员"
        },
        {   
            cc.c3b(196,93,43),   "尊享会员"
        },
}   
local COLORID = 1
local TEXTID = 2 

function PersonalInfoView:getCSBPath()
    return "cocosStudio/hall/CSB/PersonalCenter/PerCenterInfoLayer.csb"
end

function PersonalInfoView:ctor(param)
    param = param or {}
    PersonalInfoView.super.ctor(self, param)

    self._isClickWriteOff = false

    local headFrameTexture = nil
    local bagModule = XH.lobby:getModule("BagSysNew")
    if bagModule then
        headFrameTexture = bagModule:getBagData():getSelfHeadFrameTexture()
    end
    if headFrameTexture then
        self._imgHeadFrameNew:loadTexture(headFrameTexture, ccui.TextureResType.localType)
        self._imgHeadFrameNew:setContentSize(cc.size(210, 210))
        self._imgHeadFrame:setVisible(false)
        self._imgHeadFrameNew:setVisible(true)
    end
    self:updateData()
    self._btnBuy1:setName(ShopConfig.SpecialTag.CARD)
    self._btnBuy2:setName(ShopConfig.SpecialTag.GOLD)
    self._btnBuy3:setName(ShopConfig.SpecialTag.DIAMOND)
    if XH.ChannelTool.judgeIsChannel() or XH.ChannelTool.checkIsDoubleKouGame() then 
        -- 隐藏切换区域
        self._btnSelectArea:setVisible(false)
    else
        -- 显示切换区域
        self._btnSelectArea:setVisible(true)
    end
        -- 支持微信登录时显示刷新头像按钮，点击后切到登录并自动微信登录
    if self._btnRefreshHead then
        self._btnRefreshHead:setVisible(XH.sdkManager:isInstallWeChat())
    end
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.MY_01)    
end

function PersonalInfoView:getBindingInfo()
    return{
        ["_KW_BTN_COPY"] = { varName = "_btnCopy", onTouchEnded = "onTouchEventCopyID", type = XH.UI_TYPE.BUTTON },
        --["_KW_BTN_REAL_NAME"] = { varName = "_btnRealName", onTouchEnded = "onTouchEventRealName", type = XH.UI_TYPE.BUTTON },
        ["_KW_BTN_RE_REAL_NAME"] = { varName = "_btnReRealName", onTouchEnded = "onTouchEventRealName", type = XH.UI_TYPE.BUTTON },
        ["_KW_BTN_GPS"] = { varName = "_btnGPS", onTouchEnded = "onTouchEventGPS", type = XH.UI_TYPE.BUTTON },
        ["_KW_BTN_BUY_1"] = { varName = "_btnBuy1", onTouchEnded = "onTouchEventAdd", type = XH.UI_TYPE.BUTTON },
        ["_KW_BTN_BUY_2"] = { varName = "_btnBuy2", onTouchEnded = "onTouchEventAdd", type = XH.UI_TYPE.BUTTON },
        ["_KW_BTN_BUY_3"] = { varName = "_btnBuy3", onTouchEnded = "onTouchEventAdd", type = XH.UI_TYPE.BUTTON },
        ["_KW_BTN_SELECT_AREA"] = { varName = "_btnSelectArea", onTouchEnded = "onTouchEventChangeArea", type = XH.UI_TYPE.BUTTON },
        ["_KW_BTN_SELECT_LOGIN_TYPE"] = { varName = "_btnSelectLoginType", onTouchEnded = "onTouchEventChangeLoginType", type = XH.UI_TYPE.BUTTON },
        
        ["_KW_TXT_NICKNAME"] = { varName = "_textNickname"},
        ["_KW_TXT_ROOM_CARD"] = { varName = "_textRoomCard"},
        ["_KW_TXT_GOLD"] = { varName = "_textGold"},
        ["_KW_TXT_DIAMOND"] = { varName = "_textDiamond"},
        ["_KW_TXT_ID"] = { varName = "_textID"},
        ["_KW_IMG_HEAD"] = { varName = "_imgHead", type = XH.UI_TYPE.REMOTEIMAGE },
        
        ["_KW_BMFONT_VIP_LEVEL"] = { varName = "_bmfontVIPLevel",type = XH.UI_TYPE.TEXT},
        ["_KW_TXT_DIAMOND_TIP"] = { varName = "_textDiamondTip"},
        ["_KW_IMG_TITLE"] = { varName = "_imageTitle", onTouchEnded = "onTouchEventTitle"},
        ["_KW_IMG_FRAME"] = { varName = "_imgHeadFrame" },
        ["_KW_IMG_FRAME_NEW"] = { varName = "_imgHeadFrameNew" },
        ["KW_HEAD_NODE"] = { varName = "_imgHeadNode" },
        
        ["_KW_TXT_ZHU_XIAO"] = { varName = "_btnZhuXiao", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventZhuXiao" },
        ["_KW_BTN_QUAN_XIAN"] = { varName = "_btnQuanXian", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventQuanXian" },
        
        ["_KW_TXT_CARD_TIP"] = {varName = "_buyFangKaText"},
        ["_KW_IMG_ICON_CARD_FREE"] = {varName = "_freeFangKaIcon"},
        ["_KW_TXT_CARD_TIP_FREE"] = {varName = "_freeFangKaText"},
        ["_KW_TXT_ROOM_CARD_FREE"] = {varName = "_freeFangKaNum"},
        ["_KW_BTN_FREE_TIP"] = {varName = "_btnfreeFangKa", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventFreeRoomCard"},
        ["_KW_TEXT_CHANNEL"] = {varName = "_textChannel"},
        ["_KW_IMG_ICON_CARD"] = {varName = "_buyFangKaIcon"},
        --["_KW_BTN_REAL_NAME_ING"] = {varName = "_btnRealNameIng"},
        
        ["_KW_BINDCARD_INFO"] = { varName = "_bindCardInfo" },
        ["_KW_TXT_CARD_TIP_FREE_INFO"] = { varName = "_txtBindCardInfoTotal" },
        ["_KW_BINDCARD_INFO_LIST"] = { varName = "_listBindCardInfo", type = XH.UI_TYPE.LISTVIEW },
        ["_KW_BINDCARD_INFO_ITEM"] = { varName = "_itemBindCardInfo" },
        ["_KW_BINDCARD_EMPTY"] = { varName = "_btnBindCardEmptyBtn", onTouchEnded = "onTouchEventBindCardEmpty", type = XH.UI_TYPE.BUTTON },
        ["_KW_BTN_REFRESH_HEAD"] = { varName = "_btnRefreshHead", onTouchEnded = "onTouchEventRefreshHead", type = XH.UI_TYPE.BUTTON },
    }
end

function PersonalInfoView:getProxyEvents()
    return {
        { module = XH.playerData, eventKeyName = "EVENT_PLAYER_DROP_CHANGED", callBack = "onPropDataChanged" },
        { module = XH.playerData, eventKeyName = "EVENT_PLAYER_TIME_ROOMCARD_CHANGED", callBack = "onPropDataChanged" },
        { module = XH.playerData, eventKeyName = "EVENT_PLAYER_TIME_DROPS_CHANGED", callBack = "onDataChanged" },
        { module = XH.playerData, eventKeyName = "EVENT_SR_CHANGED", callBack = "onDataChanged" },
        { module = XH.playerData, eventKeyName = "EVENT_PHONE_CHANGED", callBack = "onDataChanged" },
        { module = XH.playerData, eventKeyName = "EVENT_IDENTITY_CHANGED", callBack = "onDataChanged" },
        { module = XH.playerData, eventKeyName = "EVENT_BIND_USER_CHANGED", callBack = "onDataChanged" },
        { module = XH.login:getModule("Login"),eventKeyName = "EVENT_BIND_USER", callBack = "onBindUser" },
        { module = XH.lobby:getModule("PersonalCenter"),eventKeyName = "EVENT_PPCMGR_LOCATION_CHANGED", callBack = "onDataChanged" },
        { module = XH.lobby:getModule("PersonalCenter"),eventKeyName = "EVENT_VIP_LAYER_VIP_INFO", callBack = "showVIPLevel" },
        { module = XH.lobby:getModule("TeaHouseList"), eventKeyName = "EVENT_TEA_HOUSE_LIST_CHANGED", callBack = "onTeaHouseListChanged" },
        { module = XH.sdkManager, eventKeyName = "EVENT_APPLE_REVOKE_SESSION_CALLBACK", callBack = "onAppRevokeSessionCallback" },
    }
end

-- 实名认证
function PersonalInfoView:onTouchEventRealName(send, eventType)
    XH.viewManager:openView("IdentityCheckView",nil,{isAutoBindPhone = true})
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.MY_03) 
end

-- 复制按钮
function PersonalInfoView:onTouchEventCopyID(send, eventType)
    local strId = self._textID:getString()
    local copyStr = strId
    local stringArr = string.split(strId, ":")
    if stringArr and #stringArr == 2 then
        copyStr = stringArr[2]
    end
    XH.SysTool.copyString(copyStr)
    XH.TipTool.showTip({
        type = XH.TIP_LAYER_TYPE.OK,
    }, "COPY_SUCCESS")
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.MY_02)   
end

-- 定位
function PersonalInfoView:onTouchEventGPS(send, eventType)

end

-- "+"号按钮事件处理
function PersonalInfoView:onTouchEventAdd(send, eventType)
    XH.Bridge.viewManager:openView("GoldHallShopView", nil, {openType = "Lobby", productType = send:getName()})
    local addname = send:getName()
    if addname == "fk" then
        XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.MY_14) 
    end 
    if addname == "zs" then 
        XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.MY_15) 
    end 
end

-- 关闭按钮
function PersonalInfoView:onTouchEventClose(send, eventType)
    self:close()
end

-- 切换选区
function PersonalInfoView:onTouchEventChangeArea(send, eventType)
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.MY_13) 
    XH.playerData:stopVisitorHeart()
    XH.login:getModule("Login"):clearLoginStates()
    XH.loginData:setLobbyID(0)
    XH.Controller:getInstance():enterLogin()
end

--切换账号
function PersonalInfoView:onTouchEventChangeLoginType(send, eventType)
    XH.playerData:stopVisitorHeart()
    local isShowYouKe = false
    if XH.playerData:getPlayerIsAgent() and XH.areaData:getAgentShowYouKe() then
        isShowYouKe = true
    end
    XH.login:getModule("Login"):clearLoginStates()
    XH.Controller:getInstance():enterLogin(isShowYouKe)
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.MY_12) 
end

-- 设置昵称
function PersonalInfoView:setNickName(name)
    local res = XH.StringTool.cutStringByLength(name or DEFAULT_STRING)
    self._textNickname:setString(res)
end

-- 设置ID
function PersonalInfoView:setUserID(id)
    self._textID:setText("序号:" .. tostring(id) or DEFAULT_STRING)
end

-- 设置位置
function PersonalInfoView:setPlace(str)

end

-- 设置金币
function PersonalInfoView:setGoldNum(num)
    self._textGold:setString(tostring(num) or DEFAULT_STRING)
end

-- 设置房卡
function PersonalInfoView:setRoomCardNum(num)
    self._textRoomCard:setString(tostring(num) or DEFAULT_STRING)
end

-- 设置钻石
function PersonalInfoView:setDiamondNum(num)
    self._textDiamond:setString(tostring(num) or DEFAULT_STRING)
end

-- 设置头像
function PersonalInfoView:setUserHeadPic(picUrl, sex)
    local url = XH.playerData:getWeChatURL()
    self:updateImg(url)
end

function PersonalInfoView:updateImg(url)
    if not url then
        return
    end
    self._imgHead:setUrl(url)
end

---- 设置实名认证
--function PersonalInfoView:setRealName(isConfirm)
--    isConfirm = isConfirm or false

--    if XH.configerManager:getIsKongZhi() then
--        if isConfirm then
--            self._btnRealName:setVisible(true)
--            self._btnRealName:setEnabled(not isConfirm)
--            self._btnReRealName:setVisible(false)
--        else
--            --获取伪认证状态
--            local fakeIdentify = XH.lobby:getModule("PersonalCenter"):getFakeIdentify()
--            if fakeIdentify then
--                self._btnReRealName:setVisible(true)
--                self._btnRealName:setVisible(false)
--            else
--                self._btnRealName:setVisible(true)
--                self._btnRealName:setEnabled(true)
--                self._btnReRealName:setVisible(false)
--            end
--        end
--    else
--        self._btnReRealName:setVisible(false)
--        self._btnRealName:setEnabled(not isConfirm)
--    end
--    if XH.configerManager:getIsNewRealName() then
--        if XH.playerData:getIdentityStatus() == 0 then
--            self._btnRealName:setVisible(true)
--            self._btnRealName:setEnabled(false)
--            self._btnRealNameIng:setVisible(false)
--        elseif XH.playerData:getIdentityStatus() == 1 then
--            self._btnRealName:setVisible(false)
--            self._btnRealNameIng:setVisible(true)
--        elseif XH.playerData:getIdentityStatus() == 2 then
--            self._btnRealName:setVisible(true)
--            self._btnRealName:setEnabled(true)
--            self._btnRealNameIng:setVisible(false)
--        end
--    end
--end

function PersonalInfoView:updateData()
  --  self:setRealName(XH.playerData:isProtected())
    self:setNickName(XH.playerData:getNickName())
    self:setUserID(XH.playerData:getNumberID())
    self:setGoldNum(XH.playerData:getSR())
    self:setRoomCardNum(XH.playerData:getRoomCard())
    self:setDiamondNum(XH.playerData:getDiamnd())
    self:setUserHeadPic(XH.playerData:getHead(), XH.playerData:getSex())
    self:setPlace(XH.lobby:getModule("PersonalCenter"):getLocationInfo() or "")
    self:setFreeRoomCardNum(XH.playerData:getFreeRoomCard(true))

    --self:showVIPLevel()
end

-- 账户注销
function PersonalInfoView:onTouchEventZhuXiao(send, eventType)
    if self._isClickWriteOff then
        return
    end
    self._isClickWriteOff = true
    XH.lobby:getModule("TeaHouseList"):reqTeaHouseList()
    self:performWithDelay(function()
        if self and self._isClickWriteOff and self.onTouchEventChangeLoginType then
            self._isClickWriteOff = false
            XH.TipTool.showTip({
            bTop = true,
            type = XH.TIP_LAYER_TYPE.OK_CANCEL,
            funcOK = function ()
                self:onTouchEventChangeLoginType()
            end
        }, "网络异常，请重新登录后重试！")
        end
    end, 3)
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.MY_05)  
end

-- 数据更新消息监听
function PersonalInfoView:onDataChanged()
    self:updateData()
end

function PersonalInfoView:onPropDataChanged()
    self:updateData()
    if self._bindCardInfo:isVisible() then
        self:updateBindCardInfo()
    end
end


function PersonalInfoView:onBindUser(event)
    self:close()
end

function PersonalInfoView:onTouchEventBindCardEmpty(send, eventType)
    if self._bindCardInfo:isVisible() then
        self._bindCardInfo:setVisible(false)
    end
end

function PersonalInfoView:onTouchEventFreeRoomCard(send, eventType)
    local isSupportTimeCard = XH.lobby:getModule("Lobby"):isSupportTimeCard()
    if not isSupportTimeCard then
        local tipsNode = XH.UITool.seekNodeByName(send, "KW_PIC_TIPS_PAOPAO")
        if tipsNode then
            tipsNode:stopAllActions()
            local opacity = tipsNode:getOpacity()  
            if opacity == 255 then
                tipsNode:setOpacity(0)
            else
                tipsNode:runAction(cc.Sequence:create(cc.FadeIn:create(0.2), cc.DelayTime:create(3), cc.FadeOut:create(0.2)))
            end
        end
        return
    end
    self._bindCardInfo:setVisible(not self._bindCardInfo:isVisible())
    if self._bindCardInfo:isVisible() then
        self:updateBindCardInfo()

        XH.playerData:flushPlayerDrop()
        XH.playerData:flushPlayerLimitedTimeRoomCard()
    end
end

function PersonalInfoView:updateBindCardInfo()
    self._listBindCardInfo:setScrollBarEnabled(false)
    self._listBindCardInfo:removeAllChildren()
    self._txtBindCardInfoTotal:setString('绑定房卡：'..XH.playerData:getFreeRoomCard(true))
    local freeCount = XH.playerData:getFreeRoomCard()
    local cardInfo = XH.playerData:getPlayerTimeRoomCard()
    local nowTime = XH.lobby:getModule("Shop"):getServerTime()
    if freeCount > 0 then
        local item = self._itemBindCardInfo:clone()
        self._listBindCardInfo:pushBackCustomItem(item)
        local txt = XH.UITool.seekNodeByName(item, "KW_TXT")
        txt:setString('免费房卡:'..freeCount)
        item:setVisible(true)
    end
    --未过期到期时间从小到大
    for i=1, #cardInfo do
        if cardInfo[i].expireTime > nowTime then
            self:createCardInfoItem(cardInfo[i], nowTime)
        end
    end
    for i=#cardInfo, 1, -1  do
        if cardInfo[i].expireTime <= nowTime then
            self:createCardInfoItem(cardInfo[i], nowTime)
        end
    end
    self._itemBindCardInfo:setVisible(false)
end

function PersonalInfoView:createCardInfoItem(info, nowTime)
    local item = self._itemBindCardInfo:clone()
    self._listBindCardInfo:pushBackCustomItem(item)
    local txt = XH.UITool.seekNodeByName(item, "KW_TXT")
    local count = info.count/ XH.areaData:getPropLimitedTimeRoomCardRatio()
    txt:setString('绑定房卡:'..count..'，过期时间:' .. os.date("%Y-%m-%d %H:%M:%S", info.expireTime))
    local color = info.expireTime > nowTime and cc.c3b(194,108,70) or cc.c3b(155,155,155)
    txt:setTextColor(color)
    item:setVisible(true)
end

-- 设置绑定房卡（原免费房卡）
function PersonalInfoView:setFreeRoomCardNum(num)
    if XH.areaData:isRemodelArea() then
        self._freeFangKaNum:setString(tostring(num) or DEFAULT_STRING)
    end
end



function PersonalInfoView:onExit()
    PersonalInfoView.super.onExit()
    self:removeHandleClearCache()
end

function PersonalInfoView:removeHandleClearCache()
    if self._handleClearCache then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._handleClearCache)
        self._handleClearCache = nil
    end
end

-- 获取VIP等级
function PersonalInfoView:getVIPLevel()
    local userVIPLevel = 1
    return userVIPLevel
end

-- 显示VIP等级
function PersonalInfoView:showVIPLevel(event)
    local userVIPLevel = event.data.vip_id + 1
    self._bmfontVIPLevel:setColor(VIPConfig[userVIPLevel][COLORID])
    self._bmfontVIPLevel:setString(VIPConfig[userVIPLevel][TEXTID])
    
end

function PersonalInfoView:onTeaHouseListChanged(event)
    local teaHousePendingList = XH.lobby:getModule("TeaHouseList"):getTeaHousePendingList()
    if teaHousePendingList then
        --注销流程优化，可能存在有问题的比赛场，领队id=0，需要主动过滤掉
        local teaHouseListCnt = #teaHousePendingList
        for i = 1 ,#teaHousePendingList do
            if teaHousePendingList[i].nTeaOwnerNumid == 0 then
                teaHouseListCnt = teaHouseListCnt - 1
            end
        end
        if teaHouseListCnt > 0 then
            self._isClickWriteOff = false
            XH.TipTool.showTip({
                bTop = true,
                type = XH.TIP_LAYER_TYPE.OK_CANCEL_NO_CLOSE,
                funcOK = function ()
                    XH.teaHouseManager:openTeaHouseList()
                    XH.viewManager:closeView('PersonalCenterView')
                end
            }, "请解散/退出当前所有比赛场才可进行账号注销")
            return
        end
    end
    if XH.login:getModule("Login"):getSdkLoginType() == XH.SDK_LOGIN_TYPE.SDK_APPLE then
        XH.sdkManager:xhCallAppleSessionOCFunc('', 'apple_revoke_session')
    else
        self:onDealWriteOff()
    end
end

function PersonalInfoView:onAppRevokeSessionCallback(event)
    if not event or not event.data then
        return
    end
    local msg = event.data.msg
    self:onDealWriteOff(msg)
end

function PersonalInfoView:onDealWriteOff(info)
    if self._isClickWriteOff then
        self._isClickWriteOff = false
        XH.viewManager:openView("AutoLogoutView", nil, info)
    end
end

-- 刷新头像：执行切换帐号逻辑，回到登录界面后自动进行微信登录
function PersonalInfoView:onTouchEventRefreshHead(send, eventType)
    XH.TipTool.showTip({
        type = XH.TIP_LAYER_TYPE.OK_CANCEL,
        funcOK = function ()
            XH.login:getModule("Login"):setAutoWeChatLogin(true)
            self:onTouchEventChangeLoginType(send, eventType)
        end
    }, '重新登录以便刷新微信头像、微信昵称，请确定是否继续?\n提示:您是刚刚更换的微信头像，刷新后可能无法立刻看到，微信24后将新头像给游戏，请先耐心等待一段时间再尝试。')
end
return PersonalInfoView   �L  