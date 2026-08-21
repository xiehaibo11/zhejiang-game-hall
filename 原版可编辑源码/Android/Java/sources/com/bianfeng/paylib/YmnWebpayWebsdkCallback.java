package com.bianfeng.paylib;

import com.bianfeng.utilslib.UtilsSdk;
import java.util.HashMap;

public class YmnWebpayWebsdkCallback {
    public void onCall(HashMap<String, String> map) {
        UtilsSdk.getLogger().e("onCall YmnWebpayWebsdkCallback 支付");
        YmnWebpaySdk.getInstance().payWeb(map);
    }
}
