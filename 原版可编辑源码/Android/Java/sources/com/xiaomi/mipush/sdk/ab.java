package com.xiaomi.mipush.sdk;

import com.xiaomi.mipush.sdk.MiTinyDataClient;

class ab implements Runnable {
    final MiTinyDataClient.a.a a;

    ab(MiTinyDataClient.a.a aVar) {
        this.a = aVar;
    }

    @Override
    public void run() {
        if (this.a.a.size() != 0) {
            this.a.b();
        } else if (this.a.a != null) {
            this.a.a.cancel(false);
            this.a.a = null;
        }
    }
}
