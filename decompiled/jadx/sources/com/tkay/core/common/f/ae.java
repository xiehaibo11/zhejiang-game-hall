package com.tkay.core.common.f;

/* JADX INFO: loaded from: classes3.dex */
public final class ae {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f6136a;
    private boolean b;
    private Boolean c;

    public ae(String str, boolean z) {
        this.f6136a = str;
        this.b = z;
    }

    public final synchronized void a(boolean z) {
        this.c = Boolean.valueOf(z);
    }

    public final synchronized String a() {
        return this.f6136a;
    }

    public final synchronized boolean b() {
        return this.b;
    }

    public final synchronized Boolean c() {
        return this.c;
    }
}
