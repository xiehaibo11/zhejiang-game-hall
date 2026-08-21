package com.loc;

import android.os.Build;

public enum aq {
    a(x.c("IeGlhb21p")),
    b(x.c("IbWVpenU")),
    c(x.c("IaHVhd2Vp")),
    d(x.c("Ib3Bwbw")),
    e(x.c("Idml2bw")),
    f(x.c("Mc21hcnRpc2Fu")),
    g(x.c("IYW1pZ28")),
    h(x.c("IbGV0dg")),
    i(x.c("EaHRj")),
    j(x.c("EbGdl")),
    k(x.c("IZ29vZ2xl")),
    l(x.c("IbnViaWE")),
    m("");

    private String n;
    private int o;
    private String p;
    private String q;
    private String r = Build.MANUFACTURER;

    aq(String str) {
        this.n = str;
    }

    public final String a() {
        return this.n;
    }

    public final void a(int i2) {
        this.o = i2;
    }

    public final void a(String str) {
        this.p = str;
    }

    public final String b() {
        return this.p;
    }

    public final void b(String str) {
        this.q = str;
    }

    @Override
    public final String toString() {
        return "ROM{name='" + name() + "',versionCode=" + this.o + ", versionName='" + this.q + "',ma=" + this.n + "',manufacturer=" + this.r + "'}";
    }
}
