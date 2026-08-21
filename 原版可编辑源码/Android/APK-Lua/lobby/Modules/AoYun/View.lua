local AoYunView = class("AoYunView", XH.ViewBase)

function AoYunView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/AoYun/AoYunMain.csb"
end
--- 获得节点的绑定信息
function AoYunView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "closeView" },
        ["_KW_BTN_AWARD"] = { varName = "_KW_BTN_AWARD", type = XH.UI_TYPE.BUTTON, onTouchEnded = "clickAward" },
        ["_KW_BTN_SUBMIT"] = { varName = "_KW_BTN_SUBMIT", type = XH.UI_TYPE.BUTTON, onTouchEnded = "clickSubMit" },
        ["_KW_INPUT_TEXT"] = { varName = "_KW_INPUT_TEXT" },
        ["_KW_PANEL_AWARD"] = { varName = "_KW_PANEL_AWARD" },
        ["_KW_AWARD_TEXT"] = { varName = "_KW_AWARD_TEXT" },
        ["_KW_AWARD_TEXT_2"] = { varName = "_KW_AWARD_TEXT_2" },
        ["_KW_ROOMCARD"] = { varName = "_KW_ROOMCARD" },
        ["_KW_PANEL_UNAWARD"] = { varName = "_KW_PANEL_UNAWARD" },
        ["_KW_TEXT_UNAWARD_1"] = { varName = "_KW_TEXT_UNAWARD_1" },
        ["_KW_TEXT_UNAWARD_2"] = { varName = "_KW_TEXT_UNAWARD_2" },
        ["_KW_TEXT_UNAWARD_3"] = { varName = "_KW_TEXT_UNAWARD_3" },
        ["_KW_TEXT_UNAWARD_4"] = { varName = "_KW_TEXT_UNAWARD_4" },
        ["_KW_TEXT_SUBMIT"] = { varName = "_KW_TEXT_SUBMIT" },
        ["_KW_TEXT_SUBMIT_2"] = { varName = "_KW_TEXT_SUBMIT_2" },
        ["_KW_GUESS_TEXT"] = { varName = "_KW_GUESS_TEXT" },
        ["_KW_GOLD_LAST"] = { varName = "_KW_GOLD_LAST" },
        ["_KW_LEFT_TIIME_1"] = { varName = "_KW_LEFT_TIIME_1" },
        ["_KW_LEFT_TIIME_3"] = { varName = "_KW_LEFT_TIIME_3" },
        ["_KW_PANEL"] = { varName = "_KW_PANEL" },
        ["_KW_PANEL_RICHTEXT"] = { varName = "_KW_PANEL_RICHTEXT" },
        ["_KW_RULE"] = { varName = "_KW_RULE" },
    }
end

function AoYunView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("AoYun"), eventKeyName = "flushUserInfo", callBack = "flushUserInfo" },
        { module = XH.lobby:getModule("AoYun"), eventKeyName = "flushNormalInfo", callBack = "flushNormalInfo" },
    }
end

function AoYunView:ctor(param)
    param = param or {}
    AoYunView.super.ctor(self, param)
    self:initUI()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ayhd24072201)
end

function AoYunView:initUI()
    self._KW_INPUT_TEXT:setInputMode(cc.EDITBOX_INPUT_MODE_DECIMAL)
    self._KW_INPUT_TEXT:setFontSize(50)
    self._KW_INPUT_TEXT:setPlaceholderFontColor(cc.c3b(198, 89, 56))
    self._KW_INPUT_TEXT:setFontColor(cc.c3b(198, 89, 56))
    XH.lobby:getModule("AoYun"):reqActDetail()
    XH.lobby:getModule("AoYun"):reqUserInfo()
end

function AoYunView:showSelectIndex(idx)
    self._selectedIndex = idx
    self._KW_PANEL_AWARD:setVisible(idx == 0)
    self._KW_PANEL_UNAWARD:setVisible(idx ~= 0)
    if idx ~= 0 then
        self._KW_TEXT_UNAWARD_1:setVisible(idx == 1)
        self._KW_TEXT_UNAWARD_2:setVisible(idx == 2)
        self._KW_TEXT_UNAWARD_3:setVisible(idx == 3)
        self._KW_TEXT_UNAWARD_4:setVisible(idx == 4)
    end
end

function AoYunView:flushUserInfoUI()
    local time = XH.lobby:getModule("AoYun"):getServerTime()
    local info = XH.lobby:getModule("AoYun"):getUserInfo()
    if info == nil then
        XH.TipTool.showToast("获取数据异常，请重试")
        self:close()
        return
    end
    local leftTime = string.split(info.act.showDate, "-")
    local leftDayM = tonumber(leftTime[2]) -- 昨日时间-月
    local leftDayH = tonumber(leftTime[3]) -- 昨日时间-日
    local guessCount = info.act.todayGuess -- 竞猜数量
    local canGuess = guessCount == -1 -- 是否可以竞猜
    local awardCnt = info.act.showAward -- 领奖数量
    local canAward = info.act.goldNum == info.act.showGuess -- 是否可以领奖
    local isReward = info.act.isAward -- 是否已领奖
    local lastGuessCnt = info.act.showGuess -- 昨日竞猜数量
    local lastDayCnt = info.act.goldNum -- 奖牌数字
    local rightDay = os.date("%m月%d日", time + 86400)

    local isGrayed = XH.lobby:getModule("AoYun"):isGraySubButton() or not canGuess
    self._KW_BTN_SUBMIT:setBright(not isGrayed)
    self._KW_BTN_SUBMIT:setTouchEnabled(not isGrayed)
    self._KW_INPUT_TEXT:setBright(not isGrayed)
    self._KW_INPUT_TEXT:setTouchEnabled(not isGrayed)
    if guessCount ~= -1 then
        self._KW_INPUT_TEXT:setText(guessCount)
    end
    self._KW_TEXT_SUBMIT_2:setVisible(guessCount ~= -1)
    self._KW_TEXT_SUBMIT:setVisible(guessCount == -1)

    if XH.lobby:getModule("AoYun"):isOnlineAct() then
        self:showSelectIndex(4)
    elseif lastGuessCnt == -1 then
        self:showSelectIndex(3)
        self._KW_TEXT_UNAWARD_3:setString(leftDayM .. "月" .. leftDayH .. "日未参加竞猜，参加下一轮吧")
    elseif canAward and awardCnt == 0 then
        self:showSelectIndex(1)
    elseif lastDayCnt ~= lastGuessCnt then
        self:showSelectIndex(2)
    elseif canAward then
        self:showSelectIndex(0)
        self._KW_AWARD_TEXT:setVisible(not isReward)
        self._KW_AWARD_TEXT_2:setVisible(isReward)
        self._KW_BTN_AWARD:setBright(not isReward)
        self._KW_BTN_AWARD:setTouchEnabled(not isReward)
    end
    if XH.lobby:getModule("AoYun"):isOffLineAct() and self._selectedIndex ~= 0 then
        local offLineText = "竞猜结束了哦"
        self:showSelectIndex(4)
        self._KW_TEXT_UNAWARD_4:setString(offLineText)
    end

    self._KW_GOLD_LAST:setString(lastDayCnt)
    self._KW_ROOMCARD:setString("房卡x" .. awardCnt)

    self._KW_PANEL_RICHTEXT:removeAllChildren()
    local textStr = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='42' color='#7D3313'>我猜" .. rightDay .. "中国队奥运<font color='#ba0000'>金牌</font>数</font>"
    local richText = ccui.RichText:createWithXML(textStr, {})
    richText:setAnchorPoint(cc.p(0.5, 0.5))
    richText:ignoreContentAdaptWithSize(false)
    richText:setContentSize(self._KW_PANEL_RICHTEXT:getContentSize())
    richText:setHorizontalAlignment(cc.VERTICAL_TEXT_ALIGNMENT_CENTER)
    richText:setPosition(cc.p(self._KW_PANEL_RICHTEXT:getContentSize().width / 2, self._KW_PANEL_RICHTEXT:getContentSize().height / 2))
    self._KW_PANEL_RICHTEXT:addChild(richText)

    self._KW_LEFT_TIIME_1:setString(leftDayM)
    self._KW_LEFT_TIIME_3:setString(leftDayH)
end

function AoYunView:flushNormalInfo()
    local ruleMax = "" -- 规则每日上限
    local data = XH.lobby:getModule("AoYun"):getNormalInfo()
    if data and data.res and data.res.special then
        local ok, res_tab = pcall(cjson.decode, data.res.special)
        local key1 = XH.areaData:getTenantid()
        local key2 = XH.areaData:getTenantid() .. "#" .. XH.areaData:getAreaID()
        if ok and res_tab and res_tab.award and res_tab.award[key2] then
            ruleMax = res_tab.award[key2].max
        elseif ok and res_tab and res_tab.award and res_tab.award[key1] then
            ruleMax = res_tab.award[key1].max
        end
    end
    local newText = string.gsub(self._KW_RULE:getString(), "XX", ruleMax)
    self._KW_RULE:setString(newText)
end

function AoYunView:closeView()
    self:close()
end

function AoYunView:clickAward()
    XH.lobby:getModule("AoYun"):reqAward()
end

function AoYunView:clickSubMit()
    local text = self._KW_INPUT_TEXT:getText()
    if not string.match(text, "^%d+$") or text == '' then
        XH.TipTool.showToast("输入有误，请重新提交")
        return
    end
    local count = tonumber(text)
    XH.lobby:getModule("AoYun"):reqSubmit(count)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ayhd24072202, nil, { count = count })
end

function AoYunView:flushUserInfo()
    self:flushUserInfoUI()
end

return AoYunView