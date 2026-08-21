package com.mbridge.msdk.foundation.same.net.c;

import android.text.TextUtils;

/* JADX INFO: compiled from: Header.java */
/* JADX INFO: loaded from: classes2.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f3433a;
    private final String b;

    public b(String str, String str2) {
        this.f3433a = str;
        this.b = str2;
    }

    public final String a() {
        return this.f3433a;
    }

    public final String b() {
        return this.b;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        b bVar = (b) obj;
        return TextUtils.equals(this.f3433a, bVar.f3433a) && TextUtils.equals(this.b, bVar.b);
    }

    public final int hashCode() {
        return (this.f3433a.hashCode() * 31) + this.b.hashCode();
    }

    public final String toString() {
        return "Header[name=" + this.f3433a + ",value=" + this.b + "]";
    }
}
