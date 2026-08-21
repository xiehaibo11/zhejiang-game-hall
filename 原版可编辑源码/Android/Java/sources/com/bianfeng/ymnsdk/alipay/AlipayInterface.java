package com.bianfeng.ymnsdk.alipay;

import android.content.Context;
import android.text.TextUtils;
import com.alipay.sdk.OnPayListener;
import com.alipay.sdk.PaySdk;
import com.alipay.sdk.util.Base64;
import com.bianfeng.ymnsdk.YmnSdk;
import com.bianfeng.ymnsdk.feature.plugin.YmnPaymentInterface;
import com.bianfeng.ymnsdk.feature.protocol.YFunction;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;
import com.bianfeng.ymnsdk.util.YmnsdkTypeUtils;
import java.util.LinkedHashMap;
import java.util.Map;
import org.json.JSONObject;

@YPlugin(entrance = YPlugin.Entrance.ACTIVITY, strategy = YPlugin.Policy.FORCE)
public class AlipayInterface extends YmnPaymentInterface {
    @Override
    public String getPluginId() {
        return "30002";
    }

    @Override
    public String getPluginName() {
        return "alipay";
    }

    @Override
    public int getPluginVersion() {
        return 19;
    }

    @Override
    public String getSdkVersion() {
        return "15.6.2";
    }

    @Override
    public void onInit(Context context) {
        super.onInit(context);
        sendResult(100, null);
        sendResult(205, null);
    }

    @Override
    public void pay(Map<String, String> map) {
        String strOptString;
        super.pay(map);
        String str = map.get("client_callback");
        if (TextUtils.isEmpty(str)) {
            str = map.get("ext");
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (YmnsdkTypeUtils.isNewTrade()) {
                strOptString = jSONObject.optString("token");
            } else {
                strOptString = jSONObject.optString("alipay_url");
            }
            PaySdk.pay(getActivity(), new String(Base64.decode(strOptString)), new OnPayListener() {
                @Override
                public void onSuccess(String str2) {
                    AlipayInterface alipayInterface = AlipayInterface.this;
                    alipayInterface.sendResult(200, alipayInterface.getOrderId());
                }

                @Override
                public void onFailure(int i, String str2) {
                    if (i == 6001) {
                        AlipayInterface.this.sendResult(202, i + "|" + str2 + "|" + AlipayInterface.this.getOrderId());
                        return;
                    }
                    AlipayInterface.this.sendResult(201, i + "|" + str2 + "|" + AlipayInterface.this.getOrderId());
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
            sendResult(201, "30002001|后台返回数据出错");
        }
    }

    @YFunction(name = "alp_iap")
    public void alp_iap(LinkedHashMap<String, String> linkedHashMap) {
        YmnSdk.callFunction("alipay_pay", linkedHashMap);
    }
}
