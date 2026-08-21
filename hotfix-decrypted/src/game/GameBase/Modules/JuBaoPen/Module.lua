local JuBaoPenModule = class("JuBaoPenModule", CF.ModuleBase)
local Define = require("game.GameBase.Modules.JuBaoPen.Define")
local Config = require("game.GameBase.Modules.JuBaoPen.Config")

JuBaoPenModule.EVENT_BTN_VISIBLE = "EVENT_BTN_VISIBLE"
JuBaoPenModule.EVENT_ADD_JUBAOPEN_ITEM = "EVENT_ADD_JUBAOPEN_ITEM"
JuBaoPenModule.EVENT_UPDATE_YS = "EVENT_UPDATE_YS"
JuBaoPenModule.EVENT_START_LOTTERY = "EVENT_START_LOTTERY"
JuBaoPenModule.EVENT_ITEM_ACTIVE = "EVENT_ITEM_ACTIVE"
JuBaoPenModule.EVENT_PLAY_TITLE_ANI = "EVENT_PLAY_TITLE_ANI"
JuBaoPenModule.EVENT_PLAY_JI_ANI = "EVENT_PLAY_JI_ANI"
JuBaoPenModule.EVENT_TIEM_EXPIRE = "EVENT_TIEM_EXPIRE"
JuBaoPenModule.EVENT_UPDATE_ITEM_POS = "EVENT_UPDATE_ITEM_POS"

local KeyPlaceItemId = "KeyPlaceItemId_%d"


function JuBaoPenModule:ctor()
    JuBaoPenModule.super.ctor(self)

    self._myData = {}
    self._tagData = {}
    self._tagOldData = {}
    self._price1 = 100
    self._price5 = 450
    self._discount = 90
    self._lotteryResult = {}
    self._titleLevel = 0
    self._oldTitleLevel = 0
    self._oldPlaceItem = 0

    self._oldqcyYS = -1
    self._oldbcsYS = -1

    self._qcyYS = -1
    self._bcsYS = -1

    self:reqJuBaoPen(Define.TreasureActType.TATClean)
end

function JuBaoPenModule:getProxyEvents()
    return {
        {module = CF.game:getModule("CaiYunPropNew"), eventKeyName = "EVENT_UPDATE_CAIYUN_INFO", callBack = "updateQCY"},
        {module = CF.game:getModule("CaiYunProp"), eventKeyName = "EVENT_PROP_GET_LEFTTIME", callBack = "updateBCS" },
    }
end

function JuBaoPenModule:getReqConfig()
    return {
        ReqJuBaoPen = { reqPath = "lobby.Req.CaiYunPropNew.ReqJuBaoPen", callBack = self.onRespJuBaoPen },
    }
end

function JuBaoPenModule:reqJuBaoPen(opt)
    self:startReq("ReqJuBaoPen", { opt = opt }) 
end

function JuBaoPenModule:onRespJuBaoPen(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if not data then
            return
        end
        if data.opt == Define.TreasureActType.TATGet then
            self:updateData(data)
        elseif data.opt == Define.TreasureActType.TATOnce or data.opt == Define.TreasureActType.TATFive or data.opt == Define.TreasureActType.TATContinue then   
            self._price1 = data.curOncePrice
            self._price5 = data.curFivePrice
            self._discount = data.curFiveDiscount or 9
            self._lotteryResult = data.treasureList
            self:updateTagData(data.treasureList)
            CF.selfPlayerData:flushPlayerDrop()
            local str = ""
            local ok, msg = pcall(function()
                str = cjson.encode(self._lotteryResult)
            end)
            local isOnce = data.opt == Define.TreasureActType.TATOnce
            self:thowData(isOnce and XH.NewThrowDataDefine.dj25090504 or XH.NewThrowDataDefine.dj25090506, {page_item_id = "", block_item_id = str})
        elseif data.opt == Define.TreasureActType.TATClean then
            self:updateData(data)
        end
    end
end

function JuBaoPenModule:updateData(data)
    self._myData = data.treasureList
    self._price1 = data.curOncePrice
    self._price5 = data.curFivePrice
    self._discount = data.curFiveDiscount or 9
    self:updateTitleLevel()
    self:updateExpireTime()
    self:startSchedule()
    self:updateYS()
    self:updatePlaceItemState()
    self:updateTagData(data.treasureList)
end

function JuBaoPenModule:updateTitleLevel()
    self._oldTitleLevel = self._titleLevel
    self._titleLevel = self:getTitleLevel()
end

function JuBaoPenModule:startSchedule()
    if self._refreSchedule == nil and #self._myData > 0  then
        self._refreSchedule = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
            self:updateTime()
        end, 1, false)
    end
end

function JuBaoPenModule:onDestroy()
    if self._refreSchedule ~= nil then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._refreSchedule)
        self._refreSchedule = nil
    end
    JuBaoPenModule.super.onDestroy(self)
end

function JuBaoPenModule:updateExpireTime()
    local now = XH.lobby:getModule("Shop"):getServerTime()
    for k, v in pairs(self._myData) do
        v.expireTime = math.max(v.expireTime - now, 0)
    end
end

function JuBaoPenModule:updateTime()
    local i = 1

    local expire = {}
    while i <= #self._myData do
        local v = self._myData[i]
        v.expireTime = math.max(v.expireTime - 1, 0)
        
        if v.expireTime == 0 then
            -- 移除过期元素
            table.remove(self._myData, i)
            expire[#expire+1] = v.treasureId
            -- 不移动 i，因为下一个元素会占据当前的位置
        else
            -- 只有不移除元素时才增加 i
            i = i + 1
        end
    end
    if #expire > 0 then
        local placeItem = self:getPlaceItem()
        for k,v in pairs(expire) do
            if v == placeItem then
                self._oldPlaceItem = v
                self:setPlaceItem(0)
            end
        end
        self:dispatchEvent({name = self.EVENT_TIEM_EXPIRE, expire = expire})
    end
end

function JuBaoPenModule:updateItemPos(pos)
    self:dispatchEvent({name = self.EVENT_UPDATE_ITEM_POS, pos = pos})
end

function JuBaoPenModule:getMyDataById(id)
    for i, v in ipairs(self._myData) do
        if id == v.treasureId then
            return v
        end
    end
    return nil
end

function JuBaoPenModule:getMyData()
    return self._myData
end

function JuBaoPenModule:getConfigById(id)
    local config = Config.ITEM_CONFIG
    for i, v in ipairs(config) do
        if id == v.id then
            return v
        end
    end
    return nil
end

function JuBaoPenModule:getJuBaoPenYS()
    local ys = 0
    for k, v in pairs(self._myData) do
        local config = self:getConfigById(v.treasureId)
        if config then
            ys = ys + v.level* config.ys
        end
    end
    return ys
end

function JuBaoPenModule:setPlaceItem(id)
    local playerID = CF.selfPlayerData:getNumberID()
    local key = string.format(KeyPlaceItemId, CF.selfPlayerData:getNumberID())
    cc.UserDefault:getInstance():setIntegerForKey(key, id)

    local config = self:getConfigById(id)
    if config then
        self:dispatchEvent({name = self.EVENT_ADD_JUBAOPEN_ITEM, placeItemIndex = config.index})
    else
        self:dispatchEvent({name = self.EVENT_ADD_JUBAOPEN_ITEM, placeItemIndex = 0})
    end
end

function JuBaoPenModule:getPlaceItem()
    local key = string.format(KeyPlaceItemId, CF.selfPlayerData:getNumberID())
    return cc.UserDefault:getInstance():getIntegerForKey(key, 0)
end

function JuBaoPenModule:getOldPlaceItem()
    return self._oldPlaceItem
end

function JuBaoPenModule:updatePlaceItemState()
    local id = self:getPlaceItem()
    if id == 0 then
        return
    end
    for k, v in pairs(self._myData) do
        if v.treasureId == id then
            local config = self:getConfigById(id)
            if config then
                self:dispatchEvent({name = self.EVENT_ADD_JUBAOPEN_ITEM, placeItemIndex = config.index})
            end
            return
        end
    end
end

function JuBaoPenModule:getPrice1()
    return self._price1
end

function JuBaoPenModule:getPrice5()
    return self._price5
end

function JuBaoPenModule:getDiscount()
    return self._discount / 10
end

function JuBaoPenModule:isQiuCaiYunFull()
    local caiyunInfo = CF.game:getModule("CaiYunPropNew"):getCaiYunInfo()
    if not caiyunInfo or not caiyunInfo.cai_cur or not caiyunInfo.cai_max or not caiyunInfo.yun_cur or not caiyunInfo.yun_max then
        return false
    end
    if caiyunInfo.cai_cur == caiyunInfo.cai_max and caiyunInfo.yun_cur == caiyunInfo.yun_max then
        return true
    end
    return false
end

function JuBaoPenModule:getQiuCaiYunYS()
    local caiyunInfo = CF.game:getModule("CaiYunPropNew"):getCaiYunInfo()
    if not caiyunInfo or not caiyunInfo.cai_cur or not caiyunInfo.cai_max or not caiyunInfo.yun_cur or not caiyunInfo.yun_max then
        return 0
    end
    if caiyunInfo.cai_cur == caiyunInfo.cai_max and caiyunInfo.yun_cur == caiyunInfo.yun_max then
        return (caiyunInfo.cai_cur or 0) + (caiyunInfo.yun_cur or 0) + 1334
    end
    return (caiyunInfo.cai_cur or 0) + (caiyunInfo.yun_cur or 0)
end

function JuBaoPenModule:getQingCaiShenYS()
    local leftTime = CF.game:getModule("CaiYunProp"):getSelfLeftTime()
    if leftTime <= 0 then
        return 0
    end
    return math.ceil(leftTime / 3600) * 188
end

function JuBaoPenModule:getTotalYS()

    local jbpYS = self:getJuBaoPenYS()
    local qcyYS = self:getQiuCaiYunYS()
    local qcsYS = self:getQingCaiShenYS()

    return jbpYS + qcyYS + qcsYS
end

function JuBaoPenModule:getOldTitleLevel()
    return self._oldTitleLevel
end

function JuBaoPenModule:getTitleLevel()
    local ys = self:getTotalYS()
    local config = Config.YS_TITLE_CONFIG
    for i, v in ipairs(config) do
        if ys <= v.ysEnd and ys >= v.ysStart then
            return v.index
        end
    end
    return 0
end

function JuBaoPenModule:getTitleText()
    local ys = self:getTotalYS()
    local config = Config.YS_TITLE_CONFIG
    for i, v in ipairs(config) do
        if ys <= v.ysEnd and ys >= v.ysStart then
            return v.title
        end
    end
    return "初露锋芒"
end

function JuBaoPenModule:updateQCY()

    self:updateYS()

    self._oldqcyYS = self._qcyYS
    self._qcyYS = self:getQiuCaiYunYS()
    if self._oldqcyYS == -1 then
        self:updateTitleLevel()
    end
    self:updateTitleLevel()
end

function JuBaoPenModule:updateBCS()

    self:updateYS()

    self._oldbcsYS = self._bcsYS
    self._bcsYS = self:getQingCaiShenYS()
    if self._oldbcsYS == -1 then
        self:updateTitleLevel()
    end
    self:updateTitleLevel()
end

function JuBaoPenModule:updateYS()
    self:dispatchEvent({name = self.EVENT_UPDATE_YS})
end

function JuBaoPenModule:active()
    self:dispatchEvent({name = self.EVENT_ITEM_ACTIVE})
end

function JuBaoPenModule:playJiAnimation()
    self:dispatchEvent({name = self.EVENT_PLAY_JI_ANI, isPlay = true})
end

function JuBaoPenModule:playTitleAnimation()
    local titleLevel = self:getTitleLevel()
    local oldTitleLevel = self:getOldTitleLevel()
    if titleLevel > oldTitleLevel then
        self:dispatchEvent({name = self.EVENT_PLAY_TITLE_ANI, titleLevel = titleLevel})
        self:updateTitleLevel()
    end
end

function JuBaoPenModule:updateTagData(data)
    for k, v in pairs(self._tagData) do
        self._tagOldData[v.treasureId] = v
    end
    for k, v in pairs(data) do
        self._tagData[v.treasureId] = v
    end
end

function JuBaoPenModule:isOldLevelMax(id)
    for k, v in pairs(self._tagOldData) do
        if id == k then
            return v.level == Define.MAX_LEVEL
        end
    end
    return false
end

function JuBaoPenModule:getLotteryTagById(id)
    for k, v in pairs(self._tagData) do
        if id == k then
            if v.level == Define.MAX_LEVEL then
                return Config.Tag.Max
            elseif v.level == 1 then
                return Config.Tag.New
            end
        end
    end
    return Config.Tag.Upgrade
end

function JuBaoPenModule:startLottery(opt)
    self:dispatchEvent({name = self.EVENT_START_LOTTERY, opt = opt})
end

function JuBaoPenModule:getLotteryResult()
    return self._lotteryResult
end

function JuBaoPenModule:roomType()
    if CF and CF.roomData and CF.roomData:isBoxRoom() and CF.teaHouseManager and CF.teaHouseManager:isInTeaHouse() then
        return '比赛场'
    end
    return '好友房'
end

function JuBaoPenModule:thowData(key, data)
    if data == nil then
        data = {}
    end
    data.page = self:roomType()
    XH.NewThrowDataManager:throwData(key, data)
end

return JuBaoPenModule
�/  