package com.tkay.core.common.l;

import android.text.TextUtils;
import android.util.Log;
import com.tkay.core.api.TYSDK;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.aj;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class n {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f6248a = "tkay_bidding";

    public static void a(String str, com.tkay.core.common.f.d dVar, String str2, aj ajVar, int i, int i2) {
        a(str, dVar, str2, ajVar, i, i2, null);
    }

    public static void a(String str, com.tkay.core.common.f.d dVar, String str2, aj ajVar, int i, int i2, List<String> list) {
        if (TYSDK.isNetworkLogDebug()) {
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put(com.tkay.expressad.foundation.d.r.ac, str2);
                jSONObject.put(com.tkay.expressad.videocommon.e.b.v, str);
                jSONObject.put("adtype", dVar.Z());
                jSONObject.put("adsourceId", ajVar.t());
                jSONObject.put("networkFirmId", ajVar.c());
                jSONObject.put("content", dVar.G());
                jSONObject.put("hourly_frequency", i);
                jSONObject.put("hourly_limit", ajVar.f());
                jSONObject.put("daily_frequency", i2);
                jSONObject.put("daily_limit", ajVar.e());
                jSONObject.put("pacing_limit", ajVar.s());
                jSONObject.put("request_fail_interval", ajVar.G());
                jSONObject.put("filter_source_ids", list != null ? list : "");
                a("tkay_network", jSONObject.toString(), true);
            } catch (Throwable unused) {
            }
        }
    }

    public static void a(String str, String str2, String str3, aj ajVar) {
        if (TYSDK.isNetworkLogDebug()) {
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("action", f.i.B);
                jSONObject.put("result", str);
                jSONObject.put(com.tkay.expressad.videocommon.e.b.v, str2);
                jSONObject.put("adtype", str3);
                jSONObject.put("adsourceId", ajVar.t());
                jSONObject.put("networkFirmId", ajVar.c());
                jSONObject.put("content", ajVar.g());
                jSONObject.put("msg", ajVar.z());
                a(f6248a, jSONObject.toString(), TextUtils.equals(f.i.m, str));
            } catch (Throwable unused) {
            }
        }
    }

    private static void a(String str, String str2, String str3, String str4) {
        if (TYSDK.isNetworkLogDebug()) {
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("action", f.i.C);
                jSONObject.put("result", str);
                jSONObject.put(com.tkay.expressad.videocommon.e.b.v, str2);
                jSONObject.put("adtype", str3);
                jSONObject.put("errorMsg", str4);
                a("tkay_network", jSONObject.toString(), TextUtils.equals(f.i.m, str));
            } catch (Throwable unused) {
            }
        }
    }

    public static void a(String str, String str2) {
        if (TYSDK.isNetworkLogDebug()) {
            a("tkay_".concat(String.valueOf(str)), str2, false);
        }
    }

    public static void a(String str, String str2, boolean z) {
        String property = System.getProperty("line.separator");
        try {
            if (str2.startsWith("{")) {
                str2 = new JSONObject(str2).toString(4);
            } else if (str2.startsWith("[")) {
                str2 = new JSONArray(str2).toString(4);
            }
        } catch (JSONException unused) {
        }
        String str3 = "╔═══════════════════════════════════════════════════════════════════════════════════════";
        for (String str4 : str2.split(property)) {
            str3 = (str3 + "\n") + "║ " + str4;
        }
        String str5 = str3 + "\n╚═══════════════════════════════════════════════════════════════════════════════════════";
        if (z) {
            StringBuilder sb = new StringBuilder();
            sb.append(str);
            sb.append(com.tkay.core.common.b.m.a().u() ? "(DebuggerMode)" : "");
            Log.e(sb.toString(), " \n".concat(String.valueOf(str5)));
            return;
        }
        StringBuilder sb2 = new StringBuilder();
        sb2.append(str);
        sb2.append(com.tkay.core.common.b.m.a().u() ? "(DebuggerMode)" : "");
        Log.i(sb2.toString(), " \n".concat(String.valueOf(str5)));
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public static void a(String str, String str2, String str3, String str4, String str5) {
        String str6;
        if (TYSDK.isNetworkLogDebug()) {
            byte b = -1;
            switch (str2.hashCode()) {
                case 48:
                    if (str2.equals("0")) {
                        b = 0;
                    }
                    break;
                case 49:
                    if (str2.equals("1")) {
                        b = 1;
                    }
                    break;
                case 50:
                    if (str2.equals("2")) {
                        b = 2;
                    }
                    break;
                case 51:
                    if (str2.equals("3")) {
                        b = 3;
                    }
                    break;
                case 52:
                    if (str2.equals("4")) {
                        b = 4;
                    }
                    break;
            }
            if (b == 0) {
                str6 = f.i.r;
            } else if (b == 1) {
                str6 = f.i.q;
            } else if (b == 2) {
                str6 = f.i.o;
            } else if (b == 3) {
                str6 = f.i.p;
            } else {
                str6 = b != 4 ? "" : f.i.s;
            }
            a(str, str6, str3, str4, str5, false);
        }
    }

    public static void b(String str, String str2, String str3, String str4, String str5) {
        a(str, str2, str3, str4, str5, false);
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0095  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static void a(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, boolean r7) {
        /*
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r0 == 0) goto Lbc
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lbc
            r0.<init>()     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r1 = "placementId"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r1 = "adtype"
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = "api"
            r0.put(r3, r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = "result"
            r0.put(r3, r5)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = "reason"
            r0.put(r3, r6)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = ""
            if (r7 == 0) goto L9b
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lbc
            if (r4 != 0) goto L95
            com.tkay.core.common.v r4 = com.tkay.core.common.v.a()     // Catch: java.lang.Throwable -> Lbc
            java.util.Map r2 = r4.b(r2)     // Catch: java.lang.Throwable -> Lbc
            int r4 = r2.size()     // Catch: java.lang.Throwable -> Lbc
            if (r4 <= 0) goto L95
            java.util.Set r2 = r2.entrySet()     // Catch: java.lang.Throwable -> Lbc
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> Lbc
            r4 = r3
        L45:
            boolean r5 = r2.hasNext()     // Catch: java.lang.Throwable -> Lbc
            if (r5 == 0) goto L81
            java.lang.Object r5 = r2.next()     // Catch: java.lang.Throwable -> Lbc
            java.util.Map$Entry r5 = (java.util.Map.Entry) r5     // Catch: java.lang.Throwable -> Lbc
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbc
            r6.<init>()     // Catch: java.lang.Throwable -> Lbc
            r6.append(r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r4 = "key="
            r6.append(r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.Object r4 = r5.getKey()     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> Lbc
            r6.append(r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r4 = ",value="
            r6.append(r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.Object r4 = r5.getValue()     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> Lbc
            r6.append(r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r4 = ";"
            r6.append(r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Throwable -> Lbc
            goto L45
        L81:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r5 = "["
            r2.<init>(r5)     // Catch: java.lang.Throwable -> Lbc
            r2.append(r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r4 = "]"
            r2.append(r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lbc
            goto L96
        L95:
            r2 = r3
        L96:
            java.lang.String r4 = "extra"
            r0.put(r4, r2)     // Catch: java.lang.Throwable -> Lbc
        L9b:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r4 = "tkay_network"
            r2.<init>(r4)     // Catch: java.lang.Throwable -> Lbc
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lbc
            boolean r4 = r4.u()     // Catch: java.lang.Throwable -> Lbc
            if (r4 == 0) goto Lae
            java.lang.String r3 = "(DebuggerMode)"
        Lae:
            r2.append(r3)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> Lbc
            android.util.Log.i(r2, r3)     // Catch: java.lang.Throwable -> Lbc
        Lbc:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.l.n.a(java.lang.String, java.lang.String, java.lang.String, java.lang.String, java.lang.String, boolean):void");
    }

    private static void b(String str, String str2) {
        a(str, str2, false);
    }
}
