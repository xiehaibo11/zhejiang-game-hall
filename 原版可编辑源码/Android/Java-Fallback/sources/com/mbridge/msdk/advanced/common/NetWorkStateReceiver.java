package com.mbridge.msdk.advanced.common;

public class NetWorkStateReceiver extends android.content.BroadcastReceiver {
    private static final java.lang.String a = null;
    private android.webkit.WebView b;
    private int c;

    static {
            java.lang.Class<com.mbridge.msdk.advanced.common.NetWorkStateReceiver> r0 = com.mbridge.msdk.advanced.common.NetWorkStateReceiver.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.advanced.common.NetWorkStateReceiver.a = r0
            return
    }

    public NetWorkStateReceiver(android.webkit.WebView r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            return
    }

    private void a(android.webkit.WebView r4, int r5) {
            r3 = this;
            if (r4 == 0) goto L2d
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L23
            r0.<init>()     // Catch: java.lang.Throwable -> L23
            java.lang.String r1 = "netstat"
            r0.put(r1, r5)     // Catch: java.lang.Throwable -> L23
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L23
            java.lang.String r1 = "onNetstatChanged"
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L23
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L23
            r2 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r2)     // Catch: java.lang.Throwable -> L23
            r5.a(r4, r1, r0)     // Catch: java.lang.Throwable -> L23
            goto L2d
        L23:
            r4 = move-exception
            java.lang.String r5 = com.mbridge.msdk.advanced.common.NetWorkStateReceiver.a
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r5, r4)
        L2d:
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
            java.lang.Object r5 = r4.getSystemService(r5)     // Catch: java.lang.Throwable -> L6a
            android.net.ConnectivityManager r5 = (android.net.ConnectivityManager) r5     // Catch: java.lang.Throwable -> L6a
            r0 = 0
            if (r5 != 0) goto L11
            android.webkit.WebView r4 = r3.b     // Catch: java.lang.Throwable -> L6a
            r3.a(r4, r0)     // Catch: java.lang.Throwable -> L6a
            return
        L11:
            boolean r1 = com.mbridge.msdk.foundation.same.a.h     // Catch: java.lang.Throwable -> L6a
            if (r1 == 0) goto L64
            android.net.NetworkInfo r5 = r5.getActiveNetworkInfo()     // Catch: java.lang.Throwable -> L6a
            if (r5 != 0) goto L21
            android.webkit.WebView r4 = r3.b     // Catch: java.lang.Throwable -> L6a
            r3.a(r4, r0)     // Catch: java.lang.Throwable -> L6a
            return
        L21:
            android.net.NetworkInfo$State r1 = r5.getState()     // Catch: java.lang.Throwable -> L6a
            android.net.NetworkInfo$State r2 = android.net.NetworkInfo.State.CONNECTING     // Catch: java.lang.Throwable -> L6a
            if (r1 == r2) goto L63
            android.net.NetworkInfo$State r1 = r5.getState()     // Catch: java.lang.Throwable -> L6a
            android.net.NetworkInfo$State r2 = android.net.NetworkInfo.State.DISCONNECTING     // Catch: java.lang.Throwable -> L6a
            if (r1 != r2) goto L32
            goto L63
        L32:
            int r5 = r5.getType()     // Catch: java.lang.Throwable -> L6a
            r1 = 1
            if (r5 != r1) goto L41
            android.webkit.WebView r4 = r3.b     // Catch: java.lang.Throwable -> L6a
            r5 = 9
            r3.a(r4, r5)     // Catch: java.lang.Throwable -> L6a
            return
        L41:
            java.lang.String r5 = "phone"
            java.lang.Object r4 = r4.getSystemService(r5)     // Catch: java.lang.Throwable -> L6a
            android.telephony.TelephonyManager r4 = (android.telephony.TelephonyManager) r4     // Catch: java.lang.Throwable -> L6a
            if (r4 != 0) goto L51
            android.webkit.WebView r4 = r3.b     // Catch: java.lang.Throwable -> L6a
            r3.a(r4, r0)     // Catch: java.lang.Throwable -> L6a
            return
        L51:
            int r4 = r4.getNetworkType()     // Catch: java.lang.Throwable -> L6a
            r3.c = r4     // Catch: java.lang.Throwable -> L6a
            int r4 = com.mbridge.msdk.foundation.tools.v.a(r4)     // Catch: java.lang.Throwable -> L6a
            r3.c = r4     // Catch: java.lang.Throwable -> L6a
            android.webkit.WebView r5 = r3.b     // Catch: java.lang.Throwable -> L6a
            r3.a(r5, r4)     // Catch: java.lang.Throwable -> L6a
            goto L74
        L63:
            return
        L64:
            android.webkit.WebView r4 = r3.b     // Catch: java.lang.Throwable -> L6a
            r3.a(r4, r0)     // Catch: java.lang.Throwable -> L6a
            goto L74
        L6a:
            r4 = move-exception
            java.lang.String r5 = com.mbridge.msdk.advanced.common.NetWorkStateReceiver.a
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r5, r4)
        L74:
            return
    }
}
