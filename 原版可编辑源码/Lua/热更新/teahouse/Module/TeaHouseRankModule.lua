---@class TeaHouseRankModule : Module
local TeaHouseRankModule = class("TeaHouseRankModule", TeaHouse.Module)

TeaHouseRankModule.EVENT_COST_RANK_UPDATE = "EVENT_COST_RANK_UPDATE"
TeaHouseRankModule.EVENT_PLAY_COUNT_RANK_UPDATE = "EVENT_PLAY_COUNT_RANK_UPDATE"
TeaHouseRankModule.EVENT_BIG_WINNER_RANK_UPDATE = "EVENT_BIG_WINNER_RANK_UPDATE"
TeaHouseRankModule.EVENT_SCORE_RANK_UPDATE = "EVENT_SCORE_RANK_UPDATE"
TeaHouseRankModule.EVENT_WIN_LOSE_RANK_UPDATE = "EVENT_WIN_LOSE_RANK_UPDATE"
TeaHouseRankModule.EVENT_SELF_COST_RANK_UPDATE = "EVENT_SELF_COST_RANK_UPDATE"
TeaHouseRankModule.EVENT_SELF_PLAY_COUNT_RANK_UPDATE = "EVENT_SELF_PLAY_COUNT_RANK_UPDATE"
TeaHouseRankModule.EVENT_SELF_BIG_WINNER_RANK_UPDATE = "EVENT_SELF_BIG_WINNER_RANK_UPDATE"
TeaHouseRankModule.EVENT_SELF_SCORE_RANK_UPDATE = "EVENT_SELF_SCORE_RANK_UPDATE"
TeaHouseRankModule.EVENT_RANK_VISIBLE_UPDATE = "EVENT_RANK_VISIBLE_UPDATE"
TeaHouseRankModule.EVENT_RANK_CUR_DATE_UPDATE = "EVENT_RANK_CUR_DATE_UPDATE"

function TeaHouseRankModule:onCreate()
    TeaHouseRankModule.super.onCreate(self)

    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespSetRanklistVisible, self, self.onRespSetRanklistVisible)
end

function TeaHouseRankModule:onRespSetRanklistVisible(msgData)
    if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetRanklistVisible.RETVAL.OK then
        TeaHouse.manager.teahouseData:setRankBit(msgData.nVisibleRankBit)
        self:dispatchEvent({ name = self.EVENT_RANK_VISIBLE_UPDATE })
    end
end

function TeaHouseRankModule:onDestroy()
    TeaHouse.manager.netManager:removeEventListener(self)

    TeaHouseRankModule.super.onDestroy(self)
end

local function renqiCfgIsEnable(v)
    if type(v) == "boolean" then
        return v
    elseif type(v) == "number" then
        return v ~= 0
    elseif type(v) == "string" then
        return v == "1" or v == "true"
    end
    return false
end

--- 队友人气榜/点赞：大厅 RenqiRank 配置 + 茶馆未关闭「完成战绩」
function TeaHouseRankModule:isShowRenqiRank()
    local teahouseData = TeaHouse.manager.teahouseData
    if not teahouseData or teahouseData:getCloseFinishBill() then
        return false
    end
    local cfg = XH.lobby:getModule("Configuration"):getAllConfigData("RenqiRank")
    if cfg == nil then
        return false
    end
    if type(cfg) == "boolean" then
        return cfg
    elseif type(cfg) == "number" then
        return cfg ~= 0
    elseif type(cfg) == "string" then
        return cfg == "1" or cfg == "true"
    elseif type(cfg) ~= "table" then
        return false
    end
    local lobbyId = tostring(TeaHouse.BridgeData.getLobbyID() or "")
    local areaId = tostring((XH.areaData and XH.areaData:getAreaID()) or "")
    if cfg[lobbyId] ~= nil then
        return renqiCfgIsEnable(cfg[lobbyId])
    end
    if areaId ~= "" and cfg[areaId] ~= nil then
        return renqiCfgIsEnable(cfg[areaId])
    end
    for _, v in pairs(cfg) do
        if type(v) == "table" then
            local id = tostring(v.lobbyId or v.LobbyID or v.areaId or v.AreaID or v.id or "")
            if id == lobbyId or id == areaId then
                if v.open ~= nil then
                    return renqiCfgIsEnable(v.open)
                elseif v.switch ~= nil then
                    return renqiCfgIsEnable(v.switch)
                else
                    return renqiCfgIsEnable(v.enable)
                end
            end
        end
    end
    return false
end

function TeaHouseRankModule:reqCostRank(startDay, endDay, isFilter)
    TeaHouse.showLoading()
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqRankUserInfo = TeaHouse.manager.reqManager:createReq("NetReqRankUserInfo")
    netReqRankUserInfo:addReqCallBack(self, self.onNetReqRankUserInfoCost)
    netReqRankUserInfo:start(teahouseData:getTeaNumber(), netReqRankUserInfo.RANK_TYPE.COST, startDay, endDay, isFilter, 15)
end

function TeaHouseRankModule:onNetReqRankUserInfoCost(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_COST_RANK_UPDATE, msg = { info = data } })
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showToast("获取消耗排行榜数据失败")
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showToast("获取消耗排行榜数据超时")
    end
end

function TeaHouseRankModule:reqCostRankEx(startDay, endDay, gameID, isFilter)
    TeaHouse.showLoading()
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqRankUserInfo = TeaHouse.manager.reqManager:createReq("NetReqRankUserInfoEx")
    netReqRankUserInfo:addReqCallBack(self, self.onNetReqRankUserInfoCostEx)
    netReqRankUserInfo:start(teahouseData:getTeaNumber(), netReqRankUserInfo.RANK_TYPE.COST, startDay, endDay, isFilter, gameID, 15)
end

function TeaHouseRankModule:onNetReqRankUserInfoCostEx(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_COST_RANK_UPDATE, msg = { info = data } })
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showToast("获取消耗排行榜数据失败")
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showToast("获取消耗排行榜数据超时")
    end
end

function TeaHouseRankModule:reqPlayCountRank(startDay, endDay, isFilter)
    TeaHouse.showLoading()
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqRankUserInfo = TeaHouse.manager.reqManager:createReq("NetReqRankUserInfo")
    netReqRankUserInfo:addReqCallBack(self, self.onNetReqRankUserInfoPlayCount)
    netReqRankUserInfo:start(teahouseData:getTeaNumber(), netReqRankUserInfo.RANK_TYPE.PLAY_COUNT, startDay, endDay, isFilter, 15)
end

function TeaHouseRankModule:onNetReqRankUserInfoPlayCount(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_PLAY_COUNT_RANK_UPDATE, msg = { info = data } })
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showToast("获取局数排行榜数据失败")
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showToast("获取局数排行榜数据超时")
    end
end

function TeaHouseRankModule:reqPlayCountRankEx(startDay, endDay, gameID, isFilter)
    TeaHouse.showLoading()
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqRankUserInfo = TeaHouse.manager.reqManager:createReq("NetReqRankUserInfoEx")
    netReqRankUserInfo:addReqCallBack(self, self.onNetReqRankUserInfoPlayCountEx)
    netReqRankUserInfo:start(teahouseData:getTeaNumber(), netReqRankUserInfo.RANK_TYPE.PLAY_COUNT, startDay, endDay, isFilter, gameID, 15)
end

function TeaHouseRankModule:onNetReqRankUserInfoPlayCountEx(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_PLAY_COUNT_RANK_UPDATE, msg = { info = data } })
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showToast("获取局数排行榜数据失败")
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showToast("获取局数排行榜数据超时")
    end
end

function TeaHouseRankModule:reqScoreRank(startDay, endDay, isFilter)
    TeaHouse.showLoading()
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqRankUserInfo = TeaHouse.manager.reqManager:createReq("NetReqRankUserInfo")
    netReqRankUserInfo:addReqCallBack(self, self.onNetReqRankUserInfoScore)
    netReqRankUserInfo:start(teahouseData:getTeaNumber(), netReqRankUserInfo.RANK_TYPE.SCORE, startDay, endDay, isFilter, 15)
end

function TeaHouseRankModule:onNetReqRankUserInfoScore(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_SCORE_RANK_UPDATE, msg = { info = data } })
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showToast("获取优胜值排行榜数据失败")
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showToast("获取优胜值排行榜数据超时")
    end
end

function TeaHouseRankModule:reqScoreRankEx(startDay, endDay, gameID, isFilter)
    TeaHouse.showLoading()
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqRankUserInfo = TeaHouse.manager.reqManager:createReq("NetReqRankUserInfoEx")
    netReqRankUserInfo:addReqCallBack(self, self.onNetReqRankUserInfoScoreEx)
    netReqRankUserInfo:start(teahouseData:getTeaNumber(), netReqRankUserInfo.RANK_TYPE.SCORE, startDay, endDay, isFilter, gameID, 15)
end

function TeaHouseRankModule:onNetReqRankUserInfoScoreEx(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_SCORE_RANK_UPDATE, msg = { info = data } })
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showToast("获取优胜值排行榜数据失败")
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showToast("获取优胜值排行榜数据超时")
    end
end

function TeaHouseRankModule:reqBigWinnerRank(startDay, endDay, isFilter)
    TeaHouse.showLoading()
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqRankUserInfo = TeaHouse.manager.reqManager:createReq("NetReqRankUserInfo")
    netReqRankUserInfo:addReqCallBack(self, self.onNetReqRankUserInfoBigWinner)
    netReqRankUserInfo:start(teahouseData:getTeaNumber(), netReqRankUserInfo.RANK_TYPE.BIG_WINNER, startDay, endDay, isFilter, 15)
end

function TeaHouseRankModule:onNetReqRankUserInfoBigWinner(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_BIG_WINNER_RANK_UPDATE, msg = { info = data } })
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showToast("获取冠军排行榜数据失败")
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showToast("获取冠军排行榜数据超时")
    end
end

function TeaHouseRankModule:reqBigWinnerRankEx(startDay, endDay, gameID, isFilter)
    TeaHouse.showLoading()
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqRankUserInfo = TeaHouse.manager.reqManager:createReq("NetReqRankUserInfoEx")
    netReqRankUserInfo:addReqCallBack(self, self.onNetReqRankUserInfoBigWinnerEx)
    netReqRankUserInfo:start(teahouseData:getTeaNumber(), netReqRankUserInfo.RANK_TYPE.BIG_WINNER, startDay, endDay, isFilter, gameID, 15)
end

function TeaHouseRankModule:onNetReqRankUserInfoBigWinnerEx(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_BIG_WINNER_RANK_UPDATE, msg = { info = data } })
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showToast("获取冠军排行榜数据失败")
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showToast("获取冠军排行榜数据超时")
    end
end

function TeaHouseRankModule:reqWinLoseRank(startDay, endDay, gameID)
    TeaHouse.showLoading()
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqRankUserInfo = TeaHouse.manager.reqManager:createReq("NetReqSelectTeaBillInfo")
    netReqRankUserInfo:addReqCallBack(self, self.onNetReqSelectTeaBillInfo)
    netReqRankUserInfo:start(teahouseData:getTeaNumber(), -1, 0, nil, gameID, endDay, startDay, nil, 15, 0)
end

function TeaHouseRankModule:onNetReqSelectTeaBillInfo(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_WIN_LOSE_RANK_UPDATE, msg = { info = data } })
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showToast("获取优胜值排行榜数据失败")
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showToast("获取优胜值排行榜数据超时")
    end
end

function TeaHouseRankModule:reqSelfCostRank(startDay, endDay)
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqRankSelfInfo = TeaHouse.manager.reqManager:createReq("NetReqRankSelfInfo")
    netReqRankSelfInfo:addReqCallBack(self, self.onNetReqRankSelfInfoCost)
    netReqRankSelfInfo:start(teahouseData:getTeaNumber(), netReqRankSelfInfo.RANK_TYPE.COST, startDay, endDay, 15)
end

function TeaHouseRankModule:onNetReqRankSelfInfoCost(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_SELF_COST_RANK_UPDATE, msg = { info = data } })
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showToast("获取自己消耗排行榜数据失败")
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showToast("获取自己消耗排行榜数据超时")
    end
end

function TeaHouseRankModule:reqSelfPlayCountRank(startDay, endDay)
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqRankSelfInfo = TeaHouse.manager.reqManager:createReq("NetReqRankSelfInfo")
    netReqRankSelfInfo:addReqCallBack(self, self.onNetReqRankSelfInfoPlayCount)
    netReqRankSelfInfo:start(teahouseData:getTeaNumber(), netReqRankSelfInfo.RANK_TYPE.PLAY_COUNT, startDay, endDay, 15)
end

function TeaHouseRankModule:onNetReqRankSelfInfoPlayCount(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_SELF_PLAY_COUNT_RANK_UPDATE, msg = { info = data } })
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showToast("获取自己局数排行榜数据失败")
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showToast("获取自己局数排行榜数据超时")
    end
end

function TeaHouseRankModule:reqSelfScoreRank(startDay, endDay)
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqRankSelfInfo = TeaHouse.manager.reqManager:createReq("NetReqRankSelfInfo")
    netReqRankSelfInfo:addReqCallBack(self, self.onNetReqRankSelfInfoScore)
    netReqRankSelfInfo:start(teahouseData:getTeaNumber(), netReqRankSelfInfo.RANK_TYPE.SCORE, startDay, endDay, 15)
end

function TeaHouseRankModule:onNetReqRankSelfInfoScore(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_SELF_SCORE_RANK_UPDATE, msg = { info = data } })
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showToast("获取自己优胜值排行榜数据失败")
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showToast("获取自己优胜值排行榜数据超时")
    end
end

function TeaHouseRankModule:reqSelfBigWinnerRank(startDay, endDay)
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqRankSelfInfo = TeaHouse.manager.reqManager:createReq("NetReqRankSelfInfo")
    netReqRankSelfInfo:addReqCallBack(self, self.onNetReqRankSelfInfoBigWinner)
    netReqRankSelfInfo:start(teahouseData:getTeaNumber(), netReqRankSelfInfo.RANK_TYPE.BIG_WINNER, startDay, endDay, 15)
end

function TeaHouseRankModule:onNetReqRankSelfInfoBigWinner(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_SELF_BIG_WINNER_RANK_UPDATE, msg = { info = data } })
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showToast("获取自己冠军排行榜数据失败")
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showToast("获取自己冠军排行榜数据超时")
    end
end

function TeaHouseRankModule:reqSetRanklistVisible(info, type)
    TeaHouse.showLoading()
    type = type or TeaHouse.TeaHouseProtocol.ReqSetRanklistVisible.TYPE.TEA
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqSetRanklistVisible = TeaHouse.manager.reqManager:createReq("NetReqSetRanklistVisible")
    netReqSetRanklistVisible:addReqCallBack(self, self.onNetReqSetRanklistVisible)
    netReqSetRanklistVisible:start(teahouseData:getTeaNumber(), TeaHouse.BridgeData.getNumberID(), type, info, 15)
end

function TeaHouseRankModule:onNetReqSetRanklistVisible(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        TeaHouse.manager.teahouseData:setRankBit(data.nVisibleRankBit)
        self:dispatchEvent({ name = self.EVENT_RANK_VISIBLE_UPDATE })
        TeaHouse.manager.viewManager:closeView("TeaHouseRankItem.TeaHouseRankSetting")
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showToast(req:getMessage())
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showToast("设置排行榜设置超时")
    end
end

function TeaHouseRankModule:reqCurTime()
    TeaHouse.showLoading()
    local netReqCurTime = TeaHouse.manager.reqManager:createReq("NetReqCurTime")
    netReqCurTime:addReqCallBack(self, self.onNetReqCurTime)
    netReqCurTime:start(10)
end

function TeaHouseRankModule:onNetReqCurTime(req, ctype, data)
    TeaHouse.hideLoading()
    if ctype == TeaHouse.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_RANK_CUR_DATE_UPDATE, msg = { nTime = req._curTime } })
    end
end

return TeaHouseRankModule