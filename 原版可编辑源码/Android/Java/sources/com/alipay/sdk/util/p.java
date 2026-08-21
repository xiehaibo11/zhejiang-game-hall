package com.alipay.sdk.util;

import android.app.Activity;

final class p implements Runnable {
    final Activity a;

    p(Activity activity) {
        this.a = activity;
    }

    @Override
    public void run() {
        this.a.finish();
    }
}
