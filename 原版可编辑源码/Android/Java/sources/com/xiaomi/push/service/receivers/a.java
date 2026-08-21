package com.xiaomi.push.service.receivers;

import android.content.Context;

class a implements Runnable {
    final Context a;
    final NetworkStatusReceiver a;

    a(NetworkStatusReceiver networkStatusReceiver, Context context) {
        this.a = networkStatusReceiver;
        this.a = context;
    }

    @Override
    public void run() {
        this.a.a(this.a);
    }
}
