package com.bianfeng.ymnsdk;

import com.bianfeng.platform.PaymentWrapper;
import com.bianfeng.platform.UserWrapper;

/* JADX INFO: loaded from: classes.dex */
public class YmnSdk extends YmnSdkUserWrapper implements UserWrapper, PaymentWrapper {
    private YmnSdk() {
    }

    public static String getVersion() {
        return "2.4.8.7";
    }
}
