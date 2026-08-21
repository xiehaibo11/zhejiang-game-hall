package com.tkay.expressad.foundation.g.f.c;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes3.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f6896a;
    private final String b;

    public c(String str, String str2) {
        this.f6896a = str;
        this.b = str2;
    }

    public final String a() {
        return this.f6896a;
    }

    public final String b() {
        return this.b;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            c cVar = (c) obj;
            if (TextUtils.equals(this.f6896a, cVar.f6896a) && TextUtils.equals(this.b, cVar.b)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return (this.f6896a.hashCode() * 31) + this.b.hashCode();
    }

    public final String toString() {
        return "Header[name=" + this.f6896a + ",value=" + this.b + "]";
    }
}
