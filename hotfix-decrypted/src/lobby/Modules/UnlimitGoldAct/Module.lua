local UnlimitGoldActModule = class("UnlimitGoldActModule", XH.ModuleBase)
local UnlimitGoldActConfig = require("src.lobby.Modules.UnlimitGoldAct.Config")

UnlimitGoldActModule.FLUSH_ACT_INFO = "FLUSH_ACT_INFO"
UnlimitGoldActModule.JOIN_GOLD_ROOM = "JOIN_GOLD_ROOM"

function UnlimitGoldActModule:ctor()
    UnlimitGoldActModule.super.ctor(self)
    self._aid = nil
    self._aidRealInfo = nil
    self._actDetail = nil
end

function UnlimitGoldActModule:subjectLoginCallBack()
    self._aid = nil
    self._aidRealInfo = nil
    self._actDetail = nil
end

function UnlimitGoldActModule:getReqConfig()
    return {
        ReqActDetail = { reqPath = "lobby.Req.LuckTask.ReqActDetail", callBack = self.respActDetail },
        ReqActInfo = { reqPath = "lobby.Req.Act.RedWuXianJinBiInfo", callBack = self.respActInfo },
        ReqAddGoldCoin = { reqPath = "lobby.Req.Act.RedWuXianJinBiOpt", callBack = self.respAddGoldCoin },
        ReqJoinFreeAct = { reqPath = "lobby.Req.Act.RedWuXianJinBiOpt", callBack = self.respJoinFreeAct },
    }
end

-- 获取详细任务
function UnlimitGoldActModule:reqActDetail()
    if self._aid == nil then
        return
    end
    self:startReq("ReqActDetail", self._aid, 10)
end

function UnlimitGoldActModule:respActDetail(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data and data.res and data.res.special then
            local ok, res_tab = pcall(cjson.decode, data.res.special)
            if ok and res_tab then
                self._actDetail = res_tab
            end
        end
    end
    self:dispatchEvent({ name = self.FLUSH_ACT_INFO })
end

function UnlimitGoldActModule:getActDetail()
    return self._actDetail
end

function UnlimitGoldActModule:getActInfo()
    return self._aidRealInfo
end

-- 是否为无限金币的购买礼包
function UnlimitGoldActModule:isPayWithGift(msg)
    if not msg then
        return false
    end
    local data = msg.productInfo
    if data and data.productId then
        if data.productId == UnlimitGoldActConfig.PRODUCT then
            XH.TipTool.showToast("购买成功")
            XH.SysTool.performDelayOnce(function()
                self:reqActInfo(true)
            end, 2)
            return true
        end
    end
    return false
end

-- 是否支持使用
function UnlimitGoldActModule:isSupportUse(roomInfo, level, confID)
    local supportGameId = false
    local gameId = 30579
    local minrich = 1000
    if roomInfo and roomInfo.roomInfo and roomInfo.roomInfo.GameID then
        gameId = tonumber(roomInfo.roomInfo.GameID)
    end
    local goldNum = 10000
    if self._actDetail and self._actDetail.bzjbsl then
        goldNum = tonumber(self._actDetail.bzjbsl)
    end
    local curLevelInfo = XH.goldConfigManager:getLevelInfo(gameId, level)
    if curLevelInfo then
        minrich = curLevelInfo.minrich
    end
    if self._actDetail and self._actDetail.gameid then
        for _, v in pairs(self._actDetail.gameid) do
            if v == gameId then
                supportGameId = true
                break
            end
        end
    end
    -- local allJsonData = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    -- if not allJsonData or not allJsonData.UnLimitGoldAct then
    --     return false
    -- end
    -- local unLimitGoldActConfig = allJsonData.UnLimitGoldAct
    -- if roomInfo and roomInfo.roomInfo and roomInfo.roomInfo.GameID then
    --     for k, v in pairs(unLimitGoldActConfig) do
    --         if tonumber(k) == tonumber(roomInfo.roomInfo.GameID) then
    --             for i = 1, #v do
    --                 if v[i] == level then
    --                     return true
    --                 end
    --             end
    --         end
    --     end
    -- end
    -- return false
    return level%10 == 1 and supportGameId and goldNum > minrich
end

function UnlimitGoldActModule:flushAids(data)
    self:subjectLoginCallBack()
    local aid
    for _, info in pairs(data.act) do
        if info.type == UnlimitGoldActConfig.ACT and self:isInActTimeAllTime(info) then
            if aid == nil then
                aid = info.aid
            elseif info.aid < aid then
                aid = info.aid
            end
        end
    end
    if aid ~= nil then
        self._aid = aid
        self:reqActDetail()
        self:reqActInfo(false)
    end
end

-- 判断活动是否在线
function UnlimitGoldActModule:isInActTimeAllTime(info)
    if not info then
        return false
    end
    local time = XH.lobby:getModule("Shop"):getServerTime()
    if time < tonumber(info["end"]) and time > tonumber(info.start) then
        return true
    end
    return false
end

-- 获取激活剩余时间，同时也是用来判断能否参加活动
-- type 0已购买 1未购买(包括未激活) 2(包括0和1) （未激活需要判断是否已主动激活）
-- 已购买倒计时 未购买未激活 未购买已激活
function UnlimitGoldActModule:getRemainTime(type)
    if self._aidRealInfo == nil then
        return -1
    end
    if self._aidRealInfo.status == 0 then
        return -1
    end
    local time = XH.lobby:getModule("Shop"):getServerTime()
    local remainTimeA = self._aidRealInfo.propEndtime - time
    local remainTimeB = self._aidRealInfo.mrgmjssj - time
    if type == 0 then
        -- 取活动信息已购买
        if self._aidRealInfo.status == 3 or self._aidRealInfo.status == 4 then
            if self._aidRealInfo.propCnt == 0 then
                return -1
            end
            return remainTimeA
        end
        return -1
    elseif type == 1 then
        -- 取活动信息时间
        if self._aidRealInfo.status ~= 3 and self._aidRealInfo.status ~= 4 then
            return remainTimeB
        end
        return -1
    elseif type == 2 then
        -- 取0和1的时间
        if self._aidRealInfo.status == 3 or self._aidRealInfo.status == 4 then
            if self._aidRealInfo.propCnt == 0 then
                return -1
            end
            return remainTimeA
        end
        return remainTimeB
    end
    return -1
end

-- 获取剩余次数
function UnlimitGoldActModule:getLeftCnt()
    if self._aidRealInfo then
        return self._aidRealInfo.propCnt
    end
    return 0
end

-- 请求活动信息
function UnlimitGoldActModule:reqActInfo(isShowLoading, type)
    if isShowLoading then
        XH.TipTool.showLoading()
    end
    local data = {
        act_id = self._aid,
        type = type or 0
    }
    self:startReq("ReqActInfo", data)
end

function UnlimitGoldActModule:isMax()
    if self._actDetail == nil then
        return false
    end
    if self._aidRealInfo.status == 3 then
        return tonumber(self._aidRealInfo.propCnt) >= tonumber(self._actDetail.wxjbtyksycs)
    elseif self._aidRealInfo.status == 4 then
        return tonumber(self._aidRealInfo.propCnt) >= tonumber(self._actDetail.wxjbksycs)
    end
    return false
end

function UnlimitGoldActModule:respActInfo(cell, type, data)
    XH.TipTool.hideLoading()
    local lastState = nil
    if self._aidRealInfo ~= nil then
        lastState = self._aidRealInfo.status
    end
    self._aidRealInfo = nil
    if type == XH.Req.TYPE.SUCCESS then
        -- todo
        self._aidRealInfo = data
        -- 服务控制弹窗
        local time = XH.lobby:getModule("Shop"):getServerTime()
        if CF and CF.roomData and CF.isInGameScene() and not XH.viewManager:isViewExist("UnLimitGoldActView") and (self._aidRealInfo.status == 1 or self._aidRealInfo.status == 2) and self._aidRealInfo.mrgmjssj > time then
            XH.viewManager:openView("UnLimitGoldActView", nil, { inGame = self._isReqInGame })
        end
        if self._aidRealInfo.status == 0 and self._aidRealInfo.mrgmjssj > time then
            if 150768 == self._aidRealInfo.propId then
                self._aidRealInfo.status = 1 -- 免费
            else
                self._aidRealInfo.status = 2
            end
        end
        -- 如果次数是满额并且UI界面存在的话，视为第一次 判断这时候是否在游戏区里，在游戏区里直接领奖并进入
        if CF and CF.roomData and CF.isInGameScene() and self:getRemainTime(0) > 0 and self:isMax() and (lastState ~= 3 and lastState ~= 4) then
            local confId = XH.goldConfigManager:getConfIDByGameID(CF.roomData:getGameID(), CF.roomData:getChairs())
            local roominfo = XH.lobby:getModule("GoldNew"):getGoldRoomInfoByLeisureID(confId)
            local session_id = CF.roomData:getRoomLevel()
            local playerSR = XH.playerData:getSR() or 0
            if roominfo and roominfo.roomInfo and roominfo.roomLevelInfos and roominfo.roomLevelInfos[session_id] and roominfo.roomLevelInfos[session_id].minrich > 0 and playerSR < roominfo.roomLevelInfos[session_id].minrich then
                self._roomInfo = roominfo
                self._level = session_id
                self._confID = confId
                self:reqAddGoldCoin()
            end
        end
    end
    if self._isReqInGame and CF and CF.roomData and CF.isInGameScene() and not XH.viewManager:isViewExist("UnLimitGoldActView") then
        -- local lobbyId = CF.areaData:getLobbyID()
        -- local level = cc.UserDefault:getInstance():getIntegerForKey("_KW_DATA_LAST_JOIN_GOLD_LEVEL_" .. lobbyId)
        -- CF.viewManager:openView("GoldBankruptcyView", nil, { gameID = CF.roomData:getGameID(), goldNotEnough = true, roomFlag = level })
        self:doPopCallBack()
    end
    self._isReqInGame = nil
    self:dispatchEvent({ name = self.FLUSH_ACT_INFO })
end

-- 请求补足金币
function UnlimitGoldActModule:reqAddGoldCoin()
    XH.TipTool.showLoading()
    local data = {
        act_id = self._aid,
        opt = 1
    }
    self:startReq("ReqAddGoldCoin", data)
end

function UnlimitGoldActModule:respAddGoldCoin(cell, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self:flushGoldCoinAni()
        XH.viewManager:closeView("UnLimitGoldActView")
        self:reqActInfo(false)
    else
        XH.TipTool.showToast("领奖异常，请重试")
    end
end

-- 请求触发免费
function UnlimitGoldActModule:reqJoinFreeAct()
    XH.TipTool.showLoading()
    local data = {
        act_id = self._aid,
        opt = 0
    }
    self:startReq("ReqJoinFreeAct", data)
end

function UnlimitGoldActModule:respJoinFreeAct(cell, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        XH.TipTool.showToast("领取成功")
        self:reqActInfo(true)
        XH.viewManager:closeView("UnLimitGoldActView")
    else
        XH.TipTool.showToast("免费领取异常，请重试")
    end
end

-- 判断是否补足金币
-- 首次获得时
-- 结算界面点击继续时
-- 进房时（大厅快速进入，房间列表点击入口）
function UnlimitGoldActModule:judgeIsFullGold(roomInfo, level, confID)
    if not self:isSupportUse(roomInfo, level, confID) then
        return false
    end
    if self:getRemainTime(0) > 0 then
        self._roomInfo = roomInfo
        self._level = level
        self._confID = confID
        self:reqAddGoldCoin()
        return true
    end
    -- 判断是否能够触发
    return false
end

-- 破产礼包关闭后进入，判断是否推送弹窗
function UnlimitGoldActModule:judgeIsShowPopAct(popCallBack)
    self._popCallBack = popCallBack
    if CF and CF.roomData and CF.isInGameScene() then
        local confId = XH.goldConfigManager:getConfIDByGameID(CF.roomData:getGameID(), CF.roomData:getChairs())
        local roominfo = XH.lobby:getModule("GoldNew"):getGoldRoomInfoByLeisureID(confId)
        local session_id = CF.roomData:getRoomLevel()
        if self:isSupportUse(roominfo, session_id, confId) then
            self._isReqInGame = true
            self:reqActInfo(false, 1)
            return true
        end
    end
    -- -- 判断是否满足活动，且未开始
    -- if self:getRemainTime(1) <= 0 then
    --     return false
    -- end
    -- -- 对局次数间隔 todo 配置
    -- local midTime = 4
    -- -- 每日推送最大次数 todo 配置
    -- local maxPopTime = 4
    -- local todayMidTimes = XH.userDefault:getValue(XH.userDefault.KEY_ID.UM_LIMIT_GOLD_POP_TIMES, 0)
    -- local todayPopTimes = XH.userDefault:getValue(XH.userDefault.KEY_ID.UN_LIMIT_GOLD_POP_SMALL_TIMES, 0)
    -- XH.userDefault:setValue(XH.userDefault.KEY_ID.UN_LIMIT_GOLD_POP_SMALL_TIMES, todayPopTimes + 1)
    -- if todayMidTimes == 0 then
    --     XH.userDefault:setValue(XH.userDefault.KEY_ID.UM_LIMIT_GOLD_POP_TIMES, 1)
    --     XH.userDefault:setValue(XH.userDefault.KEY_ID.UN_LIMIT_GOLD_POP_SMALL_TIMES, 0)
    --     XH.viewManager:openView("UnLimitGoldActView", nil, {})
    --     return true
    -- else
    --     if todayMidTimes >= maxPopTime then
    --         return false
    --     end
    --     if todayPopTimes < midTime then
    --         return false
    --     end
    --     XH.viewManager:openView("UnLimitGoldActView", nil, {})
    --     XH.userDefault:setValue(XH.userDefault.KEY_ID.UM_LIMIT_GOLD_POP_TIMES, todayMidTimes + 1)
    --     XH.userDefault:setValue(XH.userDefault.KEY_ID.UN_LIMIT_GOLD_POP_SMALL_TIMES, 0)
    --     return true
    -- end
    return false
end

-- 刷卡机 顺便刷新金币
function UnlimitGoldActModule:flushGoldCoinAni()
    XH.playerData:flushGoldCoin()
    local propID = 150767
    if self._aidRealInfo then
        propID = self._aidRealInfo.propId
    end
    self:dispatchEvent({ name = self.JOIN_GOLD_ROOM })
    XH.viewManager:openView("GoldEnterCardView", nil, { propId = propID, originCount = self:getLeftCnt(), confID = self._confID, level = self._level })
end

function UnlimitGoldActModule:getGameID()
    if CF and CF.roomData and CF.roomData:getGameID() then
        return CF.roomData:getGameID()
    end
    local quickStartInfo = XH.Bridge:getModule("GoldNew"):getQuickStartRoomInfo()
    if quickStartInfo then
        local roomConf = XH.Bridge:getModule("GoldNew"):getGoldRoomInfoByLeisureID(quickStartInfo.ConfID)
        if roomConf and roomConf.roomInfo and roomConf.roomInfo.GameID then
            return roomConf.roomInfo.GameID
        end
    end
    return 30579
end

function UnlimitGoldActModule:doPopCallBack()
    if self._popCallBack then
        self._popCallBack()
    else
        local lobbyId = CF.areaData:getLobbyID()
        local level = cc.UserDefault:getInstance():getIntegerForKey("_KW_DATA_LAST_JOIN_GOLD_LEVEL_" .. lobbyId)
        CF.viewManager:openView("GoldBankruptcyView", nil, { gameID = CF.roomData:getGameID(), goldNotEnough = true, roomFlag = level })
    end
end

return UnlimitGoldActModule�:  