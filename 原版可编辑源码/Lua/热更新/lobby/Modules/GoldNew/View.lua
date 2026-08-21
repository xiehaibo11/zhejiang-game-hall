import(".Bridge")
local GoldNewView = class("GoldNewView", XH.Bridge.ViewBase)
local MenuBar = import(".Views.MenuBar")
local GameEntry = import(".Views.GameEntry")
local ChooseRoom = import(".Views.ChooseRoom")
local MoreGame = import(".Views.MoreGame")
local QuickStartBtn = import(".Views.ResidentBtns.QuickStartBtn")
local Girl = import(".Views.Role.Girl")
local Utils = import(".Tool.Utils")
local ActionUtils = import(".Tool.ActionUtils")
-- local Test = import(".Debug.Test")
local RemoteConfig = import(".Configs.RemoteConfig")
local LocalConfig = import(".Configs.LocalConfig")
-- local ShopConfig = XH.Bridge:require("lobby.Modules.Shop.Config")
local ShopConfig = import(".SubModules.Shop.Config")
local SxVipConfig = XH.Bridge:require('lobby.Modules.Sxvip.Config')
local ViewState = {FIRST = 1, CHOOSE_ROOM = 2, MORE_GAME = 3}
local UI_PATH = LocalConfig.IMG_PATH.SHOP
local IMG_CFG = {diamondTag = {UI_PATH .. "tag/Img_lan_tab.png", UI_PATH .. "tag/Img_hong_tab.png", UI_PATH .. "tag/Img_zi_tab.png"}}

function GoldNewView:getCSBPath()
    return XH.Bridge:getCCSResPath("GoldLayer.csb")
end

function GoldNewView:getBindingInfo()
    local info = {
        ["_panelBg"] = {varName = "_panelBg"},
        ["_KW_IMG_BACKGROUNG"] = { varName = "_backgroundImg", type = XH.UI_TYPE.LAYOUT, onTouchEnded = "onClickBg"},
        ["_panelHead"] = {varName = "_panelHead", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onClickHead"},
        ["_people"] = {varName = "_people", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onClickRole"},
        ["_btn1"] = {varName = "_btn1", type = XH.UI_TYPE.BUTTON, onTouchEnded = "initAllMenuBar"},
        ["_btnMoreGame"] = {varName = "_btnMoreGame", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickMoreGame"},
        ["_btnCurGameRule"] = {varName = "_btnCurGameRule", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickGameRule"},
        ["_btnBack"] = {varName = "_btnBack", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickBack"},
        ["_imgDiamondTip"] = {varName = "_imgDiamondTip", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickAddDiamondTip"},
        ["_imgGoldTip"] = {varName = "_imgGoldTip", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickAddGoldTip"},
        ["_panelAddDiamond"] = {varName = "_panelAddDiamond", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickAddDiamond"},
        ["_panelAddGold"] = {varName = "_panelAddGold", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickAddGold"},
        ["_panelDiamond"] = {varName = "_panelDiamond", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onClickAddDiamond"},
        ["_panelGold"] = {varName = "_panelGold", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onClickAddGold"},
        ["_btnVip"] = {varName = "_btnVip", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickVip"},
        ["_imgMoreGame"] = {varName = "_imgMoreGame", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickEditGame"},
        ["_imgMoreGameAdd"] = {varName = "_imgMoreGameAdd", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickEditGame"}
    }

    local names = {
        "_body", "_txtName", "_txtID", "_panelHeadImg", "_txtDiamondNum", "_txtGoldNum", "_panelHeadFrame",
        "_panelHeadFrameTemp", "_menuBarTopAct", "_menuBarLeftAct", "_menuBarTopBtns", "_menuBarBottomBtns", "_panelBottomMore", "_panelBottomBtns",
        "_menuBarBottomMoreBtns", "_menuBarRB", "_panelLT", "_panelHeadInfo", "_panelMoreGameInfo", "_panelChooseRoomInfo", "_panelChooseRoom",
        "_panelMoreGame", "_txtCurChooseGameName", "_posGameBtnArea", "_posQuickStart", "_layoutTouch", "_aniDiamond", "_aniGold",
        "_panelPeople", "_aniMoreGame", "_girlPos"
    }
    for i, v in ipairs(names) do
        info[v] = {varName = v}
    end
    return info
end

function GoldNewView:getProxyEvents()
    return {
        {module = XH.roomManager, eventKeyName = "EVENT_GAME_SCENE_EXIT", callBack = "onGameSceneExit"},
        {module = self._modulePC, eventKeyName = "EVENT_PLAYER_INFO", callBack = "updateUserInfo"},
        {module = XH.playerData, eventKeyName = "EVENT_SR_CHANGED", callBack = "updateUserInfo"},
        {module = XH.playerData, eventKeyName = "EVENT_PLAYER_DROP_CHANGED", callBack = "updateUserInfo"},
        {module = XH.Bridge:getModule(LocalConfig.MP.SHOP), eventKeyName = "EVNET_DIAMONDS_GOODS_LIST", callBack = "onRefreshNewGoodsList"},
        {module = XH.Bridge:getModule(LocalConfig.MP.SHOP), eventKeyName = "EVENT_GOLDHALL_EXCHANGE_INFO", callBack = "onRefreshNewGoodsList"},
        {module = XH.Bridge:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_REMAINDER", callBack = "onRemainder"},
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_SHOW_CHOOSE_ROOM", callBack = "onShowChooseRoom"},
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_OPEN_FULL_VIEW", callBack = "onOpenFullView"},
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_CLOSE_FULL_VIEW", callBack = "onCloseFullView"},
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_CHANGE_BOTTOM_MORE_VISIBLE", callBack = "onChangeBottomMoreVisible"},
        {module = XH.Bridge:getModule("BagSysNew"), eventKeyName = "EVENT_BAGMANAGER_CHANGE_HEAD_FRRAME", callBack = "onEventChangeHeadFrame"},
        {module = XH.lobby:getModule("Configuration"), eventKeyName = "EVENT_REQ_CONFIGURATION_SUCCESS", callBack = "onGetConfiguration"},
        {module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_WIN_SIZE_CHANGE_BF", callBack = "onWinSizeChangeBefore"},
        {module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_WIN_SIZE_CHANGE", callBack = "onWinSizeChange"},
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_UPDATE_CHOOSE_ROOM_CONF", callBack = "onUpdateChooseRoomConf"},
    }
end

function GoldNewView:onGetConfiguration(event)
    if not XH.isEmbeddedApp() then
        return
    end
    local key = event.data.key
    local ConfigurationDefine = XH.Bridge:require("lobby.Modules.Configuration.Define")
    if key and key == ConfigurationDefine.Config.GOLD then
        self:initAllMenuBar()
    end
    if self._reqPropsAttr then
        return
    end
    local allCfg = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    local propids = nil
    if allCfg and allCfg.PropsAttr then
        propids = string.split(allCfg.PropsAttr, "_")
    end
    if propids then
        local intProps = {}
        for i = 1, #propids do
            intProps[#intProps + 1] = tonumber(propids[i])
        end
        self._reqPropsAttr = true
        XH.lobby:getModule("BagSysNew"):reqPropsAttr(intProps)
    end
end

function GoldNewView:showGoldLayer(bShow, isBackHall, will2ChooseRoom, withAni)
    self._willShow = bShow 
    -- 从比赛场到金币大厅，现bShow=false，再bShow=true。
    -- 导致startHide被调用，startHide中有延迟，导致最终界面被隐藏
    if bShow then
        self:setVisible(bShow)
        self._gameEntry:setProgressVisible()
    else
        self:startHide(function()
            if bShow ~= self._willShow then
                return
            end
            self:setVisible(bShow)
        end, nil, nil, {withAni = withAni})
    end
    if isBackHall then
        self._btnQuickStart:updateUI(self._curChooseRoomConf)

        if self._state ~= ViewState.CHOOSE_ROOM and not XH.Bridge:getModule("GoldNew"):isLastLianZha() then
            local lastGameInfo = XH.Bridge:getModule("GoldNew"):getLastGameInfo(0, 0)
            if lastGameInfo.ConfID and lastGameInfo.ConfID > 0 and lastGameInfo.Level then
                XH.Bridge:getModule("GoldNew"):joinGoldRoomFirst({LeisureID = lastGameInfo.ConfID, roomFlag = lastGameInfo.Level}, true)
            end
        end
    end
    if bShow then
        XH.Bridge:getModule("GoldNew"):onMainHallShow(isBackHall)
        if not will2ChooseRoom and not isBackHall then
            self:startHide(nil, true)
            self:startShow()
        end
    end
end

function GoldNewView:initAllMenuBar()
    self._menuBar = {}
    for i = 1, #self._layouts do
        if self._layouts[i] then
            local param = LocalConfig.MENU_BAR_CFG[i]
            param.btnConfig = RemoteConfig:getConfigByAreaId(i)
            -- print(json.encode(param.btnConfig))
            local ok = xpcall(function()
                self._menuBar[i] = MenuBar.create(self._layouts[i], param)
            end, __G__TRACKBACK__)
            if i == LocalConfig.BTN_AREA_ID.MAIN_BOTTOM_RESIDENT then
                self._panelBottomBtns:setContentSize(#param.btnConfig.btns * 160 - 20, 95)
            elseif i == LocalConfig.BTN_AREA_ID.MAIN_BOTTOM_MORE_RESIDENT then
                self._panelBottomMore:setContentSize(#param.btnConfig.btns * 160 + 24, 150)
            end
        end
    end
end

function GoldNewView:onClickBg(send, eventType)
    self._panelBottomMore:setVisible(false)
end

function GoldNewView:onClickAddDiamondTip(send, eventType)
    cc.UserDefault:getInstance():setIntegerForKey("NEWGOLDHALL_ZSTIP_LASTSHOWTIME", os.time())
    self:onRefreshNewGoodsList()
    XH.playerData:flushPlayerDrop()
    self:onOpenFullView({info = {viewName = "shop", param = {productType = ShopConfig.SpecialTag.DIAMOND}}})
end
function GoldNewView:onClickAddGoldTip(send, eventType)
    cc.UserDefault:getInstance():setIntegerForKey("NEWGOLDHALL_JBTIP_LASTSHOWTIME", os.time())
    self:onRefreshNewGoodsList()
    XH.playerData:flushPlayerDrop()
    self:onOpenFullView({info = {viewName = "shop", param = {productType = ShopConfig.SpecialTag.GOLD}}})
end

function GoldNewView:onClickAddDiamond(send, eventType)
    XH.Bridge:throwData("xjb25022802", {page_item_id = "钻石"})
    if self._imgDiamondTip:isVisible() then
        self:onClickAddDiamondTip()
        return
    end
    XH.playerData:flushPlayerDrop()
    self:onOpenFullView({info = {viewName = "shop", param = {productType = ShopConfig.SpecialTag.DIAMOND}}})
end

function GoldNewView:onClickAddGold(send, eventType)
    XH.Bridge:throwData("xjb25022802", {page_item_id = "金币"})
    if self._imgGoldTip:isVisible() then
        self:onClickAddGoldTip()
        return
    end
    XH.playerData:flushPlayerDrop()
    self:onOpenFullView({info = {viewName = "shop", param = {productType = ShopConfig.SpecialTag.GOLD}}})
end

function GoldNewView:onClickBack(send, eventType)
    if self._state == ViewState.FIRST then
        if XH.isEmbeddedApp() then
            XH.PluginModule.exitActivity()
            return
        end
        XH.Bridge:throwData("xjb25022809")
        XH.Bridge:getModule("AutoPop"):onBackToLobby("goldlayer")
        XH.Bridge:getModule("Im"):dispatchEvent({name = XH.Bridge:getModule("Im").EVENT_SHOW_LIST_ENTRANCE})
        XH.Bridge:getModule("Lobby"):dispatchEvent({name = XH.Bridge:getModule("Lobby").SHOW_BOX_GAME})
        XH.netEngine:removeSRS(XH.areaData:getGoldSrsGroupID())
        XH.goldConfigManager:clearGoldConfig()
        XH.Bridge.onLeaveLobby()
    elseif self._state == ViewState.CHOOSE_ROOM then
        if self._statePre == ViewState.MORE_GAME then
            self._statePre = self._state
            self._state = ViewState.MORE_GAME
            self:updateViewVisible()
        else
            self:startHide()
            self._state = ViewState.FIRST
            self:updateViewVisible()
            self:changeAreaBar(LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT, LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT)
            XH.Bridge:throwData("lys24101805")
            self:startShow()
        end
        self._curChooseRoomConf = nil
    elseif self._state == ViewState.MORE_GAME then
        self:startHide()
        self._state = ViewState.FIRST
        self:updateViewVisible()
        self:changeAreaBar(LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT, LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT)
        XH.Bridge:throwData("lys24101805")
        self:startShow()
    end
    if XH.lobby:getModule("LianYun") then
        XH.lobby:getModule("LianYun"):hideProgress()
        self._gameEntry:setProgressInVisible()
    end
    if XH.lobby:getModule("RRBuYu") then
        XH.lobby:getModule("RRBuYu"):hideProgress()
        self._gameEntry:setProgressInVisible()
    end
end

function GoldNewView:onClickGameRule(send, eventType)
    XH.Bridge.viewManager:openView("GoldHallGameRuleView", nil, self._selectGameInfo.roomInfo.LeisureID)
end

function GoldNewView:onClickMoreGame(send, eventType)
    self:switch2MoreGame()
    XH.Bridge:throwData("xjb25022808")
end

function GoldNewView:onClickEditGame(send, eventType)
    XH.Bridge.viewManager:openView("GoldHallEditGameView")
end

function GoldNewView:onClickVip(send, event)
    XH.Bridge.viewManager:openView("SxvipPrivilegeView", nil, SxVipConfig.ThrowData.source.newGoldHall)
end

function GoldNewView:onClickHead(send, eventType)
    XH.Bridge:throwData("xjb25022801")
    if XH.Bridge:getModule("GoldNew"):isSupport("PC") then
        XH.Bridge.viewManager:openView("GoldHallPCView")
    else
        XH.Bridge.viewManager:openView("PersonalCenterView")
    end
end
function GoldNewView:onClickRole(send, eventType)
    XH.Bridge:throwData("xjb25022804")
    self._girl:onClick()
end

function GoldNewView:ctor(isBackHall, roomConf)
    self._modulePC = XH.Bridge:getModule(LocalConfig.MP.PC)
    GoldNewView.super.ctor(self)

    self._state = isBackHall and ViewState.CHOOSE_ROOM or ViewState.FIRST
    self._layouts = {self._menuBarTopAct, self._menuBarLeftAct, self._menuBarBottomBtns, self._menuBarTopBtns, nil, self._menuBarBottomMoreBtns}
    self._viewsByState = {
        [1] = {
            self._panelHeadInfo, self._menuBarLeftAct, self._posGameBtnArea, self._btnMoreGame, self._posQuickStart, self._panelBottomBtns,
            self._panelPeople
        },
        [2] = {self._panelChooseRoomInfo, self._panelChooseRoom, self._posQuickStart},
        [3] = {self._panelMoreGameInfo, self._panelMoreGame}
    }
    self:adaptForLiuHai()
    self:initAllMenuBar()
    self:initSpine()
    self:initQuickStartBtn()
    self:initGameBtnArea()
    self:initHeadFrame()
    self:initPeople()

    self:updateViewVisible()
    self:updateUserInfo()
    self._imgDiamondTip:setVisible(false)
    self._imgGoldTip:setVisible(false)
    if roomConf then
        self:switch2ChooseRoom(roomConf)
    end
    XH.Bridge:onEnterLobby()
    self:onRefreshNewGoodsList()
    self._panelBg:setVisible(XH.isEmbeddedApp())
    if XH.isEmbeddedApp() then
        self:initReqPlugin()
        self._imgMoreGame:setTouchEnabled(false)
        self._imgMoreGameAdd:setVisible(false)
    end
    self._quickStartPos = cc.p(self._posQuickStart:getPosition())
    self._btnMoreGamePos = cc.p(self._btnMoreGame:getPosition())
    self._menuBarLeftActPos = cc.p(self._menuBarLeftAct:getPosition())
end

-- 插件包进入大厅初始化相关方法
function GoldNewView:initReqPlugin()
    local param = XH.PluginModule.getStartParams()
    local proForpey = {
        wxAppId = param.wxAppId,
        appId = param.appID,
        packageId = param.realPayPackageID,
        clientKey = param.clientKey,
    }
    XH.lobby:getModule("Replugin"):invokeFuncNameandParameters("wechat_set_pay_params", proForpey)
end

function GoldNewView:onEnter()
    -- if self._curChooseRoomConf then
    --     self._btnQuickStart:updateByRoomConf(self._curChooseRoomConf)
    -- end
end

function GoldNewView:onExit()
    -- local currScene = XH.SceneManager:getInstance():getTopScene()
    -- local sceneTag = currScene:getTag()
    -- if sceneTag == XH.SCENE_TAG.GAME then
    --     XH.Bridge:getModule("GoldNew"):onGoldSceneEnter()
    --     return
    -- end
end

function GoldNewView:onShowChooseRoom(event)
    local roomConf = event.roomConf
    if roomConf then
        if self._state == ViewState.CHOOSE_ROOM and self._curChooseRoomConf and self._curChooseRoomConf.roomInfo.LeisureID ==
            roomConf.roomInfo.LeisureID then
            if event.ext and event.ext.joinRoom then
                local configid, level = self._btnQuickStart:updateByRoomConf(roomConf)
                if event.ext and event.ext.joinRoom == true then
                    XH.Bridge:getModule("Gold"):reqJoinGoldRoom(configid, level)
                end
            end
            return
        end
        self:switch2ChooseRoom(roomConf, event.quick, event.ext)
    end
end

function GoldNewView:openShop(param)
    XH.Bridge.viewManager:openView("GoldHallShopView", nil, param)
end

function GoldNewView:openBag(param)
    XH.Bridge.viewManager:openView("GoldHallBagView", nil, param)
end

function GoldNewView:onOpenFullView(event)
    local info = event.info
    if info.viewName == "shop" then
        self:openShop(info.param)
    elseif info.viewName == "bag" then
        self:openBag(info.param)
    else
        XH.Bridge.viewManager:openView(info.viewName, nil, info.param)
    end
end

function GoldNewView:onCloseFullView(event)
end

function GoldNewView:onChangeBottomMoreVisible(event)
    self._panelBottomMore:setVisible(not self._panelBottomMore:isVisible())
    local data = event.msg
    if data and data.pos then
        self._panelBottomMore:setPosition(data.pos)
    end
end

function GoldNewView:onEventChangeHeadFrame(event)
    if not event or not event.data then
        Utils:setHead(self._panelHead)
        return
    end

    if event.data then
        Utils:setHead(self._panelHead, {framePropid = event.data.propid, frameUrl = event.data.url})
    end
end

function GoldNewView:adaptForLiuHai()
    if not self.hasInit then
        self.hasInit = true
        self._menuBarTopAct[".initPos"] = cc.p(self._menuBarTopAct:getPosition())
        self._menuBarTopAct[".size"] = self._menuBarTopAct:getContentSize()
        local notchWidth = XH.UITool.getLiuHaiWidth()
        if notchWidth > 0 then
            XH.UITool.adaptForLiuHai({
                self._posQuickStart, self._panelBottomBtns, self._panelBottomMore, self._panelLT, self._menuBarLeftAct, self._panelChooseRoom,
                self._panelMoreGame, self._btnMoreGame, self._menuBarTopBtns
            })
            local pos = cc.p(self._menuBarTopAct:getPosition())
            local posRightX = self._menuBarTopBtns:convertToWorldSpace(cc.p(0, 0)).x
            local posLeftX = self._menuBarTopAct:convertToWorldSpace(cc.p(0, 0)).x
            local topSize = self._menuBarTopAct:getContentSize()
            local moreBigWidth = posRightX - posLeftX - 10 - topSize.width
            self._menuBarTopAct:setPositionX(self._menuBarTopAct:getPositionX() + moreBigWidth)
            self._menuBarTopAct:setContentSize(posRightX - posLeftX - 10, topSize.height)
        end
        self._people:setPositionX((self._menuBarLeftAct:getPositionX() + self._posGameBtnArea:getPositionX() - 366) / 2)
    end
end

function GoldNewView:initQuickStartBtn()
    local qs = QuickStartBtn.new(self)
    self._posQuickStart:addChild(qs)
    self._btnQuickStart = qs
end

function GoldNewView:initPeople()
    self._panelPeople:setCascadeOpacityEnabled(true)
    self._girlPos:setCascadeOpacityEnabled(true)
    self._girl = Girl.new()
    self._girlPos:addChild(self._girl)
end

function GoldNewView:initSpine()
    Utils:addSpine(self._aniDiamond, "GoldLight", "zzb_jbdt_jbzs", "zs")
    Utils:addSpine(self._aniGold, "GoldLight", "zzb_jbdt_jbzs", "jb")
    Utils:addSpine(self._aniMoreGame, "EntryLight", "zzb_jbdt_rk_sg", "gdyx")
end

function GoldNewView:initHeadFrame()
    local headUrlData, propid = XH.Bridge:getModule("BagSysNew"):getBagData():getSelfHeadFrameUrl()
    if headUrlData then
        local headFrameData = {url = headUrlData, propid = propid}
        self:onEventChangeHeadFrame({data = headFrameData})
    end
end

function GoldNewView:initGameBtnArea()
    if self._gameEntry then
        return
    end
    local gameBtnArea = GameEntry.new({goldView = self})
    self._gameEntry = gameBtnArea
    self._posGameBtnArea:addChild(gameBtnArea)
end

function GoldNewView:initChooseRoom()
    if self._chooseRoom then
        return
    end
    local chooseRoom = ChooseRoom.new({goldView = self, quickBtn = self._btnQuickStart})
    self._chooseRoom = chooseRoom
    self._panelChooseRoom:addChild(chooseRoom)
end

function GoldNewView:initMoreGame()
    if self._moreGame then
        return
    end
    local moreGame = MoreGame.new({goldView = self})
    self._moreGame = moreGame
    self._panelMoreGame:addChild(moreGame)
end

function GoldNewView:changeAreaBar(idx, cfgIdx)
    local param = LocalConfig.MENU_BAR_CFG[cfgIdx]
    local gameid
    if self._state == ViewState.CHOOSE_ROOM then
        gameid = self._selectGameInfo.roomInfo.GameID
    end
    param.btnConfig = RemoteConfig:getConfigByAreaId(cfgIdx, gameid)
    self._menuBar[idx] = MenuBar.create(self._layouts[idx], param)
end

function GoldNewView:switch2ChooseRoom(roomConf, isQuick, ext)
    self:initChooseRoom()
    self._chooseRoom:updateUI(roomConf)
    self._curChooseRoomConf = roomConf
    local delayTime = 0.2
    if self._state == ViewState.MORE_GAME then
        delayTime = 0
    elseif self._state == ViewState.FIRST then
        delayTime = 0.2
    end
    self:startHide(function()
        self._statePre = self._state
        self._state = ViewState.CHOOSE_ROOM
        self:updateViewVisible()
        local isAutoJoinRoom = ext and ext.joinRoom == true
        self._chooseRoom:startShow(nil, isAutoJoinRoom)

        self._selectGameInfo = roomConf
        self:updateGameName(roomConf)
        local configid, level = self._btnQuickStart:updateByRoomConf(roomConf)
        if isAutoJoinRoom then
            XH.Bridge:getModule("Gold"):reqJoinGoldRoom(configid, level)
        end
        self:changeAreaBar(LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT, LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT)
        self._panelBottomMore:setVisible(false)
    end, isQuick, delayTime, nil, ViewState.CHOOSE_ROOM)
end

function GoldNewView:switch2MoreGame()
    XH.Bridge:getModule("GoldNew"):reqSaveInfo()
    self:initMoreGame()
    self._moreGame:updateUI()
    self:startHide(function()
        self._state = ViewState.MORE_GAME
        self:updateViewVisible()
        self._moreGame:startShow()

        self:changeAreaBar(LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT, LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT)
        self._panelBottomMore:setVisible(false)
    end, false, 0.4)
end

function GoldNewView:updateGameName(roomConf)
    self._selectGameInfo = roomConf
    self._txtCurChooseGameName:setString(roomConf.roomInfo.GameTitle)
    self._btnCurGameRule:setPositionX(self._txtCurChooseGameName:getPositionX() + self._txtCurChooseGameName:getContentSize().width + 50)
end
function GoldNewView:updateViewVisible()
    for i = 1, #self._viewsByState do
        if i ~= self._state then
            for j = 1, #self._viewsByState[i] do
                self._viewsByState[i][j]:setVisible(false)
            end
        end
    end
    for j = 1, #self._viewsByState[self._state] do
        self._viewsByState[self._state][j]:setVisible(true)
    end
end

function GoldNewView:updateUserInfo()
    local nickname = string.gsub(XH.playerData:getNickName(), "\n", "")
    local sex = XH.playerData:getSex()
    local id = XH.playerData:getNumberID()
    if string.len(nickname) > 12 then
        local validBytes = XH.StringTool.getMinimumValidBytesUTF8(nickname, 12)
        nickname = string.sub(nickname, 1, validBytes) .. "..."
    end
    self._txtName:setText(nickname)
    self._txtID:setText("")

    -- 钻石数据
    local diamondCnt = XH.playerData:getDiamnd()
    self._txtDiamondNum:setText(Utils:formatGoldNum2String(diamondCnt))

    -- 设置金币数据
    local playerSR = XH.playerData:getSR() or 0
    self._txtGoldNum:setText(Utils:formatGoldNum2String(playerSR))

    local head = XH.playerData:getHead()
    if head == 0 then -- default head
        local headImageKey
        if sex == 0 then -- girl
            headImageKey = "_0002_mrtx_w.png"
        else -- boy
            headImageKey = "_0002_mrtx_m.png"
        end
        XH.UITool.setPlistTextureOnNode(self._panelHeadImg, headImageKey)
    end

    local urlGold = self._modulePC:getGoldHeadUrl()
    local url = urlGold or XH.playerData:getWeChatURL()
    if url and url ~= "" then
        Utils:setImgUrl(self._panelHeadImg, url, true)
    end

    if self._btnVip then
        local isExpire = XH.Bridge:getModule("Sxvip"):isExpire()
        if isExpire then
            XH.UITool.gray(self._btnVip)
        else
            XH.UITool.resetGray(self._btnVip)
        end
    end
end

function GoldNewView:onRemainder(event)
    if self._btnVip then
        local isExpire = XH.Bridge:getModule("Sxvip"):isExpire()
        if isExpire then
            XH.UITool.gray(self._btnVip)
        else
            XH.UITool.resetGray(self._btnVip)
        end
    end
end

-----------转场动效-----------
function GoldNewView:getEnterAnimationInfo(boneName, slotName)
    if slotName == nil then
        slotName = boneName
    end
    return {jsonFilePath = "animation/GoldNew/zzb_jbdt_zjm.json", animationName = "animation", boneName = boneName, slotName = slotName}
end

function GoldNewView:getExitAnimationInfo(boneName, slotName)
    if slotName == nil then
        slotName = boneName
    end
    return {jsonFilePath = "animation/GoldNew/zzb_jbdt_zjm.json", animationName = "animation2", boneName = boneName, slotName = slotName}
end

function GoldNewView:startShow()
    if self._state == ViewState.CHOOSE_ROOM or self._state == ViewState.MORE_GAME then
        XH.Bridge:getModule("GoldNew"):runBackGroundAction({blurShow = false, blurTime = 0.2})
        self._panelLT:addLuaComponent(cc.ext.CompSpineAction, self:getEnterAnimationInfo("shanglan"))
        -- self._posQuickStart:setPosition(self._quickStartPos.x, self._quickStartPos.y)
        -- self._posQuickStart:addLuaComponent(cc.ext.CompSpineAction, self:getEnterAnimationInfo("ksks"))
        self._posQuickStart:setOpacity(255)
        self._menuBarTopBtns:addLuaComponent(cc.ext.CompSpineAction, self:getEnterAnimationInfo("shanglan"))
    else
        XH.Bridge:getModule("GoldNew"):runBackGroundAction({type = "enter", blurShow = true})
        self._panelLT:addLuaComponent(cc.ext.CompSpineAction, self:getEnterAnimationInfo("shanglan"))
        self._menuBarTopBtns:addLuaComponent(cc.ext.CompSpineAction, self:getEnterAnimationInfo("shanglan"))
        self._panelBottomBtns:addLuaComponent(cc.ext.CompSpineAction, self:getEnterAnimationInfo("xialan"))
        self._panelPeople:addLuaComponent(cc.ext.CompSpineAction, self:getEnterAnimationInfo("renwu"))
        -- self._posQuickStart:setPosition(self._quickStartPos.x, self._quickStartPos.y)
        -- self._posQuickStart:addLuaComponent(cc.ext.CompSpineAction, self:getEnterAnimationInfo("ksks"))
        self._posQuickStart:setOpacity(255)
        self._menuBarLeftAct:setPosition(self._menuBarLeftActPos)
        self._menuBarLeftAct:addLuaComponent(cc.ext.CompSpineAction, self:getEnterAnimationInfo("celan"))
        self._btnMoreGame:setPosition(self._btnMoreGamePos)
        self._btnMoreGame:addLuaComponent(cc.ext.CompSpineAction, self:getEnterAnimationInfo("7"))
        self._gameEntry:startShow()
    end
    self:stopTouch(0.7)
end

function GoldNewView:startHide(callback, isFirstIn, delayTime, params, toViewState)
    if isFirstIn or self._state == ViewState.CHOOSE_ROOM or self._state == ViewState.MORE_GAME then
        if isFirstIn then -- 从大厅进入
        else
            self._posQuickStart:setOpacity(0)
        end
    else
        if self._state ~= ViewState.FIRST then
            XH.Bridge:getModule("GoldNew"):runBackGroundAction({blurShow = false, blurTime = 0.2})
            self._panelBottomBtns:addLuaComponent(cc.ext.CompSpineAction, self:getExitAnimationInfo("xialan"))
            self._posQuickStart:setOpacity(0)
        else
            self._panelBottomBtns:addLuaComponent(cc.ext.CompSpineAction, self:getExitAnimationInfo("xialan"))
        end
        local withAni = true
        if params then
            if params.withAni ~= nil and params.withAni == false then
                withAni = false
            end
        end
        if withAni then
            XH.Bridge:getModule("GoldNew"):runBackGroundAction({type = "exit"})
        end
        self._panelLT:addLuaComponent(cc.ext.CompSpineAction, self:getExitAnimationInfo("shanglan"))
        self._menuBarTopBtns:addLuaComponent(cc.ext.CompSpineAction, self:getExitAnimationInfo("shanglan"))
        self._panelPeople:addLuaComponent(cc.ext.CompSpineAction, self:getExitAnimationInfo("renwu"))
        self._menuBarLeftAct:addLuaComponent(cc.ext.CompSpineAction, self:getExitAnimationInfo("celan"))
        self._btnMoreGame:addLuaComponent(cc.ext.CompSpineAction, self:getExitAnimationInfo("7"))
        self._gameEntry:startHide()
    end
    self._panelBottomMore:setVisible(false)
    self:runAction(cc.Sequence:create(cc.DelayTime:create(delayTime or 0.7), cc.CallFunc:create(function()
        if callback then
            callback()
        end
    end)))
    self:stopTouch(delayTime)
end

function GoldNewView:stopTouch(time)
    self._layoutTouch:stopAllActions()
    self._layoutTouch:setVisible(true)
    self._layoutTouch:runAction(cc.Sequence:create(cc.DelayTime:create(time or 0.5), cc.CallFunc:create(function()
        self._layoutTouch:setVisible(false)
    end)))
end

function GoldNewView:onRefreshNewGoodsList(event)
    local isShowZSTip = true
    local isShowJBTip = true
    local lastShowTime = cc.UserDefault:getInstance():getIntegerForKey("NEWGOLDHALL_ZSTIP_LASTSHOWTIME", 0)
    if lastShowTime > 0 and os.time() - lastShowTime < 86400 then
        isShowZSTip = false
    end
    lastShowTime = cc.UserDefault:getInstance():getIntegerForKey("NEWGOLDHALL_JBTIP_LASTSHOWTIME", 0)
    if lastShowTime > 0 and os.time() - lastShowTime < 86400 then
        isShowJBTip = false
    end
    local info = XH.Bridge:getModule(LocalConfig.MP.SHOP):getActInfoByTag({tag = "jb"})
    if isShowJBTip and info.cornerName ~= "" then
        isShowZSTip = false -- 金币提示优先
    end
    self._imgGoldTip:setVisible(isShowJBTip and info.cornerName ~= "")
    XH.UITool.setText(self._imgGoldTip, "txtTip", info.cornerName)
    if info.style > 0 and info.style <= 3 then
        self._imgGoldTip:loadTexture(IMG_CFG.diamondTag[info.style], ccui.TextureResType.plistType)
    end

    local info = XH.Bridge:getModule(LocalConfig.MP.SHOP):getActInfoByTag({tag = "zs"})
    self._imgDiamondTip:setVisible(isShowZSTip and info.cornerName ~= "")
    XH.UITool.setText(self._imgDiamondTip, "txtTip", info.cornerName)
    if info.style > 0 and info.style <= 3 then
        self._imgDiamondTip:loadTexture(IMG_CFG.diamondTag[info.style], ccui.TextureResType.plistType)
    end
end

function GoldNewView:onGameSceneExit(event)
    if CF and CF.roomData and CF.roomData.isTeaching and CF.roomData:isTeaching() then
        return
    end
    if event.data.gameid ~= 30579 then
        return
    end
    if XH.Bridge:getModule("DarkShuangKouChallenge"):checkActivityOpen() then
        if not XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_DARK_SHUANGKOU_FIRST_EXIT_POP_CHANLLANGE, false) then
            XH.Bridge.viewManager:openView("DarkShuangKouChallengeView")
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_DARK_SHUANGKOU_FIRST_EXIT_POP_CHANLLANGE, true)
        end
    end
end

function GoldNewView:onWinSizeChangeBefore()
    self._menuBarTopAct:setPosition(self._menuBarTopAct[".initPos"])
    self._menuBarTopAct:setContentSize(self._menuBarTopAct[".size"])
end

function GoldNewView:onWinSizeChange()
    self.hasInit = false
    self:adaptForLiuHai()
    self._menuBar[LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT]:onResize()
    if self._chooseRoom then
        self._chooseRoom:removeFromParent()
        self._chooseRoom = nil
        self:initChooseRoom()
        if self._curChooseRoomConf then
            self._chooseRoom:updateUI(self._curChooseRoomConf)
        end
    end
    ActionUtils:clearInitData(self._panelPeople)
    ActionUtils:clearInitData(self._panelLT)
    ActionUtils:clearInitData(self._menuBarTopBtns)
    ActionUtils:clearInitData(self._btnMoreGame)
    ActionUtils:clearInitData(self._panelPeople)
    ActionUtils:clearInitData(self._menuBarLeftAct)
    -- ActionUtils:clearInitData(self._panelBottomBtns)
    -- ActionUtils:clearInitData(self._panelBottomMore)
    ActionUtils:clearInitData(self._posQuickStart)
end

function GoldNewView:onUpdateChooseRoomConf(event)
    local roomConf = event.roomConf
    if roomConf then
        self._curChooseRoomConf = event.roomConf
    end
end

return GoldNewView
