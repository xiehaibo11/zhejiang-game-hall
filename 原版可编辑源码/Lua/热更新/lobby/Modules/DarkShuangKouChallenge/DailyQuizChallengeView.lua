local DailyQuizChallengeView = class("DailyQuizChallengeView", XH.ViewBase)
local LocalConfig = require("lobby.Modules.GoldNew.Configs.LocalConfig")

function DailyQuizChallengeView:getCSBPath()
    return "hall/CSB/DarkShuangKouChallenge/DailyQuizChallenge.csb"
end

function DailyQuizChallengeView:getBindingInfo()
    return {
        ["_KW_POS_PROGRESS"] = {varName = "_posProgress"},
        ["_KW_TITLE_LIST"] = {varName = "_titleList"},
        ["_KW_IMG_TITLE_LIST"] = {varName = "_imgTitleList"},
        ["_KW_QUIZ_TITLE_ITEM"] = {varName = "_titleItem"},
        ["_KW_POS_ANI_END"] = {varName = "_posAniEnd"},
        ["_KW_PANEL_ANSWER_"] = {varName = "_panelAnswer", beginIndex = 1, endIndex = 4, type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnAnswer", style = XH.UIButton.CLICK_STYLE.NOEFFECT},
        ["_KW_TEXT_ANSWER_"] = {varName = "_textAnswer", beginIndex = 1, endIndex = 4},
        ["_KW_IMG_RIGHT_BACK_"] = {varName = "_imgRightBack", beginIndex = 1, endIndex = 4},
        ["_KW_TEXT_ANSWER_ID_"] = {varName = "_textAnswerID", beginIndex = 1, endIndex = 4},
        ["_KW_IMG_RIGHT_"] = {varName = "_imgRight", beginIndex = 1, endIndex = 4},
        ["_KW_IMG_ERROR_"] = {varName = "_imgError", beginIndex = 1, endIndex = 4},
        ["_KW_TEXT_TOTAL"] = {varName = "_textTotal"},
        ["_KW_TEXT_DESC"] = {varName = "_textDesc"},
        ["_KW_HAVE_GET_SIGN"] = {varName = "_signHaveGet"},
        ["_KW_LIST_VIEW_AWARD"] = {varName = "_listViewAward"},
        ["_KW_PANEL_NOT_EMPTY"] = {varName = "_panelNotEmpty"},
        ["_KW_PANEL_CLOCK"] = {varName = "_panelClock"},
        ["_KW_TEXT_CLOCK"] = {varName = "_textClock"},
        ["_KW_PANEL_EMPTY"] = {varName = "_panelEmpty"},
        ["_KW_PANEL_AWARD"] = {varName = "_panelAward", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnAward", style = XH.UIButton.CLICK_STYLE.NOEFFECT}
    }
end

function DailyQuizChallengeView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("DarkShuangKouChallenge"), eventKeyName = "KW_EVENT_DARK_SHUANG_KOU_DAILY_QUIZ_INFO", callBack = "initUI"}
    }
end

function DailyQuizChallengeView:ctor(areaId)
    DailyQuizChallengeView.super.ctor(self)
    self._selectQuizInfo = {}

    self._titleItem:setVisible(false)
    self._titleList:setTouchEnabled(false)
    self._titleList:setItemModel(self._titleItem)
    self._titleList:setScrollBarOpacity(0)

    self._quizIndex = 0
    self._waitFlush = false
    self._areaId = areaId
    self:initQuizInfo()
    self:initUI()

    local page = "金币游戏结算"
    if self._areaId == LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT then
        page = "新金币大厅"
    elseif self._areaId == LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT then
        page = "选场大厅"
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ohtz25040303, {page = page, block_label = "答题挑战"})
    self._panelClock:setVisible(false)
end

function DailyQuizChallengeView:initUI()
    local lastTotalQuizInfo = clone(self._totalQuizInfo)
    self._dailyQuizInfos, self._totalQuizInfo, self._todayRewardState = XH.lobby:getModule("DarkShuangKouChallenge"):getDailyQuizInfo()

    self._titleList:removeAllChildren()
    if next(self._dailyQuizInfos) then
        for i = 1, #self._dailyQuizInfos do
            self._titleList:pushBackDefaultItem()
            local items = self._titleList:getItems()
            local item = items[#items]
            item:setVisible(true)
            item:setTag(i)
            item:addTouchEventListener(handler(self, self.onClickTitle))
            local text = item:getChildByName("_KW_TEXT_QUIZ")
            text:setText(string.format("第%d题", i))
            if self._dailyQuizInfos[i].state == 0 then
                item:setTouchEnabled(false)
            end
            local imgRight = item:getChildByName("_KW_IMG_RIGHT")
            local imgError = item:getChildByName("_KW_IMG_ERROR")
            imgRight:setVisible(false)
            imgError:setVisible(false)
            if self._dailyQuizInfos[i].state == 2 then
                imgRight:setVisible(self._dailyQuizInfos[i].realAnswer == self._dailyQuizInfos[i].selectAnswer)
                imgError:setVisible(self._dailyQuizInfos[i].realAnswer ~= self._dailyQuizInfos[i].selectAnswer)
            end

            local isShowCanGet = self._dailyQuizInfos[i].state == 2 and self._dailyQuizInfos[i].realAnswer == self._dailyQuizInfos[i].selectAnswer
            local titleAwardBack = item:getChildByName("_KW_TITEL_AWARD_BACK")
            if isShowCanGet then
                titleAwardBack:loadTexture("DarkShuangKouChallenge_ImgBqh.png", ccui.TextureResType.plistType)
            else
                titleAwardBack:loadTexture("DarkShuangKouChallenge_ImgBql.png", ccui.TextureResType.plistType)
            end
            local posAward = item:getChildByName("_KW_POS_ITEM_AWARD")
            local node = require(XH.goldLobbyRootPath .. ".Modules.DarkShuangKouChallenge.AwardItemView").new()
            if node then
                node:showAward(self._dailyQuizInfos[i].rewards[1], isShowCanGet and 1 or 0, "QuizTitle")
                posAward:addChild(node)
            end
        end
        self._imgTitleList:setContentSize(cc.size(self._titleItem:getContentSize().width * #self._dailyQuizInfos, self._titleList:getContentSize().height))

        local nextIndex = #self._dailyQuizInfos
        for i = 1, #self._dailyQuizInfos do
            if self._dailyQuizInfos[i].state == 1 then
                nextIndex = i
            end
        end
        if self._waitFlush == true then
            nextIndex = self._quizIndex
        end
        self:flushQuizInfo(nextIndex)
    end
    self._panelNotEmpty:setVisible(#self._dailyQuizInfos > 0)
    self._panelEmpty:setVisible(#self._dailyQuizInfos == 0)

    if not self._posProgress:getChildByName("TaskProgress") then
        local node = require(XH.goldLobbyRootPath .. ".Modules.DarkShuangKouChallenge.TaskProgressView").new()
        if node then
            node:setName("TaskProgress")
            self._posProgress:addChild(node)
        end
    end
    if next(self._totalQuizInfo) then
        self._textTotal:setString(self._totalQuizInfo.progress)
        local taskProgress = self._posProgress:getChildByName("TaskProgress")
        local info = self._totalQuizInfo
        info.clickCallback = function(content, index)
            XH.lobby:getModule("DarkShuangKouChallenge"):reqGetAward("DailyQuiz", content.subactid)
            local page = "金币游戏结算"
            if self._areaId == LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT then
                page = "新金币大厅"
            elseif self._areaId == LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT then
                page = "选场大厅"
            end
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ohtz25040305, {page = page, block_label = "答题挑战", page_item_id = string.format("第%d阶段", index)})
        end
        taskProgress:setTaskInfo(info)
    end

    local haveGetAward = {}
    for i = 1, #self._dailyQuizInfos do
        if self._dailyQuizInfos[i].state == 2 and self._dailyQuizInfos[i].realAnswer == self._dailyQuizInfos[i].selectAnswer then
            table.insertto(haveGetAward, self._dailyQuizInfos[i].rewards)
        end
    end
    self._panelAward:setVisible(#haveGetAward > 0)
    self._listViewAward:removeAllChildren()
    if #haveGetAward > 0 then
        for i = 1, #haveGetAward do
            local node = require(XH.goldLobbyRootPath .. ".Modules.DarkShuangKouChallenge.AwardItemView").new()
            if node then
                node:showAward(haveGetAward[i], self._dailyQuizInfos[i].state, "TodayQuiz")
            end
            self._listViewAward:pushBackCustomItem(node)
        end
    end
    if self._todayRewardState ~= 2 then
        local path = "hall/CSB/DarkShuangKouChallenge/spine/"
        self._listViewAward:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = path .. "prop_animation.json", animationName = "loop", boneName = "prop", slotName = "prop", isLoop = true})
    end
    self._signHaveGet:setVisible(self._todayRewardState == 2)
    if self._todayRewardState == 1 then
        self:onBtnAward()
    end
    if lastTotalQuizInfo and next(lastTotalQuizInfo) and next(self._totalQuizInfo) and lastTotalQuizInfo.progress ~= self._totalQuizInfo.progress then
        -- 有新的题答对了
        if next(self._dailyQuizInfos) then
            local index = #self._dailyQuizInfos
            for i = 1, #self._dailyQuizInfos do
                if self._dailyQuizInfos[i].state == 2 then
                    index = i
                end
            end
            local items = self._titleList:getItems()
            local item = items[index]
            local posAward = item:getChildByName("_KW_POS_ITEM_AWARD_ANI")
            local node = cc.Node:create()
            node:setPosition(cc.p(0, 0))
            posAward:addChild(node)
            local path = "hall/CSB/DarkShuangKouChallenge/spine/"
            XH.SpineManager:playAni(
                node,
                path,
                "zzb_ty_feijinbi",
                "animation",
                false,
                function()
                    node:delayRemoveFromParent()
                end,
                {
                    ["weiyi"] = function()
                        node:runAction(cc.Sequence:create(cc.MoveBy:create(1, cc.p(428 - 428 * (index - 1), 150))))
                    end,
                    ["bao"] = function()
                        XH.SpineManager:playAni(self._posAniEnd, path, "zzb_ty_xbg", "animation", false, nil, nil, true)
                    end
                }
            )
        end
    end
end

function DailyQuizChallengeView:onClickTitle(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._waitFlush = false
    self._panelClock:setVisible(false)
    self._textClock:stopAllActions()
    local index = send:getTag()
    self:flushQuizInfo(index)
end

function DailyQuizChallengeView:initQuizInfo()
    for i = 1, 4 do
        self["_panelAnswer" .. i]:setVisible(false)
        self["_imgRight" .. i]:setVisible(false)
        self["_imgError" .. i]:setVisible(false)
    end
end

-- 刷新答题信息面板
function DailyQuizChallengeView:flushQuizInfo(index)
    self._quizIndex = index
    for i = 1, #self._dailyQuizInfos do
        local item = self._titleList:getItem(i - 1)
        local text = item:getChildByName("_KW_TEXT_QUIZ")
        if i == index then
            text:setTextColor(cc.c3b(0x9d, 0x46, 0x00))
        else
            text:setTextColor(cc.c3b(0xdd, 0xe5, 0xeb))
        end
        local itemBack = item:getChildByName("_KW_ITEM_BACK")
        itemBack:setVisible(i == index)
    end
    self:initQuizInfo()
    local answerId2Index = {["A"] = 1, ["B"] = 2, ["C"] = 3, ["D"] = 4}
    self._selectQuizInfo = self._dailyQuizInfos[index]
    self._textDesc:setString(self._selectQuizInfo.desc)
    for i = 1, 4 do
        self["_imgRightBack" .. i]:setVisible(false)
        self["_panelAnswer" .. i]:setVisible(false)
        self["_imgRight" .. i]:setVisible(false)
        self["_imgError" .. i]:setVisible(false)
    end
    -- 设置答案
    for i = 1, #self._selectQuizInfo.waitSelect do
        self["_panelAnswer" .. i]:setVisible(true)
        self["_panelAnswer" .. i].answerId = self._selectQuizInfo.waitSelect[i].answerId
        if self._selectQuizInfo.state == 2 then
            self["_panelAnswer" .. i]:setTouchEnabled(false)
        else
            self["_panelAnswer" .. i]:setTouchEnabled(true)
        end
        self["_textAnswerID" .. i]:setString(self._selectQuizInfo.waitSelect[i].answerId)
        self["_textAnswer" .. i]:setString(self._selectQuizInfo.waitSelect[i].answerDesc)
        local fontSize = 46
        self["_textAnswer" .. i]:setFontSize(fontSize)
        while self["_textAnswer" .. i]:getContentSize().width > 380 do
            fontSize = fontSize - 1
            self["_textAnswer" .. i]:setFontSize(fontSize)
            if fontSize <= 20 then
                break
            end
        end

        self["_textAnswerID" .. i]:setTextColor(cc.c3b(0x47, 0x4e, 0x69))
        self["_textAnswer" .. i]:setTextColor(cc.c3b(0x47, 0x4e, 0x69))
    end

    -- 已答的情况下，设置正确答案和我的答案
    if self._selectQuizInfo.state == 2 then
        local rightIndex = answerId2Index[self._selectQuizInfo.realAnswer] or 0
        local realAnswerNode = self["_imgRight" .. rightIndex]
        if realAnswerNode then
            realAnswerNode:setVisible(true)
        end
        local rightBackNode = self["_imgRightBack" .. rightIndex]
        if rightBackNode then
            rightBackNode:setVisible(true)
        end
        local textAnswerIDNode = self["_textAnswerID" .. rightIndex]
        if textAnswerIDNode then
            textAnswerIDNode:setTextColor(cc.c3b(0x84, 0x3b, 0x01))
        end
        local textAnswerNode = self["_textAnswer" .. rightIndex]
        if textAnswerNode then
            textAnswerNode:setTextColor(cc.c3b(0x84, 0x3b, 0x01))
        end
        if self._selectQuizInfo.realAnswer ~= self._selectQuizInfo.selectAnswer then
            local myAnswerNode = self["_imgError" .. (answerId2Index[self._selectQuizInfo.selectAnswer] or 0)]
            if myAnswerNode then
                myAnswerNode:setVisible(true)
            end
        end
    end
end

function DailyQuizChallengeView:onBtnAnswer(send, eventType)
    local index = send.answerId

    if self._selectQuizInfo.realAnswer ~= index and self._quizIndex ~= #self._dailyQuizInfos then
        self._waitFlush = true
        self._panelClock:setVisible(true)
        self._deadTime = os.time() + 5
        self._textClock:setString(math.floor(self._deadTime - os.time()) .. "s")
        self._textClock:stopAllActions()
        self._textClock:runAction(
            cc.RepeatForever:create(
                cc.Sequence:create(
                    cc.DelayTime:create(1),
                    cc.CallFunc:create(
                        function()
                            if self._deadTime - os.time() <= 0 then
                                self._textClock:stopAllActions()
                                self._waitFlush = false
                                self._panelClock:setVisible(false)
                                self:initUI()
                                return
                            end
                            self._textClock:setString(math.floor(self._deadTime - os.time()) .. "s")
                        end
                    )
                )
            )
        )
    end

    XH.lobby:getModule("DarkShuangKouChallenge"):reqAnswer(self._selectQuizInfo.id, index)

    local page = "金币游戏结算"
    if self._areaId == LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT then
        page = "新金币大厅"
    elseif self._areaId == LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT then
        page = "选场大厅"
    end
    local isRight = "正确"
    if self._selectQuizInfo.realAnswer ~= index then
        isRight = "错误"
    end
    XH.NewThrowDataManager:throwData(
        XH.NewThrowDataDefine.ohtz25040304,
        {page = page, block_item_id = isRight, item_id = tostring(self._selectQuizInfo.id)},
        {count = self._quizIndex, count1 = self._totalQuizInfo.progress}
    )
end

function DailyQuizChallengeView:onBtnAward(send, eventType)
    if self._todayRewardState == 0 or self._todayRewardState == 2 then
        return
    end
    local lastSubid = self._dailyQuizInfos[#self._dailyQuizInfos].id
    XH.lobby:getModule("DarkShuangKouChallenge"):reqGetAward("DailyQuiz", lastSubid)
    local page = "金币游戏结算"
    if self._areaId == LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT then
        page = "新金币大厅"
    elseif self._areaId == LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT then
        page = "选场大厅"
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ohtz25040305, {page = page, block_label = "答题挑战", page_item_id = "今日答题"})
end

return DailyQuizChallengeView
