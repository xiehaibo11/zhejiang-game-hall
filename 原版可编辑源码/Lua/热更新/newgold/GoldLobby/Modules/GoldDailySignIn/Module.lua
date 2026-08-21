local GoldDailySignInModule = class("GoldDailySignInModule", NG.ModuleBase)
local GoldNewDefine = require("src.newgold.GoldLobby.Modules.Gold.Define")

GoldDailySignInModule.EVENT_SIGN_INFO_SUCCESS = "EVENT_SIGN_INFO_SUCCESS"

-- 每日签到
function GoldDailySignInModule:ctor()
    GoldDailySignInModule.super.ctor(self)
    self._info = nil
end

function GoldDailySignInModule:getReqConfig()
    return {
        --
        ReqLuckTaskGetContent = {reqPath = "newgold.GoldLobby.Req.Act.GoldReqLuckTaskGetContent", callBack = self.respGetContent},
        ReqLuckTaskGetPage = {reqPath = "newgold.GoldLobby.Req.Act.GoldReqLuckTaskGetPage", callBack = self.respGetPage},
        ReqParticipate = {reqPath = "newgold.GoldLobby.Req.Act.GoldReqParticipate", callBack = self.onRespParticipate}
    }
end

-- 获取任务id
function GoldDailySignInModule:reqTaskList()
    if self._actInfo ~= nil then
        self:reqGetContent()
    end
    self:startReq("ReqLuckTaskGetPage", GoldNewDefine.ACTLIST.SIGN, 10)
end

function GoldDailySignInModule:respGetPage(req, type, data)
    if type == NG.Req.TYPE.SUCCESS then
        if data.pages == nil then
            return
        end
        if #data.pages > 0 and #data.pages[1].info > 0 then
            self._actInfo = data.pages[1].info
            self:reqGetContent()
        end
    else
        print('GoldDailySignInModule Failed')
    end
end

function GoldDailySignInModule:getActInfo()
    return self._info
end

function GoldDailySignInModule:reqActInfo()
    self:reqTaskList()
end

-- 获取任务内容
function GoldDailySignInModule:reqGetContent()
    if self._actInfo == nil then
        return
    end
    local include = 0 -- 不用修改
    local activity_id = self._actInfo[1].id -- pages.id 写死id
    self:startReq("ReqLuckTaskGetContent", activity_id, include, 10)
end

function GoldDailySignInModule:respGetContent(req, type, data)
    if type == NG.Req.TYPE.SUCCESS then
        if data.box == nil then
            return
        end
        self._info = data.box[1]
        self:dispatchEvent({name = self.EVENT_SIGN_INFO_SUCCESS})
    end
end

-- 领奖
function GoldDailySignInModule:reqParticipate(activity_id)
    self:startReq('ReqParticipate', activity_id, 3, 10)
end

function GoldDailySignInModule:onRespParticipate(req, type, data)
    if type == XH.Req.TYPE.SUCCESS and data ~= nil and data.rewards ~= nil then
        self:showAwardView(data)
        self:reqTaskList()
    end
end

-- 领奖
function GoldDailySignInModule:showAwardView(data)
    local awardInfo = {}
    awardInfo.prize_names = {}
    awardInfo.image_urls = {}
    for _, award in pairs(data.rewards) do
        awardInfo.prize_names[#awardInfo.prize_names + 1] = "x" .. award.count
        awardInfo.image_urls[#awardInfo.image_urls + 1] = award.icon or ""
    end
    awardInfo.text = " "
    if #awardInfo.prize_names == 0 then
        return
    end
    NG.viewManager:openView("NewGold_AwardView", nil, nil, awardInfo)
end

return GoldDailySignInModule
