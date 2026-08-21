package com.tkay.expressad.foundation.g.f.g;

public class b {
    private static final java.lang.String a = null;
    private static volatile com.tkay.expressad.foundation.g.f.g.b b;
    private static android.net.ConnectivityManager c;
    private static com.tkay.expressad.foundation.g.f.c.a d;

    static {
            java.lang.Class<com.tkay.expressad.foundation.g.f.g.b> r0 = com.tkay.expressad.foundation.g.f.g.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.foundation.g.f.g.b.a = r0
            return
    }

    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.tkay.expressad.foundation.g.f.g.b a(android.content.Context r5) {
            com.tkay.expressad.foundation.g.f.g.b r0 = com.tkay.expressad.foundation.g.f.g.b.b
            if (r0 != 0) goto L145
            java.lang.Class<com.tkay.expressad.foundation.g.f.g.b> r0 = com.tkay.expressad.foundation.g.f.g.b.class
            monitor-enter(r0)
            com.tkay.expressad.foundation.g.f.g.b r1 = com.tkay.expressad.foundation.g.f.g.b.b     // Catch: java.lang.Throwable -> L142
            if (r1 != 0) goto L140
            com.tkay.expressad.foundation.g.f.g.b r1 = new com.tkay.expressad.foundation.g.f.g.b     // Catch: java.lang.Throwable -> L142
            r1.<init>()     // Catch: java.lang.Throwable -> L142
            com.tkay.expressad.foundation.g.f.g.b.b = r1     // Catch: java.lang.Throwable -> L142
            if (r5 == 0) goto L1e
            java.lang.String r1 = "connectivity"
            java.lang.Object r5 = r5.getSystemService(r1)     // Catch: java.lang.Throwable -> L142
            android.net.ConnectivityManager r5 = (android.net.ConnectivityManager) r5     // Catch: java.lang.Throwable -> L142
            com.tkay.expressad.foundation.g.f.g.b.c = r5     // Catch: java.lang.Throwable -> L142
        L1e:
            com.tkay.expressad.foundation.g.f.c.a r5 = new com.tkay.expressad.foundation.g.f.c.a     // Catch: java.lang.Throwable -> L142
            r5.<init>()     // Catch: java.lang.Throwable -> L142
            com.tkay.expressad.foundation.g.f.g.b.d = r5     // Catch: java.lang.Throwable -> L142
            android.net.ConnectivityManager r5 = com.tkay.expressad.foundation.g.f.g.b.c     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            if (r5 != 0) goto L2b
            goto L140
        L2b:
            android.net.ConnectivityManager r5 = com.tkay.expressad.foundation.g.f.g.b.c     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            android.net.NetworkInfo r5 = r5.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            if (r5 == 0) goto L140
            java.lang.String r1 = "wifi"
            java.lang.String r2 = r5.getTypeName()     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            java.util.Locale r3 = java.util.Locale.US     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            java.lang.String r2 = r2.toLowerCase(r3)     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            r2 = 0
            if (r1 == 0) goto L52
            com.tkay.expressad.foundation.g.f.c.a r5 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            java.lang.String r1 = "wifi"
            r5.e = r1     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            com.tkay.expressad.foundation.g.f.c.a r5 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            r5.d = r2     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            goto L140
        L52:
            java.lang.String r1 = r5.getExtraInfo()     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            r3 = 1
            if (r1 == 0) goto Lda
            java.lang.String r5 = r5.getExtraInfo()     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            java.util.Locale r1 = java.util.Locale.US     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            java.lang.String r5 = r5.toLowerCase(r1)     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            if (r5 == 0) goto Lda
            java.lang.String r1 = "cmwap"
            boolean r1 = r5.startsWith(r1)     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            if (r1 != 0) goto Lc5
            java.lang.String r1 = "uniwap"
            boolean r1 = r5.startsWith(r1)     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            if (r1 != 0) goto Lc5
            java.lang.String r1 = "3gwap"
            boolean r1 = r5.startsWith(r1)     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            if (r1 == 0) goto L7e
            goto Lc5
        L7e:
            java.lang.String r1 = "ctwap"
            boolean r1 = r5.startsWith(r1)     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            if (r1 == 0) goto L9c
            com.tkay.expressad.foundation.g.f.c.a r1 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            r1.d = r3     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            com.tkay.expressad.foundation.g.f.c.a r1 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            r1.a = r5     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            com.tkay.expressad.foundation.g.f.c.a r5 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            java.lang.String r1 = "10.0.0.200"
            r5.b = r1     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            com.tkay.expressad.foundation.g.f.c.a r5 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            java.lang.String r1 = "80"
            r5.c = r1     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            goto L135
        L9c:
            java.lang.String r1 = "cmnet"
            boolean r1 = r5.startsWith(r1)     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            if (r1 != 0) goto Lbc
            java.lang.String r1 = "uninet"
            boolean r1 = r5.startsWith(r1)     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            if (r1 != 0) goto Lbc
            java.lang.String r1 = "ctnet"
            boolean r1 = r5.startsWith(r1)     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            if (r1 != 0) goto Lbc
            java.lang.String r1 = "3gnet"
            boolean r1 = r5.startsWith(r1)     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            if (r1 == 0) goto Lda
        Lbc:
            com.tkay.expressad.foundation.g.f.c.a r1 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            r1.d = r2     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            com.tkay.expressad.foundation.g.f.c.a r1 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            r1.a = r5     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            goto L135
        Lc5:
            com.tkay.expressad.foundation.g.f.c.a r1 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            r1.d = r3     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            com.tkay.expressad.foundation.g.f.c.a r1 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            r1.a = r5     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            com.tkay.expressad.foundation.g.f.c.a r5 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            java.lang.String r1 = "10.0.0.172"
            r5.b = r1     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            com.tkay.expressad.foundation.g.f.c.a r5 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            java.lang.String r1 = "80"
            r5.c = r1     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            goto L135
        Lda:
            java.lang.String r5 = android.net.Proxy.getDefaultHost()     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            int r1 = android.net.Proxy.getDefaultPort()     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            if (r5 == 0) goto L131
            int r4 = r5.length()     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            if (r4 <= 0) goto L131
            com.tkay.expressad.foundation.g.f.c.a r4 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            r4.b = r5     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            java.lang.String r5 = "10.0.0.172"
            com.tkay.expressad.foundation.g.f.c.a r4 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            java.lang.String r4 = r4.b     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            java.lang.String r4 = r4.trim()     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            boolean r5 = r5.equals(r4)     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            if (r5 == 0) goto L109
            com.tkay.expressad.foundation.g.f.c.a r5 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            r5.d = r3     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            com.tkay.expressad.foundation.g.f.c.a r5 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            java.lang.String r1 = "80"
            r5.c = r1     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            goto L135
        L109:
            java.lang.String r5 = "10.0.0.200"
            com.tkay.expressad.foundation.g.f.c.a r4 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            java.lang.String r4 = r4.b     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            java.lang.String r4 = r4.trim()     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            boolean r5 = r5.equals(r4)     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            if (r5 == 0) goto L124
            com.tkay.expressad.foundation.g.f.c.a r5 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            r5.d = r3     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            com.tkay.expressad.foundation.g.f.c.a r5 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            java.lang.String r1 = "80"
            r5.c = r1     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            goto L135
        L124:
            com.tkay.expressad.foundation.g.f.c.a r5 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            r5.d = r2     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            com.tkay.expressad.foundation.g.f.c.a r5 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            java.lang.String r1 = java.lang.Integer.toString(r1)     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            r5.c = r1     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            goto L135
        L131:
            com.tkay.expressad.foundation.g.f.c.a r5 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            r5.d = r2     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
        L135:
            com.tkay.expressad.foundation.g.f.c.a r5 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            java.lang.String r1 = r5.a     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            r5.e = r1     // Catch: java.lang.Exception -> L13c java.lang.Throwable -> L142
            goto L140
        L13c:
            r5 = move-exception
            r5.getMessage()     // Catch: java.lang.Throwable -> L142
        L140:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L142
            goto L145
        L142:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
        L145:
            com.tkay.expressad.foundation.g.f.g.b r5 = com.tkay.expressad.foundation.g.f.g.b.b
            return r5
    }

    private static void a() {
            java.lang.String r0 = "wifi"
            android.net.ConnectivityManager r1 = com.tkay.expressad.foundation.g.f.g.b.c     // Catch: java.lang.Exception -> L109
            if (r1 != 0) goto L7
            return
        L7:
            android.net.ConnectivityManager r1 = com.tkay.expressad.foundation.g.f.g.b.c     // Catch: java.lang.Exception -> L109
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L109
            if (r1 == 0) goto L108
            java.lang.String r2 = r1.getTypeName()     // Catch: java.lang.Exception -> L109
            java.util.Locale r3 = java.util.Locale.US     // Catch: java.lang.Exception -> L109
            java.lang.String r2 = r2.toLowerCase(r3)     // Catch: java.lang.Exception -> L109
            boolean r2 = r0.equals(r2)     // Catch: java.lang.Exception -> L109
            r3 = 0
            if (r2 == 0) goto L29
            com.tkay.expressad.foundation.g.f.c.a r1 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            r1.e = r0     // Catch: java.lang.Exception -> L109
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            r0.d = r3     // Catch: java.lang.Exception -> L109
            return
        L29:
            java.lang.String r0 = r1.getExtraInfo()     // Catch: java.lang.Exception -> L109
            java.lang.String r2 = "10.0.0.200"
            java.lang.String r4 = "10.0.0.172"
            java.lang.String r5 = "80"
            r6 = 1
            if (r0 == 0) goto Laf
            java.lang.String r0 = r1.getExtraInfo()     // Catch: java.lang.Exception -> L109
            java.util.Locale r1 = java.util.Locale.US     // Catch: java.lang.Exception -> L109
            java.lang.String r0 = r0.toLowerCase(r1)     // Catch: java.lang.Exception -> L109
            if (r0 == 0) goto Laf
            java.lang.String r1 = "cmwap"
            boolean r1 = r0.startsWith(r1)     // Catch: java.lang.Exception -> L109
            if (r1 != 0) goto L9e
            java.lang.String r1 = "uniwap"
            boolean r1 = r0.startsWith(r1)     // Catch: java.lang.Exception -> L109
            if (r1 != 0) goto L9e
            java.lang.String r1 = "3gwap"
            boolean r1 = r0.startsWith(r1)     // Catch: java.lang.Exception -> L109
            if (r1 == 0) goto L5b
            goto L9e
        L5b:
            java.lang.String r1 = "ctwap"
            boolean r1 = r0.startsWith(r1)     // Catch: java.lang.Exception -> L109
            if (r1 == 0) goto L75
            com.tkay.expressad.foundation.g.f.c.a r1 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            r1.d = r6     // Catch: java.lang.Exception -> L109
            com.tkay.expressad.foundation.g.f.c.a r1 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            r1.a = r0     // Catch: java.lang.Exception -> L109
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            r0.b = r2     // Catch: java.lang.Exception -> L109
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            r0.c = r5     // Catch: java.lang.Exception -> L109
            goto L102
        L75:
            java.lang.String r1 = "cmnet"
            boolean r1 = r0.startsWith(r1)     // Catch: java.lang.Exception -> L109
            if (r1 != 0) goto L95
            java.lang.String r1 = "uninet"
            boolean r1 = r0.startsWith(r1)     // Catch: java.lang.Exception -> L109
            if (r1 != 0) goto L95
            java.lang.String r1 = "ctnet"
            boolean r1 = r0.startsWith(r1)     // Catch: java.lang.Exception -> L109
            if (r1 != 0) goto L95
            java.lang.String r1 = "3gnet"
            boolean r1 = r0.startsWith(r1)     // Catch: java.lang.Exception -> L109
            if (r1 == 0) goto Laf
        L95:
            com.tkay.expressad.foundation.g.f.c.a r1 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            r1.d = r3     // Catch: java.lang.Exception -> L109
            com.tkay.expressad.foundation.g.f.c.a r1 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            r1.a = r0     // Catch: java.lang.Exception -> L109
            goto L102
        L9e:
            com.tkay.expressad.foundation.g.f.c.a r1 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            r1.d = r6     // Catch: java.lang.Exception -> L109
            com.tkay.expressad.foundation.g.f.c.a r1 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            r1.a = r0     // Catch: java.lang.Exception -> L109
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            r0.b = r4     // Catch: java.lang.Exception -> L109
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            r0.c = r5     // Catch: java.lang.Exception -> L109
            goto L102
        Laf:
            java.lang.String r0 = android.net.Proxy.getDefaultHost()     // Catch: java.lang.Exception -> L109
            int r1 = android.net.Proxy.getDefaultPort()     // Catch: java.lang.Exception -> L109
            if (r0 == 0) goto Lfe
            int r7 = r0.length()     // Catch: java.lang.Exception -> L109
            if (r7 <= 0) goto Lfe
            com.tkay.expressad.foundation.g.f.c.a r7 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            r7.b = r0     // Catch: java.lang.Exception -> L109
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            java.lang.String r0 = r0.b     // Catch: java.lang.Exception -> L109
            java.lang.String r0 = r0.trim()     // Catch: java.lang.Exception -> L109
            boolean r0 = r4.equals(r0)     // Catch: java.lang.Exception -> L109
            if (r0 == 0) goto Lda
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            r0.d = r6     // Catch: java.lang.Exception -> L109
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            r0.c = r5     // Catch: java.lang.Exception -> L109
            goto L102
        Lda:
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            java.lang.String r0 = r0.b     // Catch: java.lang.Exception -> L109
            java.lang.String r0 = r0.trim()     // Catch: java.lang.Exception -> L109
            boolean r0 = r2.equals(r0)     // Catch: java.lang.Exception -> L109
            if (r0 == 0) goto Lf1
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            r0.d = r6     // Catch: java.lang.Exception -> L109
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            r0.c = r5     // Catch: java.lang.Exception -> L109
            goto L102
        Lf1:
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            r0.d = r3     // Catch: java.lang.Exception -> L109
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            java.lang.String r1 = java.lang.Integer.toString(r1)     // Catch: java.lang.Exception -> L109
            r0.c = r1     // Catch: java.lang.Exception -> L109
            goto L102
        Lfe:
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            r0.d = r3     // Catch: java.lang.Exception -> L109
        L102:
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d     // Catch: java.lang.Exception -> L109
            java.lang.String r1 = r0.a     // Catch: java.lang.Exception -> L109
            r0.e = r1     // Catch: java.lang.Exception -> L109
        L108:
            return
        L109:
            r0 = move-exception
            r0.getMessage()
            return
    }

    private static void a(android.net.NetworkInfo r7) {
            java.lang.String r0 = r7.getExtraInfo()
            java.lang.String r1 = "10.0.0.200"
            java.lang.String r2 = "10.0.0.172"
            r3 = 0
            java.lang.String r4 = "80"
            r5 = 1
            if (r0 == 0) goto L86
            java.lang.String r7 = r7.getExtraInfo()
            java.util.Locale r0 = java.util.Locale.US
            java.lang.String r7 = r7.toLowerCase(r0)
            if (r7 == 0) goto L86
            java.lang.String r0 = "cmwap"
            boolean r0 = r7.startsWith(r0)
            if (r0 != 0) goto L75
            java.lang.String r0 = "uniwap"
            boolean r0 = r7.startsWith(r0)
            if (r0 != 0) goto L75
            java.lang.String r0 = "3gwap"
            boolean r0 = r7.startsWith(r0)
            if (r0 == 0) goto L33
            goto L75
        L33:
            java.lang.String r0 = "ctwap"
            boolean r0 = r7.startsWith(r0)
            if (r0 == 0) goto L4c
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d
            r0.d = r5
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d
            r0.a = r7
            com.tkay.expressad.foundation.g.f.c.a r7 = com.tkay.expressad.foundation.g.f.g.b.d
            r7.b = r1
            com.tkay.expressad.foundation.g.f.c.a r7 = com.tkay.expressad.foundation.g.f.g.b.d
            r7.c = r4
            return
        L4c:
            java.lang.String r0 = "cmnet"
            boolean r0 = r7.startsWith(r0)
            if (r0 != 0) goto L6c
            java.lang.String r0 = "uninet"
            boolean r0 = r7.startsWith(r0)
            if (r0 != 0) goto L6c
            java.lang.String r0 = "ctnet"
            boolean r0 = r7.startsWith(r0)
            if (r0 != 0) goto L6c
            java.lang.String r0 = "3gnet"
            boolean r0 = r7.startsWith(r0)
            if (r0 == 0) goto L86
        L6c:
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d
            r0.d = r3
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d
            r0.a = r7
            return
        L75:
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d
            r0.d = r5
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d
            r0.a = r7
            com.tkay.expressad.foundation.g.f.c.a r7 = com.tkay.expressad.foundation.g.f.g.b.d
            r7.b = r2
            com.tkay.expressad.foundation.g.f.c.a r7 = com.tkay.expressad.foundation.g.f.g.b.d
            r7.c = r4
            return
        L86:
            java.lang.String r7 = android.net.Proxy.getDefaultHost()
            int r0 = android.net.Proxy.getDefaultPort()
            if (r7 == 0) goto Ld5
            int r6 = r7.length()
            if (r6 <= 0) goto Ld5
            com.tkay.expressad.foundation.g.f.c.a r6 = com.tkay.expressad.foundation.g.f.g.b.d
            r6.b = r7
            com.tkay.expressad.foundation.g.f.c.a r7 = com.tkay.expressad.foundation.g.f.g.b.d
            java.lang.String r7 = r7.b
            java.lang.String r7 = r7.trim()
            boolean r7 = r2.equals(r7)
            if (r7 == 0) goto Lb1
            com.tkay.expressad.foundation.g.f.c.a r7 = com.tkay.expressad.foundation.g.f.g.b.d
            r7.d = r5
            com.tkay.expressad.foundation.g.f.c.a r7 = com.tkay.expressad.foundation.g.f.g.b.d
            r7.c = r4
            return
        Lb1:
            com.tkay.expressad.foundation.g.f.c.a r7 = com.tkay.expressad.foundation.g.f.g.b.d
            java.lang.String r7 = r7.b
            java.lang.String r7 = r7.trim()
            boolean r7 = r1.equals(r7)
            if (r7 == 0) goto Lc8
            com.tkay.expressad.foundation.g.f.c.a r7 = com.tkay.expressad.foundation.g.f.g.b.d
            r7.d = r5
            com.tkay.expressad.foundation.g.f.c.a r7 = com.tkay.expressad.foundation.g.f.g.b.d
            r7.c = r4
            return
        Lc8:
            com.tkay.expressad.foundation.g.f.c.a r7 = com.tkay.expressad.foundation.g.f.g.b.d
            r7.d = r3
            com.tkay.expressad.foundation.g.f.c.a r7 = com.tkay.expressad.foundation.g.f.g.b.d
            java.lang.String r0 = java.lang.Integer.toString(r0)
            r7.c = r0
            return
        Ld5:
            com.tkay.expressad.foundation.g.f.c.a r7 = com.tkay.expressad.foundation.g.f.g.b.d
            r7.d = r3
            return
    }

    private static com.tkay.expressad.foundation.g.f.c.a b() {
            com.tkay.expressad.foundation.g.f.c.a r0 = com.tkay.expressad.foundation.g.f.g.b.d
            return r0
    }
}
