local RewardContentView = class("RewardContentView", XH.ViewBase)
local ActionUtils = require("lobby.Modules.GoldNew.Tool.ActionUtils")

local commonAniPath = "res/animation/Common/"

-- UI名字定义
function RewardContentView:getCSBPath()
    return "hall/CSB/BattlePass/Lobby/RewardContent.csb"
end

--- 获得节点的绑定信息
function RewardContentView:getBindingInfo()
    return {
       ["_KW_ITEM_LEVEL"] = {varName = "_itemLevel"},
       ["_KW_STATIC_PANEL"] = {varName = "_staticPanel"},
       ["_KW_MAIN_PANEL"] = {varName = "_mainPanel"},
       ["_KW_ANI_LIZI"] = {varName = "_aniLiZi"},
       ["_KW_AWARD_GROUP_"] = {varName = "_awardGroup", beginIndex = 1, endIndex = 3},
       ["_KW_LEVEL_TXT"] = {varName = "_levelTxt"},
       ["_KW_EXP_TXT"] = {varName = "_expTxt"},
       ["_KW_BTN_BUY_EXP"] = {varName = "_btnBuyExp", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onBuyExp"},
       ["_KW_PROGRESS_BAR"] = {varName = "_progressBar"},
       ["_KW_MAX_LEVEL_TXT"] = {varName = "_maxLevelTxt"},
       ["_KW_STATIC_ANI"] = {varName = "_aniStaticPanel"},
       ["_KW_ANI_LIZI_1"] = {varName = "_aniLizi1"},
       ["_KW_ANI_LIZI_2"] = {varName = "_aniLizi2"},
       ["_KW_ANI_LIUGUANG"] = {varName = "_aniLiuGuang"},
       ["_KW_BTN_BUY_EXP_ANI"] = {varName = "_aniBtnBuyExp"},
       ["_KW_PROGRESS_BAR_ANI"] = {varName = "_aniProgressBar"},
       ["_KW_LEVEL_TXT_ANI"] = {varName = "_aniLevelTxt"},
       ["_KW_ANI_NODE"] = {varName = "_aniNode"},
       ["_KW_ANI_MAIN"] = {varName = "_aniMain"},
    }
end

function RewardContentView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("BattlePass.Lobby"), eventKeyName = "EVENT_BATTLE_PASS_RESP", callBack = "onEventBattlePassResp" },
    }
end

function RewardContentView:ctor(areaId)
    RewardContentView.super.ctor(self)

    self._showAni = true
    self._itemLevel:setVisible(false)
    for i = 1, 3 do
        self["_awardGroup" .. i]:setScrollBarEnabled(false)
    end
    self._mainPanel:setScrollBarEnabled(false)
    XH.SpineManager:playAni(self._aniLiZi, "res/animation/Common/", "zzb_ty_piaolizi", "animation2", true)

    self._tableView =
        self._mainPanel:tryAddLuaComponent(
        cc.ext.CompTableView,
        {
            direction = cc.SCROLLVIEW_DIRECTION_HORIZONTAL,
            itemNode = self._itemLevel,
            itemUpdateEvent = handler(self, self.itemUpdateEvent),
            lastItemEvent = handler(self, self.lastItemEvent),
            scrollViewDidScrollEvent = handler(self, self.scrollViewDidScrollEvent),
            bounceable = false
        }
    )

    self:setData()
    self:initUI()
    ActionUtils:runTopFadeIn(self._aniNode, true, 6/30)
    performWithDelay(self, function()
        self._showAni = false
    end, 6/30)
end

function RewardContentView:initUI()
    self._levelTxt:setString(0) -- 初始化为等级0，方便后面做升级动画
    XH.SpineManager:playAni(self._aniStaticPanel, commonAniPath, "zzb_ty_cjlgx", "animation", true)
    XH.SpineManager:playAni(self._aniLizi1, commonAniPath, "zzb_ty_piaolizi", "animation2", true)
    XH.SpineManager:playAni(self._aniLizi2, commonAniPath, "zzb_ty_piaolizi", "animation2", true)
    XH.SpineManager:playAni(self._aniLiuGuang, commonAniPath, "zzb_ty_liuguang", "animation", true)
    XH.SpineManager:playAni(self._aniBtnBuyExp, commonAniPath, "zzb_ty_ansg", "animation", true)
    XH.SpineManager:playAni(self._aniProgressBar, commonAniPath, "zzb_ty_jdt", "animation", true)
    self:updateLevelAndExp(false)
end

function RewardContentView:setData()
    self._battlePassInfo = XH.lobby:getModule("BattlePass.Lobby"):getBattlePassInfo()
    self._data, self._maxAwardCnt = XH.lobby:getModule("BattlePass.Lobby"):getAwardData()
    -- 特殊处理下这个data
    -- self._data = clone(self._data or {})
    -- table.remove(self._data, 1) 
    self._awardPoolGoods = XH.lobby:getModule("BattlePass"):getAwardPoolGoods()
    self._tableView:setData(self._data)
    local jumpTo = math.max(self._battlePassInfo.level, 1)
    self._tableView:jumpToIndex(jumpTo)
end


function RewardContentView:itemUpdateEvent(item, data, index, isSingleItem)
    item:setVisible(true)
    if self._showAni then
        item:stopAllActions()
        ActionUtils:runTopFadeIn(item, true, 5/30)
    end
    local level = self._data[index].level
    local haveReachingLevel = self._battlePassInfo.level >= level -- 是否达到等级
    local lockPanel = item:getChildByName("_KW_ITEM_LEVEL_LOCK")
    if isSingleItem == true then
        lockPanel:setVisible(false)
    else
        if lockPanel then
            lockPanel:setVisible(not haveReachingLevel)
        end
    end
    local list = item:getChildByName("_KW_ITEM_LEVEL_LIST")
    for i = 1, 3 do
        local itemSize = cc.size(160, 167)
        local awardGroup = list:getChildByName("_KW_AWARD_GROUP_" .. i)
        awardGroup:removeAllChildren()
        self._data[index][i] = self._data[index][i] or {}
        local itemCnt = #self._data[index][i]
        for j = 1, itemCnt do
            local nowData = self._data[index][i][j]
            local nowAward = self._awardPoolGoods[nowData] or {image = "", propValue = 0, propId = 0}

            local extInfo = {}
            extInfo.lock = (not self._battlePassInfo.isBuy[i]) or (not haveReachingLevel) -- 是否已购买战令
            extInfo.haveGet = level < self._battlePassInfo.awardLv[i] -- 奖励是否已领取
            -- extInfo.ani = haveReachingLevel and not extInfo.haveGet and not (level < self._battlePassInfo.awardLv[1])
            extInfo.ani = haveReachingLevel and not extInfo.haveGet and not extInfo.lock
            extInfo.isSingleItem = isSingleItem
            extInfo.lv = i
            extInfo.newStyle = true
            extInfo.clickCallback = handler(self, self.awardItemClickCallback)
            extInfo.prize = nowAward
            item = require("lobby.Modules.BattlePass.AwardItemView").new()
            if self._showAni and item._imgAwardPanel then
                item._imgAwardPanel:stopAllActions()
                ActionUtils:runTopFadeIn(item._imgAwardPanel, true, 5/30)
            end
            awardGroup:addChild(item)
            item:init(nowAward, extInfo)
        end
        awardGroup:setContentSize(cc.size(itemSize.width, itemSize.height * (i == 1 and math.max(self._maxAwardCnt[i], 1) or self._maxAwardCnt[i])))
    end
    local indexItem = list:getChildByName("_KW_ITEM_INDEX")
    if indexItem then
        local awardText = indexItem:getChildByName("_KW_TEXT_INDEX")
        if awardText then
            awardText:setString(level)
            if haveReachingLevel then
                awardText:setColor(cc.c3b(0xf5, 0xff, 0xd4))
                awardText:enableOutline(cc.c3b(0xFF, 0x90, 0x00), 2)
            else
                awardText:setColor(cc.c3b(0xFF, 0xFB, 0xCD))
                awardText:disableEffect(cc.LabelEffect.OUTLINE)
            end
        end

        local progressBack = indexItem:getChildByName("_KW_PROGRESS_BACK")
        if progressBack then
            -- progressBack:loadTexture(uiInfo[1].bg1, ccui.TextureResType.plistType)
            if isSingleItem == true then
                progressBack:setVisible(false)
            end
        end
        local progressBack2 = indexItem:getChildByName("_KW_PROGRESS_BACK2")
        if progressBack2 then
            -- progressBack2:loadTexture(uiInfo[1].bg2, ccui.TextureResType.plistType)
        end

        local progressFront = indexItem:getChildByName("_KW_PROGRESS_FRONT")
        if progressFront then
            progressFront:setVisible(haveReachingLevel)
            local parentWidth = indexItem:getContentSize().width
            local scale = 1
            if self._battlePassInfo.level == level then
                scale = 0.5
            end
            progressFront:setContentSize(cc.size(parentWidth * scale, progressFront:getContentSize().height))
        end
        local progressFront2 = indexItem:getChildByName("_KW_PROGRESS_FRONT2")
        if progressFront2 then
            progressFront2:setVisible(haveReachingLevel)
        end
    end
end

function RewardContentView:awardItemClickCallback(extInfo, node)
    if extInfo then
        if extInfo.lock == false and extInfo.haveGet == false then -- 未领取
            XH.lobby:getModule("BattlePass.Lobby"):reqAllReward()
        else
            if extInfo.prize and extInfo.prize.prizeName then
                local pos = node:getWorldPosition()
                local posX = pos.x + node:getContentSize().width / 2
                local posY = pos.y + node:getContentSize().height
                XH.viewManager:openView("BattlePassAwardDescView", nil, {desc = extInfo.prize.prizeName, wPos = cc.p(posX, posY)})
            end
        end
    end
end

function RewardContentView:lastItemEvent(index)
    local newIndex = (math.floor(index / 10) + 1) * 10
    if newIndex > self._data[#self._data].level then
        newIndex = self._data[#self._data].level
    end
    if newIndex == self._lastIndex then
        return
    end
    self._lastIndex = newIndex
    self._staticPanel:removeAllChildren()
    local item = self._itemLevel:clone()
    item:setPosition(0, 0)
    self._staticPanel:addChild(item)
    local levelIndex = 0
    for i = 1, #self._data do
        if self._data[i].level == newIndex then
            levelIndex = i
            break
        end
    end
    self:itemUpdateEvent(item, self._data, levelIndex, true)
end

function RewardContentView:updateLevelAndExp(ani)
    ani = ani == nil and true or ani
    local curExp = XH.lobby:getModule("BattlePass.Lobby"):getCurExp() 
    local curLevel =  XH.lobby:getModule("BattlePass.Lobby"):getCurLevel()
    local levelUpExp = XH.lobby:getModule("BattlePass.Lobby"):getLevelUpExp(nil, curLevel) or 0
    local oldLevel = self._levelTxt:getString()
    if ani == true and oldLevel ~= curLevel then -- 升级动画
        self._levelTxt:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = "animation/Common/JsonAnimation/zzb_ty_text_pop.json", animationName = "animation", boneName = "pop", slotName = "pop"})
        self._levelTxt:runAction(
            cc.Sequence:create(
                cc.DelayTime:create(0.1667),
                cc.CallFunc:create(
                    function()
                        self._levelTxt:setString(curLevel)
                    end
                )
            )
        )
        XH.SpineManager:playAni(self._aniLevelTxt, commonAniPath, "zzb_ty_cbgx", "animation", false)
    else
        self._levelTxt:setString(curLevel)
    end
    self._expTxt:setString(curExp .. "/" .. levelUpExp)
    -- 更新进度条
    self._progressBar:setPercent(math.ceil(curExp / levelUpExp * 100))
    -- 满级提示
    if XH.lobby:getModule("BattlePass.Lobby"):isMaxLevel() then
        self._expTxt:setVisible(false)
        self._maxLevelTxt:setVisible(true)
        self._progressBar:setPercent(100)
        self._btnBuyExp:setVisible(false)
    end
    local percent = self._progressBar:getPercent()
    local pos = cc.p(self._progressBar:getPosition())
    self._aniProgressBar:setPosition(cc.p(pos.x * percent / 100, pos.y))
    self._aniProgressBar:setScale(percent / 100)
end

function RewardContentView:onBuyExp()
    XH.viewManager:openView("LobbyBattlePassBuyLevelView")
    XH.lobby:getModule("BattlePass.Lobby"):throwBtnClickData("购买等级")
end

function RewardContentView:onEventBattlePassResp(event)
    local ani = event.data and event.data.ani or false
    self:setData()
    self:updateLevelAndExp(ani)
end

function RewardContentView:scrollViewDidScrollEvent()
    XH.viewManager:closeView("BattlePassAwardDescView")
end

return RewardContentView
