package com.alipay.sdk;

import android.app.Activity;
import com.alipay.sdk.executor.AliPayHelper;

public class PaySdk {
    private PaySdk() {
    }

    public static void pay(Activity activity, String str, OnPayListener onPayListener) {
        new AliPayHelper(activity).start(str, onPayListener);
    }
}
