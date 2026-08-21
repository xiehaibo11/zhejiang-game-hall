local BankrupView = NG.GAME.gameClass("RuleLayer", NG.ViewBase)
local GoldStoreDefine = require("newgold.GoldLobby.Modules.GoldStore.Define")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")

function BankrupView:ctor(isMah)
    BankrupView.super.ctor(self, isMah)
    self._defaultChose = GoldStoreDefine.TYPE.GOLD --金币
    self:initUI()
    self:updateUI()
    self._panel2:setVisible(false)
    NG.goldLobby:getModule("GoldBankTip"):reqBankrupLeftCnt()
end

function BankrupView:getCSBPath()
    return "cocosStudio/GoldNew/Game/MahXueLiu/CSB/Bankrupt/BankrupView.csb"
end

function BankrupView:getBindingInfo()
    return {
        ["_close"] = { varName = "_close", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickCloseExchange" },
        ["_close2"] = { varName = "_close2", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickCloseSubsidy" },
        ["_budouBtn"] = { varName = "_budouBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickBuDou" },
        ["_item"] = { varName = "_item", beginIndex = 1, endIndex = 3 },
        ["_panel1"] = { varName = "_panel1" },
        ["_panel2"] = { varName = "_panel2" },
        ["_panel2tip"] = { varName = "_panel2tip" },
    }
end

function BankrupView:getProxyEvents()
    return {
        --
        { module = NG.goldLobby:getModule("GoldStore"), eventKeyName = "EVNET_SHOPMANAGER_EXCHANGE_SUCCESS", callBack = "onExchangeSuccess" },
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_ON_MSG_RESULT", callBack = "onGameResult" },
        { module = NG.goldLobby:getModule("GoldStore"), eventKeyName = "EVNET_SHOPMANAGER_SHOW_SHOP", callBack = "onFlushShopProps" },
    -- {module = NG.goldLobby:getModule("GoldCommon"), eventKeyName = "KW_FLUSH_NOTIFY_PROPS", callBack = "updateProps"}
    }
end

-- 获取到商品信息
function BankrupView:onFlushShopProps(event)
    if event.data == nil or event.data.tag == nil or event.data.tag ~= self._defaultChose then
        return
    end
    self:updateUI(true)
end

function BankrupView:onGameResult(event)
    self:close()
end
function BankrupView:onExchangeSuccess(event)
    self:close()
end

function BankrupView:initUI()
    self._btns = {}
    for i = 1, 3 do
        local btn = self['_item' .. i]:getChildByName("_buyBtn")
        btn:addClickEventListener(function(event)
            NG.goldLobby:getModule("GoldStore"):reqBuyItem(self._defaultChose, self._propIdx[i])
        end)
        btn:setTouchEnabled(true)
        self._btns[i] = btn
    end
end

function BankrupView:updateUI(isReq)
    local props = NG.goldLobby:getModule("GoldStore"):getPropsThisAreaID(self._defaultChose)
    if #props == 0 and not isReq then
        NG.goldLobby:getModule("GoldStore"):reqProductList(self._defaultChose)
    end
    local beanCfg = NG.remoteAllConfig.BBXueLiu.exchangeBeanNums[GoldPlayerData.Session_id .. ""]
    self._propIdx = {}
    for i = 1, 3 do
        for j = 1, #props do
            if props[j].prop_count == beanCfg[i] then
                self['_item' .. i]:getChildByName('_beanNum'):setString("x" .. props[j].prop_count)
                self._btns[i]:getChildByName('_cost'):setString(props[j].price .. "钻石")
                self._propIdx[i] = j
            end
        end
    end
end

function BankrupView:isHaveFreeCnt()
    return NG.goldLobby:getModule("GoldBankTip"):getBankrupLeftCnt() > 0
end

function BankrupView:onClickCloseExchange()
    if self:isHaveFreeCnt() and GoldPlayerData.Session_id <= 1 then
        self._panel2tip:setString("今日可领次数" .. NG.goldLobby:getModule("GoldBankTip"):getBankrupLeftCnt())
        self._panel1:setVisible(false)
        self._panel2:setVisible(true)
    else
        NG.msgManager:sendMsgBankrupState(NG.GAME.GameDefine.BANKRUP_STATE.GIVEUP)
        self:close()
    end
end

--补助关闭
function BankrupView:onClickCloseSubsidy()
    if NG.GAME.roomTableData:getSelf() and NG.GAME.roomTableData:getSelf():getSr() == 0 then
        NG.msgManager:sendMsgBankrupState(NG.GAME.GameDefine.BANKRUP_STATE.GIVEUP)
    end
    self:close()
end

function BankrupView:onClickBuDou()
    NG.TipTool.showLoading()
    NG.goldLobby:getModule("GoldBankTip"):reqBankTipAward(true, { notDeal = true, callFunc = function(bSuccess, data)
        -- dump(data)
        NG.TipTool.hideLoading()
        if bSuccess and NG and NG.goldGame then
            NG.goldGame:showAwardView(data)
        end
    end })
    self:close()
end


-- 领奖
function BankrupView:showAwardView(data)
    NG.viewManager:openView("NewGold_AwardView", nil, nil, {
        prize_names = { "x3000" },
        image_urls = { "https://palmastatic.wenzhoushuke.com//materials/images/20230522/11354115106.png" }
    })
end

function BankrupView:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, NG.ZORDER.WINDOW)
end
return BankrupView�