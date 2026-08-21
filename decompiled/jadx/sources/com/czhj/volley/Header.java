package com.czhj.volley;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
public final class Header {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f1830a;
    private final String b;

    public Header(String str, String str2) {
        this.f1830a = str;
        this.b = str2;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        Header header = (Header) obj;
        return TextUtils.equals(this.f1830a, header.f1830a) && TextUtils.equals(this.b, header.b);
    }

    public final String getName() {
        return this.f1830a;
    }

    public final String getValue() {
        return this.b;
    }

    public int hashCode() {
        return (this.f1830a.hashCode() * 31) + this.b.hashCode();
    }

    public String toString() {
        return "Header[name=" + this.f1830a + ",value=" + this.b + "]";
    }
}
