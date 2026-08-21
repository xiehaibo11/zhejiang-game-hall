-- 定义 PayOderCheckModule 模块，继承自 XH.ModuleBase
local PayOderCheckModule = class("PayOderCheckModule", XH.ModuleBase)
-- 引入配置模块
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")

-- 构造函数
function PayOderCheckModule:ctor()
    PayOderCheckModule.super.ctor(self)
end

-- 注册监听事件：接收 IAP 回调
function PayOderCheckModule:getProxyEvents()
    return {{module = XH.sdkManager, eventKeyName = "EVENT_IAP_CALLBACK", callBack = "onYMNCallBack"}}
end

-- 定义网络请求配置
function PayOderCheckModule:getReqConfig()
    return {
        ["ReqReportOderRequest"] = {reqPath = "lobby.Req.PayOderCheck.ReqReportOderRequest", callBack = self.onReportOderResp},
        ["ReqCheckOderRequest"] = {reqPath = "lobby.Req.PayOderCheck.ReqCheckOderRequest", callBack = self.onCheckOderResp}
    }
end

-- 处理 IAP 回调事件
function PayOderCheckModule:onYMNCallBack(event)
    if self._goodInfo == nil then
        return
    end
    local code = event.data.code
    if code == 215 then
        -- 判断订单是否超时（超过5秒）
        if os.time() - self._lastTime > 15 then
            print("下单时间过久，视为非当前订单")
            self:resetData()
            return
        end
        -- 上报订单并重置数据
        self:reportOder(event.data.msg)
        self:resetData()
    end
end

-- 重置订单相关数据
function PayOderCheckModule:resetData()
    self._goodInfo = nil
    self._lastTime = 0
    self._successCall = nil
    self._failCall = nil
end

-- 准备下订单：检查配置决定是否进行订单校验
function PayOderCheckModule:check(goodInfo, successCall, failCall)
    local allJsonData = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    local appVer = cc.Application:getInstance():getVersion()
    if (allJsonData and allJsonData.NoCheckPayOder == true) or (device.platform == "android" and appVer < "1.5.6") or
        (device.platform == "ios" and appVer < "1.3.45") then
        -- 如果配置允许跳过检查，则直接触发成功回调
        if successCall then
            successCall()
        end
        return
    end

    if goodInfo == nil or goodInfo.pay_attach == nil or goodInfo.pay_attach.stid == nil then
        if successCall then
            successCall()
        end
        return
    end

    -- 保存商品信息和回调
    self._goodInfo = goodInfo
    self._lastTime = os.time()
    self._successCall = successCall
    self._failCall = failCall
    self:checkGoodStatus(goodInfo)
end

-- 上报订单请求
function PayOderCheckModule:reportOder(orderNo)
    self:startReq("ReqReportOderRequest",
                  {strategy_id = self._goodInfo.pay_attach.stid or -1, product_id = self._goodInfo.productId, order_no = orderNo})
end

-- 请求校验商品状态
function PayOderCheckModule:checkGoodStatus(goodInfo)
    XH.TipTool.showLoading()
    self:startReq("ReqCheckOderRequest", {strategy_id = goodInfo.pay_attach.stid or -1, product_id = goodInfo.productId})
end

-- 上报订单结果处理（空实现，需根据业务逻辑补充）
function PayOderCheckModule:onReportOderResp(cell, flag, data)
end

-- 校验订单结果处理
function PayOderCheckModule:onCheckOderResp(cell, flag, data)
    XH.TipTool.hideLoading()
    if flag == XH.Req.TYPE.SUCCESS then
        -- 成功回调
        if self._successCall then
            self._successCall()
        end
    elseif flag == XH.Req.TYPE.FAIL then
        -- 失败回调并提示错误信息
        if self._failCall then
            self._failCall()
        end
        XH.TipTool.showToast(cell:getMessage())
    else
        -- 其他异常情况处理
        XH.TipTool.showToast("下单超时，请检查网络后再试")
    end
end

return PayOderCheckModule
�