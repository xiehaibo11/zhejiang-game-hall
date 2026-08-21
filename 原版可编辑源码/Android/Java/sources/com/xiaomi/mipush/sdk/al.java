package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.content.Intent;

final class al implements Runnable {
    final Context a;
    final Intent a;

    al(Context context, Intent intent) {
        this.a = context;
        this.a = intent;
    }

    @Override
    public void run() {
        PushMessageHandler.b(this.a, this.a);
    }
}
