---获取顶端节点
---@return Node
function TeaHouse.getRootNode()
    return XH.SceneManager:getInstance():getPopNode()
end

function TeaHouse.getTopSceneTag()
    return XH.SceneManager:getInstance():getTopSceneTag()
end

function TeaHouse.getSceneByTag(sceneTag)
    return XH.SceneManager:getInstance():getSceneByTag(sceneTag)
end

function TeaHouse.getIsWXBanUrl()
    return XH.configerManager:getIsWXBanUrl()
end

TeaHouse.ROOM_MODE = XH.ROOM_MODE

---@class Req
TeaHouse.Req = XH.Req

---桥接埋点
TeaHouse.MonitorPoint = XH.MonitorPoint

---桥接协议
TeaHouse.ActiveProtocol = XH.ActiveProtocol
TeaHouse.BoxDataProtocol = XH.BoxDataProtocol
TeaHouse.MatchLinkProtocol = XH.MatchLinkProtocol

TeaHouse.PickerScrollView = XH.PickerScrollView

---@class ViewBase : Layout
TeaHouse.ViewBase = ct.ViewBase
---桥接数据
TeaHouse.BridgeData = require("teahouse.Bridge.BridgeData")
---桥接SDK
TeaHouse.BridgeSDK = require("teahouse.Bridge.BridgeSDK")
---桥接Event
TeaHouse.BridgeEvent = require("teahouse.Bridge.BridgeEvent")
---桥接字符串工具
TeaHouse.BridgeString = require("teahouse.Bridge.BridgeString")
---桥接系统工具
TeaHouse.BridgeSys = require("teahouse.Bridge.BridgeSys")
---桥接提示工具
TeaHouse.BridgeTip = require("teahouse.Bridge.BridgeTip")
---桥接UI工具
TeaHouse.BridgeUI = require("teahouse.Bridge.BridgeUI")
-- 桥接埋点数据
TeaHouse.throwDataManager = require("teahouse.Bridge.BridgeThrowDataManager"):new()
---桥接网络
TeaHouse.netEngine = XH.netEngine
---桥接远端图片
TeaHouse.RemoteImage = XH.RemoteImage
---桥接游戏创建房间配置
TeaHouse.ReadGameListAndRuleConfig = XH.ReadGameListAndRuleConfig

--大厅地区配置
TeaHouse.LOBBY_ID = XH.LOBBY_ID

TeaHouse.askIDManager = XH.askIDManager

---显示Loading
function TeaHouse.showLoading()
    XH.TipTool.showLoading()
end
---隐藏Loading
function TeaHouse.hideLoading()
    XH.TipTool.hideLoading()
end
---重置Loading
function TeaHouse.resetLoading()
    XH.TipTool.resetLoading()
end
function TeaHouse.showFreeJoin()
end
---播放按钮点击音效
function TeaHouse.playButtonClick()
    XH.audioManager:play("BUTTON_CLICK")
end
-- 显示商城
function TeaHouse.showShop()
    XH.Bridge.viewManager:openView("GoldHallShopView", nil, {openType = "Lobby"})
end

---刷新道具
function TeaHouse.sendFlushDrop()
    XH.playerData:flushPlayerDrop()
end

---回放
function TeaHouse.startPlayBack(shareCode)
    XH.lobby:getModule("PlayerBill"):startPlayBack(shareCode)
end
---邀请
function TeaHouse.reqInvite(fromNumID, toNumID, msg)
    if type(toNumID) == "table" then
        if XH.teaHouseManager.reqInviteAll then
            XH.teaHouseManager:reqInviteAll(fromNumID, toNumID, msg)
        end
    else 
        if XH.teaHouseManager.reqInvite then
            XH.teaHouseManager:reqInvite(fromNumID, toNumID, msg)
        end
    end
end

---根据游戏ID获取游戏类型
function TeaHouse.getGameTypeByGameID(gameID)
    local GameSubByConfID = require("app.Config.GameSub").GameSubByConfID
    if GameSubByConfID[gameID] then
        return GameSubByConfID[gameID].GameType
    end
    return nil
end

---游戏开始
function TeaHouse.gameStart(appID, gameID, roomMode, roomID)
    local param = {}
    param.appID = appID
    param.gameID = gameID
    param.roomMode = roomMode
    param.roomID = roomID
    XH.roomManager:gameStart(param)
end

---游戏开始
function TeaHouse.watchStart(appID, gameID, roomMode, roomID)
    local param = {}
    param.appID = appID
    param.gameID = gameID
    param.roomMode = roomMode
    param.roomID = roomID
    param.isWatch = true
    if XH.roomManager and XH.roomManager.watchStart then
        XH.roomManager:watchStart(param)
    end
end

function TeaHouse.isNeedLocation(gameRule)
    return XH.roomManager:isNeedLocation(gameRule)
end

function TeaHouse.getLocationGameRuleKeyword()
    return XH.areaData:getLocationGameRuleKeyword()
end

function TeaHouse.reqWXBind()
    XH.login:getModule("Login"):reqWXBind()
end

function TeaHouse.pushTeaHouseScene(teaHouseScene)
    if not teaHouseScene then
        return
    end
    XH.SceneManager:getInstance():pushScene(teaHouseScene, XH.SCENE_TAG.TEAHOUSE)
end

function TeaHouse.popTeaHouseScene()
    XH.SceneManager:getInstance():popScene(XH.SCENE_TAG.TEAHOUSE)
end

---显示手机绑定
function TeaHouse.showPhoneBind()
    local rootNode = TeaHouse.getRootNode()
    if not rootNode then
        return
    end
    package.loaded["lobby.Modules.PhoneBind.View"] = nil
    local phoneBindLayer = require("lobby.Modules.PhoneBind.View").new()
    if not phoneBindLayer then
        return
    end
    rootNode:addChild(phoneBindLayer)
end

function TeaHouse.startShowPopViews()
    XH.lobby:getModule("PopSystem"):startShowPopViews("TEA")
end

function TeaHouse.addTeaHousePopView(viewName, state, callBack)
    XH.lobby:getModule("PopSystem"):addTeaHousePopView(viewName, state, callBack)
end

function TeaHouse.openPopLayer(viewName)
    XH.lobby:getModule("PopCommonLayer"):openPopLayerView(viewName)
end

function TeaHouse.havePopLayer(viewName)
    return XH.lobby:getModule("PopCommonLayer"):havePopLayerView(viewName)
end

function TeaHouse.startReqPersonalGiftPackInfo()
    XH.lobby:getModule("PersonalGiftPack"):reqWebActivity()
end

function TeaHouse.showCusServiceView(source)
    XH.lobby:getModule("CusService"):oponCusServerView(nil,source)
end

function TeaHouse.teaPlayerguide()
    local lobbyId = XH.areaData:getLobbyID()
    if lobbyId ~= TeaHouse.LOBBY_ID.BAOBAO and lobbyId ~= TeaHouse.LOBBY_ID.SHAOXING3D and lobbyId ~= TeaHouse.LOBBY_ID.HUZHOU and
        lobbyId ~= TeaHouse.LOBBY_ID.JINHUA and lobbyId ~= TeaHouse.LOBBY_ID.JIAXING then
        TeaHouse.showCusServiceView("CREATEQYQ")
    else
        TeaHouse.showFreeJoin()
    end
end

function TeaHouse.reqLuckyTurnTableAct()
    XH.lobby:getModule("LuckyTurnTableAct"):reqActData()
end

-- 推广活动
function TeaHouse.checkIsPromoteAct()
    return XH.lobby:getModule("Promote"):isOnlineAct()
end

function TeaHouse.flushPromoteTask()
    XH.lobby:getModule("Promote"):flushPromoteTask()
end

function TeaHouse.flushLobbyTeaHouseList()
    XH.lobby:getModule("TeaHouseList"):reqTeaHouseList()
end

function TeaHouse.getPendTeahouseInfo(nTeaNumber)
    return XH.lobby:getModule("Promote"):getPendTeahouseInfo(nTeaNumber)
end

function TeaHouse.showLuckyTask(from)
    XH.viewManager:openView("LuckyTaskView", nil, from)
end

function TeaHouse.initLuckyTaskIcon(scene)
    XH.lobby:getModule("LuckyTask"):setTeaHouseMain(scene)
    XH.lobby:getModule("LuckyTask"):reqTaskList()
end

function TeaHouse.reqRealtimeGameRecord(roomid, offset, gameid, playercount)
    if XH.lobby:getModule("Watch") and XH.lobby:getModule("Watch").reqRealtimeGameRecord then
        XH.lobby:getModule("Watch"):reqRealtimeGameRecord(roomid, offset, gameid, playercount)
    end
end

-- 推广活动 2.0
function TeaHouse.reqNewSpreadInfo(teaNumber)
    return XH.lobby:getModule("Promote2"):reqNewSpreadInfo(teaNumber)
end

function TeaHouse.checkIsPromote2Open()
    return XH.lobby:getModule("Promote2"):isValid()
end

function TeaHouse.isOnlineAct()
    return XH.lobby:getModule("Promote2"):isOnlineAct()
end

function TeaHouse.updateSetup()
    return XH.lobby:getModule("Promote2"):updateSetup()
end

function TeaHouse.setPromoteIcon(self, btn)
    XH.lobby:getModule("Promote2"):setMainIcon(self, btn)
end

function TeaHouse.showPromoteView(isAdmin, isOwner, teaNumber, owner_numid, worldPos)
    XH.viewManager:openView("PromoteTeaNewView", nil, {
        isAdmin = isAdmin,
        isOwner = isOwner,
        teaNumber = teaNumber,
        owner_numid = owner_numid,
        worldPos = worldPos,
    })
end

TeaHouse.PromoteConfig = require("lobby.Modules.Promote.Config")
TeaHouse.PromoteHorseConfig = require("lobby.Modules.Promote.PromoteHorseConfig") �  