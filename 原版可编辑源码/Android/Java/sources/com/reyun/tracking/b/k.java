package com.reyun.tracking.b;

import android.support.v4.os.EnvironmentCompat;
import com.reyun.tracking.sdk.Tracking;

class k implements d {
    final j a;

    k(j jVar) {
        this.a = jVar;
    }

    @Override
    public void a(String str) {
        com.reyun.tracking.a.a.d(Tracking.TAG, "oaid async getFailed errMsg:" + str);
        this.a.d.a(this.a.b, EnvironmentCompat.MEDIA_UNKNOWN, false);
        this.a.d.a(this.a.a, "1000010", str);
    }

    @Override
    public void a(String str, boolean z) {
        com.reyun.tracking.a.a.d(Tracking.TAG, "oaid async getSuccess :" + str + " isOaidTrackLimited:" + z);
        this.a.d.a(this.a.a, str, z);
        this.a.d.a(this.a.b, str, z);
        this.a.d.a(this.a.a, "100003", "");
    }
}
