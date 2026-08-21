local YGiftBankruptcyModule = class("YGiftBankruptcyModule", XH.ModuleBase)
local YGiftBankruptcyDefine = require("lobby.Modules.YGiftBankruptcy.Define")

YGiftBankruptcyModule.FLUSH_ACT_INFO = "FLUSH_ACT_INFO"
YGiftBankruptcyModule.FLUSH_BANKRUPTCY_ACT_INFO = "FLUSH_BANKRUPTCY_ACT_INFO"
YGiftBankruptcyModule.FLUSH_BANKRUPTCY_ACT_INFO_AD = "FLUSH_BANKRUPTCY_ACT_INFO_AD"

-- 破产礼包
function YGiftBankruptcyModule:ctor()
    YGiftBankruptcyModule.super.ctor(self)
    self._actInfo = {} -- 基础活动信息
    self._playerInfo = {} -- 具体玩家活动信息
    self._aid = {} -- 活动id
    self._aidAD = {} -- 广告活动id
    self._roomLevel = -1    -- 房间等级
    self._throwDataGameID = 0   -- 
    self._createType = 0    -- 礼包生成规则，埋点用
end

function YGiftBankruptcyModule:getReqConfig()
    return {
        ReqActDetail = { reqPath = "lobby.Req.LuckTask.ReqActDetail", callBack = self.respActDetail },
        ReqBankruptcyGift = { reqPath = "lobby.Req.LuckTask.ReqBankruptcyGift", callBack = self.respPlayerInfo },
        ReqDoBankruptcyAd = { reqPath = "lobby.Req.LuckTask.ReqDoBankruptcyAd", callBack = self.respDoBankruptcyAd },
        ReqQueryBankruptcySubsidy = { reqPath = "lobby.Req.LuckTask.ReqQueryBankruptcySubsidy", callBack = self.respBaseLiveInfo },
        GetBankruptcySubsidy = { reqPath = "lobby.Req.LuckTask.GetBankruptcySubsidy", callBack = self.respBaseLiveAward },
        ReqBankruptcyGiftProto = {reqPath = "lobby.Req.LuckTask.ReqBankruptcyGiftProto", callBack = self.respPlayerInfo}
    }
end

-- 是否是新金币场游戏（目前仅双扣）
function YGiftBankruptcyModule:isNewModeGold(gameId)
    if XH.goldConfigManager:getGoldModeByGameid(gameId) == 50 then
        return true
    end
    for _, v in pairs(YGiftBankruptcyDefine.NewModeGoldGameID) do
        if gameId == v then
            return true
        end
    end
    return false
end

function YGiftBankruptcyModule:setActivityId(aid)
    self._aid[XH.areaData:getSrsGroupID()] = aid
    self:reqActDetail()
    self:reqPlayerInfo()
end

function YGiftBankruptcyModule:getActivityId()
    return self._aid[XH.areaData:getSrsGroupID()]
end

function YGiftBankruptcyModule:setPlayerActInfo(info)
    self._playerInfo[XH.areaData:getSrsGroupID()] = info
end

function YGiftBankruptcyModule:getPlayerActInfo()
    return self._playerInfo[XH.areaData:getSrsGroupID()]
end

function YGiftBankruptcyModule:setActInfo(info)
    self._actInfo[XH.areaData:getSrsGroupID()] = info
end

function YGiftBankruptcyModule:getActInfo()
    return self._actInfo[XH.areaData:getSrsGroupID()]
end

function YGiftBankruptcyModule:setRoomLevel(roomLevel)
    self._roomLevel = roomLevel
end

function YGiftBankruptcyModule:getRoomLevel()
    return self._roomLevel
end

-- 为了不破坏原有结构，新增gameid专门用来抛送数数
function YGiftBankruptcyModule:setThrowDataGameID(gameID)
    if gameID == 30116 then
        gameID = 42038
    end
    self._throwDataGameID = gameID
end

function YGiftBankruptcyModule:getThrowDataGameID()
    return self._throwDataGameID
end

-- 显示免败礼包
function YGiftBankruptcyModule:showGiftDefeat(gameID, lobbyType)
    XH.viewManager:openView("YGiftDefeatView", nil, { gameID = gameID or 0, scene = lobbyType or 0 })
end

-- 显示破产礼包
function YGiftBankruptcyModule:showBankruptcy(lobbyType)
    --XH.viewManager:openView("GoldBaseLiveView", nil, { showBankupt = true })
    XH.viewManager:openView("GoldBankruptcyView", nil, { showBankupt = true, scene = lobbyType })

end

-- 房间金额不足以进入的情况（目前仅双扣）
function YGiftBankruptcyModule:isShowGiftEnter(gameID, roomLevel)
    if not self:isNewModeGold(gameID) then
        return false
    end
    local curLevelInfo = XH.goldConfigManager:getLevelInfo(gameID, roomLevel)
    if XH.taskManager:canGetBreakAward(curLevelInfo.minrich) then
        XH.viewManager:openView("GoldBankruptcyView", nil, { showBankupt = true, scene = XH.LOBBY_TYPE.XIUXIAN,gameID = gameID, roomFlag = roomLevel})
        return true
    end
    if gameID == 30579 then
        if XH.lobby:getModule("YGiftEnterV2"):getActivityId() ~= nil then
            XH.lobby:getModule("YGiftEnterV2"):reqPlayerInfo(roomLevel, gameID)
            return true
        end
    else
        if XH.lobby:getModule("YGiftEnter"):getActivityId() ~= nil then
            XH.lobby:getModule("YGiftEnter"):reqPlayerInfo(roomLevel, gameID)
            return true
        end
    end
    return false
end

-- 登陆初始化接口
function YGiftBankruptcyModule:initGoldActData()
    XH.lobby:getModule("Shop"):reqDiamondProductsInfoEx()

    -- 破产礼包+免赔礼包
    self:reqPlayerInfo()
    XH.lobby:getModule("YGiftDefeat"):reqPlayerInfo()
end

-- 获取详细任务
function YGiftBankruptcyModule:reqActDetail()
    if self:getActivityId() == nil then
        return
    end
    if self:getActInfo() ~= nil then
        return
    end
    self:startReq("ReqActDetail", self:getActivityId(), 10)
end

function YGiftBankruptcyModule:respActDetail(req, type, data)
    self:setActInfo(nil)
    if type == XH.Req.TYPE.SUCCESS then
        if data and data.res and data.res.special then
            local ok, res_tab = pcall(cjson.decode, data.res.special)
            if ok and res_tab and res_tab.sessions then
                self:setActInfo(res_tab.sessions)
            end
        end
    end
end

-- 是否为破产/免败/进房的购买礼包
function YGiftBankruptcyModule:isPayWithGift(msg)
    if not msg then
        return false
    end
    local data = msg.productInfo
    local limit = -1
    local gameid
    if msg.extParam then
        limit = msg.extParam.limit
        gameid = msg.extParam.triggerGameID
    end
    if data and data.productId then
        local splitTable = string.split(data.productId, "-")
        local first = splitTable[1]
        local second = splitTable[3]
        if not first or not second then
            return false
        end
        local cnt = -1
        if first == YGiftBankruptcyDefine.ACTLIST.Bankruptcy or first == YGiftBankruptcyDefine.ACTLIST.BankruptcyV2 then
            cnt = 0
            local info = self:getPlayerActInfo()
            if info and #info > 0 then
                for z = 1, #info do
                    if info[z].goodsId == tonumber(second) then
                        cnt = info[z].gold
                        break
                    end
                end
            end
            self:reqPlayerInfo()
        elseif first == YGiftBankruptcyDefine.ACTLIST.Enter or first == YGiftBankruptcyDefine.ACTLIST.EnterV2 then
            cnt = 0
            local info = XH.lobby:getModule("YGiftEnter"):getGiftInfoByLevel()
            if gameid == 30579 then
                info = XH.lobby:getModule("YGiftEnterV2"):getGiftInfoByLevel()
            end
            if info and #info > 0 then
                for z = 1, #info do
                    if info[z].goods_id == tonumber(second) and limit == info[z].limit then
                        cnt = info[z].gold
                        break
                    end
                end
            end
        elseif first == YGiftBankruptcyDefine.ACTLIST.Defeat then
            cnt = 0
            local info = XH.lobby:getModule("YGiftDefeat"):getPlayerActInfo()
            if info then
                for z = 1, #info do
                    if info[z].goodsId == tonumber(second) then
                        if info[z].lose < 0 then
                            info[z].lose = 0 - info[z].lose
                        end
                        cnt = info[z].lose + info[z].gold
                        break
                    end
                end
            end
            XH.lobby:getModule("YGiftDefeat"):reqPlayerInfo()
        end
        if cnt == 0 then
            XH.TipTool.showToast("充值成功，您已经获得奖励金币，祝您游戏愉快~")
            XH.SysTool.performDelayOnce(function()
                XH.playerData:flushGoldCoin()
            end, 1)
            return true
        end
        if cnt ~= -1 then
            XH.TipTool.showToast("充值成功，您已经获得" .. self:getWGoldScore(cnt) .. "金币，祝您游戏愉快~")
            XH.SysTool.performDelayOnce(function()
                XH.playerData:flushGoldCoin()
            end, 1)
            return true
        end
    end
    return false
end

function YGiftBankruptcyModule:getRMBGoods()
    return XH.lobby:getModule("Shop"):getRmbPropsAdd() or {}
end

function YGiftBankruptcyModule:gameLastGameID()
    return self._lastGameID or 0
end

-- 是否触发破产请求 外部调用
function YGiftBankruptcyModule:showBuyBankuptcyGift(gameID, score, isShow)
    if not self:isNewModeGold(gameID) then
        return
    end
    self._lastGameID = gameID
    if score > 0 then
        return
    end
    if score < 0 then
        score = 0 - score
    end
    if self:getActivityId() == nil then
        return
    end
    local DEBUG = require("app.Config.GlobalConfig").IsDebug
    if DEBUG then 
        XH.TipTool.showToast(string.format("破产礼包:%d,%d,%s", gameID, score, tostring(isShow)))
    end
    self:reqPlayerInfo(true, score, isShow)
    self:checkAndThrowData(gameID)
end

-- 是否触发免败请求 外部调用
function YGiftBankruptcyModule:reqBuyDefeatGift(score, gameID)
    if not self:isNewModeGold(gameID) then
        return
    end
    self._lastGameID = gameID
    if score > 0 then
        return
    end
    if score < 0 then
        score = 0 - score
    end
    XH.lobby:getModule("YGiftDefeat"):reqPlayerInfo(true, score)
end

-- 请求下单
function YGiftBankruptcyModule:reqBuyBankuptcyGift(isMore, goodsId, gameID)
    local activityID = self:getActivityId()
    if gameID and gameID == 30579 then
        activityID = XH.lobby:getModule("YGiftBankruptcyV2"):getActivityId()
    end
    if activityID == nil then
        return
    end
    local gid = goodsId
    if not gid then
        local dataInfo = self:getPrizeInfo(isMore)
        if not dataInfo then
            return
        end
        gid = dataInfo.goodsId
    end
    local productId = YGiftBankruptcyDefine.ACTLIST.Bankruptcy .. "-" .. activityID .. "-" .. gid
    if gameID and gameID == 30579 then
        productId = YGiftBankruptcyDefine.ACTLIST.BankruptcyV2 .. "-" .. activityID .. "-" .. gid
    end
    self:reqBuyPropByProductId(productId, gameID)
end

function YGiftBankruptcyModule:getPrizeInfo(isMore)
    local info = self:getPlayerActInfo()
    if info then
        if #info == 1 then
            return info[1]
        end
        if #info >= 2 then
            if info[1].gold > info[2].gold then
                if isMore then
                    return info[1]
                else
                    return info[2]
                end
            else
                if isMore then
                    return info[2]
                else
                    return info[1]
                end
            end
        end
    end
    return nil
end

-- 寻找商品id对应的商品礼包并下单
function YGiftBankruptcyModule:reqBuyPropByProductId(productId,triggerGameID,roomLevel,limit)
    local rmbPropsAdd = self:getRMBGoods()
    if #rmbPropsAdd == 0 then
        XH.TipTool.showToast("未找到匹配档位的商品" .. productId .. "，请联系客服~")
        return
    end
    for i = 1, #rmbPropsAdd do
        if rmbPropsAdd[i].productId == productId then
            local extParam = {}
            extParam.triggerGameID = triggerGameID
            extParam.room_level = roomLevel
            if string.match(productId, "bankruptcy_gift") then
                extParam.createType = self:getCreateType()
            elseif string.match(productId, "joinroom_gift") then
                extParam.createType = XH.lobby:getModule("YGiftEnter"):getCreateType()
            elseif string.match(productId, "joinroom_gift_v2") then
                extParam.createType = XH.lobby:getModule("YGiftEnterV2"):getCreateType()
            end
            extParam.limit = limit
            XH.lobby:getModule("Shop"):reqBuyDiamond(rmbPropsAdd[i], nil, productId, nil, nil, nil, "gift",extParam)
            return
        end
    end
    XH.TipTool.showToast("未找到匹配档位的商品" .. productId .. "，请联系客服!")
end

-- 获取玩家活动信息
-- gameNotify:50服务推送破产礼包
function YGiftBankruptcyModule:reqPlayerInfo(isGame, score, isShow, gameID, gameNotify)
    self._isInGame = isGame
    self._loseScore = score or 0
    if self:getActivityId() == nil then
        return
    end
    local source = ""
    if gameNotify then
        source = "gameNotify"
    elseif isGame then
        source = "game"
    end
    self:startReq("ReqBankruptcyGift", self:getActivityId(), 5, isShow, gameID, source)
end

function YGiftBankruptcyModule:setPlayerCnt(dayCnt, total)
    self._dayCnt = dayCnt
    self._totalCnt = total
end

function YGiftBankruptcyModule:getPlayerCnt()
    return self._dayCnt or 0, self._totalCnt or 0
end

function YGiftBankruptcyModule:getCreateType()
    return self._createType
end

local lastPeriod = 0
function YGiftBankruptcyModule:respPlayerInfo(req, type, data)
    XH.TipTool.hideLoading()
    local period = 0
    -- local skipSetPeriod = false
    if type == XH.Req.TYPE.SUCCESS then
        self:setPlayerCnt(data.todayCnt, data.totalCnt)
        self._createType = data.createType or 0
        if data.sessionId ~= 0 and data.gameId ~= 0 then
            self:setRoomLevel(data.sessionId)
            self:setThrowDataGameID(data.gameId or 0)
        end
        if data.goods and #data.goods > 0 then
            for i = 1, #data.goods do
                data.goods[i].gameId = tonumber(data.gameId)
            end
            self:setPlayerActInfo(data.goods)
            period = tonumber(data.goods[1].period)
        else
            self:setPlayerActInfo(nil)
        end
        if self._isInGame and self._loseScore > 0 then
            local params = {
                createType = self._createType,
                roomLevel = self._roomLevel,
                gameID = self._throwDataGameID,
                request_code = string.format("%s,%s", tostring(req._startTime), tostring(req._endTime)),
            }
            if period ~= lastPeriod and period ~= 0 then
                self.isShowBankRupt = true
                params.info = "服务返回数据正确"
                self:throwData(params)
            end
            local popCallBack = function()
                -- 判断有条件弹窗
                params.info = "popCallBack1"
                local flag = cc.UserDefault:getInstance():getIntegerForKey("_KW_DATA_LAST_JOIN_GOLD_LEVEL_" .. XH.areaData:getLobbyID(), -1)
                if data.goods and #data.goods > 0 then
                    XH.viewManager:closeView("YGiftDefeatView")
                    params.info = "popCallBack2"
                    if self.isShowBankRupt then 
                        params.info = "popCallBack3"
                        XH.viewManager:openView("GoldBankruptcyView", nil, {gameID = self:gameLastGameID(), goldNotEnough = true, roomFlag = flag})
                    end
                else
                    params.info = "popCallBack4"
                    self:reqBuyDefeatGift(-self._loseScore, self:gameLastGameID())
                end
                self:throwData(params)
                self.isShowBankRupt = false
            end
            -- 有无限金币先无限金币
            if not XH.lobby:getModule("UnlimitGoldAct"):judgeIsShowPopAct(popCallBack) then
                popCallBack()
            end
        end
    else
        self:setPlayerActInfo(nil)
        if self._isInGame and self._loseScore > 0 then
            -- 处理服务下发的错误码信息并上抛给数数
            local errStr="其他错误"
            local errCode = 1
            if type == XH.Req.TYPE.TIMEOUT then
                errStr="请求超时"
            end
            if data and data.resp and data.resp.errCode then
                errCode = data.resp.errCode
                if errCode == 16019 then
                    errStr = "未找到对局记录"
                elseif errCode == 16020 then
                    errStr = "未找到场次信息"
                elseif errCode == 16021 then
                    errStr = "未找到礼包活动配置"
                elseif errCode == 16022 then
                    errStr = "未找到礼包商品配置"
                elseif errCode == 16023 then
                    errStr = "对局记录过期"
                elseif errCode == 16024 then
                    errStr = "未满足破产"
                elseif errCode == 16025 then
                    errStr = "破产礼包生成失败"
                end
            end
            -- 上抛埋点
            local createType = data and data.createType
            -- 构建extraData
            local roomLevel = data and data.sessionId
            if CF and CF.roomData then
                roomLevel = CF.roomData:getRoomLevel()
            end
            local params = {
                createType = createType,
                gameID = self._lastGameID,
                roomLevel = roomLevel,
                info = string.format("%s-%d", errStr, errCode),
                request_code = string.format("%s,%s", tostring(req._startTime), tostring(req._endTime)),
            }
            self:throwData(params)
        end
    end
    if period ~= lastPeriod and period ~= 0 then 
        lastPeriod = period
    end
    self:dispatchEvent({ name = self.FLUSH_ACT_INFO })
    self:dispatchEvent({ name = self.FLUSH_BANKRUPTCY_ACT_INFO })
end


function YGiftBankruptcyModule:getWGoldScore(score)
    score = tonumber(score)
    return XH.StringTool.numberToString(score, 1)
end

function YGiftBankruptcyModule:reqDoBankruptcyAd(action, isEnter)
    self:startReq("ReqDoBankruptcyAd", self:getADActivityId(), action, self._throwDataGameID, self._roomLevel, isEnter, 5)
end

function YGiftBankruptcyModule:respDoBankruptcyAd(req, type, data)
    XH.TipTool.hideLoading()
    if data and data.isEnter and data.action == YGiftBankruptcyDefine.ACTION_TYPE.QUERY then
        if data.total ~= 0 and data.complete < data.total then
            XH.viewManager:openView("GoldBankruptcyView", nil, { showBankupt = true, scene = XH.LOBBY_TYPE.XIUXIAN,gameID = self._throwDataGameID, roomFlag = self._roomLevel})
        else
            XH.lobby:getModule("YGiftEnter"):reqPlayerInfo(self._roomLevel, self._throwDataGameID)
        end
        return
    end
    if type == XH.Req.TYPE.SUCCESS then
        if data.action == YGiftBankruptcyDefine.ACTION_TYPE.QUERY then
            self:dispatchEvent({ name = self.FLUSH_BANKRUPTCY_ACT_INFO_AD, msg = data })
        elseif data.action == YGiftBankruptcyDefine.ACTION_TYPE.GETWARD then
            -- 弹窗领取奖励
            local awardData = {}
            local tempInfo = {}
            tempInfo.type = -1
            tempInfo.cnt = data.addCnt
            awardData[1] = tempInfo
            XH.viewManager:openView("GoldRewardView", nil, awardData)
            XH.playerData:flushGoldCoin()
            self:dispatchEvent({ name = self.FLUSH_BANKRUPTCY_ACT_INFO_AD, msg = data })
        end
    end
end

function YGiftBankruptcyModule:setADActivityId(aid)
    self._aidAD[XH.areaData:getSrsGroupID()] = aid
end

function YGiftBankruptcyModule:getADActivityId()
    return self._aidAD[XH.areaData:getSrsGroupID()]
end

-- 请求低保礼包信息
function YGiftBankruptcyModule:reqBaseLiveInfo()
    self:startReq("ReqQueryBankruptcySubsidy", 42038, 10)
end

function YGiftBankruptcyModule:respBaseLiveInfo(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._breakInfo = {
            total = data.total, -- 总次数
            nComplete = data.complete, -- 完成次数
            addcnt = data.addCnt, -- 奖励数量
            sTip = data.tip -- 最低限制
        }
        XH.taskManager:setBaseLiveInfo(self._breakInfo)
    end
end

-- 请求低保领奖
function YGiftBankruptcyModule:reqBaseLiveAward()
    self:startReq("GetBankruptcySubsidy", 42038, 10)
end

function YGiftBankruptcyModule:respBaseLiveAward(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        XH.TipTool.showToast("领取低保奖励成功~")
        self:showAwardInfo()
        self:reqBaseLiveInfo()
        XH.taskManager:reqPlayerDropData()
    elseif type == XH.Req.TYPE.FAIL then
        XH.TipTool.showToast("领取低保奖励失败~")
    end
end

-- 返回低保礼包信息
function YGiftBankruptcyModule:getBaseLiveInfo()
    if self._breakInfo then
        return self._breakInfo
    end
    return {
        total = 0, -- 总次数
        nComplete = 0, -- 完成次数
        addcnt = 0, -- 奖励数量
        sTip = 0 -- 最低限制
    }
end

function YGiftBankruptcyModule:showAwardInfo()
    local awardInfo = {}
    local breakInfo = self:getBaseLiveInfo()
    if breakInfo.addcnt <= 0 then
        return
    end
    awardInfo.prize_names = {}
    awardInfo.image_urls = {}
    awardInfo.prize_names[#awardInfo.prize_names + 1] = "x" .. breakInfo.addcnt
    awardInfo.image_urls[#awardInfo.image_urls + 1] = "https://palmastatic.wenzhoushuke.com/materials/images/20241009/11044809574.png"
    XH.viewManager:openView("BackActivityAwardView", nil, nil, awardInfo)
end

function YGiftBankruptcyModule:checkAndThrowData(gameID)
    local gold = XH.playerData:getSR()
    if CF and CF.roomData then
        local roomLevel = CF.roomData:getRoomLevel()
        local curLevelInfo = XH.goldConfigManager:getLevelInfo(gameID, roomLevel)
        local info = ""
        if not curLevelInfo then
            info = "数据为空"
        elseif gold < curLevelInfo.minrich then
            info = "已破产"
        end
        if info == "" then
            return
        end
        local params = {
            info = info,
            gameID = gameID,
            roomLevel = roomLevel,
        }
        self:throwData(params)
    end
end

function YGiftBankruptcyModule:throwData(params)
    params = params or {}
    local conventionData = { 
        page = "金币游戏结算",
        page_label = "破产礼包",
        item_id = params.createType or 0,
        game_id = string.format("%d_%d", XH.areaData:getAreaID(), params.gameID or 0),
    }
    -- 构建extraData
    local extraData = {
        source = params.roomLevel or -1,  -- 房间等级
        info = string.format("%s", params.info or ""),      -- info信息
        request_code = params.request_code or "",
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.jblb20260109, conventionData, extraData)
end

return YGiftBankruptcyModule �[  