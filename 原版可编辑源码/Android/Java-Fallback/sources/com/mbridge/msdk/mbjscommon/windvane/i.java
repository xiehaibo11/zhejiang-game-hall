package com.mbridge.msdk.mbjscommon.windvane;

public final class i implements android.os.Handler.Callback, com.mbridge.msdk.mbjscommon.windvane.b {
    protected java.util.regex.Pattern a;
    protected java.lang.String b;
    protected final int c;
    protected android.content.Context d;
    protected com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView e;
    protected android.os.Handler f;

    public i(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.c = r0
            r1.d = r2
            android.os.Handler r2 = new android.os.Handler
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r2.<init>(r0, r1)
            r1.f = r2
            return
    }

    @Override
    public final void a(com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1) {
            r0 = this;
            r0.e = r1
            return
    }

    @Override
    public final boolean a(java.lang.String r2) {
            r1 = this;
            boolean r0 = com.mbridge.msdk.mbjscommon.windvane.k.a(r2)
            if (r0 == 0) goto L10
            java.util.regex.Pattern r0 = com.mbridge.msdk.mbjscommon.windvane.k.b(r2)
            r1.a = r0
            r1.b = r2
            r2 = 1
            return r2
        L10:
            r2 = 0
            return r2
    }

    @Override
    public final void b(java.lang.String r8) {
            r7 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 == 0) goto L7
            return
        L7:
            r0 = 2
            r1 = 0
            r2 = 1
            if (r8 != 0) goto Ld
            goto L52
        Ld:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r7.e
            com.mbridge.msdk.mbjscommon.windvane.a r3 = com.mbridge.msdk.mbjscommon.mraid.c.a(r3, r8)
            if (r3 == 0) goto L1a
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r8 = r7.e
            r3.a = r8
            goto L53
        L1a:
            java.util.regex.Pattern r3 = r7.a
            java.util.regex.Matcher r8 = r3.matcher(r8)
            boolean r3 = r8.matches()
            if (r3 == 0) goto L52
            com.mbridge.msdk.mbjscommon.windvane.a r3 = new com.mbridge.msdk.mbjscommon.windvane.a
            r3.<init>()
            int r4 = r8.groupCount()
            r5 = 5
            if (r4 < r5) goto L38
            java.lang.String r5 = r8.group(r5)
            r3.f = r5
        L38:
            r5 = 3
            if (r4 < r5) goto L52
            java.lang.String r4 = r8.group(r2)
            r3.d = r4
            java.lang.String r4 = r8.group(r0)
            r3.g = r4
            java.lang.String r8 = r8.group(r5)
            r3.e = r8
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r8 = r7.e
            r3.a = r8
            goto L53
        L52:
            r3 = r1
        L53:
            if (r3 != 0) goto L56
            return
        L56:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r8 = r3.a
            if (r8 != 0) goto L5b
            goto L63
        L5b:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r8 = r3.a
            java.lang.String r1 = r3.d
            java.lang.Object r1 = r8.getJsObject(r1)
        L63:
            if (r1 != 0) goto L66
            goto Laf
        L66:
            android.content.Context r8 = r7.d     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.a -> Lab
            java.lang.ClassLoader r8 = r8.getClassLoader()     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.a -> Lab
            java.lang.Class r4 = r1.getClass()     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.a -> Lab
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.a -> Lab
            com.mbridge.msdk.mbjscommon.b.a$c r8 = com.mbridge.msdk.mbjscommon.b.a.a(r8, r4)     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.a -> Lab
            java.lang.String r4 = r3.e     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.a -> Lab
            java.lang.Class[] r0 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.a -> Lab
            r5 = 0
            java.lang.Class<java.lang.Object> r6 = java.lang.Object.class
            r0[r5] = r6     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.a -> Lab
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r0[r2] = r5     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.a -> Lab
            com.mbridge.msdk.mbjscommon.b.a$d r8 = r8.a(r4, r0)     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.a -> Lab
            r8.a()     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.a -> Lab
            if (r1 == 0) goto Laf
            boolean r0 = r1 instanceof com.mbridge.msdk.mbjscommon.windvane.j     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.a -> Lab
            if (r0 == 0) goto Laf
            r3.b = r1     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.a -> Lab
            r3.c = r8     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.a -> Lab
            r3.b = r1     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.a -> Lab
            android.os.Message r8 = android.os.Message.obtain()     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.a -> Lab
            r8.what = r2     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.a -> Lab
            r8.obj = r3     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.a -> Lab
            android.os.Handler r0 = r7.f     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.a -> Lab
            r0.sendMessage(r8)     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.a -> Lab
            goto Laf
        La6:
            r8 = move-exception
            r8.printStackTrace()
            goto Laf
        Lab:
            r8 = move-exception
            r8.printStackTrace()
        Laf:
            return
    }

    @Override
    public final boolean handleMessage(android.os.Message r7) {
            r6 = this;
            java.lang.Object r0 = r7.obj
            com.mbridge.msdk.mbjscommon.windvane.a r0 = (com.mbridge.msdk.mbjscommon.windvane.a) r0
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            int r7 = r7.what     // Catch: java.lang.Exception -> L2a
            r2 = 1
            if (r7 == r2) goto Le
            goto L2e
        Le:
            java.lang.Object r7 = r0.b     // Catch: java.lang.Exception -> L2a
            com.mbridge.msdk.mbjscommon.b.a$d r3 = r0.c     // Catch: java.lang.Exception -> L2a
            r4 = 2
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L2a
            r4[r1] = r0     // Catch: java.lang.Exception -> L2a
            java.lang.String r5 = r0.f     // Catch: java.lang.Exception -> L2a
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L2a
            if (r5 == 0) goto L22
            java.lang.String r0 = "{}"
            goto L24
        L22:
            java.lang.String r0 = r0.f     // Catch: java.lang.Exception -> L2a
        L24:
            r4[r2] = r0     // Catch: java.lang.Exception -> L2a
            r3.a(r7, r4)     // Catch: java.lang.Exception -> L2a
            return r2
        L2a:
            r7 = move-exception
            r7.printStackTrace()
        L2e:
            return r1
    }
}
