package com.loc;

public final class v {
    private static java.lang.String a() {
            java.lang.String r0 = android.net.Proxy.getDefaultHost()     // Catch: java.lang.Throwable -> L5
            goto Le
        L5:
            r0 = move-exception
            java.lang.String r1 = "pu"
            java.lang.String r2 = "gdh"
            com.loc.av.b(r0, r1, r2)
            r0 = 0
        Le:
            if (r0 != 0) goto L12
            java.lang.String r0 = "null"
        L12:
            return r0
    }

    private static java.lang.String a(java.lang.String r0) {
            java.lang.String r0 = com.loc.x.c(r0)
            return r0
    }

    public static java.net.Proxy a(android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L17
            r1 = 11
            if (r0 < r1) goto L12
            java.net.URI r0 = new java.net.URI     // Catch: java.lang.Throwable -> L17
            java.lang.String r1 = "http://restsdk.amap.com"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L17
            java.net.Proxy r2 = a(r2, r0)     // Catch: java.lang.Throwable -> L17
            goto L20
        L12:
            java.net.Proxy r2 = b(r2)     // Catch: java.lang.Throwable -> L17
            goto L20
        L17:
            r2 = move-exception
            java.lang.String r0 = "pu"
            java.lang.String r1 = "gp"
            com.loc.av.b(r2, r0, r1)
            r2 = 0
        L20:
            return r2
    }

    private static java.net.Proxy a(android.content.Context r2, java.net.URI r3) {
            boolean r2 = c(r2)
            r0 = 0
            if (r2 == 0) goto L33
            java.net.ProxySelector r2 = java.net.ProxySelector.getDefault()     // Catch: java.lang.Throwable -> L2b
            java.util.List r2 = r2.select(r3)     // Catch: java.lang.Throwable -> L2b
            if (r2 == 0) goto L2a
            boolean r3 = r2.isEmpty()     // Catch: java.lang.Throwable -> L2b
            if (r3 != 0) goto L2a
            r3 = 0
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L2b
            java.net.Proxy r2 = (java.net.Proxy) r2     // Catch: java.lang.Throwable -> L2b
            if (r2 == 0) goto L2a
            java.net.Proxy$Type r3 = r2.type()     // Catch: java.lang.Throwable -> L2b
            java.net.Proxy$Type r1 = java.net.Proxy.Type.DIRECT     // Catch: java.lang.Throwable -> L2b
            if (r3 != r1) goto L29
            goto L2a
        L29:
            r0 = r2
        L2a:
            return r0
        L2b:
            r2 = move-exception
            java.lang.String r3 = "pu"
            java.lang.String r1 = "gpsc"
            com.loc.av.b(r2, r3, r1)
        L33:
            return r0
    }

    private static int b() {
            int r0 = android.net.Proxy.getDefaultPort()     // Catch: java.lang.Throwable -> L5
            goto Le
        L5:
            r0 = move-exception
            java.lang.String r1 = "pu"
            java.lang.String r2 = "gdp"
            com.loc.av.b(r0, r1, r2)
            r0 = -1
        Le:
            return r0
    }

    private static java.net.Proxy b(android.content.Context r19) {
            java.lang.String r1 = "QMTAuMC4wLjE3Mg=="
            java.lang.String r2 = "QMTAuMC4wLjIwMA=="
            java.lang.String r3 = "wap"
            java.lang.String r4 = "ctwap"
            java.lang.String r5 = "null"
            java.lang.String r6 = "gPx2"
            java.lang.String r7 = "pu"
            boolean r0 = c(r19)
            r8 = 0
            if (r0 == 0) goto L17f
            java.lang.String r0 = "content://telephony/carriers/preferapn"
            android.net.Uri r10 = android.net.Uri.parse(r0)
            android.content.ContentResolver r9 = r19.getContentResolver()
            r11 = 0
            r12 = 0
            r13 = 0
            r14 = 0
            r16 = 0
            r17 = 1
            r15 = -1
            android.database.Cursor r9 = r9.query(r10, r11, r12, r13, r14)     // Catch: java.lang.Throwable -> Lc6 java.lang.SecurityException -> Le0
            if (r9 == 0) goto Lb4
            boolean r0 = r9.moveToFirst()     // Catch: java.lang.Throwable -> Lae java.lang.SecurityException -> Lb1
            if (r0 == 0) goto Lb4
            java.lang.String r0 = "apn"
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Throwable -> Lae java.lang.SecurityException -> Lb1
            java.lang.String r0 = r9.getString(r0)     // Catch: java.lang.Throwable -> Lae java.lang.SecurityException -> Lb1
            if (r0 == 0) goto L46
            java.util.Locale r10 = java.util.Locale.US     // Catch: java.lang.Throwable -> Lae java.lang.SecurityException -> Lb1
            java.lang.String r0 = r0.toLowerCase(r10)     // Catch: java.lang.Throwable -> Lae java.lang.SecurityException -> Lb1
        L46:
            if (r0 == 0) goto L7e
            boolean r10 = r0.contains(r4)     // Catch: java.lang.Throwable -> Lae java.lang.SecurityException -> Lb1
            if (r10 == 0) goto L7e
            java.lang.String r0 = a()     // Catch: java.lang.Throwable -> Lae java.lang.SecurityException -> Lb1
            int r10 = b()     // Catch: java.lang.Throwable -> Lae java.lang.SecurityException -> Lb1
            boolean r11 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L77 java.lang.SecurityException -> L7a
            if (r11 != 0) goto L65
            boolean r11 = r0.equals(r5)     // Catch: java.lang.Throwable -> L77 java.lang.SecurityException -> L7a
            if (r11 != 0) goto L65
            r11 = r0
            r0 = 1
            goto L67
        L65:
            r11 = r8
            r0 = 0
        L67:
            if (r0 != 0) goto L74
            java.lang.String r11 = a(r2)     // Catch: java.lang.Throwable -> L6e java.lang.SecurityException -> L71
            goto L74
        L6e:
            r0 = move-exception
            goto Lca
        L71:
            r0 = move-exception
            goto Le4
        L74:
            if (r10 != r15) goto Lab
            goto La8
        L77:
            r0 = move-exception
            r11 = r8
            goto Lca
        L7a:
            r0 = move-exception
            r11 = r8
            goto Le4
        L7e:
            if (r0 == 0) goto Lb4
            boolean r0 = r0.contains(r3)     // Catch: java.lang.Throwable -> Lae java.lang.SecurityException -> Lb1
            if (r0 == 0) goto Lb4
            java.lang.String r0 = a()     // Catch: java.lang.Throwable -> Lae java.lang.SecurityException -> Lb1
            int r10 = b()     // Catch: java.lang.Throwable -> Lae java.lang.SecurityException -> Lb1
            boolean r11 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L77 java.lang.SecurityException -> L7a
            if (r11 != 0) goto L9d
            boolean r11 = r0.equals(r5)     // Catch: java.lang.Throwable -> L77 java.lang.SecurityException -> L7a
            if (r11 != 0) goto L9d
            r11 = r0
            r0 = 1
            goto L9f
        L9d:
            r11 = r8
            r0 = 0
        L9f:
            if (r0 != 0) goto La6
            java.lang.String r0 = a(r1)     // Catch: java.lang.Throwable -> L6e java.lang.SecurityException -> L71
            r11 = r0
        La6:
            if (r10 != r15) goto Lab
        La8:
            r18 = 80
            goto Lb7
        Lab:
            r18 = r10
            goto Lb7
        Lae:
            r0 = move-exception
            r11 = r8
            goto Lc9
        Lb1:
            r0 = move-exception
            r11 = r8
            goto Le3
        Lb4:
            r11 = r8
            r18 = -1
        Lb7:
            if (r9 == 0) goto Lc2
            r9.close()     // Catch: java.lang.Throwable -> Lbd
            goto Lc2
        Lbd:
            r0 = move-exception
            r1 = r0
        Lbf:
            com.loc.av.b(r1, r7, r6)
        Lc2:
            r10 = r18
            goto L14b
        Lc6:
            r0 = move-exception
            r9 = r8
            r11 = r9
        Lc9:
            r10 = -1
        Lca:
            java.lang.String r1 = "gPx1"
            com.loc.av.b(r0, r7, r1)     // Catch: java.lang.Throwable -> L171
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L171
            if (r9 == 0) goto L14b
            r9.close()     // Catch: java.lang.Throwable -> Ld9
            goto L14b
        Ld9:
            r0 = move-exception
            r1 = r0
            com.loc.av.b(r1, r7, r6)
            goto L14b
        Le0:
            r0 = move-exception
            r9 = r8
            r11 = r9
        Le3:
            r10 = -1
        Le4:
            java.lang.String r12 = "ghp"
            com.loc.av.b(r0, r7, r12)     // Catch: java.lang.Throwable -> L171
            java.lang.String r0 = com.loc.o.l(r19)     // Catch: java.lang.Throwable -> L171
            if (r0 == 0) goto L13e
            java.util.Locale r10 = java.util.Locale.US     // Catch: java.lang.Throwable -> L171
            java.lang.String r0 = r0.toLowerCase(r10)     // Catch: java.lang.Throwable -> L171
            java.lang.String r10 = a()     // Catch: java.lang.Throwable -> L171
            int r12 = b()     // Catch: java.lang.Throwable -> L171
            int r4 = r0.indexOf(r4)     // Catch: java.lang.Throwable -> L171
            if (r4 == r15) goto L11e
            boolean r0 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L171
            if (r0 != 0) goto L112
            boolean r0 = r10.equals(r5)     // Catch: java.lang.Throwable -> L171
            if (r0 != 0) goto L112
            r11 = r10
            r0 = 1
            goto L113
        L112:
            r0 = 0
        L113:
            if (r0 != 0) goto L119
            java.lang.String r11 = a(r2)     // Catch: java.lang.Throwable -> L171
        L119:
            if (r12 != r15) goto L13b
        L11b:
            r18 = 80
            goto L140
        L11e:
            int r0 = r0.indexOf(r3)     // Catch: java.lang.Throwable -> L171
            if (r0 == r15) goto L13b
            boolean r0 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L171
            if (r0 != 0) goto L133
            boolean r0 = r10.equals(r5)     // Catch: java.lang.Throwable -> L171
            if (r0 != 0) goto L133
            r11 = r10
            r0 = 1
            goto L134
        L133:
            r0 = 0
        L134:
            if (r0 != 0) goto L11b
            java.lang.String r11 = a(r1)     // Catch: java.lang.Throwable -> L171
            goto L11b
        L13b:
            r18 = r12
            goto L140
        L13e:
            r18 = r10
        L140:
            if (r9 == 0) goto Lc2
            r9.close()     // Catch: java.lang.Throwable -> L147
            goto Lc2
        L147:
            r0 = move-exception
            r1 = r0
            goto Lbf
        L14b:
            if (r11 == 0) goto L15a
            int r0 = r11.length()     // Catch: java.lang.Throwable -> L158
            if (r0 <= 0) goto L15a
            if (r10 == r15) goto L15a
            r16 = 1
            goto L15a
        L158:
            r0 = move-exception
            goto L168
        L15a:
            if (r16 == 0) goto L17f
            java.net.Proxy r0 = new java.net.Proxy     // Catch: java.lang.Throwable -> L158
            java.net.Proxy$Type r1 = java.net.Proxy.Type.HTTP     // Catch: java.lang.Throwable -> L158
            java.net.InetSocketAddress r2 = java.net.InetSocketAddress.createUnresolved(r11, r10)     // Catch: java.lang.Throwable -> L158
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L158
            return r0
        L168:
            java.lang.String r1 = "gp2"
            com.loc.as.a(r0, r7, r1)
            r0.printStackTrace()
            goto L17f
        L171:
            r0 = move-exception
            r1 = r0
            if (r9 == 0) goto L17e
            r9.close()     // Catch: java.lang.Throwable -> L179
            goto L17e
        L179:
            r0 = move-exception
            r2 = r0
            com.loc.av.b(r2, r7, r6)
        L17e:
            throw r1
        L17f:
            return r8
    }

    private static boolean c(android.content.Context r0) {
            int r0 = com.loc.o.j(r0)
            if (r0 != 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }
}
