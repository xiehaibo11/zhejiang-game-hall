local DarkShuangKouChallengeModule = class("DarkShuangKouChallengeModule", XH.ModuleBase)

DarkShuangKouChallengeModule.KW_EVENT_DARK_SHUANG_KOU_GAME_ROUND_INFO = "KW_EVENT_DARK_SHUANG_KOU_GAME_ROUND_INFO"
DarkShuangKouChallengeModule.KW_EVENT_DARK_SHUANG_KOU_DAILY_QUIZ_INFO = "KW_EVENT_DARK_SHUANG_KOU_DAILY_QUIZ_INFO"
DarkShuangKouChallengeModule.KW_EVENT_DARK_SHUANG_KOU_CARD_SKILL_INFO = "KW_EVENT_DARK_SHUANG_KOU_CARD_SKILL_INFO"
DarkShuangKouChallengeModule.KW_EVENT_DARK_SHUANG_KOU_CHANGE_TO_TAB = "KW_EVENT_DARK_SHUANG_KOU_CHANGE_TO_TAB"
DarkShuangKouChallengeModule.EVENT_CHALLENGE_RED_POINT = "EVENT_CHALLENGE_RED_POINT"

function DarkShuangKouChallengeModule:ctor()
    DarkShuangKouChallengeModule.super.ctor(self)
    self._gameRoundActivityId = 0
    self._dailyQuizActivityId = 0
    self._cardSkillActivityId = 0

    -- 调试数据
    self._dailyQuizInfos = {
        {
            id = 0,
            desc = "",
            waitSelect = {{answerId = "A", answerDesc = "1"}, {answerId = "B", answerDesc = "22"}, {answerId = "C", answerDesc = "333"}},
            realAnswer = "A",
            selectAnswer = "C",
            state = 2,
            rewardName = "",
            rewardImg = "",
            rewards = {{icon = "https://asset.gameteamobile.com/50040.uaovaaecny/palm_test/iop/B1074066232565SG.png", name = "金币×11", count = 21}}
        },
        {
            id = 0,
            desc = "",
            waitSelect = {{answerId = "A", answerDesc = "11"}, {answerId = "B", answerDesc = "222"}, {answerId = "C", answerDesc = "3"}},
            realAnswer = "A",
            selectAnswer = "A",
            state = 2,
            rewardName = "",
            rewardImg = "",
            rewards = {{icon = "https://asset.gameteamobile.com/50040.uaovaaecny/palm_test/iop/B1074066232565SG.png", name = "金币×11", count = 22}}
        },
        {
            id = 0,
            desc = "",
            waitSelect = {{answerId = "A", answerDesc = "111"}, {answerId = "B", answerDesc = "2"}, {answerId = "C", answerDesc = "33"}},
            realAnswer = "B",
            selectAnswer = "B",
            state = 2,
            rewardName = "",
            rewardImg = "",
            rewards = {{icon = "https://asset.gameteamobile.com/50040.uaovaaecny/palm_test/iop/B1074066232565SG.png", name = "金币×11", count = 2}}
        }
    }

    self._totalQuizInfo = {
        progress = 30,
        content = {{subactid = 1, target = 20, poolid = 0, rewardName = "", rewardImg = "", state = 1, rewards = {{icon = "", name = "111", count = 2}}}}
    }

    self._gameRoundInfo = {
        progress = 50,
        content = {
            {subactid = 0, target = 20, poolid = 0, rewardname = "", rewardimg = "", state = 1, rewards = {{"", name = "金币×11", count = 2}}},
            {subactid = 0, target = 100, poolid = 0, rewardname = "", rewardimg = "", state = 0, rewards = {{"", name = "金币×11", count = 2}}}
        }
    }

    self._gameRoundFirstInfo = {subactid = 0, target = 20, poolid = 0, rewardname = "", rewardimg = "", state = 1, rewards = {{icon = "", name = "金币×11", count = 2}}}

    self._cardSkillInfos = {
        {
            title = "标题",
            id = 1,
            content = {
                {subactid = 0, title = "标题", desc = "打出对子", taskGroup = 1, progress = 4, target = 10, rewards = {{"", name = "金币×11", count = 2}}},
                {subactid = 0, title = "标题", desc = "打出对子", taskGroup = 1, progress = 4, target = 10, rewards = {{"", name = "金币×11", count = 2}}}
            }
        },
        {
            title = "标题3",
            id = 2,
            content = {
                {subactid = 0, title = "标题3", desc = "打出三张", taskGroup = 2, progress = 4, target = 10, rewards = {{"", name = "金币×11", count = 2}}}
            }
        }
    }

    self._dailyQuizInfos = {}
    self._totalQuizInfo = {}
    self._gameRoundInfo = {}
    self._gameRoundFirstInfo = {}
    self._cardSkillInfos = {}

    self._todayRewardState = 0 -- 0: 不可领取 1:  2: 已领取
end

function DarkShuangKouChallengeModule:getReqConfig()
    return {
        ReqAnswerDailyQuizChallenge = {reqPath = XH.goldLobbyRootPath .. ".Modules.DarkShuangKouChallenge.Req.ReqAnswerDailyQuizChallenge", callBack = self.respAnswerDailyQuizChallenge},
        ReqCardSkillChallengeInfo = {reqPath = XH.goldLobbyRootPath .. ".Modules.DarkShuangKouChallenge.Req.ReqCardSkillChallengeInfo", callBack = self.respCardSkillChallengeInfo},
        ReqDailyQuizChallengeInfo = {reqPath = XH.goldLobbyRootPath .. ".Modules.DarkShuangKouChallenge.Req.ReqDailyQuizChallengeInfo", callBack = self.respDailyQuizChallengeInfo},
        ReqGameRoundChallengeInfo = {reqPath = XH.goldLobbyRootPath .. ".Modules.DarkShuangKouChallenge.Req.ReqGameRoundChallengeInfo", callBack = self.respGameRoundChallengeInfo},
        ReqGetAward = {reqPath = XH.goldLobbyRootPath .. ".Modules.DarkShuangKouChallenge.Req.ReqGetAward", callBack = self.respGetAward}
    }
end

----------------------------------
-- 局数相关
function DarkShuangKouChallengeModule:setGameRoundActivityId(activityID)
    self._gameRoundActivityId = activityID
    self:reqGameRoundChallengeInfo()
end

function DarkShuangKouChallengeModule:reqGameRoundChallengeInfo()
    if self._gameRoundActivityId > 0 then
        local data = {actId = self._gameRoundActivityId}
        self:startReq("ReqGameRoundChallengeInfo", data, 5)
    end
end

function DarkShuangKouChallengeModule:spliteAwardCount(awardName)
    local awardNameList = string.split(awardName, "×")
    return tonumber(awardNameList[2] or "0")
end

function DarkShuangKouChallengeModule:respGameRoundChallengeInfo(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._gameRoundInfo = {}
        self._gameRoundInfo.content = {}
        self._gameRoundInfo.progress = data.jrjs
        self._gameRoundFirstInfo = {}
        for i = 1, #data.info do
            if data.info[i].target == 1 then
                local gameRoundInfo = {
                    subactid = data.info[i].jstzId, -- 子活动id
                    target = data.info[i].target,
                    poolid = data.info[i].pid,
                    rewardname = data.info[i].rewardName, -- 奖励名称
                    rewardimg = data.info[i].rewardImg, -- 奖励图片
                    state = data.info[i].rewardStatus,
                    rewards = {
                        {
                            -- id = XH.areaData:getPropSmallRoomCardID(),
                            count = self:spliteAwardCount(data.info[i].rewardName),
                            icon = data.info[i].rewardImg,
                            name = data.info[i].rewardName
                        }
                    }
                }
                self._gameRoundFirstInfo = gameRoundInfo
            else
                local gameRoundInfo = {
                    subactid = data.info[i].jstzId, -- 子活动id
                    target = data.info[i].target,
                    poolid = data.info[i].pid,
                    rewardname = data.info[i].rewardName, -- 奖励名称
                    rewardimg = data.info[i].rewardImg, -- 奖励图片
                    state = data.info[i].rewardStatus,
                    rewards = {
                        {
                            -- id = XH.areaData:getPropSmallRoomCardID(),
                            count = self:spliteAwardCount(data.info[i].rewardName),
                            icon = data.info[i].rewardImg,
                            name = data.info[i].rewardName
                        }
                    }
                }
                table.insert(self._gameRoundInfo.content, gameRoundInfo)
            end
        end
        self:dispatchEvent({name = self.KW_EVENT_DARK_SHUANG_KOU_GAME_ROUND_INFO})
        self:dispatchEvent({name = self.EVENT_CHALLENGE_RED_POINT})
    end
end

----------------------------------
-- 答题相关
function DarkShuangKouChallengeModule:setDailyQuizActivityId(activityID)
    self._dailyQuizActivityId = activityID
    self:reqDailyQuizChallengeInfo()
end

function DarkShuangKouChallengeModule:reqDailyQuizChallengeInfo()
    if self._dailyQuizActivityId > 0 then
        local data = {actId = self._dailyQuizActivityId}
        self:startReq("ReqDailyQuizChallengeInfo", data, 5)
    end
end

function DarkShuangKouChallengeModule:respDailyQuizChallengeInfo(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._dailyQuizInfos = {}
        for i = 1, #data.mrdtInfo do
            local waitSelectAnswer = {}
            for j = 1, #data.mrdtInfo[i].kxda do
                local answerInfo = {
                    answerId = data.mrdtInfo[i].kxda[j].kxdaId,
                    answerDesc = data.mrdtInfo[i].kxda[j].kxdaDesc
                }
                table.insert(waitSelectAnswer, answerInfo)
            end
            local dailyQuizInfo = {
                id = data.mrdtInfo[i].timuId,
                desc = data.mrdtInfo[i].timu,
                waitSelect = waitSelectAnswer,
                realAnswer = data.mrdtInfo[i].zqdaId,
                selectAnswer = data.mrdtInfo[i].yxdaId,
                state = data.mrdtInfo[i].timuStatus,
                rewardName = data.mrdtInfo[i].rewardName,
                rewardImg = data.mrdtInfo[i].rewardImg,
                rewards = {
                    {
                        -- id = XH.areaData:getPropSmallRoomCardID(),
                        count = self:spliteAwardCount(data.mrdtInfo[i].rewardName),
                        icon = data.mrdtInfo[i].rewardImg,
                        name = data.mrdtInfo[i].rewardName
                    }
                }
            }
            table.insert(self._dailyQuizInfos, dailyQuizInfo)
        end

        self._totalQuizInfo = {}
        self._totalQuizInfo.content = {}
        self._totalQuizInfo.progress = data.ljdtScore
        self._todayRewardState = data.mrdtRewardStatus
        if data.mrdtRewardStatus == 0 then
            local totalAnswer = true
            local haveRight = false
            for i = 1, #self._dailyQuizInfos do
                if self._dailyQuizInfos[i].state ~= 2 then
                    totalAnswer = false
                elseif self._dailyQuizInfos[i].state == 2 and self._dailyQuizInfos[i].realAnswer == self._dailyQuizInfos[i].selectAnswer then
                    haveRight = true
                end
            end
            if totalAnswer and #self._dailyQuizInfos > 0 and haveRight then
                self._todayRewardState = 1
            end
        end
        for i = 1, #data.ljdtInfo do
            local stageInfo = {
                subactid = data.ljdtInfo[i].ljdtId, -- 累计答题阶段id
                target = data.ljdtInfo[i].ljdtTargetScore, -- 累计答题阶段目标分数
                poolid = data.ljdtInfo[i].pid, -- 奖池id
                rewardName = data.ljdtInfo[i].rewardName, -- 奖励名称
                rewardImg = data.ljdtInfo[i].rewardImg, -- 奖励图片
                state = data.ljdtInfo[i].rewardStatus,
                rewards = {
                    {
                        -- id = XH.areaData:getPropSmallRoomCardID(),
                        count = self:spliteAwardCount(data.ljdtInfo[i].rewardName),
                        icon = data.ljdtInfo[i].rewardImg,
                        name = data.ljdtInfo[i].rewardName
                    }
                }
            }
            table.insert(self._totalQuizInfo.content, stageInfo)
        end

        self:dispatchEvent({name = self.KW_EVENT_DARK_SHUANG_KOU_DAILY_QUIZ_INFO})
        self:dispatchEvent({name = self.EVENT_CHALLENGE_RED_POINT})
    end
end

-- 回答某个问题
function DarkShuangKouChallengeModule:reqAnswer(quizId, answerId)
    self:startReq("ReqAnswerDailyQuizChallenge", {actId = self._dailyQuizActivityId, timu_id = quizId, yxda_id = answerId})
end

function DarkShuangKouChallengeModule:respAnswerDailyQuizChallenge(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self:reqDailyQuizChallengeInfo()
    elseif type == XH.Req.TYPE.FAIL then
        self:reqFail(data)
    end
end

----------------------------------
-- 牌技相关
function DarkShuangKouChallengeModule:setCardSkillActivityId(activityID)
    self._cardSkillActivityId = activityID
    self:reqCardSkillChallengeInfo()
end

function DarkShuangKouChallengeModule:reqCardSkillChallengeInfo()
    if self._cardSkillActivityId > 0 then
        local data = {actId = self._cardSkillActivityId}
        self:startReq("ReqCardSkillChallengeInfo", data, 5)
    end
end

-- 100-200 算每周任务，但是排序要放第一位
function DarkShuangKouChallengeModule:transferRwzbID(taskGroup)
    if taskGroup >= 100 and taskGroup < 200 then
        return -1
    end
    return taskGroup
end

function DarkShuangKouChallengeModule:respCardSkillChallengeInfo(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._cardSkillInfos = {}

        -- 数据转换
        local datas = {}
        for i = 1, #data.pjtzInfo do
            local data2 = {
                subactid = data.pjtzInfo[i].pjtzId, -- 牌技挑战子活动id
                title = data.pjtzInfo[i].pjtzbt, -- 牌技挑战标题
                desc = data.pjtzInfo[i].pjtzms, -- 牌技挑战描述
                taskGroup = self:transferRwzbID(data.pjtzInfo[i].rwzbId), -- 任务组别id
                progress = data.pjtzInfo[i].currentCnt, -- 当前次数
                target = data.pjtzInfo[i].targetCnt, -- 目标次数
                state = data.pjtzInfo[i].pjtzRewardStatus,
                rewards = {
                    {
                        count = self:spliteAwardCount(data.pjtzInfo[i].rewardName),
                        icon = data.pjtzInfo[i].rewardImg,
                        name = data.pjtzInfo[i].rewardName
                    }
                }
            }
            table.insert(datas, data2)
        end

        -- 分组
        local info = {}
        for i = 1, #datas do
            info[datas[i].taskGroup] = info[datas[i].taskGroup] or {}
            table.insert(info[datas[i].taskGroup], datas[i])
        end

        -- 重新组织
        local tmpInfos = {}
        for taskGroup, contents in pairs(info) do
            local canGet = 0
            for i = 1, #contents do
                if contents[i].state == 1 then
                    canGet = 1
                end
            end
            local tmpInfo = {title = contents[1].title, id = taskGroup, content = contents, canGet = canGet}
            table.insert(tmpInfos, tmpInfo)
        end
        -- 排序
        table.sort(
            tmpInfos,
            function(a, b)
                if a.canGet ~= b.canGet then
                    return a.canGet >= b.canGet
                elseif a.id ~= b.id then
                    return a.id < b.id
                end
            end
        )
        self._cardSkillInfos = tmpInfos
        self:dispatchEvent({name = self.KW_EVENT_DARK_SHUANG_KOU_CARD_SKILL_INFO})
        self:dispatchEvent({name = self.EVENT_CHALLENGE_RED_POINT})
    end
end

----------------------------------
-- 领奖相关
function DarkShuangKouChallengeModule:reqGetAward(reqType, subActId)
    local actId
    if reqType == "GameRound" then
        actId = self._gameRoundActivityId
    elseif reqType == "DailyQuiz" then
        actId = self._dailyQuizActivityId
    elseif reqType == "CardSkill" then
        actId = self._cardSkillActivityId
    end
    self:startReq("ReqGetAward", {actId = actId, subActId = subActId})
end

function DarkShuangKouChallengeModule:reqFail(data)
    if data and data.resp and data.resp.errCode then
        if data.resp.errCode == 16000 then
            XH.TipTool.showToast("没有此活动")
            XH.viewManager:closeView("DarkShuangKouChallengeView")
            return
        elseif data.resp.errCode == 16004 then
            XH.TipTool.showToast("奖励已领取")
        elseif data.resp.errCode == 16006 then
            XH.TipTool.showToast("任务未达标")
        elseif data.resp.errCode == 16018 then
            XH.TipTool.showToast("已经答过了")
        else
            XH.TipTool.showToast("请求失败")
        end
    end
    self:reqAllChallengeInfo()
end

function DarkShuangKouChallengeModule:reqAllChallengeInfo()
    self:reqGameRoundChallengeInfo()
    self:reqDailyQuizChallengeInfo()
    self:reqCardSkillChallengeInfo()
end

function DarkShuangKouChallengeModule:respGetAward(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local awardInfo = {}
        awardInfo.isPromote = true
        awardInfo.prize_names = {}
        awardInfo.image_urls = {}
        for _, award in pairs(data.xstzReward) do
            awardInfo.prize_names[#awardInfo.prize_names + 1] = award.rewardName
            awardInfo.image_urls[#awardInfo.image_urls + 1] = award.rewardImg or ""
        end
        XH.viewManager:openView("BackActivityAwardView", nil, nil, awardInfo)
        self:reqAllChallengeInfo()
    elseif type == XH.Req.TYPE.FAIL then
        self:reqFail(data)
    end
end

function DarkShuangKouChallengeModule:getDailyQuizInfo()
    return self._dailyQuizInfos, self._totalQuizInfo, self._todayRewardState
end

function DarkShuangKouChallengeModule:getGameRoundInfo()
    return self._gameRoundInfo, self._gameRoundFirstInfo
end

function DarkShuangKouChallengeModule:getCardSkillInfo()
    return self._cardSkillInfos
end

function DarkShuangKouChallengeModule:changeToTab(index)
    self:dispatchEvent({name = self.KW_EVENT_DARK_SHUANG_KOU_CHANGE_TO_TAB, msg = {index = index}})
end

function DarkShuangKouChallengeModule:checkActivityOpen()
    return self._gameRoundActivityId ~= 0 and self._dailyQuizActivityId ~= 0 and self._cardSkillActivityId ~= 0
end

function DarkShuangKouChallengeModule:checkRedPoint1()
    if next(self._gameRoundInfo) then
        for i = 1, #self._gameRoundInfo.content do
            if self._gameRoundInfo.content[i].state == 1 then
                return true
            end
        end
    end
    if next(self._gameRoundFirstInfo) then
        if self._gameRoundFirstInfo.state == 1 then
            return true
        end
    end
    return false
end

function DarkShuangKouChallengeModule:checkRedPoint2()
    if next(self._totalQuizInfo) then
        for i = 1, #self._totalQuizInfo.content do
            if self._totalQuizInfo.content[i].state == 1 then
                return true
            end
        end
    end
    if self._todayRewardState == 1 then
        return true
    end
    return false
end

function DarkShuangKouChallengeModule:checkRedPoint3()
    for i = 1, #self._cardSkillInfos do
        for j = 1, #self._cardSkillInfos[i].content do
            if self._cardSkillInfos[i].content[j].state == 1 then
                return true
            end
        end
    end
    return false
end

function DarkShuangKouChallengeModule:checkHaveRedPoint()
    if self:checkRedPoint1() == true then
        return true
    end
    if self:checkRedPoint2() == true then
        return true
    end
    if self:checkRedPoint3() == true then
        return true
    end
    return false
end

-- 浙江包使用
function DarkShuangKouChallengeModule:quickJoinRoomZheJiangCollection()
    XH.lobby:getModule("LuckyTask"):notifyLuckyTaskJoin("AC_JUMPTYPE_GAME", 30579)
end

-- 宝宝浙江使用，误删
function DarkShuangKouChallengeModule:quickJoinRoom(isNeedHotupate)
    local level = self:getQuickLevel()
    if isNeedHotupate == nil then
        isNeedHotupate = true
    end
    if isNeedHotupate then
        for k, v in pairs(HOTUPATELIST) do
            if k == 30579 then
                CGlobalUnits:getInstance():JoinRoomCheckUpdate50(
                    v.kindID or k,
                    v.name,
                    function()
                        self:quickJoinRoom(false)
                    end
                )
                return
            end
        end
    end
    if NG.goldLobby:getModule("GoldCommon"):isQBSK() then
        NG.goldLobby:getModule("GoldCommon"):joinSKRoom(level)
        return
    end
end

-- 宝宝浙江使用，勿删
function DarkShuangKouChallengeModule:getQuickLevel()
    local fitLevel = 1
    local gold = GoldPlayerData.JoyBean
    local roomInfo = NG.goldLobby:getModule("GoldCommon"):getRoomInfos(30579, 4)
    for _, k in pairs(roomInfo.LEVEL) do
        if k.maxscore ~= -1 then
            if gold >= k.minscore and gold <= k.maxscore then
                fitLevel = k.level
            end
        else
            if gold >= k.minscore then
                fitLevel = k.level
            end
        end
    end
    return fitLevel
end

return DarkShuangKouChallengeModule
�S