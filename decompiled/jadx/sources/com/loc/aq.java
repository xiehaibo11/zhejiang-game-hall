package com.loc;

import android.os.Build;

/* JADX INFO: compiled from: Rom.java */
/* JADX INFO: loaded from: classes2.dex */
public enum aq {
    MIUI(x.c("IeGlhb21p")),
    Flyme(x.c("IbWVpenU")),
    RH(x.c("IaHVhd2Vp")),
    ColorOS(x.c("Ib3Bwbw")),
    FuntouchOS(x.c("Idml2bw")),
    SmartisanOS(x.c("Mc21hcnRpc2Fu")),
    AmigoOS(x.c("IYW1pZ28")),
    EUI(x.c("IbGV0dg")),
    Sense(x.c("EaHRj")),
    LG(x.c("EbGdl")),
    Google(x.c("IZ29vZ2xl")),
    NubiaUI(x.c("IbnViaWE")),
    Other("");

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

    public final void a(int i) {
        this.o = i;
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

    @Override // java.lang.Enum
    public final String toString() {
        return "ROM{name='" + name() + "',versionCode=" + this.o + ", versionName='" + this.q + "',ma=" + this.n + "',manufacturer=" + this.r + "'}";
    }
}
