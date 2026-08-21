package com.kuaishou.weapon.p0;

import android.content.Context;
import android.text.TextUtils;
import com.igexin.sdk.PushConsts;
import com.kuaishou.weapon.p0.jni.Engine;
import org.json.JSONObject;

public class bv {
    private static final byte[] d = new byte[0];
    private Context a;
    private boolean b;
    private int c;

    public bv(Context context, int i, boolean z) {
        this.a = context;
        this.b = z;
        this.c = i;
    }

    public String a(String str) {
        try {
            synchronized (d) {
                JSONObject jSONObjectA = new cl(str, cj.j).a(this.a);
                if (jSONObjectA == null) {
                    return null;
                }
                JSONObject jSONObjectA2 = a();
                if (jSONObjectA2 == null) {
                    return null;
                }
                jSONObjectA.put("module_section", jSONObjectA2);
                return jSONObjectA.toString();
            }
        } catch (Throwable unused) {
            return null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:145:0x04f9 A[Catch: all -> 0x055c, TRY_ENTER, TryCatch #4 {all -> 0x055c, blocks: (B:94:0x039e, B:96:0x03a6, B:97:0x03ab, B:100:0x03c3, B:102:0x03d0, B:104:0x03d9, B:106:0x03e2, B:108:0x03eb, B:110:0x03f4, B:112:0x03fd, B:114:0x0406, B:116:0x040f, B:118:0x0418, B:120:0x0421, B:122:0x042a, B:124:0x0433, B:126:0x043c, B:128:0x0445, B:130:0x044e, B:132:0x0457, B:134:0x0460, B:136:0x0469, B:138:0x0472, B:140:0x047b, B:142:0x04bf, B:145:0x04f9, B:147:0x0506, B:149:0x050c, B:151:0x0515, B:153:0x051b, B:155:0x0524, B:157:0x052a, B:159:0x0533, B:160:0x0537, B:162:0x053b, B:139:0x0477, B:135:0x0465, B:131:0x0453, B:127:0x0441, B:123:0x042f, B:119:0x041d, B:115:0x040b, B:111:0x03f9, B:107:0x03e7, B:103:0x03d5, B:141:0x047f), top: B:182:0x039e }] */
    /* JADX WARN: Removed duplicated region for block: B:174:0x053b A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public JSONObject a() {
        String strQ;
        try {
            JSONObject jSONObject = new JSONObject();
            h hVarA = h.a(this.a, "re_po_rt");
            boolean zE = hVarA.e("a1_p_s_p_s");
            boolean zE2 = hVarA.e("a1_p_s_p_s_c_b");
            jSONObject.put("11006", zE ? 1 : 0);
            jSONObject.put("11029", zE2 ? 1 : 0);
            if (hVarA.b(df.ao, 1) == 1 && (zE || zE2)) {
                String strA = bg.a(this.a);
                if (!TextUtils.isEmpty(strA) && !strA.startsWith("RISK")) {
                    jSONObject.put("01001", f.a(strA));
                }
                String strC = bg.c(this.a);
                if (!TextUtils.isEmpty(strC) && !strC.startsWith("RISK")) {
                    jSONObject.put("01003", strC);
                }
                String strB = bg.b(this.a, 0);
                if (!TextUtils.isEmpty(strB) && !strB.startsWith("RISK")) {
                    jSONObject.put("01019", strB);
                }
                String strB2 = bg.b(this.a, 1);
                if (!TextUtils.isEmpty(strB2) && !strB2.startsWith("RISK")) {
                    jSONObject.put("01004", f.a(strB2));
                }
            }
            int iB = hVarA.b(df.an, 1);
            if (iB == 1 && (zE || zE2)) {
                String strF = bg.f(this.a);
                if (!TextUtils.isEmpty(strF) && !strF.startsWith("RISK")) {
                    jSONObject.put("01013", strF);
                }
            }
            if (hVarA.b(df.ap, 1) == 1 && (zE || zE2)) {
                String strD = bg.d(this.a);
                if (!TextUtils.isEmpty(strD) && !strD.startsWith("RISK")) {
                    jSONObject.put("01007", strD);
                }
            }
            if (hVarA.b(df.aq, 1) == 1 && (zE || zE2)) {
                jSONObject.put("01011", bg.e(this.a));
            }
            if (zE || zE2) {
                String strG = bg.g();
                if ((TextUtils.isEmpty(strG) || strG.startsWith("RISK")) && strG == null) {
                    jSONObject.put("07005", "");
                } else {
                    jSONObject.put("07005", strG);
                }
                jSONObject.put("07006", bg.f());
            }
            if (hVarA.b(df.as, 1) == 1 && (zE || zE2)) {
                String strP = bg.p(this.a);
                if (!TextUtils.isEmpty(strP) && !strP.startsWith("RISK")) {
                    jSONObject.put("01016", strP);
                }
            }
            if (zE || zE2) {
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
                } catch (Exception unused) {
                }
            }
            jSONObject.put("11013", Integer.parseInt(bw.a(this.a.getApplicationContext()), 2));
            jSONObject.put("11012", bw.b(this.a));
            jSONObject.put("11011", bg.w(this.a));
            try {
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
            } catch (Throwable unused2) {
            }
            String strY = bg.y(this.a);
            if (!TextUtils.isEmpty(strY)) {
                jSONObject.put("01026", strY);
            }
            if (iB == 1) {
                try {
                    JSONObject jSONObjectA = ah.a(this.a);
                    if (jSONObjectA != null) {
                        jSONObject.put("11015", jSONObjectA);
                    }
                    if (Engine.loadSuccess) {
                        cd cdVar = new cd(this.a);
                        jSONObject.put("02001", cdVar.a("02001") != null ? cdVar.a("02001") : bk.a());
                        jSONObject.put("02002", cdVar.a("02002") != null ? cdVar.a("02002") : bk.b());
                        jSONObject.put("02003", cdVar.a("02003") != null ? cdVar.a("02003") : bk.c());
                        jSONObject.put("02007", cdVar.a("02007") != null ? cdVar.a("02007") : bk.g());
                        jSONObject.put("02006", cdVar.a("02006") != null ? cdVar.a("02006") : bk.f());
                        jSONObject.put("02004", cdVar.a("02004") != null ? cdVar.a("02004") : bk.d());
                        jSONObject.put("02005", cdVar.a("02005") != null ? cdVar.a("02005") : bk.e());
                        jSONObject.put("02018", cdVar.a("02018") != null ? cdVar.a("02018") : bk.s());
                        jSONObject.put("02013", cdVar.a("02013") != null ? cdVar.a("02013") : bk.m());
                        if (cdVar.a("02016") != null) {
                            strQ = cdVar.a("02016");
                        }
                        jSONObject.put("02016", strQ);
                        jSONObject.put("02021", bk.d(this.a));
                        jSONObject.put("02022", bk.c(this.a));
                        jSONObject.put("02044", bk.t());
                        jSONObject.put("11009", br.a(this.a.getApplicationContext()));
                        if (Engine.loadSuccess) {
                            try {
                                bi biVarB = bj.b();
                                jSONObject.put("04001", bj.a());
                                jSONObject.put("04002", biVarB.b());
                                jSONObject.put("04003", biVarB.c());
                                jSONObject.put("04004", biVarB.a());
                            } catch (Exception unused3) {
                            }
                        } else {
                            by byVar = new by(this.a);
                            jSONObject.put("04001", byVar.a("04001") != null ? byVar.a("04001") : "");
                            jSONObject.put("04002", byVar.a("04002") != null ? byVar.a("04002") : "");
                            jSONObject.put("04003", byVar.a("04003") != null ? byVar.a("04003") : "");
                            jSONObject.put("04004", byVar.a("04004") != null ? byVar.a("04004") : "");
                        }
                    } else {
                        jSONObject.put("02001", bk.a());
                        jSONObject.put("02002", bk.b());
                        jSONObject.put("02003", bk.c());
                        jSONObject.put("02004", bk.d());
                        jSONObject.put("02005", bk.e());
                        jSONObject.put("02006", bk.f());
                        jSONObject.put("02007", bk.g());
                        jSONObject.put("02018", bk.s());
                        jSONObject.put("02013", bk.m());
                    }
                    strQ = bk.q();
                    jSONObject.put("02016", strQ);
                    jSONObject.put("02021", bk.d(this.a));
                    jSONObject.put("02022", bk.c(this.a));
                    jSONObject.put("02044", bk.t());
                    jSONObject.put("11009", br.a(this.a.getApplicationContext()));
                    if (Engine.loadSuccess) {
                    }
                } catch (Throwable unused4) {
                    return null;
                }
            }
            if (this.b) {
                jSONObject.put(com.tkay.basead.c.f.f, 1);
            }
            jSONObject.put("11017", jSONObject.toString().length());
            jSONObject.put(PushConsts.SEND_MESSAGE_ERROR, this.c);
            jSONObject.put("11028", WeaponHI.sKSSdkver);
            return jSONObject;
        } catch (Throwable unused5) {
            return null;
        }
    }
}
