---@class TeaHouseMainModule : Module
local TeaHouseMainModule = class("TeaHouseMainModule", TeaHouse.Module)
local TaskDefine = require("app.Define.TaskDefine")
local MutiVersionGameConfig =  require("teahouse.Config.MutiVersionGameConfig")
local GameNewTypeConfiger = require("app.Config.Parse.GameNewTypeConfiger")
local UrlConf = require("app.Config.UrlConf")
local SxVipConfig = require('lobby.Modules.Sxvip.Config')

TeaHouseMainModule.EVENT_TABLE_LIST_ADD = "EVENT_TABLE_LIST_ADD"
TeaHouseMainModule.EVENT_TABLE_LIST_UPATE = "EVENT_TABLE_LIST_UPATE"
TeaHouseMainModule.EVENT_TABLE_LIST_REMOVE = "EVENT_TABLE_LIST_REMOVE"
TeaHouseMainModule.EVENT_PLAYER_LIST_ADD = "EVENT_PLAYER_LIST_ADD"
TeaHouseMainModule.EVENT_PLAYER_LIST_UPDATE = "EVENT_PLAYER_LIST_UPDATE"
TeaHouseMainModule.EVENT_PLAYER_LIST_REMOVE = "EVENT_PLAYER_LIST_REMOVE"
TeaHouseMainModule.EVENT_PLAYER_LIST_CHANGED = "EVENT_PLAYER_LIST_CHANGED"
TeaHouseMainModule.EVENT_TEA_HOUSE_INFO_UPDATE = "EVENT_TEA_HOUSE_INFO_UPDATE" ---比赛场信息更新
TeaHouseMainModule.EVENT_PROP_COUNT_UPDATE = "EVENT_PROP_COUNT_UPDATE"
TeaHouseMainModule.EVENT_SETUP_REQ_TIMECARDSINFO_SUCCESS = "EVENT_SETUP_REQ_TIMECARDSINFO_SUCCESS"
TeaHouseMainModule.EVENT_TEA_HOUSE_PAUSED = "EVENT_TEA_HOUSE_PAUSED"
TeaHouseMainModule.EVENT_TEA_HOUSE_CLOSED = "EVENT_TEA_HOUSE_CLOSED"
TeaHouseMainModule.EVENT_MEMBER_LIST_UPDATE = "EVENT_MEMBER_LIST_UPDATE"
TeaHouseMainModule.EVENT_MEMBER_LIST_CHANGED = "EVENT_MEMBER_LIST_CHANGED"
TeaHouseMainModule.EVENT_MEMBER_LIST_NOTICE = "EVENT_MEMBER_LIST_NOTICE"
TeaHouseMainModule.EVENT_UCRIGHT_UPDATE = "EVENT_UCRIGHT_UPDATE"
TeaHouseMainModule.EVENT_UCRIGHT_YES = "EVENT_UCRIGHT_YES"
TeaHouseMainModule.EVENT_PLAY_MODE_LIST_CHANGED = "EVENT_PLAY_MODE_LIST_CHANGED"
TeaHouseMainModule.EVENT_PLAY_MODE_LIST_UPDATE = "EVENT_PLAY_MODE_LIST_UPDATE"
TeaHouseMainModule.EVENT_PAY_MODE_UPDATE = "EVENT_PAY_MODE_UPDATE"
TeaHouseMainModule.EVENT_POWER_UPDATE = "EVENT_POWER_UPDATE"
TeaHouseMainModule.EVENT_OTHERS_SHOW_UPDATE = "EVENT_OTHERS_SHOW_UPDATE"
TeaHouseMainModule.EVENT_ADMIN_RIGHT_UPDATE = "EVENT_ADMIN_RIGHT_UPDATE"
TeaHouseMainModule.EVENT_ONLINE_LIST_CHANGED = "EVENT_ONLINE_LIST_CHANGED"
TeaHouseMainModule.EVENT_RANK_VISIBLE_UPDATE = "EVENT_RANK_VISIBLE_UPDATE"
TeaHouseMainModule.EVENT_TEAHOUSE_LEVELUP_SUCCSEE = "EVENT_TEAHOUSE_LEVELUP_SUCCSEE"
TeaHouseMainModule.EVENT_LACK_CARD_NOTIFY = "EVENT_LACK_CARD_NOTIFY"
TeaHouseMainModule.EVENT_OPEN_TEACARD_LIMT = "EVENT_OPEN_TEACARD_LIMT"
TeaHouseMainModule.EVENT_REFRESH_RECHARAGE_TEACARD = "EVENT_REFRESH_RECHARAGE_TEACARD"
TeaHouseMainModule.EVENT_SHOW_INVITE_ACTIVITY_ICON = "EVENT_SHOW_INVITE_ACTIVITY_ICON"
TeaHouseMainModule.EVENT_SHOW_INVITE_ACTIVITY_LIST = "EVENT_SHOW_INVITE_ACTIVITY_LIST"
TeaHouseMainModule.EVENT_SHOW_AWARD_TIP = "EVENT_SHOW_AWARD_TIP"
TeaHouseMainModule.EVENT_ON_UPDATE_CHOSE_RANK = "EVENT_ON_UPDATE_CHOSE_RANK"
TeaHouseMainModule.EVENT_ON_UPDATE_CONTRIBUTE_RANK = "EVENT_ON_UPDATE_CONTRIBUTE_RANK"
TeaHouseMainModule.EVENT_ON_UPDATE_RECORD_RANK = "EVENT_ON_UPDATE_RECORD_RANK"
TeaHouseMainModule.EVENT_FLUSH_RECALL_NEW_ACT_INFO = "EVENT_FLUSH_RECALL_NEW_ACT_INFO"
TeaHouseMainModule.EVENT_FLUSH_RECALL_TEAM_ACT_INFO = "EVENT_FLUSH_RECALL_TEAM_ACT_INFO"
TeaHouseMainModule.EVENT_FLUSH_RECALL_TEAM_ACT_QIIPAO = "EVENT_FLUSH_RECALL_TEAM_ACT_QIIPAO"
TeaHouseMainModule.EVENT_FLUSH_RECALL_TEAM_ACT_TAG = "EVENT_FLUSH_RECALL_TEAM_ACT_TAG"
TeaHouseMainModule.EVENT_CLOSE_TEAHOUSE_LIST = "EVENT_CLOSE_TEAHOUSE_LIST"
TeaHouseMainModule.EVENT_FLUSH_LUCKY_MISSION = "EVENT_FLUSH_LUCKY_MISSION"

local RULE_STR_RANDOM_SIT_OPEN = "isSuiJiFengWei='1'" --随机风位开启的规则字符串


TeaHouseMainModule.PublicBetaAid = {
    [XH.LOBBY_ID.LISHUI] = 2754,
    [XH.LOBBY_ID.ZHOUSHAN] = 2764
}


function TeaHouseMainModule:onCreate()
    TeaHouseMainModule.super.onCreate(self)

    ---是否在游戏中
    self._isInGame = false
    ---是否在场景中
    self._isInScene = false
    ---是否加入检测
    self._isJoinCheck = false

    ---进入的桌号
    self._enterTableID = nil
    ---进入的座位号
    self._enterSeatID = 0

    self._isJoinTable = false

    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.TableInfo, self, self.onTableInfo)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespTeaHouseInfo, self, self.onRespTeaHouseInfo)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.TeaHouseState, self, self.onTeaHouseState)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespJoinTable, self, self.onRespJoinTable)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.CheckAction, self, self.onCheckAction)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespJoinTeaHouse, self, self.onRespJoinTeaHouse)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespJoinFinish, self, self.onRespJoinFinish)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.UserInfo, self, self.onUserInfo)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespAskPower, self, self.onRespAskPower)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespLeaveTeaHouse, self, self.onRespLeaveTeaHouse)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.UserState, self, self.onUserState)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.TableState, self, self.onTableState)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.UserLeaveRoom, self, self.onUserLeaveRoom)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespOperatorManager, self, self.onRespOperatorManager)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespTeaHouseManager, self, self.onRespTeaHouseManager)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.MsgUserIsKickOff, self, self.onMsgUserIsKickOff)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespSetManagerRight, self, self.onRespSetManagerRight)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespPlayerModeInfo, self, self.onRespPlayerModeInfo)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespPlayModeInfoEx, self, self.onRespPlayModeInfoEx)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.PlayModeInfoEx, self, self.onPlayModeInfoEx)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespUserInfoListCnt, self, self.onRespUserInfoListCnt)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespSetTeaTableRuleVisible, self, self.onRespSetTeaTableRuleVisible)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespPayType, self, self.onRespPayType)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespTeaHouseUsePropCnt, self, self.onRespTeaHouseUsePropCnt)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespAddPlayerProp, self, self.onRespAddPlayerProp)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespBuyProp, self, self.onRespUpdateBuyProp)
    self:addQuickStartEventListener()
end

function TeaHouseMainModule:onDestroy()
    local teahouseSDK = TeaHouse.manager.teahouseSDK
    teahouseSDK:removeCallBack(teahouseSDK.SDK_TYPE.AMAP, "TeaHouseMainModule")

    TeaHouse.manager.netManager:removeEventListener(self)

    TeaHouseMainModule.super.onDestroy(self)
end

function TeaHouseMainModule:onTableInfo(msgData)
    if msgData.state ~= TeaHouse.TeaHouseProtocol.TableInfo.FLAG.ST_NORMAL and
    msgData.state ~= TeaHouse.TeaHouseProtocol.TableInfo.FLAG.ST_GAME then
        return
    end
    if msgData.gameid <= 0 then
        return
    end
    local teahouseData = TeaHouse.manager.teahouseData
    local tableInfo = clone(msgData)
    if not teahouseData:checkTableState(tableInfo) then
        return
    end
    teahouseData:addTableInfoByID(msgData.tableid, tableInfo)
    self:dispatchEvent({ name = self.EVENT_TABLE_LIST_ADD, msg = { info = tableInfo } })

    if tableInfo.tableid ~= teahouseData:getCreateTableID() then
        return
    end
    teahouseData:setCreateTableID(nil)
    if not self._isInGame then
        local curTableID = tableInfo.tableid
        local curTableSize = tableInfo.size
        TeaHouse.SysTool.performWithDelay(0.2, function()
            for i = 0, curTableSize - 1 do
                if i >= 0 and self:isSeatEmpty(curTableID, i) then
                    self:reqJoinTable(curTableID, i, tableInfo.gameid)
                end
            end
        end)
    end
end

function TeaHouseMainModule:onRespTeaHouseInfo(msgData)
    local teahouseData = TeaHouse.manager.teahouseData
    if msgData.nAskid ~= -1 then
        teahouseData:setSelfPropcount(msgData.nSelfPropCnt, teahouseData:getTeaNumber(), true)
        self:dispatchEvent({ name = self.EVENT_PROP_COUNT_UPDATE })
        return
    end

    local utfIndex = TeaHouse.StringTool.checkUTF8String(msgData.teaName)
    if utfIndex > 0 then
        msgData.teaName = string.sub(msgData.teaName, 1, utfIndex - 1)
    end
    msgData:splitTeaName(msgData.teaName)
    teahouseData:setOwnerName(msgData.acOwnerNick)
    teahouseData:setIsShowCreateRule(msgData.bTableRuleVisible)
    teahouseData:setOverDraftPropCount(msgData.nOverPropCnt)
    teahouseData:setPropCount(msgData.propCnt)
    teahouseData:setTeaHouseNameExt(msgData.szData)
    teahouseData:setTeaHouseName(msgData.teaName)
    teahouseData:setDefaultPropCount(msgData.nDefaultPropCnt)
    teahouseData:setTeaHouseStatus(msgData.ucState)
    teahouseData:setTeaNumber(msgData.teaNumber)
    teahouseData:setTeaHouseNotice(msgData.acNotice)
    teahouseData:setTeaHouseTitle(msgData:showTeaName())
    teahouseData:setTableCount(0)
    teahouseData:setTableTotalCount(msgData.tableTotalCnt)
    teahouseData:setAskPowerCount(msgData.askCnt)
    teahouseData:setOwnerUrl(msgData.url)
    teahouseData:setPlayerCount(msgData.userCnt)--206
    teahouseData:setPlayerOnlineCount(msgData.nOnLineUserCnt)
    teahouseData:setCardExchangeRate(msgData.acExtraData)
    teahouseData:setUseBuyedProp(msgData.bUseBuyedProp)
    teahouseData:setMaxPlayerCount(msgData.maxPlayerCnt)
    teahouseData:setClearTime(msgData.refreshTime) -- 更新时间
    teahouseData:setKickCount(msgData.kickCnt)--kickCnt
    teahouseData:setKickTime(msgData.kickTime)--kickTime
    if msgData.nLevel > 0 then
        teahouseData:setTeaHouseLevel(msgData.nLevel)
    end
    self:reqTeaHousePayType()
    self:reqOthersHideTHInfo()
    self:reqUserInfoListCnt()
    self:reqGetRanklistVisible()
    -- 请求比赛场是否支持点赞功能
    XH.lobby:getModule("FinishBillClose"):reqFinishBillClose(0)
    -- teahouseData:setCloseFinishBill(true)
    self:dispatchEvent({ name = self.EVENT_TEA_HOUSE_INFO_UPDATE })
    TeaHouse.reqNewSpreadInfo(msgData.teaNumber)
end

function TeaHouseMainModule:onTeaHouseState(msgData)
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:getTeaNumber() ~= msgData.teaNumber then
        return
    end

    if teahouseData:getAskPowerCount() ~= msgData.askCnt then
        teahouseData:setAskPowerCount(msgData.askCnt)
        if msgData.askCnt > 0 then
            self:dispatchEvent({ name = self.EVENT_MEMBER_LIST_NOTICE })
        end
    end
    teahouseData:setPlayerCount(msgData.userCnt)--237
    teahouseData:setPlayerOnlineCount(msgData.nOnLineUserCnt)
    teahouseData:setTeaHouseNotice(msgData.acNotice)
    self:dispatchEvent({ name = self.EVENT_TEA_HOUSE_INFO_UPDATE })
    -- self:reqUserInfoListCnt()
end

function TeaHouseMainModule:onRespJoinTable(msgData)
    if msgData.flag == TeaHouse.TeaHouseProtocol.RespJoinTable.FLAG.SUCCESS then
        self._enterTableID = nil
        self._enterSeatID = 0
        --TODO
    else
        ---通过微信分享进来的，遍历桌子的位置，找个空位置
        if self._enterTableID ~= nil then
            if msgData.flag == TeaHouse.TeaHouseProtocol.RespJoinTable.FLAG.PAUSED then
                self._enterTableID = nil
                self._enterSeatID = 0
                TeaHouse.hideLoading()
                local msg = TeaHouse.manager.teahouseData:isOwner() and "YOU_HAVE_SUSPENDTEAHOUSE" or "OWNER_HAVE_SUSPENDTEAHOUSE"
                self:dispatchEvent({ name = self.EVENT_TEA_HOUSE_PAUSED, msg = { data = msg } })
            else
                self:tryToJoinTable(self._enterTableID, self._enterSeatID)
            end
        else
            self._enterTableID = nil
            self._enterSeatID = 0
            TeaHouse.hideLoading()

            local msg = ""
            if msgData.flag == TeaHouse.TeaHouseProtocol.RespJoinTable.FLAG.NOT_RIGHT then
                msg = "NO_RIGHT_TOJOIN"
            elseif msgData.flag == TeaHouse.TeaHouseProtocol.RespJoinTable.FLAG.NOT_EMPTY then
                msg = "SEAT_NOT_EMPTY。"
            elseif msgData.flag == TeaHouse.TeaHouseProtocol.RespJoinTable.FLAG.NO_TEAHOUSE_PROP then
                msg = "ROOMCARDS_ARE_NOTENOUGH！"
            elseif msgData.flag == TeaHouse.TeaHouseProtocol.RespJoinTable.FLAG.MAX_CREAT_TABLE then
                msg = "HAVE_CREATE_LIMITHTABLE"
            elseif msgData.flag == TeaHouse.TeaHouseProtocol.RespJoinTable.FLAG.PAUSED then
                msg = "OWNER_HAVE_SUSPENDTEAHOUSE"
            else
                msg = string.format("未知错误(%s)。", msgData.flag)
            end
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, msg)
        end
    end
end

function TeaHouseMainModule:onCheckAction(msgData)

end

function TeaHouseMainModule:onRespJoinTeaHouse(msgData)
    self._isJoinCheck = false
    local teahouseData = TeaHouse.manager.teahouseData
    teahouseData:setAppID(msgData.appid)
    teahouseData:setUCRight(teahouseData:isOwner() and teahouseData.UC_RIGHT.YES or msgData.right)
end

function TeaHouseMainModule:onRespJoinFinish(msgData)
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:getUCRight() == teahouseData.UC_RIGHT.YES then
        --TODO
    end
    self:dispatchEvent({ name = self.EVENT_UCRIGHT_UPDATE })
    if teahouseData:checkSelfPower("JoinTable") then
        self:joinCheck()
    else
        self._enterTableID = nil
        self._enterSeatID = 0
    end
end

function TeaHouseMainModule:onUserInfo(msgData)
    local teahouseData = TeaHouse.manager.teahouseData
    if msgData.teaNumber > 0 and msgData.teaNumber ~= teahouseData:getTeaNumber() then
        return
    end
    ---此处AskID为0 标识为服务器主动派发消息
    if msgData.nAskid == 0 then
        self:dispatchEvent({ name = self.EVENT_PLAYER_LIST_REMOVE, msg = { areaID = msgData.areaid, numID = msgData.numid } })
        teahouseData:removePlayerInfo(msgData.areaid, msgData.numid)
        local playerInfo = clone(msgData)
        teahouseData:addPlayerInfo(msgData.areaid, msgData.numid, playerInfo)
        self:dispatchEvent({ name = self.EVENT_PLAYER_LIST_ADD, msg = { areaID = msgData.areaid, numID = msgData.numid } })
        self:dispatchEvent({ name = self.EVENT_PLAYER_LIST_CHANGED })

        teahouseData:setMemberInfo(msgData.areaid, msgData.numid, {
            bOffLine = playerInfo.bOffLine,
        })
        self:dispatchEvent({ name = self.EVENT_MEMBER_LIST_UPDATE, msg = { areaID = msgData.areaid, numID = msgData.numid } })
    elseif msgData.nAskid == 10 then
        local memberInfo = clone(msgData)
        teahouseData:addMemberInfo(msgData.areaid, msgData.numid, memberInfo)
        if msgData.nIdx == msgData.nTotal - 1 then
            self:dispatchEvent({ name = self.EVENT_MEMBER_LIST_CHANGED })
        end
    elseif msgData.nAskid == -1 then
        local onlineInfo = clone(msgData)
        teahouseData:addOnlineInfo(msgData.areaid, msgData.numid, onlineInfo)
        if msgData.nIdx == msgData.nTotal - 1 then
            self:dispatchEvent({ name = self.EVENT_ONLINE_LIST_CHANGED })
        end
    elseif msgData.nAskid == TeaHouse.BridgeData.getAreaID() then ---请求绑定玩家信息
        local playerInfo = clone(msgData)
        teahouseData:addPlayerInfo(msgData.areaid, msgData.numid, playerInfo)
        if msgData.nIdx == msgData.nTotal - 1 then
            --TODO
        end
    end
    -- 宁波和余姚不需要请求这个数据（请求回来的数据错误）
--    if TeaHouse.BridgeData.getLobbyID() ~= 900006 and TeaHouse.BridgeData.getLobbyID() ~= 900029 then
--        self:reqPlayerTeaHouseCost(msgData.teaNumber, msgData.numid)
--    end
    if msgData.areaid == TeaHouse.BridgeData.getBrandID() and msgData.numid == TeaHouse.BridgeData.getNumberID() then
        teahouseData:setUserShowPropCount(msgData.nUserShowProps)
        teahouseData:setPlayerOwnerPropCount(msgData.nPlayerOwnerCards)
        -- onUserInfo服务下推的协议里的nPlayerOwnerCards字段，取的是内存里的数据，内存数据是依靠reqUserInfo协议刷新的，所以这个下推字段某些时候会不准，需要再次刷新这条数据
        if teahouseData:isPlayerOwnerPayType() and TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.TAIZHOU then
            self:reqPlayerOwnerCard()
        end
        self:dispatchEvent({ name = self.EVENT_PROP_COUNT_UPDATE })
    end
end

function TeaHouseMainModule:onRespAskPower(msgData)
    local teahouseData = TeaHouse.manager.teahouseData
    if msgData.right == teahouseData.UC_RIGHT.NO then
        TeaHouse.StorageTool.removeOwnerTeaHouse(TeaHouse.BridgeData.getNumberID(), teahouseData:getTeaNumber())
        self:dispatchEvent({ name = self.EVENT_TEA_HOUSE_PAUSED, msg = { data = "OWNER_REFUSE_YOURAPPLY" } })
    elseif msgData.right == teahouseData.UC_RIGHT.WAITING then
        msgData.right = teahouseData.UC_RIGHT.NO
    elseif msgData.right == teahouseData.UC_RIGHT.MAXTEAHOUSE then
        msgData.right = teahouseData.UC_RIGHT.NO
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "JOIN_THEAHOUSECOUNT_LIMIT")
    elseif msgData.right == teahouseData.UC_RIGHT.MAXMEMBERS then
        msgData.right = teahouseData.UC_RIGHT.NO
        local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
        if SwitchConfig and SwitchConfig.InactiveMember == 1 then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "JOIN_THEAHOUSECOUNT_FULL_INACTIVE")
        else
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "JOIN_THEAHOUSECOUNT_FULL")
        end
    elseif msgData.right == teahouseData.UC_RIGHT.NOT_ALLOW then
        msgData.right = teahouseData.UC_RIGHT.NO
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "JOIN_THEAHOUSECOUNT_NO")
    elseif msgData.right == teahouseData.UC_RIGHT.LIMIT then
        msgData.right = teahouseData.UC_RIGHT.NO
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "JOIN_THEAHOUSECOUNT_NO")
    elseif msgData.right == teahouseData.UC_RIGHT.ST_SHIELD then
        msgData.right = teahouseData.UC_RIGHT.NO
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "JOIN_THEAHOUSECOUNT_NO")
    elseif msgData.right == teahouseData.UC_RIGHT.BAN then
        msgData.right = teahouseData.UC_RIGHT.NO
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "JOIN_TEAHOUSECOUNT_BAN")
    end
    local oldUCRight = teahouseData:getUCRight()
    teahouseData:setUCRight(msgData.right)
    self:dispatchEvent({ name = self.EVENT_UCRIGHT_UPDATE })
    ---TODO
    if oldUCRight ~= teahouseData.UC_RIGHT.YES and msgData.right == teahouseData.UC_RIGHT.YES then
        self:dispatchEvent({ name = self.EVENT_UCRIGHT_YES })
    end
end

function TeaHouseMainModule:onRespLeaveTeaHouse(msgData)

end

function TeaHouseMainModule:onUserState(msgData)
    local teahouseData = TeaHouse.manager.teahouseData
    local playerInfo = teahouseData:getPlayerInfo(msgData.areaid, msgData.numid)
    if playerInfo == nil then
        return
    end
    self:dispatchEvent({ name = self.EVENT_PLAYER_LIST_REMOVE, msg = { areaID = msgData.areaid, numID = msgData.numid } })
    teahouseData:removePlayerInfo(msgData.areaid, msgData.numid)
    playerInfo.tableid = msgData.tableid
    playerInfo.seat = msgData.seat
    if playerInfo.tableid > 0 and playerInfo.seat >= 0 then
        teahouseData:addPlayerInfo(msgData.areaid, msgData.numid, playerInfo)
        self:dispatchEvent({ name = self.EVENT_PLAYER_LIST_ADD, msg = { areaID = msgData.areaid, numID = msgData.numid } })
--        self:reqPlayerTeaHouseCost(playerInfo.teaNumber, playerInfo.numid)
    end
    self:dispatchEvent({ name = self.EVENT_PLAYER_LIST_CHANGED })
end

function TeaHouseMainModule:onTableState(msgData)
    local teahouseData = TeaHouse.manager.teahouseData
    local tableInfo = teahouseData:getTableInfoByID(msgData.tableid)
    if tableInfo == nil then
        return
    end
    local isTableUpdate = false
    if tableInfo.state ~= msgData.state then
        isTableUpdate = true
        tableInfo.state = msgData.state
    end
    if tableInfo.finish ~= msgData.finish then
        isTableUpdate = true
        tableInfo.finish = msgData.finish
    end
    if not isTableUpdate then
        return
    end
    if teahouseData:checkTableState(tableInfo) then
        self:dispatchEvent({ name = self.EVENT_TABLE_LIST_UPATE, msg = { info = tableInfo } })
    else
        teahouseData:removeTableInfoByID(msgData.tableid)
        self:dispatchEvent({ name = self.EVENT_TABLE_LIST_REMOVE, msg = { info = tableInfo } })
    end
end

function TeaHouseMainModule:onUserLeaveRoom(msgData)
    local teahouseData = TeaHouse.manager.teahouseData
    local playerInfo = teahouseData:getPlayerInfo(msgData.areaID, msgData.numID)
    if playerInfo ~= nil then
        playerInfo.bOffLine = msgData.bOffLine
    end
    if msgData.isKicked then
        teahouseData:removeMemberInfo(msgData.areaID, msgData.numID)
        -- self:dispatchEvent({ name = self.EVENT_MEMBER_LIST_CHANGED })
    else
        teahouseData:setMemberInfo(msgData.areaID, msgData.numID, {
            bOffLine = true,
            nLastLeaveTime = os.time(),
        })
        self:dispatchEvent({ name = self.EVENT_MEMBER_LIST_UPDATE, msg = { areaID = msgData.areaID, numID = msgData.numID } })
    end
    if msgData.bOffLine then
        self:dispatchEvent({ name = self.EVENT_PLAYER_LIST_UPDATE, msg = { areaID = msgData.areaID, numID = msgData.numID } })
        self:dispatchEvent({ name = self.EVENT_PLAYER_LIST_CHANGED })
    else
        if not teahouseData:isPlayerInGame(msgData.areaID, msgData.numID) then
            self:dispatchEvent({ name = self.EVENT_PLAYER_LIST_REMOVE, msg = { areaID = msgData.areaID, numID = msgData.numID } })
            teahouseData:removePlayerInfo(msgData.areaID, msgData.numID)
            self:dispatchEvent({ name = self.EVENT_PLAYER_LIST_CHANGED })
        end
    end
    if TeaHouse.BridgeData.getBrandID() == msgData.areaID and TeaHouse.BridgeData.getNumberID() == msgData.numID then
        if msgData.isKicked then
            TeaHouse.StorageTool.removeOwnerTeaHouse(TeaHouse.BridgeData.getNumberID(), teahouseData:getTeaNumber())
            self:dispatchEvent({ name = self.EVENT_TEA_HOUSE_PAUSED, msg = { data = "YOU_KICKOUT_TEAHOUSE" } })
        end
    end
end

function TeaHouseMainModule:onRespOperatorManager(msgData)
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:isOwner() then
        return
    end
    if msgData.nAreaid ~= TeaHouse.BridgeData.getBrandID() or
    msgData.nNumid ~= TeaHouse.BridgeData.getNumberID() then
        return
    end
    if msgData.active == 1 then
        teahouseData:setIsisAdmin(true)
    elseif msgData.active == 0 then
        teahouseData:setIsisAdmin(false)
    end
    self:dispatchEvent({ name = self.EVENT_POWER_UPDATE })
end

function TeaHouseMainModule:onRespTeaHouseManager(msgData)
    local teahouseData = TeaHouse.manager.teahouseData
    if msgData.nTeaNumber ~= teahouseData:getTeaNumber() then
        return
    end
    for i = 1, msgData.nSize do
        teahouseData:setMemberInfoEx(msgData.nAreaid[i], msgData.nNumid[i], {
            nActive = msgData.nActive[i],
            nSerialid = msgData.nSerialid[i],
            nManagerRight = msgData.nManagerRight[i],
        })
    end
    self:dispatchEvent({ name = self.EVENT_ADMIN_RIGHT_UPDATE })
    if teahouseData:isOwner() then
        return
    end
    for i = 1, msgData.nSize do
        if msgData.nAreaid[i] == TeaHouse.BridgeData.getBrandID() and msgData.nNumid[i] == TeaHouse.BridgeData.getNumberID() then
            if msgData.nActive[i] == 1 then
                teahouseData:setIsisAdmin(true)
            elseif msgData.nActive[i] == 0 then
                teahouseData:setIsisAdmin(false)
            end
            self:dispatchEvent({ name = self.EVENT_POWER_UPDATE })
        end
    end
end

function TeaHouseMainModule:onMsgUserIsKickOff(msgData)
    local teahouseData = TeaHouse.manager.teahouseData
    if msgData.nTeaNumber ~= teahouseData:getTeaNumber() then
        return
    end
    teahouseData:removeMemberInfo(msgData.nAreaid, msgData.nNumid)
    self:dispatchEvent({ name = self.EVENT_MEMBER_LIST_CHANGED })
    teahouseData:removePlayerInfo(msgData.nAreaid, msgData.nNumid)
end

function TeaHouseMainModule:onRespSetManagerRight(msgData)
    local teahouseData = TeaHouse.manager.teahouseData
    teahouseData:setMemberInfoEx(TeaHouse.BridgeData.getAreaID(), TeaHouse.BridgeData.getNumberID(), {
        nManagerRight = msgData.nRight or 0
    })
    self:dispatchEvent({ name = self.EVENT_ADMIN_RIGHT_UPDATE })
end

function TeaHouseMainModule:onRespPlayerModeInfo(msgData)

end

local modeInfo
function TeaHouseMainModule:onRespPlayModeInfoEx(msgData)
    if msgData.nCurPkgIndex and msgData.nCurPkgIndex == 0 then
        modeInfo = {}
    end
    TeaHouse.manager.teahouseData:setPlayModeInfoFlag(true)
    if msgData.nTotalPkgNum and msgData.nTotalPkgNum > 0 then
        for key, var in ipairs(msgData.astMode) do
            table.insert(modeInfo, var)  
        end
        if msgData.nCurPkgIndex == msgData.nTotalPkgNum-1 then
            local modeInfos = {}
            modeInfos.astMode = modeInfo
            modeInfos.nSize = msgData.nTotalSize
            TeaHouse.manager.teahouseData:setPlayModeInfos(clone(modeInfos.astMode))
            self:dispatchEvent({ name = self.EVENT_PLAY_MODE_LIST_CHANGED })
        end
    else
        TeaHouse.manager.teahouseData:setPlayModeInfos(clone(msgData.astMode))
        self:dispatchEvent({ name = self.EVENT_PLAY_MODE_LIST_CHANGED })
    end
    -- self:dispatchEvent({ name = self.EVENT_PLAY_MODE_LIST_CHANGED })
end

function TeaHouseMainModule:onPlayModeInfoEx(msgData)
    local playModeInfo = clone(msgData)
    TeaHouse.manager.teahouseData:updatePlayModeInfo(playModeInfo)
    self:dispatchEvent({ name = self.EVENT_PLAY_MODE_LIST_UPDATE, msg = { info = playModeInfo } })
end

function TeaHouseMainModule:onRespUserInfoListCnt(msgData)
    local teahouseData = TeaHouse.manager.teahouseData
    teahouseData:setPlayerCount(msgData.nTotal)--338
    teahouseData:setOnlineCount(msgData.nCnt)    
    self:dispatchEvent({ name = self.EVENT_TEA_HOUSE_INFO_UPDATE })
end

function TeaHouseMainModule:onRespSetTeaTableRuleVisible(msgData)

end

function TeaHouseMainModule:onRespPayType(msgData)
    local teahouseData = TeaHouse.manager.teahouseData
    if msgData.nTeaid ~= teahouseData:getTeaNumber() then
        return
    end
    local oldPayTypes = teahouseData:getPayTypeByID(msgData.nTeaid) or {}
    local oldPayMode = teahouseData:getTeaHousePayMode()

    if #msgData.anPaySet == 0 then
        -- 绍兴3D完全迁移完毕后可删除
        -- if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.SHAOXING3D then
        --     self:judgeNeedFitOld(msgData.nTeaid)
        -- else
        teahouseData:setPayTypeByID(msgData.nTeaid, { msgData.nPayType })
        -- end
    else
        teahouseData:setPayTypeByID(msgData.nTeaid, msgData.anPaySet)
    end
    if teahouseData:isPlayerOwnerPayType(msgData.nTeaid) then
        if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.TAIZHOU then
            self:reqPlayerOwnerCard()
        elseif teahouseData:checkSelfPower("RechargeTeaHouse") then
            self:reqPropCnt()
        else
            self:reqPlayerOwnerCard()
        end
    end
    -- if teahouseData:isAgentPlayerPayType(msgData.nTeaid) then
    --     if not teahouseData:checkSelfPower("RechargeTeaHouse") then
    --         self:reqBuyPorp()
    --     end
    -- end
    teahouseData:setTeaHousePayMode(msgData.nPayModeType)
    teahouseData:setLastCost(msgData.bLastCost)

    local newPayTypes = teahouseData:getPayTypeByID(msgData.nTeaid) or {}
    local isChanged = (#newPayTypes ~= #oldPayTypes) or (oldPayMode ~= msgData.nPayModeType)
    if false == isChanged then
        for i,v in ipairs(newPayTypes) do
            if v ~= oldPayTypes[i] then
                isChanged = true 
            end
        end
    end
    self:dispatchEvent({ name = self.EVENT_PAY_MODE_UPDATE, data = {isChanged = isChanged} })
end

function TeaHouseMainModule:onRespTeaHouseUsePropCnt(msgData)
    local teahouseData = TeaHouse.manager.teahouseData
    if msgData.nTeaid ~= teahouseData:getTeaNumber() then
        return
    end
    if msgData.nAskType == TeaHouse.TeaHouseProtocol.RespTeaHouseUsePropCnt.ASK_TYPE.AT_TEAPROP then
        teahouseData:setSelfPropcount(msgData.nCount, teahouseData:getTeaNumber(), true)
        self:dispatchEvent({ name = self.EVENT_PROP_COUNT_UPDATE })
    end
end

--获取比赛场限时卡信息
function TeaHouseMainModule:reqTeaHouseTimeCardsInfo()
    local netReq = TeaHouse.manager.reqManager:createReq("NetReqTeaHouseTimeCardsInfo")
    netReq:addReqCallBack(self, self.onReqTeaHouseTimeCardsInfo)
    netReq:start(TeaHouse.manager.teahouseData:getTeaNumber(), 10)
end

function TeaHouseMainModule:onReqTeaHouseTimeCardsInfo(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        local teahouseData = TeaHouse.manager.teahouseData
        if data.nTeaId ~= teahouseData:getTeaNumber() then
            return
        end
        
        --更新比赛场当前房卡
        teahouseData:setSelfPropcount(data.nTeaPropsCount + teahouseData:changeTimeCardToSmallCard(data.nTeaTimeCardsCount), teahouseData:getTeaNumber(), true)
        self:dispatchEvent({ name = self.EVENT_PROP_COUNT_UPDATE })

        teahouseData:setTimeCardsInfo(data)
        self:dispatchEvent({ name = self.EVENT_SETUP_REQ_TIMECARDSINFO_SUCCESS, data = data })
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showToast("请求超时，请重试！")
    end
end

function TeaHouseMainModule:onRespAddPlayerProp(msgData)
    local teahouseData = TeaHouse.manager.teahouseData
    if msgData.nTeaid ~= teahouseData:getTeaNumber() then
        return
    end
    if teahouseData:isAgentPlayerPayType(msgData.nTeaid) or TeaHouse.BridgeData.isRemodelArea() then
        self:reqBuyPorp()
    end
end

function TeaHouseMainModule:createBoxRoom(data)
    if XH.lobby:getModule("PeakRace"):isShowApply(TeaHouse.manager.teahouseData:getTeaNumber()) then
        return
    end
    TeaHouse.showLoading()

    local createFunc = function(gameRuleEx)
        local teahouseData = TeaHouse.manager.teahouseData
        local bNotAutoSit = not teahouseData:checkSelfPower("AutoJoinTable")
        local ucCreateType = TeaHouse.TeaHouseProtocol.ReqCreateTableAutoSit.CREATETYPE.TY_TEA_PlAYER
        if teahouseData:isOwner() and bNotAutoSit then
            ucCreateType = TeaHouse.TeaHouseProtocol.ReqCreateTableAutoSit.CREATETYPE.TY_PROXY
        end
        if data.gameid and data.gameid == MutiVersionGameConfig.MutiVersionGameID.LSMahjong2New then
            data.gameid = 30287
        end
         --台州玉环挖花特判
        if data.gameid == 302841 then
            data.gameid = 30284
        end
        local info = {
            gameid = data.gameid, base = data.base, cont = data.cont, type = data.type,
            size = data.size, name = data.name, data = data.data, tableCnt = data.tableCnt,
            ucCreateType = ucCreateType, preCardID = 0, nPayType = data.payType, bNotAutoSit = bNotAutoSit,
            nModelIndex = data.nPlayModeId
        }

        if gameRuleEx ~= nil then
            info.data = info.data .. gameRuleEx
        end
        if cc.UserDefault:getInstance():getBoolForKey("BAN_PLAYER_CAN_GAME".. XH.playerData:getNumberID()) then
            TeaHouse.TipTool.showTip({
                type = TeaHouse.TipTool.TIP_TYPE.OK
            }, "您已被封禁对局，无法进入房间，如有疑问请联系客服。")
            TeaHouse.hideLoading()
        else
            local netReqCreateTableNew = TeaHouse.manager.reqManager:createReq("NetReqCreateTableAutoSit")
            netReqCreateTableNew.isFromPromote = data.isFromPromote
            netReqCreateTableNew:addReqCallBack(self, self.onNetReqCreateTableAutoSit)
            netReqCreateTableNew:start(info, 15)
        end
    end

    if TeaHouse.isNeedLocation(data.data) then
        local teahouseSDK = TeaHouse.manager.teahouseSDK
        teahouseSDK:addCallBack(teahouseSDK.SDK_TYPE.AMAP, "TeaHouseMainModule", function(event)
            teahouseSDK:removeCallBack(teahouseSDK.SDK_TYPE.AMAP, "TeaHouseMainModule")
            local locationInfo = self:analysisLocation(event, true)
            if locationInfo then
                createFunc(locationInfo)
            else
                if not XH.sdkManager:guideOpenGpsServer() then
                    TeaHouse.TipTool.showTip({
                        type = TeaHouse.TipTool.TIP_TYPE.OK,
                        funcOK = function()
                            teahouseSDK:jumpToSysSetup()
                        end
                    }, "您已经关闭了位置权限,需要您在系统设置中重新开启")
                end
                TeaHouse.hideLoading()
            end
        end)
        teahouseSDK:startFuncBySdkType(TeaHouse.manager.teahouseSDK.SDK_TYPE.AMAP)
    else
        createFunc()
    end
end

function TeaHouseMainModule:onNetReqCreateTableAutoSit(req, type,data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        if data and #data == 1 then
            local tableInfo = data[1]
            if tableInfo.bIsNewProcedure then
                if req.isFromPromote and TeaHouse.checkIsPromote2Open() then
                    TeaHouse.updateSetup()
                    TeaHouse.TipTool.showToast("创建房间成功!")
                end
                TeaHouse.manager.viewManager:closeView("TeaHouseCreateBoxRoomView")
                TeaHouse.manager.viewManager:closeView("TeaHouseCreatePlayModeRoomView")
                TeaHouse.SysTool.performWithDelay(0.05, function()
                    TeaHouse.hideLoading()
                    local teahouseData = TeaHouse.manager.teahouseData
                    if not teahouseData:checkSelfPower("AutoJoinTable") then
                        return
                    end
                    self:gameStart({
                        appID = tableInfo.nGameAppId,
                        gameID = tableInfo.nGameId,
                        roomMode = TeaHouse.ROOM_MODE.BOXROOM,
                        roomID = tableInfo.acPasswd,
                        teaHousePwd = teahouseData:getTeaHousePwd(),
                        teaHouseTitle = teahouseData:getTeaHouseTitle(),
                        tablePwd = tableInfo.acPasswd,
                        isNewProcess = true
                    })
                end)
            else
                --TODO
            end
        else
            TeaHouse.hideLoading()
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
        end
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.hideLoading()
        if data.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.ERR_INTABLE or
        data.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.ERR_ALREADY_GAME or
        data.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.ERR_ALREADY_CREATE or
        data.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.ERR_ALREADY_JOIN then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL,
            funcOK = function()
                if self:isSelfInTable() then
                    self:checkSelfInTable()
                else
                    self:dispatchEvent({ name = self.EVENT_TEA_HOUSE_CLOSED })
                    TeaHouse.manager.teahouseList:closeSuitableTeaHouseListView()
                end
            end }, "PLAYER_ISIN_TABLECACHE")
        elseif data.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.TEAHOUSE_WITHOUT_PLAYMODE then
            --TODO
        elseif data.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.MAXTABLE then
            if req:getMessage() == "CREATE_FAIL_LIMITCOUNT" then
                self:doUnLockTableNumber(data.nUnLockActiveValue,req:getMessage())
            end
        else
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
        end
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.hideLoading()
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "CREATE_TABLE_TIMEOUT")
    end
end

function TeaHouseMainModule:doUnLockTableNumber(nUnLockActiveValue,msg,isOwnerUp)
    if TeaHouse.BridgeData.isRemodelArea()  and TeaHouse.manager.teahouseData:isOwner() then
        if TeaHouse.manager.teahouseData:getTeaHouseLevel() ~= TeaHouse.manager.configManager.remodelConfig.TEAHOUSELEVEL.JUNIOR then
            local condition = nUnLockActiveValue or  500 --解锁桌子的默认数值
            local activeValue = tonumber(TeaHouse.manager.teahouseData:getTeaActiveValue())
            local tipMsg
            if TeaHouse.BridgeData.isFixPayTypeArea() then
                tipMsg = string.format("每%s活跃值可额外解锁1张桌子\n当前活跃值为%s，是否解锁？",condition,activeValue)
            else
                tipMsg = string.format("活跃值达到%s即可解锁额外5张桌子，当前活跃值为%s，是否解锁？",condition,activeValue)
            end    
            if not isOwnerUp then
                tipMsg = "您的比赛场桌子数量已达上限，" .. tipMsg
            end
            local info = {}
            info.type = XH.TIP_LAYER_TYPE.OK_CANCEL
            info.funcOK  = function()
                if activeValue >= tonumber(condition) then
                    self:reqUnLockTeaHouseTable()
                else
                    TeaHouse.TipTool.showToast("TEAHOUSE_ACTIVE_VALUE_NOT_ENOUGH")
                end
                TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_101)
            end
            TeaHouse.TipTool.showTip(info,tipMsg)
        else
            if TeaHouse.manager.teahouseMain:isShowPhoneBindTip("绑定手机后可以升级至高级比赛场，解锁该功能，是否绑定？", TeaHouse.manager.teahouseData:getTeaNumber()) then
                
            else
                if msg then
                    TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, msg)
                end
            end
        end
    else
        if TeaHouse.manager.teahouseData:getTeaHouseLevel() == TeaHouse.manager.configManager.remodelConfig.TEAHOUSELEVEL.JUNIOR then
            TeaHouse.manager.teahouseMain:showTableNoticeTip("通知领队绑定手机，升级至高级比赛场后可以增加桌子数量。")
        else
            if msg then
                TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, msg)
            end
        end
    end 
end

---是否在游戏中
function TeaHouseMainModule:setIsInGame(isInGame)
    self._isInGame = isInGame
end

---是否在场景中
function TeaHouseMainModule:setIsInScene(isInScene)
    self._isInScene = isInScene
end

function TeaHouseMainModule:reqTeaHousePayType()
    local netReqTeaHousePayType = TeaHouse.manager.reqManager:createReq("NetReqTeaHousePayType")
    netReqTeaHousePayType:start(TeaHouse.manager.teahouseData:getTeaNumber(), 10)
end

--座位是否为空
function TeaHouseMainModule:isSeatEmpty(tableID, seatID)
    local tableInfo = TeaHouse.manager.teahouseData:getTableInfoByID(tableID)
    if tableInfo == nil then
        return false
    end
    if tableInfo.nAreaid[seatID + 1] == 0 and tableInfo.nNumid[seatID + 1] == 0 then
        return true
    end
    return false
end

function TeaHouseMainModule:reqJoinTable(tableID, seatID, gameID, bSeer)
    if XH.lobby:getModule("PeakRace"):isShowApply(TeaHouse.manager.teahouseData:getTeaNumber()) then
        return
    end
    TeaHouse.showLoading()

    if self._isJoinTable then
        return
    end

    if bSeer then
        local data = {
            block_label = '比赛场牌桌',
            item_id = tostring(gameID)
        }
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.g030601, data)
    end

    self._isJoinTable = true

    local joinFunc = function(otherInfo)
        local bRandomSit = false
        local tableInfo = TeaHouse.manager.teahouseData:getTableInfoByID(tableID)
        if tableInfo and tableInfo.data then
            bRandomSit = string.find(tableInfo.data, RULE_STR_RANDOM_SIT_OPEN)
        end
        local netReqJoinTable = TeaHouse.manager.reqManager:createReq("NetReqJoinTable")
        netReqJoinTable:addReqCallBack(self, self.onNetReqJoinTable)
        netReqJoinTable:start(TeaHouse.manager.teahouseData:getTeaNumber(), tableID, seatID, otherInfo, bRandomSit, 10, bSeer)
    end

    if TeaHouse.getLocationGameRuleKeyword() then
        local teahouseSDK = TeaHouse.manager.teahouseSDK
        teahouseSDK:addCallBack(teahouseSDK.SDK_TYPE.AMAP, "TeaHouseMainModule", function(event)
            teahouseSDK:removeCallBack(teahouseSDK.SDK_TYPE.AMAP, "TeaHouseMainModule")
            local locationInfo = self:analysisLocation(event, false)
            joinFunc(locationInfo)
        end)
        teahouseSDK:startFuncBySdkType(TeaHouse.manager.teahouseSDK.SDK_TYPE.AMAP)
    else
        joinFunc()
    end
end

function TeaHouseMainModule:onNetReqJoinTable(req, type, data)
    self._isJoinTable = false
    if type == TeaHouse.Req.TYPE.SUCCESS then
        local teahouseData = TeaHouse.manager.teahouseData
        if data.bIsNewProcedure then
            self:gameStart({
                appID = data.nAppId,
                gameID = data.nGameId,
                roomMode = TeaHouse.ROOM_MODE.BOXROOM,
                roomID = data.nRoomId,
                teaHousePwd = teahouseData:getTeaHousePwd(),
                teaHouseTitle = teahouseData:getTeaHouseTitle(),
                isNewProcess = true
            })
        else
            --TODO
        end

        self:onQuickJoinTable(true)
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.hideLoading()
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "JOIN_TABLE_TIMEOUT")
        self:onQuickJoinTable(true)
    elseif type == TeaHouse.Req.TYPE.FAIL then
        --是否快速加入中
        if self._quickJoinTableInfo then
            XH.SysTool.performDelayOnce(function()
                self:onQuickJoinTable(false)
            end, 0.3)
            return
        end
        TeaHouse.hideLoading()
        if data == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.ERR_INTABLE or
        data == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.ERR_ALREADY_GAME or
        data == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.ERR_ALREADY_CREATE or
        data == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.ERR_ALREADY_JOIN then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL,
            funcOK = function()
                if self:isSelfInTable() then
                    self:checkSelfInTable()
                else
                    self:dispatchEvent({ name = self.EVENT_TEA_HOUSE_CLOSED })
                    -- TeaHouse.manager.viewManager:closeView("TeaHouseListView")
                    TeaHouse.manager.teahouseList:closeSuitableTeaHouseListView()
                end
            end }, "PLAYER_ISIN_TABLE")
        elseif data == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.ERR_GPS_OPEN then
            if not XH.sdkManager:guideOpenGpsServer() then
                TeaHouse.TipTool.showTip({
                    type = TeaHouse.TipTool.TIP_TYPE.OK,
                    funcOK = function()
                        TeaHouse.manager.teahouseSDK:jumpToSysSetup()
                    end
                }, "您已经关闭了位置权限,需要您在系统设置中重新开启")
            end
        elseif data == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.BAN then
            TeaHouse.TipTool.showTip({
                type = TeaHouse.TipTool.TIP_TYPE.OK,
                funcOK = function()                    
                end
            }, "您已被封禁对局，无法进入房间，如有疑问请联系客服。")            
        else
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
        end
    end
end

function TeaHouseMainModule:gameStart(info)
    if self._isInGame then
        return
    end

    --TODO
    TeaHouse.gameStart(info.appID, info.gameID, info.roomMode, info.roomID)
    self._isInGame = true
    self._enterTableID = nil
    self._enterSeatID = 0
end

---尝试加入桌子
function TeaHouseMainModule:tryToJoinTable(tableID, seatID)
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:getUCRight() == teahouseData.UC_RIGHT.NO then
        TeaHouse.hideLoading()
        ---点击微信链接进入游戏
        if self._enterTableID ~= nil then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL,
            funcOK = function()
                self:reqAskPower("")
            end }, "NO_RIGHT_TOSTART")
        end
        self._enterTableID = nil
        self._enterSeatID = 0
        return
    end
    local tableInfo = teahouseData:getTableInfoByID(tableID)
    if tableInfo ~= nil then
        local isFound = false
        if tableInfo.state == TeaHouse.TeaHouseProtocol.TableInfo.FLAG.ST_GAME then
			local isSupportWatch = XH.lobby:getModule("Sxvip"):getPowerExit(SxVipConfig.SXVIP_POWER.WATCH, tableInfo.gameid) and not XH.lobby:getModule("Im"):judgePlayerInGame()
            local msg = "房间人满已开始游戏"
            local func = nil
			if isSupportWatch then
				if not self:isVipExpire() then
					msg = '房间人满已开始游戏，是否前往观战？'
				else
					msg = '房间人满已开始游戏，是否【开通会员观战】？'
				end
                func = function()
                    -- 会员时效内，进入房间观战，不在时效内，打开VIP界面
                    if not self:isVipExpire() then
                        -- 请求boxdata服务新协议进入回放观战模式
                        TeaHouse.reqRealtimeGameRecord(tableID, 0, tableInfo.gameid, tableInfo.nPlayerCount)
                    else
                        XH.viewManager:openView("SxvipShopView")
                    end
                end
            end
			XH.TipTool.showTip({
				type = XH.TIP_LAYER_TYPE.OK_CANCEL,
				funcOK = func
			}, msg)
            return
        end
        for i = seatID, tableInfo.size - 1 do
            if i >= 0 and self:isSeatEmpty(tableID, i) then
                isFound = true
                self._enterSeatID = i + 1
                self:reqJoinTable(tableID, i, tableInfo.gameid)
                break
            end
        end
        if isFound == false then
            TeaHouse.hideLoading()
            self._enterTableID = nil
            self._enterSeatID = 0
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "TABLE_NO_EMPTY")
        end
    else
        self._enterTableID = nil
        self._enterSeatID = 0
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "TABLE_NOT_EXIT")
        TeaHouse.BridgeData.reqPlayerPosition()
    end
end

function TeaHouseMainModule:joinTable(tableID, seatID)
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:isOwner() and not TeaHouse.BridgeData.isRemodelArea()
    and not (TeaHouse.BridgeData.getLobbyID() == TeaHouse.LOBBY_ID.TAIZHOU)  then
        if not TeaHouse.manager.configManager.SetupConfig.IsOpenTeaHouseByPhone then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "PROMOTES_CANNOT_PLAY")
            return
        end
    end
    self._enterTableID = nil
    self._enterSeatID = 0
    ---检查玩家是否在桌子内
    if self:checkSelfInTable(true) then
        return
    end
    local tableInfo = teahouseData:getTableInfoByID(tableID)
    if tableInfo == nil then
        return
    end
    --TODO 控制器
    if not self:isSeatEmpty(tableID, seatID) then
        return
    end
    if teahouseData:getUCRight() == teahouseData.UC_RIGHT.NO then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "NO_RIGHT_TOJOIN")
        return
    end
    self:reqJoinTable(tableID, seatID, tableInfo.gameid)
end

function TeaHouseMainModule:playerJoinRoom(playerInfo)
    local teahouseData = TeaHouse.manager.teahouseData
    local tableInfo = teahouseData:getTableInfoByID(playerInfo.tableid)
    if tableInfo == nil then
        playerInfo.tableid = 0
        playerInfo.seat = -1
        return
    end
    if not teahouseData:checkTableState(tableInfo) then
        playerInfo.tableid = 0
        playerInfo.seat = -1
        return
    end

    TeaHouse.showLoading()
    TeaHouse.SysTool.performWithDelay(0.05, function()
        TeaHouse.hideLoading()
        local teahouseData = TeaHouse.manager.teahouseData
        self:gameStart({
            appID = tableInfo.appid,
            gameID = tableInfo.gameid,
            roomMode = TeaHouse.ROOM_MODE.BOXROOM,
            roomID = tableInfo.passwd,
            teaHousePwd = teahouseData:getTeaHousePwd(),
            teaHouseTitle = teahouseData:getTeaHouseTitle(),
            tablePwd = tableInfo.passwd,
            isNewProcess = true
        })
    end)
end

function TeaHouseMainModule:checkSelfInTable(isQuery)
    local playerInfo = TeaHouse.manager.teahouseData:getPlayerInfo(TeaHouse.BridgeData.getBrandID(), TeaHouse.BridgeData.getNumberID())
    if playerInfo == nil then
        return false
    end
    if self._enterTableID and self._enterTableID > 0 and playerInfo.tableid ~= self._enterTableID then
        return false
    end
    if playerInfo.tableid > 0 and playerInfo.seat >= 0 then
        if isQuery then
            --TODO
        else
            TeaHouse.SysTool.performWithDelay(0.2, function()
                self:playerJoinRoom(playerInfo)
            end)
        end
        return true
    else
        --宁夏拉黑的玩家给一个提示
        if not playerInfo.bCanPlay then
            --TODO
        end
    end
    return false
end

-- 判断玩家是否在有效游戏中，旁观玩家playerInfo.seat是255
function TeaHouseMainModule:checkSelfInGaming()
    local playerInfo = TeaHouse.manager.teahouseData:getPlayerInfo(TeaHouse.BridgeData.getBrandID(), TeaHouse.BridgeData.getNumberID())
    if playerInfo == nil then
        return false
    end
    if self._enterTableID and self._enterTableID > 0 and playerInfo.tableid ~= self._enterTableID then
        return false
    end
    if playerInfo.tableid > 0 and playerInfo.seat >= 0 and playerInfo.seat <= 8 then
        return true
    end
    return false
end

function TeaHouseMainModule:checkSelfGameStatus()
    local isInTable = self:checkSelfInTable(false)
    if isInTable then
        self._enterTableID = nil
    else
        if self._enterTableID ~= nil then
            self:tryToJoinTable(self._enterTableID, self._enterSeatID)
        elseif self._playModeId ~= nil then
            self:quickCreatePlayMode({ playModeId = self._playModeId })
        else
            local teahouseData = TeaHouse.manager.teahouseData
            if teahouseData:getTeaHouseStatus() == TeaHouse.TeaHouseProtocol.RespTeaHouseInfo.FLAG.PAUSED then
                local msg = teahouseData:isOwner() and "YOU_HAVE_SUSPENDTEAHOUSE" or "OWNER_HAVE_SUSPENDTEAHOUSE"
                self:dispatchEvent({ name = self.EVENT_TEA_HOUSE_PAUSED, msg = { data = msg } })
            end
        end
    end
end

function TeaHouseMainModule:joinCheck()
    if not self._isInScene then
        return
    end
    if self._isJoinCheck then
        return
    end
    self._isJoinCheck = true
    self:checkSelfGameStatus()
end

function TeaHouseMainModule:reqAskPower(msg)
    TeaHouse.showLoading()
    local netReqAskPower = TeaHouse.manager.reqManager:createReq("NetReqAskPower")
    netReqAskPower:addReqCallBack(self, self.onNetReqAskPower)
    netReqAskPower:start(msg, 10)
end

function TeaHouseMainModule:onNetReqAskPower(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        if data and data.right == TeaHouse.manager.teahouseData.UC_RIGHT.WAITING then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "HAVE_APPLY_TOBEDONE")
            XH.lobby:getModule("FriendTea"):reqBBApplyJoinClub({clubId = data.teaid})
        end
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "APPLY_RIGHT_TIMEOUT")
    end
end

function TeaHouseMainModule:setEnterTableID(tableID)
    self._enterTableID = tableID
end

function TeaHouseMainModule:setEnterSeatID(seatID)
    self._enterSeatID = seatID
end

function TeaHouseMainModule:dimissTable(tableInfo, isForce)
    if tableInfo == nil then
        return
    end
    isForce = isForce or false
    TeaHouse.showLoading()
    local netReqDeleteTable = TeaHouse.manager.reqManager:createReq("NetReqDeleteTable")
    netReqDeleteTable:addReqCallBack(self, self.onNetReqDeleteTable)
    netReqDeleteTable:start(tableInfo.tableid, TeaHouse.manager.teahouseData:getTeaNumber(), 15, isForce and 1 or 0)
end

function TeaHouseMainModule:onNetReqDeleteTable(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        TeaHouse.TipTool.showToast("解散房间成功!")
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showToast(req:getMessage())
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showToast("解散房间超时，请稍后再试！")
    end
end

function TeaHouseMainModule:reqBuyPorp(bNotShowTips)
    local netReqBuyProp = TeaHouse.manager.reqManager:createReq("NetReqBuyProp")
    netReqBuyProp:addReqCallBack(self, self.onNetReqBuyProp)
    netReqBuyProp:start(TeaHouse.manager.teahouseData:getTeaNumber(),10,bNotShowTips)
end

function TeaHouseMainModule:onNetReqBuyProp(req, type, data)
    local teahouseData = TeaHouse.manager.teahouseData
    local isAgentPlayer = teahouseData:isAgentPlayerPayType()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        teahouseData:setUserShowPropCount(tonumber(data.nAllProp))
        local playerInfo = teahouseData:getPlayerInfo(TeaHouse.BridgeData.getBrandID(), TeaHouse.BridgeData.getNumberID())
        if playerInfo ~= nil then
            playerInfo.nUserShowProps = tonumber(data.nAllProp)
        end
        if not isAgentPlayer then
            if  TeaHouse.BridgeData.isRemodelArea() and (teahouseData:isOwner() or teahouseData:isAdmin())then
                --如果是转型地区的领队/副领队加卡不弹提示
            else
                if not data.bNotShowTips then
                    if data.nBuyProp == 0 then
                        TeaHouse.TipTool.showToast("您的房卡数量没有变化，如有疑问，请联系领队")
                    else              
                        TeaHouse.TipTool.showToast(string.format("购买成功，您获得了%d张比赛场房卡", data.nBuyProp / teahouseData:getCardExchangeRate()))
                    end
                end
            end
        end
        self:dispatchEvent({ name = self.EVENT_PROP_COUNT_UPDATE })
    else
        if not isAgentPlayer and teahouseData:isMemberInMember(teahouseData:getMemberInfos()) then--and not data.bNotShowTips then
            TeaHouse.TipTool.showToast(req:getMessage())
        end
    end
end

function TeaHouseMainModule:onRespUpdateBuyProp(msgData)
    local teahouseData = TeaHouse.manager.teahouseData
    teahouseData:setUserShowPropCount(tonumber(msgData.nAllProp))
    local playerInfo = teahouseData:getPlayerInfo(TeaHouse.BridgeData.getBrandID(), TeaHouse.BridgeData.getNumberID())
    if playerInfo ~= nil then
        playerInfo.nUserShowProps = tonumber(msgData.nAllProp)
    end
    self:dispatchEvent({ name = self.EVENT_PROP_COUNT_UPDATE })
end

function TeaHouseMainModule:isSelfInTable()
    local teahouseData = TeaHouse.manager.teahouseData
    local playerInfo = teahouseData:getPlayerInfo(TeaHouse.BridgeData.getBrandID(), TeaHouse.BridgeData.getNumberID())
    if playerInfo == nil then
        return false
    end
    return teahouseData:getTableInfoByID(playerInfo.tableid) ~= nil
end

function TeaHouseMainModule:reqDailyProp(teaNumber)
    teaNumber = teaNumber or TeaHouse.manager.teahouseData:getTeaNumber()
    local netReqTeaHouseUsePropCnt = TeaHouse.manager.reqManager:createReq("NetReqTeaHouseUsePropCnt")
    netReqTeaHouseUsePropCnt:addReqCallBack(self, self.onNetReqTeaHouseUsePropCnt)
    netReqTeaHouseUsePropCnt:start(teaNumber, TeaHouse.TeaHouseProtocol.ReqTeaHouseUsePropCnt.ASK_TYPE.AT_ALL, 10)
end

function TeaHouseMainModule:onNetReqTeaHouseUsePropCnt(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        TeaHouse.manager.teahouseData:setMaxDailyPropCount(tonumber(data.DailyUseProp) or 9999)
    end
end

function TeaHouseMainModule:reqPlayerTeaHouseCost(teaNumber, numID)
   local netReqTeaHousePlayerCost = TeaHouse.manager.reqManager:createReq("NetReqTeaHousePlayerCost")
   netReqTeaHousePlayerCost:addReqCallBack(self, self.onNetReqTeaHousePlayerCost)
   netReqTeaHousePlayerCost:start(teaNumber, numID, 45)
end

function TeaHouseMainModule:onNetReqTeaHousePlayerCost(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        local teahouseData = TeaHouse.manager.teahouseData
        local playerInfo = teahouseData:getPlayerInfo(data.nAreaid, data.nNumid)
        if playerInfo ~= nil then
            playerInfo.nDailyCost = data.nTodaycost
            playerInfo.nHistoryCost = data.nHistorycost
        end
        teahouseData:setMemberInfo(data.nAreaid, data.nNumid, {
            nDailyCost = data.nTodaycost,
            nHistoryCost = data.nHistorycost
        })
        self:dispatchEvent({ name = self.EVENT_MEMBER_LIST_UPDATE, msg = { areaID = data.nAreaid, numID = data.nNumid } })
    end
end

---请求是否陌生人可见
function TeaHouseMainModule:reqOthersHideTHInfo()
    local netReqOthersHideTHInfo = TeaHouse.manager.reqManager:createReq("NetReqOthersHideTHInfo")
    netReqOthersHideTHInfo:addReqCallBack(self, self.onNetReqOthersHideTHInfo)
    netReqOthersHideTHInfo:start(TeaHouse.manager.teahouseData:getTeaNumber(), 10)
end

function TeaHouseMainModule:onNetReqOthersHideTHInfo(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        local teahouseData = TeaHouse.manager.teahouseData
        teahouseData:setIsOthersShow(false)
        local powerConfig = TeaHouse.manager.configManager.powerConfig
        if powerConfig ~= nil then
            local powerValue = teahouseData.POWER_VALUE.ALLOW_LOW
            if powerConfig:checkPower(teahouseData.POWER_LEVEL.OWNER, "ModifyVisible", powerValue) then
                teahouseData:setIsOthersShow(not data.bHide)
            end
        end
        self:dispatchEvent({ name = self.EVENT_OTHERS_SHOW_UPDATE })
    end
end

function TeaHouseMainModule:reqPropCnt()
    local netReqPropCnt = TeaHouse.manager.reqManager:createReq("NetReqPropCnt")
    netReqPropCnt:addReqCallBack(self, self.onNetReqPropCnt)
    netReqPropCnt:start(TeaHouse.manager.teahouseData:getTeaNumber(), 10)
end

function TeaHouseMainModule:onNetReqPropCnt(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        TeaHouse.manager.teahouseData:setPropCount(data.nPropCnt)
        self:dispatchEvent({ name = self.EVENT_PAY_MODE_UPDATE })
    end
end

function TeaHouseMainModule:reqPlayerOwnerCard()
    local netReqPlayerOwnerCard = TeaHouse.manager.reqManager:createReq("NetReqPlayerOwnerCard")
    netReqPlayerOwnerCard:addReqCallBack(self, self.onNetReqPlayerOwnerCard)
    local roomCardID = TeaHouse.BridgeData.getSmallRoomCardID() or TeaHouse.BridgeData.getRoomCardID()
    netReqPlayerOwnerCard:start(TeaHouse.manager.teahouseData:getTeaNumber(), roomCardID, 10)
end

function TeaHouseMainModule:onNetReqPlayerOwnerCard(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        TeaHouse.manager.teahouseData:setPlayerOwnerPropCount(data.nPropCnt)
        self:dispatchEvent({ name = self.EVENT_PAY_MODE_UPDATE })
    end
end

function TeaHouseMainModule:reqUserInfoListCnt()
    local reqUserInfoListCnt = TeaHouse.TeaHouseProtocol.ReqUserInfoListCnt:new()
    reqUserInfoListCnt.nAskid = 0
    reqUserInfoListCnt.nTeaNumber = TeaHouse.manager.teahouseData:getTeaNumber()
    TeaHouse.manager.netManager:sendProtocol(reqUserInfoListCnt)
end

local KW_LIMIT_DISTANCE = 200
function TeaHouseMainModule:analysisLocation(event, isCheck)
    local code = event.data.code
    local msg = event.data.msg

    isCheck = isCheck or false
    local longitude = 0
    local latitude = 0
    local bOpenGPS = 0
    if code == XH.ThirdDefine.AMAP_CALLBACK_CODE.AMAP_SUCCESS then
        local ok, jsonData = xpcall(cjson.decode, __G__TRACKBACK__, msg)
        if not ok or not jsonData then
            if msg and type(msg) == "string" then
                -- XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.KW_COMMON, {label = "定位异常"}, { info = msg })
            else
                -- XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.KW_COMMON, {label = "定位异常"}, { info = "" })
            end
        end
        if ok and jsonData then
            longitude = jsonData.longitude or 0
            latitude = jsonData.latitude or 0
            bOpenGPS = 1
        elseif isCheck then
            return nil
        end
    else
        if isCheck then
            return nil
        end
    end

    if longitude == 0 and latitude == 0 then
        if XH.playerData.getServerLocation then
            local localLongitude, localLatitude = XH.playerData:getServerLocation()
            if localLongitude and localLatitude then
                longitude =  localLongitude
                latitude = localLatitude
                bOpenGPS = 1
            end
        end
    end

    local locationInfo = "longitude='" .. longitude .. "';" .. "latitude='" .. latitude .. "';bOpenGPS='" .. bOpenGPS .. "';"
    if isCheck and bOpenGPS == 1 then
        locationInfo = "bCheckPos=" .. bOpenGPS .. ";" .. "distance='" .. KW_LIMIT_DISTANCE .. "';" .. locationInfo
    end
    return locationInfo
end

local EVENT_TEAHOUSE_QUICK_START = "EVENT_TEAHOUSE_QUICK_START"   --快速开始事件名称
local KW_TEAHOUSE_MAX_QUICK_START_TIME = 10  --请求快速加入最大次数（失败后重新请求的最大次数）
function TeaHouseMainModule:addQuickStartEventListener()
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local customListener = cc.EventListenerCustom:create(EVENT_TEAHOUSE_QUICK_START, handler(self, self.onEventQuickJoinTable))
    eventDispatcher:addEventListenerWithFixedPriority(customListener, 1)
end

function TeaHouseMainModule:onEventQuickJoinTable(event)
    local tbRule = event.msg.gameRuleTable
    local tbKeys = event.msg.checkRule
    local rule = {}
    for _, key in pairs(tbKeys) do
        if key == "PayType" and tbRule["PayType"] == nil and tbRule["PlaymentType"] then
            rule[key] = (tbRule["PlaymentType"] == 1) and "20" or "21"
        else
            rule[key] = tbRule[key]
        end
    end

    self._quickJoinTableInfo = {}
    self._quickJoinTableInfo.rule = rule
end

function TeaHouseMainModule:onQuickJoinTable(isSuccess)
    if isSuccess then
        self._quickJoinTableInfo = nil
    else
        if self._quickJoinTableInfo == nil then
            return
        end
        if self._quickJoinTableInfo.reqTime > KW_TEAHOUSE_MAX_QUICK_START_TIME then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "快速开始失败")
            self._quickJoinTableInfo = nil
            return
        end
        local lastJoinTableID = self._quickJoinTableInfo.tableID
        self._quickJoinTableInfo.ignoreTableIDs = self._quickJoinTableInfo.ignoreTableIDs or {}
        table.insert(self._quickJoinTableInfo.ignoreTableIDs, lastJoinTableID)
        self:checkNeedQuickJoinTable()
    end
end

function TeaHouseMainModule:checkNeedQuickJoinTable()
    if not self._quickJoinTableInfo then
        return
    end
    local rule = self._quickJoinTableInfo.rule
    local ignoreTableIDs = self._quickJoinTableInfo.ignoreTableIDs or {}
    local joinTableInfo = TeaHouse.manager.teahouseData:getQuickJoinTableInfoByRule(rule, ignoreTableIDs)
    if joinTableInfo then
        self._quickJoinTableInfo.tableID = joinTableInfo.tableid
        self._quickJoinTableInfo.reqTime = self._quickJoinTableInfo.reqTime or 0
        self._quickJoinTableInfo.reqTime = self._quickJoinTableInfo.reqTime + 1
        self:tryToJoinTable(self._quickJoinTableInfo.tableID, 0)
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "快速开始失败，当前没有可以加入的桌子")
        self._quickJoinTableInfo = nil
    end
end

function TeaHouseMainModule:checkPlayerOwnerProp()
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:isPlayerOwnerPayType() then
        if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.TAIZHOU then
            self:reqPlayerOwnerCard()
        elseif teahouseData:checkSelfPower("RechargeTeaHouse") then
            self:reqPropCnt()
        else
            self:reqPlayerOwnerCard()
        end
    end
end

function TeaHouseMainModule:checkAgentPlayerProp()
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:isAgentPlayerPayType() then
        if not teahouseData:checkSelfPower("RechargeTeaHouse") then
            self:reqBuyPorp()
        end
    end
end

function TeaHouseMainModule:reqGetRanklistVisible(type)
    type = type or TeaHouse.TeaHouseProtocol.ReqGetRanklistVisible.TYPE.TEA
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqGetRanklistVisible = TeaHouse.manager.reqManager:createReq("NetReqGetRanklistVisible")
    netReqGetRanklistVisible:addReqCallBack(self, self.onNetReqRankSelfInfoBigWinner)
    netReqGetRanklistVisible:start(teahouseData:getTeaNumber(), TeaHouse.BridgeData.getNumberID(), type, 15)
end

function TeaHouseMainModule:onNetReqRankSelfInfoBigWinner(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        TeaHouse.manager.teahouseData:setRankBit(data.nVisibleRankBit)
        self:dispatchEvent({ name = self.EVENT_RANK_VISIBLE_UPDATE })
    end
end

--玩家比赛场活跃值
function TeaHouseMainModule:reqUpgradeTeaHouse(teaid)
    TeaHouse.showLoading()
    local netReqUpgradeTeaHouse = TeaHouse.manager.reqManager:createReq("NetReqUpgradeTeaHouse")
    netReqUpgradeTeaHouse:addReqCallBack(self, self.onNetReqUpgradeTeaHouse)
    netReqUpgradeTeaHouse:start(teaid,10)
end

function TeaHouseMainModule:onNetReqUpgradeTeaHouse(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        -- 升级为高级比赛场
        self:dispatchEvent({ name = self.EVENT_TEAHOUSE_LEVELUP_SUCCSEE })
    else
        TeaHouse.TipTool.showTip({type = TeaHouse.TipTool.TIP_TYPE.OK}, req:getMessage())
    end
end

--解锁桌子
function TeaHouseMainModule:reqUnLockTeaHouseTable()
    TeaHouse.showLoading()
    local netReqUnLockTeaInfo = TeaHouse.manager.reqManager:createReq("NetReqUnLockTeaInfo")
    netReqUnLockTeaInfo:addReqCallBack(self, self.onRespUnLockTeaHouseTable)
    netReqUnLockTeaInfo:start(TeaHouse.TeaHouseProtocol.ReqUnLockTeaInfo.UNLOCK_TYPE.TABLECOUNT,TeaHouse.manager.teahouseData:getTeaNumber(),10)
end

function TeaHouseMainModule:onRespUnLockTeaHouseTable(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        TeaHouse.TipTool.showToast("UNLOCK_TABLE_SUCCESS")
        --刷新桌子数量
        local currentTableCount = data.nCount
        if currentTableCount > 0 then 
            TeaHouse.manager.teahouseData:setTableTotalCount(currentTableCount)
        end
    else
        TeaHouse.TipTool.showToast(req:getMessage())
    end
end

function TeaHouseMainModule:judgeNeedFitOld(nTeaid)
    local teahouseData = TeaHouse.manager.teahouseData
    teahouseData:setPayTypeByID(nTeaid, { [1] = 1; })
end

function TeaHouseMainModule:reqTaskProtocol(taskid,specialStr,callBcak)
    local reqTaskPercent = require("app.Req.Task.ReqTaskProtocol")
    local TaskPercent = reqTaskPercent:new()
    local specialString = specialStr or ""
    TaskPercent:start(taskid, 1, 0, TeaHouse.BridgeData.getSRSGroupID(), 10, specialString)
    TaskPercent:addReqCallBack(self, callBcak)
end

function TeaHouseMainModule:fixPrevAAPlayModelCreateRoomData(ruleDataStr,curPayType)
    local teahousePayMode = TeaHouse.manager.teahouseData:getTeaHousePayMode()
    local newRuleDataStrTable = string.split(ruleDataStr, ";")
    local newRuleDataStr = ""
    if newRuleDataStrTable and curPayType then
        if teahousePayMode  == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON  then
            for _,v in pairs(newRuleDataStrTable) do
                if string.find(v,"PayType") or string.find(v,"PrevAA") then
                    v = nil
                end
                if v and v ~= "" then
                    newRuleDataStr = newRuleDataStr .. v ..";"
                end
            end
            local isPrevAA = false
            local SetupConfig = TeaHouse.manager.configManager.SetupConfig
            if SetupConfig and SetupConfig.IsFixedPayType then 
                if TeaHouse.LOBBY_ID.WENZHOU == TeaHouse.BridgeData.getLobbyID() and curPayType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_AA then
                    isPrevAA = true
                end
            end
            if curPayType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER_YUFU_MODE_AA then
                isPrevAA = true
            end
            if isPrevAA then
                newRuleDataStr =  newRuleDataStr .. "PayType='999';PrevAA=1;"
            else
                newRuleDataStr =  newRuleDataStr .. string.format("PayType='%s';",curPayType)
            end
            ruleDataStr = newRuleDataStr
        else
            for _,v in pairs(newRuleDataStrTable) do
                if string.find(v,"PayType") or string.find(v,"PrevAA") then
                    v = nil
                end
                if v and v ~= "" then
                    newRuleDataStr = newRuleDataStr .. v ..";"
                end
            end
            newRuleDataStr =  newRuleDataStr .. string.format("PayType='%s';",curPayType)
            if curPayType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER_YUFU_MODE_AA then
                newRuleDataStr =  newRuleDataStr .. "PrevAA=1;"
            end
            ruleDataStr = newRuleDataStr
        end
    end 
    return ruleDataStr
end

--由于业务的历史包袱,导致部分地区的比赛场大小卡有bug,新的服务对此问题进行兼容,前项收费模式下客户端主动加一次刷新数据请求,减少玩家的困扰
function TeaHouseMainModule:updateUserVirtualCard()
    local teahousePayMode = TeaHouse.manager.teahouseData:getTeaHousePayMode()
    if TeaHouse.BridgeData.isRemodelArea() and teahousePayMode  == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON then 
        if self:isHaveDirtyDataTeaHouse(TeaHouse.BridgeData.getLobbyID()) then
            --客户端主动减少访问请求数量
            local key = string.format("KW_TEAHOUSE_VIRTUAL_CARD_UPDATE_%s_%s",TeaHouse.manager.teahouseData:getTeaNumber(),TeaHouse.BridgeData.getNumberID())
            if cc.UserDefault:getInstance():getBoolForKey(key, false) then
                cc.UserDefault:getInstance():setBoolForKey(key, true)
                self:reqBuyPorp()
            end
        end
    end
end

function TeaHouseMainModule:isHaveDirtyDataTeaHouse(lobbyid)
    local dirtyDataTea = {
        TeaHouse.LOBBY_ID.JIAXING,
        TeaHouse.LOBBY_ID.JINHUA
    }
    for _,v in pairs(dirtyDataTea) do
        if lobbyid == v then
            return true
        end
    end
    return false
end

-- 只请求最近500条
function TeaHouseMainModule:reqTeaHouseOperationLog(startIndex)
    TeaHouse.showLoading()
    self._operateIdx = startIndex or 0
    self._operateAskCount = 100
    if self._operateIdx == 0 then
        self._teaHouseLogs = {}
        self._teaHouseLogCount = 0
    end
    local netReqGetAddCardLog = TeaHouse.manager.reqManager:createReq("NetReqTeaAndPlayerOperation")
    netReqGetAddCardLog:addReqCallBack(self, self.onNetReqTeaHouseOperationLog)
    netReqGetAddCardLog:start(TeaHouse.manager.teahouseData:getTeaNumber(), self._operateIdx, self._operateAskCount, 10, 7)
end

TeaHouseMainModule.KW_MAX_LOG_NUM = 50
function TeaHouseMainModule:onNetReqTeaHouseOperationLog(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        if data and #data > 0 then
            for i = 1, #data do
                local item = data[i]
                if #self._teaHouseLogs >= self.KW_MAX_LOG_NUM then
                    break
                end
                if item and item.oper_type and self:checkOperInNeedRecord(item.oper_type) then
                    table.insert(self._teaHouseLogs, item)
                    self._teaHouseLogCount = self._teaHouseLogCount + 1
                end
            end
        end
        if self._teaHouseLogCount < self.KW_MAX_LOG_NUM and #data == self._operateAskCount then
            self:reqTeaHouseOperationLog(self._operateIdx + self._operateAskCount)
        else
            TeaHouse.hideLoading()
            TeaHouse.manager.viewManager:openView("TeaHouseOperateLogView", 0, {
                log = self._teaHouseLogs
            })
        end
    else
        TeaHouse.hideLoading()
        TeaHouse.TipTool.showToast(req:getMessage())
    end
end

function TeaHouseMainModule:checkOperInNeedRecord(operType)
    if not operType then
        return false
    end
    local typeTable = TeaHouse.TeaHouseProtocol.RespTeaAndPlayerOperation.OPERTYPE
    for _, v in pairs(typeTable) do
        if operType == v then
            return true
        end
    end
    return false
end

function TeaHouseMainModule:ResSubProp(propCount)
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqSubProp = TeaHouse.manager.reqManager:createReq("NetReqSubProp")
    netReqSubProp:addReqCallBack(self, self.onRespSubPropCallBack)
    netReqSubProp:start(teahouseData:getTeaNumber(), propCount, 30)
end

--请求增加比赛场房卡回调
function TeaHouseMainModule:onRespSubPropCallBack(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        if data.nCurSubPropCnt then
            local teahouseData = TeaHouse.manager.teahouseData
            teahouseData:setSelfPropcount(teahouseData:getSelfPropcount() + data.nCurSubPropCnt, teahouseData:getTeaNumber()) --总划卡数
            TeaHouse.manager.teahouseSetup:reqTeaHousePropCnt(teahouseData:getTeaNumber())
            TeaHouse.BridgeData.reqPlayerDrop()
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "成功充值" .. data.nCurSubPropCnt .. "张房卡")
            self:dispatchEvent({ name = self.EVENT_REFRESH_RECHARAGE_TEACARD })
        else
            TeaHouse.TipTool.showTip({type = TeaHouse.TipTool.TIP_TYPE.OK}, "您输入的数量不正确")
        end
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

function TeaHouseMainModule:onReqTeaInviteActivityStatus()
    if TeaHouse.manager.teahouseData:isOwner() and TeaHouse.BridgeData.isTeaSvrSupportBacthInvite() then
        local netReqBatchInviteInfo = TeaHouse.manager.reqManager:createReq("NetReqBatchInviteInfo")
        netReqBatchInviteInfo:addReqCallBack(self, self.onRespTeaInviteActivityStatus)
        netReqBatchInviteInfo:start(false, 30)
    end
end

function TeaHouseMainModule:onRespTeaInviteActivityStatus(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        local haveAwared = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_SETMODULE_GUIDE_AWARD) 
        if  data.ucFlag == TeaHouse.TeaHouseProtocol.RespRecomendInvitelist.UCFLAG.HAVEDATA then
            self:dispatchEvent({ name = self.EVENT_SHOW_INVITE_ACTIVITY_ICON, show = (data.ucFlag == TeaHouse.TeaHouseProtocol.RespRecomendInvitelist.UCFLAG.HAVEDATA) })
        elseif haveAwared then
            self:dispatchEvent({ name = self.EVENT_SHOW_AWARD_TIP})
        end
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

function TeaHouseMainModule:onReqTeaInviteActivityPlayerList() 
    if TeaHouse.manager.teahouseData:isOwner() then
        local netReqBatchInviteInfo = TeaHouse.manager.reqManager:createReq("NetReqBatchInviteInfo")
        netReqBatchInviteInfo:addReqCallBack(self, self.onRespTeaInviteActivityPlayerList)
        netReqBatchInviteInfo:start(true, 30)
    end
end

function TeaHouseMainModule:onRespTeaInviteActivityPlayerList(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        if data.playerInfo and #data.playerInfo < 0 and XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_SETMODULE_GUIDE_AWARD) then
            self:dispatchEvent({ name = self.EVENT_SHOW_AWARD_TIP})
        else
            self:dispatchEvent({ name = self.EVENT_SHOW_INVITE_ACTIVITY_LIST , msg = data})
        end
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

function TeaHouseMainModule:onReqSendRecomendInvite(exceptnumidTab,dealtype)
    local reqSendRecomendInvite = TeaHouse.manager.reqManager:createReq("NetReqSendRecomendInvite")
    reqSendRecomendInvite:addReqCallBack(self, self.onRespSendRecomendInvite)
    local teahouseData = TeaHouse.manager.teahouseData
    reqSendRecomendInvite:start(teahouseData:getTeaNumber(), exceptnumidTab, 30,dealtype)
end

function TeaHouseMainModule:onRespSendRecomendInvite(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        TeaHouse.TipTool.showToast("邀请发送成功!")
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

function TeaHouseMainModule:onReqGetBanInfo()
    local reqGetBanInfo = TeaHouse.manager.reqManager:createReq("NetReqGetBanInfo")
    reqGetBanInfo:addReqCallBack(self, self.onRespGetBanInfo)
    reqGetBanInfo:start(15)
end

function TeaHouseMainModule:onRespGetBanInfo(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        local tempTable = {}
        tempTable.bansize = data.bansize
        tempTable.bantype = data.bantype
        tempTable.banreason = data.banreason
        tempTable.banendtime = data.banendtime
        local lastLoginTime = cc.UserDefault:getInstance():getIntegerForKey("KW_LAST_LOGIN_TIME_"..TeaHouse.BridgeData.getNumberID())
        local oldStrJson = cc.UserDefault:getInstance():getStringForKey("BAN_PLAYER_INFO_TEA".. TeaHouse.BridgeData.getNumberID())
        local tempJson = json.encode(tempTable)
        for i=1,data.bansize do
            if data.bantype[i] == TeaHouse.BoxDataProtocol.RespGetBanInfo.bantype.BAN_GAME then  --禁止游戏      
                cc.UserDefault:getInstance():setBoolForKey("BAN_PLAYER_CAN_GAME".. XH.playerData:getNumberID(),true)                
            end
        end
        if (oldStrJson ~= tempJson and data.bansize > 0) or (data.bansize > 0 and (not TeaHouse.SysTool.isToday(lastLoginTime))) then
            TeaHouse.BridgeUI.openBanInfoView(data)
            cc.UserDefault:getInstance():setStringForKey("BAN_PLAYER_INFO_TEA".. TeaHouse.BridgeData.getNumberID(),tempJson)
            return
        end        
        for i=1,data.bansize do
            if data.bantype[i] == TeaHouse.BoxDataProtocol.RespGetBanInfo.bantype.BAN_LOGIN then--禁止登录
                TeaHouse.BridgeUI.openBanInfoView(data)
                return    
            end
        end
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

function TeaHouseMainModule:isNeedPopInviteActivityView()
    local key = string.format("TEAHOUSE_INVITE_PALYER_POP_TIMES_%s_%s",os.date("%Y-%m-%d"),TeaHouse.BridgeData.getNumberID())
    local pop_num =  cc.UserDefault:getInstance():getIntegerForKey(key, 0)
    if pop_num < 3 then
        cc.UserDefault:getInstance():setIntegerForKey(key, pop_num + 1)
        return true
    end
    return false
end

function TeaHouseMainModule:hideInviteActivityIcon()
    self:dispatchEvent({ name = self.EVENT_SHOW_INVITE_ACTIVITY_ICON, show = false })
end

function TeaHouseMainModule:isNeedShowGuideAwardTip()
    if XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_SETMODULE_GUIDE_AWARD) then
        self:dispatchEvent({ name = self.EVENT_SHOW_AWARD_TIP})
    end
end

function TeaHouseMainModule:setEnterPlayModeID(playModeId)
    self._playModeId = playModeId
end


-- 快速创建固定玩法
function TeaHouseMainModule:quickCreatePlayMode(param)
    if not param or param.playModeId == nil then
        return
    end
    local modeId = param.playModeId
    self._playModeId = nil
    local playModes = nil
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData == nil then
        return
    end
    playModes = TeaHouse.manager.teahouseData:getPlayModeInfos()
    if playModes == nil then
        return
    end
    local selectMode = nil
    for i = 1, #playModes do
        if playModes[i].nPlayModeId == modeId then
            selectMode = playModes[i]
            break
        end
    end
    if selectMode == nil then
        return
    end
    local data = {}
    data.gameid = selectMode.nGameId
    data.base = selectMode.nBase
    data.cont = 10000  --有些玩法没有局数可选
    if selectMode.anCount ~= nil then
        data.cont = selectMode.anCount[1]
    end
    data.size = param.playerCount or 4
    for i = 1, selectMode.nPlayerSize do
        if selectMode.anPlayerCount[i] == 2 then
            data.size = 2
        end
    end
    data.type = 0
    data.name = selectMode.acName
    data.data = selectMode.acData -- todo 后续存在must的时候带入 self:getRuleData()
    data.tableCnt = 1
    data.payType = 0
    local payTypeTable = teahouseData:getPayTypeByID()
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if not SetupConfig.IsFixedPayType and #payTypeTable == 1 then
        data.payType = tonumber(payTypeTable[1])
    else
        local luaString = "return {" .. selectMode.acData .. "}"
        local rule = loadstring(luaString)()
        local KW_PAYTYPE_NAME_TABLE = {"PayType", "moneyType", "TeaHousePayType"}
        for _, payTypeName in ipairs(KW_PAYTYPE_NAME_TABLE) do
            if rule[payTypeName] then
                data.payType = tonumber(rule[payTypeName])
                break
            end
        end
    end
    data.nPlayModeId = selectMode.nPlayModeId or 0
    data.data = self:fixPrevAAPlayModelCreateRoomData(data.data,data.payType)
    self:createBoxRoom(data)
end

-- 是否支持观战模式
function TeaHouseMainModule:isSupportWatch(gameID)
    if not XH.lobby:getModule("Sxvip"):getPowerExit(SxVipConfig.SXVIP_POWER.WATCH, gameID) or XH.lobby:getModule("Im"):judgePlayerInGame() then
        return false
    end
    -- local lobbyID = XH.areaData:getLobbyID()
    -- if lobbyID == XH.LOBBY_ID.TAIZHOU and gameID == 30109 then
    return true
    -- end
    -- return false
end

-- VIP是否过期
function TeaHouseMainModule:isVipExpire()
    return XH.lobby:getModule("Sxvip"):isExpire()
end

function TeaHouseMainModule:updateChoseRank()
    self:dispatchEvent({ name = self.EVENT_ON_UPDATE_CHOSE_RANK})
end

function TeaHouseMainModule:updateContributeRank(data)
    self:dispatchEvent({ name = self.EVENT_ON_UPDATE_CONTRIBUTE_RANK, data = data})
end

function TeaHouseMainModule:updateRankRecord(data)
    self:dispatchEvent({ name = self.EVENT_ON_UPDATE_RECORD_RANK, data = data})
end

function TeaHouseMainModule:isShowPhoneBindTip(tipMsg, teaNumber)
    if TeaHouse.manager.teahouseData:getTeaHouseLevelByNumber(teaNumber) ~= TeaHouse.manager.configManager.remodelConfig.TEAHOUSELEVEL.JUNIOR then
        return false
    end
    -- 如果自己的高级比赛场已经到上限
    local config = TeaHouse.manager.teahouseData:getTeaLevelConfig()
    local list = TeaHouse.manager.teahouseData:getTeaHouseList()
    if XH.playerData:getPlayerPhone() ~= "" and config[TeaHouse.manager.configManager.remodelConfig.TEAHOUSELEVEL.SENIOR] and config[TeaHouse.manager.configManager.remodelConfig.TEAHOUSELEVEL.SENIOR].tMaxTeaCount then
        local max = config[TeaHouse.manager.configManager.remodelConfig.TEAHOUSELEVEL.SENIOR].tMaxTeaCount
        local nCnt = 0
        for k, v in pairs(list) do
            if v.nTeaOwnerNumid == XH.playerData:getNumberID() and TeaHouse.manager.teahouseData:getTeaHouseLevelByNumber(v.nTeaNumber) == TeaHouse.manager.configManager.remodelConfig.TEAHOUSELEVEL.SENIOR  then
                nCnt = nCnt + 1
            end
        end
        if nCnt >= max then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "当前等级比赛场无法使用该功能，请前往高级比赛场使用")
            return true
        end
    elseif XH.playerData:getPlayerPhone() == "" then
        local info = {}
        info.tip = tipMsg
        info.type = 0
        info.funcOK  = function()
            TeaHouse.showPhoneBind()
        end
        XH.viewManager:openView("MatchTipView", nil, info)
        return true
    end
    return false
end

function TeaHouseMainModule:showTableNoticeTip(tipMsg)
    local info = {}
    info.tip = tipMsg
    info.type = 1
    -- 在线通知
    info.funcOK  = function()
        local teainfo = TeaHouse.manager.teahouseData:getTeaHouseInfoByID(TeaHouse.manager.teahouseData:getTeaNumber())
        if teainfo == nil then
            return
        end
        local msg = {}
        msg.teaid = teainfo.nTeaNumber
        msg.teaName = teainfo.szData or ""
        XH.teaHouseManager:reqNotice(XH.playerData:getNumberID(), teainfo.nTeaOwnerNumid, json.encode(msg), XH.MatchLinkProtocol.RespInvite.TYPE.TYPE_LEVEL_UP)
    end
    -- 微信邀请
    info.funcCancel  = function()
        local function shareCallback()
            --
        end
        local UrlConf = require("app.Config.UrlConf")
        local url = UrlConf.DOWNLOAD_ADDRESS_IOS
        if device.platform == "android" then
            url = UrlConf.DOWNLOAD_ADDRESS_ANDROID
        end
        local titile = "比赛场桌子已满"
        local text = "绑定手机后可以升级至高级比赛场，增加桌子数量。"
        local shareInfo = {
            textTitle = titile, -- 分享标题
            textTitleUrl = "", -- 微信不用
            site = "", -- 微信不用
            siteUrl = "", -- 微信不用
            imagePath = "", -- 微信不用
            url = url, -- 微信网页模式分享的链接
            type = "url", -- word是文字分享，url网页模式分享，pic分享图片
            scene = "0", -- 0是分享到好友会话，1是分享到朋友圈
            imageUrl = "com.xm.zjgamecenter", -- 分享图片地址（分享网页模式，需要传安卓包名）
            text = text, -- 分享内容 
            comment = "download" -- 微信不用, 用以区分直接分享下载地址和游戏内link
        }
        XH.sdkManager:startShare(shareInfo, shareCallback, self)
    end
    XH.viewManager:openView("MatchTipView", nil, info)
end

-- 首次进入不要弹窗了
function TeaHouseMainModule:setIsFirstInTea()
    self._isFirstIn = false
    local nLastIn = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_FIRST_IN_TEAHOUSE, 0)
    if nLastIn == 0 then
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_FIRST_IN_TEAHOUSE, 1)
        self._isFirstIn = true
    end
end

function TeaHouseMainModule:getIsFirstInTea()
    return self._isFirstIn
end

function TeaHouseMainModule:showSetupTip()
    local info = {}
    info.tip = "成功创建比赛场，请前往设置。"
    info.type = 2
    info.funcOK  = function()
        local teahouseData = TeaHouse.manager.teahouseData
        local SetupConfig = TeaHouse.manager.configManager.SetupConfig
        if SetupConfig.IsOpenNewTeahouseSetupView then
            TeaHouse.manager.viewManager:openView("TeaHouseSetupViewNew", 0, {
                nTeaNumber = teahouseData:getTeaNumber(),
                szData = teahouseData:getTeaHouseNameExt(),
                isOwner = teahouseData:isOwner(),
                momentLevel = teahouseData:getTeaHouseLevel(),
                useBuyedProp = teahouseData:getUseBuyedProp(),
            })
        else
            TeaHouse.manager.viewManager:openView("TeaHouseSetupView", 0, {
                nTeaNumber = teahouseData:getTeaNumber(),
                szData = teahouseData:getTeaHouseNameExt(),
                isOwner = teahouseData:isOwner(),
                momentLevel = teahouseData:getTeaHouseLevel()
            })
        end
    end
    XH.viewManager:openView("MatchTipView", nil, info)
end

function TeaHouseMainModule:flushRecallNewState()
    self:dispatchEvent({ name = self.EVENT_FLUSH_RECALL_NEW_ACT_INFO })
end

function TeaHouseMainModule:flushRecallTeamState()
    self:dispatchEvent({ name = self.EVENT_FLUSH_RECALL_TEAM_ACT_INFO })
end

function TeaHouseMainModule:flushRecallTeamQiPao()
    self:dispatchEvent({ name = self.EVENT_FLUSH_RECALL_TEAM_ACT_QIIPAO })
end

function TeaHouseMainModule:flushRecallTeamTag()
    self:dispatchEvent({ name = self.EVENT_FLUSH_RECALL_TEAM_ACT_TAG })
end

function TeaHouseMainModule:closeTeaHouseList()
    self:dispatchEvent({ name = self.EVENT_CLOSE_TEAHOUSE_LIST })
end

function TeaHouseMainModule:flushLuckyMissionState()
    self:dispatchEvent({ name = self.EVENT_FLUSH_LUCKY_MISSION })
end

function TeaHouseMainModule:isSupportNewContinue(gameid)
    return gameid == 30110 or gameid == 30588
end

return TeaHouseMainModule n 