package com.huawei.updatesdk.service.otaupdate;

import android.text.TextUtils;
import com.huawei.hms.common.PackageConstants;

/* JADX INFO: loaded from: classes2.dex */
public class f {
    private static f d = new f();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2369a;
    private String b;
    private String c = PackageConstants.SERVICES_PACKAGE_APPMARKET;

    private f() {
    }

    public static f e() {
        return d;
    }

    public String a() {
        return !TextUtils.isEmpty(this.f2369a) ? this.f2369a : this.b;
    }

    public void a(String str) {
        this.b = str;
    }

    public String b() {
        return this.f2369a;
    }

    public void b(String str) {
        this.f2369a = str;
    }

    public String c() {
        return this.c;
    }

    public void c(String str) {
        this.c = str;
    }

    public boolean d() {
        String str = this.f2369a;
        if (str != null) {
            return str.equals(this.b);
        }
        return true;
    }
}
