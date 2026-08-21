local CaiYunAniModule = CF.gameClass("CaiYunAniModule", CF.ModuleBase)
local CaiYunPropNewConfig = CF.gameRequire("Modules.CaiYunPropNew.Config")
local TaskDefine = require("app.Define.TaskDefine")

CaiYunAniModule.EVENT_PLAY_JINLONG_ANI = "EVENT_PLAY_JINLONG_ANI"   -- 玩家使用金龙道具时，播放的金龙动画
CaiYunAniModule.EVENT_PLAY_JINLONG_ANI2 = "EVENT_PLAY_JINLONG_ANI2" -- 牌上金龙动画
CaiYunAniModule.EVENT_PLAY_CAIYUN_FULL_ANI = "EVENT_PLAY_CAIYUN_FULL_ANI"   -- 财运满时头像上动画
CaiYunAniModule.EVENT_PLAY_ADD_CAIYUN = "EVENT_PLAY_ADD_CAIYUN"     -- 增加财运数字以及头像上运势动画
CaiYunAniModule.EVENT_UPDATE_TIPS = "EVENT_UPDATE_TIPS"

function CaiYunAniModule:ctor()
    CaiYunAniModule.super.ctor(self)
    self._caiFull = {}
    self._yunFull = {}
    self._headNodeInfo = {}
    self._systemTime = os.time()
    self._jinlongAniData = {}
    --提示配置数据
    self._tipsCfg = {
        tip = "新道具",
        loseTips = "换换手气",
        dayCd = 7 ,
        smallCd = math.random(3,5) ,
        localKey = "PRAY_TIPS_LOCAL_KEY_" --下次要更新新道具  把这个值重置下
    }
    self._isShowTips = false -- 是否展示tips
    self._tipsString = ''    -- 展示的tips文字
    self:readTipsLocalStoage()
end

function CaiYunAniModule:getSubXYDealList()
    return {
        {callback = handler(self,self.onMsgClientForwardBase),msgClass = CF.GameProtocol.msgBaseClientForwardEx},
    }
end

function CaiYunAniModule:getProxyEvents()
    return {
        {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_SHUFFLE_TIP_WIN_AND_LOST", callBack = "onWinLost"},
    }
end

function CaiYunAniModule:onMsgClientForwardBase(msgData)
    if msgData.sID == CaiYunPropNewConfig.CF_ID.JinLongTimestamp then
        self:onMsgClientForwardJinlongTime(msgData)
    elseif msgData.sID == CaiYunPropNewConfig.CF_ID.CaiYunInfo then
        self:onMsgClientForwardCaiYunFull(msgData)
    elseif msgData.sID == CaiYunPropNewConfig.CF_ID.AddCaiYun then
        self:onMsgClientForwardAddCaiYun(msgData)
    end
end

function CaiYunAniModule:onMsgClientForwardJinlongTime( msgData )
    local strJinlongTime = CF.StringTool.getTableByString(msgData.strData,";","=")
    local localSeat = CF.roomData:seatToLocal(msgData.sSeat)
    local jinlongTime = tonumber(strJinlongTime["jinlongtime"]) or 0
    local jinfengTime = tonumber(strJinlongTime["jinfengtime"]) or 0

    local aniType
    if jinlongTime > 0 or jinfengTime > 0 then
        if jinlongTime > 0 and jinfengTime > 0 then
            aniType = CaiYunPropNewConfig.ANI_TYPE.longfeng
        elseif jinlongTime > 0 then
            aniType = CaiYunPropNewConfig.ANI_TYPE.jinlong
        elseif jinfengTime > 0 then
            aniType = CaiYunPropNewConfig.ANI_TYPE.jinfeng
        end
    end
    if aniType then
        self._jinlongAniData[localSeat] = aniType
    end
end

function CaiYunAniModule:onMsgClientForwardCaiYunFull(msgData)
    local strCaiYunFull = CF.StringTool.getTableByString(msgData.strData,";","=")
    local localSeat = CF.roomData:seatToLocal(msgData.sSeat)
    local caiFull = tonumber(strCaiYunFull["caiFull"]) or 0
    local yunFull = tonumber(strCaiYunFull["yunFull"]) or 0
    -- 局中续时/断线重连，不需要立即播放
    -- if self._caiFull[localSeat] == caiFull and self._yunFull[localSeat]==yunFull then
    --     return
    -- end
    self._caiFull[localSeat] = caiFull
    self._yunFull[localSeat] = yunFull
    self:dispatchEvent( { name = self.EVENT_PLAY_CAIYUN_FULL_ANI, msg = {localSeat = localSeat}})
end

function CaiYunAniModule:onMsgClientForwardAddCaiYun(msgData)
    local strCaiYunFull = CF.StringTool.getTableByString(msgData.strData,";","=")
    if msgData.sSeat == CF.roomData:getSelfSeat() then
        return
    end
    local localSeat = CF.roomData:seatToLocal(msgData.sSeat)
    local propid = tonumber(strCaiYunFull["propid"]) or 0
    local caiCount = tonumber(strCaiYunFull["caiCount"]) or 0
    local yunCount = tonumber(strCaiYunFull["yunCount"]) or 0
    local msg = {localSeat = localSeat, caiCount = caiCount, yunCount = yunCount}
    if CF.game:getModule("CaiYunPropNew"):isLong(propid) then
        msg.propid = propid
        self:dispatchEvent( { name = self.EVENT_PLAY_JINLONG_ANI, msg = msg})
    else
        self:dispatchEvent( { name = self.EVENT_PLAY_ADD_CAIYUN, msg = msg})
    end
end

function CaiYunAniModule:onUpdateAni()
    if CF.roomData and CF.roomData:getIsGameStart() then
        for k,v in pairs(self._jinlongAniData) do
            self:dispatchEvent( { name = self.EVENT_PLAY_JINLONG_ANI2, msg = {localSeat = k, aniType = v}})
        end
    end
end

-- 玩家头像结点信息
function CaiYunAniModule:updatePlayerHead(node, localSeat)
    self._headNodeInfo[localSeat] = node
end

function CaiYunAniModule:getHeadNode(localSeat)
    if localSeat and self._headNodeInfo then
        return self._headNodeInfo[localSeat]
    end
    return nil
end

function CaiYunAniModule:getCaiFull(localSeat)
    return self._caiFull[localSeat]
end

function CaiYunAniModule:getYunFull(localSeat)
    return self._yunFull[localSeat]
end

-- 服务器时间同步
function CaiYunAniModule:RequestSysTime()
    CF.reqTaskPercentById(TaskDefine.KW_SYSTEM_TIME, self, self.onReqTaskPercentCallBack)
end

function CaiYunAniModule:onReqTaskPercentCallBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._systemTime = json.decode(data.acData).time or os.time()
        self:startSchedule()
    end
end

function CaiYunAniModule:refreshTime()
    self._systemTime = self._systemTime + 1
end

function CaiYunAniModule:getSysTime()
    return self._systemTime or os.time()
end

function CaiYunAniModule:startSchedule()
    if self._refreshTime ~= nil then
        return
    end
    if self._refreshTime then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._refreshTime)
    end
    self._refreshTime = nil
    self:refreshTime()
    self._refreshTime = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        self:refreshTime()
    end, 1, false)
end

function CaiYunAniModule:onDestroy()
    CaiYunAniModule.super.onDestroy(self)
    self:removeTimeScheduler()
    self:removeJinlongScheduler()
end

function CaiYunAniModule:removeTimeScheduler()
    if self._refreshTime then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._refreshTime)
    end
end

function CaiYunAniModule:removeJinlongScheduler()
    if self._jinlongAniScheduler then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._jinlongAniScheduler)
    end
    self._jinlongAniScheduler = nil
end

function CaiYunAniModule:startJinglongSchedule()
    self._jinlongAniScheduler = cc.Director:getInstance():getScheduler():scheduleScriptFunc(handler(self, self.onUpdateAni), 60, false)
end

-- 初始化提示数据
function CaiYunAniModule:readTipsLocalStoage()
    local cfgJson = cc.UserDefault:getInstance():getStringForKey(self._tipsCfg.localKey .. CF.selfPlayerData:getNumberID(), "{}")
    local cfgTable = {}
    local ok, msg = pcall(function()
        cfgTable = cjson.decode(cfgJson)
    end)
    -- 本地记录数据
    self._localData = {
        showDays = cfgTable.showDays or 0,
        showDaysTime = cfgTable.showDaysTime or '',
        smallCd = cfgTable.smallCd or 0,
        isTouch = cfgTable.isTouch or false,
    }
end

function CaiYunAniModule:showTipsLogic()
    local day = os.date("%Y%m%d", os.time())
    --  隔天增加天数
    if day ~= self._localData.showDaysTime then
        self._localData.showDays = self._localData.showDays + 1
        self._localData.showDaysTime = day
    end
    
    if self._localData.isTouch == false and self._localData.showDays < self._tipsCfg.dayCd then 
        -- 展示新道具
        self._isShowTips = true
        self._tipsString = self._tipsCfg.tip
        self:dispatchEvent({name = self.EVENT_UPDATE_TIPS})  
    end

   self:saveTipsLocalStrage()
end

-- 接受小结束的数据
function CaiYunAniModule:onWinLost(event)
    if event and event.msg then
        local score = event.msg.score
        self:onGameEnd()
        if (self._localData.isTouch == true or self._localData.showDays > self._tipsCfg.dayCd) and score < 0 and self._localData.smallCd <= 0 and CF.roomData:getPlayCount() < CF.roomData:getMaxPlayCount() then
            -- 展示换换手气
            self._isShowTips = true
            self._tipsString = self._tipsCfg.loseTips
            self._localData.smallCd = self._tipsCfg.smallCd
            self:dispatchEvent({name = self.EVENT_UPDATE_TIPS})
        end
    end
end

function CaiYunAniModule:saveTipsLocalStrage()
    -- 保存数据为json
    local cfgJson = "{}"
    local ok, msg = pcall(function()
        cfgJson = cjson.encode(self._localData)
    end)
    cc.UserDefault:getInstance():setStringForKey(self._tipsCfg.localKey .. CF.selfPlayerData:getNumberID(), cfgJson)
    cc.UserDefault:getInstance():flush()
end

function CaiYunAniModule:getSelfSeat()
	for i = 0, CF.roomData:getMaxPlayer() - 1 do
	   local playerData = CF.roomData:getTempPlayerDataBySeatId(i)
	   if playerData and playerData:getNumberID() == CF.selfPlayerData:getNumberID() then
		   return playerData:getSeat()
	   end
   end
   return CF.roomData:getMaxPlayer()
end

function CaiYunAniModule:hideTips()
    -- 如果是没有点击的情况下 不进行隐藏
    if self._localData.isTouch == false then 
        return
    end
    -- 隐藏提示
    self._isShowTips = false
    self._tipsString = ''
    self:dispatchEvent({name = self.EVENT_UPDATE_TIPS})
end

function CaiYunAniModule:clickPray()
    -- 点击记录
    if self._localData.isTouch == false then
        self._localData.isTouch = true
        self:saveTipsLocalStrage()
    end
    self:hideTips()
end

function CaiYunAniModule:onGameEnd()
    -- 减少小局cd
    if self._localData.smallCd > 0 then
        self._localData.smallCd = self._localData.smallCd - 1
        self:saveTipsLocalStrage()
    end
    self:hideTips()
end

function CaiYunAniModule:getTipsShow()
    return self._isShowTips or CF.game:getModule("CaiYunPropNew.Strategy"):getPrayStrategyID() > 0
end

function CaiYunAniModule:getTipsString()
    if CF.game:getModule("CaiYunPropNew.Strategy"):getPrayStrategyID() > 0 then
        return CF.game:getModule("CaiYunPropNew.Strategy"):getPrayStrategy().name
    end
    return self._tipsString
end

return CaiYunAniModule  B*  