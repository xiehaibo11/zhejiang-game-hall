package com.huawei.hms.hatool;

import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class i0 implements m0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public byte[] f2099a;
    public String b;
    public String c;
    public String d;
    public String e;
    public List<q> f;

    public i0(byte[] bArr, String str, String str2, String str3, String str4, List<q> list) {
        this.f2099a = (byte[]) bArr.clone();
        this.b = str;
        this.c = str2;
        this.e = str3;
        this.d = str4;
        this.f = list;
    }

    public final b0 a(Map<String, String> map) {
        return a0.a(this.b, this.f2099a, map);
    }

    public final Map<String, String> a() {
        return b1.b(this.c, this.e, this.d);
    }

    public final void b() {
        n0.b().a(new l0(this.f, this.c, this.d, this.e));
    }

    @Override // java.lang.Runnable
    public void run() {
        y.c("hmsSdk", "send data running");
        int iA = a(a()).a();
        if (iA != 200) {
            b();
            return;
        }
        y.b("hmsSdk", "events PostRequest sendevent TYPE : %s, TAG : %s, resultCode: %d ,reqID:" + this.d, this.e, this.c, Integer.valueOf(iA));
    }
}
