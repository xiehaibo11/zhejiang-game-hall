package com.loc;

import android.text.TextUtils;
import java.util.Map;

public final class fl extends r {
    Map<String, String> a = null;
    Map<String, String> b = null;
    String c = "";
    byte[] d = null;
    private String e = null;

    @Override
    public final Map<String, String> a() {
        return this.a;
    }

    public final void a(Map<String, String> map) {
        this.a = map;
    }

    public final void a(byte[] bArr) {
        this.d = bArr;
    }

    @Override
    public final String b() {
        return this.c;
    }

    public final void b(String str) {
        this.c = str;
    }

    public final void b(Map<String, String> map) {
        this.b = map;
    }

    @Override
    public final String c() {
        return !TextUtils.isEmpty(this.e) ? this.e : super.c();
    }

    public final void c(String str) {
        this.e = str;
    }

    @Override
    public final byte[] d() {
        return this.d;
    }

    @Override
    public final Map<String, String> e() {
        return this.b;
    }
}
