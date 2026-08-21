package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.content.Intent;

final class y implements Runnable {
    final Context a;
    final Intent a;

    y(Context context, Intent intent) {
        this.a = context;
        this.a = intent;
    }

    @Override
    public void run() {
        try {
            this.a.startService(this.a);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(e.getMessage());
        }
    }
}
