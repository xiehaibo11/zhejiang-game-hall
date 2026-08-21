local GameView = CF.gameClass("MahjongGameView", "game.Mahjong.BasicMahjong.Modules.GameLayer.View")
local FIRSTVOICETIPINGAME = "FIRST_GETSEX" ..  CF.areaData:getAreaID()

function GameView:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/TaiZhou/WaHua/Layer.csb"
end

function GameView:getBindingInfo()
    return {
        ["_KW_GAMELAYER_BG"] = {varName="_imageBg"},
        ["_KW_PANEL_MAH_LAYER"] = {varName="_mah_panel"},
        ["_KW_LAYER_SPECF_MAH"] = {varName="_specfMahPanel"},

        ["_KW_TEXT_SYS_TIME"] = {varName="_sysTimeNode"},
        ["_KW_IMG_SYS_NET"] = {varName="_sysNetNode"},
        ["_KW_LB_SYS_POWER"] = {varName="_sysPowerNode"},
        ["_KW_TEXT_ROOM_ID"] = {varName="_roomIdNode"},
        ["_KW_TEXT_GAME_COUNT"] = {varName="_gameCountNode"},

        ["_KW_PANEL_LEFT_RULE_ROOT"] = { varName = "_uLeftRuleRoot" },
        ["_KW_BTN_LEFT_RULE"] = { varName = "_uLeftRuleBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onRuleBtnClicked" },
        ["_KW_TEXT_LEFT_RULE"] = { varName = "_uLeftRuleText" },
        ["_KW_PANEL_LEFT_RULE"] = { varName = "_leftRulePanel" },

        ["_KW_PANAEL_CLOCK"] = {varName="_clockRoot"},
        ["_KW_IMG_RED_POINT"] = {varName="_imgRedPoint"},
        ["_KW_TEXT_GAME_RULE"] = {varName="_gameRuleLabel"},

        ["_KW_BTN_SET"] = {varName="_setBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSetBtnClicked"},
        ["_KW_BTN_DUN"] = {varName="_dunBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onDunBtnClicked"},
        ["_KW_BTN_SWITCH_LINE"] = {varName="_btnSwitchLine", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSwitchLineBtnClicked"},
        ["_KW_BTN_SPEAK"] = {varName = "_speakBtn"},
        ["_KW_BTN_MSG"] = {varName = "_msgBtn"},

        ["_KW_IMG_YAOZHANG_BG"] = {varName="_imgYaoZhangBg"},
        ["_KW_PANEL_YAOZHANG"] = {varName="_panelYaoZhang"},
    }
end

function GameView:getProxyEvents()
    local proxyEvents = GameView.super.getProxyEvents(self) or {}
    proxyEvents[#proxyEvents + 1] = {module = CF.roomData, eventKeyName = "EVENT_GAMERULE_CHANGED", callBack = "onRuleStringEvent"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_GAME_RULE_CHANGED", callBack = "onGameRuleChanged"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_LEFT_BANKER_COUNT", callBack = "showLeftBankerCount"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_YAO_ZHANG", callBack = "showYaoZhang"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_XIAN_HUA_MAH", callBack = "showXianHuaMah"}
    proxyEvents[#proxyEvents + 1] = {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onPlayerStart"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("Player"), eventKeyName = "EVENT_UPDATE_SIGNAL_UI", callBack = "onUpdateSignalUI"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game, eventKeyName = "EVENT_START_SIGNAL_SEND", callBack = "onStartSignalSend"}
    proxyEvents[#proxyEvents + 1] = {module = CF.settingData, eventKeyName = "EVENT_MAHJONG_CONFIG", callBack = "onEventFlushAllCardsConfig"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_WINLOST_RESULT", callBack = "onWinlostResult"}
    return proxyEvents
end

function GameView:getAdaptationConfig()
    return {
        {node = self._btnSwitchLine, bRight = true, bHalf = true},
        {node = self._setBtn, bRight = true, bHalf = true},
        {node = self._uLeftRuleRoot, bRight = false, bHalf = false},
    }
end

function GameView:initUI()
    GameView.super.initUI(self)
    self:initTableUIView()
    self:initSysUI()
    self._clockRoot:setVisible(false)
    self._speakBtn:setVisible(false)
    self._msgBtn:setVisible(false)
    self._imageBg:setVisible(false)
    if CF.roomData:isPlayBack() then
        self._dunBtn:setVisible(false)
        self._setBtn:setVisible(false)
    end
    self:adaptLeftRulePanel()
end

function GameView:adaptLeftRulePanel()
    local posX = self._uLeftRuleRoot:getPosition()
    self._uLeftRuleRoot:setPositionX(posX + 50)
end

function GameView:removeTableUIView()
    if self._tableUIView then
        self._tableUIView:close()
        self._tableUIView = nil
    end
end

function GameView:initTableUIView()
    self:removeTableUIView()
    self._tableUIView = CF.gameRequire("Modules.GameLayer.TableInfoUI").new()
    self:addChild(self._tableUIView, 1)
end

function GameView:initSysUI()
    self:initTimeNode()
    self:initBatteryNode()
    self:initRoomID()
end

function GameView:initTimeNode()
    local function getTimeFunc()
        local date = CF.SysTool.getCurSysTimeStr()
        self._sysTimeNode:setString(date)
    end
    getTimeFunc()
    CF.UITool.createRepeateAction(self._sysTimeNode, 10, getTimeFunc)
end

function GameView:initBatteryNode()
    local function getBatteryFunc()
        local batteryLevel = CF.SysTool:GetCurBattery()
        if batteryLevel >= 60 then
            self._sysPowerNode:setColor(cc.c3b(212, 152, 28))
        elseif batteryLevel >= 20 then
            self._sysPowerNode:setColor(cc.c3b(212, 152, 28))
        else
            self._sysPowerNode:setColor(cc.c3b(212, 28, 34))
        end
        self._sysPowerNode:setPercent(batteryLevel)
    end
    getBatteryFunc()
    CF.UITool.createRepeateAction(self._sysPowerNode, 300, getBatteryFunc)
end

function GameView:initRoomID()
    local roomNumStr = "房间号\n" .. string.format("%06d", CF.roomData:getRoomID())
    self._roomIdNode:setString(roomNumStr)
end

function GameView:initUIMahLayer()
    if self._mahLayer then
        return
    end
    self._mahLayer = self:createMahLayer2D()
    self._mah_panel:addChild(self._mahLayer, 2)
    self:setContentSize(self._mahLayer:getContentSize())
end

function GameView:resetClockView()
    self:removeClockView()
    self._clockView = CF.gameRequire("Modules.GameLayer.TableClockView").new()
    self._mah_panel:addChild(self._clockView, 1)
end

function GameView:onPlayerStart(event)
    self._imgYaoZhangBg:setVisible(false)
    self._gameCountNode:setVisible(false)
end

--网络情况
function GameView:onUpdateSignalUI(event)
    local delayTime = event.msg.delayTime
    self:updateWifiStatus(delayTime)
end

function GameView:updateWifiStatus(delayTime)
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/Common/Image/doublekou_gamelayer.plist")
    if delayTime <= 150 then
        self._sysNetNode:loadTexture(string.format("doublekou%s%d.png", "wifi_icon_", 3), ccui.TextureResType.plistType)
    elseif delayTime <= 800 then
        self._sysNetNode:loadTexture(string.format("doublekou%s%d.png", "wifi_icon_", 2), ccui.TextureResType.plistType)
    else
        self._sysNetNode:loadTexture(string.format("doublekou%s%d.png", "wifi_icon_", 1), ccui.TextureResType.plistType)
    end
end

function GameView:onStartSignalSend(event)
    if self._sysNetNode and self._sysNetNode:numberOfRunningActions() == 0 then
        CF.UITool.createRepeateAction(self._sysNetNode, 3, function()
            if CF.roomData and CF.roomData:getSignalMsgTime() ~= 0 then
                self:updateWifiStatus(999)
            end
            if CF.msgManager then
                CF.msgManager:sendMobileSignalMsg()
            end
        end)
    end
end

function GameView:onGameRuleChanged(event)
    local data = event.msg.data
    if not data or data == "" then
        return
    end
    local ruleTable = CF.StringTool.getTableByString(data,";","=")
    local orderRuleTable = {"playType", "winLostType", "TaoHuaFanBei", "bCheckPos", "lianZhuang", "PlayLevel", "ChaoShiTaoHua"}
    local gameRuleStrTable = {
        ["playType"] = {[1] = "玉环挖花", [2] = "温岭挖花", [3] = "年度花"},
        ["winLostType"] = {[1] = "平搓", [2] = "庄家翻倍"},
        ["TaoHuaFanBei"] = {[1] = "逃花翻倍"},
        ["PayType"] = {[0] = "房主付", [1] = "平摊付"},
        ["bCheckPos"] = {[1] = "防作弊"},
        ["PlayLevel"] = {[1] = "新手", [2] = "普通", [3] = "高手"},
        ["ChaoShiTaoHua"] = {[1] = "超时逃花"},
        ["lianZhuang"] = {[1] = "连庄"}
    }
    local strGameRule = ""
    for _, var in ipairs(orderRuleTable) do
        local ruleValue = ruleTable[var]
        if ruleValue then
            local strRuleValue = string.gsub(ruleValue, "'", "")
            local value = tonumber(strRuleValue)
            if gameRuleStrTable[var][value] then
                strGameRule = strGameRule .. gameRuleStrTable[var][value]
                strGameRule = strGameRule .. "/"
            end
        end
    end
    if not CF.teaHouseManager:isInTeaHouse() then
        if ruleTable["PayType"] or ruleTable["payType"] then
            local strPayType = ruleTable["PayType"] or ruleTable["payType"]
            local strRuleValue = string.gsub(strPayType, "'", "")
            local payType = tonumber(strRuleValue)
            if gameRuleStrTable["PayType"] and gameRuleStrTable["PayType"][payType] then
                strGameRule = strGameRule .. gameRuleStrTable["PayType"][payType] .. "/"
            end
        end
    end
    strGameRule = strGameRule .. CF.roomData:getChairs() .. "人"
    if ruleTable["basescore"] then
        local basescore = string.gsub(ruleTable["basescore"], "'", "")
        strGameRule = strGameRule .. "/底分" .. basescore
    end
    if ruleTable["maxQuanShu"] then
        local maxQuanShu = string.gsub(ruleTable["maxQuanShu"], "'", "")
        strGameRule = strGameRule .. "/" .. maxQuanShu .. "圈"
    end
    self:setLeftRuleString(strGameRule)
    strGameRule = "挖花:" .. strGameRule
    CF.roomData:setGameRule(strGameRule)

    --自动准备
    if ruleTable["autoReady"] and tonumber(string.gsub(ruleTable["autoReady"], "'", "")) == 1 then
        CF.msgManager:sendGameStart()
    end
end

function GameView:showLeftBankerCount(event)
    local nLeftBanker = event.msg.nLeftBanker or 0
    local bShow = event.msg.bShow or false
    self._gameCountNode:setVisible(bShow)
    local strLeftBanker = string.format("剩余:%d庄", nLeftBanker)
    self._gameCountNode:setString(strLeftBanker)
end

--游戏规则更新
function GameView:onRuleStringEvent(event)
    local ruleStr = CF.roomData:getGameRule()
    ruleStr = string.gsub(ruleStr, "挖花:", "")
    self:setLeftRuleString(ruleStr)
end

function GameView:setLeftRuleString(strRule)
    strRule = strRule or ""
    local ruleText = self._uLeftRuleText
    local parent = self._uLeftRuleRoot

    if not ruleText or not parent then
        return
    end

    local adpatwidth = 15
    local adpatHeight = 8
    local ruleTab = string.split(strRule,"/")
    local textSize = ruleText:getContentSize()
    local totalCount = #ruleTab
    local totalHeight = adpatHeight + (textSize.height + adpatHeight) * totalCount

    parent:removeAllChildren()
    local maxLineWidth = 0
    for k, text in ipairs(ruleTab) do
        local tmpTextItem = ruleText:clone()
        local curPos = totalHeight - adpatHeight - (textSize.height + adpatHeight) * (k - 1)
        tmpTextItem:setPosition(adpatwidth, curPos)
        tmpTextItem:setString(text)
        tmpTextItem:setVisible(true)
        parent:addChild(tmpTextItem)

        local curItemWidt = tmpTextItem:getContentSize().width
        if maxLineWidth < curItemWidt then
            maxLineWidth = curItemWidt
        end
    end
    parent:setContentSize(cc.size(maxLineWidth + adpatwidth * 2, totalHeight))
end

function GameView:onSetBtnClicked(send, eventType)
    local voiceTip = self._setBtn:getParent()
    :getChildByName("KW_IMG_BUBBLETIP")
    if  voiceTip ~= nil then
        self._setBtn:getParent():removeChildByName("KW_IMG_BUBBLETIP")
        cc.UserDefault:getInstance():setBoolForKey(FIRSTVOICETIPINGAME, true)
    end
    CF.gameRequire("Modules.Setting.View").new():showSelf()
    CF.game:getModule("IconAnimationManager"):reportData("菜单")
end

function GameView:onSwitchLineBtnClicked(send, eventType)
    CF.settingData:switchLineType()
    CF.game:getModule("IconAnimationManager"):reportData("菜单_单双排切换")
end

function GameView:onRuleBtnClicked(send, eventType)
    local uLeftUIRoot = self._uLeftRuleRoot
    local isVisible = not uLeftUIRoot:isVisible()
    uLeftUIRoot:setVisible(isVisible)
    uLeftUIRoot:stopAllActions()

    if isVisible then
        local delayAct = cc.DelayTime:create(4.0)
        local updateCallAct = cc.CallFunc:create(function()
            uLeftUIRoot:setVisible(false)
        end)

        local sequenceAct = cc.Sequence:create(delayAct, updateCallAct)
        uLeftUIRoot:runAction(sequenceAct)
    end
end

function GameView:showYaoZhang(event)
    local yaoZhangData = event.msg.data or {}
    local bAni = event.msg.bAni or false
    local bShow = event.msg.bShow or false
    self._imgYaoZhangBg:setVisible(bShow)

    local tmpMahs = {}
    for i = 1, CF.GameDefine.YaoZhangCount do
        if not yaoZhangData[i] then
            break
        end
        table.insert(tmpMahs, yaoZhangData[i])
    end
    if not self._yaoZhangMahs then
        local config = CF.settingData:getDefaultData(nil, true)
        local UIMahHandArea = CF.gameRequire("Modules.GameLayer.View2D.UIMahHandArea")
        local UIMahConfig = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig2D")
        self._yaoZhangMahs = UIMahHandArea.new(CF.GameDefine.LOCAL_SEAT.BOTTOM, config)
        self._yaoZhangMahs:setScale(UIMahConfig.YaoZhangMahScaleSize)
        self._panelYaoZhang:addChild(self._yaoZhangMahs)
        self._yaoZhangMahs:setMaxHandMahCount(CF.GameDefine.YaoZhangCount)
    end
    self._yaoZhangMahs:setHandMahs(tmpMahs ,nil, bAni)
end

function GameView:showXianHuaMah(event)
    --local localSeat = event.msg.localSeat
    local mah = event.msg.data
    local bShow = event.msg.bShow
    if bShow and not mah then
        return
    end
    local showXianHuaMahNode = event.msg.node
    if not showXianHuaMahNode then
        return
    end
    if not bShow then
        showXianHuaMahNode:removeChildByName("xianhua")
        return
    end
    local config = CF.settingData:getDefaultData(nil, true)
    local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")
    local mahNode = UIMah.new(CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD, config)
    mahNode:setMahValue(mah)
    mahNode:setScale(0.7)
    mahNode:setName("xianhua")
    showXianHuaMahNode:addChild(mahNode)
end

function GameView:onEventFlushAllCardsConfig(event)
    if self._yaoZhangMahs then
        self._yaoZhangMahs:setConfig(event.data)
    end
end

function GameView:onWinlostResult(event)
    self._gameCountNode:setVisible(false)
end

return GameView