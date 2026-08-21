package com.tkay.expressad.exoplayer.j.a;

import java.io.File;

/* JADX INFO: loaded from: classes3.dex */
public class e implements Comparable<e> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6709a;
    public final long b;
    public final long c;
    public final boolean d;
    public final File e;
    public final long f;

    @Override // java.lang.Comparable
    public /* synthetic */ int compareTo(e eVar) {
        e eVar2 = eVar;
        if (!this.f6709a.equals(eVar2.f6709a)) {
            return this.f6709a.compareTo(eVar2.f6709a);
        }
        long j = this.b - eVar2.b;
        if (j == 0) {
            return 0;
        }
        return j < 0 ? -1 : 1;
    }

    private e(String str, long j, long j2) {
        this(str, j, j2, -9223372036854775807L, null);
    }

    public e(String str, long j, long j2, long j3, File file) {
        this.f6709a = str;
        this.b = j;
        this.c = j2;
        this.d = file != null;
        this.e = file;
        this.f = j3;
    }

    public final boolean a() {
        return this.c == -1;
    }

    public final boolean b() {
        return !this.d;
    }

    private int a(e eVar) {
        if (!this.f6709a.equals(eVar.f6709a)) {
            return this.f6709a.compareTo(eVar.f6709a);
        }
        long j = this.b - eVar.b;
        if (j == 0) {
            return 0;
        }
        return j < 0 ? -1 : 1;
    }
}
