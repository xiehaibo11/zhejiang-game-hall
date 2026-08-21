package com.bianfeng.splitscreenlib.pay;

import com.bianfeng.loginlib.YmnH5GameLoginSdk;
import com.bianfeng.splitscreenlib.YmnH5GameSdk;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public class YmnPayCallBack {
    private String type_success = "type_success";
    private String type_request_order = "type_request_order";
    private String type_fail = "type_fail";

    public void onCall(HashMap<String, String> map) {
        String str = map.get("type");
        if (this.type_success.equalsIgnoreCase(str)) {
            YmnH5GameSdk.getInstance().getCallback().onPaySuccess();
        } else if (this.type_request_order.equalsIgnoreCase(str)) {
            YmnH5GameLoginSdk.getInstance().endPay();
        } else {
            YmnH5GameSdk.getInstance().getCallback().onPayFail(map.get("msg"));
        }
    }
}
