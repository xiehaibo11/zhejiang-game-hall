package com.mbridge.msdk.splash.a;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.tools.v;

/* JADX INFO: compiled from: ReportData.java */
/* JADX INFO: loaded from: classes2.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f3971a;
    private String b;
    private String c;
    private String d;
    private String e;
    private String f;
    private String g;
    private int h;
    private boolean i;
    private int j;

    public final b a(boolean z) {
        this.i = z;
        return this;
    }

    private b() {
    }

    public static b a() {
        return new b();
    }

    public final b a(String str) {
        this.f3971a = str;
        return this;
    }

    public final void a(int i) {
        this.j = i;
    }

    public final b b(String str) {
        this.b = str;
        return this;
    }

    public final b c(String str) {
        this.c = str;
        return this;
    }

    public final b d(String str) {
        this.d = str;
        return this;
    }

    public final b e(String str) {
        this.f = str;
        return this;
    }

    public final b f(String str) {
        this.g = str;
        return this;
    }

    public final b g(String str) {
        this.e = str;
        return this;
    }

    public final b b(int i) {
        this.h = i;
        return this;
    }

    public final String b() {
        StringBuilder sb = new StringBuilder();
        if (!TextUtils.isEmpty(this.b)) {
            sb.append("unit_id=");
            sb.append(this.b);
            sb.append("&");
        }
        if (!TextUtils.isEmpty(this.c)) {
            sb.append("cid=");
            sb.append(this.c);
            sb.append("&");
        }
        if (!TextUtils.isEmpty(this.d)) {
            sb.append("rid=");
            sb.append(this.d);
            sb.append("&");
        }
        if (!TextUtils.isEmpty(this.e)) {
            sb.append("rid_n=");
            sb.append(this.e);
            sb.append("&");
        }
        if (!TextUtils.isEmpty(this.f)) {
            sb.append("creative_id=");
            sb.append(this.f);
            sb.append("&");
        }
        if (!TextUtils.isEmpty(this.g)) {
            sb.append("reason=");
            sb.append(this.g);
            sb.append("&");
        }
        if (this.h != 0) {
            sb.append("result=");
            sb.append(this.h);
            sb.append("&");
        }
        if (this.i) {
            sb.append("hb=1");
            sb.append("&");
        }
        if (this.j != 0) {
            sb.append("close_type=");
            sb.append(this.j);
            sb.append("&");
        }
        sb.append("network_type=");
        sb.append(v.D(com.mbridge.msdk.foundation.controller.a.f().j()));
        sb.append("&");
        if (!TextUtils.isEmpty(this.f3971a)) {
            sb.append("key=");
            sb.append(this.f3971a);
        }
        return sb.toString();
    }
}
