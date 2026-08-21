package com.tkay.expressad.atsignalcommon.windvane;

public final class m implements android.os.Handler.Callback, com.tkay.expressad.atsignalcommon.windvane.d {
    protected java.util.regex.Pattern a;
    protected java.lang.String b;
    protected final int c;
    protected android.content.Context d;
    protected com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView e;
    protected android.os.Handler f;

    public m(android.content.Context r2) {
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

    private void a(com.tkay.expressad.atsignalcommon.windvane.a r7) {
            r6 = this;
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r7.a
            if (r0 != 0) goto L6
            r0 = 0
            goto Le
        L6:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r7.a
            java.lang.String r1 = r7.d
            java.lang.Object r0 = r0.getJsObject(r1)
        Le:
            if (r0 != 0) goto L11
            return
        L11:
            android.content.Context r1 = r6.d     // Catch: java.lang.Exception -> L53 com.tkay.expressad.atsignalcommon.b.c.b.a -> L58
            java.lang.ClassLoader r1 = r1.getClassLoader()     // Catch: java.lang.Exception -> L53 com.tkay.expressad.atsignalcommon.b.c.b.a -> L58
            java.lang.Class r2 = r0.getClass()     // Catch: java.lang.Exception -> L53 com.tkay.expressad.atsignalcommon.b.c.b.a -> L58
            java.lang.String r2 = r2.getName()     // Catch: java.lang.Exception -> L53 com.tkay.expressad.atsignalcommon.b.c.b.a -> L58
            com.tkay.expressad.atsignalcommon.b.c$c r1 = com.tkay.expressad.atsignalcommon.b.c.a(r1, r2)     // Catch: java.lang.Exception -> L53 com.tkay.expressad.atsignalcommon.b.c.b.a -> L58
            java.lang.String r2 = r7.e     // Catch: java.lang.Exception -> L53 com.tkay.expressad.atsignalcommon.b.c.b.a -> L58
            r3 = 2
            java.lang.Class[] r3 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L53 com.tkay.expressad.atsignalcommon.b.c.b.a -> L58
            r4 = 0
            java.lang.Class<java.lang.Object> r5 = java.lang.Object.class
            r3[r4] = r5     // Catch: java.lang.Exception -> L53 com.tkay.expressad.atsignalcommon.b.c.b.a -> L58
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 1
            r3[r5] = r4     // Catch: java.lang.Exception -> L53 com.tkay.expressad.atsignalcommon.b.c.b.a -> L58
            com.tkay.expressad.atsignalcommon.b.c$f r1 = r1.a(r2, r3)     // Catch: java.lang.Exception -> L53 com.tkay.expressad.atsignalcommon.b.c.b.a -> L58
            r1.a()     // Catch: java.lang.Exception -> L53 com.tkay.expressad.atsignalcommon.b.c.b.a -> L58
            if (r0 == 0) goto L52
            boolean r2 = r0 instanceof com.tkay.expressad.atsignalcommon.windvane.l     // Catch: java.lang.Exception -> L53 com.tkay.expressad.atsignalcommon.b.c.b.a -> L58
            if (r2 == 0) goto L52
            r7.b = r0     // Catch: java.lang.Exception -> L53 com.tkay.expressad.atsignalcommon.b.c.b.a -> L58
            r7.c = r1     // Catch: java.lang.Exception -> L53 com.tkay.expressad.atsignalcommon.b.c.b.a -> L58
            r7.b = r0     // Catch: java.lang.Exception -> L53 com.tkay.expressad.atsignalcommon.b.c.b.a -> L58
            android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Exception -> L53 com.tkay.expressad.atsignalcommon.b.c.b.a -> L58
            r0.what = r5     // Catch: java.lang.Exception -> L53 com.tkay.expressad.atsignalcommon.b.c.b.a -> L58
            r0.obj = r7     // Catch: java.lang.Exception -> L53 com.tkay.expressad.atsignalcommon.b.c.b.a -> L58
            android.os.Handler r7 = r6.f     // Catch: java.lang.Exception -> L53 com.tkay.expressad.atsignalcommon.b.c.b.a -> L58
            r7.sendMessage(r0)     // Catch: java.lang.Exception -> L53 com.tkay.expressad.atsignalcommon.b.c.b.a -> L58
        L52:
            return
        L53:
            r7 = move-exception
            r7.printStackTrace()
            return
        L58:
            r7 = move-exception
            boolean r0 = com.tkay.expressad.b.a
            if (r0 == 0) goto L60
            r7.printStackTrace()
        L60:
            return
    }

    private void b(com.tkay.expressad.atsignalcommon.windvane.a r3) {
            r2 = this;
            android.os.Message r0 = android.os.Message.obtain()
            r1 = 1
            r0.what = r1
            r0.obj = r3
            android.os.Handler r3 = r2.f
            r3.sendMessage(r0)
            return
    }

    @Override
    public final android.webkit.WebView a() {
            r1 = this;
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r1.e
            return r0
    }

    @Override
    public final void a(com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1) {
            r0 = this;
            r0.e = r1
            return
    }

    @Override
    public final void a(java.util.regex.Pattern r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    public final boolean a(java.lang.String r2) {
            r1 = this;
            boolean r0 = com.tkay.expressad.atsignalcommon.windvane.n.a(r2)
            if (r0 == 0) goto L10
            java.util.regex.Pattern r0 = com.tkay.expressad.atsignalcommon.windvane.n.b(r2)
            r1.a = r0
            r1.b = r2
            r2 = 1
            return r2
        L10:
            r2 = 0
            return r2
    }

    @Override
    public final com.tkay.expressad.atsignalcommon.windvane.a b(java.lang.String r5) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r4.e
            com.tkay.expressad.atsignalcommon.windvane.a r1 = com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.getMraidMethodContext(r1, r5)
            if (r1 == 0) goto L11
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r4.e
            r1.a = r5
            return r1
        L11:
            java.util.regex.Pattern r1 = r4.a
            java.util.regex.Matcher r5 = r1.matcher(r5)
            boolean r1 = r5.matches()
            if (r1 == 0) goto L65
            com.tkay.expressad.atsignalcommon.windvane.a r1 = new com.tkay.expressad.atsignalcommon.windvane.a
            r1.<init>()
            int r2 = r5.groupCount()
            r3 = 5
            if (r2 < r3) goto L2f
            java.lang.String r3 = r5.group(r3)
            r1.f = r3
        L2f:
            r3 = 3
            if (r2 < r3) goto L65
            r0 = 1
            java.lang.String r0 = r5.group(r0)
            r1.d = r0
            r0 = 2
            java.lang.String r0 = r5.group(r0)
            r1.g = r0
            java.lang.String r5 = r5.group(r3)
            r1.e = r5
            java.util.HashMap<java.lang.String, java.lang.String> r5 = com.tkay.expressad.atsignalcommon.base.e.k
            if (r5 == 0) goto L60
            java.util.HashMap<java.lang.String, java.lang.String> r5 = com.tkay.expressad.atsignalcommon.base.e.k
            java.lang.String r0 = r1.e
            boolean r5 = r5.containsKey(r0)
            if (r5 == 0) goto L60
            java.util.HashMap<java.lang.String, java.lang.String> r5 = com.tkay.expressad.atsignalcommon.base.e.k
            java.lang.String r0 = r1.e
            java.lang.Object r5 = r5.get(r0)
            java.lang.String r5 = (java.lang.String) r5
            r1.e = r5
        L60:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r4.e
            r1.a = r5
            return r1
        L65:
            return r0
    }

    @Override
    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    @Override
    public final void c(java.lang.String r8) {
            r7 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 == 0) goto L7
            return
        L7:
            r0 = 2
            r1 = 0
            r2 = 1
            if (r8 == 0) goto L6b
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r7.e
            com.tkay.expressad.atsignalcommon.windvane.a r3 = com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.getMraidMethodContext(r3, r8)
            if (r3 == 0) goto L19
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r8 = r7.e
            r3.a = r8
            goto L6c
        L19:
            java.util.regex.Pattern r3 = r7.a
            java.util.regex.Matcher r8 = r3.matcher(r8)
            boolean r3 = r8.matches()
            if (r3 == 0) goto L6b
            com.tkay.expressad.atsignalcommon.windvane.a r3 = new com.tkay.expressad.atsignalcommon.windvane.a
            r3.<init>()
            int r4 = r8.groupCount()
            r5 = 5
            if (r4 < r5) goto L37
            java.lang.String r5 = r8.group(r5)
            r3.f = r5
        L37:
            r5 = 3
            if (r4 < r5) goto L6b
            java.lang.String r4 = r8.group(r2)
            r3.d = r4
            java.lang.String r4 = r8.group(r0)
            r3.g = r4
            java.lang.String r8 = r8.group(r5)
            r3.e = r8
            java.util.HashMap<java.lang.String, java.lang.String> r8 = com.tkay.expressad.atsignalcommon.base.e.k
            if (r8 == 0) goto L66
            java.util.HashMap<java.lang.String, java.lang.String> r8 = com.tkay.expressad.atsignalcommon.base.e.k
            java.lang.String r4 = r3.e
            boolean r8 = r8.containsKey(r4)
            if (r8 == 0) goto L66
            java.util.HashMap<java.lang.String, java.lang.String> r8 = com.tkay.expressad.atsignalcommon.base.e.k
            java.lang.String r4 = r3.e
            java.lang.Object r8 = r8.get(r4)
            java.lang.String r8 = (java.lang.String) r8
            r3.e = r8
        L66:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r8 = r7.e
            r3.a = r8
            goto L6c
        L6b:
            r3 = r1
        L6c:
            if (r3 != 0) goto L6f
            return
        L6f:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r8 = r3.a
            if (r8 != 0) goto L74
            goto L7c
        L74:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r8 = r3.a
            java.lang.String r1 = r3.d
            java.lang.Object r1 = r8.getJsObject(r1)
        L7c:
            if (r1 != 0) goto L7f
            return
        L7f:
            android.content.Context r8 = r7.d     // Catch: java.lang.Exception -> Lbf com.tkay.expressad.atsignalcommon.b.c.b.a -> Lc4
            java.lang.ClassLoader r8 = r8.getClassLoader()     // Catch: java.lang.Exception -> Lbf com.tkay.expressad.atsignalcommon.b.c.b.a -> Lc4
            java.lang.Class r4 = r1.getClass()     // Catch: java.lang.Exception -> Lbf com.tkay.expressad.atsignalcommon.b.c.b.a -> Lc4
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Exception -> Lbf com.tkay.expressad.atsignalcommon.b.c.b.a -> Lc4
            com.tkay.expressad.atsignalcommon.b.c$c r8 = com.tkay.expressad.atsignalcommon.b.c.a(r8, r4)     // Catch: java.lang.Exception -> Lbf com.tkay.expressad.atsignalcommon.b.c.b.a -> Lc4
            java.lang.String r4 = r3.e     // Catch: java.lang.Exception -> Lbf com.tkay.expressad.atsignalcommon.b.c.b.a -> Lc4
            java.lang.Class[] r0 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> Lbf com.tkay.expressad.atsignalcommon.b.c.b.a -> Lc4
            r5 = 0
            java.lang.Class<java.lang.Object> r6 = java.lang.Object.class
            r0[r5] = r6     // Catch: java.lang.Exception -> Lbf com.tkay.expressad.atsignalcommon.b.c.b.a -> Lc4
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r0[r2] = r5     // Catch: java.lang.Exception -> Lbf com.tkay.expressad.atsignalcommon.b.c.b.a -> Lc4
            com.tkay.expressad.atsignalcommon.b.c$f r8 = r8.a(r4, r0)     // Catch: java.lang.Exception -> Lbf com.tkay.expressad.atsignalcommon.b.c.b.a -> Lc4
            r8.a()     // Catch: java.lang.Exception -> Lbf com.tkay.expressad.atsignalcommon.b.c.b.a -> Lc4
            if (r1 == 0) goto Lbe
            boolean r0 = r1 instanceof com.tkay.expressad.atsignalcommon.windvane.l     // Catch: java.lang.Exception -> Lbf com.tkay.expressad.atsignalcommon.b.c.b.a -> Lc4
            if (r0 == 0) goto Lbe
            r3.b = r1     // Catch: java.lang.Exception -> Lbf com.tkay.expressad.atsignalcommon.b.c.b.a -> Lc4
            r3.c = r8     // Catch: java.lang.Exception -> Lbf com.tkay.expressad.atsignalcommon.b.c.b.a -> Lc4
            r3.b = r1     // Catch: java.lang.Exception -> Lbf com.tkay.expressad.atsignalcommon.b.c.b.a -> Lc4
            android.os.Message r8 = android.os.Message.obtain()     // Catch: java.lang.Exception -> Lbf com.tkay.expressad.atsignalcommon.b.c.b.a -> Lc4
            r8.what = r2     // Catch: java.lang.Exception -> Lbf com.tkay.expressad.atsignalcommon.b.c.b.a -> Lc4
            r8.obj = r3     // Catch: java.lang.Exception -> Lbf com.tkay.expressad.atsignalcommon.b.c.b.a -> Lc4
            android.os.Handler r0 = r7.f     // Catch: java.lang.Exception -> Lbf com.tkay.expressad.atsignalcommon.b.c.b.a -> Lc4
            r0.sendMessage(r8)     // Catch: java.lang.Exception -> Lbf com.tkay.expressad.atsignalcommon.b.c.b.a -> Lc4
        Lbe:
            return
        Lbf:
            r8 = move-exception
            r8.printStackTrace()
            return
        Lc4:
            r8 = move-exception
            boolean r0 = com.tkay.expressad.b.a
            if (r0 == 0) goto Lcc
            r8.printStackTrace()
        Lcc:
            return
    }

    @Override
    public final void d(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    @Override
    public final boolean handleMessage(android.os.Message r7) {
            r6 = this;
            java.lang.Object r0 = r7.obj
            com.tkay.expressad.atsignalcommon.windvane.a r0 = (com.tkay.expressad.atsignalcommon.windvane.a) r0
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
            com.tkay.expressad.atsignalcommon.b.c$f r3 = r0.c     // Catch: java.lang.Exception -> L2a
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
