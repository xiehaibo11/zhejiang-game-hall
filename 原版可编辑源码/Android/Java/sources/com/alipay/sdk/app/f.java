package com.alipay.sdk.app;

import android.app.Activity;

final class f implements Runnable {
    final Activity a;

    f(Activity activity) {
        this.a = activity;
    }

    @Override
    public void run() {
        this.a.finish();
    }
}
