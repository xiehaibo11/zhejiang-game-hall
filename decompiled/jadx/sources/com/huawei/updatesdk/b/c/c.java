package com.huawei.updatesdk.b.c;

import android.os.Build;
import android.text.TextUtils;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public abstract class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2320a;
    private String b;

    public abstract String a();

    public abstract int b();

    abstract String c();

    abstract String d();

    public String e() {
        if (!TextUtils.isEmpty(this.b)) {
            return this.b;
        }
        String strC = c();
        this.b = strC;
        if (TextUtils.isEmpty(strC)) {
            this.b = Build.MANUFACTURER;
        }
        return this.b;
    }

    public String f() {
        if (!TextUtils.isEmpty(this.f2320a)) {
            return this.f2320a;
        }
        String strD = d();
        this.f2320a = strD;
        if (TextUtils.isEmpty(strD)) {
            this.f2320a = Build.MODEL;
        }
        return this.f2320a;
    }

    public abstract List<String> g();
}
