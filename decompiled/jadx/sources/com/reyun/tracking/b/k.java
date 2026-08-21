package com.reyun.tracking.b;

import android.support.v4.os.EnvironmentCompat;
import com.reyun.tracking.sdk.Tracking;

/* JADX INFO: loaded from: classes3.dex */
class k implements d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ j f4732a;

    k(j jVar) {
        this.f4732a = jVar;
    }

    @Override // com.reyun.tracking.b.d
    public void a(String str) {
        com.reyun.tracking.a.a.d(Tracking.TAG, "oaid async getFailed errMsg:" + str);
        this.f4732a.d.a(this.f4732a.b, EnvironmentCompat.MEDIA_UNKNOWN, false);
        this.f4732a.d.a(this.f4732a.f4731a, "1000010", str);
    }

    @Override // com.reyun.tracking.b.d
    public void a(String str, boolean z) {
        com.reyun.tracking.a.a.d(Tracking.TAG, "oaid async getSuccess :" + str + " isOaidTrackLimited:" + z);
        this.f4732a.d.a(this.f4732a.f4731a, str, z);
        this.f4732a.d.a(this.f4732a.b, str, z);
        this.f4732a.d.a(this.f4732a.f4731a, "100003", "");
    }
}
