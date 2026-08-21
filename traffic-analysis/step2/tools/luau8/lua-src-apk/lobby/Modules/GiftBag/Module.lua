local GiftBagModule = class("GiftBagModule", XH.ModuleBase)
local TaskDefine = require("app.Define.TaskDefine")
GiftBagModule.EVENT_SHOW_BREAK_GIFT = "EVENT_SHOW_BREAK_GIFT"
GiftBagModule.EVENT_UPDATE_GIFT_BUY_NUM = "EVENT_UPDATE_GIFT_BUY_NUM"
GiftBagModule.EVENT_UPDATE_GIFT_EXCHANGE_AUOTSEND = "EVENT_UPDATE_GIFT_EXCHANGE_AUOTSEND"
GiftBagModule.EVENT_UPDATE_GIFT_EXCHANGE_SELECTED = "EVENT_UPDATE_GIFT_EXCHANGE_SELECTED"

GiftBagModule.GIFTSENDAWARDTYPE = 
{
    PLAYER_SELECTED = 0, -- 玩家自选礼包
    SERVER_AUTO_SEND = 1, -- 系统选择礼包
}

GiftBagModule.GIFTBOX_TYPE = 
{
    KW_BREAK_TYPE = 1,--破产礼包
    KW_DISCOUNT_TYPE = 2,--折扣礼包
    KW_GIFT_BOX_SELECTED = 3,--商城道具，玩家选择
    KW_GIFT_BOX_AUTO =  4,--商城礼包,自选礼包
}


function GiftBagModule:ctor()
    GiftBagModule.super.ctor(self)
end

function GiftBagModule:getReqConfig()
    return {
            ReqExchangeGiftHistory = { reqPath = "lobby.Req.Shop.ReqExchangeGiftHistory", callBack = self.respExchangeGiftHistory },
    }
end

function GiftBagModule:getProxyEvents()
    return {
        { module = XH.netEngine, eventName = XH.MatchLinkProtocol.RespNotifyTaskPercent.event_key, callBack = "onRespNotifyTaskPercent" },
    }
end

function GiftBagModule:onRespNotifyTaskPercent(event)
    local respData =  XH.MatchLinkProtocol.RespNotifyTaskPercent:new()
    respData:bistream(event.msg.buff, event.msg.len)
    if respData.nTaskId == TaskDefine.TASK_ID.TASK_TYPE_ID_GIFTBAG_EXCHANGE_NOTIFY then
        if respData.acData and respData.acData ~= "" then
            local data = json.decode(respData.acData)
            local awtype = 0
            if data.awardType then
                awtype = tonumber(data.awardType)
            end
            if awtype == self.GIFTBOX_TYPE.KW_GIFT_BOX_AUTO  then
                self:dispatchEvent({name = self.EVENT_UPDATE_GIFT_EXCHANGE_AUOTSEND})
            elseif awtype == self.GIFTBOX_TYPE.KW_GIFT_BOX_SELECTED then
                self:dispatchEvent({name = self.EVENT_UPDATE_GIFT_EXCHANGE_SELECTED})
            else
                XH.TipTool.showToast("自动兑换失败，请再次兑换")
            end
        end   
    end
end

function GiftBagModule:reqExchangeGiftHistory(propids)
    if propids ~= "" then
        self:startReq("ReqExchangeGiftHistory",propids,XH.KW_CONFIG_LOGIC_TIME_OUT)
    end
end

function GiftBagModule:respExchangeGiftHistory(req, type, data)
    if data then
        self:dispatchEvent({name = self.EVENT_UPDATE_GIFT_BUY_NUM, msg = data})
    end
end

function GiftBagModule:getAwardProps(productInfo)
    local addPropInTab = function(awardProps,tempItem)
        local prop = {}
        prop.name =  tempItem.box_display_name
        prop.id =  tempItem.box_props_id
        prop.type = tempItem.box_props_type
        prop.count =  tempItem.box_props_count
        if tempItem.box_props_type == "gold" then
            prop.count =  tempItem.box_gold
        end
        table.insert(awardProps,prop)
    end
     local awardProps = {}
    if next(productInfo) then
        for i = 1,#productInfo do
            addPropInTab(awardProps,productInfo[i])
        end
    end
    return awardProps
end

function GiftBagModule:getGoldPropImg(goldNum)
    if goldNum >=0 and goldNum < 100 then
        return "ico_gold_1.png"
    elseif goldNum >=100 and goldNum < 1000 then
        return "ico_gold_2.png"
    elseif goldNum >=1000 and goldNum < 10000 then
        return "ico_gold_3.png"
    elseif goldNum >=10000  then
        return "ico_gold_4.png"
    end
end

function GiftBagModule:getAwardImageByProp(prop)
    local url  = ""
    if prop.type == "gold" then
        url = self:getGoldPropImg(prop.count)
    else
        local devideBaseConfig =  XH.lobby:getModule("BagSysNew"):getBagData():getDevideBagConfigData()
        if devideBaseConfig then
            local key = prop.id
            local currentProp = devideBaseConfig[key]
            if currentProp then
                local props_img = currentProp.props_img or {}
                for _,av in pairs(props_img) do
                    local imgArray = av.img or {}
                    for _,bv in pairs(imgArray) do
                        url = bv.img_url
                    end
                end
            end
        end
    end
    return url
end

return GiftBagModule�