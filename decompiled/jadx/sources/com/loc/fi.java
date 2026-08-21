package com.loc;

import com.amap.api.location.AMapLocation;

/* JADX INFO: compiled from: LastLocationInfo.java */
/* JADX INFO: loaded from: classes2.dex */
@ba(a = "c")
public class fi {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    @bb(a = "a2", b = 6)
    private String f2976a;

    @bb(a = "a3", b = 5)
    private long b;

    @bb(a = "a4", b = 6)
    private String c;
    private AMapLocation d;

    public final AMapLocation a() {
        return this.d;
    }

    public final void a(long j) {
        this.b = j;
    }

    public final void a(AMapLocation aMapLocation) {
        this.d = aMapLocation;
    }

    public final void a(String str) {
        this.c = str;
    }

    public final String b() {
        return this.c;
    }

    public final void b(String str) {
        this.f2976a = str;
    }

    public final String c() {
        return this.f2976a;
    }

    public final long d() {
        return this.b;
    }
}
