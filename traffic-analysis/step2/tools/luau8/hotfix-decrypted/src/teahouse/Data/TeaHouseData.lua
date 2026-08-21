---@type TeaHouseData
local TeaHouseData = class("TeaHouseData")

TeaHouseData.UC_RIGHT = {
    NO = 0, ---无权限
    YES = 1, ---有权限
    WAITING = 2, ---等待领队审批
    MAXTEAHOUSE = 3, ---加入的比赛场已满
    MAXMEMBERS = 4, ---比赛场人数满了
    NOT_ALLOW = 5, ---不允许申请
    LIMIT = 6, ---开启了用户比赛场玩家限制，不允许申请
    ST_SHIELD = 7,  ---领队屏蔽
    BAN = 8,--被ban掉了
}

TeaHouseData.POWER_LEVEL = {
    OWNER = 0, ---领队
    ADMIN = 1, ---副领队
    MEMBER = 2, ---普通成员
    BLACK = 3, ---黑名单
}

TeaHouseData.POWER_VALUE = {
    ALLOW_ALL = 0, ---允许全部
    ALLOW_SAME = 1, ---允许同级别及以下
    ALLOW_LOW = 2, ---允许低级别
    FORBID = 3, ---禁止
}

TeaHouseData.IDENTITY = {
    -- 领队
    OWNER = 2,
    -- 副领队
    ADMIN = 1,
    -- 成员
    MEMBER = 0,
    -- 用户和副领队双重身份
    AGENTADMIN = 5,
}

TeaHouseData.ADMIN_RIGHT = {
    AUDIT = 1, ---审核权（同意玩家加入或退出）
    INVITE = 2, ---邀请权（邀请玩家进比赛场）
    BLACK = 4, ---禁玩权（将玩家加入黑名单，不能游戏）
    KICK = 8, ---踢人权（将玩家踢出比赛场）
    QUERY = 16, ---查询权（查询战绩权限）
    FILTER = 32, ---筛选权（筛选战绩权限）
    BILL = 64, ---标记权（战绩计算）
    INVENTORY = 128, ---副领队账号卡划入比赛场
    SET_PLAY_TYPE = 8192, ---修改固定玩法
    SET_PLAY_TYPES = 16384, ---修改多固定玩法
    DELETE_TABLE = 32768, ---删除桌子
    CARD = 65536, ---划卡权（划卡给比赛场）
    CREATE_TABLE = 131072, ---创建桌子权限
    RELAUNCH = 262144, ---重新开启比赛场权限
    PAUSE = 524288, ---暂时关闭比赛场权限
    CHECKRANK = 4194304, ---查看排行榜
}

TeaHouseData.RANK_BIT = {
    DAY_COST = 8,
    DAY_PLAY_COUNT = 16,
    DAY_BIG_WINNER = 64,
    DAY_SCORE = 256,
    FORBID = 512,
    WIN_RATE = 1024,
}

function TeaHouseData:ctor()
    self._appID = 0

    ---比赛场列表信息
    self._teaHouseList = {}

    ---是否在比赛场中
    self._isInTeahouse = false

    ---创建的桌子ID
    self._createTableID = nil
    ---是否显示桌子规则信息
    self._isShowCreateRule = true

    ---桌子信息
    self._tableInfos = {}
    ---桌子数量
    self._tableCount = 0
    ---桌子总数量
    self._tableTotalCount = 0
    ---比赛场支付方式
    self._payTypes = {}

    ---比赛场号码
    self._teaNumber = nil
    ---比赛场口令 密码
    self._teaHousePwd = nil
    ---比赛场标题
    self._teaHouseTitle = nil
    --比赛场状态,默认开启
    self._teaHouseStatus = 1
    ---比赛场主文名
    self._teaHouseName = ""
    ---比赛场名字备注
    self._teaHouseNameExt = ""
    ---比赛场公告
    self._teaHouseNotice = ""
    ---比赛场支付模式
    self._teaHousePayMode = 0
    ---是否末位消耗
    self._bLastCost = false

    ---是否为领队
    self._isOwner = false
    ---是否为副领队
    self._isAdmin = false
    ---权限
    self._ucRight = nil

    --是否可以退出比赛场
    self._isCanQuitTeaHouse = false

    ---领队名字
    self._ownerName = ""
    ---领队Url
    self._ownerUrl = ""

    ---玩家信息
    self._playerInfos = {}
    ---玩家人数
    self._playerCount = 0
    ---最大玩家人数
    self._maxPlayerCount = 0
    --下次清理时间
    self._clearTime = 0
    --系统自动踢出时间
    self._kickTime = 0
    --系统自动踢出人数
    self._kickCount = 0
    ---玩家在线人数
    self._onlineCount = 0
    ---比赛场玩家在线人数
    self._playerOnlineCount = 0
    ---成员信息
    self._memberInfos = {}
    ---成员扩展信息
    self._memberInfoExs = {}
    ---在线信息
    self._onlineInfos = {}

    ---领队房卡数
    self._propCount = 0
    ---新会员默认消耗最多
    self._defaultPropCount = 0
    ---本比赛场划卡数
    self._selfPropCount = 0
    ---比赛场每日最大消耗
    self._maxDailyPropCount = 0
    ---默认可透支的道具数
    self._overDraftPropCount = 0
    ---用户显示房卡
    self._userShowPropCount = 0

    self._askPowerCount = 0

    ---固定玩法信息
    self._playModeInfos = {}

    ---是否陌生人可见
    self._isOthersShow = false

    ---房卡兑换比例
    self._cardExchangeRate = 1

    self._playerOwnerPropCount = 0

    self._rankBit = 0

    self._teaHouseLevel = 0 -- 比赛场等级
    self._teaHouseActiveValue = 0 --玩家活跃值

    self._useBuyedProp = true --温茶1.0方案，客户端判断显示后台卡还是购买卡
    self._playModeInfoFlag = false --是否已经请求到固定玩法信息

    self._ownerTeahouseCount = 0
    
    self._bShowingTableGuide = false

    self._timeCardsInfo = {}

    self._closeFinishBill = false   -- 是否关闭点赞功能
end

function TeaHouseData:reset(isRelink)
    isRelink = isRelink or false

    ---桌子信息
    self._tableInfos = {}
    ---玩家信息
    self._playerInfos = {}
    ---玩家人数
    self._playerCount = 0
    ---最大玩家人数
    self._maxplayerCount = 0
    --下次清理时间
    self._clearTime = 0
     --系统自动踢出时间
     self._kickTime = 0
     --系统自动踢出人数
     self._kickCount = 0
    ---玩家在线人数
    self._playerOnlineCount = 0
    ---成员扩展信息
    self._memberInfoExs = {}

    self._askPowerCount = 0

    if not isRelink then
        --TODO
    end

    ---创建的桌子ID
    self._createTableID = nil

    ---桌子数量
    self._tableCount = 0

    --比赛场状态,默认开启
    self._teaHouseStatus = 1

    ---比赛场每日最大消耗
    self._maxDailyPropCount = 0
    ---默认可透支的道具数
    self._overDraftPropCount = 0
    ---用户显示房卡
    self._userShowPropCount = 0

    self._playerOwnerPropCount = 0
    self._playModeInfoFlag = false

    self._bShowingTableGuide = false
    --TODO
end

function TeaHouseData:setAppID(appID)
    self._appID = appID
end

function TeaHouseData:getAppID()
    return self._appID
end

function TeaHouseData:resetTeaHouseList()
    self._teaHouseList = {}
end

function TeaHouseData:addTeaHouse(teaHouseID, teaHouseInfo)
    self._teaHouseList[teaHouseID] = teaHouseInfo
end

function TeaHouseData:removeTeaHouse(teaHouseID)
    self._teaHouseList[teaHouseID] = nil
end

function TeaHouseData:getTeaHouseList()
    return self._teaHouseList
end

function TeaHouseData:getTeaHouseInfoByID(teaHouseID)
    return self._teaHouseList[teaHouseID]
end

function TeaHouseData:setIsInTeahouse(isInTeahouse)
    self._isInTeahouse = isInTeahouse
end

function TeaHouseData:isInTeahouse()
    return self._isInTeahouse
end

function TeaHouseData:setCreateTableID(createTableID)
    self._createTableID = createTableID
end

function TeaHouseData:getCreateTableID()
    return self._createTableID
end

function TeaHouseData:setIsShowCreateRule(isShowCreateRule)
    self._isShowCreateRule = isShowCreateRule
end

function TeaHouseData:isShowCreateRule()
    return self._isShowCreateRule
end

function TeaHouseData:setTableInfos(tableInfos)
    self._tableInfos = tableInfos
end

function TeaHouseData:getTableInfos()
    return self._tableInfos
end

function TeaHouseData:getTableInfoByID(tableID)
    return self._tableInfos[tableID]
end

function TeaHouseData:checkTableState(tableInfo)
    return tableInfo.state ~= TeaHouse.TeaHouseProtocol.TableInfo.FLAG.ST_DISBAND
end

function TeaHouseData:addTableInfoByID(tableID, tableInfo)
    if not self:getTableInfoByID(tableID) then
        self._tableCount = self._tableCount + 1
    end
    tableInfo.nPlayerCount = 0
    for i = 1, tableInfo.size do
        tableInfo.nAreaid[i] = tableInfo.nAreaid[i] or 0
        tableInfo.nNumid[i] = tableInfo.nNumid[i] or 0
        if tableInfo.nAreaid[i] ~= 0 and tableInfo.nNumid[i] ~= 0 then
            tableInfo.nPlayerCount = tableInfo.nPlayerCount + 1
        end
    end
    if not TeaHouse.ReadGameListAndRuleConfig.judgeIsCard13ByGameId(tableInfo.gameid) then
        self._tableInfos[tableID] = tableInfo
    end
end

function TeaHouseData:removeTableInfoByID(tableID)
    local tableInfo = self:getTableInfoByID(tableID)
    if not tableInfo then
        return
    end
    for i = 1, tableInfo.size do
        tableInfo.nAreaid[i] = 0
        tableInfo.nNumid[i] = 0
        local areaID = tableInfo.nAreaid[i]
        local numID = tableInfo.nNumid[i]
        if areaID ~= 0 and numID ~= 0 then
            local playerInfo = self:getPlayerInfo(areaID, numID)
            if playerInfo then
                playerInfo.tableid = 0
                playerInfo.seat = -1
            end
        end
    end
    tableInfo.nPlayerCount = 0
    self._tableInfos[tableID] = nil
    self._tableCount = self._tableCount - 1
end

function TeaHouseData:setTableCount(tableCount)
    self._tableCount = tableCount
end

function TeaHouseData:getTableCount()
    return self._tableCount
end

function TeaHouseData:setTableTotalCount(tableTotalCount)
    self._tableTotalCount = tableTotalCount
end

function TeaHouseData:getTableTotalCount()
    return self._tableTotalCount
end

function TeaHouseData:setPayTypeByID(teaHouseID, payType)
    self._payTypes[teaHouseID] = payType
end

function TeaHouseData:getPayTypeByID(teaHouseID)
    teaHouseID = teaHouseID or self._teaNumber
    return self._payTypes[teaHouseID]
end

function TeaHouseData:isPlayerOwnerPayType(teaHouseID)
    local payTypes = self:getPayTypeByID(teaHouseID)
    if not payTypes then
        return false
    end
    for _, payType in pairs(payTypes) do
        if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_OWNER_CARD_AA then
            return true
        end
    end
    return false
end

function TeaHouseData:isAgentPlayerPayType(teaHouseID)
    local payTypes = self:getPayTypeByID(teaHouseID)
    if not payTypes then
        return false
    end
    -- 绍兴3d不按照其他模式来处理界面显示
    if TeaHouse.LOBBY_ID.SHAOXING3D == TeaHouse.BridgeData.getLobbyID() then
        return false
    end
    for _, payType in pairs(payTypes) do
        if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA or
        payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_WINNER then
            return true
        end
    end
    return false
end

--扣除玩家大厅的购买卡,比赛场转型的大厅模式
function TeaHouseData:isLobbyPlayerPayType(teaHouseID)
    if TeaHouse.BridgeData.isRemodelArea() then
        local payTypes = self:getPayTypeByID(teaHouseID)
        if not payTypes then
            return false
        end
        for _, payType in pairs(payTypes) do
            if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_WIN or
            payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_AA then
                return true
            end
        end
    end
    return false
end

function TeaHouseData:setTeaNumber(teaNumber)
    self._teaNumber = teaNumber
end

function TeaHouseData:getTeaNumber()
    return self._teaNumber
end

function TeaHouseData:setTeaHousePwd(teaHousePwd)
    self._teaHousePwd = teaHousePwd
end

function TeaHouseData:getTeaHousePwd()
    return self._teaHousePwd
end

function TeaHouseData:setTeaHouseTitle(teaHouseTitle)
    self._teaHouseTitle = teaHouseTitle
end

function TeaHouseData:getTeaHouseTitle()
    return self._teaHouseTitle
end

function TeaHouseData:setTeaHouseStatus(teaHouseStatus)
    self._teaHouseStatus = teaHouseStatus
end

function TeaHouseData:getTeaHouseStatus()
    return self._teaHouseStatus
end

function TeaHouseData:setTeaHouseName(teaHouseName)
    self._teaHouseName = teaHouseName
end

function TeaHouseData:getTeaHouseName()
    return self._teaHouseName
end

function TeaHouseData:setTeaHouseNameExt(teaHouseNameExt, teaNumber)
    teaHouseNameExt = teaHouseNameExt or ""
    if self._isInTeahouse then
        self._teaHouseNameExt = tostring(teaHouseNameExt)
    else
        local teaHouseInfo = self._teaHouseList[teaNumber]
        if teaHouseInfo then
            teaHouseInfo.szData = tostring(teaHouseNameExt)
        end
    end
end

function TeaHouseData:getTeaHouseNameExt()
    if self._teaHouseNameExt and #self._teaHouseNameExt > 0 then
        if #self._teaHouseNameExt <= 4 and tonumber(self._teaHouseNameExt) ~= nil then
            return self._teaHouseNameExt
        end
    end
    return ""
end

function TeaHouseData:setTeaHouseNotice(teaHouseNotice)
    self._teaHouseNotice = teaHouseNotice
end

function TeaHouseData:getTeaHouseNotice()
    return self._teaHouseNotice
end

function TeaHouseData:setTeaHousePayMode(teaHousePayMode)
    if not self._isInTeahouse then
        return
    end
    if teaHousePayMode == 0 then
        local PayModeTypeConfig = TeaHouse.manager.configManager:loadConfig("PayModeTypeConfig")
        local defaultPayMode = PayModeTypeConfig[TeaHouse.BridgeData.getLobbyID()]
        if defaultPayMode ~= nil then
            teaHousePayMode = defaultPayMode
        end
    end
    self._teaHousePayMode = teaHousePayMode
end

function TeaHouseData:getTeaHousePayMode()
    return self._teaHousePayMode
end

function TeaHouseData:setLastCost(bLastCost)
    self._bLastCost = bLastCost
end

function TeaHouseData:isLastCost()
    return self._bLastCost == true
end

function TeaHouseData:setIsOwner(isOwner)
    self._isOwner = isOwner
end

function TeaHouseData:isOwner()
    return self._isOwner
end

function TeaHouseData:setIsisAdmin(isAdmin)
    self._isAdmin = isAdmin
end

function TeaHouseData:isAdmin()
    return self._isAdmin
end

function TeaHouseData:setUCRight(ucRight)
    self._ucRight = ucRight
end

function TeaHouseData:getUCRight()
    return self._ucRight
end

function TeaHouseData:setIsCanQuitTeaHouse(isCanQuitTeaHouse)
    self._isCanQuitTeaHouse = isCanQuitTeaHouse
end

function TeaHouseData:getIsCanQuitTeaHouse()
    return self._isCanQuitTeaHouse
end

function TeaHouseData:setOwnerName(ownerName)
    self._ownerName = ownerName
end

function TeaHouseData:getOwnerName()
    return self._ownerName
end

function TeaHouseData:setOwnerUrl(ownerUrl)
    self._ownerUrl = ownerUrl
end

function TeaHouseData:getOwnerUrl()
    return self._ownerUrl
end

local function getPlayerInfoKey(areaID, numID)
    return string.format("%d:%d", areaID, numID)
end

function TeaHouseData:getPlayerInfo(areaID, numID)
    return self._playerInfos[getPlayerInfoKey(areaID, numID)]
end

function TeaHouseData:isPlayerAdmin(playerInfo)
    return playerInfo.nUserRight == TeaHouseData.IDENTITY.ADMIN or playerInfo.nUserRight == TeaHouseData.IDENTITY.AGENTADMIN
end

function TeaHouseData:isPlayerBlack(playerInfo)
    return not playerInfo.bCanPlay
end

function TeaHouseData:getPlayerInfos()
    return self._playerInfos
end

function TeaHouseData:resetPlayerInfos()
    for _, playerInfo in pairs(self._playerInfos) do
        self:removePlayerInfo(playerInfo.areaid, playerInfo.numid)
    end
end

function TeaHouseData:addPlayerInfo(areaID, numID, info)
    local playerInfo = self:getPlayerInfo(areaID, numID)
    if playerInfo == nil then
        self._playerInfos[getPlayerInfoKey(areaID, numID)] = info
        playerInfo = info
    else
        table.merge(playerInfo, info)
    end
    local tableInfo = self:getTableInfoByID(info.tableid)
    if tableInfo == nil then
        return false
    end
    local seat = playerInfo.seat + 1
    if tableInfo.nAreaid[seat] == 0 or tableInfo.nNumid[seat] == 0 then
        tableInfo.nPlayerCount = tableInfo.nPlayerCount + 1
    end
    tableInfo.nAreaid[seat] = areaID
    tableInfo.nNumid[seat] = numID
    return true
end

function TeaHouseData:removePlayerInfo(areaID, numID)
    local playerInfo = self:getPlayerInfo(areaID, numID)
    self._playerInfos[getPlayerInfoKey(areaID, numID)] = nil
    if playerInfo == nil then
        return false
    end
    local tableInfo = self:getTableInfoByID(playerInfo.tableid)
    if tableInfo == nil then
        playerInfo.tableid = 0
        playerInfo.seat = -1
        return false
    end
    local seat = playerInfo.seat + 1
    if tableInfo.nAreaid[seat] ~= 0 and tableInfo.nNumid[seat] ~= 0 then
        tableInfo.nPlayerCount = tableInfo.nPlayerCount - 1
    end
    tableInfo.nAreaid[seat] = 0
    tableInfo.nNumid[seat] = 0
    playerInfo.tableid = 0
    playerInfo.seat = -1
    return true
end

function TeaHouseData:isPlayerInGame(areaID, numID)
    local playerInfo = self:getPlayerInfo(areaID, numID)
    if playerInfo == nil or playerInfo.tableid <= 0 then
        return false
    end
    local tableInfo = self:getTableInfoByID(playerInfo.tableid)
    if tableInfo == nil then
        return false
    end
    return tableInfo.state == TeaHouse.TeaHouseProtocol.TableInfo.FLAG.ST_GAME
end

function TeaHouseData:setPlayerCount(playerCount)
    self._playerCount = playerCount
end

function TeaHouseData:getPlayerCount()
    return self._playerCount
end

function TeaHouseData:setMaxPlayerCount(maxPlayerCount)
    self._maxPlayerCount = maxPlayerCount
end

function TeaHouseData:getMaxPlayerCount()
    return self._maxPlayerCount >= 0 and self._maxPlayerCount or 0
end

function TeaHouseData:setKickTime(kickTime)
    self._kickTime = kickTime
end

function TeaHouseData:getKickTime()
    return self._kickTime
end

function TeaHouseData:setKickCount(kickCount)
    self._kickCount = kickCount
end

function TeaHouseData:getKickCount()
    return self._kickCount
end

function TeaHouseData:setClearTime(clearTime)
    self._clearTime = clearTime
end

function TeaHouseData:getClearTime()
    return self._clearTime
end

function TeaHouseData:setOnlineCount(onlineCount)
    self._onlineCount = onlineCount
end

function TeaHouseData:getOnlineCount()
    return self._onlineCount
end

function TeaHouseData:setPlayerOnlineCount(playerOnlineCount)
    self._playerOnlineCount = playerOnlineCount
end

function TeaHouseData:getPlayerOnlineCount()
    return self._playerOnlineCount
end

function TeaHouseData:addMemberInfo(areaID, numID, info)
    self._memberInfos[getPlayerInfoKey(areaID, numID)] = info
end

function TeaHouseData:getMemberInfo(areaID, numID)
    return self._memberInfos[getPlayerInfoKey(areaID, numID)]
end

function TeaHouseData:getMemberInfos()
    return self._memberInfos
end

function TeaHouseData:isMemberInJoin(memberInfo)
    return not memberInfo.bHaveRight and memberInfo.nAskid == 10
end

function TeaHouseData:isMemberInQuit(memberInfo)
    return memberInfo.bHaveRight and memberInfo.nUserEvent == 1 and memberInfo.nAskid == 10
end

function TeaHouseData:isMemberInMember(memberInfo)
    return memberInfo.bHaveRight and memberInfo.nAskid == 10
end

function TeaHouseData:setMemberInfo(areaID, numID, info)
    local memberInfo = self._memberInfos[getPlayerInfoKey(areaID, numID)]
    if memberInfo ~= nil then
        table.merge(memberInfo, info)
    end
end

function TeaHouseData:removeMemberInfo(areaID, numID)
    self._memberInfos[getPlayerInfoKey(areaID, numID)] = nil
    self._memberInfoExs[getPlayerInfoKey(areaID, numID)] = nil
end

function TeaHouseData:resetMemberInfos()
    self._memberInfos = {}
end

function TeaHouseData:setMemberInfoEx(areaID, numID, infoEx)
    local memberInfoEx = self._memberInfoExs[getPlayerInfoKey(areaID, numID)]
    if memberInfoEx == nil then
        self._memberInfoExs[getPlayerInfoKey(areaID, numID)] = infoEx
    else
        table.merge(memberInfoEx, infoEx)
    end
end

function TeaHouseData:getMemberInfoEx(areaID, numID)
    return self._memberInfoExs[getPlayerInfoKey(areaID, numID)]
end

function TeaHouseData:getMemberInfoAll()
  return self._memberInfoExs
end

function TeaHouseData:checkMemberAdminRight(memberInfo, right)
    if not memberInfo or not memberInfo.nManagerRight then
        return false
    end
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    if SwitchConfig.AllManagePower == 0 then
        return true
    end
    right = TeaHouse.StringTool.bitAnd(right, SwitchConfig.AllManagePower)
    if right == 0 then
        return true
    end
    return TeaHouse.StringTool.bitAnd(memberInfo.nManagerRight, right) > 0
end

function TeaHouseData:checkSelfAdminRight(right)
    if self:isOwner() then
        return true
    end
    if not self:isAdmin() then
        return false
    end
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    if not SwitchConfig or SwitchConfig.ManagementPowers ~= 1 then
        return true
    end
    local memberInfo = self:getMemberInfoEx(TeaHouse.BridgeData.getAreaID(), TeaHouse.BridgeData.getNumberID())
    return self:checkMemberAdminRight(memberInfo, right)
end

function TeaHouseData:resetOnlineInfos()
    self._onlineInfos = {}
end

function TeaHouseData:addOnlineInfo(areaID, numID, info)
    self._onlineInfos[getPlayerInfoKey(areaID, numID)] = info
end

function TeaHouseData:getOnlineInfos()
    return self._onlineInfos
end

function TeaHouseData:getOnlineList()
    local onlineList = {}
    for _, info in pairs(self._onlineInfos) do
        onlineList[#onlineList + 1] = info
    end
    return onlineList
end

function TeaHouseData:setPropCount(propCount)
    self._propCount = propCount
end

function TeaHouseData:getPropCount()
    return self._propCount
end

function TeaHouseData:setDefaultPropCount(defaultPropCount)
    if not defaultPropCount or defaultPropCount < 0 then
        return
    end
    if not self._isInTeahouse then
        return
    end
    self._defaultPropCount = defaultPropCount
end

function TeaHouseData:getDefaultPropCount()
    return self._defaultPropCount
end

function TeaHouseData:changeTimeCardToSmallCard(num)
    return num * self:getCardExchangeRate() / XH.areaData:getPropLimitedTimeRoomCardRatio()
end

function TeaHouseData:setSelfPropcount(selfPropcount, teaNumber, isSmallRoomCard)
    isSmallRoomCard = isSmallRoomCard or false
    if not selfPropcount or selfPropcount < 0 then
        return
    end
    if not self._isInTeahouse then
        return
    end
    if isSmallRoomCard then
        selfPropcount = selfPropcount / self:getCardExchangeRate()
    end
    self._selfPropCount = selfPropcount
end

function TeaHouseData:getSelfPropcount()
    return self._selfPropCount
end

function TeaHouseData:setMaxDailyPropCount(maxDailyPropCount)
    if not maxDailyPropCount or maxDailyPropCount < 0 then
        return
    end
    if not self._isInTeahouse then
        return
    end
    self._maxDailyPropCount = maxDailyPropCount
end

function TeaHouseData:getMaxDailyPropCount()
    return self._maxDailyPropCount
end

function TeaHouseData:setOverDraftPropCount(overDraftPropCount)
    self._overDraftPropCount = overDraftPropCount
end

function TeaHouseData:getOverDraftPropCount()
    return self._overDraftPropCount
end

function TeaHouseData:setUserShowPropCount(userShowPropCount)
    if self:isAgentPlayerPayType() then
        self._userShowPropCount = userShowPropCount / 100
    else
        self._userShowPropCount = userShowPropCount / self:getCardExchangeRate()
    end
end

function TeaHouseData:getUserShowPropCount()
    return self._userShowPropCount
end

function TeaHouseData:setAskPowerCount(askPowerCount)
    self._askPowerCount = askPowerCount
end

function TeaHouseData:getAskPowerCount()
    return self._askPowerCount
end

--标记是否已经请求到固定玩法信息
function TeaHouseData:setPlayModeInfoFlag(flag)
    self._playModeInfoFlag = flag
end

function TeaHouseData:getPlayModeInfoFlag()
    return self._playModeInfoFlag
end

function TeaHouseData:updatePlayModeInfo(playModeInfo)
    if TeaHouse.ReadGameListAndRuleConfig.judgeIsCard13ByGameId(playModeInfo.nGameId) then
        return
    end
    for i = 1, #self._playModeInfos do
        if self._playModeInfos[i].nPlayModeId == playModeInfo.nPlayModeId then
            self._playModeInfos[i] = playModeInfo
            return
        end
    end
    self._playModeInfos[#self._playModeInfos + 1] = playModeInfo
    TeaHouse.flushPromoteTask()
end

function TeaHouseData:setPlayModeInfos(playModeInfos)
    local tPlayModeInfos = {}
    for key, value in pairs(playModeInfos) do
        if not TeaHouse.ReadGameListAndRuleConfig.judgeIsCard13ByGameId(value.nGameId) then
            table.insert(tPlayModeInfos, value)
        end
    end
    self._playModeInfos = tPlayModeInfos
end

function TeaHouseData:getPlayModeInfos()
    return self._playModeInfos
end

function TeaHouseData:getPlayModeInfosCount()
    local playModeInfosCount = 0
    for i = 1, #self._playModeInfos do
        if self._playModeInfos[i].bIsEnable then
            playModeInfosCount = playModeInfosCount + 1
        end
    end
    return playModeInfosCount
end

function TeaHouseData:checkSelfPower(powerName, powerValue)
    powerValue = powerValue or TeaHouseData.POWER_VALUE.ALLOW_LOW
    local powerConfig = TeaHouse.manager.configManager.powerConfig
    if powerConfig == nil then
        return false
    end
    if self:isOwner() then
        return powerConfig:checkPower(TeaHouseData.POWER_LEVEL.OWNER, powerName, powerValue)
    end
    if self:isAdmin() then
        return powerConfig:checkPower(TeaHouseData.POWER_LEVEL.ADMIN, powerName, powerValue)
    end
    return powerConfig:checkPower(TeaHouseData.POWER_LEVEL.MEMBER, powerName, powerValue)
end

function TeaHouseData:isOthersShow()
    return self._isOthersShow
end

function TeaHouseData:setIsOthersShow(isOthersShow)
    self._isOthersShow = isOthersShow
end

function TeaHouseData:getCardExchangeRate()
    return self._cardExchangeRate
end

function TeaHouseData:setCardExchangeRate(data)
    self._cardExchangeRate = 1
    if #data < 1 then
        return
    end
    local jsonData = json.decode(data)
    if not jsonData.propid then
        return
    end
    if not TeaHouse.BridgeData.getSmallRoomCardID() then
        return
    end
    if not TeaHouse.BridgeData.getSmallRoomCardRatio() then
        return
    end
    local propID = tonumber(jsonData.propid)
    if propID ~= TeaHouse.BridgeData.getSmallRoomCardID() then
        return
    end
    self._cardExchangeRate = TeaHouse.BridgeData.getSmallRoomCardRatio()
end

function TeaHouseData:getUseBuyedProp()
    return self._useBuyedProp
end

function TeaHouseData:setUseBuyedProp(data)
    self._useBuyedProp = data
end


function TeaHouseData:getPlayerCardExchangeRate(playerInfo)
    if not playerInfo or not playerInfo.acUserExtraInfo then
        return 1
    end
    if not TeaHouse.BridgeData.getSmallRoomCardID() then
        return 1
    end
    if not TeaHouse.BridgeData.getSmallRoomCardRatio() then
        return 1
    end
    local data = string.match(playerInfo.acUserExtraInfo, "propid=%d+")
    if not data then
        return 1
    end
    local propID = TeaHouse.StringTool.getBackStringByFlag(data, "=")
    if not propID then
        return 1
    end
    propID = tonumber(propID)
    if propID ~= TeaHouse.BridgeData.getSmallRoomCardID() then
        return 1
    end
    return TeaHouse.BridgeData.getSmallRoomCardRatio()
end

function TeaHouseData:setPlayerOwnerPropCount(playerOwnerPropCount)
    self._playerOwnerPropCount = playerOwnerPropCount / self:getCardExchangeRate()
end

function TeaHouseData:getPlayerOwnerPropCount()
    if self._playerOwnerPropCount >= self:getFreezePropCount() then
        return self._playerOwnerPropCount - self:getFreezePropCount()
    end
    return self._playerOwnerPropCount
end

function TeaHouseData:getFreezePropCount()
    local strKeyRoomCardTeaHouse = string.format("KW_MIN_ROOMCARD_TEAHOUSE_%d_%d", TeaHouse.BridgeData.getLobbyID(), TeaHouse.BridgeData.getNumberID())
    local freezeRoomCard = cc.UserDefault:getInstance():getStringForKey(strKeyRoomCardTeaHouse, "0") or 0
    return tonumber(freezeRoomCard)
end

--获取快速开始的桌子
function TeaHouseData:getQuickJoinTableInfoByRule(rule, ignoreTableIDs)
    --获取所有规则匹配的桌子
    local sameRuleTables = {}
    for _, info in pairs(self._tableInfos) do
        --桌子未坐满
        --桌子状态未0
        if info.nPlayerCount < info.size and info.state == TeaHouse.TeaHouseProtocol.TableInfo.FLAG.ST_NORMAL and info.data then
            local luaString = "return {" .. info.data .. "}"
            local luaFunction = loadstring(luaString)
            local tempRule
            if luaFunction then
                tempRule = luaFunction()
            end

            if tempRule then
                local bSame = true
                for key, value in pairs(rule) do
                    if not tempRule[key] or tostring(tempRule[key]) ~= tostring(value) then
                        if key == "PayType" and tempRule["PayType"] == nil and tempRule["PlaymentType"] then
                            local keyValue = tonumber(tempRule["PlaymentType"]) == 1 and 20 or 21
                            if keyValue ~= tonumber(value) then
                                bSame = false
                                break
                            end
                        else
                            bSame = false
                            break
                        end
                    end
                end

                local bIgnore = false
                for _, tableID in pairs(ignoreTableIDs) do
                    if tableID == info.tableid then
                        bIgnore = true
                        break
                    end
                end

                if bSame and not bIgnore then
                    sameRuleTables[#sameRuleTables + 1] = info
                end
            end
        end
    end

    --获取剩余位子最少的桌子
    local minPlayerNum = nil
    local resultTableInfo = nil
    for _, tabelInfo in pairs(sameRuleTables) do
        local leftSeatNum = tabelInfo.size - tabelInfo.nPlayerCount
        if minPlayerNum == nil or minPlayerNum > leftSeatNum then
            resultTableInfo = tabelInfo
            minPlayerNum = leftSeatNum
        end
    end
    return resultTableInfo
end

function TeaHouseData:getRankBit()
    return self._rankBit
end

function TeaHouseData:setRankBit(rankBit)
    self._rankBit = rankBit
end

function TeaHouseData:checkRankBit(rank)
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    if SwitchConfig.RankSetting == 0 then
        return true
    end
    if self:isOwner() then
        return true
    end
    if self:isAdmin() then
        if SwitchConfig.CheckRankAddPower and SwitchConfig.CheckRankAddPower == TeaHouseData.ADMIN_RIGHT.CHECKRANK then
            if self:checkSelfAdminRight(TeaHouseData.ADMIN_RIGHT.CHECKRANK) then
                return true
            elseif TeaHouse.StringTool.bitAnd(self._rankBit, TeaHouseData.RANK_BIT.FORBID) ~= 0 then
                return false
            elseif rank == nil then
                return self._rankBit ~= 0
            end
            return TeaHouse.StringTool.bitAnd(self._rankBit, rank) ~= 0
        end
        return true
    end
    if TeaHouse.StringTool.bitAnd(self._rankBit, TeaHouseData.RANK_BIT.FORBID) ~= 0 then
        return false
    end
    if rank == nil then
        return self._rankBit ~= 0
    end
    return TeaHouse.StringTool.bitAnd(self._rankBit, rank) ~= 0
end

function TeaHouseData:getTeaHouseLevelByNumber(number)
    if self._teaHouseList[number] then
        local data = json.decode(self._teaHouseList[number].acExtraData)
        if data and data.level then
            return data.level
        end
    end
    return nil
end

function TeaHouseData:getTeaHouseLevel()
    return self._teaHouseLevel
end

function TeaHouseData:setTeaHouseLevel(level)
    self._teaHouseLevel = level
end

function TeaHouseData:getTeaActiveValue()
    return self._teaHouseActiveValue or 0 
end

function TeaHouseData:setTeaActiveValue(value)
    self._teaHouseActiveValue = value
end

function TeaHouseData:getTeaLevelConfig()
   return self._teaLevelConfig or {}
end

function TeaHouseData:setTeaLevelConfig(config)
    self._teaLevelConfig = config
    local teaLevelConfig = TeaHouse.manager.configManager.remodelConfig._creatCondition
    if teaLevelConfig then
        for i, info in pairs(teaLevelConfig) do
            self._teaLevelConfig[i] = self._teaLevelConfig[i] or {}
            for key, _ in pairs(info) do
                if self._teaLevelConfig[i][key] == nil then
                    self._teaLevelConfig[i][key] = teaLevelConfig[i][key]
                end
            end
        end
    end
end

function TeaHouseData:getUpTeaLevelActNum()
    return self._teaUpgradeActiveCount 
 end
 
 function TeaHouseData:setUpTeaLevelActNum(config)
    self._teaUpgradeActiveCount  = config
 end

 function TeaHouseData:needShowCreateTable()
    return self:isOwner() and not (self:checkSelfPower("CreateTable") and (self:getUCRight() == self.UC_RIGHT.YES))
 end

function TeaHouseData:setOwnerTeahousCount()
    self._ownerTeahouseCount = self._ownerTeahouseCount + 1
end

function TeaHouseData:getOwnerTeahouseCount()--当前玩家是领队的比赛场数量
    return self._ownerTeahouseCount
end

function TeaHouseData:clearTeahouseInfos()
    self._playModeInfos = {}
    self._playModeInfoFlag = false
    self:resetMemberInfos()
end

function TeaHouseData:setshowingTableGuide(show)
    self._bShowingTableGuide = show
end

function TeaHouseData:getshowingTableGuide()
    return self._bShowingTableGuide
end

function TeaHouseData:setTimeCardsInfo(info)
    self._timeCardsInfo = info
end

function TeaHouseData:getTimeCardsInfo()
    return self._timeCardsInfo
end

function TeaHouseData:setCloseFinishBill(close)
    self._closeFinishBill = close
end

function TeaHouseData:getCloseFinishBill()
    return self._closeFinishBill
end

return TeaHouseDataN�