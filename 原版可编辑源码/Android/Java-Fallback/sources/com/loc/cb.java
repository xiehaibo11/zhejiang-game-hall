package com.loc;

public final class cb {
    public static com.loc.bv a(java.lang.ref.WeakReference<com.loc.bv> r1) {
            if (r1 == 0) goto L8
            java.lang.Object r0 = r1.get()
            if (r0 != 0) goto L12
        L8:
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            com.loc.bv r0 = new com.loc.bv
            r0.<init>()
            r1.<init>(r0)
        L12:
            java.lang.Object r1 = r1.get()
            com.loc.bv r1 = (com.loc.bv) r1
            return r1
    }

    public static java.lang.String a() {
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r0 = com.loc.x.a(r0)
            return r0
    }

    public static java.lang.String a(android.content.Context r3, com.loc.w r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.loc.o.e()     // Catch: java.lang.Throwable -> L6b
            java.lang.String r2 = "\"sim\":\""
            r0.append(r2)     // Catch: java.lang.Throwable -> L6b
            r0.append(r1)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r1 = "\",\"sdkversion\":\""
            r0.append(r1)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r1 = r4.c()     // Catch: java.lang.Throwable -> L6b
            r0.append(r1)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r1 = "\",\"product\":\""
            r0.append(r1)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r1 = r4.a()     // Catch: java.lang.Throwable -> L6b
            r0.append(r1)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r1 = "\",\"ed\":\""
            r0.append(r1)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r4 = r4.d()     // Catch: java.lang.Throwable -> L6b
            r0.append(r4)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r4 = "\",\"nt\":\""
            r0.append(r4)     // Catch: java.lang.Throwable -> L6b
            int r4 = com.loc.o.c(r3)     // Catch: java.lang.Throwable -> L6b
            r0.append(r4)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r4 = "\",\"np\":\""
            r0.append(r4)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r4 = com.loc.o.b(r3)     // Catch: java.lang.Throwable -> L6b
            r0.append(r4)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r4 = "\",\"mnc\":\""
            r0.append(r4)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r4 = com.loc.o.d()     // Catch: java.lang.Throwable -> L6b
            r0.append(r4)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r4 = "\",\"ant\":\""
            r0.append(r4)     // Catch: java.lang.Throwable -> L6b
            int r3 = com.loc.o.d(r3)     // Catch: java.lang.Throwable -> L6b
            r0.append(r3)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r3 = "\""
            r0.append(r3)     // Catch: java.lang.Throwable -> L6b
            goto L6f
        L6b:
            r3 = move-exception
            r3.printStackTrace()
        L6f:
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static java.lang.String a(java.lang.String r1, java.lang.String r2, int r3, java.lang.String r4, java.lang.String r5) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = ",\"timestamp\":\""
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = "\",\"et\":\""
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = "\",\"classname\":\""
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = "\","
            r0.append(r1)
            java.lang.String r1 = "\"detail\":\""
            r0.append(r1)
            r0.append(r5)
            java.lang.String r1 = "\""
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static void a(android.content.Context r0, com.loc.bv r1, java.lang.String r2, int r3, int r4, java.lang.String r5) {
            java.lang.String r0 = com.loc.at.c(r0, r2)
            r1.a = r0
            r1.d = r3
            long r2 = (long) r4
            r1.b = r2
            r1.c = r5
            return
    }

    static byte[] a(com.loc.bl r4, java.lang.String r5) {
            r0 = 0
            byte[] r0 = new byte[r0]
            r1 = 0
            com.loc.bl$b r4 = r4.a(r5)     // Catch: java.lang.Throwable -> L50
            if (r4 == 0) goto L45
            java.io.InputStream r1 = r4.a()     // Catch: java.lang.Throwable -> L43
            if (r1 != 0) goto L25
            if (r1 == 0) goto L1a
            r1.close()     // Catch: java.lang.Throwable -> L16
            goto L1a
        L16:
            r5 = move-exception
            r5.printStackTrace()
        L1a:
            if (r4 == 0) goto L24
            r4.close()     // Catch: java.lang.Throwable -> L20
            goto L24
        L20:
            r4 = move-exception
            r4.printStackTrace()
        L24:
            return r0
        L25:
            int r5 = r1.available()     // Catch: java.lang.Throwable -> L43
            byte[] r0 = new byte[r5]     // Catch: java.lang.Throwable -> L43
            r1.read(r0)     // Catch: java.lang.Throwable -> L43
            if (r1 == 0) goto L38
            r1.close()     // Catch: java.lang.Throwable -> L34
            goto L38
        L34:
            r5 = move-exception
            r5.printStackTrace()
        L38:
            if (r4 == 0) goto L42
            r4.close()     // Catch: java.lang.Throwable -> L3e
            goto L42
        L3e:
            r4 = move-exception
            r4.printStackTrace()
        L42:
            return r0
        L43:
            r5 = move-exception
            goto L52
        L45:
            if (r4 == 0) goto L4f
            r4.close()     // Catch: java.lang.Throwable -> L4b
            goto L4f
        L4b:
            r4 = move-exception
            r4.printStackTrace()
        L4f:
            return r0
        L50:
            r5 = move-exception
            r4 = r1
        L52:
            java.lang.String r2 = "sui"
            java.lang.String r3 = "rdS"
            com.loc.av.b(r5, r2, r3)     // Catch: java.lang.Throwable -> L6e
            if (r1 == 0) goto L63
            r1.close()     // Catch: java.lang.Throwable -> L5f
            goto L63
        L5f:
            r5 = move-exception
            r5.printStackTrace()
        L63:
            if (r4 == 0) goto L6d
            r4.close()     // Catch: java.lang.Throwable -> L69
            goto L6d
        L69:
            r4 = move-exception
            r4.printStackTrace()
        L6d:
            return r0
        L6e:
            r5 = move-exception
            if (r1 == 0) goto L79
            r1.close()     // Catch: java.lang.Throwable -> L75
            goto L79
        L75:
            r0 = move-exception
            r0.printStackTrace()
        L79:
            if (r4 == 0) goto L83
            r4.close()     // Catch: java.lang.Throwable -> L7f
            goto L83
        L7f:
            r4 = move-exception
            r4.printStackTrace()
        L83:
            throw r5
    }
}
