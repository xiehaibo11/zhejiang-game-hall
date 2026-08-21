local CardSkillChallengeView = class("CardSkillChallengeView", XH.ViewBase)
local LocalConfig = require("lobby.Modules.GoldNew.Configs.LocalConfig")

function CardSkillChallengeView:getCSBPath()
    return "hall/CSB/DarkShuangKouChallenge/CardSkillChallenge.csb"
end

function CardSkillChallengeView:getBindingInfo()
    return {
        ["_KW_UI_TITLE_ITEM"] = {varName = "_uiTitleItem"},
        ["_KW_UI_LIST_VIEW"] = {varName = "_uiListView"},
        ["_KW_UI_TASK_GROUP"] = {varName = "_uiTaskGroup"},
        ["_KW_UI_TASK_ITEM"] = {varName = "_uiTaskItem"}
    }
end

function CardSkillChallengeView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("DarkShuangKouChallenge"), eventKeyName = "KW_EVENT_DARK_SHUANG_KOU_CARD_SKILL_INFO", callBack = "initUI"}
    }
end

function CardSkillChallengeView:ctor(areaId)
    CardSkillChallengeView.super.ctor(self)
    self._uiTitleItem:setVisible(false)
    self._uiTaskItem:setVisible(false)
    self._uiTaskGroup:setVisible(false)
    self._uiTaskGroup:setTouchEnabled(false)
    self._uiTaskGroup:setItemModel(self._uiTaskItem)
    self._uiListView:setItemModel(self._uiTaskGroup)
    self._uiListView:setScrollBarOpacity(0)
    self:initUI()
    self._areaId = areaId

    local page = "金币游戏结算"
    if self._areaId == LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT then
        page = "新金币大厅"
    elseif self._areaId == LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT then
        page = "选场大厅"
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ohtz25040303, {page = page, block_label = "牌技挑战"})
end

function CardSkillChallengeView:initUI()
    self._cardSkillInfo = XH.lobby:getModule("DarkShuangKouChallenge"):getCardSkillInfo()
    self._uiListView:removeAllChildren()

    for i = 1, #self._cardSkillInfo do
        self._uiListView:pushBackDefaultItem()
        local groups = self._uiListView:getItems()
        local group = groups[#groups]
        group:setVisible(true)
        -- group需要先插入标题
        local titleItem = self._uiTitleItem:clone()
        local title = titleItem:getChildByName("_KW_UI_TITLE")
        if title then
            title:setString(self._cardSkillInfo[i].title)
        end
        titleItem:setVisible(true)
        group:addChild(titleItem)
        for j = 1, #self._cardSkillInfo[i].content do
            group:pushBackDefaultItem()
            local items = group:getItems()
            local item = items[#items]
            item:setVisible(true)
            local title2 = item:getChildByName("_KW_UI_TITLE")
            if title2 then
                title2:setString(self._cardSkillInfo[i].content[j].desc)
            end
            local progress = item:getChildByName("_KW_TEXT_PROGRESS")
            if progress then
                local textStr =
                    string.format(
                    "<font face='Common/Font/fangzhengcuyuan.TTF' size='31' color='#474e69'>(<font color='#db6400'>%s</font>/%s)</font>",
                    self._cardSkillInfo[i].content[j].progress,
                    self._cardSkillInfo[i].content[j].target
                )
                local richText = ccui.RichText:createWithXML(textStr, {})
                richText:setAnchorPoint(cc.p(0, 0.5))
                richText:ignoreContentAdaptWithSize(true)
                richText:setContentSize(progress:getContentSize())
                richText:setHorizontalAlignment(cc.TEXT_ALIGNMENT_LEFT)
                richText:setPosition(cc.p(progress:getContentSize().width / 2, progress:getContentSize().height / 2 + 10))
                progress:addChild(richText)
            end
            local posAward = item:getChildByName("_KW_POS_AWARD")
            if posAward then
                local node = require(XH.goldLobbyRootPath .. ".Modules.DarkShuangKouChallenge.AwardItemView").new()
                if node then
                    node:showAward(self._cardSkillInfo[i].content[j].rewards[1], self._cardSkillInfo[i].content[j].state, "CardSkill")
                    posAward:addChild(node)
                end
            end
            local btn = item:getChildByName("_KW_BTN_GET_AWARD")
            local btnGo = item:getChildByName("_KW_BTN_GO_PLAY")
            local haveGet = item:getChildByName("_KW_IMG_HAVE_GET")
            if self._cardSkillInfo[i].content[j].state == 0 then
                btn:setVisible(false)
                btnGo:setVisible(true)
                haveGet:setVisible(false)

                btnGo:addTouchEventListener(handler(self, self.onClickGoPlay))
            elseif self._cardSkillInfo[i].content[j].state == 1 then
                btn:setVisible(true)
                btnGo:setVisible(false)
                haveGet:setVisible(false)

                btn:setTag(self._cardSkillInfo[i].content[j].subactid)
                btn.info = {indexI = i, indexJ = j}
                btn:addTouchEventListener(handler(self, self.onClickGetAward))
            elseif self._cardSkillInfo[i].content[j].state == 2 then
                btn:setVisible(false)
                btnGo:setVisible(false)
                haveGet:setVisible(true)
            end
        end
        group:setContentSize(
            cc.size(self._uiTaskItem:getContentSize().width, 10 + self._uiTaskItem:getContentSize().height * #self._cardSkillInfo[i].content + self._uiTitleItem:getContentSize().height)
        )
    end
end

function CardSkillChallengeView:onClickGetAward(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local subactid = send:getTag()
    XH.lobby:getModule("DarkShuangKouChallenge"):reqGetAward("CardSkill", subactid)
    local page = "金币游戏结算"
    if self._areaId == LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT then
        page = "新金币大厅"
    elseif self._areaId == LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT then
        page = "选场大厅"
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ohtz25040305, {page = page, block_label = "牌技挑战", page_item_id = string.format("%d_%d", send.info.indexI, send.info.indexJ)})
end

function CardSkillChallengeView:onClickGoPlay(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local currScene = XH.SceneManager:getInstance():getTopScene()
    local sceneTag = currScene:getTag()
    if sceneTag ~= XH.SCENE_TAG.GAME then
        XH.lobby:getModule("DarkShuangKouChallenge"):quickJoinRoomZheJiangCollection()
    end
    XH.viewManager:closeView("DarkShuangKouChallengeView")
end

return CardSkillChallengeView
