local LaborDayGiftModule = class("LaborDayGiftModule", XH.ModuleBase)
local TaskDefine = require("app.Define.TaskDefine")
local LobbyConfig = require("lobby.Modules.Lobby.Config")
local ShopConfig = require("lobby.Modules.Shop.Config")

LaborDayGiftModule.EVENT_FULSH_LABOR_DAY_ICON = "EVENT_FULSH_LABOR_DAY_ICON"
LaborDayGiftModule.EVENT_FULSH_LABOR_DAY_INFO = "EVENT_FULSH_LABOR_DAY_INFO"
LaborDayGiftModule.EVENT_FULSH_LABOR_DAY_PAY = "EVENT_FULSH_LABOR_DAY_PAY"

function LaborDayGiftModule:getReqConfig()
    return {
        ReqLaborDayGiftInfo = { reqPath = "app.Req.Task.ReqTaskProtocol", callBack = self.resqLaborDayGiftInfoCallBack },
        ReqGiftAwardInfo = { reqPath = "app.Req.Task.ReqTaskProtocol", callBack = self.resqGiftAwardCallBack },
    }
end

function LaborDayGiftModule:getProxyEvents()
    return {
        --{ module = XH.netEngine, eventName = XH.MatchLinkProtocol.RespNotifyTaskPercent.event_key, callBack = "onRespNotifyTaskPercent" },
        --{ module = XH.sdkManager, eventKeyName = "EVENT_IAP_CALLBACK", callBack = "respBuyDiamond" },
    }
end

function LaborDayGiftModule:ctor()
    LaborDayGiftModule.super.ctor(self)
end

function LaborDayGiftModule:getActInfo(isOpen)
    isOpen = isOpen or false
    local str = ";isOpen = " .. tostring(isOpen) .. ";actSid=2"
    self:startReq("ReqLaborDayGiftInfo", TaskDefine.TASK_ID.TASK_TYPE_LABOR_DAY_GIFT_INFO, 0, 0, XH.areaData:getSrsGroupID(), XH.KW_CONFIG_LOGIC_TIME_OUT, str)
end

function LaborDayGiftModule:getActAward(libao)
    libao = libao or 0
    self:startReq("ReqGiftAwardInfo", TaskDefine.TASK_ID.TASK_TYPE_LABOR_DAY_GIFT_AWARD, 0, 0, XH.areaData:getSrsGroupID(), XH.KW_CONFIG_LOGIC_TIME_OUT, ";libao = " .. tostring(libao))
end

function LaborDayGiftModule:resqLaborDayGiftInfoCallBack(cell, ctype, data)
    if data == nil or data == "" or data.acData == "" then
        return
    end
    if ctype == XH.Req.TYPE.SUCCESS then
        local actData = cjson.decode(data.acData)
        if actData and actData.isShow and actData.isOpen then
            XH.viewManager:openView("LaborDayGiftView",nil,actData)
        end
        self:dispatchEvent({name = self.EVENT_FULSH_LABOR_DAY_ICON, data = {icon = LobbyConfig.ICON_ID.LAYOR_DAY_GIFT; isShow = actData.isShow or false; actInfo = actData;}})
        XH.lobby:getModule("TabsActivity"):setShowLaborDayGift(actData.isShow or false)
    end
end

function LaborDayGiftModule:resqGiftAwardCallBack(cell, ctype, data)
    if data == nil or data == "" or data.acData == "" then
        return
    end
    if ctype == XH.Req.TYPE.SUCCESS then
        local actData = cjson.decode(data.acData)
        if actData then
            self:showAward(actData)
        end
    end
end

function LaborDayGiftModule:showAward(acData)
    for _, award in ipairs(acData.awardData) do
        if string.find(award.name, "钻石") then
            award.desc = award.cnt .. award.name
        elseif XH.lobby:getModule("BagSysNew"):judgeForeverProp(award.propid) then
            award.desc = "永久" .. award.name
        else
            award.desc = award.cnt .. "天" .. award.name
        end
    end
    XH.viewManager:openView("CommonRewardView", nil, acData.awardData)
    --LaborDayGiftModule:getActInfo(false)
    self:dispatchEvent({name = self.EVENT_FULSH_LABOR_DAY_INFO,data = acData.isbuy})
    --XH.TipTool.showToast("1" .. tostring(acData.isbuy[1]) .."2" .. tostring(acData.isbuy[2]) .."3" .. tostring(acData.isbuy[3]), 3)
end

function LaborDayGiftModule:buyLiBao(prize, libao)
    if self._diamondProducts == nil then
        self._diamondProducts = XH.lobby:getModule("Shop"):getProductList(ShopConfig.ProductType.DIAMOND) or nil
    end
    table.sort(self._diamondProducts, function(a, b)
        return tonumber(a.value) < tonumber(b.value)
    end )
    local ProductData
    for _, v in pairs(self._diamondProducts) do
        if tonumber(v.value) >= tonumber(prize * 100) then
            ProductData = v
            break
        end
    end
    if ProductData then
        XH.lobby:getModule("Shop"):reqBuyDiamond(ProductData, "deliver_award", "LIBAO" .. libao, nil, true, nil, "gift")
    end
end

function LaborDayGiftModule:onRespNotifyTaskPercent(event)
    local respData = XH.MatchLinkProtocol.RespNotifyTaskPercent:new()
    respData:bistream(event.msg.buff, event.msg.len)

    if respData.nTaskId == TaskDefine.TASK_ID.TASK_TYPE_LABOR_DAY_GIFT_AWARD then
        self:showAward(respData.acData)
    end
end

function LaborDayGiftModule:fulshBuyBtn()
    self:dispatchEvent({name = self.EVENT_FULSH_LABOR_DAY_PAY})
end

return LaborDayGiftModule