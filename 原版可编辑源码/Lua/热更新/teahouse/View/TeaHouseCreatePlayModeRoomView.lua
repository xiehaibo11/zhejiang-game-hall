local TeaHouseCreatePlayModeRoomView = class("TeaHouseCreatePlayModeRoomView", TeaHouse.View)

local KW_DIS_BETWEEN_CHECKBOX_X = 285
local KW_DIS_BETWEEN_CHECKBOX_Y = 108

local KW_TEXT_PERSON_COUNT = "_KW_TEXT_PERSON_COUNT"
local KW_TEXT_PLAY_COUNT = "_KW_TEXT_PLAY_COUNT"

local KW_STR_COST_PERSON = {
    TEAHOUSE_OWNER = "圈主",
    BIG_WINNER = "冠军",
    LAST = "末位",
    PINGTAN = "平摊",
    ROOM_OWNER = "房主",
}

local KW_PAYTYPE_NAME_TABLE = {"PayType", "moneyType", "TeaHousePayType"}
local KW_CHESS_FEE_NAME_TABLE = {"chessfee"}

TeaHouseCreatePlayModeRoomView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseCreatePlayModeRoomView.csb",
    binding = {
        ["_KW_BTN_CREATE"] = { tag = "_KW_BTN_CREATE", name = "_btnCreate", class = "btn" ,events = "onBtnEventCreate" },
        ["_KW_BTN_CLOSE"] = { tag = "_KW_BTN_CLOSE", name = "_btnClose", class = "btn" ,events = "onBtnEventClose" },

        ["_KW_TEXT_COST_ROOMCARD"] = { tag = "_KW_TEXT_COST_ROOMCARD", name = "_textRoomCard", class = "text" },
        ["_KW_TEXT_RULE"] = { tag = "_KW_TEXT_RULE", name = "_textRule", class = "text" },

        ["_KW_PANEL_PERSON_COUNT_START_POS"] = { tag = "_KW_PANEL_PERSON_COUNT_START_POS", name = "_panelPersonCount", class = "panel" },
        ["_KW_PANEL_PLAY_COUNT_START_POS"] = { tag = "_KW_PANEL_PLAY_COUNT_START_POS", name = "_panelPlayCount", class = "panel" },

        ["_KW_CHECKBOX_PLAY_COUNT"] = { tag = "_KW_CHECKBOX_PLAY_COUNT", name = "_checkBoxPlayCount", class = "checkBox" },
        ["_KW_CHECKBOX_PERSON_COUNT"] = { tag = "_KW_CHECKBOX_PERSON_COUNT", name = "_checkBoxPersonCount", class = "checkBox" },

        ["_KW_TEXT_PERSON_COUNT_NAME"] = { tag = "_KW_TEXT_PERSON_COUNT_NAME", name = "_textPersonCountName", class = "text" },
        ["_KW_TEXT_PLAY_COUNT_NAME"] = { tag = "_KW_TEXT_PLAY_COUNT_NAME", name = "_textPlayCountName", class = "text" },
        ["_KW_IMG_TITLE"] = { tag = "_KW_IMG_TITLE", name = "_imgTitle", class = "img" },
    }
}

function TeaHouseCreatePlayModeRoomView:ctor(info)
    TeaHouseCreatePlayModeRoomView.super.ctor(self)

    self._info = info   --固定玩法信息
    self._tbPersonCountCheckBox = {}    --人数勾选框
    self._tbPlayCountCheckBox = {}  --局数勾选框
    self._selectPersonCount = nil   --选择的人数
    self._selectPlayCount = nil --选择的局数

    self._isCostRelativePlayers = false
    self._playCountConf = nil
    self._playerCountConf = nil

    self:initCostRelativePlayersBool()
    self:initPlayerCountConf()
    self:initPlayCountConf()
    self:initView()
    -- 玩法触达：玩家打开「玩法详情」时自动弹匹配的玩法更新窗（无玩法创建按钮）
    local GamePlayReachConfig = require("lobby.Modules.GamePlayReach.Config")
    if self._info and self._info.nGameId then
        XH.lobby:getModule("GamePlayReach"):onGameSelected(self._info.nGameId, GamePlayReachConfig.LOCATION.TEA_PLAYMODE_DETAIL, {
            gameId = self._info.nGameId,
            showCreateBtn = false,
        })
    end
end

function TeaHouseCreatePlayModeRoomView:initView()
    self:initRule()
    self:initCheckBox()
    self:initRoomCardCost()
end

function TeaHouseCreatePlayModeRoomView:initRule()
    local luaString = "return {" .. self._info.acData .. "}"
    local rule = loadstring(luaString)()
    self._textRule:setString(TeaHouse.StringTool.replaceMatchStr(rule.ZhRule) or "") 
end

function TeaHouseCreatePlayModeRoomView:initRoomCardCost()
    self:updateCost()
end

function TeaHouseCreatePlayModeRoomView:initPlayerCountConf()
    self._playerCountConf = TeaHouse.SysTool.getPlayerCountConfByGameID(self._info.nGameId, self._info.acData)
end

function TeaHouseCreatePlayModeRoomView:initCostRelativePlayersBool()
    local gameRuleList = TeaHouse.ReadGameListAndRuleConfig.loadTeaHouseGameRule(TeaHouse.BridgeData.getLobbyID(), self._info.nGameId)
    if gameRuleList ~= nil and gameRuleList["isCostRelativePlayers"] ~= nil then
        self._isCostRelativePlayers = gameRuleList["isCostRelativePlayers"]
    end
end

function TeaHouseCreatePlayModeRoomView:initPlayCountConf()
    self._playCountConf = TeaHouse.SysTool.getPlayCountConfByGameID(self._info.nGameId, self._info.acData)
end

function TeaHouseCreatePlayModeRoomView:initCheckBox()
    local defaultPersonCount
    local showPersonCountIndex = 0
    if not self._playerCountConf  then
        self._textPersonCountName:setVisible(false)
    else
        self._textPersonCountName:setString(self._playerCountConf.name)
        for i, v in ipairs(self._playerCountConf.listData) do
            local bSelect = false
            for _, tempCount in pairs(self._info.anPlayerCount) do
                if tempCount == v.Value then
                    bSelect = true
                    break
                end
            end
            --人数自选 或者 选择了相应选项
            if not self._info.bIsPlayerLock or bSelect then
                showPersonCountIndex = showPersonCountIndex + 1
                local tempCheckBox = self._checkBoxPersonCount:clone()
                local tempText = ccui.Helper:seekWidgetByName(tempCheckBox, KW_TEXT_PERSON_COUNT)
                if tempText then
                    local textTable = string.split(v.TextShow, "(")    --用来去除人数局数后面的括号中的内容
                    if #textTable == 1 then
                        textTable = string.split(v.TextShow, "（")
                    end
                    tempText:setString(textTable[1] or "")
                end
                local lineIndex = math.ceil(showPersonCountIndex/4)
                local indexInLine = showPersonCountIndex%4
                if indexInLine == 0 then indexInLine = 4 end
                tempCheckBox:addEventListener(handler(self, self.onTouchEventPersonCount))
                tempCheckBox:setSelected(false)
                tempCheckBox:setTag(v.Value)
                tempCheckBox:setPositionX((indexInLine-1)*KW_DIS_BETWEEN_CHECKBOX_X)
                tempCheckBox:setPositionY((1-lineIndex)*KW_DIS_BETWEEN_CHECKBOX_Y)
                tempCheckBox.confData = clone(v)
                self._tbPersonCountCheckBox[v.Value] = tempCheckBox
                self._panelPersonCount:addChild(tempCheckBox)

                defaultPersonCount = defaultPersonCount or v.Value
            end
        end
    end

    local defaultPlayCount
    local showPlayCountIndex = 0
    if not self._playCountConf then
        self._textPlayCountName:setVisible(false)
    else
        self._textPlayCountName:setString(self._playCountConf.name)
        for i, v in ipairs(self._playCountConf.listData) do
            local bSelect = false
            for _, tempCount in pairs(self._info.anCount) do
                if tempCount == v.Value then
                    bSelect = true
                    break
                end
            end
            local bCanShow = false
            if self._isCostRelativePlayers then
                for _, tempCount in pairs(self._info.anPlayerCount) do
                    if v["allCost" .. tempCount] then
                        bCanShow = true
                        break
                    end
                end
            else
                bCanShow = true
            end
            --局数自选 或者 选择了相应选项
            if (not self._info.bIsCountLock or bSelect) and bCanShow then
                showPlayCountIndex = showPlayCountIndex + 1
                local tempCheckBox = self._checkBoxPlayCount:clone()
                local tempText = ccui.Helper:seekWidgetByName(tempCheckBox, KW_TEXT_PLAY_COUNT)
                if tempText then
                    local textTable = string.split(v.TextShow, "(")    --用来去除人数局数后面的括号中的内容
                    if #textTable == 1 then
                        textTable = string.split(v.TextShow, "（")
                    end
                    tempText:setString(textTable[1] or "")
                end
                local lineIndex = math.ceil(showPlayCountIndex/4)
                local indexInLine = showPlayCountIndex%4
                if indexInLine == 0 then indexInLine = 4 end
                tempCheckBox:addEventListener(handler(self, self.onTouchEventPlayCount))
                tempCheckBox:setSelected(false)
                tempCheckBox:setTag(v.Value)
                tempCheckBox:setPositionX((indexInLine-1)*KW_DIS_BETWEEN_CHECKBOX_X)
                tempCheckBox:setPositionY((1-lineIndex)*KW_DIS_BETWEEN_CHECKBOX_Y)
                tempCheckBox.confData = clone(v)
                self._tbPlayCountCheckBox[v.Value] = tempCheckBox
                self._panelPlayCount:addChild(tempCheckBox)

                defaultPlayCount = defaultPlayCount or v.Value
            end
        end
    end
    if defaultPersonCount then
        self:updataPlayCount(defaultPersonCount)
        self:selectPersonCount(defaultPersonCount)
    end
    if defaultPlayCount then
        self:selectPlayCount(defaultPlayCount)
    end
end

function TeaHouseCreatePlayModeRoomView:updateCost()
    local luaString = "return {" .. self._info.acData .. "}"
    local ruleTable = loadstring(luaString)()

    local bCostChessFee = false
    local tempChessFeePayType

    local teahouseData = TeaHouse.manager.teahouseData
    local payTypeTable = teahouseData:getPayTypeByID()
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if not SetupConfig.IsFixedPayType and #payTypeTable == 1 then
        if payTypeTable[1] == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA
            or payTypeTable[1] == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_WINNER then
                tempChessFeePayType = payTypeTable[1]
                bCostChessFee = true
        end
    else
        for _, payTypeName in ipairs(KW_PAYTYPE_NAME_TABLE) do
            if ruleTable[payTypeName] ~= nil
            and (tonumber(ruleTable[payTypeName]) == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA
            or tonumber(ruleTable[payTypeName]) == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_WINNER) then
                tempChessFeePayType = tonumber(ruleTable[payTypeName])
                bCostChessFee = true
                break
            end
        end
    end

    if bCostChessFee then
        local chessFeeNum = 0
        for _, chessFeeName in pairs(KW_CHESS_FEE_NAME_TABLE) do
            if ruleTable[chessFeeName] ~= nil then
                chessFeeNum = tonumber(ruleTable[chessFeeName])
                break
            end
        end
        self:updateChessFeeCost(tempChessFeePayType, chessFeeNum)
    else
        self:updateRoomCardCost()
    end
end

function TeaHouseCreatePlayModeRoomView:updateChessFeeCost(chessFeePayType, chessFeeNum)
    if chessFeePayType == nil or chessFeeNum == nil then
        self._textRoomCard:setString("")
        return 
    end
    local costPlayerName = ""
    if chessFeePayType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA then
        costPlayerName = "平摊"
    elseif chessFeePayType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER_YUFU_MODE_AA then
        costPlayerName = "平摊"
    elseif chessFeePayType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_WINNER then
        costPlayerName = "冠军"
    end
    self._textRoomCard:setString(costPlayerName .."消耗"..chessFeeNum.."比赛场卡")
end

function TeaHouseCreatePlayModeRoomView:updateRoomCardCost()
    local luaString = "return {" .. self._info.acData .. "}"
    local ruleTable = loadstring(luaString)()

    local bPingTan = false
    local name = KW_STR_COST_PERSON.TEAHOUSE_OWNER

    local teahouseData = TeaHouse.manager.teahouseData
    local isLastCost = teahouseData:isLastCost()
    local payTypeTable = teahouseData:getPayTypeByID()
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if not SetupConfig.IsFixedPayType and #payTypeTable == 1 then
        if payTypeTable[1] == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER then
            local payModeType = TeaHouse.manager.teahouseData:getTeaHousePayMode()
            --预付模式显示支付名称为冠军
            if payModeType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON then
                name = isLastCost and KW_STR_COST_PERSON.LAST or KW_STR_COST_PERSON.BIG_WINNER
            end
        elseif payTypeTable[1] == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_AA then
            name = KW_STR_COST_PERSON.PINGTAN
            bPingTan = true
        elseif payTypeTable[1] == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_AA then
            name = KW_STR_COST_PERSON.PINGTAN
            bPingTan = true            
        elseif payTypeTable[1] == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_ROOM_OWNER then
            name = KW_STR_COST_PERSON.ROOM_OWNER
        elseif payTypeTable[1] == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_OWNER_CARD_AA then
            name = KW_STR_COST_PERSON.PINGTAN
            bPingTan = true
        elseif  payTypeTable[1] == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_AA  then
            name = KW_STR_COST_PERSON.PINGTAN
            bPingTan = true
        elseif  payTypeTable[1] == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_WIN  then
            name = isLastCost and KW_STR_COST_PERSON.LAST or KW_STR_COST_PERSON.BIG_WINNER
        elseif  payTypeTable[1] == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER_YUFU_MODE_AA  then
            name = KW_STR_COST_PERSON.PINGTAN
            bPingTan = true
        end
    else
        for _, payTypeName in ipairs(KW_PAYTYPE_NAME_TABLE) do
            if ruleTable[payTypeName] ~= nil and tonumber(ruleTable[payTypeName]) == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_AA then
                name = KW_STR_COST_PERSON.PINGTAN
                bPingTan = true
                break
            elseif ruleTable[payTypeName] ~= nil and tonumber(ruleTable[payTypeName]) == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_ROOM_OWNER then
                name = KW_STR_COST_PERSON.ROOM_OWNER
                break
            elseif ruleTable[payTypeName] ~= nil and tonumber(ruleTable[payTypeName]) == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_AA then
                name = KW_STR_COST_PERSON.PINGTAN
                bPingTan = true
                break
            elseif ruleTable[payTypeName] ~= nil and tonumber(ruleTable[payTypeName]) == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_OWNER_CARD_AA then
                name = KW_STR_COST_PERSON.PINGTAN
                bPingTan = true
                break
            end
        end
    end
    
    local selectPlayCountConf
    if self._playCountConf then
        for _, data in pairs(self._playCountConf.listData) do
            if data.Value == self._selectPlayCount then
                selectPlayCountConf = data
                break
            end
        end
    end

    local selectPlayerCountConf
    if self._playerCountConf then
        for _, data in pairs(self._playerCountConf.listData) do
            if data.Value == self._selectPersonCount then
                selectPlayerCountConf = data
                break
            end
        end
    end

    local roomCard = 0
    --先根据局数配置来获取消耗值
    if not selectPlayCountConf then
        --即没局数配置，也没人数配置，则无法获取消耗值
        if not selectPlayerCountConf then
            self._textRoomCard:setString("")
            return 
        end
        if bPingTan then
            roomCard = selectPlayerCountConf["aaCost"] or 0
        else
            roomCard = selectPlayerCountConf["allCost"] or 0
        end
        if roomCard == 0 then
            self._textRoomCard:setString("")
        end
        return 
    end
    --消耗是否与人数有关
    if not self._isCostRelativePlayers then
        if bPingTan then
            roomCard = selectPlayCountConf["aaCost"]
        else
            roomCard = selectPlayCountConf["allCost"]
        end
    else
        if bPingTan then
            roomCard = selectPlayCountConf["aaCost"..self._selectPersonCount]
        else
            roomCard = selectPlayCountConf["allCost"..self._selectPersonCount]
        end
    end
    self._textRoomCard:setString(TeaHouse.StringTool.replaceMatchStr("（"..name.."）消耗（"..roomCard.."张）房卡"))
    self:updatePlayModeRuleText(name)
end

function TeaHouseCreatePlayModeRoomView:onTouchEventPersonCount(send, eventType)
    self:updataPlayCount(send:getTag())
    self:selectPersonCount(send:getTag())
end

function TeaHouseCreatePlayModeRoomView:selectPersonCount(personCount)
    self._selectPersonCount = personCount
    for value, checkBox in pairs(self._tbPersonCountCheckBox) do
        checkBox:setSelected(personCount == value)
    end

    self:updateCost()
end

function TeaHouseCreatePlayModeRoomView:onTouchEventPlayCount(send, eventType)
    self:selectPlayCount(send:getTag())
end

function TeaHouseCreatePlayModeRoomView:selectPlayCount(playCount)
    self._selectPlayCount = playCount
    for value, checkBox in pairs(self._tbPlayCountCheckBox) do
        checkBox:setSelected(playCount == value)
    end
    self:updateCost()
end

function TeaHouseCreatePlayModeRoomView:onBtnEventCreate(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if XH.playerData:checkNewRealName(self._info.nGameId) ~= 0 then return end--实名限制
    local data = {}
    data.gameid = self._info.nGameId
    data.base = self._info.nBase
    data.cont = self._selectPlayCount or 10000  --有些玩法没有局数可选
    data.type = 0
    local lobbyID = TeaHouse.BridgeData.getLobbyID()
    if tonumber(lobbyID) == 900003 then
        data.type = (data.cont == 10000 or data.cont == 999) and 1 or 0
    end
    --宁波慈溪麻将特判
    if tonumber(lobbyID) == 900006 then
        data.type = (data.cont == 1100) and 1 or 0
    end
    --嵊州麻将特判
    if tonumber(lobbyID) == 900007 then
        if data.cont > 10000 then
            data.cont = (data.cont % 10000) * 100
        end
    end
    data.size = self._selectPersonCount or 4
    data.name = self._info.acName
    data.data = self:getRuleData()
    data.tableCnt = 1
    data.payType = 0
    local teahouseData = TeaHouse.manager.teahouseData
    local payTypeTable = teahouseData:getPayTypeByID()
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if not SetupConfig.IsFixedPayType and #payTypeTable == 1 then
        data.payType = tonumber(payTypeTable[1])
    else
        local luaString = "return {" .. self._info.acData .. "}"
        local rule = loadstring(luaString)()
        for _, payTypeName in ipairs(KW_PAYTYPE_NAME_TABLE) do
            if rule[payTypeName] then
                data.payType = tonumber(rule[payTypeName])
                break
            end
        end
    end
    if teahouseData:isLastCost() then
        data.data = data.data .. "loser_cost=1;"
    end
    --服务端没有用到该值，但部分区客户端需要用到
    data.nPlayModeId = self._info.nPlayModeId or 0
    data.data = TeaHouse.manager.teahouseMain:fixPrevAAPlayModelCreateRoomData(data.data,data.payType)
    TeaHouse.manager.teahouseMain:createBoxRoom(data)
end

--将人数或者局数携带的规则拼接到规则字符串中
--2019-11-13 add-by-hejiafeng
function TeaHouseCreatePlayModeRoomView:getRuleData()
    local ruleDataStr = self._info.acData
    local tempCheckBoxTable = {self._tbPlayCountCheckBox, self._tbPersonCountCheckBox}
    local tempSelectValueTable = {self._selectPlayCount, self._selectPersonCount}
    for i, checkBoxs in ipairs(tempCheckBoxTable) do
        for value, checkBox in pairs(checkBoxs) do
            if value == tempSelectValueTable[i] then
                if checkBox.confData and checkBox.confData.mustExistRuleYes and not string.find(ruleDataStr, checkBox.confData.mustExistRuleYes) then
                    --当选中的选项存在mustExistRuleYes（勾选时需要携带的规则），并且该规则在字符串中不存在，则拼接进去
                    ruleDataStr = ruleDataStr .. checkBox.confData.mustExistRuleYes
                end
                if checkBox.confData and checkBox.confData.mustExistRuleNo then
                    --当选中的选项存在mustExistRuleNo（不勾选时需要携带的规则），并且该规则在字符串中存在，则去除
                    ruleDataStr = string.gsub(ruleDataStr, checkBox.confData.mustExistRuleNo, "")
                end
            else
                if checkBox.confData and checkBox.confData.mustExistRuleNo and not string.find(ruleDataStr, checkBox.confData.mustExistRuleNo) then
                    ruleDataStr = ruleDataStr .. checkBox.confData.mustExistRuleNo
                end
                if checkBox.confData and checkBox.confData.mustExistRuleYes then
                    ruleDataStr = string.gsub(ruleDataStr, checkBox.confData.mustExistRuleYes, "")
                end
            end
        end
    end
    return ruleDataStr
end

function TeaHouseCreatePlayModeRoomView:onBtnEventClose(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:close()
end

function TeaHouseCreatePlayModeRoomView:updatePlayModeRuleText(payName)
    local oldText = self._textRule:getString()
    if oldText and oldText ~= "" then
        local textTable = string.split(oldText,",")
        local newText = ""
        for _,v in pairs(textTable) do
            if string.find( v,"消耗") then
                v = payName .. "消耗"
            end
            if v and v ~= "" then 
                newText  = newText .. v ..","
            end
        end
        if newText then
            self._textRule:setString(TeaHouse.StringTool.replaceMatchStr(newText))
        end
    end
end

function TeaHouseCreatePlayModeRoomView:updataPlayCount(personCount)
    if not self._isCostRelativePlayers then
        return
    end
    if self._playCountConf then
        for _, v in ipairs(self._playCountConf.listData) do
            if not v["allCost" .. personCount] then
                local tempCheckBox = self._tbPlayCountCheckBox[v.Value]
                if tempCheckBox then
                    tempCheckBox:setSelected(false)
                    tempCheckBox:setColor(cc.c3b(160, 160, 160))
                    tempCheckBox:setBright(false)
                    tempCheckBox:setEnabled(false)
                    if self._selectPlayCount == v.Value then
                        self._selectPlayCount = nil
                    end
                end
            else
                local tempCheckBox = self._tbPlayCountCheckBox[v.Value]
                if tempCheckBox then
                    tempCheckBox:setColor(cc.c3b(255, 255, 255))
                    tempCheckBox:setBright(true)
                    tempCheckBox:setEnabled(true)
                end
            end
        end
    end
    
    if self._selectPlayCount == nil and self._playCountConf then
        for _, v in ipairs(self._playCountConf.listData) do
            if v["allCost" .. personCount] then
                local tempCheckBox = self._tbPlayCountCheckBox[v.Value]
                if tempCheckBox then
                    self._selectPlayCount = v.Value
                    tempCheckBox:setSelected(true)
                    break
                end
            end
        end
        
    end
end

return TeaHouseCreatePlayModeRoomView