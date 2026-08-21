package com.tkay.core.common.f;

/* JADX INFO: loaded from: classes3.dex */
public final class f extends z {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6154a = 1;
    public static final int b = 2;
    private String R;
    private String S;
    private int am = 1;

    public final String a() {
        return this.S;
    }

    public final void a(String str) {
        this.S = str;
    }

    public final String b() {
        return this.R;
    }

    public final void b(String str) {
        this.R = str;
    }

    public final int c() {
        return this.am;
    }

    public final void a(int i) {
        this.am = i;
    }

    @Override // com.tkay.core.common.f.h
    public final int d() {
        return this.am == 1 ? 2 : 4;
    }
}
