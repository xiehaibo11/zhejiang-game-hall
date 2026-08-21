package com.tkay.expressad.foundation.g.f.h;

import android.content.Context;
import android.text.TextUtils;
import com.igexin.sdk.PushBuildConfig;
import com.tkay.expressad.foundation.g.f.d.c;
import com.tkay.expressad.foundation.g.f.d.d;
import com.tkay.expressad.foundation.g.f.d.g;
import com.tkay.expressad.foundation.g.f.i;
import com.tkay.expressad.foundation.g.f.l;
import com.tkay.expressad.foundation.g.f.m;
import com.tkay.expressad.foundation.h.p;
import com.tkay.expressad.out.e;
import java.io.File;

/* JADX INFO: loaded from: classes3.dex */
public class a {
    private static final String b = a.class.getSimpleName();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected Context f6922a;

    public a(Context context) {
        if (context == null) {
            this.f6922a = com.tkay.expressad.foundation.b.b.b().d();
        } else {
            this.f6922a = context.getApplicationContext();
        }
    }

    public void a(String str, b bVar) {
        if (bVar != null) {
            bVar.a(PushBuildConfig.sdk_conf_channelid, com.tkay.expressad.foundation.g.a.cy);
            StringBuilder sb = new StringBuilder();
            com.tkay.expressad.foundation.g.f.a.a();
            sb.append(com.tkay.expressad.foundation.g.f.a.b());
            bVar.a("band_width", sb.toString());
            String str2 = bVar.b().get("unit_id");
            if (str2 != null) {
                String strA = e.a().a(str2, str);
                if (TextUtils.isEmpty(strA)) {
                    return;
                }
                bVar.a("ch_info", strA);
            }
        }
    }

    public final void a(String str, b bVar, com.tkay.expressad.foundation.g.f.e eVar) {
        com.tkay.expressad.foundation.g.f.b bVar2 = new com.tkay.expressad.foundation.g.f.b();
        if (bVar == null) {
            try {
                bVar = new b();
            } catch (Exception e) {
                e.getMessage();
            }
        }
        a(str, bVar);
        String str2 = bVar.b().get("sign");
        if (str2 == null) {
            str2 = "";
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        bVar.a("ts", String.valueOf(jCurrentTimeMillis));
        bVar.a("st", p.a(str2 + jCurrentTimeMillis));
        g gVar = new g(0, str + "?" + bVar.toString(), null, eVar);
        gVar.a((l) bVar2);
        m.a(gVar);
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x007c  */
    /* JADX WARN: Removed duplicated region for block: B:27:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void a(int r6, java.lang.String r7, com.tkay.expressad.foundation.g.f.h.b r8, com.tkay.expressad.foundation.g.f.l r9, com.tkay.expressad.foundation.g.f.e r10) {
        /*
            r5 = this;
            if (r8 != 0) goto L8
            com.tkay.expressad.foundation.g.f.h.b r0 = new com.tkay.expressad.foundation.g.f.h.b     // Catch: java.lang.Exception -> L41
            r0.<init>()     // Catch: java.lang.Exception -> L41
            r8 = r0
        L8:
            r5.a(r7, r8)     // Catch: java.lang.Exception -> L41
            java.util.Map r0 = r8.b()     // Catch: java.lang.Exception -> L41
            java.lang.String r1 = "sign"
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Exception -> L41
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L41
            if (r0 != 0) goto L1b
            java.lang.String r0 = ""
        L1b:
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L41
            java.lang.String r3 = "ts"
            java.lang.String r4 = java.lang.String.valueOf(r1)     // Catch: java.lang.Exception -> L41
            r8.a(r3, r4)     // Catch: java.lang.Exception -> L41
            java.lang.String r3 = "st"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L41
            r4.<init>()     // Catch: java.lang.Exception -> L41
            r4.append(r0)     // Catch: java.lang.Exception -> L41
            r4.append(r1)     // Catch: java.lang.Exception -> L41
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Exception -> L41
            java.lang.String r0 = com.tkay.expressad.foundation.h.p.a(r0)     // Catch: java.lang.Exception -> L41
            r8.a(r3, r0)     // Catch: java.lang.Exception -> L41
            goto L45
        L41:
            r0 = move-exception
            r0.getMessage()
        L45:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r7)
            java.lang.String r7 = "?"
            r0.append(r7)
            java.lang.String r7 = r8.toString()
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            r8 = 0
            r0 = 0
            if (r6 == 0) goto L74
            r1 = 1
            if (r6 == r1) goto L6e
            r1 = 2
            if (r6 == r1) goto L68
            goto L7a
        L68:
            com.tkay.expressad.foundation.g.f.d.c r6 = new com.tkay.expressad.foundation.g.f.d.c
            r6.<init>(r8, r7, r0, r10)
            goto L79
        L6e:
            com.tkay.expressad.foundation.g.f.d.d r6 = new com.tkay.expressad.foundation.g.f.d.d
            r6.<init>(r8, r7, r0, r10)
            goto L79
        L74:
            com.tkay.expressad.foundation.g.f.d.g r6 = new com.tkay.expressad.foundation.g.f.d.g
            r6.<init>(r8, r7, r0, r10)
        L79:
            r0 = r6
        L7a:
            if (r0 == 0) goto L82
            r0.a(r9)
            com.tkay.expressad.foundation.g.f.m.a(r0)
        L82:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.foundation.g.f.h.a.a(int, java.lang.String, com.tkay.expressad.foundation.g.f.h.b, com.tkay.expressad.foundation.g.f.l, com.tkay.expressad.foundation.g.f.e):void");
    }

    public static void a(File file, String str, com.tkay.expressad.foundation.g.f.e eVar) {
        m.a().a(file, str, (com.tkay.expressad.foundation.g.f.e<Void>) eVar);
    }

    private void a(int i, String str, b bVar, com.tkay.expressad.foundation.g.f.e eVar) {
        String str2 = bVar.b().get("sign");
        if (str2 == null) {
            str2 = "";
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        bVar.a("ts", String.valueOf(jCurrentTimeMillis));
        bVar.a("st", p.a(str2 + jCurrentTimeMillis));
        b(i, str, bVar, new com.tkay.expressad.foundation.g.f.b(), eVar);
    }

    private void b(int i, String str, b bVar, com.tkay.expressad.foundation.g.f.e eVar) {
        b(i, str, bVar, new com.tkay.expressad.foundation.g.f.b(), eVar);
    }

    private void b(int i, String str, b bVar, l lVar, com.tkay.expressad.foundation.g.f.e eVar) {
        if (bVar == null) {
            try {
                bVar = new b();
            } catch (Exception e) {
                e.getMessage();
            }
        }
        a(str, bVar);
        i gVar = null;
        if (i == 0) {
            gVar = new g(1, str, bVar.toString(), eVar);
            gVar.a("Content-Type", "application/x-www-form-urlencoded");
        } else if (i == 1) {
            gVar = new d(1, str, bVar.toString(), eVar);
            gVar.a("Content-Type", "application/x-www-form-urlencoded");
        } else if (i == 2) {
            gVar = new c(1, str, bVar.toString(), eVar);
            gVar.a("Content-Type", "application/x-www-form-urlencoded");
        }
        if (gVar != null) {
            gVar.a(lVar);
            m.a(gVar);
        }
    }
}
