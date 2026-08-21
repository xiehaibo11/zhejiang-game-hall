package com.huawei.agconnect.config.a;

public final class j {
    public static com.huawei.agconnect.AGCRoutePolicy a(java.lang.String r6, java.lang.String r7) {
            if (r6 == 0) goto L57
            r0 = -1
            int r1 = r6.hashCode()
            r2 = 2155(0x86b, float:3.02E-42)
            r3 = 3
            r4 = 2
            r5 = 1
            if (r1 == r2) goto L39
            r2 = 2177(0x881, float:3.05E-42)
            if (r1 == r2) goto L2f
            r2 = 2627(0xa43, float:3.681E-42)
            if (r1 == r2) goto L25
            r2 = 2644(0xa54, float:3.705E-42)
            if (r1 == r2) goto L1b
            goto L42
        L1b:
            java.lang.String r1 = "SG"
            boolean r6 = r6.equals(r1)
            if (r6 == 0) goto L42
            r0 = r3
            goto L42
        L25:
            java.lang.String r1 = "RU"
            boolean r6 = r6.equals(r1)
            if (r6 == 0) goto L42
            r0 = r4
            goto L42
        L2f:
            java.lang.String r1 = "DE"
            boolean r6 = r6.equals(r1)
            if (r6 == 0) goto L42
            r0 = r5
            goto L42
        L39:
            java.lang.String r1 = "CN"
            boolean r6 = r6.equals(r1)
            if (r6 == 0) goto L42
            r0 = 0
        L42:
            if (r0 == 0) goto L54
            if (r0 == r5) goto L51
            if (r0 == r4) goto L4e
            if (r0 == r3) goto L4b
            goto L57
        L4b:
            com.huawei.agconnect.AGCRoutePolicy r6 = com.huawei.agconnect.AGCRoutePolicy.SINGAPORE
            return r6
        L4e:
            com.huawei.agconnect.AGCRoutePolicy r6 = com.huawei.agconnect.AGCRoutePolicy.RUSSIA
            return r6
        L51:
            com.huawei.agconnect.AGCRoutePolicy r6 = com.huawei.agconnect.AGCRoutePolicy.GERMANY
            return r6
        L54:
            com.huawei.agconnect.AGCRoutePolicy r6 = com.huawei.agconnect.AGCRoutePolicy.CHINA
            return r6
        L57:
            if (r7 == 0) goto L85
            java.lang.String r6 = "connect-drcn"
            boolean r6 = r7.contains(r6)
            if (r6 == 0) goto L64
            com.huawei.agconnect.AGCRoutePolicy r6 = com.huawei.agconnect.AGCRoutePolicy.CHINA
            return r6
        L64:
            java.lang.String r6 = "connect-dre"
            boolean r6 = r7.contains(r6)
            if (r6 == 0) goto L6f
            com.huawei.agconnect.AGCRoutePolicy r6 = com.huawei.agconnect.AGCRoutePolicy.GERMANY
            return r6
        L6f:
            java.lang.String r6 = "connect-drru"
            boolean r6 = r7.contains(r6)
            if (r6 == 0) goto L7a
            com.huawei.agconnect.AGCRoutePolicy r6 = com.huawei.agconnect.AGCRoutePolicy.RUSSIA
            return r6
        L7a:
            java.lang.String r6 = "connect-dra"
            boolean r6 = r7.contains(r6)
            if (r6 == 0) goto L85
            com.huawei.agconnect.AGCRoutePolicy r6 = com.huawei.agconnect.AGCRoutePolicy.SINGAPORE
            return r6
        L85:
            com.huawei.agconnect.AGCRoutePolicy r6 = com.huawei.agconnect.AGCRoutePolicy.UNKNOWN
            return r6
    }

    public static java.lang.String a(java.io.InputStream r2, java.lang.String r3) throws java.io.UnsupportedEncodingException, java.io.IOException {
            java.io.StringWriter r0 = new java.io.StringWriter
            r0.<init>()
            java.io.InputStreamReader r1 = new java.io.InputStreamReader
            r1.<init>(r2, r3)
            a(r1, r0)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static java.lang.String a(java.lang.String r3) {
            int r0 = r3.length()
            r1 = 0
            if (r0 <= 0) goto L12
        L7:
            char r0 = r3.charAt(r1)
            r2 = 47
            if (r0 != r2) goto L12
            int r1 = r1 + 1
            goto L7
        L12:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "/"
            r0.append(r2)
            java.lang.String r3 = r3.substring(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static java.util.Map<java.lang.String, java.lang.String> a(java.util.Map<java.lang.String, java.lang.String> r3) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        Ld:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L2b
            java.lang.Object r1 = r3.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r2 = a(r2)
            java.lang.Object r1 = r1.getValue()
            r0.put(r2, r1)
            goto Ld
        L2b:
            return r0
    }

    public static void a(java.io.Closeable r1) {
            if (r1 == 0) goto Ld
            r1.close()     // Catch: java.io.IOException -> L6
            goto Ld
        L6:
            java.lang.String r1 = "Utils"
            java.lang.String r0 = "Exception when closing the 'Closeable'."
            android.util.Log.e(r1, r0)
        Ld:
            return
    }

    public static void a(java.io.Reader r1, java.io.Writer r2) throws java.io.IOException {
            r0 = 4096(0x1000, float:5.74E-42)
            char[] r0 = new char[r0]
            a(r1, r2, r0)
            return
    }

    public static void a(java.io.Reader r2, java.io.Writer r3, char[] r4) throws java.io.IOException {
        L0:
            int r0 = r2.read(r4)
            r1 = -1
            if (r1 == r0) goto Lc
            r1 = 0
            r3.write(r4, r1, r0)
            goto L0
        Lc:
            return
    }
}
