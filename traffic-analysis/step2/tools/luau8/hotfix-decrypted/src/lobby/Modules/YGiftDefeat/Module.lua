local YGiftDefeatModule = class("YGiftDefeatModule", XH.ModuleBase)
-- local YGiftBankruptcyDefine = require("lobby.Modules.YGiftBankruptcy.Define")

YGiftDefeatModule.FLUSH_ACT_INFO = "FLUSH_ACT_INFO"

-- 免败礼包
function YGiftDefeatModule:ctor()
    YGiftDefeatModule.super.ctor(self)
    self._rmbPropsAdd = {} -- 所有付费商品
    self._actInfo = {} -- 基础活动信息
    self._playerInfo = {} -- 具体玩家活动信息
    self._aid = {} -- 活动id
    self._throwDataGameID = 0   -- 抛送数数埋点的gameid
end

function YGiftDefeatModule:getReqConfig()
    return {
        ReqActDetail = { reqPath = "lobby.Req.LuckTask.ReqActDetail", callBack = self.respActDetail },
        ReqDeductibleGift = { reqPath = "lobby.Req.LuckTask.ReqDeductibleGift", callBack = self.respPlayerInfo },
    }
end

function YGiftDefeatModule:setActivityId(aid)
    self._aid[XH.areaData:getSrsGroupID()] = aid
    self:reqActDetail()
    self:reqPlayerInfo()
end

function YGiftDefeatModule:getActivityId()
    return self._aid[XH.areaData:getSrsGroupID()]
end

function YGiftDefeatModule:setPlayerActInfo(info)
    self._playerInfo[XH.areaData:getSrsGroupID()] = info
end

function YGiftDefeatModule:getPlayerActInfo()
    return self._playerInfo[XH.areaData:getSrsGroupID()]
end

function YGiftDefeatModule:setActInfo(info)
    self._actInfo[XH.areaData:getSrsGroupID()] = info
end

function YGiftDefeatModule:getActInfo()
    return self._actInfo[XH.areaData:getSrsGroupID()]
end

function YGiftDefeatModule:setInfo(info)
    self._info[XH.areaData:getSrsGroupID()] = info
end

function YGiftDefeatModule:getInfo()
    return self._info[XH.areaData:getSrsGroupID()]
end

function YGiftDefeatModule:setRoomLevel(roomLevel)
    self._roomLevel = roomLevel
end

function YGiftDefeatModule:getRoomLevel()
    return self._roomLevel
end

-- 为了不破坏原有结构，新增gameid专门用来抛送数数
function YGiftDefeatModule:setThrowDataGameID(gameID)
    if gameID == 30116 then
        gameID = 42038
    end
    self._throwDataGameID = gameID
end

function YGiftDefeatModule:getThrowDataGameID()
    return self._throwDataGameID
end

-- 获取详细任务
function YGiftDefeatModule:reqActDetail()
    if self:getActivityId() == nil then
        return
    end
    if self:getActInfo() ~= nil then
        return
    end
    self:startReq("ReqActDetail", self:getActivityId(), 10)
end

function YGiftDefeatModule:respActDetail(req, type, data)
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

-- 获取玩家活动信息
function YGiftDefeatModule:reqPlayerInfo(isGame, score)
    self._isInGame = isGame
    self._loseScore = score or 0
    if self:getActivityId() == nil then
        return
    end
    self:startReq("ReqDeductibleGift", self:getActivityId(), 10)
end

local lastPeriod = 0
function YGiftDefeatModule:respPlayerInfo(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        local period = 0
        if data.goods and #data.goods > 0 then
            self:setPlayerActInfo(data.goods)
            self:setRoomLevel(data.sessionId)
            self:setThrowDataGameID(data.gameId)
            period = tonumber(data.goods[1].period)
        else
            self:setPlayerActInfo(nil)
        end
        if period ~= lastPeriod and period ~= 0 then 
            lastPeriod = period
            if self._isInGame then
                local gameID = XH.lobby:getModule("YGiftBankruptcy"):gameLastGameID()
                XH.viewManager:closeView("GoldBaseLiveView")
                XH.viewManager:openView("YGiftDefeatView", nil, { gameID = gameID })
            end
        end 
    else
        self:setPlayerActInfo(nil)
    end
    self:dispatchEvent({ name = self.FLUSH_ACT_INFO })
end

return YGiftDefeatModuleq