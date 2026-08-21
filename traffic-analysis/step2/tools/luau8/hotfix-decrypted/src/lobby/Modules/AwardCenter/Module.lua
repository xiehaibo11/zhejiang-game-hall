local AwardCenterModule = class("AwardCenterModule", XH.ModuleBase)

AwardCenterModule.EVNET_AWARD_CENTER_SHOW_RECORD = "EVNET_AWARD_CENTER_SHOW_RECORD"
AwardCenterModule.EVNET_USER_ADDRESS_GET = "EVNET_USER_ADDRESS_GET"
AwardCenterModule.EVNET_USER_ADDRESS_CHANGE = "EVNET_USER_ADDRESS_CHANGE"
AwardCenterModule.EVNET_USER_ADDRESS_CLOSE = "EVNET_USER_ADDRESS_CLOSE"
function AwardCenterModule:ctor()
    AwardCenterModule.super.ctor(self)
end

function AwardCenterModule:getReqConfig()
    return {
        ReqAwardRecordInfo = { reqPath = "lobby.Req.AwardCenter.ReqAwardRecordInfo", callBack = self.respAwardRecordInfo },
        ReqChangeUserAddress = { reqPath = "lobby.Req.AwardCenter.ReqChangeUserAddress", callBack = self.respChangeUserAddress },
        ReqUserAddressInfo = { reqPath = "lobby.Req.AwardCenter.ReqUserAddressInfo", callBack = self.respUserAddressInfo },
    }
end

function AwardCenterModule:getProxyEvents()
    return {
        --{ module = XH.sdkManager, eventKeyName = "EVENT_IAP_CALLBACK", callBack = "respBuyDiamond" },
    }
end

-- 
function AwardCenterModule:reqAwardRecordInfo(page)
    self:startReq("ReqAwardRecordInfo", page, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function AwardCenterModule:reqChangeUserAddress(data)
    self:startReq("ReqChangeUserAddress", data, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function AwardCenterModule:reqUserAddressInfo()
    self:startReq("ReqUserAddressInfo", XH.KW_CONFIG_LOGIC_TIME_OUT)
end

----------回调处理-----------------------
function AwardCenterModule:respAwardRecordInfo(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        local showData = self:fliterSevenDayData(data,true)
        self:dispatchEvent({name = self.EVNET_AWARD_CENTER_SHOW_RECORD, data = showData})
    else
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, req:getMessage())
    end
end

function AwardCenterModule:respChangeUserAddress(req, type, data)
    XH.TipTool.hideLoading()
    local function closeLayer()
        self:dispatchEvent({name = self.EVNET_USER_ADDRESS_CLOSE})
    end
    if type == XH.Req.TYPE.SUCCESS then
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,funcOK = closeLayer,
        }, "保存成功")

    else
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, req:getMessage())
    end
end

function AwardCenterModule:respUserAddressInfo(req, type, data)
    XH.TipTool.hideLoading()

    if type == XH.Req.TYPE.SUCCESS then
        self:dispatchEvent({name = self.EVNET_USER_ADDRESS_GET, data = data})
    else
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, req:getMessage())
    end
end

function AwardCenterModule:fliterSevenDayData(data,bFilter)
    local afterFliterData = {}
    if not data then
        return afterFliterData
    end
    if bFilter then
        local curTime = os.time()
        local dayTime = os.time({day = os.date("%d",curTime), month = os.date("%m",curTime), year = os.date("%Y",curTime), hour = 0, minute = 0, second = 0})
        for _,v in pairs(data) do
            local timeStr = v.order_time
            local strTemp = string.match(timeStr,"%d+-%d+-%d+")
            local dateTable = string.split(strTemp,"-")
            if dateTable then 
                local checkTime = os.time({day = dateTable[3], month = dateTable[2], year = dateTable[1], hour = 0, minute = 0, second = 0})
                if checkTime then
                    if dayTime - checkTime < 7*24*3600 then
                        table.insert(afterFliterData,v)
                    end
                end
            end
        end
    else
        afterFliterData = data
    end
    return afterFliterData
end

return AwardCenterModule)