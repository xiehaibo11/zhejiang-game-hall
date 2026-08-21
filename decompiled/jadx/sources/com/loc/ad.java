package com.loc;

import android.content.Context;
import android.os.Build;
import org.json.JSONObject;

/* JADX INFO: compiled from: AAIDRemapRequest.java */
/* JADX INFO: loaded from: classes2.dex */
public final class ad extends af {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f2829a;
    public String b;
    public String c;
    public String d;
    public String e;
    public String f;
    public String g;
    public String h;
    public String i;
    protected byte[] j;

    public ad(Context context) {
        super(context);
    }

    @Override // com.loc.bt
    public final byte[] d() {
        byte[] bArr = this.j;
        if (bArr != null) {
            return bArr;
        }
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("method", "remap");
            jSONObject.put("package_name", l.c(this.k));
            jSONObject.put("model", Build.MODEL);
            jSONObject.put(com.tkay.expressad.foundation.g.a.bd, Build.VERSION.RELEASE);
            jSONObject.put("os_type", "Android");
            jSONObject.put("sdk_version", "4.3.6");
            String strA = ab.a();
            this.f2829a = strA;
            jSONObject.put("t1", strA);
            jSONObject.put("old_t1", y.g(this.k));
            String strB = ab.b();
            this.b = strB;
            jSONObject.put("t2", strB);
            jSONObject.put("old_t2", y.h(this.k));
            String strC = ab.c();
            this.c = strC;
            jSONObject.put("t3", strC);
            jSONObject.put("old_t3", y.i(this.k));
            String strD = ab.d();
            this.d = strD;
            jSONObject.put("s1", strD);
            jSONObject.put("old_s1", y.j(this.k));
            String strE = ab.e();
            this.e = strE;
            jSONObject.put("s2", strE);
            jSONObject.put("old_s2", y.k(this.k));
            String strF = ab.f();
            this.f = strF;
            jSONObject.put("s3", strF);
            jSONObject.put("old_s3", y.l(this.k));
            String strG = ab.g();
            this.g = strG;
            jSONObject.put("s4", strG);
            jSONObject.put("old_s4", y.m(this.k));
            jSONObject.put("uuid", ab.a(this.k));
            jSONObject.put("android_id", o.g());
            jSONObject.put("hostname", ab.h());
            String strT = o.t(this.k);
            this.h = strT;
            jSONObject.put("gaid", strT);
            jSONObject.put("old_gaid", y.n(this.k));
            String strE2 = o.e(this.k);
            this.i = strE2;
            jSONObject.put("oaid", strE2);
            jSONObject.put("old_oaid", y.b(this.k));
            jSONObject.put("aaid", y.c(this.k));
            jSONObject.put("resetToken", y.f(this.k));
            jSONObject.put("uabc", y.e(this.k));
            this.j = ab.a(x.d(jSONObject.toString().getBytes("utf-8")), x.c("YWDR1a2R2WEd0M3RXdHRocg==").getBytes());
        } catch (Throwable unused) {
        }
        return this.j;
    }
}
