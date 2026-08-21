package com.alipay.sdk;

import android.app.Activity;
import com.alipay.sdk.executor.AliPayHelper;

/* JADX INFO: loaded from: classes.dex */
public class PaySdk {
    private PaySdk() {
    }

    public static void pay(Activity activity, String str, OnPayListener onPayListener) {
        new AliPayHelper(activity).start(str, onPayListener);
    }
}
