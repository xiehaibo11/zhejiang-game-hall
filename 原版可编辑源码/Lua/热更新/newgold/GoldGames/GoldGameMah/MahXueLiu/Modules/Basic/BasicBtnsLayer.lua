local BasicBtnsLayer = NG.GAME.gameClass("BasicBtnsLayer", "newgold.GoldGames.GoldGameBase.Modules.Basic.BasicBtnsLayer")
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")
local IsGoldBoxTest = require("app.Config.GlobalConfig").IsGoldBoxTest

function BasicBtnsLayer:ctor()
    BasicBtnsLayer.super.ctor(self)
end

function BasicBtnsLayer:getCSBPath()
    return "cocosStudio/GoldNew/Game/MahXueLiu/CSB/Basic/BasicBtnsLayer.csb"
end

function BasicBtnsLayer:getBindingInfo()
    local info = BasicBtnsLayer.super.getBindingInfo(self)
    info["_KW_MORE_BG"] = { varName = "_moreBg" }
    info["_KW_BTN_TRUST"] = { varName = "_trustBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onTrustBtnClicked" }
    info["_KW_BTN_DISMISS"] = { varName = "_dismissBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onDismissBtnClicked" }
    return info
end

function BasicBtnsLayer:getProxyEvents()
    return {
        { module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_BG_CLICK", callBack = "onBgClick" },
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onStartGame" },
        { module = NG.goldLobby:getModule("GoldCommon"), eventKeyName = "KW_NOTIFY_JOIN_MATCH_SUCCESS", callBack = "onEventNewMatchStart" },
    }
end

function BasicBtnsLayer:initView()
    self._moreBg:setVisible(false)
    self._chatBtn:setVisible(false)
end

-- 收到游戏开始的消息
function BasicBtnsLayer:onStartGame()
    self._chatBtn:setVisible(true)
end

function BasicBtnsLayer:onEventNewMatchStart(data)
    self._chatBtn:setVisible(false)
end

function BasicBtnsLayer:onDismissBtnClicked()
    NG.msgManager:sendSoRequestDismiss()
end

function BasicBtnsLayer:onTrustBtnClicked()
    local gameData = NG.goldGame:getModule("GameMain"):getData()
    local isTrust = gameData:getTrustByLocalSeat(GameMainDefine.SELF_LOCAL_SEAT)

    NG.msgManager:sendMsgTrust(not isTrust)
    self:moveOutAnimation()

    --test
    -- NG.goldGame:getModule("GameMain"):onMsgResult({
    --     nWinLost = {4,-2,-2,0}, -- 得分
    --     nResult = {1,2,2,0}, -- 输赢
    --     nMult = {1,1,1,1}, -- 倍数信息
    -- })
end

function BasicBtnsLayer:onBgClick()
    self:moveOutAnimation()
end

function BasicBtnsLayer:moveInAnimation()
    if self._moreLayout then
        self._moreLayout:stopAllActions()
        local posX = self._moreLayout:getPositionX()
        local moveAni = cc.MoveTo:create(0.2, cc.p(posX, 50))
        self._moreLayout:runAction(cc.EaseIn:create(moveAni, 0.3))
        self._moreBg:setVisible(true)
    end
end

function BasicBtnsLayer:moveOutAnimation()
    if self._moreLayout then
        self._moreLayout:stopAllActions()

        local posX = self._moreLayout:getPositionX()
        local moveAni = cc.MoveTo:create(0.2, cc.p(posX, 480))
        self._moreLayout:runAction(cc.EaseIn:create(moveAni, 0.3))
        self._moreBg:setVisible(false)
    end
end

function BasicBtnsLayer:onLeaveBtnClicked(send, eventType)
    if IsGoldBoxTest then
        NG.TipTool.hideLoading()
        NG.goldGame:exit()
        return
    end

    if NG.goldGame:getModule("GameMain") == nil then
        NG.goldGame:exit()
        return
    end
    if NG.goldGame:getModule("GameMain"):getData():getGameStart() then
        local gameData = NG.goldGame:getModule("GameMain"):getData()
        if gameData:getBrokenState(NG.GAME.roomTableData:getSelfSeat()) == NG.GAME.GameDefine.BANKRUP_STATE.GIVEUP then
            NG.msgManager:sendMsgBankrupState(NG.GAME.GameDefine.BANKRUP_STATE.REQ_LEVE)
            NG.goldGame:exit()
        else
            NG.TipTool.showToast("当前正在对局，无法退出牌桌")
        end
        return
    end
    NG.goldGame:getModule("GameMain"):reqLeaveRoom()
end
return BasicBtnsLayer