package com.reyun.tracking.b;

import android.content.Context;
import android.support.v4.os.EnvironmentCompat;
import com.reyun.tracking.b.a.n;
import com.reyun.tracking.sdk.Tracking;
import com.ymnsdk.replugin.util.RomUtil;

class j implements Runnable {
    final Context a;
    final l b;
    final String c;
    final h d;

    j(h hVar, Context context, l lVar, String str) {
        this.d = hVar;
        this.a = context;
        this.b = lVar;
        this.c = str;
    }

    @Override
    public void run() {
        try {
            k kVar = new k(this);
            if ("ASUS".equals(this.c)) {
                new com.reyun.tracking.b.a.a(this.a).a(kVar);
            } else if (RomUtil.ROM_OPPO.equals(this.c)) {
                new com.reyun.tracking.b.a.i(this.a).a(kVar);
            } else if ("ONEPLUS".equals(this.c)) {
                new com.reyun.tracking.b.a.g(this.a).a(kVar);
            } else if ("ZTE".equals(this.c) || "FERRMEOS".equals(this.c) || "SSUI".equals(this.c)) {
                new n(this.a).a(kVar);
            } else if ("HUAWEI".equals(this.c) || "HONOR".equals(this.c)) {
                new a(this.a).a(kVar);
            } else if ("SAMSUNG".equals(this.c)) {
                new com.reyun.tracking.b.a.k(this.a).a(kVar);
            } else if ("LENOVO".equals(this.c) || "MOTOLORA".equals(this.c)) {
                new com.reyun.tracking.b.a.c(this.a).a(kVar);
            } else if ("MEIZU".equals(this.c)) {
                new com.reyun.tracking.b.a.e(this.a).a(kVar);
            } else {
                com.reyun.tracking.a.a.d(Tracking.TAG, "oaid error:async unknown manufacturer");
                this.d.a(this.b, EnvironmentCompat.MEDIA_UNKNOWN, false);
                this.d.a(this.a, "100009", "async unknown manufacturer");
            }
        } catch (Throwable th) {
            th.printStackTrace();
            com.reyun.tracking.a.a.d(Tracking.TAG, "oaid :async unknown");
            this.d.a(this.b, EnvironmentCompat.MEDIA_UNKNOWN, false);
            this.d.a(this.a, "100005", "async unknown");
        }
    }
}
