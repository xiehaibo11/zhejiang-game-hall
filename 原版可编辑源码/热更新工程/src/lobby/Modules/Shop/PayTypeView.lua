local PayTypeView = class("PayTypeView", XH.ViewBase)

local HttpDefine = require("app.Define.HttpDefine")
local UrlConf = require("app.Config.UrlConf")

PayTypeView.zfbH5 = 42
PayTypeView.wxH5 = 2
local KW_PAY_TYPE = {
    ZFB = 1,
    WX = 2,
}
function PayTypeView:getCSBPath()
    return "cocosStudio/hall/CSB/window/PayType.csb"
end

function PayTypeView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_ZFBBUY"] = { varName = "_btnZFB", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventZFB" },
        ["_KW_BTN_WXBUY"] = { varName = "_btnWX", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventWX" },
        ["_KW_TIP_ZFBBUY"] = { varName = "_tipZFB" },
        ["_KW_TIP_WXBUY"] = { varName = "_tipWX" },
        ["_KW_TXT_TIP"] = { varName = "_txtTip" },
        ["_KW_BTN_PAY"] = { varName = "_btnPay", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventPay" },
        ["_KW_RECOMMEND_BG"] = { varName = "_recommendBG" },
        ["_KW_RECOMMEND_TEXT"] = { varName = "_recommendText" },
    }
end

function PayTypeView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("Shop"), eventKeyName = "EVENT_PAY_CONSULT", callBack = "onPayConsult"},
    }
end

function PayTypeView:ctor(param, other, productInfo)
    param = param or {}
    PayTypeView.super.ctor(self, param)
    self._proForpey = param
    self._payType = KW_PAY_TYPE.ZFB
    other = other or {}
    self._txtTip:setString(other.tip or "")
    self._payFunc = other.payFunc
    self._productInfo = productInfo
    self:choosePayType()
    XH.lobby:getModule("Shop"):reqPayConsult(tonumber(self._proForpey.product_price))
    self:setRecommendText("推荐使用")
end

function PayTypeView:onPayConsult(event)
    if event and event.msg and event.msg.payConsultInfo then
        self:setRecommendText(event.msg.payConsultInfo)
    end
end

function PayTypeView:setRecommendText(text)
    local actText = self:getActText()
    if actText and actText ~= "" then
        text = actText
    end
    self._recommendText:setString(text)
    XH.UITool.adaptTextToWidth(self._recommendText, 210, 34, 20)
end

function PayTypeView:getActText()
    local cfg = XH.lobby:getModule("Configuration"):getAllConfigData("PaySuggest")
    if cfg and cfg.showStr and cfg.showStr ~= "" then
        local time = XH.lobby:getModule("Shop"):getServerTime()
        if time > cfg.startTime and time < cfg.endTime then
            return cfg.showStr
        end
    end
    return nil
end

function PayTypeView:onTouchEventClose(send, eventType)
    pcall(function()
        XH.lobby:getModule("ReviveGift"):onClosePayView()
    end)
    self:close()
    XH.lobby:destroyModule("BoxQuickRecharge")
end

function PayTypeView:onTouchEventZFB(send, eventType)
    self._payType = KW_PAY_TYPE.ZFB
    self:choosePayType()
end

function PayTypeView:onTouchEventWX(send, eventType)
    self._payType = KW_PAY_TYPE.WX
    self:choosePayType()
end

function PayTypeView:choosePayType()
    if self._payType == KW_PAY_TYPE.ZFB then
        self._tipZFB:setVisible(true)
        self._tipWX:setVisible(false)
    elseif self._payType == KW_PAY_TYPE.WX then
        self._tipZFB:setVisible(false)
        self._tipWX:setVisible(true)
    end
end

function PayTypeView:onTouchEventPay(send, eventType)
    if self._payType == KW_PAY_TYPE.ZFB then
        self:ZFBBuy(PayTypeView.zfbH5)
    elseif self._payType == KW_PAY_TYPE.WX then
        self:WXBuy(PayTypeView.wxH5)
    end
end

function PayTypeView:ZFBBuy(H5channelId)
    if XH.isEmbeddedApp() then
        local param = XH.PluginModule.getStartParams()
        XH.lobby:getModule("Replugin"):invokeFuncNameandParameters(param.aliPay, self._proForpey)
        self:close()
        return
    end
    if self._payFunc then self._payFunc('支付宝sdk') end
    -- δʵ�����ܹ��� ������Ҳ���ʵ����֤
    if XH.playerData:checkNewRealName() ~= 0 then return end--ʵ������
    if XH.playerData:checkNewRealNameVisitor() ~= 0 then return end--�ο͵�½
    self._proForpey.ext = XH.lobby:getModule("Shop"):addPayOperationInfo(self._proForpey.ext)
    local doPay = function()
        if XH.ChannelTool.checkIsECarChannel() then
            self:goH5Payfunc(H5channelId)
        else
            XH.sdkManager:callFunctionWithMap(XH.ThirdDefine.SDK_INTERFACE_NAMES_KEY.ZFBBUY, {["0"] = self._proForpey })
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_PAY_TYPE, XH.ThirdDefine.SDK_INTERFACE_NAMES_KEY.BUY)
            self:close()
        end
    end
    if self._productInfo and self._productInfo.orderCheck then
        XH.lobby:getModule("PayOderCheck"):check(self._productInfo, function()
            doPay()
        end)
    else
        doPay()
    end
end

function PayTypeView:WXBuy(H5channelId)
    if XH.isEmbeddedApp() then
        XH.lobby:getModule("Replugin"):invokeFuncNameandParameters("weixin_pay", self._proForpey)
        self:close()
        return
    end
    if self._payFunc then self._payFunc('微信sdk') end
    -- δʵ�����ܹ��� ������Ҳ���ʵ����֤
    if XH.playerData:checkNewRealName() ~= 0 then return end--ʵ������
    if XH.playerData:checkNewRealNameVisitor() ~= 0 then return end--�ο͵�½
    local doPay = function()
        if XH.ChannelTool.checkIsECarChannel() then
            self:goH5Payfunc(H5channelId)
        else
            XH.sdkManager:callFunctionWithMap(XH.ThirdDefine.SDK_INTERFACE_NAMES_KEY.WXBUY, {["0"] = self._proForpey })
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_PAY_TYPE, XH.ThirdDefine.SDK_INTERFACE_NAMES_KEY.WXBUY2)
            self:close()
        end
    end
    if self._productInfo and self._productInfo.orderCheck then
        XH.lobby:getModule("PayOderCheck"):check(self._productInfo, function()
            doPay()
        end)
    else
        doPay()
    end
end

--H5支付 token加密算法
function PayTypeView:onMakeToken()
    local header = {
        typ = "JWT",
        alg = "HS256"
    }
    local payload = {
        iss = XH.ThirdDefine.SDK_INTERFACE_NAMES_KEY.H5PAY_ISS,
        iat = os.time(),
        exp = os.time() + 300 ,
        aud = "ipay.bryouxi.com",
        app_id = 52369,
        sub = XH.playerData:getNumberID(),
        uid = XH.playerData:getNumberID(),
    }
    header = json.encode(header)
    payload = json.encode(payload)
    local secretkey = "f5e4b230a4b611785f59569b6b7df408"
    local headerEncoded = XH.SysTool:base64_encode(header)
    local payloadEncoded = XH.SysTool:base64_encode(payload)
    print("headerEncoded=" .. headerEncoded)
	print("payloadEncoded=" .. payloadEncoded)
    --16进制转换
    local function hex_to_binary(hex)
        return hex:gsub('..', function(hexval)
            return string.char(tonumber(hexval, 16))
        end )
    end
    --转换特殊字符
	local function replace_text(text)
		text = string.gsub(text,"=","")
		text = string.gsub(text,"/","_")
		text = string.gsub(text,"+","-")
		return text
	end

    local strText = headerEncoded .. "." ..  payloadEncoded
	strText = replace_text(strText)
	print("strText="..strText)

    local signature = XH.EncryptTool.hmac_sha256(secretkey,strText)
    signature = hex_to_binary(signature)
    local token = headerEncoded .. "." .. payloadEncoded .. "." .. XH.SysTool:base64_encode(signature)
    token = replace_text(token)
    return token
end

function PayTypeView:goH5Payfunc(H5channelId)
    local headmap = {}
    local token = self:onMakeToken()
    headmap["Content-Type"] = "application/json"
    headmap["Authorization"] ="Bearer ".. token
    headmap["X-App-Id"] = "52369"
    headmap["X-Package-Id"] = "0" --车载渠道id
    dump(headmap)
    if self._proForpey.channel_id then
        self._proForpey.channel_id = H5channelId
    end
    self._proForpey = json.encode(self._proForpey)
    XH.httpManager:RequestPost(HttpDefine.H5PAY_INFO, UrlConf.H5pay_LINK, self._proForpey, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON,handler(self,self.onHttpRegisterH5PayQTInCallBack),headmap)

end

function PayTypeView:onHttpRegisterH5PayQTInCallBack(eType, status, response)
    if status == 200 then
        if response["trade_request_content"] then
            self.QTAddress = response.trade_request_content.image_url
            print(self.QTAddress)
            XH.viewManager:openView("H5QRCodeView", nil, self.QTAddress)
            self:close()
        else
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK,
                   }, "请尝试重新充值")
        end
   else
        print("H5pay post call back fail")
   end
end

return PayTypeView