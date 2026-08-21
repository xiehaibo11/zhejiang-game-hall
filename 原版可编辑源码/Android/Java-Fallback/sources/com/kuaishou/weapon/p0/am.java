package com.kuaishou.weapon.p0;

public class am {
    private static final java.lang.String a = "tun";
    private static final java.lang.String b = "ppp";
    private static int c;

    public am() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.json.JSONArray a() {
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            r1 = 0
            java.lang.Runtime r2 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L6b
            java.lang.String r3 = "cat /proc/net/route"
            java.lang.Process r2 = r2.exec(r3)     // Catch: java.lang.Throwable -> L6b
            java.io.DataInputStream r3 = new java.io.DataInputStream     // Catch: java.lang.Throwable -> L6b
            java.io.InputStream r2 = r2.getInputStream()     // Catch: java.lang.Throwable -> L6b
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L6b
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L68
            java.io.InputStreamReader r4 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L68
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L68
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L68
            java.util.HashSet r1 = new java.util.HashSet     // Catch: java.lang.Throwable -> L69
            r1.<init>()     // Catch: java.lang.Throwable -> L69
        L28:
            java.lang.String r4 = r2.readLine()     // Catch: java.lang.Throwable -> L69
            if (r4 == 0) goto L4f
            java.lang.String r4 = com.kuaishou.weapon.p0.bn.a(r4)     // Catch: java.lang.Throwable -> L69
            java.lang.String r5 = "tun"
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Throwable -> L69
            if (r5 != 0) goto L42
            java.lang.String r5 = "ppp"
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Throwable -> L69
            if (r5 == 0) goto L28
        L42:
            java.lang.String r5 = "\t"
            java.lang.String[] r4 = r4.split(r5)     // Catch: java.lang.Throwable -> L69
            r5 = 0
            r4 = r4[r5]     // Catch: java.lang.Throwable -> L69
            r1.add(r4)     // Catch: java.lang.Throwable -> L69
            goto L28
        L4f:
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L69
        L53:
            boolean r4 = r1.hasNext()     // Catch: java.lang.Throwable -> L69
            if (r4 == 0) goto L61
            java.lang.Object r4 = r1.next()     // Catch: java.lang.Throwable -> L69
            r0.put(r4)     // Catch: java.lang.Throwable -> L69
            goto L53
        L61:
            r3.close()     // Catch: java.io.IOException -> L64
        L64:
            r2.close()     // Catch: java.io.IOException -> L74
            goto L74
        L68:
            r2 = r1
        L69:
            r1 = r3
            goto L6c
        L6b:
            r2 = r1
        L6c:
            if (r1 == 0) goto L71
            r1.close()     // Catch: java.io.IOException -> L71
        L71:
            if (r2 == 0) goto L74
            goto L64
        L74:
            return r0
    }

    public static boolean a(android.content.Context r3) {
            r0 = 0
            java.lang.String r1 = "connectivity"
            java.lang.Object r3 = r3.getSystemService(r1)     // Catch: java.lang.Throwable -> L31
            android.net.ConnectivityManager r3 = (android.net.ConnectivityManager) r3     // Catch: java.lang.Throwable -> L31
            if (r3 != 0) goto Lc
            return r0
        Lc:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L31
            r2 = 21
            if (r1 < r2) goto L26
            android.net.Network r1 = r3.getActiveNetwork()     // Catch: java.lang.Throwable -> L31
            android.net.NetworkCapabilities r3 = r3.getNetworkCapabilities(r1)     // Catch: java.lang.Throwable -> L31
            if (r3 == 0) goto L25
            r1 = 4
            boolean r3 = r3.hasTransport(r1)     // Catch: java.lang.Throwable -> L31
            if (r3 == 0) goto L25
            r3 = 1
            return r3
        L25:
            return r0
        L26:
            r1 = 17
            android.net.NetworkInfo r3 = r3.getNetworkInfo(r1)     // Catch: java.lang.Throwable -> L31
            boolean r3 = r3.isConnectedOrConnecting()     // Catch: java.lang.Throwable -> L31
            return r3
        L31:
            return r0
    }

    public static java.lang.String b() {
            java.lang.String r0 = "http.proxyHost"
            java.lang.String r0 = java.lang.System.getProperty(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Le
            java.lang.String r0 = ""
        Le:
            return r0
    }

    public static java.lang.String b(android.content.Context r2) {
            java.lang.String r0 = ""
            org.json.JSONArray r1 = a()     // Catch: java.lang.Throwable -> L16
            if (r1 == 0) goto Ld
            java.lang.String r2 = r1.toString()     // Catch: java.lang.Throwable -> L16
            return r2
        Ld:
            boolean r2 = a(r2)     // Catch: java.lang.Throwable -> L16
            if (r2 == 0) goto L16
            java.lang.String r2 = "[\"con\"]"
            return r2
        L16:
            return r0
    }

    public static int c() {
            int r0 = com.kuaishou.weapon.p0.am.c
            return r0
    }

    public static java.lang.String d() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
            com.kuaishou.weapon.p0.am.c = r1     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r1 = "AndroidCAStore"
            java.security.KeyStore r1 = java.security.KeyStore.getInstance(r1)     // Catch: java.lang.Throwable -> Ld1
            if (r1 == 0) goto Lc2
            r2 = 0
            r1.load(r2, r2)     // Catch: java.lang.Throwable -> Ld1
            java.util.Enumeration r2 = r1.aliases()     // Catch: java.lang.Throwable -> Ld1
        L18:
            boolean r3 = r2.hasMoreElements()     // Catch: java.lang.Throwable -> Ld1
            if (r3 == 0) goto Lc2
            int r3 = com.kuaishou.weapon.p0.am.c     // Catch: java.lang.Throwable -> Ld1
            int r3 = r3 + 1
            com.kuaishou.weapon.p0.am.c = r3     // Catch: java.lang.Throwable -> Ld1
            java.lang.Object r3 = r2.nextElement()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> Ld1
            java.security.cert.Certificate r3 = r1.getCertificate(r3)     // Catch: java.lang.Throwable -> Ld1
            java.security.cert.X509Certificate r3 = (java.security.cert.X509Certificate) r3     // Catch: java.lang.Throwable -> Ld1
            java.security.Principal r4 = r3.getIssuerDN()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r5 = "2022"
            boolean r4 = r4.contains(r5)     // Catch: java.lang.Throwable -> Ld1
            if (r4 != 0) goto Lb0
            java.security.Principal r4 = r3.getIssuerDN()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r5 = "2023"
            boolean r4 = r4.contains(r5)     // Catch: java.lang.Throwable -> Ld1
            if (r4 != 0) goto Lb0
            java.security.Principal r4 = r3.getIssuerDN()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r5 = "HttpCanary"
            boolean r4 = r4.contains(r5)     // Catch: java.lang.Throwable -> Ld1
            if (r4 != 0) goto Lb0
            java.security.Principal r4 = r3.getIssuerDN()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r5 = "macbook"
            boolean r4 = r4.contains(r5)     // Catch: java.lang.Throwable -> Ld1
            if (r4 != 0) goto Lb0
            java.security.Principal r4 = r3.getIssuerDN()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r5 = "proxy"
            boolean r4 = r4.contains(r5)     // Catch: java.lang.Throwable -> Ld1
            if (r4 != 0) goto Lb0
            java.security.Principal r4 = r3.getIssuerDN()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r5 = "Proxy"
            boolean r4 = r4.contains(r5)     // Catch: java.lang.Throwable -> Ld1
            if (r4 != 0) goto Lb0
            java.security.Principal r4 = r3.getIssuerDN()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r5 = "local"
            boolean r4 = r4.contains(r5)     // Catch: java.lang.Throwable -> Ld1
            if (r4 != 0) goto Lb0
            java.security.Principal r4 = r3.getIssuerDN()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r5 = "github"
            boolean r4 = r4.contains(r5)     // Catch: java.lang.Throwable -> Ld1
            if (r4 == 0) goto L18
        Lb0:
            java.security.Principal r3 = r3.getIssuerDN()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Throwable -> Ld1
            r0.append(r3)     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r3 = "|"
            r0.append(r3)     // Catch: java.lang.Throwable -> Ld1
            goto L18
        Lc2:
            int r1 = r0.length()     // Catch: java.lang.Throwable -> Ld1
            if (r1 <= 0) goto Ld1
            int r1 = r0.length()     // Catch: java.lang.Throwable -> Ld1
            int r1 = r1 + (-1)
            r0.deleteCharAt(r1)     // Catch: java.lang.Throwable -> Ld1
        Ld1:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
