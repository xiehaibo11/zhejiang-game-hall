package com.bianfeng.paylib;

import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public class YmnWebpaysdkCallback {
    public void onCall(HashMap<String, String> map) {
        YmnWebpaySdk.getInstance().pay(map);
    }
}
