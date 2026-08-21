package com.tkay.core.common.k;

import android.os.PowerManager;
import android.text.TextUtils;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.ag;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.f.ao;
import com.tkay.core.common.f.f;
import com.tkay.core.common.f.g;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.r;
import com.tkay.core.common.f.y;
import com.tkay.core.common.f.z;
import com.xiaomi.mipush.sdk.Constants;
import java.util.Map;
import org.json.JSONArray;

/* JADX INFO: loaded from: classes3.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6215a = 1;
    public static final int b = 2;
    public static final int c = 3;
    public static final int d = 4;
    public static final int e = 5;
    public static final int f = 0;
    public static final int g = 1;
    public static final int h = 1;
    public static final int i = 2;
    public static final int j = 3;
    public static final int k = 1;
    public static final int l = 2;
    public static final int m = 3;
    public static final int n = 4;
    public static final int o = 5;
    public static final int p = 0;

    public static void a(com.tkay.core.common.f.d dVar, AdError adError) {
        try {
            g gVar = new g(dVar.Y(), null);
            gVar.f6155a = "1004630";
            gVar.b = dVar.X();
            gVar.d = dVar.W();
            gVar.l = String.valueOf(dVar.U());
            gVar.g = String.valueOf(dVar.I());
            gVar.k = String.valueOf(dVar.F());
            com.tkay.core.c.d dVarA = com.tkay.core.c.e.a(m.a().f()).a(dVar.W());
            gVar.j = dVarA != null ? dVarA.V() : "";
            if (adError != null) {
                gVar.m = adError.printStackTrace();
                gVar.n = adError.getCode();
            }
            gVar.C = dVar.P();
            gVar.D = dVar.Q();
            a(gVar);
        } catch (Throwable unused) {
        }
    }

    private static void a(String str, String str2, int i2, int i3, int i4, String str3, String str4, int i5, int i6, AdError adError, int i7, double d2, long j2, int i8, int i9, int i10, String str5, String str6) {
        g gVar = new g(str4, String.valueOf(i4));
        gVar.f6155a = "1004631";
        gVar.b = str;
        gVar.d = str2;
        gVar.g = String.valueOf(i2);
        gVar.k = String.valueOf(i3);
        gVar.l = String.valueOf(i8);
        gVar.m = String.valueOf(i4);
        gVar.n = str3;
        gVar.o = String.valueOf(i5);
        gVar.p = String.valueOf(i6);
        gVar.q = adError != null ? adError.getPlatformCode() : "";
        gVar.r = adError != null ? adError.getPlatformMSG() : "";
        gVar.s = String.valueOf(i7);
        gVar.t = String.valueOf(d2);
        if (i6 == 0) {
            gVar.u = String.valueOf(j2);
        }
        gVar.v = String.valueOf(i9);
        gVar.w = String.valueOf(i10);
        com.tkay.core.c.d dVarA = com.tkay.core.c.e.a(m.a().f()).a(str2);
        gVar.j = dVarA != null ? dVarA.V() : "";
        gVar.C = str5;
        gVar.D = str6;
        a(gVar);
    }

    public static void a(com.tkay.core.common.f.d dVar, int i2, AdError adError) {
        try {
            a(dVar.X(), dVar.W(), dVar.I(), dVar.F(), dVar.H(), dVar.x(), dVar.Y(), -1, i2, adError, dVar.v(), dVar.w(), 0L, dVar.U(), dVar.L(), dVar.q, dVar.P(), dVar.Q());
        } catch (Throwable unused) {
        }
    }

    public static void a(com.tkay.core.common.f.d dVar, int i2, AdError adError, long j2) {
        try {
            a(dVar.X(), dVar.W(), dVar.I(), dVar.F(), dVar.H(), dVar.x(), dVar.Y(), dVar.z(), i2, adError, dVar.v(), dVar.w(), j2, dVar.U(), dVar.L(), dVar.q, dVar.P(), dVar.Q());
        } catch (Throwable unused) {
        }
    }

    public static void a(com.tkay.core.common.f.d dVar, int i2, String str, String str2) {
        try {
            g gVar = new g(dVar.Y(), String.valueOf(dVar.H()));
            gVar.f6155a = "1004633";
            gVar.b = dVar.X();
            gVar.d = dVar.W();
            gVar.g = String.valueOf(dVar.I());
            gVar.k = String.valueOf(dVar.F());
            gVar.l = String.valueOf(dVar.U());
            gVar.m = String.valueOf(i2);
            gVar.n = str;
            gVar.q = str2;
            if (TextUtils.equals(str2, dVar.X())) {
                gVar.r = "0";
            } else {
                gVar.r = "1";
            }
            com.tkay.core.c.d dVarA = com.tkay.core.c.e.a(m.a().f()).a(dVar.W());
            gVar.j = dVarA != null ? dVarA.V() : "";
            gVar.C = dVar.P();
            gVar.D = dVar.Q();
            a(gVar);
        } catch (Throwable unused) {
        }
    }

    public static void a(com.tkay.core.common.f.d dVar, boolean z) {
        g gVar = new g(dVar.Y(), String.valueOf(dVar.H()));
        gVar.f6155a = "1004634";
        gVar.b = dVar.X();
        gVar.d = dVar.W();
        gVar.g = String.valueOf(dVar.I());
        gVar.k = String.valueOf(dVar.F());
        gVar.l = String.valueOf(dVar.U());
        gVar.m = String.valueOf(dVar.H());
        gVar.n = dVar.x();
        gVar.o = String.valueOf(dVar.A());
        gVar.p = z ? "1" : "0";
        gVar.q = String.valueOf(dVar.z);
        com.tkay.core.c.d dVarA = com.tkay.core.c.e.a(m.a().f()).a(dVar.W());
        gVar.j = dVarA != null ? dVarA.V() : "";
        gVar.A = dVar.Y();
        gVar.C = dVar.P();
        gVar.D = dVar.Q();
        a(gVar);
    }

    public static void a(final com.tkay.core.common.f.d dVar, final boolean z, final int i2, final int i3, final String str, final int i4, final String str2, final String str3, final String str4, final boolean z2, final String str5) {
        try {
            com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.k.c.1
                @Override // java.lang.Runnable
                public final void run() {
                    g gVar = new g(dVar.Y(), String.valueOf(dVar.H()));
                    gVar.f6155a = "1004632";
                    gVar.b = dVar.X();
                    gVar.d = dVar.W();
                    gVar.g = String.valueOf(dVar.I());
                    gVar.k = String.valueOf(dVar.F());
                    gVar.l = String.valueOf(dVar.U());
                    gVar.m = z ? "1" : "0";
                    gVar.n = String.valueOf(i2);
                    gVar.o = String.valueOf(i3);
                    gVar.p = str;
                    gVar.q = String.valueOf(i4);
                    gVar.r = str2;
                    gVar.s = str3;
                    gVar.t = str4;
                    if (TextUtils.equals(str4, dVar.X())) {
                        gVar.u = "0";
                    } else {
                        gVar.u = "1";
                    }
                    if (z2) {
                        gVar.v = "1";
                    } else {
                        gVar.v = "0";
                    }
                    gVar.w = str5;
                    com.tkay.core.c.d dVarA = com.tkay.core.c.e.a(m.a().f()).a(dVar.W());
                    gVar.j = dVarA != null ? dVarA.V() : "";
                    gVar.A = dVar.Y();
                    gVar.C = dVar.P();
                    gVar.D = dVar.Q();
                    c.a(gVar);
                }
            });
        } catch (Exception unused) {
        }
    }

    public static void a(com.tkay.core.common.f.d dVar, AdError adError, Map<String, Object> map) {
        g gVar = new g(dVar.Y(), String.valueOf(dVar.H()));
        gVar.f6155a = "1004636";
        gVar.b = dVar.X();
        gVar.d = dVar.W();
        gVar.g = String.valueOf(dVar.I());
        gVar.k = String.valueOf(dVar.F());
        gVar.l = String.valueOf(dVar.U());
        gVar.m = String.valueOf(dVar.H());
        gVar.n = dVar.x();
        gVar.o = String.valueOf(dVar.A());
        if (adError != null) {
            gVar.p = adError.getCode();
            gVar.q = adError.getPlatformCode();
            gVar.r = adError.getPlatformMSG();
        }
        com.tkay.core.c.d dVarA = com.tkay.core.c.e.a(m.a().f()).a(dVar.W());
        gVar.j = dVarA != null ? dVarA.V() : "";
        gVar.A = dVar.Y();
        if (map != null) {
            try {
                if (map.containsKey("offer_id")) {
                    gVar.s = map.get("offer_id").toString();
                }
            } catch (Throwable unused) {
            }
        }
        gVar.C = dVar.P();
        gVar.D = dVar.Q();
        a(gVar);
    }

    public static void a(String str, String str2, String str3, String str4, String str5, String str6, String str7) {
        g gVar = new g(null, null);
        gVar.f6155a = "1004616";
        gVar.d = str5;
        gVar.m = str;
        gVar.n = str2;
        gVar.o = str3;
        gVar.p = str4;
        gVar.q = str6;
        gVar.r = str7;
        a(gVar);
    }

    public static void a(String str, String str2, long j2, long j3, long j4) {
        g gVar = new g(null, null);
        gVar.f6155a = "1004635";
        if (!TextUtils.isEmpty(str2)) {
            gVar.d = str2;
        }
        gVar.m = str;
        gVar.n = String.valueOf(j2);
        gVar.o = String.valueOf(j3);
        gVar.p = String.valueOf(j4);
        a(gVar);
    }

    public static void a(String str, String str2, String str3, String str4) {
        g gVar = new g(null, null);
        gVar.f6155a = "1004637";
        gVar.d = str;
        gVar.m = str2;
        gVar.n = str3;
        gVar.o = str4;
        a(gVar);
    }

    public static void a(String str, String str2, String str3, String str4, long j2, String str5, long j3, long j4, int i2, long j5) {
        g gVar = new g(null, null);
        gVar.f6155a = "1004638";
        gVar.d = str;
        gVar.m = str2;
        gVar.n = str3;
        gVar.o = str4;
        gVar.p = String.valueOf(j2);
        gVar.q = str5;
        gVar.r = String.valueOf(j3);
        gVar.s = String.valueOf(j4);
        gVar.t = "1".equals(str4) ? String.valueOf(j5) : null;
        gVar.u = String.valueOf(i2);
        a(gVar);
    }

    public static void a(com.tkay.core.common.f.d dVar) {
        try {
            g gVar = new g(dVar.Y(), String.valueOf(dVar.H()));
            gVar.f6155a = "1004640";
            gVar.b = dVar.X();
            gVar.g = String.valueOf(dVar.I());
            gVar.l = String.valueOf(dVar.U());
            gVar.d = dVar.W();
            gVar.m = String.valueOf(dVar.H());
            gVar.n = dVar.x();
            gVar.o = String.valueOf(dVar.z());
            gVar.p = String.valueOf(dVar.J());
            gVar.q = String.valueOf(dVar.K());
            gVar.C = dVar.P();
            gVar.D = dVar.Q();
            gVar.A = dVar.Y();
            a(gVar);
        } catch (Throwable unused) {
        }
    }

    public static void a(com.tkay.core.common.f.d dVar, String str) {
        try {
            g gVar = new g(dVar.Y(), String.valueOf(dVar.H()));
            gVar.f6155a = "1004639";
            gVar.b = dVar.X();
            gVar.d = dVar.W();
            gVar.l = String.valueOf(dVar.U());
            gVar.g = String.valueOf(dVar.I());
            gVar.m = String.valueOf(dVar.H());
            gVar.n = dVar.x();
            gVar.o = String.valueOf(dVar.z());
            gVar.p = str;
            gVar.A = dVar.Y();
            gVar.C = dVar.P();
            gVar.D = dVar.Q();
            a(gVar);
        } catch (Throwable unused) {
        }
    }

    public static void a(int i2, int i3, int i4, int i5) {
        g gVar = new g(null, String.valueOf(i5));
        gVar.f6155a = "1004641";
        gVar.m = String.valueOf(i2);
        gVar.n = String.valueOf(i3);
        gVar.o = String.valueOf(i4);
        gVar.p = String.valueOf(i5);
        a(gVar);
    }

    public static void a(String str, String str2, String str3, int i2, String str4, long j2, long j3) {
        g gVar = new g(null, null);
        gVar.f6155a = "1004642";
        gVar.b = str;
        gVar.m = str2;
        gVar.n = str3;
        gVar.o = String.valueOf(i2);
        if (i2 == 3 || i2 == 10) {
            gVar.p = str4;
        } else if (i2 == 2) {
            gVar.q = String.valueOf(j2);
            gVar.r = String.valueOf(j3 / 1024.0f);
        }
        a(gVar);
    }

    public static void a(int i2, long j2, long j3, String str) {
        g gVar = new g(null, null);
        gVar.f6155a = "1004644";
        gVar.e = str;
        gVar.m = String.valueOf(i2);
        gVar.n = String.valueOf(j2);
        gVar.o = String.valueOf(j3);
        gVar.p = String.valueOf(j3 - j2);
        a(gVar);
    }

    private static void a(int i2, long j2, long j3, String str, String str2) {
        g gVar = new g(null, null);
        gVar.f6155a = "1004651";
        gVar.e = str;
        gVar.m = String.valueOf(i2);
        gVar.n = String.valueOf(j3 - j2);
        gVar.o = str2;
        a(gVar);
    }

    public static void a(com.tkay.core.common.f.d dVar, boolean z, long j2, long j3, long j4) {
        try {
            g gVar = new g(dVar.Y(), String.valueOf(dVar.H()));
            gVar.f6155a = "1004643";
            gVar.b = dVar.X();
            gVar.d = dVar.W();
            gVar.g = String.valueOf(dVar.I());
            gVar.k = String.valueOf(dVar.F());
            gVar.l = String.valueOf(dVar.U());
            gVar.m = dVar.Y();
            gVar.n = String.valueOf(j2);
            gVar.o = String.valueOf(j3);
            gVar.p = String.valueOf(j4);
            gVar.q = String.valueOf(dVar.H());
            gVar.r = dVar.x();
            gVar.s = String.valueOf(dVar.A());
            gVar.t = String.valueOf(dVar.z);
            gVar.u = z ? "1" : "0";
            com.tkay.core.c.d dVarA = com.tkay.core.c.e.a(m.a().f()).a(dVar.W());
            gVar.j = dVarA != null ? dVarA.V() : "";
            gVar.A = dVar.Y();
            gVar.C = dVar.P();
            gVar.D = dVar.Q();
            a(gVar);
        } catch (Throwable unused) {
        }
    }

    public static void a(com.tkay.core.common.f.d dVar, com.tkay.core.c.d dVar2, String str, String str2) {
        try {
            g gVar = new g(dVar.Y(), String.valueOf(dVar.H()));
            gVar.f6155a = "1004658";
            gVar.b = dVar.X();
            gVar.d = dVar.W();
            gVar.g = String.valueOf(dVar.I());
            gVar.k = String.valueOf(dVar.F());
            gVar.l = String.valueOf(dVar.U());
            gVar.j = dVar2 != null ? dVar2.V() : "";
            gVar.m = String.valueOf(dVar.H());
            gVar.n = dVar.x();
            gVar.o = dVar.l();
            gVar.p = dVar.e();
            gVar.q = dVar.C;
            gVar.r = str;
            gVar.s = str2;
            gVar.C = dVar.P();
            gVar.D = dVar.Q();
            a(gVar);
        } catch (Throwable unused) {
        }
    }

    public static void a(i iVar, h hVar, int i2) {
        try {
            g gVar = new g(String.valueOf(iVar.j), String.valueOf(iVar.f));
            gVar.f6155a = "1004679";
            gVar.b = iVar.d;
            gVar.d = iVar.b;
            if (hVar instanceof f) {
                gVar.m = ((f) hVar).T();
            }
            gVar.n = iVar.c;
            gVar.o = hVar.p();
            gVar.p = String.valueOf(hVar.d());
            gVar.q = hVar.e();
            gVar.r = hVar.f();
            gVar.s = String.valueOf(i2);
            a(gVar);
        } catch (Throwable unused) {
        }
    }

    private static void a(String str, String str2, com.tkay.core.c.d dVar, String str3) {
        g gVar = new g(null, null);
        gVar.f6155a = "1004646";
        gVar.b = str;
        gVar.d = str2;
        gVar.g = String.valueOf(dVar.af());
        gVar.l = String.valueOf(dVar.P());
        gVar.j = dVar.V();
        gVar.t = String.valueOf(str3);
        a(gVar);
    }

    public static void a(String str, String str2, String str3) {
        b(str, str2, str3, "");
    }

    public static void b(String str, String str2, String str3, String str4) {
        g gVar = new g(null, null);
        gVar.f6155a = "1004647";
        gVar.e = str3;
        gVar.m = str2;
        gVar.n = str;
        gVar.o = str4;
        a(gVar);
    }

    public static void a(i iVar, h hVar, String str, String str2, String str3, String str4) {
        if (iVar == null || hVar == null) {
            return;
        }
        g gVar = new g(null, null);
        gVar.f6155a = "1004648";
        gVar.d = iVar.b;
        gVar.m = hVar.p();
        gVar.n = String.valueOf(hVar.d());
        gVar.o = str;
        gVar.p = str2;
        gVar.q = str3;
        gVar.r = str4;
        gVar.b = iVar.d;
        a(gVar);
    }

    public static void a(i iVar, h hVar, String str, String str2, int i2) {
        if (iVar == null || hVar == null) {
            return;
        }
        g gVar = new g(String.valueOf(iVar.j), String.valueOf(iVar.f));
        gVar.f6155a = "1004650";
        gVar.d = iVar.b;
        gVar.m = hVar.p();
        gVar.n = String.valueOf(hVar.d());
        gVar.o = str;
        gVar.p = str2;
        gVar.q = String.valueOf(i2);
        gVar.b = iVar.d;
        gVar.t = String.valueOf(iVar.j);
        a(gVar);
    }

    public static void a(h hVar, i iVar, String str, String str2) {
        if (hVar == null || iVar == null) {
            return;
        }
        g gVar = new g(String.valueOf(iVar.j), String.valueOf(iVar.f));
        gVar.f6155a = "1004652";
        gVar.d = iVar.b;
        gVar.m = String.valueOf(iVar.f);
        gVar.n = iVar.c;
        gVar.b = iVar.d;
        if (hVar instanceof r) {
            gVar.o = "1";
        } else if (hVar instanceof f) {
            gVar.o = "2";
        } else if (hVar instanceof y) {
            gVar.o = "3";
        }
        gVar.p = str;
        if (TextUtils.equals("0", str)) {
            gVar.q = str2;
        }
        gVar.r = hVar.p();
        gVar.s = hVar.q();
        gVar.t = hVar.B();
        gVar.u = hVar.r();
        gVar.v = hVar.s();
        gVar.w = hVar.t();
        gVar.x = hVar.u();
        gVar.y = hVar.x();
        try {
            if (hVar instanceof z) {
                StringBuilder sb = new StringBuilder();
                String strZ = ((z) hVar).Z();
                if (!TextUtils.isEmpty(strZ)) {
                    JSONArray jSONArray = new JSONArray(strZ);
                    int length = jSONArray.length();
                    for (int i2 = 0; i2 < length; i2++) {
                        sb.append(jSONArray.optString(i2));
                        sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                    }
                    if (sb.length() > 1) {
                        sb.deleteCharAt(sb.length() - 1);
                    }
                    gVar.z = sb.toString();
                }
            }
        } catch (Throwable unused) {
        }
        a(gVar);
    }

    public static void a() {
        g gVar = new g(null, null);
        gVar.f6155a = "1004657";
        a(gVar);
    }

    public static void a(com.tkay.core.common.f.d dVar, aj ajVar, double d2, String str) {
        g gVar = new g(String.valueOf(dVar.Y()), String.valueOf(ajVar.c()));
        gVar.f6155a = "1004659";
        gVar.b = dVar.X();
        gVar.d = dVar.W();
        gVar.g = String.valueOf(dVar.I());
        gVar.l = String.valueOf(dVar.U());
        gVar.j = dVar.V();
        gVar.m = String.valueOf(ajVar.c());
        gVar.n = ajVar.t();
        gVar.o = String.valueOf(d2);
        gVar.p = str;
        gVar.C = dVar.P();
        gVar.D = dVar.Q();
        a(gVar);
    }

    public static void a(aj ajVar, ag agVar, long j2, boolean z, boolean z2) {
        g gVar = new g(String.valueOf(agVar.f), String.valueOf(ajVar.c()));
        gVar.f6155a = "1004660";
        com.tkay.core.c.d dVar = agVar.o;
        gVar.b = agVar.d;
        gVar.d = agVar.e;
        String strD = "";
        gVar.g = String.valueOf(dVar != null ? Integer.valueOf(dVar.af()) : "");
        gVar.l = String.valueOf(dVar != null ? Integer.valueOf(dVar.P()) : "");
        gVar.j = dVar != null ? dVar.V() : "";
        gVar.m = String.valueOf(ajVar.c());
        gVar.n = ajVar.t();
        gVar.o = z ? "1" : "2";
        gVar.p = String.valueOf(j2);
        gVar.q = z2 ? "1" : "2";
        if (dVar != null) {
            try {
                strD = dVar.d();
            } catch (Throwable unused) {
            }
        }
        gVar.C = strD;
        try {
            Object obj = agVar.c.g.get(TYAdConst.KEY.CP_PLACEMENT_ID);
            if (obj != null) {
                gVar.D = obj.toString();
            }
        } catch (Throwable unused2) {
        }
        a(gVar);
    }

    public static void a(String str, aj ajVar, boolean z, long j2, ag agVar) {
        com.tkay.core.c.d dVar = agVar != null ? agVar.o : null;
        g gVar = new g(String.valueOf(agVar.f), String.valueOf(ajVar.c()));
        gVar.f6155a = "1004665";
        gVar.d = str;
        String strD = "";
        gVar.j = dVar != null ? dVar.V() : "";
        gVar.m = String.valueOf(ajVar.c());
        gVar.n = ajVar.t();
        gVar.o = String.valueOf(z ? 1 : 2);
        gVar.p = String.valueOf(j2);
        if (dVar != null) {
            try {
                strD = dVar.d();
            } catch (Throwable unused) {
            }
        }
        gVar.C = strD;
        try {
            Object obj = agVar.c.g.get(TYAdConst.KEY.CP_PLACEMENT_ID);
            if (obj != null) {
                gVar.D = obj.toString();
            }
        } catch (Throwable unused2) {
        }
        a(gVar);
    }

    public static void b(String str, String str2, String str3) {
        g gVar = new g(null, null);
        gVar.f6155a = "1004666";
        gVar.m = str;
        gVar.n = str2;
        gVar.o = str3;
        a(gVar);
    }

    public static void a(ao aoVar) {
        if (aoVar == null) {
            return;
        }
        g gVar = new g(null, String.valueOf(aoVar.a()));
        gVar.f6155a = "1004667";
        gVar.m = String.valueOf(aoVar.a());
        gVar.n = aoVar.b();
        gVar.o = aoVar.c();
        gVar.p = aoVar.d();
        gVar.q = aoVar.f();
        gVar.r = aoVar.g();
        gVar.s = String.valueOf(aoVar.h());
        gVar.t = aoVar.i();
        gVar.u = aoVar.m();
        gVar.v = aoVar.n();
        gVar.b = aoVar.e();
        gVar.g = aoVar.j();
        gVar.l = aoVar.k();
        gVar.d = aoVar.l();
        String strL = aoVar.l();
        if (!TextUtils.isEmpty(strL)) {
            com.tkay.core.c.d dVarA = com.tkay.core.c.e.a(m.a().f()).a(strL);
            gVar.j = dVarA != null ? dVarA.V() : "";
        }
        a(gVar);
    }

    public static void a(com.tkay.core.common.f.d dVar, int i2, String str, double d2, String str2, String str3) {
        g gVar = new g(dVar.Y(), String.valueOf(i2));
        gVar.f6155a = "1004668";
        gVar.d = dVar.W();
        gVar.m = String.valueOf(i2);
        gVar.n = str;
        gVar.o = String.valueOf(d2);
        gVar.p = str2;
        gVar.q = str3;
        gVar.j = dVar.V();
        gVar.g = String.valueOf(dVar.I());
        gVar.l = String.valueOf(dVar.U());
        gVar.C = dVar.P();
        gVar.D = dVar.Q();
        a(gVar);
    }

    public static void a(com.tkay.core.common.f.d dVar, String str, String str2) {
        g gVar = new g(dVar.Y(), String.valueOf(dVar.H()));
        gVar.f6155a = "1004669";
        gVar.b = dVar.X();
        gVar.d = dVar.W();
        gVar.m = String.valueOf(dVar.H());
        gVar.n = str;
        gVar.o = str2;
        gVar.j = dVar.V();
        gVar.g = String.valueOf(dVar.I());
        gVar.l = String.valueOf(dVar.U());
        gVar.C = dVar.P();
        gVar.D = dVar.Q();
        a(gVar);
    }

    public static void a(String str, String str2, int i2, String str3, JSONArray jSONArray, int i3, int i4, int i5, String str4, int i6) {
        g gVar = new g(null, null);
        gVar.f6155a = "1004675";
        gVar.b = str2;
        gVar.d = str;
        gVar.m = str3;
        gVar.n = String.valueOf(i2);
        gVar.o = jSONArray != null ? jSONArray.toString() : "";
        gVar.p = String.valueOf(i3);
        gVar.q = String.valueOf(i4);
        gVar.r = String.valueOf(i5);
        gVar.s = str4;
        gVar.t = String.valueOf(i6);
        a(gVar);
    }

    private static void a(final String str, final String str2, final String str3, final String str4, final String str5, final int i2, final boolean z, final String str6, final String str7) {
        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.k.c.2
            @Override // java.lang.Runnable
            public final void run() {
                g gVar = new g(str4, str5);
                gVar.f6155a = "1004680";
                gVar.b = str;
                gVar.d = str2;
                gVar.m = str3;
                gVar.n = String.valueOf(i2);
                gVar.o = z ? "1" : "0";
                boolean zIsScreenOn = true;
                try {
                    zIsScreenOn = ((PowerManager) m.a().f().getSystemService("power")).isScreenOn();
                } catch (Throwable unused) {
                }
                gVar.p = zIsScreenOn ? "1" : "0";
                gVar.q = com.tkay.core.common.l.h.a(m.a().f()) ? "1" : "0";
                gVar.r = str7;
                gVar.s = str6;
                c.a(gVar);
            }
        });
    }

    public static void c(String str, String str2, String str3, String str4) {
        g gVar = new g("", "");
        if (TextUtils.isEmpty(gVar.f6155a)) {
            gVar.f6155a = "1004685";
        }
        gVar.c = m.a().o();
        if (!TextUtils.isEmpty(str)) {
            gVar.m = str;
        }
        if (!TextUtils.isEmpty(str2)) {
            gVar.n = str2;
        }
        if (!TextUtils.isEmpty(str3)) {
            gVar.o = str3;
        }
        if (!TextUtils.isEmpty(str4)) {
            gVar.p = str4;
        }
        a(gVar);
    }

    protected static void a(final g gVar) {
        if (gVar == null) {
            return;
        }
        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.k.c.3
            /* JADX WARN: Removed duplicated region for block: B:27:0x00b3  */
            /* JADX WARN: Removed duplicated region for block: B:35:0x00d4  */
            /* JADX WARN: Removed duplicated region for block: B:43:0x00ee  */
            /* JADX WARN: Removed duplicated region for block: B:53:0x0127  */
            /* JADX WARN: Removed duplicated region for block: B:58:0x0131  */
            @Override // java.lang.Runnable
            /*
                Code decompiled incorrectly, please refer to instructions dump.
                To view partially-correct add '--show-bad-code' argument
            */
            public final void run() {
                /*
                    Method dump skipped, instruction units count: 392
                    To view this dump add '--comments-level debug' option
                */
                throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.k.c.AnonymousClass3.run():void");
            }
        });
    }

    private static boolean a(g gVar, com.tkay.core.c.a aVar) {
        Map<String, String> mapE;
        if (TextUtils.isEmpty(gVar.f6155a) || TextUtils.isEmpty(gVar.B) || TextUtils.isEmpty(gVar.A) || (mapE = aVar.e(gVar.f6155a)) == null) {
            return false;
        }
        if (mapE.containsKey("0")) {
            String str = mapE.get("0");
            if (TextUtils.isEmpty(str) || !str.contains(gVar.A)) {
                return false;
            }
        } else {
            if (!mapE.containsKey(gVar.B)) {
                return false;
            }
            String str2 = mapE.get(gVar.B);
            if (TextUtils.isEmpty(str2) || !str2.contains(gVar.A)) {
                return false;
            }
        }
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static boolean b(g gVar, String str) {
        String str2 = gVar.B;
        if (!TextUtils.isEmpty(str2)) {
            try {
                JSONArray jSONArray = new JSONArray(str);
                int length = jSONArray.length();
                for (int i2 = 0; i2 < length; i2++) {
                    if (TextUtils.equals(str2, jSONArray.optString(i2))) {
                        return true;
                    }
                }
            } catch (Throwable unused) {
            }
        }
        return false;
    }

    public static void a(final String str) {
        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.k.c.4
            @Override // java.lang.Runnable
            public final void run() {
                if (TextUtils.isEmpty(str)) {
                    return;
                }
                g gVarA = g.a(str);
                if (TextUtils.isEmpty(gVarA.f6155a)) {
                    return;
                }
                c.a(gVarA);
            }
        });
    }

    public static void b(g gVar) {
        a(gVar);
    }

    private static void c(g gVar) {
        com.tkay.core.c.d dVarB = com.tkay.core.c.e.a(m.a().f()).b(gVar.d);
        if (dVarB != null) {
            gVar.E = dVarB.ax();
        }
    }

    private static /* synthetic */ boolean b(g gVar, com.tkay.core.c.a aVar) {
        Map<String, String> mapE;
        if (TextUtils.isEmpty(gVar.f6155a) || TextUtils.isEmpty(gVar.B) || TextUtils.isEmpty(gVar.A) || (mapE = aVar.e(gVar.f6155a)) == null) {
            return false;
        }
        if (mapE.containsKey("0")) {
            String str = mapE.get("0");
            if (TextUtils.isEmpty(str) || !str.contains(gVar.A)) {
                return false;
            }
        } else {
            if (!mapE.containsKey(gVar.B)) {
                return false;
            }
            String str2 = mapE.get(gVar.B);
            if (TextUtils.isEmpty(str2) || !str2.contains(gVar.A)) {
                return false;
            }
        }
        return true;
    }
}
