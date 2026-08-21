package com.alipay.sdk.app;

public class AlipayResultActivity extends android.app.Activity {
    public static final java.util.concurrent.ConcurrentHashMap<java.lang.String, com.alipay.sdk.app.AlipayResultActivity.a> a = null;

    public interface a {
        void a(int r1, java.lang.String r2, java.lang.String r3);
    }

    public interface b {
        void a(int r1, java.lang.String r2, java.lang.String r3);
    }

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.alipay.sdk.app.AlipayResultActivity.a = r0
            return
    }

    public AlipayResultActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(java.lang.String r4, android.os.Bundle r5) {
            r3 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.alipay.sdk.app.AlipayResultActivity$a> r0 = com.alipay.sdk.app.AlipayResultActivity.a
            java.lang.Object r4 = r0.remove(r4)
            com.alipay.sdk.app.AlipayResultActivity$a r4 = (com.alipay.sdk.app.AlipayResultActivity.a) r4
            if (r4 != 0) goto Le
            r3.finish()
            return
        Le:
            java.lang.String r0 = "endCode"
            int r0 = r5.getInt(r0)     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "memo"
            java.lang.String r1 = r5.getString(r1)     // Catch: java.lang.Throwable -> L27
            java.lang.String r2 = "result"
            java.lang.String r5 = r5.getString(r2)     // Catch: java.lang.Throwable -> L27
            r4.a(r0, r1, r5)     // Catch: java.lang.Throwable -> L27
            r3.finish()
            return
        L27:
            r4 = move-exception
            r3.finish()
            throw r4
    }

    @Override
    public void onCreate(android.os.Bundle r13) {
            r12 = this;
            java.lang.String r0 = "|"
            java.lang.String r1 = "result"
            java.lang.String r2 = "session"
            java.lang.String r3 = "biz"
            super.onCreate(r13)
            android.content.Intent r13 = r12.getIntent()     // Catch: java.lang.Throwable -> L12c
            r4 = 0
            java.lang.String r5 = r13.getStringExtra(r2)     // Catch: java.lang.Throwable -> L11d
            android.os.Bundle r6 = r13.getBundleExtra(r1)     // Catch: java.lang.Throwable -> L11d
            java.lang.String r7 = "scene"
            java.lang.String r7 = r13.getStringExtra(r7)     // Catch: java.lang.Throwable -> L11d
            com.alipay.sdk.m.s.a r4 = com.alipay.sdk.m.s.a.a.a(r5)     // Catch: java.lang.Throwable -> L11d
            if (r4 != 0) goto L28
            r12.finish()     // Catch: java.lang.Throwable -> L11d
            return
        L28:
            java.lang.String r8 = "BSPSession"
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11d
            r9.<init>()     // Catch: java.lang.Throwable -> L11d
            r9.append(r5)     // Catch: java.lang.Throwable -> L11d
            r9.append(r0)     // Catch: java.lang.Throwable -> L11d
            long r10 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L11d
            r9.append(r10)     // Catch: java.lang.Throwable -> L11d
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L11d
            com.alipay.sdk.m.k.a.a(r4, r3, r8, r9)     // Catch: java.lang.Throwable -> L11d
            java.lang.String r8 = "mqpSchemePay"
            boolean r7 = android.text.TextUtils.equals(r8, r7)     // Catch: java.lang.Throwable -> L12c
            if (r7 == 0) goto L4f
            r12.a(r5, r6)     // Catch: java.lang.Throwable -> L12c
            return
        L4f:
            boolean r7 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L12c
            if (r7 != 0) goto L57
            if (r6 != 0) goto Lb1
        L57:
            android.net.Uri r7 = r13.getData()     // Catch: java.lang.Throwable -> L12c
            if (r7 == 0) goto Lb1
            android.net.Uri r13 = r13.getData()     // Catch: java.lang.Throwable -> La5
            java.lang.String r13 = r13.getQuery()     // Catch: java.lang.Throwable -> La5
            java.lang.String r7 = new java.lang.String     // Catch: java.lang.Throwable -> La5
            r8 = 2
            byte[] r13 = android.util.Base64.decode(r13, r8)     // Catch: java.lang.Throwable -> La5
            java.lang.String r8 = "UTF-8"
            r7.<init>(r13, r8)     // Catch: java.lang.Throwable -> La5
            org.json.JSONObject r13 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La5
            r13.<init>(r7)     // Catch: java.lang.Throwable -> La5
            org.json.JSONObject r1 = r13.getJSONObject(r1)     // Catch: java.lang.Throwable -> La5
            java.lang.String r5 = r13.getString(r2)     // Catch: java.lang.Throwable -> La5
            java.lang.String r13 = "BSPUriSession"
            com.alipay.sdk.m.k.a.a(r4, r3, r13, r5)     // Catch: java.lang.Throwable -> La5
            android.os.Bundle r13 = new android.os.Bundle     // Catch: java.lang.Throwable -> La5
            r13.<init>()     // Catch: java.lang.Throwable -> La5
            java.util.Iterator r2 = r1.keys()     // Catch: java.lang.Throwable -> La2
        L8c:
            boolean r6 = r2.hasNext()     // Catch: java.lang.Throwable -> La2
            if (r6 == 0) goto La0
            java.lang.Object r6 = r2.next()     // Catch: java.lang.Throwable -> La2
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> La2
            java.lang.String r7 = r1.getString(r6)     // Catch: java.lang.Throwable -> La2
            r13.putString(r6, r7)     // Catch: java.lang.Throwable -> La2
            goto L8c
        La0:
            r6 = r13
            goto Lb1
        La2:
            r1 = move-exception
            r6 = r13
            goto La7
        La5:
            r13 = move-exception
            r1 = r13
        La7:
            java.lang.String r13 = "BSPResEx"
            com.alipay.sdk.m.k.a.a(r4, r3, r13, r1)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r13 = "ParseSchemeQueryError"
            com.alipay.sdk.m.k.a.a(r4, r3, r13, r1)     // Catch: java.lang.Throwable -> L12c
        Lb1:
            boolean r13 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r1 = ""
            if (r13 != 0) goto L114
            if (r6 != 0) goto Lbc
            goto L114
        Lbc:
            java.lang.String r13 = "PgReturn"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r2.<init>()     // Catch: java.lang.Throwable -> L10a
            r2.append(r1)     // Catch: java.lang.Throwable -> L10a
            long r7 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L10a
            r2.append(r7)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L10a
            com.alipay.sdk.m.k.a.a(r4, r3, r13, r2)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r13 = "PgReturnV"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r2.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r7 = "endCode"
            r8 = -1
            int r7 = r6.getInt(r7, r8)     // Catch: java.lang.Throwable -> L10a
            r2.append(r7)     // Catch: java.lang.Throwable -> L10a
            r2.append(r0)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r0 = "memo"
            java.lang.String r7 = "-"
            java.lang.String r0 = r6.getString(r0, r7)     // Catch: java.lang.Throwable -> L10a
            r2.append(r0)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L10a
            com.alipay.sdk.m.k.a.a(r4, r3, r13, r0)     // Catch: java.lang.Throwable -> L10a
            r13 = 9000(0x2328, float:1.2612E-41)
            java.lang.String r0 = "OK"
            com.alipay.sdk.app.OpenAuthTask.a(r5, r13, r0, r6)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r13 = r4.d     // Catch: java.lang.Throwable -> L12c
            com.alipay.sdk.m.k.a.b(r12, r4, r1, r13)     // Catch: java.lang.Throwable -> L12c
            r12.finish()     // Catch: java.lang.Throwable -> L12c
            goto L12f
        L10a:
            r13 = move-exception
            java.lang.String r0 = r4.d     // Catch: java.lang.Throwable -> L12c
            com.alipay.sdk.m.k.a.b(r12, r4, r1, r0)     // Catch: java.lang.Throwable -> L12c
            r12.finish()     // Catch: java.lang.Throwable -> L12c
            throw r13     // Catch: java.lang.Throwable -> L12c
        L114:
            java.lang.String r13 = r4.d     // Catch: java.lang.Throwable -> L12c
            com.alipay.sdk.m.k.a.b(r12, r4, r1, r13)     // Catch: java.lang.Throwable -> L12c
            r12.finish()     // Catch: java.lang.Throwable -> L12c
            goto L12f
        L11d:
            r13 = move-exception
            java.lang.String r0 = "BSPSerError"
            com.alipay.sdk.m.k.a.a(r4, r3, r0, r13)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r0 = "ParseBundleSerializableError"
            com.alipay.sdk.m.k.a.a(r4, r3, r0, r13)     // Catch: java.lang.Throwable -> L12c
            r12.finish()     // Catch: java.lang.Throwable -> L12c
            return
        L12c:
            r12.finish()
        L12f:
            return
    }
}
