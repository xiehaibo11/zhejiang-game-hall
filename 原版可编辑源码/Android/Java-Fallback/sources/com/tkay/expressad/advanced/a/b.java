package com.tkay.expressad.advanced.a;

public class b extends android.content.BroadcastReceiver {
    private static final java.lang.String a = null;
    private android.webkit.WebView b;
    private int c;

    static {
            java.lang.Class<com.tkay.expressad.advanced.a.b> r0 = com.tkay.expressad.advanced.a.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.advanced.a.b.a = r0
            return
    }

    public b(android.webkit.WebView r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            return
    }

    private static void a(android.webkit.WebView r2, int r3) {
            if (r2 == 0) goto L26
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L22
            r0.<init>()     // Catch: java.lang.Throwable -> L22
            java.lang.String r1 = "netstat"
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> L22
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L22
            java.lang.String r3 = "onNetstatChanged"
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L22
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L22
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> L22
            com.tkay.expressad.atsignalcommon.windvane.j.a(r2, r3, r0)     // Catch: java.lang.Throwable -> L22
            goto L26
        L22:
            r2 = move-exception
            r2.getMessage()
        L26:
            return
    }

    public final void a() {
            r1 = this;
            r0 = 0
            r1.b = r0
            return
    }

    @Override
    public void onReceive(android.content.Context r4, android.content.Intent r5) {
            r3 = this;
            java.lang.String r5 = "connectivity"
            java.lang.Object r5 = r4.getSystemService(r5)     // Catch: java.lang.Throwable -> L69
            android.net.ConnectivityManager r5 = (android.net.ConnectivityManager) r5     // Catch: java.lang.Throwable -> L69
            r0 = 0
            if (r5 != 0) goto L11
            android.webkit.WebView r4 = r3.b     // Catch: java.lang.Throwable -> L69
            a(r4, r0)     // Catch: java.lang.Throwable -> L69
            return
        L11:
            boolean r1 = com.tkay.expressad.foundation.g.a.bW     // Catch: java.lang.Throwable -> L69
            if (r1 == 0) goto L63
            android.net.NetworkInfo r5 = r5.getActiveNetworkInfo()     // Catch: java.lang.Throwable -> L69
            if (r5 != 0) goto L21
            android.webkit.WebView r4 = r3.b     // Catch: java.lang.Throwable -> L69
            a(r4, r0)     // Catch: java.lang.Throwable -> L69
            return
        L21:
            android.net.NetworkInfo$State r1 = r5.getState()     // Catch: java.lang.Throwable -> L69
            android.net.NetworkInfo$State r2 = android.net.NetworkInfo.State.CONNECTING     // Catch: java.lang.Throwable -> L69
            if (r1 == r2) goto L62
            android.net.NetworkInfo$State r1 = r5.getState()     // Catch: java.lang.Throwable -> L69
            android.net.NetworkInfo$State r2 = android.net.NetworkInfo.State.DISCONNECTING     // Catch: java.lang.Throwable -> L69
            if (r1 != r2) goto L32
            goto L62
        L32:
            int r5 = r5.getType()     // Catch: java.lang.Throwable -> L69
            r1 = 1
            if (r5 != r1) goto L41
            android.webkit.WebView r4 = r3.b     // Catch: java.lang.Throwable -> L69
            r5 = 9
            a(r4, r5)     // Catch: java.lang.Throwable -> L69
            return
        L41:
            java.lang.String r5 = "phone"
            java.lang.Object r4 = r4.getSystemService(r5)     // Catch: java.lang.Throwable -> L69
            android.telephony.TelephonyManager r4 = (android.telephony.TelephonyManager) r4     // Catch: java.lang.Throwable -> L69
            if (r4 != 0) goto L51
            android.webkit.WebView r4 = r3.b     // Catch: java.lang.Throwable -> L69
            a(r4, r0)     // Catch: java.lang.Throwable -> L69
            return
        L51:
            int r4 = r4.getNetworkType()     // Catch: java.lang.Throwable -> L69
            r3.c = r4     // Catch: java.lang.Throwable -> L69
            int r4 = com.tkay.expressad.foundation.h.k.a(r4)     // Catch: java.lang.Throwable -> L69
            r3.c = r4     // Catch: java.lang.Throwable -> L69
            android.webkit.WebView r5 = r3.b     // Catch: java.lang.Throwable -> L69
            a(r5, r4)     // Catch: java.lang.Throwable -> L69
        L62:
            return
        L63:
            android.webkit.WebView r4 = r3.b     // Catch: java.lang.Throwable -> L69
            a(r4, r0)     // Catch: java.lang.Throwable -> L69
            return
        L69:
            r4 = move-exception
            r4.getMessage()
            return
    }
}
