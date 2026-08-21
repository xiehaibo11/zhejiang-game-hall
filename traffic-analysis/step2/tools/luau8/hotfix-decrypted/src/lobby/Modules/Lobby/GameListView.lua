local MenuIcon = require("lobby.Modules.Lobby.MenuBar.MenuIcon")
local ScrollIcon = require("lobby.Modules.Lobby.ScrollIcon")
local GameListView = class("GameListView", XH.ViewBase)
local LobbyConfig = require("lobby.Modules.Lobby.Config")
local NewGoldSceneDefine = require("lobby.Modules.NewGoldScene.Define")
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")

-- 单个icon尺寸
local KW_ICON_ITEM_SIZE = cc.size(190,190)
-- 左右间距 上下间距
local KW_ICON_SPACINGX = 15
local KW_ICON_SPACINGY = 15
-- 单行显示最大个数
local KW_MAX_COUNT_IN_LINE = 3
local KW_MAX_ICON_COUNT = 9
local KW_GAME_NAME = "_KW_GAME_NAME"
local KW_GAME_FLAG = "_KW_GAME_FLAG"
local KW_GAME_HEGUI = "_KW_GAME_HEGUI" --合规icon角标 

local MAX_UNIUN_GAME_OUT = 3 -- 显示在外的联运游戏最大数量,其余的显示在推荐游戏重

-- 解决渠道包之前点击大厅游戏icon后不复原的情况
local games_icon_scale = 1    --大厅游戏icon的缩放比例
local more_games_scale = 1   --更多游戏按钮icon的缩放比例

local UNIONGAME_NAME ={
    [3021] = "人人捕鱼",
    [3022] = "谁是首富",
    [3015] = "玲萌直播",
    [3002] = "捕鱼王",
    [3001] = "决战沙邑",
}
-- 渠道包的Icon按钮点击后缩放比例
if (not XH.ChannelTool.checkIsDoubleKouGame()) and (XH.ChannelTool.checkIsWaishengChannel() or XH.ChannelTool.checkIsCPSChannel()) then  
    games_icon_scale = 1.3
    more_games_scale = 1.3 * 0.9
end 

function GameListView:getCSBPath()
    return "cocosStudio/hall/CSB/GameListView.csb"
end

function GameListView:getBindingInfo()
    return {
        ["_KW_MINI_GAME_LIST"] = { varName = "_listViewGoldQuick"},
        ["_KW_GAME_ICON_ITEM"] = { varName = "_gameItem"},
        ["_KW_PANEL_GAME_ICON_ITEM"] = { varName = "_KW_PANEL_GAME_ICON_ITEM"},
    }
end

function GameListView:getProxyEvents()
    return {
        { module = XH.goldConfigManager, eventKeyName = "GOLD_EVENT_ROOMINFO", callBack = "onRespGoldRoomInfo" },
        { module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_SHOW_LEGEND_SETVISIBLE", callBack = "showLegendState" },
        { module = XH.lobby:getModule("RRBuYu"), eventKeyName = "EVENT_BUYU_DOWNLOAD_PROGRESS",callBack = "onRRFishProgressChanged"},
        { module = XH.lobby:getModule("LianYun"), eventKeyName = "EVENT_UPDATE_PROGRESS",callBack = "onLianYunProgressChanged"},
        { module = XH.lobby:getModule("Lobby"), eventKeyName = "SHOW_XIUXIAN_GAME", callBack = "showXIUXIANLobby" },
        { module = XH.lobby:getModule("Lobby"), eventKeyName = "SHOW_BOX_GAME", callBack = "showYouXILobby" },
        { module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_LIAN_YUN_WHITE_CHANGED", callBack = "refreshLianYunWhite" },
        { module = XH.lobby:getModule("GameCenter"), eventKeyName = "EVENT_RED_POINT_CHANGED", callBack = "updateGameCenterRedPoint" },
    }
end

function GameListView:ctor()
    self:setCascadeOpacityEnabled(true)
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/Image/hegui.plist")
    GameListView.super.ctor(self)
    if not XH.ChannelTool.checkIsDoubleKouGame() and (XH.ChannelTool.checkIsCPSChannel() or XH.ChannelTool.checkIsWaishengChannel()) then
        KW_MAX_COUNT_IN_LINE = 4
        KW_MAX_ICON_COUNT = 8
        KW_ICON_ITEM_SIZE = cc.size(228,228)
        KW_ICON_SPACINGX = 30
        KW_ICON_SPACINGY = 30
        self._listViewGoldQuick:setContentSize(cc.size(996,600))
        self._gameItem:setScale(1.2)
    end
    self._index = 1
    self._showDefaultUnion = false       
    self:setContentSize(display.width, display.height)
    self:refreshUI()
    self._isInGoldHall = false
end

function GameListView:onExit()
    GameListView.super.onExit(self)
end

function GameListView:addItemClickListener(bindTo, callBack,callBack2)
    self._bindTo = bindTo
    self._itemClickCallBack = callBack
end

function GameListView:getIconConf(gameId)
    local mjimageConf = {
        "lobby_btn_game_mj.png",
        "lobby_btn_game_mj_2.png",
        "lobby_btn_game_mj_3.png",
        "lobby_btn_game_mj_4.png"
    }
    local mjcolorConf = {
        cc.c3b(220, 254, 227),
        cc.c3b(222, 239, 255),    
        cc.c3b(255, 243, 206),                   
        cc.c3b(233, 252, 255),     
    }
    local mjoutlineColorConf = {
        cc.c3b(12, 80, 55),
        cc.c3b(33, 65, 122),
        cc.c3b(154, 54, 19),
        cc.c3b(3, 76, 83),
    }

    if gameId ~= 30386 and gameId ~= 30421 and gameId ~= 30116 and gameId ~= 30159 and gameId ~= 30579 then
        if gameId ~= 30134 then
            self._mjiconindex = self._mjiconindex + 1
        end
        if self._mjiconindex > #mjimageConf or self._mjiconindex == 0 then 
            self._mjiconindex = 1
        end 
    end 

    local default_icon = mjimageConf[self._mjiconindex]
    local default_color = mjcolorConf[self._mjiconindex]
    local default_outline_color = mjoutlineColorConf[self._mjiconindex]

    local imageConf = {
        [30386] = "lobby_btn_game_pdk.png",
        [30116] = "lobby_btn_game_sk.png",
        [30579] = "lobby_btn_game_sk.png",
        [42038] = "lobby_btn_game_sk.png",
        [30159] = "lobby_btn_game_sk_2.png",
        [30421] = "lobby_btn_game_ddz.png",
        [30578] = "lobby_btn_game_pdk.png",
        [LobbyConfig.TempGuanDanGameID] = "lobby_xiuxian_bg_gd.png",
    }
    local colorConf = {
        [30386] = cc.c3b(186, 245, 252),
        [30116] = cc.c3b(192, 238, 251),
        [30579] = cc.c3b(192, 238, 251),
        [42038] = cc.c3b(192, 238, 251),
        [30159] = cc.c3b(241, 237, 255),
        [30421] = cc.c3b(241, 231, 150),
        [30578] = cc.c3b(186, 245, 252),
    }
    local outlineColorConf = {
        [30386] = cc.c3b(5, 92, 100),
        [30116] = cc.c3b(22, 72, 151),
        [30579] = cc.c3b(22, 72, 151),
        [42038] = cc.c3b(22, 72, 151),
        [30159] = cc.c3b(63, 40, 179),
        [30421] = cc.c3b(154, 54, 19),
        [30578] = cc.c3b(5, 92, 100),
    }

    return imageConf[gameId] or default_icon, colorConf[gameId] or default_color, outlineColorConf[gameId] or default_outline_color
end

-- 获取位置
function GameListView:getGameItemPosition(index)
    local containerSize = self._listViewGoldQuick:getInnerContainerSize()
    local scrollSize = self._listViewGoldQuick:getContentSize()
    -- icon间距
    local iconSpacingX = (scrollSize.width - KW_ICON_ITEM_SIZE.width * KW_MAX_COUNT_IN_LINE - KW_ICON_SPACINGX * 2 ) / (KW_MAX_COUNT_IN_LINE - 1)
    local iconSpacingY = (scrollSize.height - KW_ICON_ITEM_SIZE.height * KW_MAX_COUNT_IN_LINE - KW_ICON_SPACINGY * 2 ) / (KW_MAX_COUNT_IN_LINE - 1)

    if not XH.ChannelTool.checkIsDoubleKouGame() and (XH.ChannelTool.checkIsCPSChannel() or XH.ChannelTool.checkIsWaishengChannel()) then
        iconSpacingY = (scrollSize.height - KW_ICON_ITEM_SIZE.height * KW_MAX_ICON_COUNT/KW_MAX_COUNT_IN_LINE - KW_ICON_SPACINGY * 2 ) / (KW_MAX_ICON_COUNT/KW_MAX_COUNT_IN_LINE)
    end
    local posX = KW_ICON_SPACINGX + KW_ICON_ITEM_SIZE.width / 2 + KW_ICON_ITEM_SIZE.width * ((index - 1) % KW_MAX_COUNT_IN_LINE) + iconSpacingX * ((index - 1) % KW_MAX_COUNT_IN_LINE)
    local posY = containerSize.height - (KW_ICON_SPACINGY + KW_ICON_ITEM_SIZE.height / 2 + KW_ICON_ITEM_SIZE.height * math.floor((index - 1) / KW_MAX_COUNT_IN_LINE) + iconSpacingY * math.floor((index - 1) / KW_MAX_COUNT_IN_LINE))
    return cc.p(posX,posY)
end

function GameListView:setScrollViewSize()
    local totalIcon = #self._goldGames + #self._curShowMenus + 1
    if totalIcon > KW_MAX_ICON_COUNT then
        local maxline = math.ceil(totalIcon / KW_MAX_COUNT_IN_LINE)
        local height = KW_ICON_ITEM_SIZE.height * maxline + KW_ICON_SPACINGY * 2 + (maxline - 1) * 15
        self._listViewGoldQuick:setInnerContainerSize(cc.size(self._listViewGoldQuick:getContentSize().width, height))
        self._listViewGoldQuick:setScrollBarEnabled(true)
    end
end

function GameListView:resetGoldGames()
    local totalIcon = #self._goldGames + #self._curShowMenus + 1
    if totalIcon > KW_MAX_ICON_COUNT then
        local removeCount = totalIcon - KW_MAX_ICON_COUNT
        for _ = 1, removeCount do
            table.remove(self._goldGames, #self._goldGames)
        end
    end
end

function GameListView:initGoldGameList()
    local lastGameID = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_LAST_GOLD_GAMEID, 0)
    local gamelist = XH.lobby:getModule("Lobby"):getEntranceByType(XH.lobby:getModule("Lobby").KW_QUICK_ENTRANCE_TYPE.RELAXED)
    local lastConfID = XH.goldConfigManager:getConfIDByGameID(lastGameID)
    local result = {}
    -- 最近在玩
    local showFlag = false
    if lastConfID then
        result[#result + 1] = lastConfID
        showFlag = true
    end
    for i=1,#gamelist do
        result[#result + 1] = gamelist[i].LeisureID
    end
    result = table.unique(result,true)
    self._goldGames = XH.playerData:screenLobbyGoldGameList(result)
    self._showFlag = showFlag
end

function GameListView:initGoldQuickList()
    local normalGames = XH.lobby:getModule("Lobby"):getEntranceByType(XH.lobby:getModule("Lobby").KW_QUICK_ENTRANCE_TYPE.RELAXED)
    -- 将最近游戏放到第一个位置
    local lastGameID = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_LAST_GOLD_GAMEID, 0)
    if lastGameID ~= 0 then
        for i = #normalGames , 1, -1 do
            if normalGames[i].GameID == lastGameID then
                local tmpData = normalGames[i]
                table.remove(normalGames, i)
                table.insert(normalGames, 1, tmpData)
            end
        end
    end
    --------------------------
    XH.playerData:screenGameList(normalGames,1)
    for i = 1, #normalGames do
        local roomConf = normalGames[i]
        local item = self:cloneGameItem()
        if item then
            item:setVisible(true)
            item.roomConf = clone(roomConf)
            local iconImage, iconColor, outlineColor = self:getIconConf(roomConf.GameID) 
            item:loadTextures(iconImage,iconImage,iconImage,ccui.TextureResType.plistType)
            XH.UITool.setText(item, KW_GAME_NAME,roomConf.GameTitle)
            XH.UITool.setTextColor(item, KW_GAME_NAME, iconColor)
            XH.UITool.enableOutline(item, KW_GAME_NAME, outlineColor)
            item:addTouchEventListener(handler(self, self.onTouchEventQuickJoinGold))
            if i == 1 and self._showFlag then
                XH.UITool.setVisible(item,KW_GAME_FLAG,true)
            elseif self:isShowNewGameFlag(roomConf.GameID, roomConf.PlayerCount) then
                XH.UITool.setVisible(item,"_KW_GAME_NEW",true)
            end
            local pos = self:getGameItemPosition(self._index)
            self._index  = self._index + 1
            item:setPosition(pos)
            self._listViewGoldQuick:addChild(item)
        end
    end
    if not XH.ChannelTool.checkIsCPSChannel() then
        self._index = #normalGames + 1
    end
end

function GameListView:isShowNewGameFlag(gameID, playerCount)
    return false
end

function GameListView:cloneGameItem()
    local item = self._gameItem:clone()
    item:setVisible(true)
    return item
end

function GameListView:initUniunGameData()
    self._curShowMenus = XH.lobby:getModule("Lobby"):getEntranceByType(XH.lobby:getModule("Lobby").KW_QUICK_ENTRANCE_TYPE.JOINT)--XH.configerManager:getLobbyMenuBarConfig(LobbyConfig.MENUBAR_ID.UNION_GAME) or {}
    self._removeIDs = {}
    self:initRemoveIDs()
    if XH.ChannelTool.checkIsCPSChannel() then
        --CPS渠道显示的联运有顺序要求捕鱼王，一刀传世，决战沙邑，捕鱼大奖赛
        --3002/3003/3001/3012 
        local finalMenu = {}
        for _, v in ipairs(self._curShowMenus) do
            if v.IconID == 3002 then
                finalMenu[1] = v
            end
            --if v.IconID == 3003 then
            --    finalMenu[2] = v
            --end
            if v.IconID == 3001 then
                finalMenu[2] = v
            end
            if v.IconID == 3012 then
                finalMenu[3] = v
            end
        end 
        for i = #finalMenu,1,-1 do 
            if finalMenu[i] == nil then
                table.remove( finalMenu,i)
            end
        end
        self._curShowMenus = finalMenu
    end 
end


function GameListView:ChangecurShowMenus(GameIDList,CurShowMenus)
    local finalMenu = clone(CurShowMenus) 
    for _, gameID in ipairs(GameIDList) do
        for i = #finalMenu,1,-1 do 
            if finalMenu[i].IconID == gameID then
                table.remove(finalMenu,i)
            end
        end
    end
    --最多只能显示MAX_UNIUN_GAME_OUT个icon,按从大到小排列,末尾移出
    table.sort(finalMenu,function(a,b)
        return a.IconID > b.IconID
    end)
    while #finalMenu > MAX_UNIUN_GAME_OUT do
        table.remove(finalMenu,#finalMenu)
    end
    return finalMenu
end 


function GameListView:initUniunGameIcon()
    for _, v in ipairs(self._curShowMenus) do
        local iconItem = self:createIcon(v.IconID)
        if iconItem ~= nil then 
            local pos = self:getGameItemPosition(self._index)
            iconItem:setName("UNIUN_" .. v.IconID)
            iconItem:setPosition(pos)
            if XH.ChannelTool.checkIsCPSChannel() then
                iconItem:setContentSize(KW_ICON_ITEM_SIZE)
            end
            self._listViewGoldQuick:addChild(iconItem)
            self._index = self._index + 1
            if v.IconID == LobbyConfig.ICON_ID.QIAN_PAO_BU_YU then
                self:addFishingTransferTips(iconItem)
            end
        end
    end
end

-- 更多游戏
function GameListView:initMoreGame()
    local item = self:cloneGameItem()
    if item then
        item:setVisible(true)
        item:addTouchEventListener(handler(self, self.onMoreTouched))
        local pos = self:getGameItemPosition(self._index)
        item:setPosition(pos)
        XH.UITool.setVisible(item,"_KW_IMG_GAME_NAME",true)
        XH.UITool.setVisible(item,"_KW_GAME_NAME",false)
        self._listViewGoldQuick:addChild(item)
        self._index = self._index + 1
    end
end

function GameListView:createScrollIcon()
    if device.platform == "ios"  then
        return
    end
    local item = ScrollIcon.new()
    if item then
        item:setVisible(true)
        item:setClickCallBack(handler(self,self.onRecommendTouched)) 
    end
    return item
end

-- 与 SpineManager:playAni 中首帧隐藏后 Show 的 Delay 一致，再略延后移除旧骨架，避免切换闪白
local GAMECENTER_SPINE_SHOW_DELAY = 1 / 30
local GAMECENTER_OLD_SPINE_REMOVE_DELAY = GAMECENTER_SPINE_SHOW_DELAY + 0.02
local GAMECENTER_SPINE_PATH = "animation/Lobby/GameCenter/icon/"

--- ShowGame 轮播顺序：第1个、第2个、第1个、第3个… 即 (1,2), (1,3), (1,4)…
local function gameCenterBuildCarouselOrder(showGame)
    local orderIndices = {}
    for i = 2, #showGame do
        orderIndices[#orderIndices + 1] = 1
        orderIndices[#orderIndices + 1] = i
    end
    if #orderIndices == 0 then
        orderIndices = { 1 }
    end
    return orderIndices
end

function GameListView:_gameCenterCreateSpineAnchor(item)
    local spineNode = cc.Node:create()
    if spineNode.setCascadeOpacityEnabled then
        spineNode:setCascadeOpacityEnabled(true)
    end
    spineNode:setPosition(item:getContentSize().width / 2, item:getContentSize().height / 2)
    item:addChild(spineNode)
    return spineNode
end

function GameListView:_gameCenterScheduleSpineStep(spineNode, callback)
    spineNode:runAction(cc.Sequence:create(
        cc.DelayTime:create(3),
        cc.CallFunc:create(callback)
    ))
end

--- 先快照旧子节点再叠加新 Spine，延迟移除旧骨架，避免切换空白帧
function GameListView:_gameCenterPlaySpineStep(spineNode, filename)
    local prevChildren = {}
    local ch = spineNode:getChildren()
    if ch then
        for i = 1, #ch do
            prevChildren[#prevChildren + 1] = ch[i]
        end
    end
    local function afterNewAni(newAni)
        if not newAni then
            return
        end
        if newAni.setCascadeOpacityEnabled then
            newAni:setCascadeOpacityEnabled(true)
        end
        spineNode:runAction(cc.Sequence:create(
            cc.DelayTime:create(GAMECENTER_OLD_SPINE_REMOVE_DELAY),
            cc.CallFunc:create(function()
                if tolua.isnull(spineNode) then
                    return
                end
                for _, c in ipairs(prevChildren) do
                    if c and not tolua.isnull(c) and c:getParent() == spineNode then
                        c:removeFromParent()
                    end
                end
            end)
        ))
    end
    if filename == "zzb_yxzx_rrby2" and XH.RemoteSpineManager then
        XH.RemoteSpineManager:playRemoteAni(spineNode, "buyuGameCenterIcon", {
            clear = false,
            onSuccess = function(newAni)
                afterNewAni(newAni)
            end,
        })
        return
    end
    local newAni = XH.SpineManager:playAni(spineNode, GAMECENTER_SPINE_PATH, filename, "animation", true, nil, nil, false)
    afterNewAni(newAni)
end

-- 游戏中心联运icon动画：循环播放 showGame 中的 spine 动画
function GameListView:_gameCenterStartIconCarousel(item, spineNode, showGame)
    local orderIndices = gameCenterBuildCarouselOrder(showGame)
    local orderLen = #orderIndices
    local curStep = 0
    local function playNext()
        if tolua.isnull(spineNode) or tolua.isnull(item) then
            return
        end
        local idx = orderIndices[(curStep % orderLen) + 1]
        local gameKey = showGame[idx]
        if not gameKey then
            curStep = curStep + 1
            self:_gameCenterScheduleSpineStep(spineNode, playNext)
            return
        end
        local filename = LobbyConfig.GameCenterIconAni and LobbyConfig.GameCenterIconAni[gameKey]
        if not filename then
            curStep = curStep + 1
            self:_gameCenterScheduleSpineStep(spineNode, playNext)
            return
        end
        self:_gameCenterPlaySpineStep(spineNode, filename)
        curStep = curStep + 1
        self:_gameCenterScheduleSpineStep(spineNode, playNext)
    end
    playNext()
end

function GameListView:_gameCenterApplyLianYunIcon(item, lianYun)
    if lianYun.Ani then
        item:loadTexture("cocosStudio/hall/Image/touming.png", ccui.TextureResType.localType)
        local showGame = lianYun.ShowGame
        if showGame and #showGame > 0 then
            local spineNode = self:_gameCenterCreateSpineAnchor(item)
            self:_gameCenterStartIconCarousel(item, spineNode, showGame)
        else
            local spineNode = self:_gameCenterCreateSpineAnchor(item)
            local singleAni = XH.SpineManager:playAni(spineNode, GAMECENTER_SPINE_PATH, "zzb_yxzx_icon", "animation", true)
            if singleAni and singleAni.setCascadeOpacityEnabled then
                singleAni:setCascadeOpacityEnabled(true)
            end
        end
    else
        item:loadTexture("GameCenter_Icon_dark.png", ccui.TextureResType.plistType)
    end
end

function GameListView:_gameCenterApplyCornerTag(item, tag)
    if tag and tag ~= "" then
        XH.UITool.setVisible(item, "_KW_GAME_TAG_BG", true)
        XH.UITool.setText(item, "_KW_GAME_TAG", tag)
    else
        XH.UITool.setVisible(item, "_KW_GAME_TAG_BG", false)
        XH.UITool.setText(item, "_KW_GAME_TAG", "")
    end
end

function GameListView:createGameCenterIcon()
    if device.platform == "ios" then
        return
    end
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/CSB/GameCenter/Image/GameCenter.plist")
    local item = self:cloneGameItem()
    if not item then
        return nil
    end
    item:setVisible(true)
    -- 与 MenuIcon 等一致，使父节点透明度能作用到子节点及 Spine
    if item.setCascadeOpacityEnabled then
        item:setCascadeOpacityEnabled(true)
    end
    XH.UITool.setVisible(item, "_KW_GAME_NAME", false)

    local AllConfig = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    local lianYun = AllConfig and AllConfig.LianYunIcon
    if lianYun then
        self:_gameCenterApplyLianYunIcon(item, lianYun)
        self:_gameCenterApplyCornerTag(item, lianYun.Tag)
    else
        item:loadTexture("GameCenter_Icon_dark.png", ccui.TextureResType.plistType)
    end

    local tagBgNode = XH.UITool.seekNodeByName(item, "_KW_GAME_TAG_BG")
    if tagBgNode then
        tagBgNode:setLocalZOrder(1)
    end
    item:addTouchEventListener(handler(self, self.onGameCenterTouched))
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cy26031003)
    return item
end

-- 推荐游戏
function GameListView:initRecommend()
    local item = self:createScrollIcon()
    if item then
        local pos = self:getGameItemPosition(self._index)
        item:setPosition(pos)
        self._listViewGoldQuick:addChild(item, 10)
        self._index = self._index + 1 
    end
end

function GameListView:createIcon(iconID)
    local iconConf = LobbyConfig.MenuIconConfig[tonumber(iconID)]
    if not iconConf then
        return nil
    end
    if iconConf.Plist then
        cc.SpriteFrameCache:getInstance():addSpriteFrames(iconConf.Plist)
    end
    local param = {
        iconResName = iconConf.IconResName,
        bNeedRedPoint = iconConf.IsNeedRedPoint,
        bShowWithAni = iconConf.AniInfo ~= nil,
        aniInfo = iconConf.AniInfo,
        bShowWithDargonBones = iconConf.DargonBonesInfo ~= nil,
        dargonBonesInfo = iconConf.DargonBonesInfo,
        iconResPath = iconConf.IconResPath,
        iconAniScale = iconConf.IconAniScale,
        redPointPos = iconConf.RedPointPos,
        OffSetX = iconConf.OffSetX,
        OffSetY = iconConf.OffSetY,
        progressInfo = iconConf.ProgeressInfo,
        iconScale = iconConf.IconScale,
        bShowWithSpine = iconConf.SpineInfo ~= nil,
        spineInfo = iconConf.SpineInfo,
    }
    if self._bSmallIconBar and iconConf.MiniIconResName then
        param.iconResName = iconConf.MiniIconResName
    end
    local menuItem = MenuIcon.new(param)
    local tempLayout = ccui.Layout:create()
    menuItem = XH.UIButton.create(menuItem)
    menuItem:setName(tostring(iconID))
    menuItem:setClickCallBack(handler(self, self.onMenuTouched))
    tempLayout:addChild(menuItem)
    tempLayout:setCascadeOpacityEnabled(true)
    if not XH.ChannelTool.checkIsDoubleKouGame() and (XH.ChannelTool.checkIsCPSChannel() or XH.ChannelTool.checkIsWaishengChannel()) then
        tempLayout:setScale(1.9)
    else
        tempLayout:setScale(1.5)
    end
    return tempLayout
end

--点击事件
function GameListView:onMenuTouched(send, eventType)
    if self._itemClickCallBack and self._bindTo then
        if eventType == ccui.TouchEventType.ended then
            local eventMsg = {}
            eventMsg.send = send
            eventMsg.eventType = eventType
            eventMsg.bind = self._bindTo
            self._itemClickCallBack(send, eventMsg)
        end
    end
end

function GameListView:onMoreTouched(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160,160,160))
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(1 * more_games_scale)
        send:setColor(cc.c3b(255,255,255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    --if XH.playerData:checkNewRealName() ~= 0 then return end--实名限制
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_GOLD_GAME_MORE)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.LOBBY_GOLD_GAME_MORE)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.jb24101702)
    XH.lobby:getModule("Lobby"):showXiuXianGame()
end

function GameListView:onRecommendTouched(send,eventType)
    if eventType == ccui.TouchEventType.ended then
        local tmpData = {}
        tmpData.userid = XH.playerData:getNumberID()
        XH.throwDataManager:throwData(XH.ThrowDataDefine.H5Game_ROOM, tmpData)   
        XH.lobby:getModule("Lobby"):showH5room()
    end 
end

function GameListView:onGameCenterTouched(send, eventType)
    if eventType == ccui.TouchEventType.ended then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cy26031004)
        XH.viewManager:openView("GameCenterView")
    end
end

function GameListView:onTouchEventQuickJoinGold(send, eventType, ext)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160,160,160))
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(1 * games_icon_scale)
        send:setColor(cc.c3b(255,255,255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if send.roomConf.GameID == LobbyConfig.TempGuanDanGameID then
        XH.viewManager:openView("QuestionGuideView", nil, {from = "Lobby", type = "GuanDan"})
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GUANDAN_LOBBY_CLICK, nil, {area_id = XH.areaData:getAreaID(),channel_id = XH.SysTool:getChannelID()})
        return
    end
    if send.roomConf.GameID == 30116 or send.roomConf.GameID == 42038 then
        local lastQBConfID = cc.UserDefault:getInstance():getIntegerForKey("LAST_JOIN_QBGOLD_INDEX", 0)
        if lastQBConfID ~= 0 and lastQBConfID ~= send.roomConf.LeisureID then
            local entrances = XH.lobby:getModule("Lobby"):getEntranceByType()
            for _,v in pairs(entrances) do 
                if v.LeisureID == lastQBConfID then
                    send.roomConf = clone(v)
                    break
                end
            end
        end
    end
    if XH.playerData:checkNewRealName(send.roomConf.GameID) ~= 0 then return end--实名限制
    if XH.lobby:getModule("Gold"):reqTaskGetAward() then
        return
    end
    self._lastConfID = nil
    self._lastRoomFlag = nil
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_JOIN_GOLD_GAME,{gameid = send.roomConf.GameID , gameName = send.roomConf.GameName})
    local areaIDAndGameID = XH.areaData:getAreaID() .. "_" .. send.roomConf.GameID
    local gameName = send.roomConf.GameTitle or ""
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.jb24101701, {page_label = "金币游戏",item_id = gameName,game_id = areaIDAndGameID })

    -- if send.roomConf and send.roomConf.GoldMode and send.roomConf.GoldMode == 50 then 
    --     XH.lobby:getModule("Lobby"):reqJoinGoldRoom(send.roomConf.Index, send.roomConf.roomFlag)
    -- else
        if not XH.goldConfigManager:getGoldRoomDetailInfos() then
            XH.TipTool:showLoading()
            self._lastConfID = send.roomConf.LeisureID
            self._lastRoomFlag = send.roomConf.roomFlag
            self._lastExt = ext
            XH.goldConfigManager:changeGroupLogin()
            return
        end
        XH.lobby:getModule("Lobby"):reqJoinGoldRoom(send.roomConf.LeisureID, send.roomConf.roomFlag, ext)
    -- end
    
end

function GameListView:onRespGoldRoomInfo(event)
    if self._lastConfID and self._lastRoomFlag then
        XH.TipTool.hideLoading()
        XH.lobby:getModule("Lobby"):reqJoinGoldRoom(self._lastConfID, self._lastRoomFlag, self._lastExt)
        self._lastConfID = nil
        self._lastRoomFlag = nil
    end
end

function GameListView:isIconNeedShow(iconID)
    local showMenus = self:getShowMenus()
    for _, iconConf in pairs(showMenus) do
        if iconConf.IconID == iconID then
            return true
        end
    end
    return false
end

function GameListView:initRemoveIDs()
    if self._showDefaultUnion then
        return
    end
    for _, v in ipairs(self._curShowMenus) do
        local iconConf = LobbyConfig.MenuIconConfig[tonumber(v.IconID)]
        if iconConf and iconConf.IsDefaultHide then
            self._removeIDs[v.IconID] = true
        end
    end
end

function GameListView:getShowMenus()
    local showMenus = {}
    for _, v in ipairs(self._curShowMenus) do
        if self:checkIconIsOpen(v.IconID)
        and self:checkIconPlatform(v.IconID)
        and self:checkIconJsonConfPlatform(v)
        and not self._removeIDs[v.IconID] then
            table.insert(showMenus, v)
        end
    end
    return showMenus
end

function GameListView:checkIconIsOpen(iconID)
    local iconConf = LobbyConfig.MenuIconConfig[tonumber(iconID)]
    if not iconConf then
        return false
    end
    if iconID == LobbyConfig.ICON_ID.LIANYUN_QIXINGBAOPAI then
        return XH.lobby:getModule("Lobby"):isLianYunWhite()
    end
    return iconConf.IsOpen
end

-- 验证json配置中的平台
function GameListView:checkIconJsonConfPlatform(jsonConf)
    if not jsonConf then
        return false
    end
    return self:checkPlatform(jsonConf.DevicePlatform)
end

-- 验证lua配置中的平台
function GameListView:checkIconPlatform(iconID)
    if not iconID then
        return false
    end
    local iconConf = LobbyConfig.MenuIconConfig[tonumber(iconID)]
    if not iconConf then
        return false
    end
    return self:checkPlatform(iconConf.Platform)
end

function GameListView:checkPlatform(devicePlatform)
    if not devicePlatform or devicePlatform == LobbyConfig.DEVICE_PLATFORM.ALL then
        return true
    end
    if device.platform == "android" then
        return devicePlatform == LobbyConfig.DEVICE_PLATFORM.ANDROID
    else
        return devicePlatform ~= LobbyConfig.DEVICE_PLATFORM.ANDROID
    end
end

-- 是否显示传奇ICON
function GameListView:showLegendState(msg)
    if msg and msg.state == 1 then
        self._showDefaultUnion = true
        self._index = 1
        self:refreshUI()
    end
end

function GameListView:refreshLianYunWhite()
    self._index = 1
    self:refreshUI()
end

function GameListView:initGoldQuickListView( )
    self._listViewGoldQuick:removeAllChildren()
    self._listViewGoldQuick:setScrollBarEnabled(false)
end

function GameListView:initExtraData()
    self._mjiconindex = 0
end 

function GameListView:refreshUI()
    self:initExtraData()
    self:initGoldGameList()     --初始化金币场游戏数据
    self:initUniunGameData()    --初始化联运游戏数据
    self:resetGoldGames()
    self:initGoldQuickListView()

    if XH.ChannelTool:checkIsCPSChannel() and not XH.ChannelTool.checkIsDoubleKouGame() then
        self:initUniunGameIcon()    --初始化联运游戏Icon
        self:initGoldQuickList()    --初始化金币场游戏列表
        self:initRecommend()
        self:initMoreGame()
    elseif XH.ChannelTool.checkIsECarChannel() then
        self:initGoldQuickList()
        self:initMoreGame()
    else
        self:initQuickEntrance()
        -- self:initRecommend()
        self:initMoreGame()
    end
end

function GameListView:checkQuickEntranceData(entrances)
    local showMenus = {}
    for _, v in ipairs(entrances) do
        if (v.IconID and self:checkIconIsOpen(v.IconID)
        and self:checkIconPlatform(v.IconID)) or (v.IconID and v.IconID == LobbyConfig.ICON_ID.LIAN_YUN_ROOM) or not v.IconID then
            table.insert(showMenus, v)
        end
    end
    return showMenus
end

function GameListView:initQuickEntrance()
    local entrances = XH.lobby:getModule("Lobby"):getEntranceByType()
    if not entrances or not next(entrances) then
        return
    end

    entrances = self:checkQuickEntranceData(entrances)
    
    -- 将最近游戏放到第一个位置
    local lastGameID = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_LAST_GOLD_GAMEID, 0)
    local lastConfID = XH.userDefault:getValue(XH.userDefault.KEY_ID.LAST_JOIN_GOLD_INDEX, 0)
    if lastConfID == 2036 then
        lastConfID = 2001
    end
    local isFind = false
    if lastConfID ~= 0 then
        for i = #entrances , 1, -1 do
            if entrances[i].LeisureID and entrances[i].icon_type == XH.lobby:getModule("Lobby").KW_QUICK_ENTRANCE_TYPE.RELAXED  then
                if entrances[i].LeisureID == lastConfID then
                    local tmpData = entrances[i]
                    table.remove(entrances, i)
                    table.insert(entrances, 1, tmpData)
                    isFind = true
                end
            end
        end
    end
    if not isFind and lastGameID ~= 0 then
        for i = #entrances , 1, -1 do
            if entrances[i].icon_type and entrances[i].icon_type == XH.lobby:getModule("Lobby").KW_QUICK_ENTRANCE_TYPE.RELAXED  then
                if entrances[i].GameID == lastGameID then
                    local tmpData = entrances[i]
                    table.remove(entrances, i)
                    table.insert(entrances, 1, tmpData)
                end
            end
        end
    end
    --------------------------
    -- 最大入口个数，共9个，包含两个更多游戏和推荐游戏，IOS无推荐游戏
    local KW_MAX_CNT = 8
    if device.platform == "ios" then
        KW_MAX_CNT = 8
    end
    XH.playerData:screenGameList(entrances,1)
    if XH.configerManager:getIsIosTishen() then
        local isHasRRBYConf = false
        for tempIndex, tempEntrance in pairs(entrances) do
            if tempIndex > KW_MAX_CNT then
                break
            end
            if tempEntrance.IconID and self:checkIsRRBYIconID(tempEntrance.IconID) then
                isHasRRBYConf = true
            end
        end
        --提审时默认显示人人捕鱼
        if not isHasRRBYConf then
            local rrbyConf = {
                IconID = LobbyConfig.ICON_ID.REN_REN_BU_YU,
                icon_type = "joint",
            }
            if #entrances >= KW_MAX_CNT then
                entrances[KW_MAX_CNT] = rrbyConf
            else
                entrances[#entrances + 1] = rrbyConf
            end
        end
    end
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/Image/GoldIcons.plist")
    local isShowRRBY = false
    XH.lobby:getModule("NewGoldScene"):setIconVisible(NewGoldSceneDefine.SHOW_SCENE.PANEL, false)
    for k, v in pairs(entrances) do
        if k > KW_MAX_CNT then
            break
        end
        if v.GameID == LobbyConfig.GoldNewGameID then
            XH.lobby:getModule("NewGoldScene"):setIconVisible(NewGoldSceneDefine.SHOW_SCENE.PANEL, true)
        end
        if v.icon_type == XH.lobby:getModule("Lobby").KW_QUICK_ENTRANCE_TYPE.RELAXED then
            self:createGameEntrance(v)
        elseif v.icon_type == XH.lobby:getModule("Lobby").KW_QUICK_ENTRANCE_TYPE.JOINT then
            self:createUniunEntrance(v)
            if v.IconID and (v.IconID == LobbyConfig.ICON_ID.REN_REN_BU_YU or v.IconID == LobbyConfig.ICON_ID.REN_REN_BU_YU_1 or v.IconID == LobbyConfig.ICON_ID.REN_REN_BU_YU_2) then
                isShowRRBY = true
            end
        end
    end
    if isShowRRBY then
        XH.lobby:getModule("Replugin"):postToSepperllitaExposure(1)
    end
end

function GameListView:checkIsRRBYIconID(iconID)
    if iconID and (iconID == LobbyConfig.ICON_ID.REN_REN_BU_YU or iconID == LobbyConfig.ICON_ID.REN_REN_BU_YU_1 or iconID == LobbyConfig.ICON_ID.REN_REN_BU_YU_2) then
        return true
    end
    return false
end

function GameListView:getGoldIconConf(gameID, gameTitle, leisureID)
    local tempConf = LobbyConfig.GoldIcons[gameID]
    if not tempConf or #tempConf < 1 then
        return
    end
    if #tempConf == 1 then
        return tempConf[1]
    end
    if leisureID then
        for _, v in ipairs(tempConf) do
            if v.LeisureID == leisureID then
                return v
            end
        end
    end
    for _, v in ipairs(tempConf) do
        if v.Text == gameTitle then
            return v
        end
    end
end

function GameListView:createGoldNewItem(data)
    local iconItem = self:createIcon(LobbyConfig.ICON_ID.GOLDNEW_LZDDZ_CENTER)
    if iconItem ~= nil then
        local item = self._KW_PANEL_GAME_ICON_ITEM:clone()
        item:addChild(iconItem)
        iconItem:setPosition(cc.p(item:getContentSize().width*0.5,item:getContentSize().height*0.5))
        local pos = self:getGameItemPosition(self._index)
        self._index  = self._index + 1
        item:setPosition(pos)
        self._listViewGoldQuick:addChild(item)
    end
end

function GameListView:createGameEntrance(data)
    if data.GameID == LobbyConfig.GoldNewGameID then
        self:createGoldNewItem(data)
        return
    end
    local item = self:cloneGameItem()
    if item then
        item:setVisible(true)
        item.roomConf = clone(data)
        local tempGoldIconConf = self:getGoldIconConf(data.GameID, data.GameTitle, data.LeisureID)
        if tempGoldIconConf then
            item:loadTexture(tempGoldIconConf.Bg, ccui.TextureResType.plistType)
            XH.UITool.ignoreContentAdaptWithSize(item,"_KW_IMG_GAME_NAME",true)
            if tempGoldIconConf.Name == "" then
                XH.UITool.setVisible(item,"_KW_IMG_GAME_NAME",false)
            else
                XH.UITool.setVisible(item,"_KW_IMG_GAME_NAME",true)
                XH.UITool.loadTexture(item, "_KW_IMG_GAME_NAME", tempGoldIconConf.Name, ccui.TextureResType.plistType)
            end
            XH.UITool.setVisible(item,KW_GAME_NAME,false)
        else
            local iconImage, iconColor, outlineColor = self:getIconConf(data.GameID)
            item:loadTexture(iconImage, ccui.TextureResType.plistType)
            XH.UITool.setText(item, KW_GAME_NAME,data.GameTitle)
            XH.UITool.setTextColor(item, KW_GAME_NAME, iconColor)
            XH.UITool.enableOutline(item, KW_GAME_NAME, outlineColor)
            XH.UITool.setVisible(item,"_KW_IMG_GAME_NAME",false)
            XH.UITool.setVisible(item,KW_GAME_NAME,true)
        end
        item:addTouchEventListener(handler(self, self.onTouchEventQuickJoinGold))
        if self._index == 1 and self._showFlag then
            XH.UITool.setVisible(item,KW_GAME_FLAG,true)
        elseif self:isShowNewGameFlag(data.GameID, data.PlayerCount) then
            XH.UITool.setVisible(item,"_KW_GAME_NEW",true)
        end
        if data.GameID == LobbyConfig.TempGuanDanGameID then
            XH.UITool.setVisible(item,KW_GAME_NAME, false)
        end
        XH.UITool.setVisible(item, "_KW_FLAG_NEWGAME", data.GameID and data.GameID == LobbyConfig.TempGuanDanGameID)
        local pos = self:getGameItemPosition(self._index)
        self._index  = self._index + 1
        item:setPosition(pos)
        local imgMark,txtMark = self:getHeguiMark(data.GameID,data.GameTitle,data.PlayerCount)
        if XH.lobby:getModule("Mark"):isShowMarkGame(data.GameID) and imgMark ~= nil then 
            XH.UITool.setVisible(item,KW_GAME_HEGUI,true)
            XH.UITool.loadTexture(item, KW_GAME_HEGUI,imgMark,ccui.TextureResType.plistType)
            XH.UITool.setText(item, KW_GAME_NAME,txtMark)
        end
        self._listViewGoldQuick:addChild(item)
    end
end

function GameListView:analyGoldGameTitle(gameTitle)
    if gameTitle == "瞎子麻将" or gameTitle == "亮子麻将" then
        return "余姚麻将"
    end
    return gameTitle
end

--11.12
--合规金币场入口角标的增加
--因为瞎子麻将和亮子麻将采用同一GameID
--无法找到区别它的其它字段故采取在view层做操作
function GameListView:getHeguiMark(GameID,GameTitle,PlayerCount)
    local imgConf = {
        [30159] = "lobby_xiuxian_corner_chayuan.png",  --  双扣
        [30116] = "lobby_xiuxian_corner_chayuan.png",  --  双扣
        [30579] = "lobby_xiuxian_corner_chayuan.png",  --  暗斗双扣
        [42038] = "lobby_xiuxian_corner_chayuan.png",  --  双扣
        [30386] = "lobby_xiuxian_corner_shutcard.png",  --  关牌 
        [30578] = "lobby_xiuxian_corner_xianshi.png",  -- 干瞪眼

        [301340002] = "lobby_xiuxian_corner_xianshi.png",  --  二人 
        [301170002] = "lobby_xiuxian_corner_erren.png",  --  二人 
        [30332] = "lobby_xiuxian_corner_lingxi.png",  --  灵溪
    }
    --余姚麻将的特判
    if GameTitle == "瞎子麻将" then 
        return "lobby_xiuxian_corner_xiazi.png",self:analyGoldGameTitle(GameTitle)
    elseif GameTitle == "亮子麻将" then  
        return "lobby_xiuxian_corner_liangzi.png",self:analyGoldGameTitle(GameTitle)
    elseif PlayerCount and imgConf[tonumber(GameID .. "000" .. PlayerCount)] then
        return imgConf[tonumber(GameID .. "000" .. PlayerCount)] or nil, self:analyGoldGameTitle(GameTitle)
    else
        return imgConf[GameID] or nil, self:analyGoldGameTitle(GameTitle)
    end
end

function GameListView:createUniunEntrance(data)
    local iconItem
    if data.IconID == LobbyConfig.ICON_ID.LIAN_YUN_ROOM then
        -- iconItem = self:createScrollIcon()
        iconItem = self:createGameCenterIcon()
        self._gameCenterIconItem = iconItem
        self:updateGameCenterRedPoint()
    else
        iconItem = self:createIcon(data.IconID)
    end
    
    if iconItem ~= nil then
        local pos = self:getGameItemPosition(self._index)
        iconItem:setName("UNIUN_" .. data.IconID)
        iconItem:setPosition(pos)
        if XH.ChannelTool.checkIsCPSChannel() then
            iconItem:setContentSize(KW_ICON_ITEM_SIZE)
        end
        self._listViewGoldQuick:addChild(iconItem)
        self._index = self._index + 1
        if data.IconID == LobbyConfig.ICON_ID.QIAN_PAO_BU_YU then
            self:addFishingTransferTips(iconItem)
        end
        if (data.IconID == LobbyConfig.ICON_ID.REN_REN_BU_YU or data.IconID == LobbyConfig.ICON_ID.REN_REN_BU_YU_1 or data.IconID == LobbyConfig.ICON_ID.REN_REN_BU_YU_2) and XH.lobby:getModule("RRBuYu"):isDownloading() then
            XH.lobby:getModule("RRBuYu"):rrbyHotUpdateProgressCallback()
        end
        --联运曝光
        if UNIONGAME_NAME[data.IconID] then
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.REMREMBUYU_PUSH,{label = UNIONGAME_NAME[data.IconID]})
        end
    end
end

function GameListView:updateGameCenterRedPoint()
    if not self._gameCenterIconItem then
        return
    end
    local redPointStatus = XH.lobby:getModule("GameCenter"):getRedPointStatus()
    local flagNode = self._gameCenterIconItem:getChildByName("_KW_RED_FLAG")
    if not flagNode then
        return
    end
    flagNode:setLocalZOrder(1)
    if self._gameCenterIconItem and redPointStatus then
        flagNode:setVisible(true)
    else
        flagNode:setVisible(false)
    end
end

function GameListView:onRRFishProgressChanged(event)
    if not event.data then
        return
    end
    local percent = event.data.percent
    if device.platform == "android" then
        self:showRRBYProgressPercent(LobbyConfig.ICON_ID.LIANYUN_QIXINGBAOPAI, percent)
        self:showRRBYProgressPercent(LobbyConfig.ICON_ID.LIANYUN_CARD13, percent)
        self:showRRBYProgressPercent(LobbyConfig.ICON_ID.LIANYUN_APGDY, percent)
    end
    self:showRRBYProgressPercent(LobbyConfig.ICON_ID.REN_REN_BU_YU, percent)
    self:showRRBYProgressPercent(LobbyConfig.ICON_ID.REN_REN_BU_YU_1, percent)
    self:showRRBYProgressPercent(LobbyConfig.ICON_ID.REN_REN_BU_YU_2, percent)
end

function GameListView:showXIUXIANLobby()
    self._isInGoldHall = true
    if XH.lobby:getModule("LianYun") then
        XH.lobby:getModule("LianYun"):hideProgress()
    end
    if XH.lobby:getModule("RRBuYu") then
        XH.lobby:getModule("RRBuYu"):hideProgress()
    end
end

function GameListView:showYouXILobby()
    self._isInGoldHall = false
    if XH.lobby:getModule("LianYun") then
        XH.lobby:getModule("LianYun"):hideProgress()
    end
    if XH.lobby:getModule("RRBuYu") then
        XH.lobby:getModule("RRBuYu"):hideProgress()
    end
end

function GameListView:onLianYunProgressChanged(event)
    if not event.data then
        return
    end
    local percent = event.data.percent
    local gameID = event.data.gameID
    local iconIDs = {LobbyConfig.ICON_ID.LIANYUN_QIXINGBAOPAI, LobbyConfig.ICON_ID.LIANYUN_CARD13, LobbyConfig.ICON_ID.LIANYUN_APGDY}
    if device.platform == "android" then
        iconIDs = {}
    end
    local targetIconID = nil
    if gameID == LobbyConfig.QXBP_GAMEID then
        targetIconID = LobbyConfig.ICON_ID.LIANYUN_QIXINGBAOPAI
    elseif gameID == LobbyConfig.CARD13_GAMEID then
        targetIconID = LobbyConfig.ICON_ID.LIANYUN_CARD13
    elseif gameID == LobbyConfig.GAME_ID_APGDY then
        targetIconID = LobbyConfig.ICON_ID.LIANYUN_APGDY
    end
    for _, iconID in ipairs(iconIDs) do
        if targetIconID == nil or targetIconID == iconID then
            local iconLianYunLayout = self._listViewGoldQuick:getChildByName("UNIUN_" .. iconID)
            if iconLianYunLayout and iconLianYunLayout:getChildByName(iconID) then
                local p = percent
                if self._isInGoldHall then
                    p = -1
                end
                iconLianYunLayout:getChildByName(iconID):showProgressPercent(p)
                if targetIconID then
                    break
                end
            end
        end
    end
end

function GameListView:showRRBYProgressPercent(iconID, percent)
    local iconRenRenBuYuLayout = self._listViewGoldQuick:getChildByName("UNIUN_" .. iconID)
    if iconRenRenBuYuLayout and iconRenRenBuYuLayout:getChildByName(iconID) then
        if self._isInGoldHall then
            percent = -1
        end
        iconRenRenBuYuLayout:getChildByName(iconID):showProgressPercent(percent)
    end
end

function GameListView:addFishingTransferTips(iconNode)
    if not iconNode then
        return
    end
    local tmpTip = require("src.lobby.Modules.FishingKingTransfer.TransferTip").new()
    if tmpTip then
        local menuItem = iconNode:getChildren()[1]
        if menuItem then
            menuItem:addChild(tmpTip)
            tmpTip:setPosition(menuItem:getContentSize().width / 2, menuItem:getContentSize().height - 30)
        end
    end
end

return GameListView��