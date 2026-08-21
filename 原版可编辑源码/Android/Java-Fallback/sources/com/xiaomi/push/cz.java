package com.xiaomi.push;

public abstract class cz {

    public class a extends com.xiaomi.push.cy {
        public a() {
                r1 = this;
                r0 = 1
                r1.<init>(r0)
                return
        }

        @Override
        public java.lang.String a(android.content.Context r3, java.lang.String r4, java.util.List<com.xiaomi.push.bi> r5) {
                r2 = this;
                if (r5 != 0) goto Lc
                java.net.URL r5 = new java.net.URL
                r5.<init>(r4)
            L7:
                java.lang.String r3 = com.xiaomi.push.bj.a(r3, r5)
                return r3
            Lc:
                android.net.Uri r4 = android.net.Uri.parse(r4)
                android.net.Uri$Builder r4 = r4.buildUpon()
                java.util.Iterator r5 = r5.iterator()
            L18:
                boolean r0 = r5.hasNext()
                if (r0 == 0) goto L30
                java.lang.Object r0 = r5.next()
                com.xiaomi.push.bi r0 = (com.xiaomi.push.bi) r0
                java.lang.String r1 = r0.a()
                java.lang.String r0 = r0.b()
                r4.appendQueryParameter(r1, r0)
                goto L18
            L30:
                java.net.URL r5 = new java.net.URL
                java.lang.String r4 = r4.toString()
                r5.<init>(r4)
                goto L7
        }
    }

    static int a(int r1, int r2) {
            int r0 = r2 + 243
            int r0 = r0 / 1448
            int r0 = r0 * 132
            int r0 = r0 + 1080
            int r0 = r0 + r1
            int r0 = r0 + r2
            return r0
    }

    static int a(int r1, int r2, int r3) {
            int r0 = r2 + 200
            int r0 = r0 / 1448
            int r0 = r0 * 132
            int r0 = r0 + 1011
            int r0 = r0 + r2
            int r0 = r0 + r1
            int r0 = r0 + r3
            return r0
    }

    private static int a(com.xiaomi.push.cy r2, java.lang.String r3, java.util.List<com.xiaomi.push.bi> r4, java.lang.String r5) {
            int r0 = r2.a()
            r1 = 1
            if (r0 != r1) goto L14
            int r2 = r3.length()
            int r3 = a(r5)
            int r2 = a(r2, r3)
            return r2
        L14:
            int r2 = r2.a()
            r0 = 2
            if (r2 != r0) goto L2c
            int r2 = a(r4)
            int r3 = r3.length()
            int r4 = a(r5)
            int r2 = a(r3, r2, r4)
            return r2
        L2c:
            r2 = -1
            return r2
    }

    static int a(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String r0 = "UTF-8"
            byte[] r2 = r2.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L10
            int r2 = r2.length     // Catch: java.io.UnsupportedEncodingException -> L10
            return r2
        L10:
            return r1
    }

    static int a(java.util.List<com.xiaomi.push.bi> r3) {
            java.util.Iterator r3 = r3.iterator()
            r0 = 0
        L5:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L38
            java.lang.Object r1 = r3.next()
            com.xiaomi.push.bi r1 = (com.xiaomi.push.bi) r1
            java.lang.String r2 = r1.a()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L24
            java.lang.String r2 = r1.a()
            int r2 = r2.length()
            int r0 = r0 + r2
        L24:
            java.lang.String r2 = r1.b()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L5
            java.lang.String r1 = r1.b()
            int r1 = r1.length()
            int r0 = r0 + r1
            goto L5
        L38:
            int r0 = r0 * 2
            return r0
    }

    public static java.lang.String a(android.content.Context r2, java.lang.String r3, java.util.List<com.xiaomi.push.bi> r4) {
            com.xiaomi.push.cz$a r0 = new com.xiaomi.push.cz$a
            r0.<init>()
            r1 = 1
            java.lang.String r2 = a(r2, r3, r4, r0, r1)
            return r2
    }

    public static java.lang.String a(android.content.Context r20, java.lang.String r21, java.util.List<com.xiaomi.push.bi> r22, com.xiaomi.push.cy r23, boolean r24) {
            r1 = r20
            r0 = r21
            r2 = r22
            r3 = r23
            boolean r4 = com.xiaomi.push.bj.b(r20)
            r5 = 0
            if (r4 == 0) goto Lc7
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.net.MalformedURLException -> Lc3
            r4.<init>()     // Catch: java.net.MalformedURLException -> Lc3
            if (r24 == 0) goto L26
            com.xiaomi.push.cv r6 = com.xiaomi.push.cv.a()     // Catch: java.net.MalformedURLException -> Lc3
            com.xiaomi.push.cr r6 = r6.a(r0)     // Catch: java.net.MalformedURLException -> Lc3
            if (r6 == 0) goto L24
            java.util.ArrayList r4 = r6.a(r0)     // Catch: java.net.MalformedURLException -> Lc3
        L24:
            r13 = r6
            goto L27
        L26:
            r13 = r5
        L27:
            boolean r6 = r4.contains(r0)     // Catch: java.net.MalformedURLException -> Lc3
            if (r6 != 0) goto L30
            r4.add(r0)     // Catch: java.net.MalformedURLException -> Lc3
        L30:
            java.util.Iterator r4 = r4.iterator()     // Catch: java.net.MalformedURLException -> Lc3
            r6 = r5
        L35:
            boolean r0 = r4.hasNext()     // Catch: java.net.MalformedURLException -> Lc3
            if (r0 == 0) goto Lc2
            java.lang.Object r0 = r4.next()     // Catch: java.net.MalformedURLException -> Lc3
            r14 = r0
            java.lang.String r14 = (java.lang.String) r14     // Catch: java.net.MalformedURLException -> Lc3
            if (r2 == 0) goto L4b
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.net.MalformedURLException -> Lc3
            r0.<init>(r2)     // Catch: java.net.MalformedURLException -> Lc3
            r15 = r0
            goto L4c
        L4b:
            r15 = r5
        L4c:
            long r16 = java.lang.System.currentTimeMillis()     // Catch: java.net.MalformedURLException -> Lc3
            boolean r0 = r3.a(r1, r14, r15)     // Catch: java.io.IOException -> La4 java.net.MalformedURLException -> Lc3
            if (r0 != 0) goto L58
            goto Lc2
        L58:
            java.lang.String r12 = r3.a(r1, r14, r15)     // Catch: java.io.IOException -> La4 java.net.MalformedURLException -> Lc3
            boolean r0 = android.text.TextUtils.isEmpty(r12)     // Catch: java.io.IOException -> L9a java.net.MalformedURLException -> Lc3
            if (r0 != 0) goto L7c
            if (r13 == 0) goto L7a
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.io.IOException -> L75 java.net.MalformedURLException -> Lc3
            long r8 = r6 - r16
            int r0 = a(r3, r14, r15, r12)     // Catch: java.io.IOException -> L75 java.net.MalformedURLException -> Lc3
            long r10 = (long) r0     // Catch: java.io.IOException -> L75 java.net.MalformedURLException -> Lc3
            r6 = r13
            r7 = r14
            r6.a(r7, r8, r10)     // Catch: java.io.IOException -> L75 java.net.MalformedURLException -> Lc3
            goto L7a
        L75:
            r0 = move-exception
            r18 = r0
            r0 = r12
            goto La8
        L7a:
            r6 = r12
            goto Lc2
        L7c:
            if (r13 == 0) goto L95
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.io.IOException -> L9a java.net.MalformedURLException -> Lc3
            long r8 = r6 - r16
            int r0 = a(r3, r14, r15, r12)     // Catch: java.io.IOException -> L9a java.net.MalformedURLException -> Lc3
            long r10 = (long) r0
            r0 = 0
            r6 = r13
            r7 = r14
            r18 = r12
            r12 = r0
            r6.a(r7, r8, r10, r12)     // Catch: java.io.IOException -> L93 java.net.MalformedURLException -> Lc3
            goto L97
        L93:
            r0 = move-exception
            goto L9d
        L95:
            r18 = r12
        L97:
            r6 = r18
            goto L35
        L9a:
            r0 = move-exception
            r18 = r12
        L9d:
            r19 = r18
            r18 = r0
            r0 = r19
            goto La8
        La4:
            r0 = move-exception
            r18 = r0
            r0 = r6
        La8:
            if (r13 == 0) goto Lbc
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.net.MalformedURLException -> Lc3
            long r8 = r6 - r16
            int r6 = a(r3, r14, r15, r0)     // Catch: java.net.MalformedURLException -> Lc3
            long r10 = (long) r6     // Catch: java.net.MalformedURLException -> Lc3
            r6 = r13
            r7 = r14
            r12 = r18
            r6.a(r7, r8, r10, r12)     // Catch: java.net.MalformedURLException -> Lc3
        Lbc:
            r18.printStackTrace()     // Catch: java.net.MalformedURLException -> Lc3
            r6 = r0
            goto L35
        Lc2:
            return r6
        Lc3:
            r0 = move-exception
            r0.printStackTrace()
        Lc7:
            return r5
    }
}
