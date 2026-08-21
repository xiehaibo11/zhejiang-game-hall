local ResultView = NG.GAME.gameClass("ResultView", NG.ViewBase)
local ShowPropFunction = require("lobby.Modules.BagSysNew.ShowPropFunction")
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")
local GoldLaunchConfig = require("lobby.Modules.GoldLaunch.Config")

function ResultView:ctor()
    ResultView.super.ctor(self)
    self:initView()
    self:initData()
end

function ResultView:getCSBPath()
    return "cocosStudio/GoldNew/Game/HPLandlord/CSB/Result/ResultLayer.csb"
end

function ResultView:getBindingInfo()
    return {
        -- ["_KW_IMG_CKT"] = { varName = "_testCKT", type = NG.UI_TYPE.IMAGE }, --参考图
        ["_KW_BTN_LEAVE"] = { varName = "_leaveBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onLeaveBtnClicked", style = 3 }, -- 退出按钮
        ["_KW_BTN_LOOK"] = { varName = "_lookBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onLookBtnClicked", style = 3 }, -- 查看牌型按钮
        ["_KW_BTN_CHANGE_TABLE"] = { varName = "_changeBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onChangeBtnClicked", style = 3 }, -- 换桌按钮
        ["_KW_BTN_GOON"] = { varName = "_goonBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onGoOnBtnClicked", style = 3 }, -- 继续游戏按钮（带倒计时）
        ["_KW_BTN_STATRGAME"] = { varName = "_startGameBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onStartGameBtnClicked", style = 3 }, -- 继续游戏按钮
        ["_KW_LABEL_TIME"] = { varName = "_labelTime", type = NG.UI_TYPE.TEXT }, -- 倒计时文本
        ["_KW_NODE_MIDDLE"] = { varName = "_infoPanel", type = NG.UI_TYPE.NODE }, -- 信息窗
        ["_KW_NODE_ANI"] = { varName = "_aniPanel", type = NG.UI_TYPE.NODE }, -- 背景动画容器
        ["_KW_NODE_WIN1"] = { varName = "_winPanel1", type = NG.UI_TYPE.NODE }, -- 胜利背景
        ["_KW_NODE_WIN2"] = { varName = "_winPanel2", type = NG.UI_TYPE.NODE }, -- 胜利背景
        ["_KW_NODE_WIN3"] = { varName = "_winPanel3", type = NG.UI_TYPE.NODE }, -- 胜利背景
        ["_KW_NODE_LOSE1"] = { varName = "_losePanel1", type = NG.UI_TYPE.NODE }, -- 失败背景
        ["_KW_NODE_LOSE2"] = { varName = "_losePanel2", type = NG.UI_TYPE.NODE }, -- 失败背景
        ["_KW_NODE_LOSE3"] = { varName = "_losePanel3", type = NG.UI_TYPE.NODE }, -- 失败背景
        ["_KW_LABEL_WIN_SCORE1"] = { varName = "_winScore1" }, -- 胜利分数
        ["_KW_LABEL_WIN_SCORE2"] = { varName = "_winScore2" }, -- 胜利分数
        ["_KW_LABEL_WIN_SCORE3"] = { varName = "_winScore3" }, -- 胜利分数
        ["_KW_LABEL_LOSE_SCORE1"] = { varName = "_loseScore1" }, -- 失败分数
        ["_KW_LABEL_LOSE_SCORE2"] = { varName = "_loseScore2" }, -- 失败分数
        ["_KW_LABEL_LOSE_SCORE3"] = { varName = "_loseScore3" }, -- 失败分数
        ["_KW_LABEL_WIN_NAME1"] = { varName = "_winName1" }, -- 胜利名字
        ["_KW_LABEL_WIN_NAME2"] = { varName = "_winName2" }, -- 胜利名字
        ["_KW_LABEL_WIN_NAME3"] = { varName = "_winName3" }, -- 胜利名字
        ["_KW_LABEL_LOSE_NAME1"] = { varName = "_loseName1" }, -- 失败名字
        ["_KW_LABEL_LOSE_NAME2"] = { varName = "_loseName2" }, -- 失败名字
        ["_KW_LABEL_LOSE_NAME3"] = { varName = "_loseName3" }, -- 失败名字
        ["_KW_LABEL_WIN_BASESCORE1"] = { varName = "_winBaseScore1" }, -- 胜利底分
        ["_KW_LABEL_WIN_BASESCORE2"] = { varName = "_winBaseScore2" }, -- 胜利底分
        ["_KW_LABEL_WIN_BASESCORE3"] = { varName = "_winBaseScore3" }, -- 胜利底分
        ["_KW_LABEL_LOSE_BASESCORE1"] = { varName = "_loseBaseScore1" }, -- 失败底分
        ["_KW_LABEL_LOSE_BASESCORE2"] = { varName = "_loseBaseScore2" }, -- 失败底分
        ["_KW_LABEL_LOSE_BASESCORE3"] = { varName = "_loseBaseScore3" }, -- 失败底分
        ["_KW_LABEL_WIN_MULT1"] = { varName = "_winBaseMult1" }, -- 胜利倍速
        ["_KW_LABEL_WIN_MULT2"] = { varName = "_winBaseMult2" }, -- 胜利倍速
        ["_KW_LABEL_WIN_MULT3"] = { varName = "_winBaseMult3" }, -- 胜利倍速
        ["_KW_LABEL_LOSE_MULT1"] = { varName = "_loseBaseMult1" }, -- 失败倍速
        ["_KW_LABEL_LOSE_MULT2"] = { varName = "_loseBaseMult2" }, -- 失败倍速
        ["_KW_LABEL_LOSE_MULT3"] = { varName = "_loseBaseMult3" }, -- 失败倍速
        ["_KW_IMG_MIN1"] = { varName = "_minImg1", type = NG.UI_TYPE.IMAGE }, -- 破产tag
        ["_KW_IMG_MIN2"] = { varName = "_minImg2", type = NG.UI_TYPE.IMAGE }, -- 破产tag
        ["_KW_IMG_MIN3"] = { varName = "_minImg3", type = NG.UI_TYPE.IMAGE }, -- 破产tag
        ["_KW_IMG_MAX1"] = { varName = "_maxImg1", type = NG.UI_TYPE.IMAGE }, -- 封顶tag
        ["_KW_IMG_MAX2"] = { varName = "_maxImg2", type = NG.UI_TYPE.IMAGE }, -- 封顶tag
        ["_KW_IMG_MAX3"] = { varName = "_maxImg3", type = NG.UI_TYPE.IMAGE }, -- 封底tag
        ["_KW_IMG_BANKER1"] = { varName = "_bankImg1", type = NG.UI_TYPE.IMAGE }, -- 地主tag
        ["_KW_IMG_BANKER2"] = { varName = "_bankImg2", type = NG.UI_TYPE.IMAGE }, -- 地主tag
        ["_KW_IMG_BANKER3"] = { varName = "_bankImg3", type = NG.UI_TYPE.IMAGE }, -- 地主tag
        ["_KW_IMG_HEAD_GIRL1"] = { varName = "_girlImg1", type = NG.UI_TYPE.IMAGE }, -- 女性头像
        ["_KW_IMG_HEAD_GIRL2"] = { varName = "_girlImg2", type = NG.UI_TYPE.IMAGE }, -- 女性头像
        ["_KW_IMG_HEAD_GIRL3"] = { varName = "_girlImg3", type = NG.UI_TYPE.IMAGE }, -- 女性头像
        ["_KW_IMG_HEAD_BOY1"] = { varName = "_boyImg1", type = NG.UI_TYPE.IMAGE }, -- 男性头像
        ["_KW_IMG_HEAD_BOY2"] = { varName = "_boyImg2", type = NG.UI_TYPE.IMAGE }, -- 男性头像
        ["_KW_IMG_HEAD_BOY3"] = { varName = "_boyImg3", type = NG.UI_TYPE.IMAGE }, -- 男性头像
        ["_KW_IMG_HEAD_FRAME_TMP1"] = { varName = "_head1", type = NG.UI_TYPE.IMAGE }, -- 头像
        ["_KW_IMG_HEAD_FRAME_TMP2"] = { varName = "_head2", type = NG.UI_TYPE.IMAGE }, -- 头像
        ["_KW_IMG_HEAD_FRAME_TMP3"] = { varName = "_head3", type = NG.UI_TYPE.IMAGE }, -- 头像
        ["_KW_DIS_ICON"] = {varName = "_KW_DIS_ICON"},
    }
end

function ResultView:initView()
    -- self._testCKT:setVisible(false)
    self.winBgArr = { self._winPanel2, self._winPanel1, self._winPanel3 }
    self.loseBgArr = { self._losePanel2, self._losePanel1, self._losePanel3 }
    self.winScoreArr = { self._winScore2, self._winScore1, self._winScore3 }
    self.loseScoreArr = { self._loseScore2, self._loseScore1, self._loseScore3 }
    self.winNickNameArr = { self._winName2, self._winName1, self._winName3 }
    self.loseNickNameArr = { self._loseName2, self._loseName1, self._loseName3 }
    self.winBaseScoreArr = { self._winBaseScore2, self._winBaseScore1, self._winBaseScore3 }
    self.loseBaseScoreArr = { self._loseBaseScore2, self._loseBaseScore1, self._loseBaseScore3 }
    self.winMultArr = { self._winBaseMult2, self._winBaseMult1, self._winBaseMult3 }
    self.loseMultArr = { self._loseBaseMult2, self._loseBaseMult1, self._loseBaseMult3 }
    self.minIconArr = { self._minImg2, self._minImg1, self._minImg3 }
    self.maxIconArr = { self._maxImg2, self._maxImg1, self._maxImg3 }
    self.bankerIconArr = { self._bankImg2, self._bankImg1, self._bankImg3 }
    self.girlArr = { self._girlImg2, self._girlImg1, self._girlImg3 }
    self.boyArr = { self._boyImg2, self._boyImg1, self._boyImg3 }
    self.headArr = { self._head2, self._head1, self._head3 }
    local disIcon = require("newgold.GoldLobby.Modules.GoldBankrupt.GoldDisIconView").new({})
    if disIcon then
        self["_KW_DIS_ICON"]:addChild(disIcon)
    end
end

function ResultView:getTableData()
    return NG.goldGame:getModule("GameMain"):getData()
end

-- 是否为异常解散
function ResultView:isLongTimeDismiss()
    local isDis = false
    local resultData = self:getTableData():getResult()
    for i = 1, 3 do
        if resultData.nResult[i] ~= 1 and resultData.nResult[i] ~= 2 then
            isDis = true
            NG.TipTool.showToast("房间因超时未出牌，已解散")
            break
        end
    end
    return isDis
end

function ResultView:initData()
    self._goonBtn:setVisible(false)
    self._lookBtn:setVisible(false)
    self._changeBtn:setVisible(false)
    self._startGameBtn:setVisible(false)
    self._infoPanel:setOpacity(0)
    local resultData = self:getTableData():getResult()
    -- dump(resultData,"resultData")
    if resultData then
        for i = 1, 3 do
            local data = { score = resultData.nWinLost[i] or 0, resultType = resultData.nResult[i] or 0, mult = resultData.nMult[i] or 0 }
            self:setPlayerItem(i - 1, data) -- 设置玩家信息
        end
    end
end

-- 设置背景动画
function ResultView:setBgAni(resultType)
    local params = { path = "NewGoldRes/Spine/HPLandlord/Result/", tex = "Hp_js.json", ske = "Hp_js.atlas", armatureName = "animation" .. resultType .. "_1" }
    local spineNode = sp.SkeletonAnimation:create(params.path .. params.tex, params.path .. params.ske, 1)
    local isStep1Finish = false
    if spineNode then
        spineNode:setPosition(cc.p(display.cx, display.cy))
        self._aniPanel:addChild(spineNode)
        spineNode:setScale(1.44)
        spineNode:setAnimation(0, "" .. params.armatureName, false)
        spineNode:registerSpineEventHandler(function(event)
            if not isStep1Finish and event.type == 'complete' then
                isStep1Finish = true
                spineNode:setAnimation(0, "animation" .. resultType .. "_2", true)
            end
        end, sp.EventType.ANIMATION_COMPLETE)
    end
    self:performWithDelay(function()
        if not tolua.isnull(self) then
            self:showPlayerInfoAni()
        end
    end, 0.7)
    self:performWithDelay(function()
        if not tolua.isnull(self) then
            self:showBtnAni()
            self:showActView()
        end
    end, 1.5)
end

-- 请求活动
function ResultView:showActView()
    if self._isShowAct then
        if XH.lobby:getModule("GoldLaunch"):canGetAward() then
            NG.viewManager:openView("NewGold_GoldLaunchView", nil, { type = GoldLaunchConfig.Type.AWARD })
            return
        end
        NG.goldGame:getModule("GameMain"):openPlayAwardInResult()
        local resultData = self:getTableData():getResult()
        if resultData then
            for i = 1, 3 do
                local localSeat = NG.GAME.roomTableData:seatToLocal(i - 1)
                if localSeat == GameMainDefine.SELF_LOCAL_SEAT then
                    NG.goldGame:getModule("GameMain"):judgeShowView(resultData.nWinLost[i] or 0)
                end
            end
        end
    end
end

function ResultView:setPlayerItem(seat, data)
    dump(data, "resultData")
    local score = data.score
    local resultType = data.resultType
    local mult = data.mult
    local localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    local player = NG.GAME.roomTableData:getPlayerBySeatCopy(seat)
    local baseScore = self:getTableData():getBase()
    local brokes = self:getTableData():getBroke()
    local caps = self:getTableData():getCap()
    -- dump(seat,"seat")
    -- dump(brokes,"brokes")
    -- dump(caps,"caps")
    -- dump(baseScore,"baseScore")

    local tmpX = 0
    local limitCount = 10
    if localSeat == GameMainDefine.SELF_LOCAL_SEAT then
        tmpX = self.maxIconArr[localSeat]:getPositionX() - self.winScoreArr[localSeat]:getContentSize().width
        if resultType == 1 then
            self:setBgAni(1) -- 设置胜利动画
        else
            self:setBgAni(2) -- 设置失败动画
        end
    end

    if resultType == 1 then
        self.winBgArr[localSeat]:setVisible(true)
        self.loseBgArr[localSeat]:setVisible(false)
        self.winScoreArr[localSeat]:setString("+" .. NG.StringTool.dealBigNumEx2(score, 2))
        local nickname = player._nickname or ""
        if string.len(player._nickname) > limitCount then
            local validBytes = NG.StringTool.getMinimumValidBytesUTF8(player._nickname, limitCount)
            nickname = string.sub(player._nickname, 1, validBytes) .. "..."
            self.winNickNameArr[localSeat]:setString(nickname)
            if self.winNickNameArr[localSeat]:getContentSize().width > 99 then
                nickname = string.sub(player._nickname, 1, validBytes)
                self.winNickNameArr[localSeat]:setString(nickname)
            end
        else
            self.winNickNameArr[localSeat]:setString(nickname)
        end

        self.winBaseScoreArr[localSeat]:setString(baseScore)
        self.winMultArr[localSeat]:setString(mult)
    else
        self.loseBgArr[localSeat]:setVisible(true)
        self.winBgArr[localSeat]:setVisible(false)
        self.loseScoreArr[localSeat]:setString(NG.StringTool.dealBigNumEx2(score, 2))
        local nickname = player._nickname or ""
        if string.len(player._nickname) > limitCount then
            local validBytes = NG.StringTool.getMinimumValidBytesUTF8(player._nickname, limitCount)
            nickname = string.sub(player._nickname, 1, validBytes) .. "..."
            self.loseNickNameArr[localSeat]:setString(nickname)
            if self.loseNickNameArr[localSeat]:getContentSize().width > 99 then
                nickname = string.sub(player._nickname, 1, validBytes)
                self.loseNickNameArr[localSeat]:setString(nickname)
            end
        else
            self.loseNickNameArr[localSeat]:setString(nickname)
        end
        self.loseBaseScoreArr[localSeat]:setString(baseScore)
        self.loseMultArr[localSeat]:setString(mult)
    end
    self.maxIconArr[localSeat]:setVisible(caps[seat + 1])
    self.minIconArr[localSeat]:setVisible(brokes[seat + 1])
    self.bankerIconArr[localSeat]:setVisible(self:getTableData():getBankerSeat() == localSeat)
    if localSeat == GameMainDefine.SELF_LOCAL_SEAT then
        self.maxIconArr[localSeat]:setPositionX(self.winScoreArr[localSeat]:getContentSize().width + tmpX)
        self.minIconArr[localSeat]:setPositionX(self.loseScoreArr[localSeat]:getContentSize().width + tmpX)
    end

    self:updateHead(localSeat, player)
end

function ResultView:showPlayerInfoAni()
    self._infoPanel:setScaleY(0)
    local fadeIn = cc.FadeIn:create(0.13) -- 创建 FadeIn 动作对象
    -- 创建 ScaleTo 动作对象
    local scaleTo1 = cc.ScaleTo:create(0.13, 1.44, 1.44 * 1.2) -- 在 2 秒钟内将缩放比例从 0 渐变到 1.1
    local scaleTo2 = cc.ScaleTo:create(0.2, 1.44, 1.44) -- 在 2 秒钟内将缩放比例从 1.1 渐变到 1.0

    -- 使用 Sequence 动作类将两个动作组合成一个序列动作对象
    local sequence = cc.Sequence:create(scaleTo1, scaleTo2)

    -- 将动作对象绑定到精灵节点上，让它开始执行动画
    self._infoPanel:runAction(fadeIn)
    self._infoPanel:runAction(sequence)
end

function ResultView:showBtnAni()
    local isDis = self:isLongTimeDismiss()
    self._lookBtn:setVisible(not isDis)
    self._changeBtn:setVisible(true)
    self._goonBtn:setVisible(true)
    self._lookBtn:setOpacity(0)
    self._changeBtn:setOpacity(0)
    self._goonBtn:setOpacity(0)

    local fadeIn1 = cc.FadeIn:create(0.5) -- 创建 FadeIn 动作对象
    local fadeIn2 = cc.FadeIn:create(0.5) -- 创建 FadeIn 动作对象
    local fadeIn3 = cc.FadeIn:create(0.5) -- 创建 FadeIn 动作对象
    self._lookBtn:runAction(fadeIn1)
    self._changeBtn:runAction(fadeIn2)
    self._goonBtn:runAction(fadeIn3)

    self._lastTime = 16
    self:onSetTime()
    schedule(self, handler(self, self.onSetTime), 1)
end

-- 倒计时
function ResultView:onSetTime()
    self._lastTime = self._lastTime - 1
    if self._lastTime < 0 then
        self._goonBtn:setVisible(false)
        self._startGameBtn:setVisible(true)
    else
        self._labelTime:setString("（" .. self._lastTime .. "）")
    end
end

function ResultView:updateHead(localSeat, player)
    local sex = player.sex or 1
    if sex == 1 then
        self.boyArr[localSeat]:setVisible(true)
        self.girlArr[localSeat]:setVisible(false)
    else
        self.boyArr[localSeat]:setVisible(false)
        self.girlArr[localSeat]:setVisible(true)
    end
    self.headArr[localSeat]:setVisible(false)
    local headUrl = player._headUrl or ""
    if headUrl then
        -- 头像
        local size = self.headArr[localSeat]:getContentSize()
        local headImgFrame = NG.RemoteImage.new()
        headImgFrame:ignoreContentAdaptWithSize(false)
        headImgFrame:addTo(self.headArr[localSeat])
        headImgFrame:setPosition(size.width / 2, size.height / 2)
        headImgFrame:setContentSize(75, 75)
        headImgFrame:setUrl(headUrl)
        self.headArr[localSeat]:setVisible(true)
    end
end

-- 退出
function ResultView:onLeaveBtnClicked(send, eventType)
    NG.goldGame:exit()
end

-- 查看牌型
function ResultView:onLookBtnClicked(send, eventType)
    print("查看牌型按钮")
    -- @todo调用桌面逻辑
    self:close()
    NG.goldGame:getModule("GameMain"):showLookCard()
end

function ResultView:changeTable(isChangeTable)
    NG.goldGame:getModule("GameMain"):showContinueBtn()
    NG.goldGame:getModule("GameMain"):changeTableWithResult(isChangeTable)
end

-- 换桌
function ResultView:onChangeBtnClicked(send, eventType)
    self:changeTable(true)
    self:close()
end

-- 继续游戏按钮（带倒计时）
function ResultView:onGoOnBtnClicked(send, eventType)
    if NG.GAME.roomTableData:isPlayerFull() then
        NG.goldGame:getModule("GameMain"):sendGameReady()
        self:close()
        return
    end
    self:changeTable(false)
    self:close()
end

-- 继续游戏按钮（无倒计时）
function ResultView:onStartGameBtnClicked(send, eventType)
    self:changeTable(false)
    self:close()
end

function ResultView:onCleanup()
    ResultView.super.onCleanup(self)
end

function ResultView:showSelf(isShowAct)
    self._isShowAct = isShowAct
    local parent = display.getRunningScene()
    parent:addChild(self, NG.ZORDER.WINDOW)
end

return ResultView   �G  