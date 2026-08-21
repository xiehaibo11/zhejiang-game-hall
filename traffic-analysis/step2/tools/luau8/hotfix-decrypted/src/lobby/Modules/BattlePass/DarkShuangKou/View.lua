local BattlePassDarkShuangKouView = class("BattlePassDarkShuangKouView", XH.ViewBase)
local ViewAniConfig = require("app.Base.ViewAniConfig")

-- UI名字定义
function BattlePassDarkShuangKouView:getCSBPath()
    return "hall/CSB/BattlePass/DarkShuangKou/View.csb"
end
local battlePassName = {[1] = "白银", [2] = "黄金", [3] = "至尊"}

--- 获得节点的绑定信息
function BattlePassDarkShuangKouView:getBindingInfo()
    return {
        ["_KW_ROOT_LAYER"] = {varName = "_rootLayer"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"},
        ["_KW_TAB_ITEM_"] = {varName = "_tabItem", beginIndex = 1, endIndex = 3},
        ["_KW_PANEL_PAGE_"] = {varName = "_panelPage", beginIndex = 1, endIndex = 3},
        ["_KW_TOTAL_ROUND"] = {varName = "_textTotalRound"},
        ["_KW_ANI_LIGHT"] = {varName = "_aniLight"},
        ["_KW_ANI_CHARGE_POP"] = {varName = "_aniChargePop"},
        ["_KW_TEXT_CHARGE_POP"] = {varName = "_textChargePop"},
        ["_KW_IMG_CHARGE_POP"] = {varName = "_imgChargePop"},
        ["_KW_TEXT_REMAIN_TIME"] = {varName = "_textRemainTime"},
        ["_KW_IMG_TITLE"] = {varName = "_imgTitle"},
        ["_KW_ANI_LIGHT2"] = {varName = "_aniLight2"},
        ["_KW_ANI_BOOM"] = {varName = "_aniBoom"},
        ["_KW_TEXT_RECHARGE_PRICE"] = {varName = "_textRechagePrice"},
        ["_KW_BTN_RECHARGE"] = {varName = "_btnRecharge", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventRecharge"},
        ["_KW_BTN_GET_AWARD"] = {varName = "_btnGetAward", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventGetAward"},
        ["_KW_BTN_HELP"] = {varName = "_btnHelp", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventHelp"},
        ["_KW_BTN_PREVIEW"] = {varName = "_btnPreview", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventPreview"},
        ["_KW_BTN_BACK"] = {varName = "_btnBack", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventClose"}
    }
end

function BattlePassDarkShuangKouView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("BattlePass.DarkShuangKou"), eventKeyName = "KW_EVENT_UPDATE_UI", callBack = "updateUI"},
        {module = XH.sdkManager, eventKeyName = "EVENT_IAP_CALLBACK", callBack = "respBuyProp"}
    }
end

function BattlePassDarkShuangKouView:ctor(areaId)
    BattlePassDarkShuangKouView.super.ctor(self)

    self._tabIndex = 0

    local actids = XH.lobby:getModule("BattlePass.DarkShuangKou"):getActivityIds()
    local minIndex = 4
    for i = 1, 3 do
        local item = self["_tabItem" .. i]
        item:addTouchEventListener(handler(self, self.onClickItem))
        item:setTag(i)
        if actids[i] == 0 or not XH.lobby:getModule("BattlePass.DarkShuangKou"):checkActivityOpenByIndex(i) then
            item:setVisible(false)
        else
            minIndex = math.min(minIndex, i)
        end
    end

    self:flushTabRedPoint()

    if minIndex <= 3 then
        self:clickTabEnd(minIndex, true)
    end
end

function BattlePassDarkShuangKouView:getAniConfig()
    return {aniType = ViewAniConfig.AniName.NORMAL, popNode = self._rootLayer, btnList = {self._btnRecharge, self._btnGetAward}}
end

function BattlePassDarkShuangKouView:onEnter()
    XH.SpineManager:playAni(self._aniLight, "res/animation/Common/", "zzb_ty_taiyangguang", "animation", true)
    XH.SpineManager:playAni(self._aniLight2, "res/animation/Common/", "zzb_ty_piaolizi", "animation2", true)

    XH.SpineManager:playAni(self._aniBoom, "res/animation/Common/", "zzb_ty_tcbk", "animation2")

    self:runAction(
        cc.Sequence:create(
            cc.DelayTime:create(1.0),
            cc.CallFunc:create(
                function()
                    local actids = XH.lobby:getModule("BattlePass.DarkShuangKou"):getActivityIds()
                    for i = 1, 3 do
                        if actids[i] ~= 0 and XH.lobby:getModule("BattlePass.DarkShuangKou"):checkActivityOpenByIndex(i) then
                            XH.lobby:getModule("BattlePass.DarkShuangKou"):reqActivityInfo(i)
                        end
                    end
                end
            )
        )
    )
end

function BattlePassDarkShuangKouView:updateUI(event)
    self:flushTabRedPoint()
    self:flushContentUI()
end

function BattlePassDarkShuangKouView:flushTabRedPoint()
    for index = 1, 3 do
        local item = self["_tabItem" .. index]
        local canGet = XH.lobby:getModule("BattlePass.DarkShuangKou"):haveCanGet(index)
        item:getChildByName("_KW_TAB_ITEM_RED_POINT"):setVisible(canGet)
    end
end

function BattlePassDarkShuangKouView:onClickItem(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local selectIndex = send:getTag()
    self:clickTabEnd(tonumber(selectIndex))
end

function BattlePassDarkShuangKouView:clickTabEnd(selectIndex, first)
    self._tabIndex = selectIndex
    for index = 1, 3 do
        local item = self["_tabItem" .. index]
        self["_panelPage" .. index]:setVisible(index == selectIndex)
        item:getChildByName("_KW_TAB_ITEM_UNCLICK"):setVisible(index ~= selectIndex)
        item:getChildByName("_KW_TAB_ITEM_CLICK"):setVisible(index == selectIndex)
    end

    if self["_panelPage" .. self._tabIndex]:getChildrenCount() <= 0 then
        local node = require("lobby.Modules.BattlePass.DarkShuangKou.ContentView").new({tabIndex = self._tabIndex})
        if node then
            node:setTag(self._tabIndex)
            self["_panelPage" .. self._tabIndex]:addChild(node)
        end
    else
        local node = self["_panelPage" .. self._tabIndex]:getChildByTag(self._tabIndex)
        if node then
            node:updateUI()
        end
    end
    self:flushContentUI(first)
end

function BattlePassDarkShuangKouView:flushContentUI(first)
    local battlePassInfo = XH.lobby:getModule("BattlePass.DarkShuangKou"):getBattlePassInfo(self._tabIndex)
    self._textTotalRound:setString(battlePassInfo.level)

    local picName = {"battlepass_zzzl_tit_04.png", "battlepass_zzzl_tit_05.png", "battlepass_zzzl_tit_03.png"}
    self._imgTitle:loadTexture(picName[self._tabIndex], ccui.TextureResType.plistType)

    -- 活动剩余时间
    self._textRemainTime:stopAllActions()
    local remainTime = battlePassInfo.endTime - XH.lobby:getModule("Shop"):getServerTime()
    if remainTime >= 0 then
        local d = math.floor(remainTime / 86400)
        local h = math.floor((remainTime - d * 86400) / 3600)
        local m = math.floor((remainTime - d * 86400 - h * 3600) / 60)
        if remainTime > 86400 then
            self._textRemainTime:setString("活动时间:剩余" .. string.format("%d天%02d小时", d, h))
        elseif remainTime > 300 then -- 大于5分钟
            self._textRemainTime:setString("活动时间:剩余" .. string.format("%02d小时%02d分钟", h, m))
        else
            self._textRemainTime:runAction(
                cc.RepeatForever:create(
                    cc.Sequence:create(
                        cc.DelayTime:create(1),
                        cc.CallFunc:create(
                            function()
                                local time = battlePassInfo.endTime - XH.lobby:getModule("Shop"):getServerTime()
                                self._textRemainTime:setString("活动时间:剩余" .. string.format("%02d分钟%02d秒", math.floor(time / 60), math.floor(time % 60)))
                                if time <= 0 then
                                    self._textRemainTime:stopAllActions()
                                    self:close()
                                end
                            end
                        )
                    )
                )
            )
            self._textRemainTime:setString("活动时间:剩余" .. string.format("%02d分钟%02d秒", math.floor(remainTime / 60), math.floor(remainTime % 60)))
        end
    else
        self._textRemainTime:setString("")
        XH.lobby:getModule("BattlePass.DarkShuangKou"):checkActivityIconOpen()
        XH.TipTool.showToast("活动已结束")
        self:close()
        return
    end

    -- 一键领取按钮
    local canGet = XH.lobby:getModule("BattlePass.DarkShuangKou"):haveCanGet(self._tabIndex)
    self._btnGetAward:setVisible(canGet)

    -- 气泡显示
    local awardData = XH.lobby:getModule("BattlePass.DarkShuangKou"):getAwardData(self._tabIndex)
    local totalAwardCnt = 0
    for i = 1, #awardData do
        if awardData[i].level == 0 then
            local award = {}
            table.insertto(award, awardData[i][2])
            table.insertto(award, awardData[i][3])

            local awardPoolGoods = XH.lobby:getModule("BattlePass"):getAwardPoolGoods()
            for j = 1, #award do
                local goods = awardPoolGoods[award[j]]
                if goods and goods.propId == XH.areaData:getGoldPropId() then
                    totalAwardCnt = totalAwardCnt + goods.propValue
                end
            end
            break
        end
    end
    self._imgChargePop:setVisible(totalAwardCnt ~= 0)
    if totalAwardCnt ~= 0 then
        -- 气泡扫光动画
        XH.SpineManager:playAni(self._aniChargePop, "animation/Common/", "zzb_ty_jbsg", "animation", true)
        self._textChargePop:setString(string.format("购买可领%s金币", XH.lobby:getModule("BattlePass"):getNumberString(totalAwardCnt)))
    end

    -- 购买按钮
    self._needBuyPropInfo = nil
    if battlePassInfo.isBuy[2] == false then
        local battlePassShopList = XH.lobby:getModule("BattlePass"):getBattlePassShopList()
        local battlePassConfig = XH.lobby:getModule("BattlePass.DarkShuangKou"):getBattlePassConfig(self._tabIndex)
        if battlePassConfig and battlePassShopList then
            for i = 2, 2 do -- 游戏只需要关注第二个购买项
                for j = 1, #battlePassConfig.buyProps[i] do
                    for ls = 1, #battlePassShopList.goods_list do
                        if tonumber(battlePassShopList.goods_list[ls].value) == battlePassConfig.buyProps[i][j] then
                            self._needBuyPropInfo = battlePassShopList.goods_list[ls]
                            self._needBuyPropInfo.gameid = 30579
                            break
                        end
                    end
                end
            end
        end
    end
    self._btnRecharge:setVisible(self._needBuyPropInfo ~= nil)
    if self._needBuyPropInfo ~= nil then
        self._textRechagePrice:setString(XH.lobby:getModule("BattlePass"):getYmnPriceByProductId(self._needBuyPropInfo.product_id) or math.floor(self._needBuyPropInfo.price / 100))
    end
end

function BattlePassDarkShuangKouView:respBuyProp(event)
    local code = event.data.code
    XH.TipTool.hideLoading()

    if code == 200 then
        -- 充值有延迟，重新刷新
        XH.SysTool.performDelayOnce(
            function()
                XH.playerData:flushPlayerDrop()
                XH.lobby:getModule("BattlePass.DarkShuangKou"):reqActivityInfo(1)
                XH.lobby:getModule("BattlePass.DarkShuangKou"):reqActivityInfo(2)
                XH.lobby:getModule("BattlePass.DarkShuangKou"):reqActivityInfo(3)
            end,
            2
        )
    end
end

function BattlePassDarkShuangKouView:onTouchEventRecharge(send, event)
    if not XH.lobby:getModule("BattlePass.DarkShuangKou"):checkActivityOpenByIndex(self._tabIndex) then
        XH.lobby:getModule("BattlePass.DarkShuangKou"):checkActivityIconOpen()
        XH.TipTool.showToast("活动已结束")
        self:close()
        return
    end
    local product = self._needBuyPropInfo
    product.real_price = XH.lobby:getModule("BattlePass"):getYmnPriceByProductId(self._needBuyPropInfo.product_id) or product.price / 100
    XH.lobby:getModule("BattlePass"):reqBuy(product, nil, true)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25042714, {page_item_id = battlePassName[self._tabIndex], block_label = "解锁战令"})
end

function BattlePassDarkShuangKouView:onTouchEventGetAward(send, event)
    XH.lobby:getModule("BattlePass.DarkShuangKou"):getAward(self._tabIndex)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25042714, {page_item_id = battlePassName[self._tabIndex], block_label = "一键领取"})
end

function BattlePassDarkShuangKouView:onTouchEventHelp(send, event)
    local textTime = ""
    local content = "活动内容：\
    * 活动开始后，通过积累暗斗双扣的对局数，可在暗斗战令\
    中领取相应的奖励\
    * 暗斗战令共有3个档位(白银、黄金、至尊)，对局局数共用\
    * 活动限时一周，奖励请尽快领取哦"
    pcall(
        function()
            local battlePassInfo = XH.lobby:getModule("BattlePass.DarkShuangKou"):getBattlePassInfo(self._tabIndex)
            local startDate = os.date("%Y年%m月%d日 %H:%M:%S", battlePassInfo.startTime)
            local endDate = os.date("%Y年%m月%d日 %H:%M:%S", battlePassInfo.endTime)
            textTime = string.format("活动时间：\n    %s - %s", startDate, endDate)
        end
    )
    XH.viewManager:openView("BattlePassRuleView", nil, {textTime = textTime, content = content})
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25042714, {page_item_id = battlePassName[self._tabIndex], block_label = "规则"})
end

function BattlePassDarkShuangKouView:onTouchEventPreview(send, event)
    XH.viewManager:openView("BattlePassDarkShuangKouAwardPreview", nil, {tabIndex = self._tabIndex})
end

function BattlePassDarkShuangKouView:addBtnPopAction(node, time)
    node:setOpacity(0)
    node:runAction(
        cc.Sequence:create(
            cc.DelayTime:create(time),
            cc.CallFunc:create(
                function()
                    node:setVisible(true)
                    node:tryAddLuaComponent(
                        cc.ext.CompSpineAction,
                        {jsonFilePath = "animation/Common/JsonAnimation/zzb_ty_btn.json", animationName = "animation", boneName = "btnPop", slotName = "btnPop"}
                    )
                end
            )
        )
    )
end

function BattlePassDarkShuangKouView:onTouchEventClose(send, event)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25042714, {page_item_id = battlePassName[self._tabIndex], block_label = "关闭"})
    self:close()
end

return BattlePassDarkShuangKouView
�9