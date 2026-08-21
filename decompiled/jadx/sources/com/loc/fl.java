package com.loc;

import android.text.TextUtils;
import java.util.Map;

/* JADX INFO: compiled from: HttpRequest.java */
/* JADX INFO: loaded from: classes2.dex */
public final class fl extends r {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Map<String, String> f2979a = null;
    Map<String, String> b = null;
    String c = "";
    byte[] d = null;
    private String e = null;

    @Override // com.loc.bt
    public final Map<String, String> a() {
        return this.f2979a;
    }

    public final void a(Map<String, String> map) {
        this.f2979a = map;
    }

    public final void a(byte[] bArr) {
        this.d = bArr;
    }

    @Override // com.loc.bt
    public final String b() {
        return this.c;
    }

    public final void b(String str) {
        this.c = str;
    }

    public final void b(Map<String, String> map) {
        this.b = map;
    }

    @Override // com.loc.r, com.loc.bt
    public final String c() {
        return !TextUtils.isEmpty(this.e) ? this.e : super.c();
    }

    public final void c(String str) {
        this.e = str;
    }

    @Override // com.loc.bt
    public final byte[] d() {
        return this.d;
    }

    @Override // com.loc.bt
    public final Map<String, String> e() {
        return this.b;
    }
}
