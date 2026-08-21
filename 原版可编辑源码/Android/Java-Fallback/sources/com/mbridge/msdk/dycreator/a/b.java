package com.mbridge.msdk.dycreator.a;

public class b {
    private static volatile com.mbridge.msdk.dycreator.a.b g;
    private java.lang.ref.SoftReference<java.util.HashMap<java.lang.String, com.mbridge.msdk.dycreator.a.c>> a;
    private java.lang.ref.SoftReference<java.util.HashMap<java.lang.String, java.lang.String>> b;
    private java.lang.ref.SoftReference<java.util.HashMap<java.lang.String, com.mbridge.msdk.dycreator.a.c>> c;
    private java.lang.String d;
    private java.lang.String e;
    private android.content.Context f;

    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.dycreator.a.b a() {
            com.mbridge.msdk.dycreator.a.b r0 = com.mbridge.msdk.dycreator.a.b.g
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.dycreator.a.b> r0 = com.mbridge.msdk.dycreator.a.b.class
            monitor-enter(r0)
            com.mbridge.msdk.dycreator.a.b r1 = com.mbridge.msdk.dycreator.a.b.g     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.dycreator.a.b r1 = new com.mbridge.msdk.dycreator.a.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.dycreator.a.b.g = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.mbridge.msdk.dycreator.a.b r0 = com.mbridge.msdk.dycreator.a.b.g
            return r0
    }

    private java.util.HashMap<java.lang.String, java.lang.String> d() {
            r5 = this;
            r0 = 0
            android.content.Context r1 = r5.f     // Catch: java.io.IOException -> Le
            android.content.res.AssetManager r1 = r1.getAssets()     // Catch: java.io.IOException -> Le
            java.lang.String r2 = "rv_binddatas.xml"
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

    public final int a(java.lang.String r4) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L67
            java.lang.String r0 = "#"
            boolean r1 = r4.startsWith(r0)
            r2 = 7
            if (r1 == 0) goto L3a
            int r1 = r4.length()
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
            com.mbridge.msdk.dycreator.e.g.a(r4)
            r4 = -1
            return r4
        L3a:
            java.lang.String r0 = "@color/"
            boolean r0 = r4.startsWith(r0)
            if (r0 == 0) goto L67
            java.lang.String r4 = r4.substring(r2)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L67
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            java.lang.String r2 = "color"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r1, r4, r2)
            int r4 = r0.getColor(r4)
            return r4
        L67:
            r4 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            return r4
    }

    public final android.graphics.drawable.GradientDrawable a(java.lang.String[] r5) {
            r4 = this;
            r0 = 2
            r1 = r5[r0]     // Catch: java.lang.Exception -> L24
            android.graphics.drawable.GradientDrawable$Orientation r1 = com.mbridge.msdk.dycreator.baseview.GradientOrientationUtils.getOrientation(r1)     // Catch: java.lang.Exception -> L24
            int[] r0 = new int[r0]     // Catch: java.lang.Exception -> L24
            r2 = 0
            r3 = r5[r2]     // Catch: java.lang.Exception -> L24
            int r3 = android.graphics.Color.parseColor(r3)     // Catch: java.lang.Exception -> L24
            r0[r2] = r3     // Catch: java.lang.Exception -> L24
            r3 = 1
            r5 = r5[r3]     // Catch: java.lang.Exception -> L24
            int r5 = android.graphics.Color.parseColor(r5)     // Catch: java.lang.Exception -> L24
            r0[r3] = r5     // Catch: java.lang.Exception -> L24
            android.graphics.drawable.GradientDrawable r5 = new android.graphics.drawable.GradientDrawable     // Catch: java.lang.Exception -> L24
            r5.<init>(r1, r0)     // Catch: java.lang.Exception -> L24
            r5.setGradientType(r2)     // Catch: java.lang.Exception -> L24
            return r5
        L24:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            java.lang.String r0 = "MBResource"
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
            r5 = 0
            return r5
    }

    public final void a(android.content.Context r3) {
            r2 = this;
            android.util.DisplayMetrics r0 = com.mbridge.msdk.dycreator.e.e.a(r3)     // Catch: java.lang.Exception -> L25
            int r0 = r0.heightPixels     // Catch: java.lang.Exception -> L25
            r1 = 320(0x140, float:4.48E-43)
            if (r0 <= r1) goto L14
            boolean r0 = com.mbridge.msdk.dycreator.e.g.a     // Catch: java.lang.Exception -> L25
            if (r0 == 0) goto Lf
            goto L14
        Lf:
            java.lang.String r0 = "/drawable-hdpi/"
            r2.e = r0     // Catch: java.lang.Exception -> L25
            goto L18
        L14:
            java.lang.String r0 = "/drawable-mdpi/"
            r2.e = r0     // Catch: java.lang.Exception -> L25
        L18:
            r2.f = r3     // Catch: java.lang.Exception -> L25
            com.mbridge.msdk.dycreator.a.b r3 = a()     // Catch: java.lang.Exception -> L25
            java.util.HashMap r3 = r3.d()     // Catch: java.lang.Exception -> L25
            com.mbridge.msdk.dycreator.e.b.a = r3     // Catch: java.lang.Exception -> L25
            goto L2f
        L25:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r0 = "MBResource"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L2f:
            return
    }

    public final void a(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = com.mbridge.msdk.dycreator.e.g.a     // Catch: java.lang.Exception -> L36
            if (r0 == 0) goto Lf
            java.io.File r3 = r2.getFilesDir()     // Catch: java.lang.Exception -> L36
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L36
            r1.d = r3     // Catch: java.lang.Exception -> L36
            goto L11
        Lf:
            r1.d = r3     // Catch: java.lang.Exception -> L36
        L11:
            android.util.DisplayMetrics r3 = com.mbridge.msdk.dycreator.e.e.a(r2)     // Catch: java.lang.Exception -> L36
            int r3 = r3.heightPixels     // Catch: java.lang.Exception -> L36
            r0 = 320(0x140, float:4.48E-43)
            if (r3 <= r0) goto L25
            boolean r3 = com.mbridge.msdk.dycreator.e.g.a     // Catch: java.lang.Exception -> L36
            if (r3 == 0) goto L20
            goto L25
        L20:
            java.lang.String r3 = "/drawable-hdpi/"
            r1.e = r3     // Catch: java.lang.Exception -> L36
            goto L29
        L25:
            java.lang.String r3 = "/drawable-mdpi/"
            r1.e = r3     // Catch: java.lang.Exception -> L36
        L29:
            r1.f = r2     // Catch: java.lang.Exception -> L36
            com.mbridge.msdk.dycreator.a.b r2 = a()     // Catch: java.lang.Exception -> L36
            java.util.HashMap r2 = r2.d()     // Catch: java.lang.Exception -> L36
            com.mbridge.msdk.dycreator.e.b.a = r2     // Catch: java.lang.Exception -> L36
            goto L40
        L36:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r3 = "MBResource"
            com.mbridge.msdk.foundation.tools.z.d(r3, r2)
        L40:
            return
    }

    public final void a(java.lang.String r4, android.widget.ImageView r5) {
            r3 = this;
            if (r4 == 0) goto L2c
            java.lang.String r0 = "@drawable/"
            boolean r0 = r4.startsWith(r0)
            if (r0 == 0) goto L2c
            android.content.Context r0 = r3.f
            if (r0 == 0) goto L2c
            android.content.res.Resources r0 = r0.getResources()     // Catch: java.lang.Exception -> L22
            java.lang.String r1 = "drawable"
            android.content.Context r2 = r3.f     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L22
            int r4 = r0.getIdentifier(r4, r1, r2)     // Catch: java.lang.Exception -> L22
            r5.setImageResource(r4)     // Catch: java.lang.Exception -> L22
            goto L2c
        L22:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            java.lang.String r5 = "MBResource"
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)
        L2c:
            return
    }

    public final int b(java.lang.String r6) {
            r5 = this;
            int r6 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.Exception -> L5
            return r6
        L5:
            java.lang.String r0 = "d"
            int r1 = r6.indexOf(r0)
            java.lang.String r2 = "s"
            int r3 = r6.indexOf(r2)
            r4 = -1
            if (r1 == r4) goto L15
            goto L16
        L15:
            r1 = r3
        L16:
            r3 = 0
            java.lang.String r1 = r6.substring(r3, r1)
            int r1 = java.lang.Integer.parseInt(r1)
            boolean r0 = r6.contains(r0)
            if (r0 == 0) goto L37
            android.content.Context r6 = r5.f
            r0 = 1
            float r1 = (float) r1
            android.content.res.Resources r6 = r6.getResources()
            android.util.DisplayMetrics r6 = r6.getDisplayMetrics()
            float r6 = android.util.TypedValue.applyDimension(r0, r1, r6)
            int r6 = (int) r6
            return r6
        L37:
            r6.contains(r2)
            return r1
    }

    public final java.util.HashMap b() {
            r5 = this;
            java.lang.ref.SoftReference<java.util.HashMap<java.lang.String, com.mbridge.msdk.dycreator.a.c>> r0 = r5.a
            if (r0 == 0) goto La
            java.lang.Object r0 = r0.get()
            if (r0 != 0) goto L102
        La:
            r0 = 45
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>(r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.b
            java.lang.String r2 = "layout_width"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.c
            java.lang.String r2 = "layout_height"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.d
            java.lang.String r2 = "orientation"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.e
            java.lang.String r2 = "layout_centerHorizontal"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.f
            java.lang.String r2 = "layout_centerVertical"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.l
            java.lang.String r2 = "layout_marginLeft"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.m
            java.lang.String r3 = "layout_marginRight"
            r1.put(r3, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.q
            java.lang.String r4 = "layout_margin"
            r1.put(r4, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.r
            java.lang.String r4 = "layout_gravity"
            r1.put(r4, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.s
            java.lang.String r4 = "layout_alignParentRight"
            r1.put(r4, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.x
            java.lang.String r4 = "layout_weight"
            r1.put(r4, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.W
            java.lang.String r4 = "contentDescription"
            r1.put(r4, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.U
            java.lang.String r4 = "gravity"
            r1.put(r4, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.a
            java.lang.String r4 = "id"
            r1.put(r4, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.g
            java.lang.String r4 = "layout_below"
            r1.put(r4, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.h
            java.lang.String r4 = "layout_above"
            r1.put(r4, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.j
            java.lang.String r4 = "layout_toLeftOf"
            r1.put(r4, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.i
            java.lang.String r4 = "layout_toRightOf"
            r1.put(r4, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.k
            java.lang.String r4 = "layout_toEndOf"
            r1.put(r4, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.Q
            java.lang.String r4 = "background"
            r1.put(r4, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.n
            java.lang.String r4 = "layout_marginTop"
            r1.put(r4, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.o
            java.lang.String r4 = "layout_marginBottom"
            r1.put(r4, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.l
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.m
            r1.put(r3, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.u
            java.lang.String r2 = "layout_alignParentBottom"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.v
            java.lang.String r2 = "layout_alignParentTop"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.t
            java.lang.String r2 = "layout_alignParentLeft"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.w
            java.lang.String r2 = "layout_alignWithParentIfMissing"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.ad
            java.lang.String r2 = "layout_alignTop"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.ac
            java.lang.String r2 = "layout_alignBottom"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.af
            java.lang.String r2 = "layout_alignLeft"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.ag
            java.lang.String r2 = "layout_alignRight"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.ae
            java.lang.String r2 = "layout_centerInParent"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.y
            java.lang.String r2 = "layout_alignParentEnd"
            r1.put(r2, r0)
            java.lang.ref.SoftReference r0 = new java.lang.ref.SoftReference
            r0.<init>(r1)
            r5.a = r0
        L102:
            java.lang.ref.SoftReference<java.util.HashMap<java.lang.String, com.mbridge.msdk.dycreator.a.c>> r0 = r5.a
            java.lang.Object r0 = r0.get()
            java.util.HashMap r0 = (java.util.HashMap) r0
            return r0
    }

    public final int c(java.lang.String r6) {
            r5 = this;
            java.lang.String r6 = r6.toUpperCase()
            java.lang.String r0 = "\\|"
            java.lang.String[] r6 = r6.split(r0)
            r0 = 48
            java.lang.String r1 = "android.view.Gravity"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L24
            r2 = 0
        L13:
            int r3 = r6.length     // Catch: java.lang.Exception -> L24
            if (r2 >= r3) goto L28
            r3 = r6[r2]     // Catch: java.lang.Exception -> L24
            java.lang.reflect.Field r3 = r1.getField(r3)     // Catch: java.lang.Exception -> L24
            r4 = 0
            int r0 = r3.getInt(r4)     // Catch: java.lang.Exception -> L24
            int r2 = r2 + 1
            goto L13
        L24:
            r6 = move-exception
            r6.printStackTrace()
        L28:
            return r0
    }

    public final java.util.HashMap<java.lang.String, com.mbridge.msdk.dycreator.a.c> c() {
            r4 = this;
            java.lang.ref.SoftReference<java.util.HashMap<java.lang.String, com.mbridge.msdk.dycreator.a.c>> r0 = r4.c
            if (r0 == 0) goto La
            java.lang.Object r0 = r0.get()
            if (r0 != 0) goto L135
        La:
            r0 = 55
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>(r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.a
            java.lang.String r2 = "id"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.G
            java.lang.String r2 = "text"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.H
            java.lang.String r2 = "ellipsize"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.I
            java.lang.String r2 = "singleLine"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.K
            java.lang.String r2 = "lines"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.J
            java.lang.String r2 = "maxLength"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.aa
            java.lang.String r2 = "drawableLeft"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.ab
            java.lang.String r2 = "drawablePadding"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.L
            java.lang.String r2 = "fadingEdge"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.M
            java.lang.String r2 = "scrollHorizontally"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.N
            java.lang.String r2 = "textColor"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.O
            java.lang.String r2 = "textSize"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.P
            java.lang.String r2 = "visibility"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.Q
            java.lang.String r2 = "background"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.R
            java.lang.String r3 = "textStyle"
            r1.put(r3, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.S
            java.lang.String r3 = "style"
            r1.put(r3, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.b
            java.lang.String r3 = "layout_width"
            r1.put(r3, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.c
            java.lang.String r3 = "layout_height"
            r1.put(r3, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.g
            java.lang.String r3 = "layout_below"
            r1.put(r3, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.ae
            java.lang.String r3 = "layout_centerInParent"
            r1.put(r3, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.W
            java.lang.String r3 = "contentDescription"
            r1.put(r3, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.T
            java.lang.String r3 = "src"
            r1.put(r3, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.U
            java.lang.String r3 = "gravity"
            r1.put(r3, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.d
            java.lang.String r3 = "orientation"
            r1.put(r3, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.V
            java.lang.String r3 = "numColumns"
            r1.put(r3, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.E
            java.lang.String r3 = "verticalSpacing"
            r1.put(r3, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.F
            java.lang.String r3 = "horizontalSpacing"
            r1.put(r3, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.Q
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.o
            java.lang.String r2 = "layout_marginBottom"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.X
            java.lang.String r2 = "scaleType"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.Y
            java.lang.String r2 = "tag"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.r
            java.lang.String r2 = "layout_gravity"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.Z
            java.lang.String r2 = "parent_view"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.ah
            java.lang.String r2 = "padding"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.ai
            java.lang.String r2 = "paddingTop"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.aj
            java.lang.String r2 = "paddingBottom"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.ak
            java.lang.String r2 = "paddingLeft"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.al
            java.lang.String r2 = "paddingRight"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.z
            java.lang.String r2 = "divider"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.A
            java.lang.String r2 = "scrollbars"
            r1.put(r2, r0)
            com.mbridge.msdk.dycreator.a.c r0 = com.mbridge.msdk.dycreator.a.c.B
            java.lang.String r2 = "listSelector"
            r1.put(r2, r0)
            java.lang.ref.SoftReference r0 = new java.lang.ref.SoftReference
            r0.<init>(r1)
            r4.c = r0
        L135:
            java.lang.ref.SoftReference<java.util.HashMap<java.lang.String, com.mbridge.msdk.dycreator.a.c>> r0 = r4.c
            java.lang.Object r0 = r0.get()
            java.util.HashMap r0 = (java.util.HashMap) r0
            return r0
    }

    public final int d(java.lang.String r5) {
            r4 = this;
            android.content.Context r0 = r4.f
            if (r0 == 0) goto L46
            java.lang.String r0 = r0.getPackageName()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = ".R$"
            r1.append(r0)
            java.lang.String r0 = "\\."
            java.lang.String[] r5 = r5.split(r0)
            r0 = 1
            r2 = r5[r0]
            r1.append(r2)
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L42
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L42
            java.lang.Object r2 = r1.newInstance()     // Catch: java.lang.Exception -> L42
            r3 = 2
            r5 = r5[r3]     // Catch: java.lang.Exception -> L42
            java.lang.reflect.Field r5 = r1.getDeclaredField(r5)     // Catch: java.lang.Exception -> L42
            r5.setAccessible(r0)     // Catch: java.lang.Exception -> L42
            java.lang.Object r5 = r5.get(r2)     // Catch: java.lang.Exception -> L42
            java.lang.Integer r5 = (java.lang.Integer) r5     // Catch: java.lang.Exception -> L42
            int r5 = r5.intValue()     // Catch: java.lang.Exception -> L42
            goto L47
        L42:
            r5 = move-exception
            r5.printStackTrace()
        L46:
            r5 = 0
        L47:
            return r5
    }

    public final java.lang.String e(java.lang.String r4) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L7a
            java.lang.String r0 = "@"
            boolean r0 = r4.startsWith(r0)
            if (r0 != 0) goto Lf
            return r4
        Lf:
            java.lang.ref.SoftReference<java.util.HashMap<java.lang.String, java.lang.String>> r0 = r3.b
            if (r0 == 0) goto L19
            java.lang.Object r0 = r0.get()
            if (r0 != 0) goto L24
        L19:
            java.lang.ref.SoftReference r0 = new java.lang.ref.SoftReference
            java.util.HashMap r1 = r3.d()
            r0.<init>(r1)
            r3.b = r0
        L24:
            r0 = 8
            java.lang.String r4 = r4.substring(r0)
            java.lang.ref.SoftReference<java.util.HashMap<java.lang.String, java.lang.String>> r0 = r3.b
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto L7a
            java.lang.ref.SoftReference<java.util.HashMap<java.lang.String, java.lang.String>> r0 = r3.b
            java.lang.Object r0 = r0.get()
            java.util.HashMap r0 = (java.util.HashMap) r0
            int r0 = r0.size()
            if (r0 <= 0) goto L7a
            java.lang.ref.SoftReference<java.util.HashMap<java.lang.String, java.lang.String>> r0 = r3.b
            java.lang.Object r0 = r0.get()
            java.util.HashMap r0 = (java.util.HashMap) r0
            java.lang.Object r0 = r0.get(r4)
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L55
            return r0
        L55:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L70
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L70
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L70
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L70
            java.lang.String r2 = "string"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r1, r4, r2)     // Catch: java.lang.Exception -> L70
            java.lang.String r4 = r0.getString(r4)     // Catch: java.lang.Exception -> L70
            return r4
        L70:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            java.lang.String r0 = "MBResource"
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
        L7a:
            r4 = 0
            return r4
    }

    public final android.view.View f(java.lang.String r4) {
            r3 = this;
            android.content.Context r0 = r3.f
            r1 = 0
            if (r0 == 0) goto L2b
            com.mbridge.msdk.dycreator.a.a r0 = new com.mbridge.msdk.dycreator.a.a     // Catch: java.lang.Exception -> L21
            android.content.Context r2 = r3.f     // Catch: java.lang.Exception -> L21
            r0.<init>(r2)     // Catch: java.lang.Exception -> L21
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Exception -> L21
            r2.<init>()     // Catch: java.lang.Exception -> L21
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Exception -> L21
            com.mbridge.msdk.dycreator.e.g.a(r2)     // Catch: java.lang.Exception -> L21
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L21
            android.view.View r4 = r0.a(r4, r1)     // Catch: java.lang.Exception -> L21
            return r4
        L21:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            java.lang.String r0 = "MBResource"
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
        L2b:
            return r1
    }
}
