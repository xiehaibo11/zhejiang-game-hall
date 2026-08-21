package com.loc;

import android.content.Context;
import android.os.Build;
import com.qihoo360.i.Factory;
import org.json.JSONObject;

public final class aa extends af {
    public String a;
    public String b;
    public String c;
    public String d;
    public String e;
    public String f;
    public String g;
    public String h;
    public String i;
    protected byte[] j;

    public aa(Context context) {
        super(context);
    }

    @Override
    public final byte[] d() {
        byte[] bArr = this.j;
        if (bArr != null) {
            return bArr;
        }
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("method", Factory.PLUGIN_ENTRY_EXPORT_METHOD_NAME);
            jSONObject.put("package_name", l.c(this.k));
            jSONObject.put("model", Build.MODEL);
            jSONObject.put(com.tkay.expressad.foundation.g.a.bd, Build.VERSION.RELEASE);
            jSONObject.put("os_type", "Android");
            jSONObject.put("sdk_version", "4.3.6");
            String strA = ab.a();
            this.a = strA;
            jSONObject.put("t1", strA);
            String strB = ab.b();
            this.b = strB;
            jSONObject.put("t2", strB);
            String strC = ab.c();
            this.c = strC;
            jSONObject.put("t3", strC);
            String strD = ab.d();
            this.d = strD;
            jSONObject.put("s1", strD);
            String strE = ab.e();
            this.e = strE;
            jSONObject.put("s2", strE);
            String strF = ab.f();
            this.f = strF;
            jSONObject.put("s3", strF);
            String strG = ab.g();
            this.g = strG;
            jSONObject.put("s4", strG);
            jSONObject.put("uuid", ab.a(this.k));
            jSONObject.put("android_id", o.g());
            jSONObject.put("hostname", ab.h());
            String strT = o.t(this.k);
            this.h = strT;
            jSONObject.put("gaid", strT);
            String strE2 = o.e(this.k);
            this.i = strE2;
            jSONObject.put("oaid", strE2);
            this.j = ab.a(x.d(jSONObject.toString().getBytes("utf-8")), x.c("YWDR1a2R2WEd0M3RXdHRocg==").getBytes());
        } catch (Throwable unused) {
        }
        return this.j;
    }
}
