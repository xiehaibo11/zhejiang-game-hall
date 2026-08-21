local ResultView = NG.GAME.gameClass("ResultView", NG.ViewBase)
local ShowPropFunction = require("lobby.Modules.BagSysNew.ShowPropFunction")
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")

function ResultView:ctor()
    ResultView.super.ctor(self)
    -- self:initData()
    self:initView()
end

function ResultView:getCSBPath()
    return "cocosStudio/GoldNew/Game/MahXueLiu/CSB/Result/Result.csb"
end

function ResultView:getBindingInfo()
    return {
        ["_close"] = { varName = "_leaveBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onLeaveBtnClicked", style = 3 }, -- 退出按钮
        ["_btnLook"] = { varName = "_lookBtn", type = NG.UI_TYPE.BUTTON, onTouch = "onLookBtn", style = 3 }, -- 查看牌型按钮
        --["_KW_BTN_CHANGE_TABLE"] = { varName = "_changeBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onChangeBtnClicked", style = 3 }, -- 换桌按钮
        -- ["_btnNext"] = { varName = "_goonBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onGoOnBtnClicked", style = 3 }, -- 继续游戏按钮（带倒计时）
        ["_btnNext"] = { varName = "_startGameBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onStartGameBtnClicked", style = 3 }, -- 继续游戏按钮

        ["_headWin"] = { varName = "_headWin", type = NG.UI_TYPE.IMAGE },
        ["_txtWinJia"] = { varName = "_txtWinJia" },
        ["_txtWinHuTimes"] = { varName = "_txtWinHuTimes" },
        ["_txtWinBei"] = { varName = "_txtWinBei" },
        ["_txtWinNum"] = { varName = "_txtWinNum" },
        ["_txtWinFan"] = { varName = "_txtWinFan" },
        ["_fansv"] = { varName = "_fansv" },
        ["_txtWinName"] = { varName = "_txtWinName" },
        ["_mahPos"] = { varName = "_mahPos" },
        ["_item1"] = { varName = "_item1" },
        ["_item2"] = { varName = "_item2" },
        ["_item3"] = { varName = "_item3" },
    }
end

function ResultView:initView()
    self:setCascadeOpacityEnabled(true)
    self._mahPos:setCascadeOpacityEnabled(true)
    local resultData = self:getGameData():getData("result")
    self._winSeat = resultData.nWinSeat
    if self._winSeat == -1 then
        self._winSeat = 0
    end
    self:updataHandMah(resultData.nHands, resultData.nDanFang, resultData.tCombs
    -- {
    --     {nFlag=NG.GAME.GameDefine.COMB_FLAG.CKONG,nFromSeat=0,nCount=4,nMahs={17,17,17,17,17,17},nInCount=3,nInMahs={17,17,17}},
    --     {nFlag=NG.GAME.GameDefine.COMB_FLAG.CKONG,nFromSeat=0,nCount=4,nMahs={17,17,17,17,17,17},nInCount=3,nInMahs={17,17,17}},
    --     {nFlag=NG.GAME.GameDefine.COMB_FLAG.CKONG,nFromSeat=0,nCount=4,nMahs={17,17,17,17,17,17},nInCount=3,nInMahs={17,17,17}},
    --     {nFlag=NG.GAME.GameDefine.COMB_FLAG.CKONG,nFromSeat=0,nCount=4,nMahs={17,17,17,17,17,17},nInCount=3,nInMahs={17,17,17}},
    -- }
    )

    local selfScore = 0
    local fanNames = {}
    local haveHu = #resultData.nFanIds > 0
    for i = 1, #resultData.nFanIds do
        local fanName = NG.GAME.GameDefine.XUELIU_HU_TYPE_NAME[resultData.nFanIds[i]]
        if fanName then
            table.insert(fanNames, "【" .. fanName .. "】")
        end
    end
    self._txtWinFan:setString(table.concat(fanNames, ' '))
    self._fansv:setInnerContainerSize(self._txtWinFan:getContentSize())
    local playerData = NG.GAME.roomTableData:getPlayerDataBySeatId(self._winSeat)
    self:setPlayerName(self._txtWinName, playerData:getNickname())
    self:setGoldNum(self._txtWinNum, resultData.nWinLost[self._winSeat])
    self._txtWinJia:setString(self:getJiaName(self._winSeat))
    self._txtWinHuTimes:setString("h" .. resultData.nWinCnt .. "c")
    self._txtWinBei:setString(haveHu and "x" .. resultData.nWinFan .. "倍" or "")
    self:updateHead(self._headWin, playerData:getHeadUrl(), playerData:getSex())


    local idx = 0
    for i = 0, 3 do
        if i == NG.GAME.roomTableData:getSelfSeat() then
            selfScore = resultData.nWinLost[i]
        end
        if i ~= self._winSeat then
            idx = idx + 1
            local item = self['_item' .. idx]
            local playerData = NG.GAME.roomTableData:getPlayerDataBySeatId(i)
            self:setPlayerName(item:getChildByName('_txtName'), playerData:getNickname())
            self:setGoldNum(item:getChildByName('_txtWinLose'), resultData.nWinLost[i])
            item:getChildByName('_txtJia'):setString(self:getJiaName(i))
            self:updateHead(item:getChildByName('_head'), playerData:getHeadUrl(), playerData:getSex())
        end
    end
    if selfScore ~= 0 then
        NG.soundManager:playNewEffect(selfScore > 0 and "sound_gameWin" or "sound_gameLose")
    end
end

function ResultView:setGoldNum(txt, goldNum)
    if not txt then
        return
    end

    local str = NG.StringTool.getScoreStr(goldNum, math.abs(goldNum) >= 1000000 and "%d" or "%.2f")
    txt:setString(goldNum > 0 and ("+" .. str) or str)
end

function ResultView:setPlayerName(txt, nameStr)
    if not txt then
        return
    end
    if string.len(nameStr) > 12 then
        local validBytes = NG.StringTool.getMinimumValidBytesUTF8(nameStr, 12)
        nameStr = string.sub(nameStr, 1, validBytes) .. "..."
    end
    txt:setString(nameStr)
end

function ResultView:getGameData()
    return NG.goldGame:getModule("GameMain"):getData()
end

local SexHeadImg = {
    WoMan = "newgold_hp_player_main_img_face_0.png",
    Man = "newgold_hp_player_main_img_face_1.png",
}
function ResultView:updateHead(headNode, url, sex)
    local headImgName = SexHeadImg.WoMan
    if sex == 1 or sex == 49 then
        headImgName = SexHeadImg.Man
    end
    if headNode then
        local size = headNode:getContentSize()
        local headImgFrame = NG.RemoteImage.new()
        headImgFrame:setDefaultTexture(headImgName, ccui.TextureResType.plistType)

        headImgFrame:ignoreContentAdaptWithSize(false)
        headImgFrame:addTo(headNode)
        headImgFrame:setPosition(size.width / 2, size.height / 2)
        headImgFrame:setContentSize(size.width, size.height)
        headImgFrame:setUrl(url or "")
    end
end


-- 暗杠时显示的牌背序号
function ResultView:_getCKongShowBackIndexs(combData)
    return { 1, 2, 3 }
end

function ResultView:updataHandMah(handMahs, dfMahID, combData)
    local combs = {}
    for _, comb in ipairs(combData or {}) do
        local singleCombData = {}
        singleCombData.mahValues = comb.nMahs
        singleCombData.combFlag = comb.nFlag
        if comb.nFlag and comb.nFlag == NG.GAME.GameDefine.COMB_FLAG.CKONG then
            singleCombData.showBackIndexs = self:_getCKongShowBackIndexs(clone(singleCombData)) or {}
        end
        table.insert(combs, singleCombData)
    end
    self:getHandArea():showResultMahs(handMahs, dfMahID, combs)
end

function ResultView:getHandArea()
    if not self._handArea then
        local config = NG.GAME.settingData:getDefaultData(nil, true)
        local MahsArea = NG.GAME.gameRequire("Modules.Result.MahsArea")
        self._handArea = MahsArea.new(config)
        self._handArea:setScale(0.5)
        self._mahPos:addChild(self._handArea)
    end
    return self._handArea
end

-- 退出
function ResultView:onLeaveBtnClicked(send, eventType)
    NG.goldGame:exit()
end

-- 查看牌型
function ResultView:onLookBtn(send, eventType)
    print("查看牌型按钮", eventType)
    if eventType == ccui.TouchEventType.began then
        self:setOpacity(0)
        self._mahPos:setVisible(false)
    elseif eventType == ccui.TouchEventType.ended or eventType == ccui.TouchEventType.canceled then
        self:setOpacity(255)
        self._mahPos:setVisible(true)
    end
    -- @todo调用桌面逻辑
    -- self:close()
    -- NG.goldGame:getModule("GameMain"):showLookCard()
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

function ResultView:getJiaName(seat)
    local selfSeat = NG.GAME.roomTableData:getSelfSeat()
    local name = {[0] = "我", [1] = "上家", [2] = "对家", [3] = "下家" }
    return name[(selfSeat - seat + 4) % 4]
end


function ResultView:showActView()
    -- if self._isShowAct then
    --     if XH.lobby:getModule("GoldLaunch"):canGetAward() then
    --         NG.viewManager:openView("NewGold_GoldLaunchView", nil, { type = GoldLaunchConfig.Type.AWARD })
    --         return
    --     end
    NG.goldGame:getModule("GameMain"):openPlayAwardInResult()
end
return ResultView!%