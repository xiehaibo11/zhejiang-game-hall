package com.loc;

import android.content.Context;
import android.os.SystemClock;
import android.text.TextUtils;
import org.json.JSONObject;

/* JADX INFO: compiled from: AAIDManager.java */
/* JADX INFO: loaded from: classes2.dex */
public class ac {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static ac f2826a;
    private static boolean b;
    private static boolean c;
    private Context d;

    private ac(Context context) {
        this.d = context;
    }

    public static ac a(Context context) {
        if (f2826a == null) {
            synchronized (ac.class) {
                if (f2826a == null) {
                    f2826a = new ac(context);
                }
            }
        }
        return f2826a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b() {
        try {
            if (b) {
                b = false;
                return;
            }
            b = true;
            aa aaVar = new aa(this.d);
            new bo();
            bu buVarA = bo.a(aaVar);
            if (buVarA != null) {
                JSONObject jSONObject = new JSONObject(x.a(ab.a(buVarA.f2891a, x.c("YWDR1a2R2WEd0M3RXdHRocg==").getBytes())));
                if (jSONObject.optBoolean("suc")) {
                    y.f(this.d, aaVar.f2825a);
                    y.g(this.d, aaVar.b);
                    y.h(this.d, aaVar.c);
                    y.i(this.d, aaVar.d);
                    y.j(this.d, aaVar.e);
                    y.k(this.d, aaVar.f);
                    y.l(this.d, aaVar.g);
                    y.b(this.d, aaVar.i);
                    y.m(this.d, aaVar.h);
                    y.a(this.d, SystemClock.elapsedRealtime());
                    String strOptString = jSONObject.optString("aaid", "");
                    String strOptString2 = jSONObject.optString("resetToken", "");
                    String strOptString3 = jSONObject.optString("uabc", "");
                    if (!TextUtils.isEmpty(strOptString)) {
                        y.c(this.d, strOptString);
                    }
                    if (!TextUtils.isEmpty(strOptString2)) {
                        y.e(this.d, strOptString2);
                    }
                    if (!TextUtils.isEmpty(strOptString3)) {
                        y.d(this.d, strOptString3);
                    }
                }
            }
            b = false;
        } catch (Throwable unused) {
            b = false;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c() {
        try {
            if (c) {
                c = false;
                return;
            }
            c = true;
            ad adVar = new ad(this.d);
            new bo();
            bu buVarA = bo.a(adVar);
            if (buVarA != null) {
                JSONObject jSONObject = new JSONObject(x.a(ab.a(buVarA.f2891a, x.c("YWDR1a2R2WEd0M3RXdHRocg==").getBytes())));
                if (jSONObject.optBoolean("suc")) {
                    y.f(this.d, adVar.f2829a);
                    y.g(this.d, adVar.b);
                    y.h(this.d, adVar.c);
                    y.i(this.d, adVar.d);
                    y.j(this.d, adVar.e);
                    y.k(this.d, adVar.f);
                    y.l(this.d, adVar.g);
                    y.b(this.d, adVar.i);
                    y.m(this.d, adVar.h);
                    y.a(this.d, SystemClock.elapsedRealtime());
                    String strOptString = jSONObject.optString("aaid", "");
                    String strOptString2 = jSONObject.optString("resetToken", "");
                    String strOptString3 = jSONObject.optString("uabc", "");
                    if (!TextUtils.isEmpty(strOptString)) {
                        y.c(this.d, strOptString);
                    }
                    if (!TextUtils.isEmpty(strOptString2)) {
                        y.e(this.d, strOptString2);
                    }
                    if (!TextUtils.isEmpty(strOptString3)) {
                        y.d(this.d, strOptString3);
                    }
                }
            }
            c = false;
        } catch (Throwable unused) {
            c = false;
        }
    }

    public final String a() {
        cr crVarA;
        cs csVar;
        String strC = "";
        try {
            if (z.d) {
                strC = y.c(this.d);
                long jD = y.d(this.d);
                long jElapsedRealtime = SystemClock.elapsedRealtime();
                if (TextUtils.isEmpty(strC)) {
                    crVarA = cr.a();
                    csVar = new cs() { // from class: com.loc.ac.1
                        @Override // com.loc.cs
                        public final void a() {
                            ac.this.b();
                        }
                    };
                } else if (jElapsedRealtime - jD > z.b) {
                    crVarA = cr.a();
                    csVar = new cs() { // from class: com.loc.ac.2
                        @Override // com.loc.cs
                        public final void a() {
                            ac.this.c();
                        }
                    };
                }
                crVarA.b(csVar);
            }
        } catch (Throwable unused) {
        }
        return strC;
    }
}
