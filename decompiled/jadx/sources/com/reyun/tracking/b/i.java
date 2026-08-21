package com.reyun.tracking.b;

import android.support.v4.os.EnvironmentCompat;
import com.reyun.tracking.sdk.Tracking;

/* JADX INFO: loaded from: classes3.dex */
class i implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ l f4730a;
    final /* synthetic */ h b;

    i(h hVar, l lVar) {
        this.b = hVar;
        this.f4730a = lVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        if (this.b.f4729a) {
            return;
        }
        com.reyun.tracking.a.a.d(Tracking.TAG, "oaid error:get timeOut");
        this.b.a(this.f4730a, EnvironmentCompat.MEDIA_UNKNOWN, false);
    }
}
