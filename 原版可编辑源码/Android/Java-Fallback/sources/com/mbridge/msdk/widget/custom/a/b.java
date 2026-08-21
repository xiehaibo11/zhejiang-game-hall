package com.mbridge.msdk.widget.custom.a;

public final class b {
    private static com.mbridge.msdk.widget.custom.a.b g;
    private java.lang.ref.SoftReference<java.util.HashMap<java.lang.String, com.mbridge.msdk.widget.custom.a.c>> a;
    private java.lang.ref.SoftReference<java.util.HashMap<java.lang.String, java.lang.String>> b;
    private java.lang.ref.SoftReference<java.util.HashMap<java.lang.String, com.mbridge.msdk.widget.custom.a.c>> c;
    private java.lang.String d;
    private java.lang.String e;
    private android.content.Context f;

    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.widget.custom.a.b a() {
            com.mbridge.msdk.widget.custom.a.b r0 = com.mbridge.msdk.widget.custom.a.b.g
            if (r0 != 0) goto Lb
            com.mbridge.msdk.widget.custom.a.b r0 = new com.mbridge.msdk.widget.custom.a.b
            r0.<init>()
            com.mbridge.msdk.widget.custom.a.b.g = r0
        Lb:
            com.mbridge.msdk.widget.custom.a.b r0 = com.mbridge.msdk.widget.custom.a.b.g
            return r0
    }

    private java.util.HashMap<java.lang.String, java.lang.String> d() {
            r5 = this;
            r0 = 0
            android.content.Context r1 = r5.f     // Catch: java.io.IOException -> Le
            android.content.res.AssetManager r1 = r1.getAssets()     // Catch: java.io.IOException -> Le
            java.lang.String r2 = "strings.xml"
            java.io.InputStream r1 = r1.open(r2)     // Catch: java.io.IOException -> Le
            goto L13
        Le:
            r1 = move-exception
            r1.printStackTrace()
            r1 = r0
        L13:
            org.xmlpull.v1.XmlPullParser r2 = android.util.Xml.newPullParser()
            java.lang.String r3 = "utf-8"
            r2.setInput(r1, r3)     // Catch: java.lang.Exception -> L49
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Exception -> L49
            r1.<init>()     // Catch: java.lang.Exception -> L49
            int r3 = r2.getEventType()     // Catch: java.lang.Exception -> L49
        L25:
            r4 = 1
            if (r3 == r4) goto L48
            r4 = 2
            if (r3 != r4) goto L43
            java.lang.String r3 = "string"
            java.lang.String r4 = r2.getName()     // Catch: java.lang.Exception -> L49
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Exception -> L49
            if (r3 == 0) goto L43
            r3 = 0
            java.lang.String r3 = r2.getAttributeValue(r3)     // Catch: java.lang.Exception -> L49
            java.lang.String r4 = r2.nextText()     // Catch: java.lang.Exception -> L49
            r1.put(r3, r4)     // Catch: java.lang.Exception -> L49
        L43:
            int r3 = r2.next()     // Catch: java.lang.Exception -> L49
            goto L25
        L48:
            return r1
        L49:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public final int a(android.content.Context r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r4 = r4.getPackageName()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = ".R$"
            r0.append(r4)
            java.lang.String r4 = "\\."
            java.lang.String[] r4 = r5.split(r4)
            r5 = 1
            r1 = r4[r5]
            r0.append(r1)
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L3e
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L3e
            java.lang.Object r1 = r0.newInstance()     // Catch: java.lang.Exception -> L3e
            r2 = 2
            r4 = r4[r2]     // Catch: java.lang.Exception -> L3e
            java.lang.reflect.Field r4 = r0.getDeclaredField(r4)     // Catch: java.lang.Exception -> L3e
            r4.setAccessible(r5)     // Catch: java.lang.Exception -> L3e
            java.lang.Object r4 = r4.get(r1)     // Catch: java.lang.Exception -> L3e
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Exception -> L3e
            int r4 = r4.intValue()     // Catch: java.lang.Exception -> L3e
            goto L43
        L3e:
            r4 = move-exception
            r4.printStackTrace()
            r4 = 0
        L43:
            return r4
    }

    public final void a(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            r1.f = r0
            boolean r0 = com.mbridge.msdk.widget.custom.b.d.a
            if (r0 == 0) goto L1b
            android.content.Context r2 = r1.f
            java.io.File r2 = r2.getFilesDir()
            java.lang.String r2 = r2.toString()
            r1.d = r2
            goto L1d
        L1b:
            r1.d = r2
        L1d:
            android.content.Context r2 = r1.f
            com.mbridge.msdk.widget.custom.b.a.a(r2)
            java.lang.String r2 = "/drawable/"
            r1.e = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "屏幕："
            r2.append(r0)
            java.lang.String r0 = r1.e
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.mbridge.msdk.widget.custom.b.d.a(r2)
            android.content.Context r2 = r1.f
            r1.f = r2
            return
    }

    public final int b(java.lang.String r4) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L3a
            java.lang.String r0 = "#"
            boolean r1 = r4.startsWith(r0)
            if (r1 == 0) goto L3a
            int r1 = r4.length()
            r2 = 7
            if (r1 != r2) goto L25
            java.lang.String r1 = "#FF"
            java.lang.String r4 = r4.replace(r0, r1)
            java.lang.Long r4 = java.lang.Long.decode(r4)
            long r0 = r4.longValue()
            int r4 = (int) r0
            return r4
        L25:
            r0 = 9
            if (r1 != r0) goto L33
            java.lang.Long r4 = java.lang.Long.decode(r4)
            long r0 = r4.longValue()
            int r4 = (int) r0
            return r4
        L33:
            java.lang.String r4 = "返回白色背景"
            com.mbridge.msdk.widget.custom.b.d.a(r4)
            r4 = -1
            return r4
        L3a:
            r4 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            return r4
    }

    public final java.util.HashMap b() {
            r5 = this;
            java.lang.ref.SoftReference<java.util.HashMap<java.lang.String, com.mbridge.msdk.widget.custom.a.c>> r0 = r5.a
            if (r0 == 0) goto La
            java.lang.Object r0 = r0.get()
            if (r0 != 0) goto Lc8
        La:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.b
            java.lang.String r2 = "layout_width"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.c
            java.lang.String r2 = "layout_height"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.d
            java.lang.String r2 = "orientation"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.e
            java.lang.String r2 = "layout_centerHorizontal"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.f
            java.lang.String r2 = "layout_centerVertical"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.k
            java.lang.String r2 = "layout_marginLeft"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.l
            java.lang.String r3 = "layout_marginRight"
            r0.put(r3, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.p
            java.lang.String r4 = "layout_margin"
            r0.put(r4, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.q
            java.lang.String r4 = "layout_gravity"
            r0.put(r4, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.r
            java.lang.String r4 = "layout_alignParentRight"
            r0.put(r4, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.v
            java.lang.String r4 = "layout_weight"
            r0.put(r4, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.P
            java.lang.String r4 = "contentDescription"
            r0.put(r4, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.N
            java.lang.String r4 = "gravity"
            r0.put(r4, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.a
            java.lang.String r4 = "id"
            r0.put(r4, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.g
            java.lang.String r4 = "layout_below"
            r0.put(r4, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.h
            java.lang.String r4 = "layout_above"
            r0.put(r4, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.j
            java.lang.String r4 = "layout_toLeftOf"
            r0.put(r4, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.i
            java.lang.String r4 = "layout_toRightOf"
            r0.put(r4, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.J
            java.lang.String r4 = "background"
            r0.put(r4, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.m
            java.lang.String r4 = "layout_marginTop"
            r0.put(r4, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.n
            java.lang.String r4 = "layout_marginBottom"
            r0.put(r4, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.k
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.l
            r0.put(r3, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.t
            java.lang.String r2 = "layout_alignParentBottom"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.u
            java.lang.String r2 = "layout_alignParentTop"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.s
            java.lang.String r2 = "layout_alignParentLeft"
            r0.put(r2, r1)
            java.lang.ref.SoftReference r1 = new java.lang.ref.SoftReference
            r1.<init>(r0)
            r5.a = r1
        Lc8:
            java.lang.ref.SoftReference<java.util.HashMap<java.lang.String, com.mbridge.msdk.widget.custom.a.c>> r0 = r5.a
            java.lang.Object r0 = r0.get()
            java.util.HashMap r0 = (java.util.HashMap) r0
            return r0
    }

    public final int c(java.lang.String r5) {
            r4 = this;
            int r5 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Exception -> L5
            return r5
        L5:
            java.lang.String r0 = "d"
            int r1 = r5.indexOf(r0)
            java.lang.String r2 = "s"
            int r2 = r5.indexOf(r2)
            r3 = -1
            if (r1 == r3) goto L15
            goto L16
        L15:
            r1 = r2
        L16:
            r2 = 0
            java.lang.String r1 = r5.substring(r2, r1)
            int r1 = java.lang.Integer.parseInt(r1)
            boolean r5 = r5.contains(r0)
            if (r5 == 0) goto L2c
            android.content.Context r5 = r4.f
            int r5 = com.mbridge.msdk.widget.custom.b.a.a(r5, r1)
            return r5
        L2c:
            return r1
    }

    public final java.util.HashMap<java.lang.String, com.mbridge.msdk.widget.custom.a.c> c() {
            r4 = this;
            java.lang.ref.SoftReference<java.util.HashMap<java.lang.String, com.mbridge.msdk.widget.custom.a.c>> r0 = r4.c
            if (r0 == 0) goto La
            java.lang.Object r0 = r0.get()
            if (r0 != 0) goto Le6
        La:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.a
            java.lang.String r2 = "id"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.B
            java.lang.String r2 = "text"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.C
            java.lang.String r2 = "ellipsize"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.D
            java.lang.String r2 = "fadingEdge"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.E
            java.lang.String r2 = "scrollHorizontally"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.F
            java.lang.String r2 = "textColor"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.G
            java.lang.String r2 = "textSize"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.I
            java.lang.String r2 = "visibility"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.J
            java.lang.String r2 = "background"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.K
            java.lang.String r3 = "textStyle"
            r0.put(r3, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.L
            java.lang.String r3 = "style"
            r0.put(r3, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.b
            java.lang.String r3 = "layout_width"
            r0.put(r3, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.c
            java.lang.String r3 = "layout_height"
            r0.put(r3, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.g
            java.lang.String r3 = "layout_below"
            r0.put(r3, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.P
            java.lang.String r3 = "contentDescription"
            r0.put(r3, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.M
            java.lang.String r3 = "src"
            r0.put(r3, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.N
            java.lang.String r3 = "gravity"
            r0.put(r3, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.d
            java.lang.String r3 = "orientation"
            r0.put(r3, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.O
            java.lang.String r3 = "numColumns"
            r0.put(r3, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.z
            java.lang.String r3 = "verticalSpacing"
            r0.put(r3, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.A
            java.lang.String r3 = "horizontalSpacing"
            r0.put(r3, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.J
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.n
            java.lang.String r2 = "layout_marginBottom"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.Q
            java.lang.String r2 = "scaleType"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.H
            java.lang.String r2 = "singleLine"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.R
            java.lang.String r2 = "paddingBottom"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.S
            java.lang.String r2 = "paddingTop"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.T
            java.lang.String r2 = "letterSpacing"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.U
            java.lang.String r2 = "paddingRight"
            r0.put(r2, r1)
            com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.V
            java.lang.String r2 = "layout_right"
            r0.put(r2, r1)
            java.lang.ref.SoftReference r1 = new java.lang.ref.SoftReference
            r1.<init>(r0)
            r4.c = r1
        Le6:
            java.lang.ref.SoftReference<java.util.HashMap<java.lang.String, com.mbridge.msdk.widget.custom.a.c>> r0 = r4.c
            java.lang.Object r0 = r0.get()
            java.util.HashMap r0 = (java.util.HashMap) r0
            return r0
    }

    public final int d(java.lang.String r6) {
            r5 = this;
            java.lang.String r6 = r6.toUpperCase()
            java.lang.String r0 = "\\|"
            java.lang.String[] r6 = r6.split(r0)
            r0 = 48
            java.lang.String r1 = "android.view.Gravity"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L25
            r2 = 0
        L13:
            int r3 = r6.length     // Catch: java.lang.Exception -> L25
            if (r2 >= r3) goto L29
            r3 = r6[r2]     // Catch: java.lang.Exception -> L25
            java.lang.reflect.Field r3 = r1.getField(r3)     // Catch: java.lang.Exception -> L25
            r4 = 0
            int r3 = r3.getInt(r4)     // Catch: java.lang.Exception -> L25
            r0 = r0 | r3
            int r2 = r2 + 1
            goto L13
        L25:
            r6 = move-exception
            r6.printStackTrace()
        L29:
            return r0
    }

    public final java.lang.String e(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "@"
            boolean r0 = r3.startsWith(r0)
            if (r0 != 0) goto L9
            return r3
        L9:
            java.lang.ref.SoftReference<java.util.HashMap<java.lang.String, java.lang.String>> r0 = r2.b
            if (r0 == 0) goto L13
            java.lang.Object r0 = r0.get()
            if (r0 != 0) goto L23
        L13:
            java.lang.String r0 = "字符串变空了"
            com.mbridge.msdk.widget.custom.b.d.a(r0)
            java.lang.ref.SoftReference r0 = new java.lang.ref.SoftReference
            java.util.HashMap r1 = r2.d()
            r0.<init>(r1)
            r2.b = r0
        L23:
            r0 = 8
            java.lang.String r3 = r3.substring(r0)
            java.lang.ref.SoftReference<java.util.HashMap<java.lang.String, java.lang.String>> r0 = r2.b
            java.lang.Object r0 = r0.get()
            java.util.HashMap r0 = (java.util.HashMap) r0
            java.lang.Object r3 = r0.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            return r3
    }

    public final android.view.View f(java.lang.String r4) {
            r3 = this;
            com.mbridge.msdk.widget.custom.a.a r0 = new com.mbridge.msdk.widget.custom.a.a
            android.content.Context r1 = r3.f
            r0.<init>(r1)
            r1 = 0
            org.xmlpull.v1.XmlPullParser r4 = r0.a(r4)
            r2 = 0
            android.view.View r4 = r0.a(r4, r2, r1)
            return r4
    }
}
