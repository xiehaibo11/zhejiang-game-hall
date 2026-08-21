package com.bianfeng.paylib;

import java.util.HashMap;

public class YmnWebpaysdkCallback {
    public void onCall(HashMap<String, String> map) {
        YmnWebpaySdk.getInstance().pay(map);
    }
}
