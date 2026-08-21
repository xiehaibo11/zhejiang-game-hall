local MailModule = class("MailModule", XH.ModuleBase)
local MailData = require("lobby.Modules.GoldNew.SubModules.Mail.MailData")

--发送事件
MailModule.MAIL_EVENT_CHECKNEW = "MAIL_EVENT_CHECKNEW"
MailModule.EVENT_POOL_PRIZES_SUCC = "EVENT_POOL_PRIZES_SUCC"

-- 一页请求数量
local MAIL_PAGE_CNT = 10

function MailModule:ctor()
    MailModule.super.ctor(self)
    self:initData()
end

function MailModule:getReqConfig()
    return {
        ReqCheckNewMail = {reqPath = XH.Bridge:getReqPath("Mail50.ReqCheckNewMail"), callBack = self.onRespCheckNewMail},   -- 检查新邮件
        ReqGetPlayerMailList = {reqPath = XH.Bridge:getReqPath("Mail50.ReqGetPlayerMailList"), callBack = self.onRespGetPlayerMailList},    -- 获取玩家邮件列表
        ReqGetMailDetail = {reqPath = XH.Bridge:getReqPath("Mail50.ReqGetMailDetail"), callBack = self.onRespGetMailDetail},    -- 获取邮件详情
        ReqReadAllMail = {reqPath = XH.Bridge:getReqPath("Mail50.ReqReadAllMail"), callBack = self.onRespReadAllMail}, -- 一键已读
        ReqDelMail = {reqPath = XH.Bridge:getReqPath("Mail50.ReqDelMail"), callBack = self.onRespDelMail}, -- 删除邮件
        ReqGetAward = {reqPath = XH.Bridge:getReqPath("Mail50.ReqGetAward"), callBack = self.onRespGetAward}, -- 领取附件
        ReqGetPoolPrizes = {reqPath = "lobby.Modules.BattlePass.Req.ReqGetPoolPrizes", callBack = self.respPoolPrizes}, -- 获取奖池奖励
    }
end

function MailModule:initData()
    self._mailData = MailData.new()
end

function MailModule:getMailData()
    return self._mailData
end

-- 检查新邮件
function MailModule:reqCheckNewMail()
    self:startReq("ReqCheckNewMail")
end

function MailModule:onRespCheckNewMail(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self:dispatchEvent({name = MailModule.MAIL_EVENT_CHECKNEW, count = data.unread, awardCount = data.award})
    end
end

-- 获取玩家邮件列表
function MailModule:reqGetPlayerMailList(page)
    if self._isPlayerListReqing then
        return
    end
    self._isPlayerListReqing = true
    if not page then
        local mailList = self._mailData:getMailList() or {}
        if #mailList == 0 then
            page = 1
        else
            page = math.floor(#mailList / MAIL_PAGE_CNT) + 1
        end
    end
    local isFirst = self._mailData:getMailFirst()
    self:startReq("ReqGetPlayerMailList", MAIL_PAGE_CNT, page, isFirst)
end

function MailModule:onRespGetPlayerMailList(cell, type, data)
    self._isPlayerListReqing = false
    if type == XH.Req.TYPE.SUCCESS then
        self._mailData:setMailList(data.mailList)
    end
end

-- 获取邮件详情
function MailModule:reqGetMailDetail(mailID)
    local detailInfo = self._mailData:getMailDetailById(mailID)
    if detailInfo then
        self._mailData:setMailDetail(detailInfo)
        return
    end
    self:startReq("ReqGetMailDetail", mailID)
end

function MailModule:onRespGetMailDetail(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._mailData:setMailDetail(data)
    end
end

-- 一键已读
function MailModule:reqReadAllMail()
    local mailList = self._mailData:getMailIds()
    self:startReq("ReqReadAllMail", mailList)
end

-- 一键已读
function MailModule:onRespReadAllMail(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._mailData:refreshReadState(data.mailidList)
        self._mailData:dispatchMailData()
    else
        XH.TipTool.showToast("一键已读出错了，请重新打开界面！", 3)
    end
end

-- 删除邮件
function MailModule:reqDelMail(mailIds)
    self:startReq("ReqDelMail", mailIds)
end

-- 删除邮件
function MailModule:onRespDelMail(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._mailData:delMails(data.mailidList)
    else
        XH.TipTool.showToast("邮件删除出错了，请重新打开界面！", 3)
    end
end

-- 领取附件
function MailModule:reqGetAward(mailIds)
    self:startReq("ReqGetAward", mailIds)
end

-- 领取附件
function MailModule:onRespGetAward(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data.mailidList and #data.mailidList > 0 then
            self._mailData:awardMails(data.mailidList)
            local awardInfo = data.info or {}
            if #awardInfo <= 0 then
                XH.TipTool.showToast("奖励库存不足，请联系客服", 3)
                return
            end
            for _,v in pairs(awardInfo) do
                v.url = v.imageUrl
                v.desc = v.prizeName
                v.count = v.propValue
                if v.propId == XH.areaData:getPropLimitedTimeRoomCardID() then
                    if XH.areaData:getPropLimitedTimeRoomCardRatio() then
                        v.count = v.count  / XH.areaData:getPropLimitedTimeRoomCardRatio()
                    end
                end
            end
            -- 领完奖后，请求playerMailList第一页刷新第一页数据
            self:reqGetPlayerMailList(1)
            XH.viewManager:openView("CommonRewardView", nil, awardInfo)
            XH.SysTool.performDelayOnce(function ()
                XH.playerData:flushPlayerDrop()
                XH.playerData:flushGoldCoin()
            end, 5)
        else
            XH.TipTool.showToast("没有奖励可以领取", 3)
        end
    else
        XH.TipTool.showToast("领取奖励出错了，请重新打开界面！", 3)
    end
end

function MailModule:reqPoolPrizes(poolid)
    if self._isPoolReqing then
        return
    end
    self._isPoolReqing = true
    self:startReq("ReqGetPoolPrizes", {poolid = poolid})
end

function MailModule:respPoolPrizes(req, type, data)
    self._isPoolReqing = false
    if type == XH.Req.TYPE.SUCCESS then
        self._awardPoolGoods = self._awardPoolGoods or {}
        if data and data.poolPrize then
            -- 奖池下发的奖励图片URL叫image，与邮件服务下发的字段名字不同，需要映射下
            for _,v in pairs(data.poolPrize) do
                v.imageUrl = v.image
            end
            self._awardPoolGoods = data.poolPrize
        end
        self:dispatchEvent({name = MailModule.EVENT_POOL_PRIZES_SUCC})
    end
end

function MailModule:getAwardPoolGoods()
    return self._awardPoolGoods
end

function MailModule:resetMailReqing()
    self._isPlayerListReqing = false
    self._isPoolReqing = false
end

return MailModule�