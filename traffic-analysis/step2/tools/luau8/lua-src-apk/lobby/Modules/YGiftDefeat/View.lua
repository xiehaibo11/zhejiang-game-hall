local YGiftDefeatView = class("YGiftDefeatView", XH.ViewBase)
local YGiftBankruptcyDefine = require("lobby.Modules.YGiftBankruptcy.Define")

function YGiftDefeatView:getCSBPath()
    return "cocosStudio/hall/CSB/Ygold/GiftDefeat/GiftDefeatLayer.csb"
end

function YGiftDefeatView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("YGiftDefeat"), eventKeyName = "FLUSH_ACT_INFO", callBack = "onUpdateGiftDefeatStatus" },
    }
end

function YGiftDefeatView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", onTouchEnded = "onTouchClose" },
        ["_KW_BTN_BUY"] = { varName = "_KW_BTN_BUY", onTouchEnded = "onTouchBuy" },
        ["_KW_PRICE"] = { varName = "_KW_PRICE" },
        ["_KW_LOSE_CNT"] = { varName = "_KW_LOSE_CNT" },
        ["_KW_AWARD_CNT"] = { varName = "_KW_AWARD_CNT" },
        ["_KW_DIS"] = { varName = "_KW_DIS" },
        ["_KW_TEXT_LEFT"] = { varName = "_KW_TEXT_LEFT" },
    }
end

function YGiftDefeatView:ctor(param)
    YGiftDefeatView.super.ctor(self)
    param = param or {}
    self._gameId = param.gameID or 0
    self._scene = param.lobbyType
    self._actId = nil
    self:initUI()
end

function YGiftDefeatView:onTouchClose()
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("GoldBaseLive.Close")
    eventDispatcher:dispatchEvent(event)
    if not self or tolua.isnull(self) then
        return
    end
    self:close()
end

function YGiftDefeatView:onCleanup()
    self:removeGoldSchedule()
    YGiftDefeatView.super.onCleanup(self)
end

function YGiftDefeatView:removeGoldSchedule()
    if self._goldListener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._goldListener)
    end
    self._goldListener = nil
end

function YGiftDefeatView:setGoldSchedule()
    self:removeGoldSchedule()
    self._goldListener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if not self or tolua.isnull(self) then
            return
        end
        local info = XH.lobby:getModule("YGiftDefeat"):getPlayerActInfo()
        if info == nil then
            self:close()
            return
        end
        local left = 0
        for i = 1, #info do
            left = tonumber(info[i].period) - XH.lobby:getModule("Shop"):getServerTime()
        end
        if left <= 0 then
            self:close()
            return
        end
        self._KW_TEXT_LEFT:setString("" .. string.format("%02d", math.floor(left / 60)) .. "分" .. string.format("%02d", math.floor(left % 60)) .. "秒")
    end, 1, false)
end

function YGiftDefeatView:onTouchBuy()
    if self._actId == nil or XH.lobby:getModule("YGiftDefeat"):getActivityId() == nil then
        XH.TipTool.showToast("暂未获取到配置，请点击重试~")
        return
    end
    local productId = YGiftBankruptcyDefine.ACTLIST.Defeat .. "-" .. XH.lobby:getModule("YGiftDefeat"):getActivityId() .. "-" .. self._actId
    
    -- 埋点
    self:throwClickData()

    XH.lobby:getModule("YGiftBankruptcy"):reqBuyPropByProductId(productId)
    self:onTouchClose()
end

function YGiftDefeatView:initUI()
    XH.lobby:getModule("YGiftDefeat"):reqPlayerInfo()
end

function YGiftDefeatView:onUpdateGiftDefeatStatus()
    self:setGoldSchedule()
    local info = XH.lobby:getModule("YGiftDefeat"):getPlayerActInfo()
    if info == nil then
        XH.TipTool.showToast("活动已过期~")
        self:close()
        return
    end
    info = info[1]
    local lose = info.lose
    if lose < 0 then
        lose = 0 - lose
    end
    local award = info.gold
    local textRet = XH.StringTool.numberToString(lose, 1)
    local textPackage = XH.StringTool.numberToString(award, 1)
    
    self._KW_LOSE_CNT:setString("系统返还" .. textRet .. " + 礼包" .. textPackage)
    local awardText = XH.lobby:getModule("YGiftBankruptcy"):getWGoldScore(award+lose)
    self._KW_AWARD_CNT:setString(awardText)
    self._KW_DIS:setString(math.floor(100 * (lose + award) / award) .. "%")
    self._KW_PRICE:setString(info.price .. "元")
    self._actId = info.goodsId
    if self._isReport == nil then
        local block_label = "游戏房间"
        if self._scene == XH.LOBBY_TYPE.YUEJU then
            block_label = "大厅"
        elseif self._scene == XH.LOBBY_TYPE.XIUXIAN then
            block_label = "金币场大厅"
        end
        local roomLevel = XH.lobby:getModule("YGiftDefeat"):getRoomLevel()
        local gameid = XH.lobby:getModule("YGiftDefeat"):getThrowDataGameID()
        local conventionData = { 
            page_label = "免赔礼包", 
            block_item_id = gameid,
            block_label = block_label
        }
        local extraData = {
            source = roomLevel or -1, 
            info = string.format("%s_%s_%d", info.price.."元", awardText.."金币", self._actId)
        }
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.jblb2024052903, conventionData, extraData)
    end
    self._isReport = true
end

function YGiftDefeatView:throwClickData()
    local actInfo = XH.lobby:getModule("YGiftDefeat"):getPlayerActInfo()
    if actInfo == nil then
        return
    end
    actInfo = actInfo[1]
    local lose = actInfo.lose
    if lose < 0 then
        lose = 0 - lose
    end
    local award = actInfo.gold
    local awardText = XH.lobby:getModule("YGiftBankruptcy"):getWGoldScore(award+lose)
    local block_label = "游戏房间"
    if self._scene == XH.LOBBY_TYPE.YUEJU then
        block_label = "大厅"
    elseif self._scene == XH.LOBBY_TYPE.XIUXIAN then
        block_label = "金币场大厅"
    end
    local roomLevel = XH.lobby:getModule("YGiftDefeat"):getRoomLevel()
    local gameid = XH.lobby:getModule("YGiftDefeat"):getThrowDataGameID()
    local conventionData = { 
        page_label = "免赔礼包", 
        block_item_id = gameid,
        block_label = block_label,
        page_item_id = "充值"
    }
    local extraData = {
        source = roomLevel or -1, 
        info = string.format("%s_%s_%d", actInfo.price.."元", awardText.."金币", self._actId)
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.jblb2024052904, conventionData, extraData)
end

return YGiftDefeatView