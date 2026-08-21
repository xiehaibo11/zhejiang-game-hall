package com.kuaishou.weapon.p0;

import android.content.Context;
import android.os.Build;
import android.os.SystemClock;
import android.provider.Settings;
import android.text.TextUtils;
import com.kuaishou.weapon.p0.jni.A;
import com.kuaishou.weapon.p0.jni.Engine;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class cm {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f2737a;
    private int b;

    public cm(Context context, int i) {
        this.f2737a = context;
        this.b = i;
    }

    public String a(String str) {
        JSONObject jSONObjectA;
        try {
            JSONObject jSONObjectA2 = new cl(str, cj.j).a(this.f2737a);
            if (jSONObjectA2 == null || (jSONObjectA = a()) == null) {
                return null;
            }
            jSONObjectA2.put("module_section", jSONObjectA);
            return jSONObjectA2.toString();
        } catch (Throwable unused) {
            return null;
        }
    }

    public JSONObject a() {
        long j;
        h hVar;
        boolean z;
        boolean z2;
        String str;
        String str2;
        cm cmVar;
        try {
            long jCurrentTimeMillis = System.currentTimeMillis();
            JSONObject jSONObject = new JSONObject();
            h hVarA = h.a(this.f2737a, "re_po_rt");
            boolean zE = hVarA.e("a1_p_s_p_s");
            boolean zE2 = hVarA.e("a1_p_s_p_s_c_b");
            if (hVarA.b(df.aI, 1) == 1 && (zE || zE2)) {
                String strA = bg.a(this.f2737a);
                if (!TextUtils.isEmpty(strA) && !strA.startsWith("RISK")) {
                    jSONObject.put("01001", strA);
                }
                String strC = bg.c(this.f2737a);
                if (!TextUtils.isEmpty(strC) && !strC.startsWith("RISK")) {
                    jSONObject.put("01003", strC);
                }
                String strB = bg.b(this.f2737a, 0);
                if (!TextUtils.isEmpty(strB) && !strB.startsWith("RISK")) {
                    jSONObject.put("01019", strB);
                }
                String strB2 = bg.b(this.f2737a, 1);
                if (!TextUtils.isEmpty(strB2) && !strB2.startsWith("RISK")) {
                    jSONObject.put("01004", strB2);
                }
                String strD = bg.d(this.f2737a);
                if (!TextUtils.isEmpty(strD) && !strD.startsWith("RISK")) {
                    jSONObject.put("01007", strD);
                }
            }
            if (hVarA.b(df.aJ, 0) == 1 && (zE || zE2)) {
                bf bfVar = new bf();
                if (hVarA.b(df.aW, 1) == 1) {
                    jSONObject.put("10020", bfVar.f(this.f2737a));
                }
            }
            if (hVarA.b(df.aK, 1) == 1 && (zE || zE2)) {
                jSONObject.put("01011", bg.e(this.f2737a));
            }
            if (hVarA.b(df.aL, 1) == 1 && (zE || zE2)) {
                String strP = bg.p(this.f2737a);
                if (!TextUtils.isEmpty(strP) && !strP.startsWith("RISK")) {
                    jSONObject.put("01016", strP);
                }
            }
            if (hVarA.b(df.az, 1) == 1) {
                if (zE || zE2) {
                    String strF = bg.f(this.f2737a);
                    if (!TextUtils.isEmpty(strF) && !strF.startsWith("RISK")) {
                        jSONObject.put("01013", strF);
                    }
                    jSONObject.put("02042", bg.v(this.f2737a));
                }
                jSONObject.put("02054", bg.z(this.f2737a));
                j = jCurrentTimeMillis;
                str = "RISK";
                z2 = zE2;
                z = zE;
                try {
                    if (Engine.loadSuccess) {
                        try {
                            jSONObject.put("02019", bk.b(this.f2737a));
                            jSONObject.put("02021", bk.d(this.f2737a));
                            jSONObject.put("02022", bk.c(this.f2737a));
                            jSONObject.put("02030", bk.f(this.f2737a));
                            cd cdVar = new cd(this.f2737a);
                            jSONObject.put("01014", cdVar.a("01014") != null ? cdVar.a("01014") : "");
                            jSONObject.put("02001", cdVar.a("02001") != null ? cdVar.a("02001") : bk.a());
                            jSONObject.put("02002", cdVar.a("02002") != null ? cdVar.a("02002") : bk.b());
                            jSONObject.put("02003", cdVar.a("02003") != null ? cdVar.a("02003") : bk.c());
                            jSONObject.put("02004", cdVar.a("02004") != null ? cdVar.a("02004") : bk.d());
                            jSONObject.put("02005", cdVar.a("02005") != null ? cdVar.a("02005") : bk.e());
                            jSONObject.put("02006", cdVar.a("02006") != null ? cdVar.a("02006") : bk.f());
                            jSONObject.put("02007", cdVar.a("02007") != null ? cdVar.a("02007") : bk.g());
                            jSONObject.put("02008", cdVar.a("02008") != null ? cdVar.a("02008") : bk.h());
                            jSONObject.put("02009", cdVar.a("02009") != null ? cdVar.a("02009") : bk.i());
                            jSONObject.put("02010", cdVar.a("02010") != null ? cdVar.a("02010") : bk.j());
                            jSONObject.put("02011", cdVar.a("02011") != null ? cdVar.a("02011") : bk.k());
                            jSONObject.put("02012", cdVar.a("02012") != null ? cdVar.a("02012") : bk.l());
                            jSONObject.put("02013", cdVar.a("02013") != null ? cdVar.a("02013") : bk.m());
                            jSONObject.put("02014", cdVar.a("02014") != null ? cdVar.a("02014") : bk.n());
                            jSONObject.put("02015", cdVar.a("02015") != null ? cdVar.a("02015") : bk.p());
                            jSONObject.put("02016", cdVar.a("02016") != null ? cdVar.a("02016") : bk.q());
                            jSONObject.put("02017", cdVar.a("02017") != null ? cdVar.a("02017") : Integer.valueOf(bk.r()));
                            jSONObject.put("02018", cdVar.a("02018") != null ? cdVar.a("02018") : bk.s());
                            jSONObject.put("02020", cdVar.a("02020") != null ? cdVar.a("02020") : bk.u());
                            jSONObject.put("02023", cdVar.a("02023") != null ? cdVar.a("02023") : "");
                            jSONObject.put("02031", cdVar.a("02031") != null ? cdVar.a("02031") : bk.y());
                            jSONObject.put("02032", cdVar.a("02032") != null ? cdVar.a("02032") : bk.o());
                            jSONObject.put("02033", cdVar.a("02033") != null ? cdVar.a("02033") : bk.x());
                            jSONObject.put("02034", cdVar.a("02034") != null ? cdVar.a("02034") : bk.z());
                            jSONObject.put("02035", cdVar.a("02035") != null ? cdVar.a("02035") : bk.A());
                            jSONObject.put("02036", cdVar.a("02036") != null ? cdVar.a("02036") : "");
                            jSONObject.put("02037", cdVar.a("02037") != null ? cdVar.a("02037") : bk.w());
                            jSONObject.put("02038", cdVar.a("02038") != null ? cdVar.a("02038") : bk.v());
                            jSONObject.put("02045", cdVar.a("02045") != null ? cdVar.a("02045") : bk.B());
                        } catch (Exception unused) {
                        }
                        cmVar = this;
                    } else {
                        jSONObject.put("02001", bk.a());
                        jSONObject.put("02002", bk.b());
                        jSONObject.put("02003", bk.c());
                        jSONObject.put("02004", bk.d());
                        jSONObject.put("02005", bk.e());
                        jSONObject.put("02006", bk.f());
                        jSONObject.put("02007", bk.g());
                        jSONObject.put("02008", bk.h());
                        jSONObject.put("02009", bk.i());
                        jSONObject.put("02010", bk.j());
                        jSONObject.put("02011", bk.k());
                        jSONObject.put("02012", bk.l());
                        jSONObject.put("02013", bk.m());
                        jSONObject.put("02014", bk.n());
                        jSONObject.put("02015", bk.p());
                        jSONObject.put("02016", bk.q());
                        jSONObject.put("02017", bk.r());
                        jSONObject.put("02018", bk.s());
                        cmVar = this;
                        try {
                            jSONObject.put("02019", bk.b(cmVar.f2737a));
                            jSONObject.put("02020", bk.u());
                            jSONObject.put("02021", bk.d(cmVar.f2737a));
                            jSONObject.put("02022", bk.c(cmVar.f2737a));
                            jSONObject.put("02030", bk.f(cmVar.f2737a));
                            jSONObject.put("02031", bk.y());
                            jSONObject.put("02032", bk.o());
                            jSONObject.put("02033", bk.x());
                            jSONObject.put("02034", bk.z());
                            jSONObject.put("02035", bk.A());
                            jSONObject.put("02037", bk.w());
                            jSONObject.put("02038", bk.v());
                            jSONObject.put("02045", bk.B());
                        } catch (Throwable unused2) {
                            return null;
                        }
                    }
                    str2 = "";
                    jSONObject.put("02067", cmVar.f2737a.getApplicationContext().getPackageResourcePath().replace("/data/app/", str2).replace("/base.apk", str2));
                    jSONObject.put("02039", bg.h());
                    jSONObject.put("02040", bg.i());
                    jSONObject.put("02041", bg.u(cmVar.f2737a));
                    jSONObject.put("02044", bk.t());
                    jSONObject.put("02046", bk.C());
                    String strA2 = bg.a("persist.service.adb.enable");
                    if (!TextUtils.isEmpty(strA2)) {
                        jSONObject.put("03058", strA2);
                    }
                    String strA3 = bg.a("sys.resettype");
                    if (!TextUtils.isEmpty(strA3)) {
                        jSONObject.put("03057", strA3);
                    }
                    String strA4 = bg.a("ro.boot.bootreason");
                    if (!TextUtils.isEmpty(strA4)) {
                        jSONObject.put("03056", strA4);
                    }
                    String strA5 = bg.a("ro.runtime.firstboot");
                    if (!TextUtils.isEmpty(strA5)) {
                        jSONObject.put("03055", strA5);
                    }
                    String strA6 = bg.a("init.svc.atcmdserver");
                    if (!TextUtils.isEmpty(strA6)) {
                        jSONObject.put("03054", strA6);
                    }
                    String strA7 = bg.a("ro.build.date.utc");
                    if (!TextUtils.isEmpty(strA7)) {
                        jSONObject.put("03061", strA7);
                    }
                    String strA8 = bg.a("ro.bootimage.build.date.utc");
                    if (!TextUtils.isEmpty(strA8)) {
                        jSONObject.put("03062", strA8);
                    }
                    String strA9 = bg.a("ro.build.date.YmdHM");
                    if (!TextUtils.isEmpty(strA9)) {
                        jSONObject.put("03063", strA9);
                    }
                    String strA10 = bg.a("dhcp.ipv6.wlan0.dns1");
                    if (!TextUtils.isEmpty(strA10)) {
                        jSONObject.put("03067", strA10);
                    }
                    String strA11 = bg.a("dhcp.ipv6.wlan0.dns2");
                    if (!TextUtils.isEmpty(strA11)) {
                        jSONObject.put("03068", strA11);
                    }
                    String strA12 = bg.a("dhcp.wlan0.dns1");
                    if (!TextUtils.isEmpty(strA12)) {
                        jSONObject.put("03069", strA12);
                    }
                    String strA13 = bg.a("dhcp.wlan0.dns2");
                    if (!TextUtils.isEmpty(strA13)) {
                        jSONObject.put("03070", strA13);
                    }
                    String strA14 = bg.a("net.change");
                    if (!TextUtils.isEmpty(strA14)) {
                        jSONObject.put("03071", strA14);
                    }
                    String strA15 = bg.a("net.dns1");
                    if (!TextUtils.isEmpty(strA15)) {
                        jSONObject.put("03072", strA15);
                    }
                    String strA16 = bg.a("net.dns2");
                    if (!TextUtils.isEmpty(strA16)) {
                        jSONObject.put("03073", strA16);
                    }
                    hVar = hVarA;
                    long jA = hVar.a(df.d, -1L);
                    if (jA != -1) {
                        jSONObject.put("03074", jA + System.currentTimeMillis());
                    }
                    try {
                        jSONObject.put("03064", Settings.System.getInt(cmVar.f2737a.getContentResolver(), "screen_brightness_mode"));
                        jSONObject.put("03065", Settings.System.getInt(cmVar.f2737a.getContentResolver(), "accelerometer_rotation"));
                    } catch (Throwable unused3) {
                    }
                    jSONObject.put("03081", bk.L());
                    jSONObject.put("03053", bg.A(cmVar.f2737a));
                    jSONObject.put("03052", bk.i(cmVar.f2737a));
                    jSONObject.put("03050", bk.h(cmVar.f2737a));
                    jSONObject.put("03049", bk.g(cmVar.f2737a));
                    jSONObject.put("02027", bk.H());
                    jSONObject.put("02028", bk.D());
                    jSONObject.put("02029", bk.E());
                    jSONObject.put("02057", bk.F());
                    jSONObject.put("02058", bk.G());
                } catch (Throwable unused4) {
                    return null;
                }
            } else {
                j = jCurrentTimeMillis;
                hVar = hVarA;
                z = zE;
                z2 = zE2;
                str = "RISK";
                str2 = "";
                cmVar = this;
            }
            if (hVar.b(df.aA, 1) == 1) {
                jSONObject.put("03001", bn.a());
                jSONObject.put("03002", bn.b());
                jSONObject.put("03001", bn.a());
                jSONObject.put("03043", SystemClock.elapsedRealtime());
                jSONObject.put("03044", SystemClock.uptimeMillis());
                jSONObject.put("03045", System.currentTimeMillis() - SystemClock.elapsedRealtime());
                bx bxVar = new bx(cmVar.f2737a);
                if (Engine.loadSuccess) {
                    jSONObject.put("03004", bxVar.a("03004") != null ? bxVar.a("03004") : str2);
                    jSONObject.put("03036", bxVar.b("03036") != null ? bxVar.b("03036") : str2);
                    jSONObject.put("03039", bxVar.a("03039") != null ? bxVar.a("03039") : str2);
                    jSONObject.put("03040", bxVar.a("03040") != null ? bxVar.a("03040") : str2);
                    jSONObject.put("03041", bxVar.a("03041") != null ? bxVar.a("03041") : str2);
                    jSONObject.put("03042", bxVar.a("03042") != null ? bxVar.a("03042") : str2);
                    jSONObject.put("03079", bxVar.a("03079") != null ? bxVar.a("03079") : null);
                    jSONObject.put("03080", bxVar.a("03080") != null ? bxVar.a("03080") : null);
                }
                jSONObject.put("03007", bu.a(cmVar.f2737a));
                jSONObject.put("03008", bu.c(cmVar.f2737a));
                jSONObject.put("03011", am.b(cmVar.f2737a));
                jSONObject.put("03012", am.b());
                jSONObject.put("03014", bg.g(cmVar.f2737a));
                jSONObject.put("03034", bg.h(cmVar.f2737a));
                jSONObject.put("03020", bu.b(cmVar.f2737a));
                jSONObject.put("03037", bk.I());
                jSONObject.put("03038", bk.J());
                jSONObject.put("03077", bk.K());
                try {
                    bf bfVar2 = new bf();
                    jSONObject.put("03006", bfVar2.a(cmVar.f2737a));
                    jSONObject.put("03010", bfVar2.b(cmVar.f2737a));
                    jSONObject.put("03033", bfVar2.c(cmVar.f2737a));
                    jSONObject.put("03013", bfVar2.a());
                    jSONObject.put("03021", bfVar2.e(cmVar.f2737a));
                    jSONObject.put("03030", bf.d(cmVar.f2737a));
                    jSONObject.put("10031", bfVar2.b());
                } catch (Exception unused5) {
                }
            }
            if (hVar.b(df.aO, 1) == 1) {
                jSONObject.put("03019", bg.k(cmVar.f2737a));
                String strL = bg.l(cmVar.f2737a);
                if (!TextUtils.isEmpty(strL)) {
                    jSONObject.put("03046", strL);
                }
                String strM = bg.m(cmVar.f2737a);
                if (!TextUtils.isEmpty(strM)) {
                    jSONObject.put("03047", strM);
                }
                jSONObject.put("03018", bg.i(cmVar.f2737a));
            }
            if (hVar.b(df.aP, 1) == 1) {
                jSONObject.put("02059", bl.a(cmVar.f2737a));
                jSONObject.put("02060", bl.a());
                jSONObject.put("02061", bl.b());
                jSONObject.put("02062", bl.c());
                if (Engine.loadSuccess) {
                    bz bzVar = new bz(cmVar.f2737a);
                    jSONObject.put("08001", bzVar.a("08001") != null ? bzVar.a("08001") : str2);
                }
                JSONObject jSONObjectD = bl.d();
                if (jSONObjectD != null && jSONObjectD.length() > 0) {
                    jSONObject.put("10050", jSONObjectD);
                }
            }
            if (hVar.b(df.aN, 1) == 1 && (z || z2)) {
                jSONObject.put("03029", bg.j(cmVar.f2737a));
            }
            if (hVar.b(df.aB, 1) == 1) {
                if (Engine.loadSuccess) {
                    by byVar = new by(cmVar.f2737a);
                    jSONObject.put("04001", byVar.a("04001") != null ? byVar.a("04001") : str2);
                    jSONObject.put("04002", byVar.a("04002") != null ? byVar.a("04002") : str2);
                    jSONObject.put("04003", byVar.a("04003") != null ? byVar.a("04003") : str2);
                    jSONObject.put("04004", byVar.a("04004") != null ? byVar.a("04004") : str2);
                } else {
                    try {
                        bi biVarB = bj.b();
                        jSONObject.put("04001", bj.a());
                        jSONObject.put("04002", biVarB.b());
                        jSONObject.put("04003", biVarB.c());
                        jSONObject.put("04004", biVarB.a());
                    } catch (Exception unused6) {
                    }
                }
            }
            if (hVar.b(df.aE, 0) == 1 && (z || z2)) {
                JSONArray jSONArrayE = bg.e();
                if (jSONArrayE != null) {
                    jSONObject.put("06014", jSONArrayE);
                }
                if (Engine.loadSuccess) {
                    ce ceVar = new ce(cmVar.f2737a);
                    jSONObject.put("06015", ceVar.b("06015") != null ? ceVar.b("06015") : str2);
                }
            }
            if (z || z2) {
                String strG = bg.g();
                if ((TextUtils.isEmpty(strG) || strG.startsWith(str)) && strG == null) {
                    jSONObject.put("07005", str2);
                } else {
                    jSONObject.put("07005", strG);
                }
            }
            if (hVar.b(df.aC, 0) == 1 && (z || z2)) {
                if (Engine.loadSuccess) {
                    jSONObject.put("07007", new cb(cmVar.f2737a).a("07007"));
                }
                JSONArray jSONArrayA = bq.a(cmVar.f2737a);
                if (jSONArrayA != null && jSONArrayA.length() > 0) {
                    jSONObject.put("03035", jSONArrayA);
                }
            }
            if (z || z2) {
                try {
                    double dA = bg.a();
                    if (dA > 0.0d) {
                        StringBuilder sb = new StringBuilder();
                        sb.append(dA);
                        jSONObject.put("09002", sb.toString());
                    }
                    double dB = bg.b();
                    if (dB > 0.0d) {
                        StringBuilder sb2 = new StringBuilder();
                        sb2.append(dB);
                        jSONObject.put("09003", sb2.toString());
                    }
                    jSONObject.put("09001", bg.c());
                } catch (Exception unused7) {
                }
            }
            if (hVar.b(df.aG, 1) == 1 && (z || z2)) {
                jSONObject.put("10002", new w(cmVar.f2737a).a(1));
            }
            if (hVar.b(df.aD, 1) == 1 && Engine.loadSuccess) {
                String strA17 = new cc(cmVar.f2737a).a("05001");
                try {
                    if (!TextUtils.isEmpty(strA17) && strA17.length() > 10) {
                        jSONObject.put("05001", new JSONArray(strA17));
                    }
                } catch (Exception unused8) {
                }
            }
            if (Engine.loadSuccess) {
                ca caVar = new ca(cmVar.f2737a);
                jSONObject.put("13001", caVar.a("13001") != null ? caVar.a("13001") : str2);
            }
            jSONObject.put("11000", Engine.loadSuccess ? 1 : 0);
            jSONObject.put("11002", Engine.soVersion);
            jSONObject.put("11003", bh.v);
            jSONObject.put("11004", Engine.loadSoCount);
            jSONObject.put("11006", z ? 1 : 0);
            jSONObject.put("11029", z2 ? 1 : 0);
            jSONObject.put("11008", hVar.b(df.g, bp.e));
            jSONObject.put("11009", br.a(cmVar.f2737a.getApplicationContext()));
            try {
                String strY = bg.y(cmVar.f2737a);
                if (!TextUtils.isEmpty(strY)) {
                    jSONObject.put("01026", strY);
                }
                if (hVar.b(df.aF, 1) == 1) {
                    String strFp = com.kwad.sdk.f.b.FA().Fp();
                    if (!TextUtils.isEmpty(strFp)) {
                        jSONObject.put("11102", strFp);
                    }
                    jSONObject.put("11104", com.kwad.sdk.f.b.FA().Fw());
                    jSONObject.put("11105", com.kwad.sdk.f.b.FA().getDeviceId());
                    jSONObject.put("11106", com.kwad.sdk.f.b.FA().getIccId());
                    jSONObject.put("11107", com.kwad.sdk.f.b.FA().Fo());
                    jSONObject.put("11108", com.kwad.sdk.f.b.FA().Fr());
                    jSONObject.put("11109", com.kwad.sdk.f.b.FA().Fs());
                    jSONObject.put("11110", com.kwad.sdk.f.b.FA().Ft());
                    jSONObject.put("11111", com.kwad.sdk.f.b.FA().getIp());
                    jSONObject.put("11112", com.kwad.sdk.f.b.FA().getLocation());
                    jSONObject.put("11113", com.kwad.sdk.f.b.FA().getOaid());
                    jSONObject.put("11114", com.kwad.sdk.f.b.FA().Fq());
                    jSONObject.put("11115", com.kwad.sdk.f.b.FA().Fv());
                    jSONObject.put("11116", com.kwad.sdk.f.b.FA().Fu());
                    jSONObject.put("11202", bg.b(com.kwad.sdk.f.b.FA().Fp()));
                    jSONObject.put("11203", bg.b(com.kwad.sdk.f.b.FA().Fy()));
                    jSONObject.put("11204", bg.b(com.kwad.sdk.f.b.FA().Fw()));
                    jSONObject.put("11205", bg.b(com.kwad.sdk.f.b.FA().getDeviceId()));
                    jSONObject.put("11206", bg.b(com.kwad.sdk.f.b.FA().getIccId()));
                    jSONObject.put("11207", bg.b(com.kwad.sdk.f.b.FA().Fo()));
                    jSONObject.put("11208", bg.b(com.kwad.sdk.f.b.FA().Fr()));
                    jSONObject.put("11209", bg.b(com.kwad.sdk.f.b.FA().Fs()));
                    jSONObject.put("11210", bg.b(com.kwad.sdk.f.b.FA().Ft()));
                    jSONObject.put("11211", bg.b(com.kwad.sdk.f.b.FA().getIp()));
                    jSONObject.put("11212", bg.b(com.kwad.sdk.f.b.FA().getLocation()));
                    jSONObject.put("11213", bg.b(com.kwad.sdk.f.b.FA().getOaid()));
                    jSONObject.put("11214", bg.b(com.kwad.sdk.f.b.FA().Fq()));
                    jSONObject.put("11215", bg.b(com.kwad.sdk.f.b.FA().Fv()));
                    jSONObject.put("11216", bg.b(com.kwad.sdk.f.b.FA().Fu()));
                    jSONObject.put("11301", bg.c(com.kwad.sdk.f.b.FA().Fz()));
                    jSONObject.put("11302", bg.c(com.kwad.sdk.f.b.FA().getSdkVersion()));
                    jSONObject.put("11303", bg.c(com.kwad.sdk.f.b.FA().getAppId()));
                }
            } catch (Throwable unused9) {
            }
            try {
                jSONObject.put("02078", A.getE("W_S_V"));
                jSONObject.put("02079", A.getE("W_S_S_V"));
                if (Build.VERSION.SDK_INT > 21) {
                    jSONObject.put("02069", Build.VERSION.SECURITY_PATCH);
                }
                String string = Settings.Global.getString(cmVar.f2737a.getContentResolver(), "Phenotype_boot_count");
                if (!TextUtils.isEmpty(string)) {
                    jSONObject.put("03085", string);
                }
                String string2 = Settings.Global.getString(cmVar.f2737a.getContentResolver(), "boot_count");
                if (!TextUtils.isEmpty(string2)) {
                    jSONObject.put("03086", string2);
                }
                String string3 = Settings.System.getString(cmVar.f2737a.getContentResolver(), "power_on_times");
                if (!TextUtils.isEmpty(string3)) {
                    jSONObject.put("03091", string3);
                }
                String string4 = Settings.System.getString(cmVar.f2737a.getContentResolver(), "first_boot_flag");
                if (!TextUtils.isEmpty(string4)) {
                    jSONObject.put("03104", string4);
                }
            } catch (Throwable unused10) {
            }
            jSONObject.put("11007", System.currentTimeMillis() - j);
            jSONObject.put("11017", jSONObject.toString().length());
            return jSONObject;
        } catch (Throwable unused11) {
            return null;
        }
    }
}
