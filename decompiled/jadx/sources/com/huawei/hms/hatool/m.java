package com.huawei.hms.hatool;

/* JADX INFO: loaded from: classes.dex */
public class m {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public k f2109a;
    public k b;
    public k c;
    public k d;

    public m(String str) {
    }

    public k a() {
        return this.c;
    }

    public k a(String str) {
        if (str.equals("oper")) {
            return c();
        }
        if (str.equals("maint")) {
            return b();
        }
        if (str.equals("diffprivacy")) {
            return a();
        }
        if (str.equals("preins")) {
            return d();
        }
        y.f("hmsSdk", "HiAnalyticsInstData.getConfig(type): wrong type: " + str);
        return null;
    }

    public void a(k kVar) {
        this.f2109a = kVar;
    }

    public k b() {
        return this.f2109a;
    }

    public void b(k kVar) {
        this.b = kVar;
    }

    public k c() {
        return this.b;
    }

    public k d() {
        return this.d;
    }
}
