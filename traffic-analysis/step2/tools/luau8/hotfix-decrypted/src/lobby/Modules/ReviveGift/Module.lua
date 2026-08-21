local ReviveGiftModule = class("ReviveGiftModule", XH.ModuleBase)

ReviveGiftModule.EVENT_REVIVE_CLOSE = "EVENT_REVIVE_CLOSE"
ReviveGiftModule.EVENT_REVIVE_UPDATE_TIME = "EVENT_REVIVE_UPDATE_TIME"
ReviveGiftModule.EVENT_REVIVE_RE_PAY = "EVENT_REVIVE_RE_PAY"
ReviveGiftModule.EVENT_REVIVE_PAY_SUCCESS = "EVENT_REVIVE_PAY_SUCCESS"

function ReviveGiftModule:ctor()
    ReviveGiftModule.super.ctor(self)
    self._actId = 0
    self._cb = nil
    self._gifts = {}
    -- self._gifts = {
    --     {
    --         id = "resurrection_gift-10255-1",
    --         diamond = 0,
    --         oriGold = "10000",
    --         curGold = "12000",
    --         price = 100 -- 分
    --     }
    -- }
end

function ReviveGiftModule:getReqConfig()
    return {
        ReqRevive = {reqPath = XH.goldLobbyRootPath .. ".Modules.ReviveGift.ReqRevive", callBack = self.respRevive}
    }
end

function ReviveGiftModule:getProxyEvents()
    return {}
end

function ReviveGiftModule:onLoginSuccess()
    if self._actId == 0 then
        return
    end
end

function ReviveGiftModule:setActivityId(actId)
    self._actId = actId
end

function ReviveGiftModule:reqRevive(data, callback)
    self._cb = callback
    self._sessionid = data.sessionid
    self._gifts = {}
    if self._actId > 0 then
        local data2 = {
            actId = self._actId,
            gameId = data.gameid,
            sessionId = data.sessionid
        }
        self:startReq("ReqRevive", data2, 5)
    end
end

function ReviveGiftModule:respRevive(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._gifts = data.gifts
        if self._cb then
            self._cb(true)
        end
    else
        XH.TipTool.showToast("获取礼包失败")
        if self._cb then
            self._cb(false)
        end
    end
end

function ReviveGiftModule:getGifts()
    return self._gifts
end

function ReviveGiftModule:getReviveGiftInfo()
    return self._gifts, self._sessionid
end

function ReviveGiftModule:pay(index)
    if self._gifts[index] then
        if self._gifts[index].diamond > 0 then
            -- TODO 钻石兑换，未调通
            -- XH.lobby:getModule("Shop"):reqShopProductByConfig()
            -- local productId = string.format("resurrection_gift-%d-%d", self._actId, index)
            -- local ShopConfig = require(XH.goldLobbyRootPath .. ".Modules.Shop.Config")
            -- XH.lobby:getModule("Shop"):reqExchangeProduct(ShopConfig.ProductType.GOLD, productId)
        else
            -- 直冲
            local productInfo = {
                productId = self._gifts[index].id,
                name = self._gifts[index].price .. "元复活礼包",
                price = self._gifts[index].price
            }
            XH.lobby:getModule("Shop"):reqBuyDiamond(productInfo, nil, self._gifts[index].id, nil, true, nil, -1, {triggerGameID = 30579, room_level = self._sessionid})
        end
    end
end

function ReviveGiftModule:updateDeadTime(deadTime)
    self:dispatchEvent({name = self.EVENT_REVIVE_UPDATE_TIME, msg = deadTime})
end

function ReviveGiftModule:onClosePayView()
    self:dispatchEvent({name = self.EVENT_REVIVE_CLOSE})
end

function ReviveGiftModule:rePay()
    self:dispatchEvent({name = self.EVENT_REVIVE_RE_PAY})
end

function ReviveGiftModule:paySuccess()
    self:dispatchEvent({name = self.EVENT_REVIVE_PAY_SUCCESS})
end

-- reqBuyPropByProductId 宝宝浙江调用
function ReviveGiftModule:reqBuyPropByProductId(item_id, gameid)
    if item_id == nil then
        NG.TipTool.showToast("未找到匹配档位的商品，请联系客服~")
        return
    end
    local data = {
        dwShopID = item_id,
        nPrice = 0,
        chDescribe = "确认购买金币礼包吗？"
    }
    display.getRunningScene():openView("ShopBuyTypeView", data, nil, nil, "to_propsid=gift&gameid=" .. gameid .. "&room_level=" .. self._sessionid)
end

return ReviveGiftModule
�