package com.huawei.updatesdk.b.b;

import android.content.Context;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private static final Object d = new Object();
    private static a e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private b f2317a;
    private String b;
    private boolean c = false;

    private a(Context context) {
        this.f2317a = b.a("DeviceSessionUpdateSDK_V1", context);
    }

    public static a d() {
        a aVar;
        synchronized (d) {
            if (e == null) {
                e = new a(com.huawei.updatesdk.a.b.a.a.c().a());
            }
            aVar = e;
        }
        return aVar;
    }

    public String a() {
        return this.b;
    }

    public String a(String str) {
        return this.f2317a.a("updatesdk.lastAccountZone" + str, "");
    }

    public void a(long j) {
        this.f2317a.b("updatesdk.lastCheckDate", j);
    }

    public void a(String str, long j) {
        this.f2317a.b("updatesdk.lastInitAccountTime" + str, j);
    }

    public void a(String str, String str2) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        this.f2317a.b(str, str2);
    }

    public long b() {
        return this.f2317a.a("updatesdk.lastCheckDate", 0L);
    }

    public long b(String str) {
        return this.f2317a.a("updatesdk.lastInitAccountTime" + str, 0L);
    }

    public void b(String str, String str2) {
        this.f2317a.b("updatesdk.lastAccountZone" + str, str2);
    }

    public String c(String str) {
        return TextUtils.isEmpty(str) ? "" : this.f2317a.a(str, "");
    }

    public void c() {
        if (this.c) {
            return;
        }
        d("updatesdk.sign.param");
        d("updatesdk.signkey");
        d("updatesdk.signtime");
        this.c = true;
    }

    public void d(String str) {
        this.f2317a.a(str);
    }

    public void e(String str) {
        this.b = str;
    }
}
