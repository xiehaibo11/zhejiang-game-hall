package com.xiaomi.mipush.sdk;

import android.content.Context;

final class z implements Runnable {
    final Context a;

    z(Context context) {
        this.a = context;
    }

    @Override
    public void run() {
        MessageHandleService.c(this.a);
    }
}
