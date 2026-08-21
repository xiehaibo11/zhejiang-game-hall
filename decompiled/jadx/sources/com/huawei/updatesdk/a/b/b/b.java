package com.huawei.updatesdk.a.b.b;

import android.content.Intent;
import android.os.Bundle;

/* JADX INFO: loaded from: classes2.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Intent f2306a;

    private b(Intent intent) {
        this.f2306a = intent;
    }

    public static b a(Intent intent) {
        return new b(intent);
    }

    public int a(String str, int i) {
        if (d()) {
            try {
                return this.f2306a.getIntExtra(str, i);
            } catch (Exception unused) {
                com.huawei.updatesdk.a.a.a.a("SecureIntent", "getIntExtra exception!");
            }
        }
        return i;
    }

    public String a() {
        String action;
        return (!d() || (action = this.f2306a.getAction()) == null) ? "" : action;
    }

    public String a(String str) {
        if (!d()) {
            return "";
        }
        try {
            return this.f2306a.getStringExtra(str);
        } catch (Exception unused) {
            com.huawei.updatesdk.a.a.a.a("SecureIntent", "getStringExtra exception!");
            return "";
        }
    }

    public boolean a(String str, boolean z) {
        if (d()) {
            try {
                return this.f2306a.getBooleanExtra(str, z);
            } catch (Exception unused) {
                com.huawei.updatesdk.a.a.a.a("SecureIntent", "getBooleanExtra exception!");
            }
        }
        return z;
    }

    public long b(String str, int i) {
        if (d()) {
            try {
                return this.f2306a.getLongExtra(str, i);
            } catch (Exception unused) {
                com.huawei.updatesdk.a.a.a.a("SecureIntent", "getIntExtra exception!");
            }
        }
        return i;
    }

    public Bundle b() {
        if (d()) {
            return this.f2306a.getExtras();
        }
        return null;
    }

    public Intent c() {
        return this.f2306a;
    }

    public boolean d() {
        return this.f2306a != null;
    }
}
