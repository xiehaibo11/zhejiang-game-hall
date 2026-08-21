package com.reyun.tracking.b;

import android.support.v4.os.EnvironmentCompat;
import com.reyun.tracking.sdk.Tracking;

class i implements Runnable {
    final l a;
    final h b;

    i(h hVar, l lVar) {
        this.b = hVar;
        this.a = lVar;
    }

    @Override
    public void run() {
        if (this.b.a) {
            return;
        }
        com.reyun.tracking.a.a.d(Tracking.TAG, "oaid error:get timeOut");
        this.b.a(this.a, EnvironmentCompat.MEDIA_UNKNOWN, false);
    }
}
