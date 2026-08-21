local GoldBankTipModule = class("GoldBankTipModule", NG.ModuleBase)
local GoldNewDefine = require("newgold.GoldLobby.Modules.Gold.Define")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")

function GoldBankTipModule:ctor()
    GoldBankTipModule.super.ctor(self)
end

function GoldBankTipModule:getReqConfig()
    return {
        --
        ReqGetBankReward = { reqPath = "newgold.GoldLobby.Req.Act.GoldReqGameRewards", callBack = self.respGetReward },
        ReqGetBankrupLeftCnt = { reqPath = "newgold.GoldLobby.Req.Act.GoldReqBankrupLeftCnt", callBack = self.respGetBankrupCnt },
        ReqLuckTaskGetPage = { reqPath = "newgold.GoldLobby.Req.Act.GoldReqLuckTaskGetPage", callBack = self.respGetPage },
    }
end

function GoldBankTipModule:reqActInfo()
    self:reqTaskList()
end

-- 获取任务id
function GoldBankTipModule:reqTaskList()
    self:startReq("ReqLuckTaskGetPage", GoldNewDefine.ACTLIST.GOLD_BANK_RUPT, 10)
end

function GoldBankTipModule:getBankrupLeftCnt()
    return self._bankrupLeftCnt
end

-- 获取破产补助剩余次数
function GoldBankTipModule:reqBankrupLeftCnt(callback)
    self:startReq("ReqGetBankrupLeftCnt", self:getActivityId(), function() 
        local x = 1
    end, 10)
end

function GoldBankTipModule:respGetPage(req, type, data)
    if type == NG.Req.TYPE.SUCCESS then
        if data.pages == nil then
            return
        end
        if #data.pages > 0 and #data.pages[1].info > 0 then
            self._actInfo = data.pages[1].info
        end
    end
end

-- todo 先写死
function GoldBankTipModule:getActivityId()
    if self._actInfo == nil then
        return 0
    end
    return self._actInfo[1].id[1]
end

-- 领取破产补助
function GoldBankTipModule:reqBankTipAward(inGame, info)
    if self:getActivityId() == 0 then
        self:dealFailLogic(inGame, info)
        return
    end
    local callFuncs = { inGame = inGame, info = info }
    self:startReq("ReqGetBankReward", self:getActivityId(), GoldNewDefine.ACTLIST.GOLD_BANK_RUPT, callFuncs, 10)
end

function GoldBankTipModule:respGetReward(req, type, data)
    if type == NG.Req.TYPE.SUCCESS then
        NG.goldLobby:getModule("GoldCommon"):flushPlayerProp()
        if data.callFuncs ~= nil then
            if data.callFuncs.info then
                if data.callFuncs.info.callFunc then
                    data.callFuncs.info.callFunc(true, data.res)
                end
                if data.callFuncs.info.notDeal then
                    return
                end
            end
            data.callFuncs.save = data.res.save
            data.callFuncs.gold = data.res.gold
            self:dealSuccessLogic(data.callFuncs)
        end
    elseif type == NG.Req.TYPE.FAIL then
        if data.callFuncs.info then
            if data.callFuncs.info.callFunc then
                data.callFuncs.info.callFunc(false, data.res)
            end
            if data and data.callFuncs ~= nil then
                if data.callFuncs.info.notDeal then
                    return
                end
                self:dealFailLogic(data.callFuncs.inGame, data.callFuncs.info)
            end
        end
    end
end


-- 处理后续逻辑
function GoldBankTipModule:dealSuccessLogic(callFuncs)
    callFuncs.type = GoldNewDefine.AWARDTYPE.AWARD_BANKRUPT
    NG.viewManager:openView("NewGold_GoldBankTipView", nil, { data = callFuncs })
end

function GoldBankTipModule:dealFailLogic(inGame, info)
    if info and info.stop then
        return
    end
    if inGame then
        NG.goldLobby:getModule("GoldPlayAward"):openPlayAwardInResult(true)
    else
        NG.viewManager:openView("NewGold_EnterRoomGiftPackView", nil, info)
    end
end


function GoldBankTipModule:respGetBankrupCnt(req, type, data)
    if type == NG.Req.TYPE.SUCCESS then
        self._bankrupLeftCnt = data.cnt
    elseif type == NG.Req.TYPE.FAIL then
        self._bankrupLeftCnt = 0
    end
    if data and data.callFunc then
        data.callFunc()
    end
end

return GoldBankTipModule