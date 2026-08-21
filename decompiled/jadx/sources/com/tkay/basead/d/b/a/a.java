package com.tkay.basead.d.b.a;

import android.net.Uri;

/* JADX INFO: loaded from: classes3.dex */
public final class a {
    /* JADX WARN: Not initialized variable reg: 1, insn: 0x00a5: MOVE (r0 I:??[OBJECT, ARRAY]) = (r1 I:??[OBJECT, ARRAY]), block:B:30:0x00a5 */
    /* JADX WARN: Removed duplicated region for block: B:27:0x00a0 A[PHI: r1
      0x00a0: PHI (r1v3 java.net.HttpURLConnection) = (r1v2 java.net.HttpURLConnection), (r1v6 java.net.HttpURLConnection) binds: [B:26:0x009e, B:17:0x0085] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:32:0x00a8  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static com.tkay.basead.c.d a(com.tkay.core.common.f.i r9, com.tkay.core.common.f.h r10, java.lang.String r11) throws java.lang.Throwable {
        /*
            r0 = 0
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r1.<init>(r11)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.net.URLConnection r1 = r1.openConnection()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.net.HttpURLConnection r1 = (java.net.HttpURLConnection) r1     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r2 = "GET"
            r1.setRequestMethod(r2)     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            r2 = 0
            r1.setInstanceFollowRedirects(r2)     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            r2 = 30000(0x7530, float:4.2039E-41)
            r1.setConnectTimeout(r2)     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            r1.connect()     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            int r2 = r1.getResponseCode()     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            r3 = 200(0xc8, float:2.8E-43)
            if (r2 != r3) goto L75
            java.io.InputStream r2 = r1.getInputStream()     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            r3.<init>(r2)     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            java.io.BufferedReader r4 = new java.io.BufferedReader     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            r4.<init>(r3)     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            r5.<init>()     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
        L38:
            java.lang.String r6 = r4.readLine()     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            if (r6 == 0) goto L42
            r5.append(r6)     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            goto L38
        L42:
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            r6.<init>(r5)     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            java.lang.String r5 = "data"
            org.json.JSONObject r5 = r6.optJSONObject(r5)     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            java.lang.String r6 = "dstlink"
            java.lang.String r6 = r5.optString(r6)     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            java.lang.String r7 = "clickid"
            java.lang.String r5 = r5.optString(r7)     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            com.tkay.basead.c.d r7 = new com.tkay.basead.c.d     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            java.lang.String r8 = ""
            r7.<init>(r6, r8, r5)     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            r4.close()     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            r3.close()     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            if (r2 == 0) goto L6f
            r2.close()     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
        L6f:
            if (r1 == 0) goto L74
            r1.disconnect()
        L74:
            return r7
        L75:
            java.lang.String r5 = r10.A()     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            java.lang.String r7 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            java.lang.String r8 = ""
            r3 = r9
            r4 = r10
            r6 = r11
            com.tkay.core.common.k.c.a(r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> La4
            if (r1 == 0) goto La3
            goto La0
        L88:
            r2 = move-exception
            goto L8e
        L8a:
            r9 = move-exception
            goto La6
        L8c:
            r2 = move-exception
            r1 = r0
        L8e:
            java.lang.String r5 = r10.A()     // Catch: java.lang.Throwable -> La4
            java.lang.String r7 = ""
            java.lang.String r8 = r2.getMessage()     // Catch: java.lang.Throwable -> La4
            r3 = r9
            r4 = r10
            r6 = r11
            com.tkay.core.common.k.c.a(r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> La4
            if (r1 == 0) goto La3
        La0:
            r1.disconnect()
        La3:
            return r0
        La4:
            r9 = move-exception
            r0 = r1
        La6:
            if (r0 == 0) goto Lab
            r0.disconnect()
        Lab:
            throw r9
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.basead.d.b.a.a.a(com.tkay.core.common.f.i, com.tkay.core.common.f.h, java.lang.String):com.tkay.basead.c.d");
    }

    public static String a(String str) {
        try {
            return Uri.parse(str).getQueryParameter("qz_gdt");
        } catch (Throwable unused) {
            return null;
        }
    }
}
