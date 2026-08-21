package com.huawei.hms.hatool;

import android.content.Context;

/* JADX INFO: loaded from: classes.dex */
public class k1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public k f2106a;
    public k b;
    public Context c;
    public String d;

    public k1(Context context) {
        if (context != null) {
            this.c = context.getApplicationContext();
        }
        this.f2106a = new k();
        this.b = new k();
    }

    public k1 a(int i, String str) {
        k kVar;
        y.c("hmsSdk", "Builder.setCollectURL(int type,String collectURL) is execute.TYPE : " + i);
        if (!t0.b(str)) {
            str = "";
        }
        if (i == 0) {
            kVar = this.f2106a;
        } else {
            if (i != 1) {
                y.f("hmsSdk", "Builder.setCollectURL(int type,String collectURL): invalid type!");
                return this;
            }
            kVar = this.b;
        }
        kVar.b(str);
        return this;
    }

    public k1 a(String str) {
        y.c("hmsSdk", "Builder.setAppID is execute");
        this.d = str;
        return this;
    }

    @Deprecated
    public k1 a(boolean z) {
        y.c("hmsSdk", "Builder.setEnableImei(boolean isReportAndroidImei) is execute.");
        this.f2106a.j().a(z);
        this.b.j().a(z);
        return this;
    }

    public void a() {
        if (this.c == null) {
            y.b("hmsSdk", "analyticsConf create(): context is null,create failed!");
            return;
        }
        y.c("hmsSdk", "Builder.create() is execute.");
        h1 h1Var = new h1("_hms_config_tag");
        h1Var.b(new k(this.f2106a));
        h1Var.a(new k(this.b));
        f1.a().a(this.c);
        g1.a().a(this.c);
        m1.c().a(h1Var);
        f1.a().a(this.d);
    }

    @Deprecated
    public k1 b(boolean z) {
        y.c("hmsSdk", "Builder.setEnableSN(boolean isReportSN) is execute.");
        this.f2106a.j().b(z);
        this.b.j().b(z);
        return this;
    }

    @Deprecated
    public k1 c(boolean z) {
        y.c("hmsSdk", "Builder.setEnableUDID(boolean isReportUDID) is execute.");
        this.f2106a.j().c(z);
        this.b.j().c(z);
        return this;
    }
}
