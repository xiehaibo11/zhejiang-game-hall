local TeaHouseCreateBoxRoomView = class("TeaHouseCreateBoxRoomView", TeaHouse.View)
local MutiVersionGameConfig =  require("teahouse.Config.MutiVersionGameConfig")
local GameNewTypeConfiger = require("app.Config.Parse.GameNewTypeConfiger")
local CreateBoxRoomConfig =  require("teahouse.Config.CreateBoxRoomConfig")
local GamePlayReachConfig = require("lobby.Modules.GamePlayReach.Config")

TeaHouseCreateBoxRoomView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseCreateRoomView.csb",
    binding = {
        ["_KW_IMG_TITLE_CREATE_ROOM"] = { tag = "_KW_IMG_TITLE_CREATE_ROOM", name = "_textTitleCreateRoom", class = "img" },
        ["_KW_IMG_TITLE_CREATE_PLAYMODE"] = { tag = "_KW_IMG_TITLE_CREATE_PLAYMODE", name = "_textTitleCreatePlayMode", class = "img" },
        ["_KW_BTN_CREATE_BOX_ROOM"] = { tag = "_KW_BTN_CREATE_BOX_ROOM", name = "_btnCreate", class = "btn", events = "onTouchEventTeaHouseCreateBoxRoom" },
        ["_KW_BTN_CREATE_PLAYMODE"] = { tag = "_KW_BTN_CREATE_PLAYMODE", name = "_btnCreatePlayMode", class = "btn", events = "onTouchEventTeaHouseCreatePlayMode" },
        ["_KW_BTN_BACK"] = { tag = "_KW_BTN_BACK", name = "_btnBack", class = "btn", events = "onTouchEventClose" },
        ["_KW_BTN_MODEl"] = { tag = "_KW_BTN_MODEl", name = "_btnModel", class = "btn", events = "onTouchEventChooseGameDynamic" },
        ["_KW_RADIO_ITEM"] = { tag = "_KW_RADIO_ITEM", name = "_radioItem", class = "checkBox" },
        ["_KW_CHECK_BOX_ITEM"] = { tag = "_KW_CHECK_BOX_ITEM", name = "_checkBoxItem", class = "checkBox" },
        ["_KW_TEXT_FIELD_ITEM"] = { tag = "_KW_TEXT_FIELD_ITEM", name = "_textFieldItem", class = "img" },
        ["_KW_TEXT_COST_INFO"] = { tag = "_KW_TEXT_COST_INFO", name = "_costTextInfo", class = "text" },
        ["_KW_PANEL_GAME_RULE_DYNAMIC"] = { tag = "_KW_PANEL_GAME_RULE_DYNAMIC", name = "_gameRule", class = "listView" },
        ["_KW_PANEL_OPTIONS_ITEM"] = { tag = "_KW_PANEL_OPTIONS_ITEM", name = "_optionItem", class = "panel" },
        ["_KW_LISTVIEW_CHOOSE_GAME"] = { tag = "_KW_LISTVIEW_CHOOSE_GAME", name = "_listViewGames", class = "panel" },
        ["_KW_PANEL_ROOMCARD_NOTICE"] = { tag = "_KW_PANEL_ROOMCARD_NOTICE", name = "_panelRoomCardNotice", class = "panel" },
        ["_KW_IMG_HUA"] = { tag = "_KW_IMG_HUA", name = "_imgDiscountHua", class = "img" },
        ["_KW_TEXT_COST_DISCOUNT"] = { tag = "_KW_TEXT_COST_DISCOUNT", name = "_costTextDiscount", class = "text" },
        ["_KW_UPGRADE_TEXT"] = { tag = "_KW_UPGRADE_TEXT", name = "_upgradeLabel", class = "text" },
        ["_KW_PANEL_NOTICE"] = { tag = "_KW_PANEL_NOTICE", name = "_panelNotice", class = "panel" },
        ["_KW_FOUR_TO_TWO_TIP"] = { name = "_tipFourToTwo"},
        ["_KW_FOUR_TO_TWO_TIP_2"] = { name = "_tipFourToTwo2"},
        ["_KW_COSTCARD_NOTICE"] = {name = "_tipCreatNotice"},
        ["_KW_BTN_PLAYMODE_AREA"] = {name = "_btnPlayModeArea", class = "btn", events = "onTouchEventPlayModeAreaChange" },
        ["_KW_PANEL_SELECT_PLAYMODE_AREA"] = {name = "_panelPlayModeArea" , class = "panel"},
        ["_KW_PANEL_DEFAULT_ITEM"] = {name = "_panelDefaultItem",class = "panel"},
        ["_KW_NODE_MODULE_1"] = { tag = "_KW_NODE_MODULE_1", name = "_nodeItem1", class = "node" },
        ["_KW_NODE_MODULE_2"] = { tag = "_KW_NODE_MODULE_2", name = "_nodeItem2", class = "node" },
        ["_KW_NODE_MODULE_3"] = { tag = "_KW_NODE_MODULE_3", name = "_nodeItem3", class = "node" },
        ["_KW_NODE_MODULE_4"] = { tag = "_KW_NODE_MODULE_4", name = "_nodeItem4", class = "node" },
        ["_KW_NODE_MODULE_5"] = { tag = "_KW_NODE_MODULE_5", name = "_nodeItem5", class = "node" },
        ["_KW_NODE_MODULE_6"] = { tag = "_KW_NODE_MODULE_6", name = "_nodeItem6", class = "node" },
        ["_KW_NODE_MODULE_7"] = { tag = "_KW_NODE_MODULE_7", name = "_nodeItem7", class = "node" },
        ["_KW_NODE_MODULE_8"] = { tag = "_KW_NODE_MODULE_8", name = "_nodeItem8", class = "node" },
        ["_KW_NODE_MODULE_9"] = { tag = "_KW_NODE_MODULE_9", name = "_nodeItem9", class = "node" },
        ["_KW_PLAYMODE_AREA_NOW"] = {tag = "_KW_PLAYMODE_AREA_NOW",name = "_textPlayModeName",class = "text"},
        ["_KW_BTN_PLAYTYPE_CLOSE"] = {tag = "_KW_BTN_PLAYTYPE_CLOSE",name = "_btnPlayTypeClose",class = "btn" ,events = "onTouchEventPlayTypeClose" },
        ["_KW_BTN_PLAYTYPE_SURE"] = {tag = "_KW_BTN_PLAYTYPE_SURE",name = "_btnPlayTypeSave",class = "btn" ,events = "onTouchEventPlayTypeSave" },
        ["_KW_LIMIT_TIME_ACT"] = {tag = "_KW_LIMIT_TIME_ACT",name = "_imgLimitAct"},
        ["_KW_IMG_AREA_COST_HUA"] = {tag = "_KW_IMG_AREA_COST_HUA",name = "_imgAreaCostHua"},
        ["_KW_AREA_COST_TEXT"] = {tag = "_KW_AREA_COST_TEXT",name = "_imgAreaCostText"},
        ["_KW_CREATE_TIPS"] = {tag = "_KW_CREATE_TIPS",name = "_createTips"},
        ["_KW_TXT_CREATE_TIPS"] = {tag = "_KW_TXT_CREATE_TIPS",name = "_createTipsStr"},
        ["_KW_TIPS_MODEL"] = {tag = "_KW_TIPS_MODEL",name = "_tipsModel"},
        ["_KW_PROMOTE_TIPS"] = {tag = "_KW_PROMOTE_TIPS",name = "_promoteTips"},
        ["_KW_BTN_FEEDBACK"] = {varName = "_KW_BTN_FEEDBACK", class = "btn", events = "onBtnFeedBack"},
    }
}

local KW_BTN_MODEl_TEXT = "KW_TEXT_MODEl"
local KW_LAST_SELECT_PRE_KEY = "LAST_CHOOSE_GAME_ID"

local KW_OPTION_ITEM_TEXT = "KW_OPTION_ITEM_TEXT"
local KW_ITEM_TEXT = "KW_ITEM_TEXT"
local KW_PANEL_TIPS = "KW_PANEL_TIPS"
local KW_PIC_TIPS_PAOPAO = "KW_PIC_TIPS_PAOPAO"
local KW_TEXT_TIPS = "KW_TEXT_TIPS"

local KW_IMG_ACTIVITY = "KW_IMG_ACTIVITY"
local KW_IMG_LEFT_TIME = "KW_IMG_LEFT_TIME"
local KW_TEXT_LFETTIME = "KW_TEXT_LFETTIME"
local KW_IMG_NEW_PLAY_TYPE = "KW_IMG_NEW_PLAY_TYPE"
local KW_IMG_NEW_PROMOTE = "KW_IMG_NEW_PROMOTE"

local KW_PLAYMODE_STATUS = "KW_PLAYMODE_STATUS"
local KW_PLAYMODE_NAME = "KW_PLAYMODE_NAME"

local FourToTwoConfig = TeaHouse.BridgeData.getFourToTwoConfig()

local KW_TEAHOUSE_MODE = {
    GUANZHU = 1,
    YUFU = 2,
    LIUTONG = 3,
    FANGFEI = 4,
    LOBBY = 5,
    SHAOXINGQUANZHU = 6,
}

--一行不同数量选项时的按钮间隔
local buttonPosition = {
    { 230 },
    { 230, 675 },
    { 230, 675, 1120 },
    { 230, 527, 824, 1120 },
    { 230, 452.5, 675, 897.5, 1120 }
}

local TextFieldPosition = 190   --输入框x坐标

local OptionfntSize = {
    normal = 40,
    small = 34,
    extraSmall = 28
}

--单选节点保存
local radioTable = {}
--复选节点保存
local checkBoxTable = {}
--输入框节点保存
local inputBoxTable = {}
--大类节点保存
local categorieTable = {}
--有联动控制属性的节点保存
local linkageLevelTable = {}
--被联动需要隐藏的节点保存
local hideTable = {}
--被联动需要隐藏且需要自动选择其他节点的节点保存
local hideSelectTable = {}
--被联动需要禁用的节点保存
local prohibitTable = {}
--被联动需要禁用的节点保存(且至少需要两个联动值同时存在时才生效)
local prohibitMeanwhileTable = {}
--被联动需要禁用且需要自动选择其他节点的节点保存
local prohibitSelectTable = {}
--被联动需要禁用且同时选择的节点保存
local prohibitAndSelectTable = {}
--被联动需要显示的节点保存
local showTable = {}
--被联动需要选中的节点保存
local linkSelectedTable = {}
--被联动需要取消选中的节点保存
local linkUnSelectedTable = {}
--未选中时才有的联动值
local unSelectlinkageLevelTable = {}
--被联动需要禁用的节点保存(联动级别大于普通的禁用)
local linkProhibitTable = {}
--局数选项节点保存（也可保存用于计算消耗卡数的其他节点）
local playCountTable = {}
--消耗类型选项节点保存（用于计算消耗卡数，房主和aa）
local costTypeTable = {}
--gamerule中必须存在的节点规则（例如衢州麻将的局麻）
local mustExistRuleTable = {}
--有特殊条件的节点保存（比如不是按照局数的）
local conditionTable = {}
--需要在加载完选项后更新联动的联动值(保存当前所选所有按钮联动值方便联动控制)
local linkageLevelValue = {}

--比赛场适配参数
local boardHeight = 74                 --顶部木板的长度
local ropeHeight = 56                 --顶部吊绳露出的长度
local adjustTypeTabel = {
    ["top"]        = "ANCHORTOP", --需要置顶的子节点名称尾缀
    ["center"]    = "ANCHORCENTER", --需要居中的子节点名称尾缀
    ["bottom"]    = "ANCHORBOTTOM", --需要置底的子节点名称尾缀
}

function TeaHouseCreateBoxRoomView:ctor(data)
    TeaHouseCreateBoxRoomView.super.ctor(self)
    self._gameID = 0
    self._payModeType = data.payModeType
    self._payTypeTable = data.payTypeTable
    self._timeStamp = os.time()

    self._modeItems = {}
    self._tmpGameID = nil
    self._mutiGameTable = nil
    self._tmpGameName = nil
    self._tmpLobbyID = nil
    self._tmpMutiVersionGame = nil
    self._isMutiVersionGame = false
    self:init()
end

function TeaHouseCreateBoxRoomView:init()
    self:initCacheInfoKey()
    self:initTitleAndCreateBtn()
    self:initUIAndEvents()
end

function TeaHouseCreateBoxRoomView:initCacheInfoKey()
    self._keyCacheInfo = "_teaHouse"
end

function TeaHouseCreateBoxRoomView:initUIAndEvents()
    self._radioItem:addEventListener(handler(self, self.onTouchEventRadio))
    self._checkBoxItem:addEventListener(handler(self, self.onTouchEventCheckBox))

    local radioText = ccui.Helper:seekNodeByName(self._radioItem, KW_OPTION_ITEM_TEXT)
    radioText:addTouchEventListener(handler(self, self.onTouchRadioOptionText))
    local checkBoxText = ccui.Helper:seekNodeByName(self._checkBoxItem, KW_OPTION_ITEM_TEXT)
    checkBoxText:addTouchEventListener(handler(self, self.onTouchCheckBoxOptionText))

    local teaHouseCreate = TeaHouse.manager.teaHouseCreate
    self:createListener(teaHouseCreate)
    :addEventListener(teaHouseCreate.EVENT_UPDATE_ACTIVITYICON,handler(self, self.refreshActivityIcon))
    -- 玩法触达：IOP 配置异步返回后刷新红点
    local gamePlayReachModule = XH.lobby:getModule("GamePlayReach")
    self:createListener(gamePlayReachModule)
    :addEventListener(gamePlayReachModule.EVENT_CONFIG_UPDATED, handler(self, self.onGamePlayReachConfigUpdated))
    teaHouseCreate:reqSysTime()

    self._listViewGames:setScrollBarEnabled(false)
    self._panelRoomCardNotice:setVisible(true)
    self:initListViewGames()

    self:adaptForLiuHai()
end

function TeaHouseCreateBoxRoomView:adaptForLiuHai()
    local nodeListName = { "_KW_LISTVIEW_CHOOSE_GAME", "KW_IMG_SPLIT_LINE" }
    local nodeList = {}
    for _, name in pairs(nodeListName) do
        local tmpNode = ccui.Helper:seekNodeByName(self, name)
        nodeList[#nodeList + 1] = tmpNode
    end
    TeaHouse.BridgeUI.adaptForLiuHai(nodeList)
end

function TeaHouseCreateBoxRoomView:initListViewGames()
    local gameIdList = clone(TeaHouse.BridgeData.getTeaHouseRoomGameList())
    local gameNameList = clone(TeaHouse.BridgeData.getGameNameList())

    XH.playerData:screenTeaHouseGame(gameIdList)

    if #gameIdList == 0 then
        self._upgradeLabel:setVisible(true)
        self._panelRoomCardNotice:setVisible(false)
        self._btnCreate:setVisible(false)
        self._panelNotice:setVisible(false)
    end
    
    if gameIdList and gameNameList and self._btnModel then
        local firstGameId = 0
        -- 推广活动默认勾选
        if firstGameId and TeaHouse.PromoteConfig[XH.areaData:getLobbyID()] ~= nil then
            firstGameId = TeaHouse.PromoteConfig[XH.areaData:getLobbyID()].GAMEID
        end
        for index, gameid in pairs(gameIdList) do
            self:addGameBtnOnce(gameNameList[gameid], gameid)
            if firstGameId == 0 then
                firstGameId = gameid
            end
        end
        self:setDefaultSelectGameDynamic(firstGameId)
        -- self:checkSelectGameDynamicLegal()
    end
    -- 玩法触达：配置已在进入大厅时拉取，此处刷新红点并在默认选中玩法有红点时弹窗
    XH.lobby:getModule("GamePlayReach"):refreshCreatePanelGameRedDots(self._listViewGames)
    self:tryGamePlayReachOnDefaultGame()
end

function TeaHouseCreateBoxRoomView:tryGamePlayReachOnDefaultGame()
    if not self._gameID or self._gameID <= 0 then
        return
    end
    local gamePlayReachModule = XH.lobby:getModule("GamePlayReach")
    if not gamePlayReachModule:hasGameRedDot(self._gameID) then
        return
    end
    gamePlayReachModule:onGameSelected(self._gameID, GamePlayReachConfig.LOCATION.TEA_CREATE_GAME, {
        gameId = self._gameID,
        listView = self._listViewGames,
    })
end

function TeaHouseCreateBoxRoomView:onGamePlayReachConfigUpdated()
    XH.lobby:getModule("GamePlayReach"):refreshCreatePanelGameRedDots(self._listViewGames)
    if self._gameID and self._gameID > 0 then
        XH.lobby:getModule("GamePlayReach"):refreshRuleRedDots(self, self._gameID, radioTable, checkBoxTable)
    end
    self:tryGamePlayReachOnDefaultGame()
end

function TeaHouseCreateBoxRoomView:addGameBtnOnce(textStr, gameId)
    local newItem = self._btnModel:clone()
    local tempText = newItem:getChildByName(KW_BTN_MODEl_TEXT)
    tempText:setText(textStr)
    newItem:setTag(gameId)
    newItem:setName(gameId)
    --判断是否是活动游戏
    if self:isActivityGame(gameId) then
        TeaHouse.BridgeUI.setVisible(newItem, KW_IMG_ACTIVITY, true)
        TeaHouse.BridgeUI.setVisible(newItem, KW_IMG_LEFT_TIME, true)
        local startTime, endTime = TeaHouse.BridgeData.getActivityTime()
        local leftTime = endTime - self._timeStamp
        self:runCountDownAcitvity(newItem, leftTime)
    end
    --判断是否为标记游戏
    if TeaHouse.BridgeData.isShowMarkGame(gameId) then
        local markText = TeaHouse.BridgeData.getMarkTextByGameID(gameId)
        tempText:setText(markText.gameName)
        local newMark = TeaHouse.BridgeUI.getMarkIcon(gameId)
        newMark:setPosition(cc.p(0 , 0))
        newItem:addChild(newMark)
    end
    if GameNewTypeConfiger:getIsNewPlayTypGame(gameId) or GameNewTypeConfiger:isShowNewType(gameId) then
        newItem:loadTextures("tea_house_createroom_choose_game_btn3.png","tea_house_createroom_choose_game_btn3.png","tea_house_createroom_choose_game_btn1.png",ccui.TextureResType.plistType)
        -- 推广活动默认勾选
        if GameNewTypeConfiger:isShowNewType(gameId) or (TeaHouse.PromoteConfig[XH.areaData:getLobbyID()] ~= nil and TeaHouse.PromoteConfig[XH.areaData:getLobbyID()].GAMEID == gameId) then
            XH.UITool.setVisible(newItem, KW_IMG_NEW_PROMOTE, true)
        else
            XH.UITool.setVisible(newItem, KW_IMG_NEW_PLAY_TYPE, true)
        end
    end
    -- 玩法触达：比赛场创建面板玩法按钮红点
    XH.lobby:getModule("GamePlayReach"):attachGameRedDot(newItem, gameId)
    self._listViewGames:addChild(newItem)
end

function TeaHouseCreateBoxRoomView:initTitleAndCreateBtn()
    self._textTitleCreateRoom:setVisible(true)
    self._btnCreate:setVisible(true)
    self._textTitleCreatePlayMode:setVisible(false)
    self._btnCreatePlayMode:setVisible(false)
    self._tipCreatNotice:setString("注：房卡在完成第一局游戏后扣除，\n提前解散不扣房卡")
    if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.NINGBO or TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.YUYAO then
        local cfg = XH.lobby:getModule("Configuration"):getAllConfigData("CardCostInfo")
        if not cfg or  not cfg.createPanelText[tostring(XH.areaData:getLobbyID())] then
            self._tipCreatNotice:setString("注：房卡在开局后扣除")
        end
    end
end

--根据key值大小顺序遍历table表
local pairsByKeys = function(t)
    if t == nil then t = {} end
    local a = {}
    for n in pairs(t) do
        a[#a + 1] = n
    end
    table.sort(a, function(x, y)
        return tonumber(string.match(x, "%d+")) < tonumber(string.match(y, "%d+"))
    end
    )
    -- table.sort(a)
    local i = 0
    return function()
        i = i + 1
        return a[i], t[a[i]]
    end
end

--选定一个游戏，动态加载游戏规则
function TeaHouseCreateBoxRoomView:onTouchEventChooseGameDynamic(send, eventType, isAutoTouch)
    if eventType == ccui.TouchEventType.began then
        -- AudioEngine.playEffect(KW_PATH_LOBBY_SOUND .. KW_SOUND_BTN_DOWN)
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._btnPlayModeArea:setVisible(false)
    local gameID = send:getTag()
    if gameID == self._gameID then
        return
    end
    self._mutiGameTable = MutiVersionGameConfig.getMutiGameTable(gameID, TeaHouse.BridgeData.getLobbyID())
    self._tmpLobbyID = nil
    self._isMutiVersionGame = false
    if self._mutiGameTable then
        local loadGameId = self._tmpGameID or gameID
        local mutiGame = self._mutiGameTable[loadGameId]
        if mutiGame then
            self._btnPlayModeArea:setTitleText("玩法："..mutiGame.areaName)
            self._tmpLobbyID = mutiGame.lobbyid
            gameID = mutiGame.gameid
            self._isMutiVersionGame = mutiGame.isMutiVersionGame
        end
        self._btnPlayModeArea:setVisible(true)
    end
    local btns = send:getParent():getChildren()
    for _, btn in pairs(btns) do
        local isSelect = btn == send
        local fontSize = isSelect and 60 or 54
        local color = isSelect and cc.c3b(255, 251, 205) or cc.c3b(163, 111, 72)
        local tempText = btn:getChildByName(KW_BTN_MODEl_TEXT)
        tempText:setTextColor(color)
        tempText:setFontSize(fontSize)
        btn:setEnabled(not isSelect)
    end

    self._gameID = gameID
    self:initPromoteTips(self._gameID)
    -- 玩法触达：手动切换玩法时，有未读红点则弹窗并在成功后消红点
    if not isAutoTouch then
        XH.lobby:getModule("GamePlayReach"):onGameSelected(gameID, GamePlayReachConfig.LOCATION.TEA_CREATE_GAME, {
            gameId = gameID,
            listView = self._listViewGames,
        })
    end
    XH.userDefault:setValue(XH.userDefault.KEY_ID.LAST_CHOOSE_GAME_ID, gameID, { keyCacheInfo = self._keyCacheInfo })

    self._categoriesIndex = nil
    --根据游戏id动态加载规则选项
    self:loadGameRuleDynamic(gameID,self._tmpLobbyID)
    print("TouchChooseGame")

    if GameNewTypeConfiger:getIsNewPlayTypGame(self._gameID) then
        self:showCreateTips(true)
    else
        self:showCreateTips(false)
    end

    local dataEx = {}
    dataEx.numid = TeaHouse.BridgeData.getNumberID()
    dataEx.gameid = gameID
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_CreateRoom_Btn_Choose, dataEx)
end

--初始化保存的节点表和联动值等
function TeaHouseCreateBoxRoomView:clearNodetable()
    radioTable = {}
    checkBoxTable = {}
    inputBoxTable = {}
    categorieTable = {}
    linkageLevelTable = {}
    hideTable = {}
    hideSelectTable = {}
    prohibitTable = {}
    prohibitMeanwhileTable = {}
    prohibitSelectTable = {}
    prohibitAndSelectTable = {}
    showTable = {}
    linkSelectedTable = {}
    linkUnSelectedTable = {}
    unSelectlinkageLevelTable = {}
    linkProhibitTable = {}
    playCountTable = {}
    costTypeTable = {}
    mustExistRuleTable = {}
    conditionTable = {}
    linkageLevelValue = {}
end

function TeaHouseCreateBoxRoomView:getXmlKey(xmlString)
    local tableKey = {}
    local head = "</".."(.-)"..">"
    local num0 = 1
    local num1 = 1
    local tmpItem = ""
    while(true) do
        num0, num1, tmpItem = string.find(xmlString, head, num1)
        if num0 == nil and num1 == nil or tmpItem == "userDefaultRoot" then
            break
        end
        table.insert(tableKey, tmpItem)
    end
    return tableKey
end

function TeaHouseCreateBoxRoomView:getGameidAndkeyCacheInfo()
    local extraParam = {gameID = self._gameID, keyCacheInfo = self._keyCacheInfo}
    return extraParam
end

--根据游戏id动态加载规则选项
function TeaHouseCreateBoxRoomView:loadGameRuleDynamic(gameid,lobbyid)
    if self._gameRule and self._optionItem then
        self._gameRule:removeAllChildren()
        self:clearNodetable()
        local gameRuleData = self:getTeaHouseGameRuleList(gameid,lobbyid)
        if gameRuleData == nil then
            return
        end
        --当前游戏是否弃用天枢的T1
        self._isT1Disuse = false
        if gameRuleData["isT1Disuse"] then
            self._isT1Disuse = true
        end
        --当前游戏天枢的T几是否是四个为一组的使用
        self._isFourAset = false
        if gameRuleData["isFourAset"] then
            self._isFourAset = true
        end
        --当前游戏消耗和人数相关时
        self._isCostRelativePlayers = false
        if gameRuleData["isCostRelativePlayers"] then
            self._isCostRelativePlayers = true
        end
        --当前后台t几是乱七八糟不按常理的则需配置一下字段，后续直接读取局数下的t值
        self._isTChaos = false
        if gameRuleData["isTChaos"] then
            self._isTChaos = true
        end

        --当前游戏规则配置版本号（默认0）
        self._gameRuleVersion = 0
        if gameRuleData["gameRuleVersion"] then
            self._gameRuleVersion = gameRuleData["gameRuleVersion"]
        end
        local gameruleExtraParam = self:getGameidAndkeyCacheInfo()
        local gameRuleVersionCur = XH.userDefault:getValue(XH.userDefault.KEY_ID.GAMERULE_VERSION, 0, gameruleExtraParam) 
        if tonumber(self._gameRuleVersion) ~= gameRuleVersionCur then
            local userDefaultXMLString  = cc.FileUtils:getInstance():getStringFromFile(cc.UserDefault:getXMLFilePath())
            local tableKey = self:getXmlKey(userDefaultXMLString)
            for Index = 1, #tableKey do
                local pos1
                local pos2
                pos1, pos2 = string.find(tableKey[Index], "gameRule"..self._gameID)
                if pos1 and pos2 then
                    cc.UserDefault:getInstance():deleteValueForKey(tableKey[Index])
                end
            end
        end
        --缓存当前游戏规则配置版本号（默认0）
        XH.userDefault:setValue(XH.userDefault.KEY_ID.GAMERULE_VERSION, tonumber(self._gameRuleVersion), gameruleExtraParam) 

        --该显示的所有选项表
        local showOptiondsTable = {}
        --选择大类
        if gameRuleData["categories"] then
            if self._categoriesIndex then
                showOptiondsTable = gameRuleData["categories"][self._categoriesIndex]
            else
                showOptiondsTable = gameRuleData["categories"][gameRuleData["defaultchoose"]]
                local savedCategoriesIndex = XH.userDefault:getValue(XH.userDefault.KEY_ID.GAMERULE_CATEGORIE_SELECT, 0 , self:getGameidAndkeyCacheInfo() )
                if savedCategoriesIndex ~= 0 then
                    self._categoriesIndex = savedCategoriesIndex
                    showOptiondsTable = gameRuleData["categories"][savedCategoriesIndex]
                end
            end
        else
            showOptiondsTable = gameRuleData
        end

        --优化：如果是新增玩法，并且是默认选中，并且玩家没存储过，设置存储
        local gameruleCacheExistExtraParam = { gameID = self._gameID, categoriesIndex = self._categoriesIndex, keyCacheInfo = self._keyCacheInfo }
        self:migrateTrustTimeCache()
        local isCacheGameRule = XH.userDefault:getValue(XH.userDefault.KEY_ID.GAMERULE_CACHE_EXIST, false, gameruleCacheExistExtraParam)
        if isCacheGameRule then
            self:updateDefaultChoseWithCache()
        end

        for playType, playTypeData in pairsByKeys(showOptiondsTable) do
            if playTypeData["type"] == "radio" then
                --同个类型的单选框存在同一个table中，即人数的节点存在同一个
                radioTable[#radioTable + 1] = {}
            end
            for line, lineData in pairsByKeys(playTypeData["ctrls"]) do
                local newOptionItem
                if playTypeData["type"] == "radio" then
                    newOptionItem = self._optionItem:clone()
                    if playTypeData["nodeName"] == "playCount" or playTypeData["nodeName"] == "playerCount" then
                        newOptionItem:setName(playTypeData["nodeName"] .. line)
                    else
                        newOptionItem:setName(playTypeData["nodeName"])
                    end
                    self._gameRule:addChild(newOptionItem)
                    self:setOptions(playTypeData, newOptionItem, line, playType)
                elseif playTypeData["type"] == "checkbox" then
                    newOptionItem = self._optionItem:clone()
                    if playTypeData["nodeName"] == "playCount" or playTypeData["nodeName"] == "playerCount" then
                        newOptionItem:setName(playTypeData["nodeName"] .. line)
                    else
                        newOptionItem:setName(playTypeData["nodeName"])
                    end
                    self._gameRule:addChild(newOptionItem)
                    self:setOptions(playTypeData, newOptionItem, line, playType)
                elseif playTypeData["type"] == "textField" then
                    newOptionItem = self._optionItem:clone()
                    newOptionItem:setName(playTypeData["nodeName"])
                    self._gameRule:addChild(newOptionItem)
                    self:setTextField(playTypeData, newOptionItem, line)
                end
                local tempText = ccui.Helper:seekNodeByName(newOptionItem, KW_ITEM_TEXT)
                if not playTypeData["text"] or playTypeData["text"] == "" then
                    tempText:setVisible(false)
                else
                    tempText:setText(playTypeData["text"])
                    tempText:setVisible(tonumber(line) == 1)
                end
            end
        end
    end
    --判断本地是否缓存了按钮选择
    local gameruleCacheExistExtraParam = { gameID = self._gameID, categoriesIndex = self._categoriesIndex, keyCacheInfo = self._keyCacheInfo }
    local isCacheGameRule = XH.userDefault:getValue(XH.userDefault.KEY_ID.GAMERULE_CACHE_EXIST, false, gameruleCacheExistExtraParam)
    if isCacheGameRule then
        --加载完选项之后更新和联动值相关的节点
        self:updateLinkageNodeBylinkageLevelValue()
    else
        --加载默认选项
        self:setDefaultOptions()
        -- 没有缓存，在设置默认选项之后，更新和联动值相关的节点
        self:updateLinkageNodeBylinkageLevelValue()
    end
    self:updateCostTypeLine()
    --记录本地是否缓存了按钮选择
    XH.userDefault:setValue(XH.userDefault.KEY_ID.GAMERULE_CACHE_EXIST,  true, gameruleCacheExistExtraParam)
    --更新房卡消耗的显示
    self:updateShowCostInfo()
    --刷新列表容器视图
    self._gameRule:refreshView()
    XH.lobby:getModule("GamePlayReach"):refreshRuleRedDots(self, self._gameID, radioTable, checkBoxTable)
end

function TeaHouseCreateBoxRoomView:getTeaHouseGameRuleList(gameid,lobbyid)
    local gameRuleList = TeaHouse.ReadGameListAndRuleConfig.loadTeaHouseGameRule( lobbyid or TeaHouse.BridgeData.getLobbyID(), gameid)
    if not gameRuleList then
        return
    end
    if not gameRuleList.categories or not gameRuleList.categories[1] then
        return gameRuleList
    end

    --可以选择消耗方式的区才根据消耗方式来显示，否则根据json配置表显示
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if SetupConfig.IsFixedPayType then
        ---fyh
        if self._payModeType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON then
            for categoriesIndex, categories in ipairs(gameRuleList["categories"]) do
                for nodeStr, nodeData in pairs(categories) do
                    if (nodeData.nodeName and nodeData.nodeName == "costType") or string.find(nodeStr, "costType") or string.find(nodeStr, "CostType") or string.find(nodeStr, "costtype") then
                        gameRuleList.categories[categoriesIndex][nodeStr] = self:createPayTypeConfInFixedPayType(gameRuleList.categories[categoriesIndex][nodeStr])
                        break
                    end
                end
            end
        end
        ---fyh end
        return gameRuleList
    end
    for categoriesIndex, categories in ipairs(gameRuleList["categories"]) do
        for nodeStr, nodeData in pairs(categories) do
            if (nodeData.nodeName and nodeData.nodeName == "costType") or string.find(nodeStr, "costType") or string.find(nodeStr, "CostType") or string.find(nodeStr, "costtype") then
                gameRuleList.categories[categoriesIndex][nodeStr] = nil
                break
            end
        end
        local bHavePayType, payTypeData = self:createPayTypeConf()
        if bHavePayType then
            gameRuleList.categories[categoriesIndex]["100payTypeData"] = payTypeData
        end

        -- local bHaveRoomRate, roomRateData = self:createRoomRateConf()
        -- if bHaveRoomRate then
        --     gameRuleList.categories[categoriesIndex]["101roomRate"] = roomRateData
        -- end
    end
    return gameRuleList
end

function TeaHouseCreateBoxRoomView:createRoomRateConf()
    if not self._payTypeTable then
        return false, nil
    end
    if TeaHouse.LOBBY_ID.SHAOXING3D == TeaHouse.BridgeData.getLobbyID() then
        return false, nil
    end
    local bFangFeiMode = false
    for i, v in ipairs(self._payTypeTable) do
        if v == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA
        or v == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_WINNER then
            bFangFeiMode = true
            break
        end
    end
    if not bFangFeiMode then
        return false, nil
    end
    local roomRateData = {
        text = "比赛场卡",
        nodeName = "roomRate",
        type = "textField",
        ctrls = {
            [1] = {
                {
                    nodeName = "roomCostInput",
                    ruleName = "chessfee",
                    ruleText = "比赛场卡",
                    decimalPlaces = 2,
                    defaultInput = 0,
                    text = "",
                    haveTips = "在输入框内输入您想设置的比赛场卡"
                }
            }
        }
    }
    return true, roomRateData
end

function TeaHouseCreateBoxRoomView:createPayTypeConfInFixedPayType(payTypeData)
    for key, value in ipairs(payTypeData.ctrls["1"]) do
        if value.costType == "aaCost" then
            value.nodeName = "PayType='999';PrevAA=1;"
            value.text = "平摊消耗"
        elseif value.costType == "allCost" then
            value.text = "冠军消耗"
        end
    end
    if not payTypeData.defaultchoose[1] then
        payTypeData.defaultchoose[1] = "PayType='0';"
    end
    return payTypeData
end

function TeaHouseCreateBoxRoomView:createPayTypeConf()
    local payTypeData = {
        text = "消耗",
        nodeName = "costType",
        type = "radio",
        defaultchoose = {
        },
        ctrls = {
            [1] = {
            }
        }
    }
    if self._payTypeTable then
        for i, v in ipairs(self._payTypeTable) do
            if v == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER then
                local tempPayData = {
                    nodeName = "PayType='0';",
                    text = "冠军消耗",
                    costType = "allCost"
                }
                if self._payModeType and self._payModeType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON then
                    tempPayData.text = "冠军消耗"
                end
                table.insert(payTypeData.ctrls[1], tempPayData)
                if not payTypeData.defaultchoose[1] then
                    payTypeData.defaultchoose[1] = "PayType='0';"
                end
            elseif v == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_AA then
                local tempPayData = {
                    nodeName = "PayType='1';",
                    text = "平摊消耗",
                    costType = "aaCost"
                }
                table.insert(payTypeData.ctrls[1], tempPayData)
                if not payTypeData.defaultchoose[1] then
                    payTypeData.defaultchoose[1] = "PayType='1';"
                end
            elseif v == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_ROOM_OWNER then
                local tempPayData = {
                    nodeName = "PayType='6';",
                    text = "房主消耗",
                    costType = "allCost"
                }
                table.insert(payTypeData.ctrls[1], tempPayData)
                if not payTypeData.defaultchoose[1] then
                    payTypeData.defaultchoose[1] = "PayType='6';"
                end
            elseif v == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_OWNER_CARD_AA then
                local tempPayData = {
                    nodeName = "PayType='7';",
                    text = "平摊消耗",
                    costType = "aaCost"
                }
                table.insert(payTypeData.ctrls[1], tempPayData)
                if not payTypeData.defaultchoose[1] then
                    payTypeData.defaultchoose[1] = "PayType='7';"
                end
            elseif v == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA then
                local tempPayData = {
                    nodeName = "PayType='20';",
                    text = "平摊消耗",
                    costType = "allCost", --均由领队付房卡
                    --下面是宁波需要加的字段
                    mustExistRule = "msutRule", 
                    mustExistRuleYes = "PlaymentType='1';"
                }
                --绍兴3d的名字和其他地区不统一
                if TeaHouse.LOBBY_ID.SHAOXING3D == TeaHouse.BridgeData.getLobbyID() then
                    tempPayData.text = "冠军消耗"
                    --绍兴比赛场消耗放到最前
                    table.insert(payTypeData.ctrls[1], 1, tempPayData)
                else
                    table.insert(payTypeData.ctrls[1], tempPayData)
                end
                if not payTypeData.defaultchoose[1] then
                    payTypeData.defaultchoose[1] = "PayType='20';"
                end
            elseif v == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_WINNER then
                local tempPayData = {
                    nodeName = "PayType='21';",
                    text = "冠军消耗",
                    costType = "allCost", --均由领队付房卡
                    --下面是宁波需要加的字段
                    mustExistRule = "msutRule", 
                    mustExistRuleYes = "PlaymentType='3';"
                }
                table.insert(payTypeData.ctrls[1], tempPayData)
                if not payTypeData.defaultchoose[1] then
                    payTypeData.defaultchoose[1] = "PayType='21';"
                end
            elseif v == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_AA then
                local tempPayData = {
                    nodeName = "PayType='22';",
                    text = "平摊消耗",
                    costType = "aaCost", 
                }
                table.insert(payTypeData.ctrls[1], tempPayData)
                if not payTypeData.defaultchoose[1] then
                    payTypeData.defaultchoose[1] = "PayType='22';"
                end
            elseif v == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_WIN then
                local tempPayData = {
                    nodeName = "PayType='23';",
                    text = "冠军消耗",
                    costType = "allCost", 
                }
                table.insert(payTypeData.ctrls[1], tempPayData)
                if not payTypeData.defaultchoose[1] then
                    payTypeData.defaultchoose[1] = "PayType='23';"
                end
            elseif v == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER_YUFU_MODE_AA then
                local tempPayData = {
                    nodeName = "PayType='999';PrevAA=1;",
                    text = "平摊消耗",
                    costType = "aaCost", 
                }
                table.insert(payTypeData.ctrls[1], tempPayData)
                if not payTypeData.defaultchoose[1] then
                    payTypeData.defaultchoose[1] = "PayType='0';"
                end
            elseif v == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_AA then
                local tempPayData = {
                    nodeName = "PayType='24';",
                    text = "平摊消耗",
                    costType = "aaCost"
                }
                table.insert(payTypeData.ctrls[1], tempPayData)
                if not payTypeData.defaultchoose[1] then
                    payTypeData.defaultchoose[1] = "PayType='24';"
                end
            end
        end
        self:checkAddLastPayParam(payTypeData)
        return true, payTypeData
    end
    return false, nil
end

function TeaHouseCreateBoxRoomView:checkAddLastPayParam(payTypeData)
    if not TeaHouse.manager.teahouseData:isLastCost() then
        return
    end
    local info = payTypeData.ctrls[1]
    if info and #info > 0 then
        local tempPayData = info[1]
        if tempPayData.text == '冠军消耗' then
            tempPayData.text = '末位消耗'
            payTypeData.defaultchoose[1] = payTypeData.defaultchoose[1] .. "loser_cost=1;"
        end
    end
end

function TeaHouseCreateBoxRoomView:setTextField(playTypeData, newOptionItem, line)
    if not self._textFieldItem then
        return 
    end
    local lineData = playTypeData["ctrls"][line]
    local tmpCount = #lineData
    local optionNode = self._textFieldItem:clone()
    for optionIndex = 1, tmpCount do
        local tempText = ccui.Helper:seekNodeByName(optionNode, "KW_OPTION_ITEM_TEXT")
        if tempText then
            tempText:setText(lineData[optionIndex]["text"] or "")
        end

        --判断是否按钮有提示信息
        if lineData[optionIndex]["haveTips"] then
            local tempOptionText = ccui.Helper:seekNodeByName(optionNode, KW_OPTION_ITEM_TEXT)
            local tempTipText = ccui.Helper:seekNodeByName(optionNode, KW_TEXT_TIPS)
            local tempTipPaoPao = ccui.Helper:seekNodeByName(optionNode, KW_PIC_TIPS_PAOPAO)
            tempTipText:setText(lineData[optionIndex]["haveTips"])

            local optionTextSize = tempOptionText:getContentSize()
            local tipTextSize = tempTipText:getContentSize()
            local tipPaoPaoSize = tempTipPaoPao:getContentSize()

            tempTipPaoPao:setContentSize(tipTextSize.width + 40, tipTextSize.height + 40)
            tempTipText:setPositionY((tipTextSize.height + 40) / 2)

            local tempTipsPanel = ccui.Helper:seekNodeByName(optionNode, KW_PANEL_TIPS)
            tempTipsPanel:setVisible(true)
            tempTipsPanel:setPositionX(optionTextSize.width + 10)
            tempTipsPanel:addTouchEventListener(handler(self, self.onTouchEventTipsBtn))
        end

        local editBox = ccui.EditBox:create(cc.size(210,55), "tea_house_createroom_textfield.png")
        if editBox then
            editBox:setAnchorPoint(cc.p(0, 0.5))
            editBox:setPosition(cc.p(20, 40))
            editBox:setFontSize(40)
            editBox:setFontColor(cc.c3b(255,250,235))
            editBox:setText(tostring(lineData[optionIndex]["defaultInput"] or 0))
            editBox:setInputMode(cc.EDITBOX_INPUT_MODE_NUMERIC)
            editBox:registerScriptEditBoxHandler(function(eventName)
                if eventName == "changed" then
                    local tempText = editBox:getText()
                    if tempText ~= nil then
                        local tempTextArr = string.split(tempText, ".")
                        local decimalPlaces = lineData[optionIndex]["decimalPlaces"] or 2
                        if #tempTextArr >= 2 and string.len(tempTextArr[#tempTextArr]) > decimalPlaces then
                            TeaHouse.TipTool.showToast("仅允许"..decimalPlaces.."位小数")
                            editBox:setText(string.sub(tempText, 1, -2))
                            return 
                        end
                    end
                elseif eventName == "began" then
                    
                elseif eventName == "ended" or eventName == "return" then
                    
                end
            end)
            inputBoxTable[#inputBoxTable + 1] = {
                node = editBox,
                nodeConfig = lineData[optionIndex]
            }
            optionNode:addChild(editBox)
        end

        newOptionItem:addChild(optionNode, 1)
        optionNode:setPosition(cc.p(TextFieldPosition, 50))
        optionNode:setName(lineData[optionIndex]["nodeName"])
    end
end

--动态加载单个选项（单选复选）
function TeaHouseCreateBoxRoomView:setOptions(playTypeData, newOptionItem, line, keyName)
    local optionNode
    if self._radioItem and self._checkBoxItem then
        local lineData = playTypeData["ctrls"][line]
        local tmpCount = #lineData
        for optionIndex = 1, tmpCount do
            if lineData[optionIndex]["text"] == "强制定位" then
                lineData[optionIndex]["text"] = "防作弊"
            end
            if playTypeData["type"] == "radio" then
                optionNode = self._radioItem:clone()
                local tempText = ccui.Helper:seekNodeByName(optionNode, KW_OPTION_ITEM_TEXT)
                if #lineData[optionIndex]["text"] > 24 then
                    tempText:setFontSize(OptionfntSize.small)
                end
                tempText:setText(lineData[optionIndex]["text"])
                --保存单选框节点
                local tmp = {}
                tmp["node"] = optionNode
                tmp["nodeConfig"] = lineData[optionIndex]
                table.insert(radioTable[#radioTable], tmp)

                if lineData[optionIndex]["categorieIndex"] then
                    if categorieTable[#categorieTable + 1] == nil then
                        categorieTable[#categorieTable + 1] = {}
                    end
                    categorieTable[#categorieTable]["node"] = optionNode
                    categorieTable[#categorieTable]["nodeConfig"] = lineData[optionIndex]
                end
            elseif playTypeData["type"] == "checkbox" then
                optionNode = self._checkBoxItem:clone()
                local tempText = ccui.Helper:seekNodeByName(optionNode, KW_OPTION_ITEM_TEXT)
                if #lineData[optionIndex]["text"] > 24 then
                    tempText:setFontSize(OptionfntSize.small)
                end
                tempText:setText(lineData[optionIndex]["text"])
                --保存复选框节点
                if checkBoxTable[#checkBoxTable + 1] == nil then
                    checkBoxTable[#checkBoxTable + 1] = {}
                end
                checkBoxTable[#checkBoxTable]["node"] = optionNode
                checkBoxTable[#checkBoxTable]["nodeConfig"] = lineData[optionIndex]
            end
            --判断是否按钮有提示信息
            if lineData[optionIndex]["haveTips"] then
                local tempOptionText = ccui.Helper:seekNodeByName(optionNode, KW_OPTION_ITEM_TEXT)
                local tempTipText = ccui.Helper:seekNodeByName(optionNode, KW_TEXT_TIPS)
                local tempTipPaoPao = ccui.Helper:seekNodeByName(optionNode, KW_PIC_TIPS_PAOPAO)
                tempTipText:setText(lineData[optionIndex]["haveTips"])

                local optionTextSize = tempOptionText:getContentSize()
                local tipTextSize = tempTipText:getContentSize()
                local tipPaoPaoSize = tempTipPaoPao:getContentSize()

                tempTipPaoPao:setContentSize(tipTextSize.width + 40, tipTextSize.height + 40)
                tempTipText:setPositionY((tipTextSize.height + 40) / 2)

                local tempTipsPanel = ccui.Helper:seekNodeByName(optionNode, KW_PANEL_TIPS)
                tempTipsPanel:setVisible(true)
                tempTipsPanel:setPositionX(optionTextSize.width + 10)
                if lineData[optionIndex]["haveTipsDiffX"] then
                    XH.UITool.setPositionX(optionNode, KW_PANEL_TIPS, optionTextSize.width + lineData[optionIndex]["haveTipsDiffX"] + 10)
                end
                tempTipsPanel:addTouchEventListener(handler(self, self.onTouchEventTipsBtn))

                if optionIndex ~= tmpCount then
                    optionNode:setLocalZOrder(tmpCount - optionIndex + 1)
                else
                    if optionIndex >= 3 then
                        local xPosition = tempTipPaoPao:getPositionX()
                        tempTipPaoPao:setPositionX(xPosition - (tipTextSize.width + 100))
                        tempTipPaoPao:setPositionY(optionNode:getContentSize().height + 20)
                    end
                end
            end
            if lineData[optionIndex]["tag"] and optionNode then
                cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/Common/Image/common_discount/common_tag.plist")
                self:createFlagAfterNode(optionNode, lineData[optionIndex]["tag"] .. ".png")
            end
            --保存条件，联动和联动相关等需要保存的节点
            self:saveCanChangeNode(lineData, optionIndex, optionNode)

            newOptionItem:addChild(optionNode)
            optionNode:setPosition(cc.p(buttonPosition[tmpCount][optionIndex], 50))
            if lineData[optionIndex]["diffNodeX"] then
                optionNode:setPosition(cc.p(buttonPosition[tmpCount][optionIndex] + lineData[optionIndex]["diffNodeX"], 50))
            end
            optionNode:setName(lineData[optionIndex]["nodeName"])
            local isSelected = self:getCacheButtonState(optionNode:getName())
            self:setSelectState(optionNode, isSelected)

            -- 下拉框逻辑
            if lineData[optionIndex]["dropdown"] then
                local textNode = XH.UITool.seekNodeByName(optionNode, KW_OPTION_ITEM_TEXT)
                local index = nil -- 选中的index
                local defaultIndex = nil
                local dropdownString = self:getCacheDropDownState(lineData[optionIndex]["nodeName"])
                local items = {}
                for i, item in ipairs(lineData[optionIndex]["dropdown"]) do
                    table.insert(items, {text = item.text})
                    if item.nodeName == dropdownString then
                        index = i
                    end
                    if item.nodeName == lineData[optionIndex]["defaultchoose"] then
                        defaultIndex = i
                    end
                end
                if index == nil then
                    if defaultIndex ~= nil then
                        index = defaultIndex -- 有默认，用默认
                    else
                        index = 1 -- 保底值
                    end
                end
                local csbNode = cc.CSLoader:createNode("cocosStudio/Common/CSB/DropDown.csb")
                csbNode:tryAddLuaComponent(cc.ext.CompDropDown,{items = items, onSelect = function(index, item)
                    self:onTouchEventRadio(optionNode, ccui.CheckBoxEventType.selected)
                    self:setCacheDropDownState(lineData[optionIndex]["nodeName"], lineData[optionIndex]["dropdown"][index].nodeName)
                    optionNode.otherData = lineData[optionIndex]["dropdown"][index]
                end, defaultSelectIndex = index})
                optionNode.otherData = lineData[optionIndex]["dropdown"][index]
                textNode:addChild(csbNode)
                csbNode:setPosition(cc.p(textNode:getContentSize().width, textNode:getContentSize().height / 2))
            end

            if tonumber(string.match(optionNode:getName(), "%d")) == 2 and string.find(optionNode:getName(), "playerCount") then
                self:initFourToTwoPlayerBtn(optionNode, tonumber(string.match(keyName, "%d")), lineData[optionIndex]["haveTips"] ~= nil )
            end

            -- 推广活动默认勾选
            if self._isPromote and TeaHouse.PromoteConfig[XH.areaData:getLobbyID()] ~= nil and TeaHouse.PromoteConfig[XH.areaData:getLobbyID()].NODENAME ~= nil then
                local promoteRule = TeaHouse.PromoteConfig[XH.areaData:getLobbyID()].NODENAME
                if optionNode:getName() == promoteRule then
                    self:setSelectState(optionNode,true)
                end
            end

            local newPlayTypeNodes = GameNewTypeConfiger:getNewPlayTypeNodeByGameID(self._gameID)
            if newPlayTypeNodes and next(newPlayTypeNodes) then
                self:initNewPlayTypeNode(optionNode, newPlayTypeNodes)
            end
        end
    end
end

--保存条件，联动和联动相关等需要保存的节点
function TeaHouseCreateBoxRoomView:saveCanChangeNode(lineData, optionIndex, optionNode)
    if lineData[optionIndex]["condition"] then
        if conditionTable[#conditionTable + 1] == nil then
            conditionTable[#conditionTable + 1] = {}
        end
        conditionTable[#conditionTable]["node"] = optionNode
        conditionTable[#conditionTable]["nodeConfig"] = lineData[optionIndex]
    end
    if lineData[optionIndex]["mustExistRule"] then
        if mustExistRuleTable[#mustExistRuleTable + 1] == nil then
            mustExistRuleTable[#mustExistRuleTable + 1] = {}
        end
        mustExistRuleTable[#mustExistRuleTable]["node"] = optionNode
        mustExistRuleTable[#mustExistRuleTable]["nodeConfig"] = lineData[optionIndex]
    end
    if lineData[optionIndex]["costType"] then
        if costTypeTable[#costTypeTable + 1] == nil then
            costTypeTable[#costTypeTable + 1] = {}
        end
        costTypeTable[#costTypeTable]["node"] = optionNode
        costTypeTable[#costTypeTable]["nodeConfig"] = lineData[optionIndex]
    end
    if lineData[optionIndex]["allCost"] then
        if playCountTable[#playCountTable + 1] == nil then
            playCountTable[#playCountTable + 1] = {}
        end
        playCountTable[#playCountTable]["node"] = optionNode
        playCountTable[#playCountTable]["nodeConfig"] = lineData[optionIndex]
    end
    if lineData[optionIndex]["linkageLevel"] then
        if linkageLevelTable[lineData[optionIndex]["linkageLevel"]] == nil then
            linkageLevelTable[lineData[optionIndex]["linkageLevel"]] = {}
        end
        table.insert(linkageLevelTable[lineData[optionIndex]["linkageLevel"]], optionNode)
    end
    if lineData[optionIndex]["prohibit"] then
        for key, value in ipairs(lineData[optionIndex]["prohibit"]) do
            if prohibitTable[value] == nil then
                prohibitTable[value] = {}
            end
            table.insert(prohibitTable[value], optionNode)
        end
    end
    if lineData[optionIndex]["prohibitMeanwhile"] then
        if prohibitMeanwhileTable[#prohibitMeanwhileTable + 1] == nil then
            prohibitMeanwhileTable[#prohibitMeanwhileTable + 1] = {}
        end
        prohibitMeanwhileTable[#prohibitMeanwhileTable]["node"] = optionNode
        prohibitMeanwhileTable[#prohibitMeanwhileTable]["nodeConfig"] = lineData[optionIndex]
    end
    if lineData[optionIndex]["prohibitSelect"] then
        if prohibitSelectTable[#prohibitSelectTable + 1] == nil then
            prohibitSelectTable[#prohibitSelectTable + 1] = {}
        end
        prohibitSelectTable[#prohibitSelectTable]["node"] = optionNode
        prohibitSelectTable[#prohibitSelectTable]["nodeConfig"] = lineData[optionIndex]
    end
    if lineData[optionIndex]["prohibitAndSelect"] then
        for key, value in ipairs(lineData[optionIndex]["prohibitAndSelect"]) do
            if prohibitAndSelectTable[value] == nil then
                prohibitAndSelectTable[value] = {}
            end
            table.insert(prohibitAndSelectTable[value], optionNode)
        end
    end
    if lineData[optionIndex]["hideSelect"] then
        if hideSelectTable[#hideSelectTable + 1] == nil then
            hideSelectTable[#hideSelectTable + 1] = {}
        end
        hideSelectTable[#hideSelectTable]["node"] = optionNode
        hideSelectTable[#hideSelectTable]["nodeConfig"] = lineData[optionIndex]
    end
    if lineData[optionIndex]["hide"] then
        for key, value in ipairs(lineData[optionIndex]["hide"]) do
            if hideTable[value] == nil then
                hideTable[value] = {}
            end
            table.insert(hideTable[value], optionNode)
        end
    end
    if lineData[optionIndex]["show"] then
        for key, value in ipairs(lineData[optionIndex]["show"]) do
            if showTable[value] == nil then
                showTable[value] = {}
            end
            table.insert(showTable[value], optionNode)
        end
    end
    if lineData[optionIndex]["linkSelect"] then
        for key, value in ipairs(lineData[optionIndex]["linkSelect"]) do
            if linkSelectedTable[value] == nil then
                linkSelectedTable[value] = {}
            end
            table.insert(linkSelectedTable[value], optionNode)
        end
    end
    if lineData[optionIndex]["linkUnSelect"] then
        for key, value in ipairs(lineData[optionIndex]["linkUnSelect"]) do
            if linkUnSelectedTable[value] == nil then
                linkUnSelectedTable[value] = {}
            end
            table.insert(linkUnSelectedTable[value], optionNode)
        end
    end
    if lineData[optionIndex]["unSelectlinkageLevel"] then
        if unSelectlinkageLevelTable[lineData[optionIndex]["unSelectlinkageLevel"]] == nil then
            unSelectlinkageLevelTable[lineData[optionIndex]["unSelectlinkageLevel"]] = {}
        end
        table.insert(unSelectlinkageLevelTable[lineData[optionIndex]["unSelectlinkageLevel"]], optionNode)
    end
    if lineData[optionIndex]["linkProhibit"] then
        for key, value in ipairs(lineData[optionIndex]["linkProhibit"]) do
            if linkProhibitTable[value] == nil then
                linkProhibitTable[value] = {}
            end
            table.insert(linkProhibitTable[value], optionNode)
        end
    end
end

function TeaHouseCreateBoxRoomView:updateDefaultChoseWithCache()
    local gameRuleData = self:getTeaHouseGameRuleList(self._gameID,self._tmpLobbyID)
    if gameRuleData == nil then return end
    --该显示的所有选项表
    local showOptiondsTable = {}
    --选择大类
    if gameRuleData["categories"] then
        if self._categoriesIndex then
            showOptiondsTable = gameRuleData["categories"][self._categoriesIndex]
        else
            showOptiondsTable = gameRuleData["categories"][gameRuleData["defaultchoose"]]
        end
    else
        showOptiondsTable = gameRuleData
    end
    for playType, playTypeData in pairsByKeys(showOptiondsTable) do
        if playTypeData["defaultchoose"] then
            for key, nodeName in ipairs(playTypeData["defaultchoose"]) do
                local extraParam = {}
                extraParam.gameID = self._gameID
                extraParam.categoriesIndex = self._categoriesIndex or 1
                extraParam.nodeName = nodeName
                extraParam.keyCacheInfo = self._keyCacheInfo
                local bChose1 = XH.userDefault:getValue(XH.userDefault.KEY_ID.GAMERULE_CACHE_BUTTON_STATE, false, extraParam)
                local bChose2 = XH.userDefault:getValue(XH.userDefault.KEY_ID.GAMERULE_CACHE_BUTTON_STATE, true, extraParam)
                if bChose1 == false and bChose2 == true then
                    XH.userDefault:setValue(XH.userDefault.KEY_ID.GAMERULE_CACHE_BUTTON_STATE, true, extraParam)
                end
            end
        end
    end
end

--加载默认选项
function TeaHouseCreateBoxRoomView:setDefaultOptions()
    local gameRuleData = self:getTeaHouseGameRuleList(self._gameID,self._tmpLobbyID)
    if gameRuleData == nil then return end
    --该显示的所有选项表
    local showOptiondsTable = {}
    --选择大类
    if gameRuleData["categories"] then
        if self._categoriesIndex then
            showOptiondsTable = gameRuleData["categories"][self._categoriesIndex]
        else
            showOptiondsTable = gameRuleData["categories"][gameRuleData["defaultchoose"]]
        end
    else
        showOptiondsTable = gameRuleData
    end
    for playType, playTypeData in pairsByKeys(showOptiondsTable) do
        if playTypeData["defaultchoose"] then
            for key, nodeName in ipairs(playTypeData["defaultchoose"]) do
                local optionNode = ccui.Helper:seekNodeByName(self._gameRule, nodeName)
                if optionNode then
                    if playTypeData["type"] == "radio" then
                        self:onTouchEventRadio(optionNode, ccui.CheckBoxEventType.selected, true)
                    elseif playTypeData["type"] == "checkbox" then
                        self:onTouchEventCheckBox(optionNode, ccui.CheckBoxEventType.selected, true)
                    end

                end
            end
        end
    end
end

--设置默认选择的游戏
function TeaHouseCreateBoxRoomView:setDefaultSelectGameDynamic(defaultGameId)
    local gameID = XH.userDefault:getValue(XH.userDefault.KEY_ID.LAST_CHOOSE_GAME_ID, defaultGameId, { keyCacheInfo = self._keyCacheInfo })
    self:setSelectGameDynamic(gameID)
end

function TeaHouseCreateBoxRoomView:setSelectGameDynamic(gameId)
    local gameBtnNode = ccui.Helper:seekNodeByName(self._listViewGames, gameId)
    if gameBtnNode then
        self:onTouchEventChooseGameDynamic(gameBtnNode, ccui.TouchEventType.ended, true)
    end
end

function TeaHouseCreateBoxRoomView:checkSelectGameDynamicLegal()
    local isLegal = false
    for key, value in pairs(self._listViewGames:getChildren()) do
        if value then
            if not value:isEnabled() then
                isLegal = true
            end
        end
    end
    if  not isLegal then
        local gameIdList = TeaHouse.BridgeData.getTeaHouseRoomGameList()
        local firstGameId = 0
        for index, gameid in pairs(gameIdList) do
            firstGameId = gameid
            break
        end
        self:setSelectGameDynamic(firstGameId)
    end
end

--点击单选按钮
function TeaHouseCreateBoxRoomView:onTouchEventRadio(send, eventType, isDefault)
    --加载默认选项时不需要音效
    if isDefault == nil then
        -- AudioEngine.playEffect(KW_PATH_LOBBY_SOUND .. KW_SOUND_BTN_DOWN)
        XH.lobby:getModule("GamePlayReach"):onRuleOptionSelected(send, self._gameID)
    end
    if eventType == ccui.CheckBoxEventType.selected then
        --判断点击的是否是大类的按钮
        local isCategoriesBtn = false
        for k, v in pairs(categorieTable) do
            if v["node"] == send and isDefault == nil then
                --记录所选游戏的大类
                XH.userDefault:setValue(XH.userDefault.KEY_ID.GAMERULE_CATEGORIE_SELECT, tonumber(v["nodeConfig"]["categorieIndex"]) , self:getGameidAndkeyCacheInfo())
                self._categoriesIndex = v["nodeConfig"]["categorieIndex"]
                isCategoriesBtn = true
            end
        end
        local tmpNodeTable = {}  --点击的节点的节点组
        for count, nodeTable in pairs(radioTable) do
            for k, nodeInfo in pairs(nodeTable) do
                if nodeInfo["node"] == send then
                    tmpNodeTable = nodeTable
                    break
                end
            end
        end
        for k, nodeInfo in pairs(tmpNodeTable) do
            if nodeInfo["node"] == send then
                self:setSelectState(nodeInfo["node"], true)
            else
                if nodeInfo["node"]:isBright() and nodeInfo["node"]:isEnabled() then
                    self:setSelectState(nodeInfo["node"], false)
                end
            end
        end
        for k, nodeTable in pairs(linkageLevelTable) do
            for key, node in pairs(nodeTable) do
                if node == send then
                    --更新联动相关联节点
                    self:updateLinkageNode(node)
                end
            end
        end
        for k, nodeTable in pairs(unSelectlinkageLevelTable) do
            for key, node in pairs(nodeTable) do
                if node == send then
                    --更新联动相关联节点
                    self:updateLinkageNode(node)
                end
            end
        end
        --是大类按钮就重新刷新按钮选项
        if isCategoriesBtn then
            self:loadGameRuleDynamic(self._gameID)
            return
        end
    elseif eventType == ccui.CheckBoxEventType.unselected then
        self:setSelectState(send, true)
    end
    self:handleFirstSelectAutoChooseRadio(send, eventType, isDefault)
    --更新房卡消耗的显示
    self:updateShowCostInfo()
end

--首次勾选某个 checkbox 时,自动设置另一个 radio 节点为默认值
--30066:首次勾选"缺二色"-->封顶默认"12封顶"
--30133/30145:首次勾选"缺二门"-->封顶默认"每局64封顶"
local FIRST_SELECT_AUTO_CHOOSE_RULES = {
    [30066] = { source = "DelColor2",    target = "FengDing='12';",     flag = "_FirstSelectDelColor2_" },
    [30133] = { source = "isQueYiMen2=", target = "FengDingType='64';", flag = "_FirstSelectIsQueYiMen2_" },
    [30145] = { source = "isQueYiMen2=", target = "FengDingType='64';", flag = "_FirstSelectIsQueYiMen2_" },
    [30109] = {
        { source = "DelColor",  target = "FengDing='60';", flag = "_FirstSelectDelColor_" },
        { source = "DelColor2", target = "FengDing='60';", flag = "_FirstSelectDelColor2_" },
    },
    [30025] = { source = "DelColor='2';", target = "winLostLmt='100';", flag = "_FirstSelectIsQueYiMen2_" },
}

--点击复选按钮
function TeaHouseCreateBoxRoomView:onTouchEventCheckBox(send, eventType, isDefault)
    --加载默认选项时不需要音效
    if isDefault == nil then
        -- AudioEngine.playEffect(KW_PATH_LOBBY_SOUND .. KW_SOUND_BTN_DOWN)
        if eventType == ccui.CheckBoxEventType.selected then
            XH.lobby:getModule("GamePlayReach"):onRuleOptionSelected(send, self._gameID)
        end
    end
    if eventType == ccui.CheckBoxEventType.selected then
        self:setSelectState(send, true)
    elseif eventType == ccui.CheckBoxEventType.unselected then
        self:setSelectState(send, false, true)
    end
    for k, nodeTable in pairs(linkageLevelTable) do
        for key, node in pairs(nodeTable) do
            if node == send then
                --更新联动相关联节点
                self:updateLinkageNode(node)
            end
        end
    end
    for k, nodeTable in pairs(unSelectlinkageLevelTable) do
        for key, node in pairs(nodeTable) do
            if node == send then
                --更新联动相关联节点
                self:updateLinkageNode(node)
            end
        end
    end
    --首次勾选特定选项时,联动设置封顶默认值;其他情况使用本地上次选择的默认值
    self:handleFirstSelectAutoChooseRadio(send, eventType, isDefault)
    --更新房卡消耗的显示
    self:updateShowCostInfo()
end

--首次勾选某个 checkbox 时,自动联动设置封顶 radio 为指定默认值
function TeaHouseCreateBoxRoomView:handleFirstSelectAutoChooseRadio(send, eventType, isDefault)
    if isDefault ~= nil then return end
    if eventType ~= ccui.CheckBoxEventType.selected then return end
    if not send then return end
    local rules = FIRST_SELECT_AUTO_CHOOSE_RULES[self._gameID]
    if not rules then return end
    if rules.source then
        rules = { rules }
    end
    for _, rule in ipairs(rules) do
        if send:getName() == rule.source and not self:getCacheButtonState(rule.flag) then
            local targetNode = XH.UITool.seekNodeByName(self._gameRule, rule.target)
            if targetNode and targetNode:isBright() and targetNode:isEnabled() then
                self:onTouchEventRadio(targetNode, ccui.CheckBoxEventType.selected, true)
            end
            self:setCacheButtonState(rule.flag, true)
            break
        end
    end
end

--点击Radio选项的文字
function TeaHouseCreateBoxRoomView:onTouchRadioOptionText(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    send = send:getParent()
    if send:isBright() and send:isSelected() == true then
        self:onTouchEventRadio(send, ccui.CheckBoxEventType.unselected)
    elseif send:isBright() and send:isSelected() == false then
        self:onTouchEventRadio(send, ccui.CheckBoxEventType.selected)
    end
end

--点击CheckBox选项的文字
function TeaHouseCreateBoxRoomView:onTouchCheckBoxOptionText(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    send = send:getParent()
    if send:isBright() and send:isSelected() == true then
        self:onTouchEventCheckBox(send, ccui.CheckBoxEventType.unselected)
    elseif send:isBright() and send:isSelected() == false then
        self:onTouchEventCheckBox(send, ccui.CheckBoxEventType.selected)
    end
end

--点击提示问号按钮
function TeaHouseCreateBoxRoomView:onTouchEventTipsBtn(send, eventType)
    if eventType == ccui.TouchEventType.began then
        -- AudioEngine.playEffect(KW_PATH_LOBBY_SOUND .. KW_SOUND_BTN_DOWN)
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local tipsNode = ccui.Helper:seekNodeByName(send, KW_PIC_TIPS_PAOPAO)
    if tipsNode then
        tipsNode:stopAllActions()
        local opacity = tipsNode:getOpacity()
        if opacity == 255 then
            tipsNode:setOpacity(0)
        else
            tipsNode:runAction(cc.Sequence:create(cc.FadeIn:create(0.2), cc.DelayTime:create(2), cc.FadeOut:create(0.2)))
        end
    end
    if send and send:getParent() and send:getParent():getParent() then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt2025101001, {page_item_id = send:getParent():getParent():getName()})
    end
end

--加载完选项之后更新和联动值相关的节点
function TeaHouseCreateBoxRoomView:updateLinkageNodeBylinkageLevelValue()
    self:updateLinkageNode()
end

--因为比赛场内的消耗方式由领队设定，可能之前缓存选择的方式已经没了，导致消耗方式一个都没有选择
function TeaHouseCreateBoxRoomView:updateCostTypeLine()
    local costTypeNode = ccui.Helper:seekNodeByName(self._gameRule, "costType")
    if not costTypeNode then
        return
    end
    local allChildren = costTypeNode:getChildren()
    local bSelect = false
    local firstVisibleNode --第一个可见的节点
    for i = 2, #allChildren do
        if allChildren[i]:isVisible() then
            if allChildren[i]:isSelected() then
                bSelect = true
                break
            else
                --记录第一个可见的节点
                if not firstVisibleNode  then
                    firstVisibleNode = allChildren[i]
                end
            end
        end
    end
    if not bSelect and firstVisibleNode then
        self:setSelectState(firstVisibleNode, true)
    end
end

--更新联动相关联节点
function TeaHouseCreateBoxRoomView:updateLinkageNode(clicknode)
    local linknode
    --联动显示按钮和联动不选中按钮级别最低
    for k, v in pairs(linkageLevelValue) do
        local linkageLevel
        for level, levelnode in pairs(v) do
            linkageLevel = level
            linknode = levelnode
        end
        if showTable[linkageLevel] then
            for k, node in pairs(showTable[linkageLevel]) do
                local isSelected = self:getCacheButtonState(node:getName())
                self:setSelectState(node, isSelected)
                node:setBright(true)
                node:setTouchEnabled(true)
                node:setVisible(true)
            end
        end
        if linkUnSelectedTable[linkageLevel] then
            for k, node in pairs(linkUnSelectedTable[linkageLevel]) do
                if node ~= clicknode then
                    self:setSelectState(node, false)
                end
            end
        end
    end
    --隐藏和隐藏之后选中，禁用和禁用之后选中级别中等
    for k, v in pairs(linkageLevelValue) do
        local linkageLevel
        for level, levelnode in pairs(v) do
            linkageLevel = level
            linknode = levelnode
        end
        if hideTable[linkageLevel] then
            for k, node in pairs(hideTable[linkageLevel]) do
                local isSelect = node:isSelected()
                node:setVisible(false)
                --处理隐藏需要自动选中其他节点
                for k, hideSelectInfo in pairs(hideSelectTable) do
                    if hideSelectInfo["node"] == node then
                        --将隐藏的按钮缓存为未选中
                        self:setSelectState(node, false)
                        --隐藏按钮之后要选择的按钮设置为选中
                        if isSelect then
                            local needSelectNode = ccui.Helper:seekNodeByName(self._gameRule, hideSelectInfo["nodeConfig"]["hideSelect"])
                            if needSelectNode then
                                self:setSelectState(needSelectNode, true)
                            end
                        end
                    end
                end
            end
        end
        if prohibitTable[linkageLevel] then
            for k, node in pairs(prohibitTable[linkageLevel]) do
                local isSelect = node:isSelected()
                node:setSelected(false)
                node:setBright(false)
                node:setTouchEnabled(false)
                --处理禁用需要自动选中其他节点
                for k, prohibitSelectInfo in pairs(prohibitSelectTable) do
                    if prohibitSelectInfo["node"] == node then
                        --将禁用的按钮缓存为未选中
                        self:setSelectState(node, false)
                        --禁用按钮之后要选择的按钮设置为选中
                        if isSelect then
                            local needSelectNode = ccui.Helper:seekNodeByName(self._gameRule, prohibitSelectInfo["nodeConfig"]["prohibitSelect"])
                            if needSelectNode then
                                self:setSelectState(needSelectNode, true)
                            end
                        end
                    end
                end
                local childrenNode = node:getChildren()
                for i = 1, node:getChildrenCount() do
                    childrenNode[i]:setColor(cc.c3b(255, 255, 255))
                    childrenNode[i]:setTextColor(cc.c3b(160, 160, 160))
                end
            end
        end
        if prohibitAndSelectTable[linkageLevel] then
            for k, node in pairs(prohibitAndSelectTable[linkageLevel]) do
                local isSelect = node:isSelected()
                node:setSelected(true)
                node:setBright(false)
                node:setTouchEnabled(false)
                self:setSelectState(node, true)
                --处理禁用且选中自己的同时需要选中其他节点
                for k, prohibitSelectInfo in pairs(prohibitSelectTable) do
                    if prohibitSelectInfo["node"] == node then
                        --禁用按钮之后要选择的按钮设置为选中
                        if isSelect then
                            local needSelectNode = ccui.Helper:seekNodeByName(self._gameRule, prohibitSelectInfo["nodeConfig"]["prohibitSelect"])
                            if needSelectNode then
                                self:setSelectState(needSelectNode, true)
                            end
                        end
                    end
                end
                local childrenNode = node:getChildren()
                for i = 1, node:getChildrenCount() do
                    childrenNode[i]:setColor(cc.c3b(255, 255, 255))
                    childrenNode[i]:setTextColor(cc.c3b(160, 160, 160))
                end
            end
        end
    end
    --联动必须选中和联动必须禁用级别高
    for k, v in pairs(linkageLevelValue) do
        local linkageLevel
        for level, levelnode in pairs(v) do
            linkageLevel = level
            linknode = levelnode
        end
        if linkSelectedTable[linkageLevel] then
            for k, node in pairs(linkSelectedTable[linkageLevel]) do
                if linknode and linknode:isSelected() then
                    node:setBright(true)
                    node:setTouchEnabled(true)
                    self:setSelectState(node, true)
                end
            end
        end
        if linkProhibitTable[linkageLevel] then
            for k, node in pairs(linkProhibitTable[linkageLevel]) do
                if linknode and linknode:isSelected() then
                    local isSelect = node:isSelected()
                    node:setSelected(false)
                    node:setBright(false)
                    node:setTouchEnabled(false)
                    --处理禁用需要自动选中其他节点
                    for k, prohibitSelectInfo in pairs(prohibitSelectTable) do
                        if prohibitSelectInfo["node"] == node then
                            --将禁用的按钮缓存为未选中
                            self:setSelectState(node, false)
                            --禁用按钮之后要选择的按钮设置为选中
                            if isSelect then
                                local needSelectNode = ccui.Helper:seekNodeByName(self._gameRule, prohibitSelectInfo["nodeConfig"]["prohibitSelect"])
                                if needSelectNode then
                                    self:setSelectState(needSelectNode, true)
                                end
                            end
                        end
                    end
                    local childrenNode = node:getChildren()
                    for i = 1, node:getChildrenCount() do
                        childrenNode[i]:setColor(cc.c3b(255, 255, 255))
                        childrenNode[i]:setTextColor(cc.c3b(160, 160, 160))
                    end
                end
            end
        end
    end
    --多个联动值同时存在时才禁用某个按钮的级别最高
    for k, prohibitMeanwhileInfo in pairs(prohibitMeanwhileTable) do
        local isNeedProhibitCount = 0
        local prohibitMeanwhileCount = 0
        for i, value in pairs(prohibitMeanwhileInfo["nodeConfig"]["prohibitMeanwhile"]) do
            prohibitMeanwhileCount = prohibitMeanwhileCount + 1
            for index, v in pairs(linkageLevelValue) do
                if v[value] then
                    isNeedProhibitCount = isNeedProhibitCount + 1
                    break
                end
            end
        end
        local node = prohibitMeanwhileInfo["node"]
        if isNeedProhibitCount == prohibitMeanwhileCount then
            local isSelect = node:isSelected()
            node:setSelected(false)
            node:setBright(false)
            node:setTouchEnabled(false)
            --处理禁用需要自动选中其他节点
            for k, prohibitSelectInfo in pairs(prohibitSelectTable) do
                if prohibitSelectInfo["node"] == node then
                    --将禁用的按钮缓存为未选中
                    self:setSelectState(node, false)
                    --禁用按钮之后要选择的按钮设置为选中
                    if isSelect then
                        local needSelectNode = ccui.Helper:seekNodeByName(self._gameRule, prohibitSelectInfo["nodeConfig"]["prohibitSelect"])
                        if needSelectNode then
                            self:setSelectState(needSelectNode, true)
                        end
                    end
                end
            end
            local childrenNode = node:getChildren()
            for i = 1, node:getChildrenCount() do
                childrenNode[i]:setColor(cc.c3b(255, 255, 255))
                childrenNode[i]:setTextColor(cc.c3b(160, 160, 160))
            end
        end
    end
end

--设置按钮选择状态
function TeaHouseCreateBoxRoomView:setSelectState(node, isSelected, isCheckBox)
    local isChange = node:isSelected() ~= isSelected
    node:setSelected(isSelected)
    local childrenNode = node:getChildren()
    for i = 1, node:getChildrenCount() do
        childrenNode[i]:setColor(cc.c3b(255, 255, 255))
        childrenNode[i]:setTextColor(cc.c3b(163, 111, 72))
    end
    self:setCacheButtonState(node:getName(), isSelected)
    for k, nodeTable in pairs(unSelectlinkageLevelTable) do
        for key, tmpNode in pairs(nodeTable) do
            if node == tmpNode then
                if node:isSelected() then
                    --存储需要更新联动相关联节点的联动值
                    for index, singlelinkageLevelValue in pairs(linkageLevelValue) do
                        for level, levelnode in pairs(singlelinkageLevelValue) do
                            if levelnode == node and k == level then
                                table.remove(linkageLevelValue, index)
                            end
                        end
                    end
                else
                    --存储需要更新联动相关联节点的联动值
                    local tmpSinglelinkageLevelValue = {}
                    tmpSinglelinkageLevelValue[k] = node
                    local isExist = false
                    --屏蔽已经存在的节点联动
                    for index, nodeInfo in pairs(linkageLevelValue) do
                        if nodeInfo[k] == node then
                            isExist = true
                        end
                    end
                    if isExist == false then
                        table.insert(linkageLevelValue, tmpSinglelinkageLevelValue)
                    end
                end
            end
        end
    end
    for k, nodeTable in pairs(linkageLevelTable) do
        for key, tmpNode in pairs(nodeTable) do
            if node == tmpNode then
                if node:isSelected() then
                    --存储需要更新联动相关联节点的联动值
                    local tmpSinglelinkageLevelValue = {}
                    tmpSinglelinkageLevelValue[k] = node
                    local isExist = false
                    --屏蔽已经存在的节点联动
                    for index, nodeInfo in pairs(linkageLevelValue) do
                        if nodeInfo[k] == node then
                            isExist = true
                        end
                    end
                    if isExist == false then
                        table.insert(linkageLevelValue, tmpSinglelinkageLevelValue)
                    end
                else
                    --存储需要更新联动相关联节点的联动值
                    for index, singlelinkageLevelValue in pairs(linkageLevelValue) do
                        for level, levelnode in pairs(singlelinkageLevelValue) do
                            if levelnode == node and k == level then
                                table.remove(linkageLevelValue, index)
                            end
                        end
                    end
                end
            end
        end
    end
end

function TeaHouseCreateBoxRoomView:getCacheButtonStateExtraParam(nodeName)
    local extraParam = {}
    extraParam.gameID = self._gameID
    extraParam.categoriesIndex = self._categoriesIndex
    extraParam.nodeName = nodeName
    extraParam.keyCacheInfo = self._keyCacheInfo
    return extraParam
end

function TeaHouseCreateBoxRoomView:getCacheDropDownState(nodeName)
    local extraParam = self:getCacheButtonStateExtraParam(nodeName)
    return XH.userDefault:getValue(XH.userDefault.KEY_ID.GAMERULE_CACHE_DROPDOWN_STATE, "", extraParam)
end

function TeaHouseCreateBoxRoomView:setCacheDropDownState(nodeName, value)
    local extraParam = self:getCacheButtonStateExtraParam(nodeName)
    XH.userDefault:setValue(XH.userDefault.KEY_ID.GAMERULE_CACHE_DROPDOWN_STATE, value, extraParam)
end

--缓存按钮选中状态
function TeaHouseCreateBoxRoomView:setCacheButtonState(nodeName, isSelected)
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if not SetupConfig.IsFixedPayType then
        --支付方式不缓存
        if string.find(nodeName, "PayType") then
            return
        end
    end

    --去除xml不能出现的字符
    local extraParam = self:getCacheButtonStateExtraParam(nodeName)
    XH.userDefault:setValue(XH.userDefault.KEY_ID.GAMERULE_CACHE_BUTTON_STATE, isSelected, extraParam)
end

--读取按钮选中状态
function TeaHouseCreateBoxRoomView:getCacheButtonState(nodeName)
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if not SetupConfig.IsFixedPayType then
        --支付方式不读缓存
        if string.find(nodeName, "PayType") then
            return false
        end
    end
    if self._gameID == 30133 or self._gameID == 30145 then
        local newParam0 = "IsSysTrust='0';"
        local newParam15 = "IsSysTrust='15';"
        local oldParam = "IsSysTrust;"
        if string.find(nodeName, "IsSysTrust") then
            local extraParam = self:getCacheButtonStateExtraParam(oldParam)
            if XH.userDefault:getValue(XH.userDefault.KEY_ID.GAMERULE_CACHE_BUTTON_STATE, false, extraParam) then
                local extraParam15 = self:getCacheButtonStateExtraParam(newParam15)
                XH.userDefault:setValue(XH.userDefault.KEY_ID.GAMERULE_CACHE_BUTTON_STATE, true, extraParam15)
                local extraParam0 = self:getCacheButtonStateExtraParam(newParam0)
                XH.userDefault:setValue(XH.userDefault.KEY_ID.GAMERULE_CACHE_BUTTON_STATE, false, extraParam0)

                XH.userDefault:deleteValueForKey(XH.userDefault.KEY_ID.GAMERULE_CACHE_BUTTON_STATE, false, extraParam)
            end
        end
    end
    --去除xml不能出现的字符
    local extraParam = self:getCacheButtonStateExtraParam(nodeName)
    return XH.userDefault:getValue(XH.userDefault.KEY_ID.GAMERULE_CACHE_BUTTON_STATE, false, extraParam)
end

--旧版"超时托管"复选框(IsSysTrust)升级为托管单选(nTrustTime)的本地缓存迁移：
--之前勾选过超时托管则默认选中15秒，否则默认不托管。迁移后删除旧IsSysTrust数据，以"旧键是否存在"作为只迁移一次的依据。
function TeaHouseCreateBoxRoomView:migrateTrustTimeCache()
    if self._gameID ~= 30412 and self._gameID ~= 30415 then return end
    local KEY = XH.userDefault.KEY_ID.GAMERULE_CACHE_BUTTON_STATE
    local oldParam = self:getCacheButtonStateExtraParam("IsSysTrust")
    --用默认值取两次来区分"存了false"和"没存"：结果为false/true时说明旧键不存在，无需迁移
    local oldChecked = XH.userDefault:getValue(KEY, false, oldParam)
    local oldCheckedDefTrue = XH.userDefault:getValue(KEY, true, oldParam)
    if oldChecked == false and oldCheckedDefTrue == true then return end
    --旧键存在：oldChecked 即之前的超时托管勾选状态
    local param0 = self:getCacheButtonStateExtraParam("nTrustTime=0;")
    local param15 = self:getCacheButtonStateExtraParam("nTrustTime=15;")
    if oldChecked then
        XH.userDefault:setValue(KEY, true, param15)
        XH.userDefault:setValue(KEY, false, param0)
    else
        XH.userDefault:setValue(KEY, true, param0)
        XH.userDefault:setValue(KEY, false, param15)
    end
    --删除旧数据，避免重复迁移覆盖玩家在新UI的选择
    XH.userDefault:deleteValueForKey(KEY, false, oldParam)
end

local KW_PAYTYPE_NAME_TABLE = { "PayType", "moneyType", "TeaHousePayType" }
function TeaHouseCreateBoxRoomView:onTouchEventTeaHouseCreateBoxRoom(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if XH.playerData:checkNewRealName(self._gameID) ~= 0 then return end--实名限制
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local data = {}
    local gameRule, bRightRule = self:getGameRule()
    if not bRightRule then
        return
    end
    local zhRule = self:getBoxRoomRuleString()
    zhRule = string.gsub(zhRule, "/", ",")
    local gameNameList = TeaHouse.BridgeData.getGameNameList()
    local boxName = gameNameList[self._gameID]
    data.gameid = self._gameID

    --设置底分
    local luaString = "return {" .. gameRule .. "}"
    local ruleTable = loadstring(luaString)()
    

    data.base = 1
    for _, baseScoreName in pairs(TeaHouse.manager.teaHouseCreate.KW_BASE_SCORE_NAME_TABLE) do
        if ruleTable[baseScoreName] then
            data.base = tonumber(ruleTable[baseScoreName])
        end
    end

    data.cont = self:getPlayCount()
    data.type = 0
    local lobbyID = TeaHouse.BridgeData.getLobbyID()
    if tonumber(lobbyID) == XH.LOBBY_ID.YUYAO then
        local payType = tonumber(ruleTable["PlaymentType"]) or 1
        if payType == 1 then --余姚平摊模式增加字段
            gameRule = gameRule .. "AveragePay='1';"
        end
    end
    if tonumber(lobbyID) == XH.LOBBY_ID.YUYAO or tonumber(lobbyID) == XH.LOBBY_ID.NINGBO then
        local defauleInfo = "MaxChessWaitTime='10';MinFeeTip='0';DismissWaitTime='3';DismissWay='2';"  --创建时附带默认的游戏规则    
        gameRule = gameRule .. defauleInfo
    end
    
    if tonumber(lobbyID) == XH.LOBBY_ID.QUZHOU then
        data.type = (data.cont == 10000 or data.cont == 999) and 1 or 0
    end
    if tonumber(lobbyID) == XH.LOBBY_ID.ZHOUSHAN and (data.gameid == 30356 or data.gameid == 30357) then
        data.type = (data.cont == 100 or data.cont == 200) and 3 or 0
    end
    --宁波慈溪麻将特判
    if tonumber(lobbyID) == XH.LOBBY_ID.NINGBO then
        data.type = (data.cont == 1100) and 1 or 0
    end
    --嵊州麻将特判
    if tonumber(lobbyID) == XH.LOBBY_ID.SHAOXING then
        if data.cont > 10000 then
            data.cont = (data.cont % 10000) * 100
        end
    end
    data.size = self:getPlayerCount()
    data.name = boxName
    data.data = string.format("%sZhRule='%s';", gameRule, zhRule)
    data.tableCnt = 1
    for _, pt in pairs(TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType) do
        for _, payTypeName in ipairs(KW_PAYTYPE_NAME_TABLE) do
            if string.find(gameRule, payTypeName .. "='" .. pt .. "'") then
                data.payType = pt
                break
            end
        end
    end
    if self._gameID == MutiVersionGameConfig.MutiVersionGameID.JiaXingMahjong 
    or self._gameID == MutiVersionGameConfig.MutiVersionGameID.TaiPaoMahjong then
        for k, v in pairs(categorieTable) do
            if v["nodeConfig"]["categorieIndex"] == ( self._categoriesIndex or 1) then
                local tmpRuleStr = loadstring("return {" .. v["nodeConfig"]["nodeName"] .. "}")()  
                if tmpRuleStr["gamedID"] then
                    data.gameid = tonumber(tmpRuleStr["gamedID"])
                end
            end
        end
    end
    if self:checkNewPlayTypeSelect() then
        return
    end
    local throwData = {
        block_label = "比赛场", 
        game_id = tostring(XH.areaData:getAreaID() .. "_" .. data.gameid),
        club_id = tostring(XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber()),
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cg24011201, throwData)
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:isLastCost() then
        data.data = data.data .. "loser_cost=1;"
    end
    TeaHouse.manager.teahouseMain:createBoxRoom(data)
end

function TeaHouseCreateBoxRoomView:onTouchEventTeaHouseCreatePlayMode(send, eventType)

end

--点击关闭按钮
function TeaHouseCreateBoxRoomView:onTouchEventClose(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
end

--获取游戏规则
function TeaHouseCreateBoxRoomView:getGameRule()
    local bRight = true
    local strGameRule = ""
    for k, nodeTable in pairs(radioTable) do
        for k, nodeInfo in pairs(nodeTable) do
            if nodeInfo["node"]:isSelected() and nodeInfo["node"]:isVisible() then
                local ruleString = nodeInfo["node"]:getName()
                if string.sub(ruleString, #ruleString, #ruleString) == ";" then
                    strGameRule = strGameRule .. nodeInfo["node"]:getName()
                elseif string.find(ruleString, "other") then
                    strGameRule = strGameRule .. nodeInfo["node"].otherData.nodeName
                end
            end
        end
    end

    for k, checkBoxInfo in pairs(checkBoxTable) do
        if checkBoxInfo["node"]:isSelected() and checkBoxInfo["node"]:isVisible() then
            if checkBoxInfo["nodeConfig"]["select"] then
                strGameRule = strGameRule .. checkBoxInfo["nodeConfig"]["select"]
            end
        elseif checkBoxInfo["node"]:isVisible() then
            if checkBoxInfo["nodeConfig"]["unselect"] then
                strGameRule = strGameRule .. checkBoxInfo["nodeConfig"]["unselect"]
            end
        end
    end

    for k, mustExistRuleInfo in pairs(mustExistRuleTable) do
        if mustExistRuleInfo["node"]:isSelected() and mustExistRuleInfo["node"]:isVisible() then
            strGameRule = strGameRule .. mustExistRuleInfo["nodeConfig"]["mustExistRuleYes"]
        elseif mustExistRuleInfo["node"]:isVisible() then
            if mustExistRuleInfo["nodeConfig"]["mustExistRuleNo"] then
                strGameRule = strGameRule .. mustExistRuleInfo["nodeConfig"]["mustExistRuleNo"]
            end
        end
    end

    for k, inputBoxInfo in pairs(inputBoxTable) do
        if inputBoxInfo["node"] and inputBoxInfo["nodeConfig"] and inputBoxInfo["nodeConfig"]["ruleName"] then
            local inputText = inputBoxInfo["node"]:getText()
            local inputValue = 0
            if inputText ~= nil and inputText ~= "" and tonumber(inputText) then
                inputValue = tonumber(inputText)
            end

            local inputNodeName = inputBoxInfo["nodeConfig"]["nodeName"] or ""
            if self:isChessFeeMustBiggerZero() and inputNodeName == "roomCostInput" and inputValue <= 0 then
                bRight = false
                local ruleText = inputBoxInfo["nodeConfig"]["ruleText"] or ""
                TeaHouse.TipTool.showToast(ruleText .. "输入值必须大于0")
            end
            inputValue = string.format("%.02f", inputValue)
            local ruleStr = inputBoxInfo["nodeConfig"]["ruleName"] .. "='" .. inputValue .. "';"
            strGameRule = strGameRule .. ruleStr
        end
    end

    local defaultRuleToServer = self:getDefaultRuleToServer()
    if defaultRuleToServer and (not defaultRuleToServer.NotCategoriesIndex or defaultRuleToServer.NotCategoriesIndex ~= self._categoriesIndex) then
        if defaultRuleToServer.Rule then
            strGameRule = strGameRule .. defaultRuleToServer.Rule
        end
    end

    return strGameRule, bRight
end

function TeaHouseCreateBoxRoomView:isChessFeeMustBiggerZero()
    local lobbyID = TeaHouse.BridgeData.getLobbyID()
    if tonumber(lobbyID) == XH.LOBBY_ID.YUYAO then
        return true
    end
    return false
end

--获取房间除了局数玩法之外的特殊玩法，比如圈数这种不定局的玩法
function TeaHouseCreateBoxRoomView:getGameConditions()
    local gameConditions = {}
    for k, conditionInfo in pairs(conditionTable) do
        if conditionInfo["node"]:isSelected() then
            gameConditions[conditionInfo["nodeConfig"]["condition"]] = conditionInfo["nodeConfig"]["conditionYes"]
        else
            if conditionInfo["nodeConfig"]["conditionNo"] ~= nil then
                gameConditions[conditionInfo["nodeConfig"]["condition"]] = conditionInfo["nodeConfig"]["conditionNo"]
            end
        end
    end
    return gameConditions
end

--获取玩家数量
function TeaHouseCreateBoxRoomView:getPlayerCount()
    local index = 1
    while true do
        local playerCountItem = ccui.Helper:seekNodeByName(self._gameRule, "playerCount" .. index)
        index = index + 1
        if playerCountItem then
            for i = 2, #playerCountItem:getChildren() do
                if string.find(playerCountItem:getChildren()[i]:getName(), "FOUR_TO_TWO") == nil and playerCountItem:getChildren()[i]:isSelected() then
                    return tonumber(string.match(playerCountItem:getChildren()[i]:getName(), "%d"))
                end
            end
        else
            break
        end
    end
    return 4
end

--获取局数
function TeaHouseCreateBoxRoomView:getPlayCount()
    local index = 1
    while true do
        local playCountItem = ccui.Helper:seekNodeByName(self._gameRule, "playCount" .. index)
        index = index + 1
        if playCountItem then
            for i = 2, #playCountItem:getChildren() do
                if playCountItem:getChildren()[i].isSelected and playCountItem:getChildren()[i]:isSelected() then
                    return tonumber(string.match(playCountItem:getChildren()[i]:getName(), "%d+"))
                end
            end
        else
            break
        end
    end
    return 10000
end

--更新房卡消耗的显示
function TeaHouseCreateBoxRoomView:updateShowCostInfo()
    local costString = ""
    local discountCost = -1
    for k, costRelevantInfo in pairs(playCountTable) do
        if costRelevantInfo["node"]:isSelected() and self._costTextInfo then
            if self._isCostRelativePlayers then
                if self._isMutiVersionGame then
                    local cost = tonumber(costRelevantInfo["nodeConfig"][tostring("allMutiVersionCost" .. self:getPlayerCount())])
                    -- discountCost = tonumber(costRelevantInfo["nodeConfig"][tostring("allDiscountCost" .. self:getPlayerCount())])
                    costString = "x " .. cost
                    for k, costTypeInfo in pairs(costTypeTable) do
                        if costTypeInfo["node"]:isSelected() then
                            if tostring(costTypeInfo["nodeConfig"]["costType"]) == "aaCost" then
                                local cost = tonumber(costRelevantInfo["nodeConfig"][tostring("aaMutiVersionCost" .. self:getPlayerCount())])
                                -- discountCost = tonumber(costRelevantInfo["nodeConfig"][tostring("aaDiscountCost" .. self:getPlayerCount())])
                                -- if tonumber(TeaHouse.BridgeData.getLobbyID()) == XH.LOBBY_ID.TAIZHOU and tostring(costTypeInfo["nodeConfig"]["costType"]) == "allCost" then
                                --     cost = math.ceil(cost)
                                -- end
                                costString = "x " .. cost
                                costString = costString .. " (每人)"
                                -- if discountCost and discountCost ~= -1 then 
                                --     discountCost = discountCost .." (每人)"
                                -- end
                            end
                            break
                        end
                    end
                else
                    local cost = tonumber(costRelevantInfo["nodeConfig"][tostring("allCost" .. self:getPlayerCount())])
                    discountCost = tonumber(costRelevantInfo["nodeConfig"][tostring("allDiscountCost" .. self:getPlayerCount())])
                    costString = "x " .. cost
                    for k, costTypeInfo in pairs(costTypeTable) do
                        if costTypeInfo["node"]:isSelected() then
                            local cost = tonumber(costRelevantInfo["nodeConfig"][tostring(costTypeInfo["nodeConfig"]["costType"] .. self:getPlayerCount())])
                            if tostring(costTypeInfo["nodeConfig"]["costType"]) == "aaCost" then
                                discountCost = tonumber(costRelevantInfo["nodeConfig"][tostring("aaDiscountCost" .. self:getPlayerCount())])
                            else
                                discountCost = tonumber(costRelevantInfo["nodeConfig"][tostring("allDiscountCost" .. self:getPlayerCount())])
                            end
                            -- if tonumber(TeaHouse.BridgeData.getLobbyID()) == XH.LOBBY_ID.TAIZHOU and tostring(costTypeInfo["nodeConfig"]["costType"]) == "allCost" then
                            --     cost = math.ceil(cost)
                            -- end
                            costString = "x " .. cost
                            if tostring(costTypeInfo["nodeConfig"]["costType"]) == "aaCost" then
                                costString = costString .. " (每人)"
                                if discountCost and discountCost ~= -1 then 
                                    discountCost = discountCost .." (每人)"
                                end
                            end
                            break
                        end
                    end
                end
            else
                local cost = tonumber(costRelevantInfo["nodeConfig"]["allCost"])
                discountCost = tonumber(costRelevantInfo["nodeConfig"]["discountCost"])
                costString = "x " .. cost
                for k, costTypeInfo in pairs(costTypeTable) do
                    if costTypeInfo["node"]:isSelected() then
                        local cost = tonumber(costRelevantInfo["nodeConfig"][tostring(costTypeInfo["nodeConfig"]["costType"])] or "0")
                        -- if tonumber(TeaHouse.BridgeData.getLobbyID()) == XH.LOBBY_ID.TAIZHOU and tostring(costTypeInfo["nodeConfig"]["costType"]) == "allCost" then
                        --     cost = math.ceil(cost)
                        -- end
                        costString = "x " .. cost
                        if tostring(costTypeInfo["nodeConfig"]["costType"]) == "aaCost" then
                            costString = costString .. " (每人)"
                        end
                        break
                    end
                end
            end
            break
        end
    end
    if costString ~= "" then
        self._costTextInfo:setString(costString)
    end
    self._imgAreaCostHua:setVisible(false)
    self._imgAreaCostText:setVisible(false)
    self._imgLimitAct:setVisible(false)
    if discountCost and discountCost ~= -1 then
        self._imgAreaCostHua:setVisible(true)
        self._imgAreaCostText:setVisible(true)
        self._imgLimitAct:setVisible(true)
        self._imgAreaCostText:setString("房卡消耗 X "..discountCost)
        --老折扣逻辑
        -- self._imgDiscountHua:setVisible(true)
        -- self._costTextDiscount:setVisible(true)
        -- self._costTextDiscount:setString(discountCost)
    end
    if XH.lobby:getModule("RecallNew"):isFreeRoom() then
        self._imgAreaCostHua:setVisible(true)
        self._imgAreaCostText:setVisible(true)
        self._imgLimitAct:setVisible(true)
        self._imgAreaCostText:setString("回归首次免费")
    end
end

-- 规则文案合并：ruleTextMergeGroup 为「基名」或「基名_序号」（如 caiShenJiangScore_1 / caiShenJiangScore_2）。
-- 同基名为一组；序号决定合并段内拼接顺序（升序）。无后缀时复选默认序 1、单选默认序 2（兼容旧配置）。

function TeaHouseCreateBoxRoomView:parseRuleTextMergeGroup(raw)
    if not raw or raw == "" then
        return nil, nil
    end
    local base, ordStr = string.match(raw, "^(.+)_(%d+)$")
    if base and ordStr then
        return base, tonumber(ordStr)
    end
    return raw, nil
end

function TeaHouseCreateBoxRoomView:getRuleTextMergeBaseKey(raw)
    local base, _ = self:parseRuleTextMergeGroup(raw)
    return base
end

-- 提取单选选项的展示文案
function TeaHouseCreateBoxRoomView:getRadioOptionRuleDisplayText(nodeInfo)
    local addText = nodeInfo["nodeConfig"]["text"]
    if nodeInfo["nodeConfig"]["tableText"] then
        addText = nodeInfo["nodeConfig"]["tableText"]
    end
    if nodeInfo["nodeConfig"]["dropdown"] and nodeInfo["node"] and nodeInfo["node"].otherData then
        addText = nodeInfo["node"]["otherData"]["text"]
        if nodeInfo["node"]["otherData"]["tableText"] then
            addText = nodeInfo["node"]["otherData"]["tableText"]
        end
    end
    return addText or ""
end

function TeaHouseCreateBoxRoomView:isRuleTextMergeBaseActive(mergeBase, unShowRuleData)
    if not mergeBase or mergeBase == "" then
        return false
    end
    for _, checkBoxInfo in pairs(checkBoxTable) do
        local cfg = checkBoxInfo["nodeConfig"]
        local g = cfg["ruleTextMergeGroup"]
        if g and g ~= "" and self:getRuleTextMergeBaseKey(g) == mergeBase
            and checkBoxInfo["node"]:isSelected() and checkBoxInfo["node"]:isVisible() then
            local nodeName = cfg["nodeName"]
            local filtered = false
            if unShowRuleData then
                for _, unShowRule in pairs(unShowRuleData) do
                    if string.find(nodeName, unShowRule) then
                        filtered = true
                        break
                    end
                end
            end
            if not filtered then
                return true
            end
        end
    end
    return false
end

function TeaHouseCreateBoxRoomView:shouldSkipRadioForRuleTextMerge(nodeInfo, unShowRuleData)
    local g = nodeInfo["nodeConfig"]["ruleTextMergeGroup"]
    if not g or g == "" then
        return false
    end
    local mergeBase = self:getRuleTextMergeBaseKey(g)
    return self:isRuleTextMergeBaseActive(mergeBase, unShowRuleData)
end

-- 返回当前选中且同基名单选的展示文案、以及该侧序号（无后缀则 nil，由调用方用默认 2）
function TeaHouseCreateBoxRoomView:getRuleTextMergeRadioPartForBase(mergeBase)
    if not mergeBase or mergeBase == "" then
        return "", nil
    end
    for _, nodeTable in pairs(radioTable) do
        for _, nodeInfo in pairs(nodeTable) do
            local g = nodeInfo["nodeConfig"]["ruleTextMergeGroup"]
            if g and g ~= "" then
                local b, ord = self:parseRuleTextMergeGroup(g)
                if b == mergeBase and nodeInfo["node"]:isSelected() then
                    if TeaHouse.BridgeData.getLobbyID() ~= TeaHouse.LOBBY_ID.TAIZHOU or nodeInfo["node"]:isVisible() then
                        return self:getRadioOptionRuleDisplayText(nodeInfo), ord
                    end
                end
            end
        end
    end
    return "", nil
end

-- 构建规则文案合并段落
function TeaHouseCreateBoxRoomView:buildRuleTextMergedSegment(checkBoxInfo)
    local raw = checkBoxInfo["nodeConfig"]["ruleTextMergeGroup"]
    if not raw or raw == "" then
        return nil
    end
    local mergeBase, cbOrderExplicit = self:parseRuleTextMergeGroup(raw)
    local cbOrder = cbOrderExplicit or 1
    local cbText = checkBoxInfo["nodeConfig"]["text"]
    if checkBoxInfo["nodeConfig"]["tableText"] then
        cbText = checkBoxInfo["nodeConfig"]["tableText"]
    end
    cbText = cbText or ""

    local radioText, radioOrderExplicit = self:getRuleTextMergeRadioPartForBase(mergeBase)
    local radioOrder = radioOrderExplicit or 2

    local parts = {}
    if cbText ~= "" then
        table.insert(parts, { cbOrder, cbText })
    end
    if radioText ~= "" then
        table.insert(parts, { radioOrder, radioText })
    end
    table.sort(parts, function(a, b)
        return a[1] < b[1]
    end)
    local s = ""
    for _, p in ipairs(parts) do
        s = s .. p[2]
    end
    return s
end

--根据本地选择的按钮获取规则串
function TeaHouseCreateBoxRoomView:getBoxRoomRuleString(unShowRuleData)
    local ruleText = ""
    for count, nodeTable in pairs(radioTable) do
        for k, nodeInfo in pairs(nodeTable) do
            if nodeInfo["node"]:isSelected() and string.match(nodeInfo["nodeConfig"]["nodeName"], "playCount") == nil
            and string.match(nodeInfo["nodeConfig"]["nodeName"], "Cost") == nil
            and string.match(nodeInfo["nodeConfig"]["nodeName"], "playerCount") == nil then
                --nodeInfo["node"]:isVisible()应该全区开放的，是一个固定玩法规则的BUG
                --目前别的区没反馈且测试没时间，所以加个了特判对出问题的区进行修复
                if TeaHouse.BridgeData.getLobbyID() ~= TeaHouse.LOBBY_ID.TAIZHOU or nodeInfo["node"]:isVisible() then
                    if self:shouldSkipRadioForRuleTextMerge(nodeInfo, unShowRuleData) then
                        -- 与配置了 ruleTextMergeGroup 的复选框合并展示，不在此单独输出
                    else
                        local addText = self:getRadioOptionRuleDisplayText(nodeInfo)
                        if ruleText == "" then
                            ruleText = addText
                        else
                            ruleText = ruleText .. "/" .. addText
                        end
                    end
                end
            end
        end
    end
    for k, checkBoxInfo in pairs(checkBoxTable) do
        if checkBoxInfo["node"]:isSelected() and checkBoxInfo["node"]:isVisible() then
            local nodeName = checkBoxInfo["nodeConfig"]["nodeName"]
            local isNeedAdd = true

            if unShowRuleData then
                for _, unShowRule in pairs(unShowRuleData) do
                    if string.find(nodeName, unShowRule) then
                        isNeedAdd = false
                        break
                    end
                end
            end
            if isNeedAdd then
                local addText
                local mergeRaw = checkBoxInfo["nodeConfig"]["ruleTextMergeGroup"]
                if mergeRaw and mergeRaw ~= "" then
                    -- 与配置了 ruleTextMergeGroup 的复选框合并展示
                    addText = self:buildRuleTextMergedSegment(checkBoxInfo)
                else
                    addText = checkBoxInfo["nodeConfig"]["text"]
                    if checkBoxInfo["nodeConfig"]["tableText"] then
                        addText = checkBoxInfo["nodeConfig"]["tableText"]
                    end
                end
                if ruleText == "" then
                    ruleText = addText
                else
                    ruleText = ruleText .. "/" .. addText
                end
            end
        end
    end
    for k, inputBoxInfo in pairs(inputBoxTable) do
        if inputBoxInfo["node"] and inputBoxInfo["nodeConfig"] and inputBoxInfo["nodeConfig"]["ruleText"] then
            local inputText = inputBoxInfo["node"]:getText()
            local inputValue = 0
            if inputText ~= nil and inputText ~= "" and tonumber(inputText) then
                inputValue = tonumber(inputText)
            end
            if ruleText == "" then
                ruleText = inputBoxInfo["nodeConfig"]["ruleText"]
            else
                ruleText = ruleText .. "/" .. inputBoxInfo["nodeConfig"]["ruleText"] .. inputValue
            end
        end
    end
    local defaultRuleToServer = self:getDefaultRuleToServer()
    if defaultRuleToServer and (not defaultRuleToServer.NotCategoriesIndex or defaultRuleToServer.NotCategoriesIndex ~= self._categoriesIndex) then
        if defaultRuleToServer.Text then
            ruleText = ruleText .. "/" .. defaultRuleToServer.Text
        end
    end
    return ruleText
end

function TeaHouseCreateBoxRoomView:getDefaultRuleToServer()
    local gameID = self._gameID
    for k, v in pairs(categorieTable) do
        if v["nodeConfig"] and v["nodeConfig"]["categorieIndex"] and v["nodeConfig"]["categorieIndex"] == ( self._categoriesIndex or 1) then
            local tmpRuleStr = loadstring("return {" .. v["nodeConfig"]["nodeName"] .. "}")()  
            if tmpRuleStr["gamedID"] then
                gameID = tonumber(tmpRuleStr["gamedID"])
            end
        end
    end
    local defaultRuleToServer = nil
    if gameID and CreateBoxRoomConfig.DefaultRuleToServer[gameID] then
        defaultRuleToServer = CreateBoxRoomConfig.DefaultRuleToServer[gameID]
    end
    return defaultRuleToServer
end

--获取数据中的规则串
function TeaHouseCreateBoxRoomView:getBoxRoomRuleByData(ruleData)
    local ruleText = ""
    local luaBlock = loadstring(ruleData)
    if luaBlock ~= nil then
        luaBlock()
        ruleText = string.gsub(ZhRule, "，", "/")
        ruleText = string.gsub(ruleText, ",", "/")
    end
    return ruleText
end

--刷新活动角标
function TeaHouseCreateBoxRoomView:refreshActivityIcon(event)
    if not event or not event.msg then 
        return 
    end
    if self._listViewGames == nil then
        return
    end
    local leftTime = event.msg.info
    for key, value in pairs(self._listViewGames:getChildren()) do
        --判断是否是活动游戏
        local gameid = value:getTag()
        if self:isActivityGame(gameid) then
            TeaHouse.BridgeUI.setVisible(value, KW_IMG_ACTIVITY, true)
            TeaHouse.BridgeUI.setVisible(value, KW_IMG_LEFT_TIME, true)
            self:runCountDownAcitvity(value,leftTime)
        elseif self:isOnlyShowActGame(gameid) then
            TeaHouse.BridgeUI.setVisible(value, KW_IMG_ACTIVITY, true)
            TeaHouse.BridgeUI.setVisible(value, KW_IMG_LEFT_TIME, false)
        else
            TeaHouse.BridgeUI.setVisible(value, KW_IMG_LEFT_TIME, false)
            TeaHouse.BridgeUI.setVisible(value, KW_IMG_ACTIVITY, false)
        end
        if TeaHouse.BridgeData.isShowMarkGame(gameid) then
            TeaHouse.BridgeUI.setVisible(value, KW_IMG_LEFT_TIME, false)
            TeaHouse.BridgeUI.setVisible(value, KW_IMG_ACTIVITY, false)
        end
    end
end

--倒计时
function TeaHouseCreateBoxRoomView:runCountDownAcitvity(node, leftTime)
    local iconNode = node:getChildByName(KW_IMG_ACTIVITY)
    local bgNode = node:getChildByName(KW_IMG_LEFT_TIME)
    local timeNode = bgNode:getChildByName(KW_TEXT_LFETTIME)

    timeNode:stopAllActions()
    timeNode:runAction(cc.RepeatForever:create(cc.Sequence:create(
    cc.CallFunc:create(function()
        leftTime = leftTime - 1
        if leftTime >= 0 then
            local d = math.floor(leftTime / 86400)
            local h = math.floor((leftTime - d * 86400) / 3600)
            local m = math.floor((leftTime - d * 86400 - h * 3600) / 60)
            local strTime = string.format("活动时间：%d天%02d时", d, h)
            if d == 0 then
                strTime = string.format("活动时间：%02d时%02d分", h, m)
            end
            timeNode:setString(strTime)
        else
            iconNode:setVisible(false)
            bgNode:setVisible(false)
            timeNode:stopAllActions()
        end
    end),cc.DelayTime:create(1))))
end

-- 是否只是显示角标
function TeaHouseCreateBoxRoomView:isOnlyShowActGame(gameid)
	local showGameList = {30133,30140,30145,30153,30577,30358,30588}
	for k, v in pairs(showGameList) do
		if v == gameid then
			return true
		end
	end
	return false
end

--是否是限时活动游戏
function TeaHouseCreateBoxRoomView:isActivityGame(gameid)
    local boxActivityGame = TeaHouse.BridgeData.getBoxActivityGame()
    local startTime, endTime = TeaHouse.BridgeData.getActivityTime()
    --活动是否开始
    if startTime > self._timeStamp or endTime < self._timeStamp then
        return false
    end
    for key, value in pairs(boxActivityGame) do
        if gameid == value then
            return true 
        end
    end
    return false
 end

 function TeaHouseCreateBoxRoomView:initFourToTwoPlayerBtn(twoPlayerBnt, optionIndex, haveTip)
    if FourToTwoConfig.getIsExceptGame(self._gameID) then
        return
    end
    if GameNewTypeConfiger:getDefultGameIDByLobbyID(XH.areaData:getLobbyID()) == self._gameID then
        self:addFourToTwoHitImg(twoPlayerBnt, haveTip)
    end
end

function TeaHouseCreateBoxRoomView:choseTwoPlayersBtn(send)
    if send then
        local tmpNodeTable = { }
        local isCategoriesBtn = false
        for _, v in pairs(categorieTable) do
            if v["node"] == send then
              --记录所选游戏的大类
                XH.userDefault:setValue(XH.userDefault.KEY_ID.GAMERULE_CATEGORIE_SELECT, tonumber(v["nodeConfig"]["categorieIndex"]) , {gameID = self._gameID})
                self._categoriesIndex = v["nodeConfig"]["categorieIndex"]
                isCategoriesBtn = true
            end
        end
        -- 点击的节点的节点组
        for _, nodeTable in pairs(radioTable) do
            for _, nodeInfo in pairs(nodeTable) do
                if nodeInfo["node"] == send then
                    tmpNodeTable = nodeTable
                    break
                end
            end
        end
        for _, nodeInfo in pairs(tmpNodeTable) do
            if nodeInfo["node"] == send then
                self:setSelectState(nodeInfo["node"], true)
            else
                if nodeInfo["node"]:isBright() and nodeInfo["node"]:isEnabled() then
                    self:setSelectState(nodeInfo["node"], false)
                end
            end
        end
        for _, nodeTable in pairs(linkageLevelTable) do
            for _, node in pairs(nodeTable) do
                if node == send then
                    --更新联动相关联节点
                    self:updateLinkageNode(node)
                end
            end
        end
        for _, nodeTable in pairs(unSelectlinkageLevelTable) do
            for _, node in pairs(nodeTable) do
                if node == send then
                    --更新联动相关联节点
                    self:updateLinkageNode(node)
                end
            end
        end
        if isCategoriesBtn then
            self:loadGameRuleDynamic(self._gameID)
        end
        -- 更新房卡消耗的显示
        self:updateShowCostInfo()
    end
end

function TeaHouseCreateBoxRoomView:addFourToTwoHitImg(node, haveTip)
    if not self:isValueInHideTable(node) then
        node:getParent():removeChildByName("_KW_FOUR_TO_TWO_HIT_IMG")
        local imgNode = ccui.ImageView:create("tea_house_createroom_Hot_No_Cheat.png", ccui.TextureResType.plistType)
        if imgNode then
            node:getParent():addChild(imgNode)
            local pos = cc.p(node:getPosition())
            if haveTip then
                imgNode:setPosition(pos.x + node:getContentSize().width + 120,pos.y)
                local tipText = XH.UITool.seekNodeByName(node, KW_PANEL_TIPS)
                if tipText then
                    local tempPosX = tipText:getPositionX()
                    tipText:setPositionX(tempPosX + imgNode:getContentSize().width + 10)
                end
            else
                imgNode:setPosition(pos.x + node:getContentSize().width + 120,pos.y)
            end
            imgNode:ignoreContentAdaptWithSize(false)
            :setAnchorPoint(cc.p(0.5,0.5))
            :setName("_KW_FOUR_TO_TWO_HIT_IMG")
        end
    end
end

function TeaHouseCreateBoxRoomView:addFourToTwoTip(node, optionIndex)
    if not self:isValueInHideTable(node) then
        node:getParent():removeChildByName("_KW_FOUR_TO_TWO_TIP_PANEL")
        local tipNode
        if optionIndex < 3 then
            tipNode = self._tipFourToTwo2:clone()
        else
            tipNode = self._tipFourToTwo:clone()
        end
        
        if tipNode then
            tipNode:setName("_KW_FOUR_TO_TWO_TIP_PANEL")
            local pos = cc.p(node:getPosition())
            tipNode:setPosition(pos.x,pos.y)
            if optionIndex < 3 then
                tipNode:setPosition(pos.x,pos.y-20)
                node:getParent():setGlobalZOrder(99999)
            end
            node:getParent():addChild(tipNode)
            
            tipNode:addTouchEventListener(function(send, eventType)
                if eventType ~= ccui.TouchEventType.ended then
                    return
                end
                send:setVisible(false)
            end)

            local actSequence = cc.Sequence:create(cc.DelayTime:create(3), cc.CallFunc:create(function()
                                    tipNode:setVisible(false)
                                end))
            tipNode:runAction(actSequence)
        end
    end
end

function TeaHouseCreateBoxRoomView:isValueInHideTable(value)
    if value ~= nil then
        for _, hideValue in pairs(hideTable) do
            local isValue = XH.TableTool.isValueInTable(value, hideValue)
            if isValue then
                return isValue
            end
        end
    end
    return false
end

function TeaHouseCreateBoxRoomView:onTouchEventPlayModeAreaChange(send,eventType)
    if eventType == ccui.TouchEventType.began then
        -- AudioEngine.playEffect(KW_PATH_LOBBY_SOUND .. KW_SOUND_BTN_DOWN)
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._panelPlayModeArea:setVisible(true)
    self:initItem()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.MutiVersionGame_AreaBtn)
end

function TeaHouseCreateBoxRoomView:initItem()
    --读一个配置表，从表里初始化节点数据
    self._itemIndex = 1
    local loadGameId = self._tmpGameID or self._gameID
    for i,v in pairs(self._mutiGameTable) do
        if loadGameId == i then
            self:addItem(true,v.areaName,v.gameid,v.lobbyid,v.isMutiVersionGame)
            self._textPlayModeName:setString(v.areaName)
        else
            self:addItem(false,v.areaName,v.gameid,v.lobbyid,v.isMutiVersionGame)
        end
    end
end

function TeaHouseCreateBoxRoomView:addItem(itemState, itemName, gameId,lobbyid,isMutiVersionGame)
    if not self._panelDefaultItem then
        return
    end
    local itemNode = self["_nodeItem" .. self._itemIndex]
    if not itemNode then
        return
    end
    self._itemIndex = self._itemIndex + 1
    local item = self._panelDefaultItem:clone()
    item:setVisible(true)
    item:setPosition(cc.p(0, 0))
    itemNode:addChild(item)
    local btnState = ccui.Helper:seekWidgetByName(item, KW_PLAYMODE_STATUS)
    if btnState then
        btnState:setSelected(itemState)
        item:addTouchEventListener(function(send, eventType)
            if eventType ~= ccui.TouchEventType.ended then
                return
            end
            if btnState:isSelected() then
                -- self:loadGameRuleDynamic(gameID)
            else
                btnState:setSelected(true)
                self:updateItemState(itemName)
            end
        end)
        local textTip = ccui.Helper:seekWidgetByName(item, KW_PLAYMODE_NAME)
        if textTip then
            textTip:setString(itemName)
        end
        self._modeItems[#self._modeItems + 1] = {
            BtnName = itemName,
            SelectBtn = btnState,
            GameID = gameId,
            LobbyID = lobbyid,
            IsMutiVersionGame = isMutiVersionGame
        }
    end
    
end

function TeaHouseCreateBoxRoomView:updateItemState(itemName)
    for _,v in ipairs(self._modeItems) do
        if v.BtnName ~= itemName then
            v.SelectBtn:setSelected(false)
        else
            v.SelectBtn:setSelected(true)
            self._tmpGameID = v.GameID
            self._tmpGameName = v.BtnName
            self._tmpLobbyID = v.LobbyID
            self._tmpMutiVersionGame = v.IsMutiVersionGame
        end
    end
end

function TeaHouseCreateBoxRoomView:onBtnFeedBack(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local gameNameList = XH.areaData:getAreaGameNameList()
    XH.viewManager:openView("FeedBackView", nil, gameNameList[self._gameID])
end

function TeaHouseCreateBoxRoomView:onTouchEventPlayTypeSave(send,eventType)
    if eventType == ccui.TouchEventType.began then
        -- AudioEngine.playEffect(KW_PATH_LOBBY_SOUND .. KW_SOUND_BTN_DOWN)
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    --读取对应地区的配置，刷新桌子面板玩法
    self._isMutiVersionGame = self._tmpMutiVersionGame
    if self._tmpGameID then
        self._gameID = self._tmpGameID 
    end
    self:loadGameRuleDynamic(self._tmpGameID or self._gameID,self._tmpLobbyID)
    if self._tmpGameName then
        self._btnPlayModeArea:setTitleText("玩法："..self._tmpGameName) 
    end
    self._panelPlayModeArea:setVisible(false)
end

function TeaHouseCreateBoxRoomView:onTouchEventPlayTypeClose(send,eventType)
    if eventType == ccui.TouchEventType.began then
        -- AudioEngine.playEffect(KW_PATH_LOBBY_SOUND .. KW_SOUND_BTN_DOWN)
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._panelPlayModeArea:setVisible(false)
end

function TeaHouseCreateBoxRoomView:showCreateTips(show, scene)
    if not show then
        self._createTips:setVisible(false)
        return
    end
    local createTips = GameNewTypeConfiger:getCreateTipsByGameIDAndScene(self._gameID, scene or "Tea")
    if createTips and createTips ~= "" then
        local KW_MAX_TIPS_LENGTH = 24
        local whiteHeight = 59
        local whiteWidth = 49
        local whiteStartPosY = 17
        createTips = XH.StringTool.newLineStringByMaxLen(createTips, KW_MAX_TIPS_LENGTH)
        self._createTipsStr:setString(createTips)
        local tipsSize = self._createTipsStr:getContentSize()
        self._createTips:setContentSize(tipsSize.width + whiteWidth, tipsSize.height + whiteHeight )
        self._createTips:setVisible(true)
        self._createTipsStr:setPositionY(tipsSize.height + whiteHeight - whiteStartPosY)
    end
end

function TeaHouseCreateBoxRoomView:initNewPlayTypeNode(optionNode, newPlayTypeNodes)
    if not newPlayTypeNodes or not optionNode then
        return
    end
    for _, v in pairs(newPlayTypeNodes) do
        local nodeInfo = loadstring("return " .. v)()
        if nodeInfo then
            local nodeName = nodeInfo[1]
            local nodeTips = nodeInfo[2]
            local nodeFlag = nodeInfo[3]
            if optionNode:getName() == nodeName then
                if nodeTips and nodeTips ~= "" then
                    self:createBubbleOnNode(optionNode, nodeTips, 5)
                end
                if nodeFlag and nodeFlag ~= "" then
                    self:createFlagAfterNode(optionNode, nodeFlag)
                end
            end
        end
    end
end

function TeaHouseCreateBoxRoomView:createFlagAfterNode(node, flag)
    if not node or not flag or flag == "" then
        return
    end
    local flagNode
    local ok = pcall(function()
        flagNode = ccui.ImageView:create(flag, ccui.TextureResType.plistType)
    end)
    if not ok then
        return
    end
    local textNode = XH.UITool.seekWidgetByName(node, KW_OPTION_ITEM_TEXT)
    local queryNode = XH.UITool.seekNodeByName(node, KW_PANEL_TIPS)
    if textNode then
        local whiteWidth = 5
        local textSize = textNode:getContentSize()
        local flagSize = flagNode:getContentSize()
        local posX = textSize.width + flagSize.width / 2 + whiteWidth * 2
        if queryNode and queryNode:isVisible() then
            posX = posX + queryNode:getContentSize().width
        end
        flagNode:setPosition(posX, textSize.height / 2)
        flagNode:ignoreContentAdaptWithSize(true)
        flagNode:setName("HotFlag")
        flagNode:addTo(textNode)
    end
end

function TeaHouseCreateBoxRoomView:createBubbleOnNode(node, bubbleStr, showTime)
    if not node or not bubbleStr or bubbleStr == "" then
        return
    end
    if not self._tipsModel then
        return
    end
    local tipsNode = self._tipsModel:clone()
    local KW_MAX_TIPS_LENGTH = 21
    local whiteHeight = 59
    local whiteWidth = 49
    local whitelegth = 10
    local whiteStartY = 17
    bubbleStr = XH.StringTool.newLineStringByMaxLen(bubbleStr, KW_MAX_TIPS_LENGTH)
    XH.UITool.setText(tipsNode, "KW_TXT_TIPS", bubbleStr)
    local tipsPosX = XH.UITool.getPosition(tipsNode, "KW_TXT_TIPS")
    local tipsSize = XH.UITool.getContentSize(tipsNode, "KW_TXT_TIPS")
    tipsNode:setContentSize(tipsSize.width + whiteWidth, tipsSize.height + whiteHeight )
    XH.UITool.setPosition(tipsNode, "KW_TXT_TIPS", cc.p(tipsPosX, tipsSize.height + whiteHeight - whiteStartY))
    local textNode = XH.UITool.seekWidgetByName(node, KW_OPTION_ITEM_TEXT)
    if textNode then
        local nodeSize = textNode:getContentSize()
        tipsNode:addTo(textNode)
        tipsNode:setPosition(nodeSize.width / 2, nodeSize.height)
        if showTime then
            tipsNode:stopAllActions()
            tipsNode:runAction(
                cc.Sequence:create(
                    cc.DelayTime:create(showTime), 
                    cc.CallFunc:create(function()
                        tipsNode:setVisible(false)
                    end)
                )
            )
        end
    end
end

function TeaHouseCreateBoxRoomView:checkNewPlayTypeSelect()
    if XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_NEW_TYPE_NOT_SELECTED_NOTICE, false) then
        return
    end
    local newPlayTypeNodes = GameNewTypeConfiger:getNewPlayTypeNodeByGameID(self._gameID)
    if newPlayTypeNodes and next(newPlayTypeNodes) then
        local bNewPlayTypeSelected = false
        for _, v in pairs(newPlayTypeNodes) do
            local nodeInfo = loadstring("return " .. v)()
            if nodeInfo then
                local nodeName = nodeInfo[1]
                for _,nodeTable in pairs(radioTable) do
                    for _, radioInfo in pairs(nodeTable) do
                        if radioInfo["node"]:isSelected() and radioInfo["node"]:isVisible() and radioInfo["node"]:getName() == nodeName then
                            bNewPlayTypeSelected = true
                            break
                        end
                    end
                    if bNewPlayTypeSelected then
                        break
                    end
                end
            
                for _, checkBoxInfo in pairs(checkBoxTable) do
                    if checkBoxInfo["node"]:isSelected() and checkBoxInfo["node"]:isVisible() and checkBoxInfo["node"]:getName() == nodeName then
                        bNewPlayTypeSelected = true
                        break
                    end 
                end
            
                for _, mustExistRuleInfo in pairs(mustExistRuleTable) do
                    if mustExistRuleInfo["node"]:isSelected() and mustExistRuleInfo["node"]:isVisible() and mustExistRuleInfo["node"]:getName() == nodeName then
                        bNewPlayTypeSelected = true
                        break
                    end
                end
            end
            if bNewPlayTypeSelected then
                break
            end
        end
        if not bNewPlayTypeSelected and GameNewTypeConfiger:getCreateWithoutNewPlayTypeContentByGameID(self._gameID) ~= "" then
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK,
            }, GameNewTypeConfiger:getCreateWithoutNewPlayTypeContentByGameID(self._gameID))
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_NEW_TYPE_NOT_SELECTED_NOTICE, true)
            return true
        end
    end
    return
end

function TeaHouseCreateBoxRoomView:initPromoteTips(gameid)
    if TeaHouse.PromoteConfig[XH.areaData:getLobbyID()] == nil then
        self._promoteTips:setVisible(false)
        return
    end
    if TeaHouse.PromoteConfig[XH.areaData:getLobbyID()].isFree == false then
        self._promoteTips:setVisible(false)
        return
    end
    self._promoteTips:setVisible(XH.lobby:getModule("Promote"):isOnlineAct() and gameid == TeaHouse.PromoteConfig[XH.areaData:getLobbyID()].GAMEID)
end

return TeaHouseCreateBoxRoomView