local UnlimitGoldActView = class("UnlimitGoldActView", XH.ViewBase)
local UnlimitGoldActConfig = require("lobby.Modules.UnlimitGoldAct.Config")
local ViewAniConfig = require("app.Base.ViewAniConfig")

function UnlimitGoldActView:getCSBPath()
    return "cocosStudio/GoldNew/Lobby/CSB/UnlimitGoldAct/UnLimitGoldActLayer.csb"
end

function UnlimitGoldActView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_BUY"] = { varName = "_KW_BTN_BUY", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventBuy" },
        ["_KW_BTN_HELP"] = { varName = "_KW_BTN_HELP", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventHelp" },
        ["_KW_TEXT_LEFT"] = { varName = "_KW_TEXT_LEFT" },
        ["_KW_FREE"] = { varName = "_KW_FREE" },
        ["_KW_COST"] = { varName = "_KW_COST" },
        ["_KW_ORI"] = { varName = "_KW_ORI" },
        ["_KW_IMG_DIS"] = { varName = "_KW_IMG_DIS" },
        ["_KW_TEXT_DIS"] = { varName = "_KW_TEXT_DIS" },
        ["_KW_TEXT_TIMES"] = { varName = "_KW_TEXT_TIMES" },
        ["_KW_POS"] = { varName = "_KW_POS" },
        ["_KW_ROOT_LAYER"] = { varName = "_KW_ROOT_LAYER" },
        ["_KW_ANI_ROOT"] = { varName = "_KW_ANI_ROOT" },
    }
end

function UnlimitGoldActView:getAniConfig()
    return { aniType = ViewAniConfig.AniName.NORMAL, rootNode = self._KW_ROOT_LAYER, popNode = self._KW_ANI_ROOT, btnList = { self._KW_BTN_BUY, self._KW_IMG_DIS } }
end

function UnlimitGoldActView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("UnlimitGoldAct"), eventKeyName = "FLUSH_ACT_INFO", callBack = "flushUI" },
    }
end

function UnlimitGoldActView:ctor(param)
    param = param or {}
    UnlimitGoldActView.super.ctor(self, param)
    self._isReqInGame = param.inGame or false
    self:initUI()
    local page_item_id = "付费"
    if self._info.status == 1 or self._info.status == 3 then
        page_item_id = "免费"
    end
    if CF and CF.roomData and CF.isInGameScene() then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25050701, { page = "金币游戏结算", page_item_id = page_item_id, game_id = XH.areaData:getAreaID().."_"..XH.lobby:getModule("UnlimitGoldAct"):getGameID() })
    else
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25050701, { page = "房间列表", page_item_id = page_item_id, game_id = XH.areaData:getAreaID().."_"..XH.lobby:getModule("UnlimitGoldAct"):getGameID()  })
    end
end

function UnlimitGoldActView:initUI()
    self:flushUI()
end

function UnlimitGoldActView:flushUI()
    local actDetail = XH.lobby:getModule("UnlimitGoldAct"):getActDetail()
    local info = XH.lobby:getModule("UnlimitGoldAct"):getActInfo()
    if actDetail == nil then
        XH.lobby:getModule("UnlimitGoldAct"):reqActDetail()
        return
    end
    if info == nil then
        XH.TipTool.showToast("请求活动异常，请重新打开...")
        self:onTouchEventClose()
        return
    end
    if info.status == 0 then
        self:onTouchEventClose()
        return
    end
    self._info = info
    self._actDetail = actDetail
    self:startSchedule()
    self._KW_FREE:setVisible(self._info.status == 1)
    self._KW_COST:setVisible(self._info.status == 2)
    self._KW_IMG_DIS:setVisible(false)
    if self._info.status == 1 then
        -- 可领取无限金币体验卡
        self._KW_TEXT_TIMES:setString("共" .. self._actDetail.wxjbtyksycs .. "次")
        self._KW_BTN_BUY:setVisible(true)
    elseif self._info.status == 2 then
        -- 可购买无限金币卡
        -- 原价显示规则 无限金币卡的次数*1元
        local productInfo = self:getProductInfo()
        if productInfo then
            local oriPrice = self._actDetail.wxjbksycs
            local nowPrice = tonumber(productInfo.price)
            local disCount = string.format("%.1f", 10 * nowPrice / oriPrice)
            self._KW_COST:setString(nowPrice .. "元购买")
            self._KW_ORI:setString(oriPrice .. "元")
            self._KW_IMG_DIS:setVisible(true)
            self._KW_TEXT_DIS:setString(disCount .. "折")
        end
        self._KW_TEXT_TIMES:setString("共" .. self._actDetail.wxjbksycs .. "次")
        self._KW_BTN_BUY:setVisible(true)
    elseif self._info.status == 3 or self._info.status == 4 then
        -- 已购买无限金币体验卡
        -- 已购买无限金币卡
        self._KW_TEXT_TIMES:setString("剩余" .. self._info.propCnt .. "次")
        self._KW_BTN_BUY:setVisible(false)
    end
end

function UnlimitGoldActView:setRichText()
    if self._info == nil or self._actDetail == nil then
        return
    end
    local txt = ""
    local time = XH.lobby:getModule("Shop"):getServerTime()
    if self._info.status == 1 then
        local hour = math.floor(self._actDetail.wxjbtykyxq / 3600)
        local min = math.floor((self._actDetail.wxjbtykyxq - hour * 3600) / 60)
        txt = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='40' color='#4C3535'>" .. "活动有效期<font color='#F00000'>" .. hour .. "小时" .. min .. "分</font>，请尽快使用</font>"
    elseif self._info.status == 2 then
        local hour = math.floor(self._actDetail.wxjbkyxq / 3600)
        local min = math.floor((self._actDetail.wxjbkyxq - hour * 3600) / 60)
        txt = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='40' color='#4C3535'>" .. "活动有效期<font color='#F00000'>" .. hour .. "小时" .. min .. "分</font>，请尽快使用</font>"
    elseif self._info.status == 3 or self._info.status == 4 then
        local leftTime = self._info.propEndtime - time
        local hour = math.floor(leftTime / 3600)
        local min = math.floor((leftTime - hour * 3600) / 60)
        if leftTime <= 0 then
            XH.lobby:getModule("UnlimitGoldAct"):reqActInfo(false)
            self:onTouchEventClose()
            return
        end
        txt = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='40' color='#4C3535'>" .. "活动有效期剩余<font color='#F00000'>" .. hour .. "小时" .. min .. "分</font>，请尽快使用</font>"
    end
    if self._lastText == txt then
        return
    end
    self._lastText = txt
    self._KW_POS:removeAllChildren()
    local richText = ccui.RichText:createWithXML(self._lastText, {})
    richText:setAnchorPoint(0.5, 0.5)
    richText:setPosition(cc.p(0, 0))
    self._KW_POS:addChild(richText)
end

function UnlimitGoldActView:flushLeftTime()
    if self._info == nil then
        return
    end
    self:setRichText()
    if self._info.status == 3 or self._info.status == 4 then
        self._KW_TEXT_LEFT:setString("已激活")
        return
    end
    local time = XH.lobby:getModule("Shop"):getServerTime()
    local leftTime = self._info.mrgmjssj - time
    if leftTime <= 0 then
        XH.lobby:getModule("UnlimitGoldAct"):reqActInfo(false)
        self:onTouchEventClose()
        return
    end
    local hour = math.floor(leftTime / 3600)
    local min = math.floor((leftTime - hour * 3600) / 60)
    local sec = leftTime % 60
    self._KW_TEXT_LEFT:setString(string.format("%02d", hour) .. ":" .. string.format("%02d", min) .. ":" .. string.format("%02d", sec))
end

function UnlimitGoldActView:startSchedule()
    self:removeSchedule()
    self:flushLeftTime()
    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if self and not tolua.isnull(self) then
            self:flushLeftTime()
        end
    end, 1, false)
end

function UnlimitGoldActView:removeSchedule()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function UnlimitGoldActView:onCleanup()
    self:removeSchedule()
    UnlimitGoldActView.super.onCleanup(self)
end

function UnlimitGoldActView:onTouchEventClose()
    if self._isReqInGame and CF and CF.roomData and CF.isInGameScene() then
        -- local lobbyId = CF.areaData:getLobbyID()
        -- local level = cc.UserDefault:getInstance():getIntegerForKey("_KW_DATA_LAST_JOIN_GOLD_LEVEL_" .. lobbyId)
        -- CF.viewManager:openView("GoldBankruptcyView", nil, { gameID = CF.roomData:getGameID(), goldNotEnough = true, roomFlag = level })
        local params = {
            gameID = XH.lobby:getModule("UnlimitGoldAct"):getGameID(),
            info = "关闭无限金币"
        }
        XH.lobby:getModule("YGiftBankruptcy"):throwData(params)
        XH.lobby:getModule("UnlimitGoldAct"):doPopCallBack()
    end
    self:close()
end

function UnlimitGoldActView:onTouchEventBuy()
    if self._info.status == 1 then
        -- 免费参与
        XH.lobby:getModule("UnlimitGoldAct"):reqJoinFreeAct()
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25050702, { page_item_id = "免费", game_id = XH.areaData:getAreaID().."_"..XH.lobby:getModule("UnlimitGoldAct"):getGameID() })
    else
        -- 付费购买
        local productInfo = self:getProductInfo()
        if productInfo == nil then
            XH.TipTool.showToast("商品配置异常，请联系客服...")
            return
        end
        XH.lobby:getModule("Shop"):reqBuyDiamond(productInfo, nil, productInfo.productId, nil, true, nil, -1, { triggerGameID = XH.lobby:getModule("UnlimitGoldAct"):getGameID() })
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25050702, { page_item_id = "付费", game_id = XH.areaData:getAreaID().."_"..XH.lobby:getModule("UnlimitGoldAct"):getGameID() })
    end
end

function UnlimitGoldActView:getProductInfo()
    local productInfo
    local rmbGoods = XH.lobby:getModule("YGiftBankruptcy"):getRMBGoods()
    for i = 1, #rmbGoods do
        if rmbGoods[i].productId == UnlimitGoldActConfig.PRODUCT then
            productInfo = rmbGoods[i]
            break
        end
    end
    return productInfo
end

function UnlimitGoldActView:onTouchEventHelp()
    local text = "★活动随机出现，出现后持续2小时内可进\n  行购买，超过2小时活动将失效\n★购买后请在有效期内使用完所有次数，否\n  则有效期过后将自动失效\n★该功能仅初级场可用，仅在金币\n  不足进入初级场时自动补足至1万金币\n★每局最多补充1次"
    XH.TipTool.showTip(
    {
        type = XH.TIP_LAYER_TYPE.CLOSE_ONLY,
        bLeft = true
    },
    text
    )
end

return UnlimitGoldActView�)