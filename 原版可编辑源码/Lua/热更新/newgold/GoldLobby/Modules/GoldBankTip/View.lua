local GoldBankTipView = class("GoldBankTipView", NG.ViewBase)
local GoldNewDefine = require("newgold.GoldLobby.Modules.Gold.Define")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
local GoldRoomsDefine = require("newgold.GoldCommon.Define.GoldRoomsDefine")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")

function GoldBankTipView:getCSBPath()
    return "GoldNew/Lobby/CSB/GoldBankTip/GoldBankTipLayer.csb"
end

function GoldBankTipView:getBindingInfo()
    return {
        -- 
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickClose" },
        ["_KW_TEXT_GOLD"] = { varName = "_KW_TEXT_GOLD" },
        ["_KW_TEXT_SAVE"] = { varName = "_KW_TEXT_SAVE" },
        ["_KW_TEXT_GOLD_2"] = { varName = "_KW_TEXT_GOLD_2" },
        ["_KW_TEXT_SAVE_2"] = { varName = "_KW_TEXT_SAVE_2" },
        ["_KW_TEXT_GOLD_NUM"] = { varName = "_KW_TEXT_GOLD_NUM" },
        ["_KW_CZCW"] = { varName = "_KW_CZCW" },
        ["_KW_PCLB"] = { varName = "_KW_PCLB" },
        ["_KW_BTN_CLOSE_2"] = { varName = "_KW_BTN_CLOSE_2", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickCZCWClose" },
        ["_KW_BTN_CLOSE_YBFB"] = { varName = "_KW_BTN_CLOSE_YBFB", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickYBFBClose" },
        ["_KW_BTN_YBFB"] = { varName = "_KW_BTN_YBFB", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickYBFB" },
        ["_KW_BTN_CZCW"] = { varName = "_KW_BTN_CZCW", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickCZCW" },
        ["_KW_IMG_HEAD_FRAME"] = { varName = "_KW_IMG_HEAD_FRAME" },
        ["_KW_TEXT_NICKNAME"] = { varName = "_KW_TEXT_NICKNAME" },
        ["_KW_GOLD"] = { varName = "_KW_GOLD" },
        ["_KW_PANEL_PLAYER_HEAD_2"] = { varName = "_KW_PANEL_PLAYER_HEAD_2" },
        ["_KW_ANI_GOLD"] = { varName = "_KW_ANI_GOLD" },
        ["_KW_ANI"] = { varName = "_KW_ANI" },
        ["_KW_SG_ANI"] = { varName = "_KW_SG_ANI" },
    }
end

function GoldBankTipView:getProxyEvents()
    return {
        --
        { module = NG.goldLobby:getModule("GoldCommon"), eventKeyName = "KW_FLUSH_NOTIFY_PROPS", callBack = "updateProps" },
        { module = NG.goldLobby:getModule("GoldBankrupt"), eventKeyName = "EVNET_GOLD_ACT_DISCOUNT_INFO", callBack = "flushYBFBInfo" },
    }
end

function GoldBankTipView:ctor(param)
    GoldBankTipView.super.ctor(self, param)
    self._info = param.data
    local info = param.data
    if info.gold <= 0 then
        info.gold = 0
    end
    if info.save <= 0 then
        info.save = 0
    end
    self._KW_TEXT_SAVE:setString(info.save .. "次")
    self._KW_TEXT_GOLD:setString("x" .. info.gold)
    self._KW_TEXT_SAVE_2:setString(info.save .. "次")
    self._KW_TEXT_GOLD_2:setString("x" .. info.gold)
    self:judgeAutoJoinRoom(info)
    self:flushUI(info)
    self:initHeadInfo(info)
    self:updateProps()
end

function GoldBankTipView:initHeadInfo(info)
    self._KW_PANEL_PLAYER_HEAD_2:setVisible(info.inGame)
    if not info.inGame then
        return
    end
    self:playResultGoldAni()
    local nameStr = GoldPlayerData.NickName
    if string.len(nameStr) > 12 then
        local validBytes = NG.StringTool.getMinimumValidBytesUTF8(nameStr, 12)
        nameStr = string.sub(nameStr, 1, validBytes) .. "..."
    end
    self._KW_TEXT_NICKNAME:setString(nameStr)
    if not self._headImg then
        local size = self._KW_IMG_HEAD_FRAME:getContentSize()
        self._headImg = NG.RemoteImage.new()
        self._headImg:setTouchEnabled(false)
        self._headImg:setPosition(size.width / 2, size.height / 2)
        self._headImg:ignoreContentAdaptWithSize(false)
        self._headImg:setContentSize(size.width - 10, size.height - 10)
        self._headImg:addTo(self._KW_IMG_HEAD_FRAME)
    end
    self._headImg:setUrl(GoldPlayerData.Head)
end

function GoldBankTipView:updateProps()
    -- self._KW_GOLD:setString(NG.StringTool.getScoreStr(GoldPlayerData.JoyBean))
end

function GoldBankTipView:flushYBFBInfo()
    if self._info then
        self:flushUI(self._info)
    end
end

function GoldBankTipView:flushUI(info)
    if info.type == GoldNewDefine.AWARDTYPE.AWARD_RECHARGE then
        NG.throwDataManager:throwData(NG.GoldThrowDataDefine.GOLD_QUICK_THROW_1, nil, { la_numid = GoldPlayerData.NumId })
    elseif info.type == GoldNewDefine.AWARDTYPE.AWARD_BANKRUPT then
        NG.throwDataManager:throwData(NG.GoldThrowDataDefine.GOLD_QUICK_THROW_5, nil, { la_numid = GoldPlayerData.NumId })
        NG.throwDataManager:throwData(NG.GoldThrowDataDefine.GOLD_QUICK_THROW_7, nil, { la_numid = GoldPlayerData.NumId }) -- 暂时加这里，主要是判断超值畅玩显隐性
    end
    self._KW_CZCW:setVisible(info.type ~= GoldNewDefine.AWARDTYPE.AWARD_BANKRUPT)
    self._KW_PCLB:setVisible(info.type == GoldNewDefine.AWARDTYPE.AWARD_BANKRUPT)
    -- 一把翻本控制
    local act = NG.goldLobby:getModule("GoldBankrupt"):getActInfo()
    if act ~= nil and tonumber(act.goldCnt) <= 0 then
        act = nil
    end
    if act ~= nil and info.type == GoldNewDefine.AWARDTYPE.AWARD_RECHARGE then
        NG.throwDataManager:throwData(NG.GoldThrowDataDefine.GOLD_QUICK_THROW_3, nil, { la_numid = GoldPlayerData.NumId })
    end
    self._KW_BTN_CLOSE_2:setVisible(act == nil)
    self._KW_BTN_YBFB:setVisible(act ~= nil)
    self._KW_BTN_CLOSE_YBFB:setVisible(act ~= nil)
    if act ~= nil then
        self._KW_TEXT_GOLD_NUM:setString(NG.StringTool.getScoreStr(act.goldCnt))
    end
end

function GoldBankTipView:judgeAutoJoinRoom(info)
    if info.inGame then
        -- 游戏区状态
    else
        if info.info ~= nil then
            NG.SysTool.performDelayOnce(function()
                if self and self.close then
                    self:judgeJoinRoom(tonumber(self:getQuickLevel()))
                end
            end, 0.5)
        end
    end
end

-- 处理加入逻辑
function GoldBankTipView:judgeJoinRoom(level)
    local gold = GoldPlayerData.JoyBean
    local info
    local roomInfo = self:getRoomInfo()
    if roomInfo == nil then
        return
    end
    for j, k in pairs(roomInfo.LEVEL) do
        if k.level == level then
            info = k
            break
        end
    end
    if info == nil then
        return
    end
    NG.goldLobby:getModule("GoldCommon"):reqJoinRoom(roomInfo.GAMEID, false, info.roomId, info.appId)
    self:close()
end

function GoldBankTipView:getRoomInfo()
    local roomInfo
    local rooms = NG.goldLobby:getModule("GoldCommon"):getRoomInfos()
    for _, v in pairs(rooms) do
        if v.GAMEID == (NG.goldLobby.selectGameID or GoldAreaConfig.LZDDZ) then
            roomInfo = v
            break
        end
    end
    return roomInfo
end

function GoldBankTipView:getQuickLevel()
    local fitLevel = 1
    local gold = GoldPlayerData.JoyBean
    local roomInfo = self:getRoomInfo()
    for _, k in pairs(roomInfo.LEVEL) do
        if k.maxscore ~= -1 then
            if gold >= k.minscore and gold <= k.maxscore then
                fitLevel = k.level
            end
        else
            if gold >= k.minscore then
                fitLevel = k.level
            end
        end
    end
    return fitLevel
end

function GoldBankTipView:onClickYBFBClose()
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.GOLD_QUICK_THROW_2, nil, { la_numid = GoldPlayerData.NumId })
    self:close()
end

function GoldBankTipView:onClickYBFB()
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.GOLD_QUICK_THROW_4, nil, { la_numid = GoldPlayerData.NumId })
    NG.goldLobby:getModule("GoldBankrupt"):showActView(0, true)
    self:close()
end

function GoldBankTipView:onClickCZCWClose()
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.GOLD_QUICK_THROW_2, nil, { la_numid = GoldPlayerData.NumId })
    self:close()
end

function GoldBankTipView:onClickClose()
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.GOLD_QUICK_THROW_6, nil, { la_numid = GoldPlayerData.NumId })
    self:close()
end

function GoldBankTipView:onClickCZCW()
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.GOLD_QUICK_THROW_8, nil, { la_numid = GoldPlayerData.NumId })
    NG.viewManager:openView("NewGold_PlayAwardView")
    self:close()
end

-- 头像播放金币飘动画
function GoldBankTipView:playResultGoldAni()
    self._KW_ANI:removeAllChildren()
    local fromGoldIconFlyNodes = self:getGoldNoedes(self._KW_ANI)
    local toGoldIconFlyNodes = self:getGoldNoedes(self._KW_SG_ANI)
    local totalCount = 8
    local curCount = 0
    for k = 1, totalCount do
        curCount = curCount + 1
        local isEnd = false
        if curCount == totalCount * 2 then
            isEnd = true
        end
        self:startGoldAniSingle(fromGoldIconFlyNodes, toGoldIconFlyNodes, isEnd, k)
    end
end

-- 获取所有金币节点
function GoldBankTipView:getGoldNoedes(node)
    local worldPos = node:convertToWorldSpace(cc.p(0, 0))
    local localPos = self._KW_ANI:convertToNodeSpace(worldPos) --世界坐标转换为本地坐标
    local posX = localPos.x + node:getContentSize().width * 0.5
    local posY = localPos.y + node:getContentSize().height * 0.5
    return cc.p(posX, posY)
end

-- 创建金币动画节点
function GoldBankTipView:startGoldAniSingle(pos, endPos, isEnd, index)
    local goldNode = self._KW_ANI_GOLD:clone()
    local params = { path = "NewGoldRes/Spine/HPLandlord/GameMain/", tex = "Caifuzhuanyi_jinbi.json", ske = "Caifuzhuanyi_jinbi.atlas", armatureName = "animation4" }
    local spineNode = display.playDargonBonesSpine(params)
    if spineNode then
        self._KW_ANI:addChild(goldNode)
        goldNode:setAnchorPoint(cc.p(0.5, 0.5))
        goldNode:addChild(spineNode)
        goldNode:setVisible(true)
        goldNode:setScale(2)
        goldNode:setPosition(pos)
        local dt = math.floor(index) * 0.1 + 0.3
        local actSequence = cc.Sequence:create(cc.DelayTime:create(0.1), cc.MoveTo:create(dt, endPos), cc.DelayTime:create(0.1), cc.CallFunc:create(function(isEnd)
            if isEnd then
                self._KW_ANI:removeAllChildren()
                self._KW_GOLD:setString(NG.StringTool.getScoreStr(GoldPlayerData.JoyBean))
            end
        end))
        goldNode:runAction(actSequence)
        return goldNode
    end
    return nil
end

return GoldBankTipView