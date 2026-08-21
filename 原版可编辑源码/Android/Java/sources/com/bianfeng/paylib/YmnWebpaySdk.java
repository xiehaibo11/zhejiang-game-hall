package com.bianfeng.paylib;

import android.app.Activity;
import android.text.TextUtils;
import com.bianfeng.paylib.action.ActionObserver;
import com.bianfeng.paylib.action.ActionSupport;
import com.bianfeng.paylib.action.IPaymentFeature;
import com.bianfeng.paylib.action.RequestNetIpAction;
import com.bianfeng.paylib.action.RequestNetIpCallBack;
import com.bianfeng.paylib.action.RequestOrderAction;
import com.bianfeng.paylib.entity.YmnAliWebpayEntity;
import com.bianfeng.paylib.entity.YmnWxWebpayEntity;
import com.bianfeng.paylib.ui.WebpaysdkApi;
import com.bianfeng.paylib.ui.WebpaysdkCallback;
import com.bianfeng.paylib.utils.AliPayUtils;
import com.bianfeng.paylib.utils.PayExtMapUtils;
import com.bianfeng.paylib.utils.WxPayUtils;
import com.bianfeng.thridlibrary.GsonUtils;
import com.bianfeng.thridlibrary.ThridSdk;
import com.bianfeng.utilslib.AppConfigUtils;
import com.bianfeng.utilslib.Logger;
import com.bianfeng.utilslib.UtilsSdk;
import com.huawei.hms.framework.common.ContainerUtils;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

public class YmnWebpaySdk {
    private static YmnWebpaySdk ymnWebpaySdk = new YmnWebpaySdk();
    private Activity mContext;
    private Map<String, String> map;
    private String netIpSuccess = "";
    private WebpaysdkCallback webpaysdkCallback = new WebpaysdkCallback() {
        @Override
        public void buyNext(String str) {
            YmnWebpaySdk.this.onNext(str);
        }

        @Override
        public void onCancel() {
            UtilsSdk.getToast().show(YmnWebpaySdk.this.mContext, "支付取消");
            YmnWebpaySdk.this.payCallback("type_fail", "支付取消");
        }

        @Override
        public void onPaySuccess() {
            UtilsSdk.getToast().show(YmnWebpaySdk.this.mContext, "支付成功");
            YmnWebpaySdk.this.payCallback("type_success", "支付成功");
        }

        @Override
        public void onPayFail(String str) {
            UtilsSdk.getToast().show(YmnWebpaySdk.this.mContext, "支付失败");
            YmnWebpaySdk.this.payCallback("type_fail", "支付失败|" + str);
        }
    };
    private RequestNetIpCallBack requestNetIpCallBack = new RequestNetIpCallBack() {
        @Override
        public void onSuccess(String str) {
            UtilsSdk.getAppConfig();
            AppConfigUtils.getInstance().setNetIp(str);
            YmnWebpaySdk.this.netIpSuccess = "true";
        }

        @Override
        public void onFail(String str) {
            YmnWebpaySdk.this.netIpSuccess = "false";
        }
    };
    private boolean isPayWithSdk = true;

    private YmnWebpaySdk() {
        RequestNetIpAction.getInstance().setCallBack(this.requestNetIpCallBack).GetNetIp();
    }

    public static YmnWebpaySdk getInstance() {
        return ymnWebpaySdk;
    }

    public YmnWebpaySdk setPayWithWeb() {
        this.isPayWithSdk = false;
        return this;
    }

    public void init(Activity activity) {
        this.mContext = activity;
    }

    @Deprecated
    public void pay(Map<String, String> map) {
        this.map = PayExtMapUtils.updataOrder(map);
        UtilsSdk.getLogger().i("order:" + map);
        WebpaysdkApi.getInstance().setCallback(this.webpaysdkCallback);
        WebpaysdkApi.getInstance().startPayment(this.mContext);
    }

    public void payWeb(Map<String, String> map) {
        this.map = PayExtMapUtils.updataOrder(map);
        UtilsSdk.getLogger().i("payWeb order:" + map);
        WebpaysdkApi.getInstance().setCallback(this.webpaysdkCallback);
        String strJoinUrl = joinUrl(map);
        UtilsSdk.getLogger().i("payWeb data:" + strJoinUrl);
        WebpaysdkApi.getInstance().startPaymentWeb(this.mContext, strJoinUrl);
    }

    private String joinUrl(Map<String, String> map) {
        StringBuffer stringBuffer = new StringBuffer();
        for (Map.Entry<String, String> entry : map.entrySet()) {
            String value = entry.getValue();
            if (!TextUtils.isEmpty(value)) {
                stringBuffer.append("&");
                stringBuffer.append(entry.getKey());
                stringBuffer.append(ContainerUtils.KEY_VALUE_DELIMITER);
                stringBuffer.append(value);
            }
        }
        return stringBuffer.toString();
    }

    private void onNext(String str) {
        if (!this.isPayWithSdk && !"true".equalsIgnoreCase(this.netIpSuccess)) {
            UtilsSdk.getToast().show(this.mContext, "支付失败，网络异常");
            return;
        }
        RequestOrderAction requestOrderAction = new RequestOrderAction(this.mContext);
        this.map.put(IPaymentFeature.ARG_PLUGIN_ID, str);
        requestOrderAction.putReqData(this.map);
        requestOrderAction.addObserver(new ActionObserver() {
            @Override
            public void onActionResult(ActionSupport.ResponseResult responseResult) {
                if (responseResult.isOk()) {
                    YmnWebpaySdk.this.toPay(responseResult.processedResultAsMap());
                    return;
                }
                UtilsSdk.getToast().show(YmnWebpaySdk.this.mContext, "下单失败 请联系客服");
                YmnWebpaySdk.this.payCallback("type_request_order", "下单响应");
                YmnWebpaySdk.this.payCallback("type_fail", "下单失败" + responseResult.messageFail());
                UtilsSdk.getLogger().i("下单失败" + responseResult.messageFail());
            }
        });
        requestOrderAction.actionStart();
    }

    private void toPay(Map<String, String> map) {
        try {
            Logger.getInstance().i("支付信息-->" + GsonUtils.getInstance().toJson(map));
            String str = map.get("client_callback");
            JSONObject jSONObject = new JSONObject(str);
            int i = jSONObject.has("client_type") ? jSONObject.getInt("client_type") : -1;
            if (i == 0) {
                WxPayUtils.pay(this.mContext, str);
                return;
            }
            if (1 == i) {
                WebpaysdkApi.getInstance().startWxWebpay(this.mContext, (YmnWxWebpayEntity) ThridSdk.getGson().fromJson(str, YmnWxWebpayEntity.class));
                return;
            }
            if (2 == i) {
                payCallback("type_request_order", "下单响应");
                AliPayUtils.pay(this.mContext, str);
            } else {
                if (3 == i) {
                    WebpaysdkApi.getInstance().startAliWebpay(this.mContext, (YmnAliWebpayEntity) ThridSdk.getGson().fromJson(str, YmnAliWebpayEntity.class));
                    return;
                }
                UtilsSdk.getToast().show(this.mContext, "支付异常，请联系客服 1");
                payCallback("type_fail", "支付异常，请联系客服 1");
                payCallback("type_request_order", "下单响应");
            }
        } catch (Exception e) {
            e.printStackTrace();
            payCallback("type_fail", "支付异常，请联系客服 2");
            payCallback("type_request_order", "下单响应");
            UtilsSdk.getToast().show(this.mContext, "支付异常，请联系客服 2");
        }
    }

    public void payCallback(String str, String str2) {
        HashMap map = new HashMap();
        map.put("type", str);
        map.put("msg", str2);
        UtilsSdk.getReflexCall().onCallWithObject(UtilsSdk.getClassNameSet().gePayCallback(), map);
    }
}
