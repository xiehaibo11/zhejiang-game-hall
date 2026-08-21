local TeaHousePlayModeListItem = class("TeaHousePlayModeListItem", TeaHouse.View)
local MutiVersionGameConfig = require("teahouse.Config.MutiVersionGameConfig")

local KW_TABLE_COLOR_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_set_table_color.plist"
local KW_TYPE_TEA_OWNER = 2

TeaHousePlayModeListItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseListItem/TeaHousePlayModeListItem.csb",
    binding = {
        ["_KW_PANEL_ROOT"] = {tag = "_KW_PANEL_ROOT", name = "_panelRoot", class = "panel"},
        ["_KW_BTN_MODIFY"] = {tag = "_KW_BTN_MODIFY", name = "_btnModify", class = "btn", events = "onBtnEventModify"},
        ["_KW_BTN_DELETE"] = {tag = "_KW_BTN_DELETE", name = "_btnDelete", class = "btn", events = "onBtnEventDelete"},
        ["_KW_TEXT_GAME_NAME"] = {tag = "_KW_TEXT_GAME_NAME", name = "_textGameName", class = "text"},
        ["_KW_TEXT_INDEX"] = {tag = "_KW_TEXT_INDEX", name = "_textIndex", class = "text"},
        ["_KW_TEXT_RULE"] = {tag = "_KW_TEXT_RULE", name = "_textRule", class = "text"},
        ["_KW_SCROLLVIEW_RULE"] = {tag = "_KW_SCROLLVIEW_RULE", name = "_scrollViewRule", class = "scrollView"},
        ["_KW_BTN_OPEN"] = {tag = "_KW_BTN_OPEN", name = "_btnOpen", class = "btn", events = "onBtnEventOpen"},
        ["_KW_BTN_CLOSE"] = {tag = "_KW_BTN_CLOSE", name = "_btnClose", class = "btn", events = "onBtnEventClose"},
        ["_KW_COLOR_BG"] = {tag = "_KW_COLOR_BG", name = "_panelColor", class = "panel"},
        ["_KW_COLOR_SELECT"] = {tag = "_KW_COLOR_SELECT", name = "_btnColor", class = "btn", events = "onBtnColorSetOpen"},
        ["_KW_COLOR_TEXT"] = {tag = "_KW_COLOR_TEXT", name = "_textColor"},
        ["_KW_BTN_EXTENSION"] = {tag = "_KW_BTN_EXTENSION", name = "_btnExtension", class = "btn", events = "onBtnEventExtension"}
    }
}

function TeaHousePlayModeListItem:ctor(info)
    TeaHousePlayModeListItem.super.ctor(self)
    self._info = info
    self:initView()
    -- self:judgeNeedUpdateItem()
    self:judgeActBtn()
end

function TeaHousePlayModeListItem:initView()
    self._panelRoot:removeFromParent()
    self:addChild(self._panelRoot)

    self._scrollViewRule:setSwallowTouches(false)

    self:initIndex()
    self:initGameName()
    self:initRule()
    self:initOpenState()
    self:initTableColorSet()
end

function TeaHousePlayModeListItem:initIndex()
    self._textIndex:setString(self._info.itemIndex or "")
end

function TeaHousePlayModeListItem:initGameName()
    if string.len(self._info.acName or "") > 15 then
        self._textGameName:setFontSize(32)
    end
    self._textGameName:setString(self._info.acName or "")
end

function TeaHousePlayModeListItem:initRule()
    local currPayType = self:getPayType(TeaHouse.SysTool.analysisPayType(self._info.acData))
    local ruleShowStr = TeaHouse.SysTool.analysisZhRuleEx(self._info.nGameId, self._info.acData, currPayType) or ""
    local bFirst = true

    local playModuleAreaText = false
    local playerCountConf
    local playCountConf
    local curLobbyID = TeaHouse.BridgeData.getLobbyID()
    local mutiGameTable = MutiVersionGameConfig.getMutiGameTable(self._info.nGameId, curLobbyID)
    local tmpLobbyid
    if mutiGameTable and mutiGameTable[self._info.nGameId] then
        tmpLobbyid = mutiGameTable[self._info.nGameId].lobbyid
    end
    if tmpLobbyid and tmpLobbyid ~= curLobbyID then
        playerCountConf = TeaHouse.SysTool.getPlayerCountConfByGameID(self._info.nGameId, self._info.acData, self._info.anPlayerCount, tmpLobbyid)
        playCountConf = TeaHouse.SysTool.getPlayCountConfByGameID(self._info.nGameId, self._info.acData, self._info.anPlayerCount, tmpLobbyid)
        playModuleAreaText = true
    else
        playerCountConf = TeaHouse.SysTool.getPlayerCountConfByGameID(self._info.nGameId, self._info.acData, self._info.anPlayerCount)
        playCountConf = TeaHouse.SysTool.getPlayCountConfByGameID(self._info.nGameId, self._info.acData, self._info.anPlayerCount)
    end

    ruleShowStr = ruleShowStr .. "\n(" -- 换行显示
    if not self._info.bIsPlayerLock then
        ruleShowStr = ruleShowStr .. (bFirst and "" or ",") .. "人数自选"
        bFirst = false
    else
        if playerCountConf then
            for _, playerCountValue in pairs(self._info.anPlayerCount) do
                for _, v in pairs(playerCountConf.listData or {}) do
                    if v.Value == playerCountValue then
                        ruleShowStr = ruleShowStr .. (bFirst and "" or ",") .. v.TextShow
                        bFirst = false
                    end
                end
            end
        end
    end

    if not self._info.bIsCountLock then
        ruleShowStr = ruleShowStr .. (bFirst and "" or ",") .. "局数自选"
        bFirst = false
    else
        if playCountConf then
            for _, playCountValue in pairs(self._info.anCount) do
                for _, v in pairs(playCountConf.listData or {}) do
                    if v.Value == playCountValue then
                        ruleShowStr = ruleShowStr .. (bFirst and "" or ",") .. v.TextShow
                        bFirst = false
                    end
                end
            end
        end
    end
    ruleShowStr = ruleShowStr .. ")"
    if playModuleAreaText then
        ruleShowStr = ruleShowStr .. "\n" .. mutiGameTable[self._info.nGameId].areaName .. "玩法"
    end
    self._textRule:setString(ruleShowStr)

    local oldSize = self._textRule:getContentSize()
    local autoRenderSize = self._textRule:getAutoRenderSize()
    local virtualRenderer = self._textRule:getVirtualRenderer()
    local numLines = virtualRenderer:getStringNumLines()
    local totalHeight = numLines * autoRenderSize.height

    if totalHeight > oldSize.height then
        self._scrollViewRule:setInnerContainerSize(cc.size(oldSize.width, totalHeight))
        self._textRule:setContentSize(cc.size(oldSize.width, totalHeight))
        self._textRule:setPositionY(totalHeight)
    end
end

function TeaHousePlayModeListItem:initOpenState()
    self:setOpenState(self._info.bIsEnable)
end

function TeaHousePlayModeListItem:initTableColorSet()
    if TeaHouse.manager.configManager.SetupConfig.IsOpenTableColor then
        local size = self._scrollViewRule:getContentSize()
        self._scrollViewRule:setContentSize(size.width, size.height * 0.75)
        self._panelColor:setVisible(true)
        local color = TeaHouse.SysTool.analysisTableColor(self._info.acData)
        local png = string.format("color_%d.png", color)
        cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_TABLE_COLOR_PLIST)
        self._btnColor:loadTexture(png, ccui.TextureResType.plistType)
        if color and color == 1 then
            self._textColor:setVisible(true)
        end
    end
end

function TeaHousePlayModeListItem:onBtnColorSetOpen(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.manager.teahouseSetup:modifyTableColor(self._info.nPlayModeId)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_88)
end

function TeaHousePlayModeListItem:updateItem(info)
    self._info = info
    self:initGameName()
    self:initRule()
    self:initOpenState()
    self:initTableColorSet()
end

function TeaHousePlayModeListItem:getWidth()
    if self._panelRoot ~= nil then
        return self._panelRoot:getContentSize().width
    end
    return 0
end

function TeaHousePlayModeListItem:onBtnEventModify(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.manager.teahouseSetup:modifyPlayMode(self._info.nPlayModeId)
end

function TeaHousePlayModeListItem:onBtnEventDelete(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.TipTool.showTip(
        {
            type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL,
            funcOK = function()
                TeaHouse.manager.teahouseSetup:deletePlayModeEx(self._info.nPlayModeId)
            end
        },
        "是否确认删除该玩法?"
    )
end

function TeaHousePlayModeListItem:onBtnEventOpen(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.manager.teahouseSetup:reqEnablePlayModeEx(self._info.nPlayModeId)
end

function TeaHousePlayModeListItem:onBtnEventClose(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.manager.teahouseSetup:reqEnablePlayModeEx(self._info.nPlayModeId)
end

function TeaHousePlayModeListItem:setOpenState(bOpen)
    self._btnOpen:setVisible(bOpen)
    self._btnClose:setVisible(not bOpen)
    if bOpen then
        if self._info.aPlayModeType and self._info.aPlayModeType == 1 then
            if self._info.aAwarded and self._info.aAwarded == 1 then
                if self._info.aRemainTime and self._info.aRemainTime > 0 then
                    self._btnOpen:setEnabled(false)
                    self._btnOpen:setColor(cc.c3b(160, 160, 160))
                    self._btnModify:setEnabled(false)
                    self._btnModify:setColor(cc.c3b(160, 160, 160))
                end
            end
        end
    end
end

function TeaHousePlayModeListItem:getPlayModeId()
    return self._info.nPlayModeId
end
function TeaHousePlayModeListItem:getPayType(payType)
    local isCheckPayTypes = true
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if SetupConfig and SetupConfig.IsFixedPayType then
        isCheckPayTypes = false
    end
    if isCheckPayTypes then
        local payTypes = TeaHouse.manager.teahouseData:getPayTypeByID()
        if payTypes and #payTypes == 1 then
            payType = payTypes[1]
        end
    end
    local teahouseData = TeaHouse.manager.teahouseData
    local isLastPay = teahouseData:isLastCost()
    local winPayName = isLastPay and "末位消耗" or "冠军消耗"
    if payType then
        payType = tonumber(payType)
        if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER or payType == KW_TYPE_TEA_OWNER then
            local payMode = TeaHouse.manager.teahouseData:getTeaHousePayMode()
            if payMode and payMode == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON then
                return winPayName
            else
                return winPayName
            end
        elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_AA then
            return "平摊消耗"
        elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_AA then
            return "平摊消耗"
        elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_ROOM_OWNER then
            return "房主消耗"
        elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_OWNER_CARD_AA then
            return "平摊消耗"
        elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA then
            if TeaHouse.LOBBY_ID.SHAOXING3D == TeaHouse.BridgeData.getLobbyID() then
                return winPayName
            else
                return "平摊消耗"
            end
        elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_WINNER then
            return winPayName
        elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_AA then
            return "平摊消耗"
        elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_WIN then
            return winPayName
        elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER_YUFU_MODE_AA then
            return "平摊消耗"
        end
    else
        local payMode = TeaHouse.manager.teahouseData:getTeaHousePayMode()
        if payMode and payMode == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON then
            return winPayName
        else
            return winPayName
        end
    end
end

-- -- 绍兴3D完全迁移完毕后可删除
-- function TeaHousePlayModeListItem:judgeNeedUpdateItem()
--     if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.SHAOXING3D then
--         self._btnDelete:setVisible(false)
--     end
-- end

function TeaHousePlayModeListItem:isPromoteAct()
    if
        TeaHouse.PromoteConfig[XH.areaData:getLobbyID()] ~= nil and TeaHouse.PromoteConfig[XH.areaData:getLobbyID()].GAMEID == self._info.nGameId and
            string.find(self._info.acData, TeaHouse.PromoteConfig[XH.areaData:getLobbyID()].RULE) == nil and
            TeaHouse.checkIsPromoteAct()
     then
        return true
    end
    return false
end

-- 判断癞子活动
function TeaHousePlayModeListItem:judgeActBtn()
    self._btnExtension:setVisible(false)
end

-- 一键转换癞子
function TeaHousePlayModeListItem:onBtnEventExtension(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if self:isPromoteAct() == false then
        self._btnExtension:setVisible(false)
        return
    end
    local gameRule = self._info.acData
    if TeaHouse.PromoteConfig[XH.areaData:getLobbyID()].DELRULE ~= nil and TeaHouse.PromoteConfig[XH.areaData:getLobbyID()].DELRULE ~= "" then
        gameRule = string.gsub(gameRule, TeaHouse.PromoteConfig[XH.areaData:getLobbyID()].DELRULE, "")
    end
    gameRule = gameRule .. TeaHouse.PromoteConfig[XH.areaData:getLobbyID()].RULE
    gameRule = string.gsub(gameRule, "';TabeleColor", ",红中癞子';TabeleColor")
    local data = {}
    data.bIsCountLock = self._info.bIsCountLock
    data.bIsPlayerLock = self._info.bIsPlayerLock
    data.nPlayerSize = self._info.anPlayerCount
    data.cont = self._info.anCount
    data.gameid = self._info.nGameId
    data.base = self._info.nBase
    data.type = self._info.nType
    data.name = self._info.acName
    data.data = gameRule
    TeaHouse.manager.teahouseSetup:setPlayModeInfo(data, self._info.nPlayModeId)
end

return TeaHousePlayModeListItem
