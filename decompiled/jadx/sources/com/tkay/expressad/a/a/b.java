package com.tkay.expressad.a.a;

import java.util.HashSet;

/* JADX INFO: loaded from: classes3.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static int f6331a = 0;
    public static int b = 1;
    private String c;
    private int d;
    private HashSet<String> e = new HashSet<>();
    private long f = System.currentTimeMillis();
    private com.tkay.expressad.foundation.d.c g;
    private String h;
    private int i;
    private boolean j;
    private boolean k;
    private int l;

    public final boolean a() {
        return this.j;
    }

    public final void a(boolean z) {
        this.j = z;
    }

    public final boolean b() {
        return this.k;
    }

    public final void b(boolean z) {
        this.k = z;
    }

    public final int c() {
        return this.l;
    }

    public final void a(int i) {
        this.l = i;
    }

    public final int d() {
        return this.i;
    }

    public final void b(int i) {
        this.i = i;
    }

    public b(String str, String str2) {
        this.c = str;
        b(str2);
    }

    public final String e() {
        return this.h;
    }

    public final void a(String str) {
        this.h = str;
    }

    public final com.tkay.expressad.foundation.d.c f() {
        return this.g;
    }

    public final void a(com.tkay.expressad.foundation.d.c cVar) {
        this.g = cVar;
    }

    private String i() {
        return this.c;
    }

    public final int g() {
        return this.d;
    }

    private HashSet<String> j() {
        return this.e;
    }

    public final void b(String str) {
        this.d++;
        this.e.add(str);
    }

    public final long h() {
        return this.f;
    }
}
