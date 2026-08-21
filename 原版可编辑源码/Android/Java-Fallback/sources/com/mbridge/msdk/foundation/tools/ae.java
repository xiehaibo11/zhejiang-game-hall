package com.mbridge.msdk.foundation.tools;

public final class ae extends com.mbridge.msdk.foundation.tools.h {
    private static char[] a;
    private static char[] b;
    private static int c;
    private static int d;
    private static int e;
    private static int f;
    private static int g;
    private static int h;
    private static int i;
    private static int j;
    private static int k;
    private static int l;
    private static java.lang.String m;
    private static java.util.regex.Pattern n;
    private static int o;
    private static boolean p;
    private static java.util.Map<java.lang.String, java.lang.String> q;
    private static java.util.Map<java.lang.String, java.lang.String> r;
    private static volatile java.lang.Boolean s;

    static {
            r0 = 15
            char[] r0 = new char[r0]
            r0 = {x0044: FILL_ARRAY_DATA , data: [65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 73, 110, 102, 111} // fill-array
            com.mbridge.msdk.foundation.tools.ae.a = r0
            r0 = 2
            char[] r1 = new char[r0]
            r1 = {x0058: FILL_ARRAY_DATA , data: [46, 88} // fill-array
            com.mbridge.msdk.foundation.tools.ae.b = r1
            r1 = 0
            com.mbridge.msdk.foundation.tools.ae.c = r1
            r2 = 1
            com.mbridge.msdk.foundation.tools.ae.d = r2
            com.mbridge.msdk.foundation.tools.ae.e = r0
            r0 = 3
            com.mbridge.msdk.foundation.tools.ae.f = r0
            com.mbridge.msdk.foundation.tools.ae.g = r1
            r0 = 7
            com.mbridge.msdk.foundation.tools.ae.h = r0
            r0 = 14
            com.mbridge.msdk.foundation.tools.ae.i = r0
            r0 = 19
            com.mbridge.msdk.foundation.tools.ae.j = r0
            r0 = 16
            com.mbridge.msdk.foundation.tools.ae.k = r0
            r0 = 26
            com.mbridge.msdk.foundation.tools.ae.l = r0
            java.lang.String r0 = "[一-龥]"
            com.mbridge.msdk.foundation.tools.ae.m = r0
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.mbridge.msdk.foundation.tools.ae.n = r0
            com.mbridge.msdk.foundation.tools.ae.o = r2
            com.mbridge.msdk.foundation.tools.ae.p = r2
            r0 = 0
            com.mbridge.msdk.foundation.tools.ae.s = r0
            return
    }

    public static double a(java.lang.Double r3) {
            java.util.Locale r0 = java.util.Locale.US     // Catch: java.lang.Exception -> L1c
            java.text.DecimalFormatSymbols r0 = java.text.DecimalFormatSymbols.getInstance(r0)     // Catch: java.lang.Exception -> L1c
            java.text.DecimalFormat r1 = new java.text.DecimalFormat     // Catch: java.lang.Exception -> L1c
            java.lang.String r2 = "0.00"
            r1.<init>(r2, r0)     // Catch: java.lang.Exception -> L1c
            java.lang.String r3 = r1.format(r3)     // Catch: java.lang.Exception -> L1c
            boolean r0 = com.mbridge.msdk.foundation.tools.ai.b(r3)     // Catch: java.lang.Exception -> L1c
            if (r0 == 0) goto L20
            double r0 = java.lang.Double.parseDouble(r3)     // Catch: java.lang.Exception -> L1c
            return r0
        L1c:
            r3 = move-exception
            r3.printStackTrace()
        L20:
            r0 = 0
            return r0
    }

    public static int a() {
            int r0 = com.mbridge.msdk.foundation.tools.ae.o
            int r1 = r0 + 1
            com.mbridge.msdk.foundation.tools.ae.o = r1
            return r0
    }

    public static int a(android.content.Context r2, float r3) {
            r0 = 1075838976(0x40200000, float:2.5)
            if (r2 == 0) goto L1a
            android.content.res.Resources r2 = r2.getResources()     // Catch: java.lang.Exception -> L16
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()     // Catch: java.lang.Exception -> L16
            float r2 = r2.density     // Catch: java.lang.Exception -> L16
            r1 = 0
            int r1 = (r2 > r1 ? 1 : (r2 == r1 ? 0 : -1))
            if (r1 != 0) goto L14
            goto L1a
        L14:
            r0 = r2
            goto L1a
        L16:
            r2 = move-exception
            r2.printStackTrace()
        L1a:
            float r3 = r3 / r0
            r2 = 1056964608(0x3f000000, float:0.5)
            float r3 = r3 + r2
            int r2 = (int) r3
            return r2
    }

    public static int a(java.lang.Object r3) {
            r0 = 0
            if (r3 == 0) goto L19
            boolean r1 = r3 instanceof java.lang.String     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto L19
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> Lf
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Throwable -> Lf
            r0 = r3
            goto L19
        Lf:
            r3 = move-exception
            java.lang.String r1 = r3.getMessage()
            java.lang.String r2 = "SameTools"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r3)
        L19:
            return r0
    }

    public static long a(java.io.File r4) throws java.lang.Exception {
            r0 = 0
            r2 = 0
            boolean r3 = r4.exists()     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L2a
            if (r3 == 0) goto L1a
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L2a
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L2a
            int r4 = r3.available()     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L18
            long r0 = (long) r4
            r2 = r3
            goto L1d
        L15:
            r4 = move-exception
            r2 = r3
            goto L24
        L18:
            r2 = r3
            goto L2a
        L1a:
            r4.createNewFile()     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L2a
        L1d:
            if (r2 == 0) goto L2d
        L1f:
            r2.close()     // Catch: java.lang.Exception -> L2d
            goto L2d
        L23:
            r4 = move-exception
        L24:
            if (r2 == 0) goto L29
            r2.close()     // Catch: java.lang.Exception -> L29
        L29:
            throw r4
        L2a:
            if (r2 == 0) goto L2d
            goto L1f
        L2d:
            return r0
    }

    public static synchronized java.lang.String a(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            java.lang.Class<com.mbridge.msdk.foundation.tools.ae> r0 = com.mbridge.msdk.foundation.tools.ae.class
            monitor-enter(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L15
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L15
            java.lang.String r2 = a(r4, r2, r3)     // Catch: java.lang.Exception -> Lf java.lang.Throwable -> L15
            r1.append(r2)     // Catch: java.lang.Exception -> Lf java.lang.Throwable -> L15
        Lf:
            java.lang.String r2 = r1.toString()     // Catch: java.lang.Throwable -> L15
            monitor-exit(r0)
            return r2
        L15:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private static synchronized java.lang.String a(java.lang.String r2, android.content.Context r3, java.lang.String r4) {
            java.lang.Class<com.mbridge.msdk.foundation.tools.ae> r0 = com.mbridge.msdk.foundation.tools.ae.class
            monitor-enter(r0)
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            java.util.Set r2 = r2.getQueryParameterNames()     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            if (r2 == 0) goto L1b
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            if (r2 <= 0) goto L1b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            java.lang.String r1 = "&rtins_type="
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            goto L2c
        L1b:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            java.lang.String r1 = "?rtins_type="
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            goto L2c
        L23:
            r2 = move-exception
            goto L4b
        L25:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L23
            java.lang.String r1 = "&rtins_type="
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L23
        L2c:
            r1 = 0
            java.lang.Object r3 = b(r4, r3)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L42
            r4 = 1
            if (r3 == 0) goto L36
            r3 = r4
            goto L37
        L36:
            r3 = r1
        L37:
            if (r3 == 0) goto L3d
            r2.append(r4)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L42
            goto L45
        L3d:
            r3 = 2
            r2.append(r3)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L42
            goto L45
        L42:
            r2.append(r1)     // Catch: java.lang.Throwable -> L23
        L45:
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L23
            monitor-exit(r0)
            return r2
        L4b:
            monitor-exit(r0)
            throw r2
    }

    public static java.lang.String a(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L20
            if (r0 != 0) goto L1f
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L20
            if (r0 != 0) goto L1f
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L20
            if (r0 == 0) goto L13
            goto L1f
        L13:
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Exception -> L20
            r0.<init>()     // Catch: java.lang.Exception -> L20
            r0.put(r2, r3)     // Catch: java.lang.Exception -> L20
            java.lang.String r1 = a(r1, r0)     // Catch: java.lang.Exception -> L20
        L1f:
            return r1
        L20:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r3 = "SameTools"
            com.mbridge.msdk.foundation.tools.z.d(r3, r2)
            return r1
    }

    private static java.lang.String a(java.lang.String r5, java.util.Map<java.lang.String, java.lang.String> r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> Le9
            if (r0 != 0) goto Le8
            if (r6 != 0) goto La
            goto Le8
        La:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le9
            r0.<init>(r5)     // Catch: java.lang.Exception -> Le9
            java.util.Set r6 = r6.entrySet()     // Catch: java.lang.Exception -> Le9
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Exception -> Le9
        L17:
            boolean r1 = r6.hasNext()     // Catch: java.lang.Exception -> Le9
            if (r1 == 0) goto Le4
            java.lang.Object r1 = r6.next()     // Catch: java.lang.Exception -> Le9
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Exception -> Le9
            if (r1 == 0) goto L17
            java.lang.Object r2 = r1.getKey()     // Catch: java.lang.Exception -> Le9
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2     // Catch: java.lang.Exception -> Le9
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Le9
            if (r2 != 0) goto L17
            java.lang.Object r2 = r1.getValue()     // Catch: java.lang.Exception -> Le9
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2     // Catch: java.lang.Exception -> Le9
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Le9
            if (r2 == 0) goto L3e
            goto L17
        L3e:
            java.lang.Object r2 = r1.getValue()     // Catch: java.lang.Exception -> Le9
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> Le9
            java.lang.Object r3 = r1.getKey()     // Catch: java.lang.Exception -> Le9
            java.lang.CharSequence r3 = (java.lang.CharSequence) r3     // Catch: java.lang.Exception -> Le9
            boolean r3 = r5.contains(r3)     // Catch: java.lang.Exception -> Le9
            java.lang.String r4 = "0"
            if (r3 == 0) goto Lbe
            boolean r0 = r2.equals(r4)     // Catch: java.lang.Exception -> Le9
            java.lang.String r2 = "[^&]*)"
            java.lang.String r3 = "("
            if (r0 == 0) goto L80
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le9
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le9
            r4.<init>()     // Catch: java.lang.Exception -> Le9
            r4.append(r3)     // Catch: java.lang.Exception -> Le9
            java.lang.Object r1 = r1.getKey()     // Catch: java.lang.Exception -> Le9
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> Le9
            r4.append(r1)     // Catch: java.lang.Exception -> Le9
            r4.append(r2)     // Catch: java.lang.Exception -> Le9
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Exception -> Le9
            java.lang.String r2 = ""
            java.lang.String r1 = r5.replaceAll(r1, r2)     // Catch: java.lang.Exception -> Le9
            r0.<init>(r1)     // Catch: java.lang.Exception -> Le9
            goto L17
        L80:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le9
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le9
            r4.<init>()     // Catch: java.lang.Exception -> Le9
            r4.append(r3)     // Catch: java.lang.Exception -> Le9
            java.lang.Object r3 = r1.getKey()     // Catch: java.lang.Exception -> Le9
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> Le9
            r4.append(r3)     // Catch: java.lang.Exception -> Le9
            r4.append(r2)     // Catch: java.lang.Exception -> Le9
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Exception -> Le9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le9
            r3.<init>()     // Catch: java.lang.Exception -> Le9
            java.lang.Object r4 = r1.getKey()     // Catch: java.lang.Exception -> Le9
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> Le9
            r3.append(r4)     // Catch: java.lang.Exception -> Le9
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Exception -> Le9
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> Le9
            r3.append(r1)     // Catch: java.lang.Exception -> Le9
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Exception -> Le9
            java.lang.String r1 = r5.replaceAll(r2, r1)     // Catch: java.lang.Exception -> Le9
            r0.<init>(r1)     // Catch: java.lang.Exception -> Le9
            goto L17
        Lbe:
            boolean r2 = r2.equals(r4)     // Catch: java.lang.Exception -> Le9
            if (r2 != 0) goto L17
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le9
            r2.<init>()     // Catch: java.lang.Exception -> Le9
            java.lang.Object r3 = r1.getKey()     // Catch: java.lang.Exception -> Le9
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> Le9
            r2.append(r3)     // Catch: java.lang.Exception -> Le9
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Exception -> Le9
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> Le9
            r2.append(r1)     // Catch: java.lang.Exception -> Le9
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> Le9
            r0.append(r1)     // Catch: java.lang.Exception -> Le9
            goto L17
        Le4:
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Exception -> Le9
        Le8:
            return r5
        Le9:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            java.lang.String r0 = "SameTools"
            com.mbridge.msdk.foundation.tools.z.d(r0, r6)
            return r5
    }

    public static java.lang.String a(org.json.JSONArray r4) {
            if (r4 != 0) goto L5
            java.lang.String r4 = ""
            return r4
        L5:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.k()
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r0 = r1.b(r0)
            if (r0 != 0) goto L1f
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r0 = r0.b()
        L1f:
            int r0 = r0.V()
            int r1 = r4.length()
            if (r1 <= r0) goto L45
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>()
            r2 = 0
        L2f:
            if (r2 >= r0) goto L40
            java.lang.Object r3 = r4.get(r2)     // Catch: org.json.JSONException -> L39
            r1.put(r3)     // Catch: org.json.JSONException -> L39
            goto L3d
        L39:
            r3 = move-exception
            r3.printStackTrace()
        L3d:
            int r2 = r2 + 1
            goto L2f
        L40:
            java.lang.String r4 = r1.toString()
            goto L49
        L45:
            java.lang.String r4 = r4.toString()
        L49:
            return r4
    }

    private static java.util.List<java.lang.String> a(java.lang.StackTraceElement[] r4) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r4 == 0) goto L1a
            int r1 = r4.length
            if (r1 <= 0) goto L1a
            int r1 = r4.length
            r2 = 0
        Lc:
            if (r2 >= r1) goto L1a
            r3 = r4[r2]
            java.lang.String r3 = r3.getClassName()
            r0.add(r3)
            int r2 = r2 + 1
            goto Lc
        L1a:
            return r0
    }

    public static org.json.JSONArray a(android.content.Context r7, java.lang.String r8) {
            java.lang.String r8 = "SameTools"
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L70
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L70
            java.lang.String r2 = r2.k()     // Catch: java.lang.Exception -> L70
            com.mbridge.msdk.c.a r1 = r1.b(r2)     // Catch: java.lang.Exception -> L70
            if (r1 != 0) goto L21
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L70
            com.mbridge.msdk.c.a r1 = r1.b()     // Catch: java.lang.Exception -> L70
        L21:
            if (r1 == 0) goto L74
            int r2 = r1.ai()     // Catch: java.lang.Exception -> L70
            r3 = 1
            if (r2 != r3) goto L74
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L70
            r2.<init>()     // Catch: java.lang.Exception -> L70
            java.lang.String r3 = "fqci cfc:"
            r2.append(r3)     // Catch: java.lang.Exception -> L70
            int r1 = r1.ai()     // Catch: java.lang.Exception -> L70
            r2.append(r1)     // Catch: java.lang.Exception -> L70
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> L70
            com.mbridge.msdk.foundation.tools.z.b(r8, r1)     // Catch: java.lang.Exception -> L70
            com.mbridge.msdk.foundation.db.i r7 = com.mbridge.msdk.foundation.db.i.a(r7)     // Catch: java.lang.Exception -> L70
            com.mbridge.msdk.foundation.db.l r7 = com.mbridge.msdk.foundation.db.l.a(r7)     // Catch: java.lang.Exception -> L70
            long[] r7 = r7.a()     // Catch: java.lang.Exception -> L70
            if (r7 == 0) goto L74
            int r1 = r7.length     // Catch: java.lang.Exception -> L70
            r2 = 0
        L52:
            if (r2 >= r1) goto L74
            r3 = r7[r2]     // Catch: java.lang.Exception -> L70
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L70
            r5.<init>()     // Catch: java.lang.Exception -> L70
            java.lang.String r6 = "cfc campaignIds:"
            r5.append(r6)     // Catch: java.lang.Exception -> L70
            r5.append(r7)     // Catch: java.lang.Exception -> L70
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L70
            com.mbridge.msdk.foundation.tools.z.b(r8, r5)     // Catch: java.lang.Exception -> L70
            r0.put(r3)     // Catch: java.lang.Exception -> L70
            int r2 = r2 + 1
            goto L52
        L70:
            r7 = move-exception
            r7.printStackTrace()
        L74:
            return r0
    }

    public static void a(android.view.View r2) {
            if (r2 != 0) goto L3
            return
        L3:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lf
            r1 = 11
            if (r0 < r1) goto L13
            r0 = 4102(0x1006, float:5.748E-42)
            r2.setSystemUiVisibility(r0)     // Catch: java.lang.Throwable -> Lf
            goto L13
        Lf:
            r2 = move-exception
            r2.printStackTrace()
        L13:
            return
    }

    public static void a(android.widget.ImageView r1) {
            if (r1 != 0) goto L3
            return
        L3:
            r0 = 0
            r1.setImageResource(r0)     // Catch: java.lang.Throwable -> L12
            r0 = 0
            r1.setImageDrawable(r0)     // Catch: java.lang.Throwable -> L12
            r1.setImageURI(r0)     // Catch: java.lang.Throwable -> L12
            r1.setImageBitmap(r0)     // Catch: java.lang.Throwable -> L12
            goto L1a
        L12:
            r1 = move-exception
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L1a
            r1.printStackTrace()
        L1a:
            return
    }

    public static void a(java.lang.String r4, com.mbridge.msdk.foundation.entity.CampaignEx r5, int r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L3e
            if (r5 == 0) goto L3e
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            if (r0 == 0) goto L3e
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)
            com.mbridge.msdk.foundation.db.k r0 = com.mbridge.msdk.foundation.db.k.a(r0)
            com.mbridge.msdk.foundation.entity.g r1 = new com.mbridge.msdk.foundation.entity.g
            r1.<init>()
            long r2 = java.lang.System.currentTimeMillis()
            r1.a(r2)
            r1.b(r4)
            java.lang.String r4 = r5.getId()
            r1.a(r4)
            r1.a(r6)
            r0.a(r1)
        L3e:
            return
    }

    public static synchronized void a(java.lang.String r3, java.lang.String r4) {
            java.lang.Class<com.mbridge.msdk.foundation.tools.ae> r0 = com.mbridge.msdk.foundation.tools.ae.class
            monitor-enter(r0)
            java.util.Map<java.lang.String, java.lang.String> r1 = com.mbridge.msdk.foundation.tools.ae.r     // Catch: java.lang.Throwable -> L31
            if (r1 != 0) goto Le
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L31
            r1.<init>()     // Catch: java.lang.Throwable -> L31
            com.mbridge.msdk.foundation.tools.ae.r = r1     // Catch: java.lang.Throwable -> L31
        Le:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L31
            r1.<init>()     // Catch: java.lang.Throwable -> L31
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = r2.k()     // Catch: java.lang.Throwable -> L31
            r1.append(r2)     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = "_"
            r1.append(r2)     // Catch: java.lang.Throwable -> L31
            r1.append(r3)     // Catch: java.lang.Throwable -> L31
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L31
            java.util.Map<java.lang.String, java.lang.String> r1 = com.mbridge.msdk.foundation.tools.ae.r     // Catch: java.lang.Throwable -> L31
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> L31
            monitor-exit(r0)
            return
        L31:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static boolean a(com.mbridge.msdk.foundation.entity.CampaignEx r0) {
            if (r0 == 0) goto Ld
            java.lang.String r0 = r0.getDeepLinkURL()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r0 = r0 ^ 1
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public static <T extends java.lang.String> boolean a(T r0) {
            if (r0 == 0) goto Lb
            int r0 = r0.length()
            if (r0 != 0) goto L9
            goto Lb
        L9:
            r0 = 0
            goto Lc
        Lb:
            r0 = 1
        Lc:
            return r0
    }

    public static boolean a(java.lang.String r2, android.content.Context r3) {
            r0 = 0
            android.content.pm.PackageManager r1 = r3.getPackageManager()     // Catch: java.lang.Exception -> L10
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Exception -> L10
            int r2 = r1.checkPermission(r2, r3)     // Catch: java.lang.Exception -> L10
            if (r2 != 0) goto L10
            r0 = 1
        L10:
            return r0
    }

    public static boolean a(org.json.JSONObject r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            int r1 = r3.length()
            if (r1 != 0) goto Lb
            return r0
        Lb:
            r1 = -1
            java.lang.String r2 = "v"
            int r3 = r3.optInt(r2, r1)
            if (r3 == r1) goto L15
            return r0
        L15:
            r3 = 1
            return r3
    }

    public static double b(java.lang.String r3) {
            r0 = 0
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Ld
            if (r2 != 0) goto L11
            double r0 = java.lang.Double.parseDouble(r3)     // Catch: java.lang.Exception -> Ld
            goto L11
        Ld:
            r3 = move-exception
            r3.printStackTrace()
        L11:
            return r0
    }

    public static int b(android.content.Context r1, float r2) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            android.content.res.Resources r1 = r1.getResources()
            if (r1 != 0) goto Lb
            return r0
        Lb:
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            float r1 = r1.density
            float r2 = r2 * r1
            r1 = 1056964608(0x3f000000, float:0.5)
            float r2 = r2 + r1
            int r1 = (int) r2
            return r1
    }

    public static int b(java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Exception -> L1e
            if (r2 == 0) goto L28
            java.lang.String r2 = r2.getQueryParameter(r3)     // Catch: java.lang.Exception -> L1e
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L1e
            if (r3 == 0) goto L19
            return r1
        L19:
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Exception -> L1e
            return r2
        L1e:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r3 = "SameTools"
            com.mbridge.msdk.foundation.tools.z.d(r3, r2)
        L28:
            return r1
    }

    private static java.lang.Object b(java.lang.String r8, android.content.Context r9) {
            r0 = 0
            int r1 = com.mbridge.msdk.foundation.tools.ae.c     // Catch: java.lang.Throwable -> L5e
            char[] r1 = d(r1)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L5e
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L5e
            int r2 = com.mbridge.msdk.foundation.tools.ae.e     // Catch: java.lang.Throwable -> L5e
            char[] r2 = d(r2)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L5e
            r3 = 2
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L5e
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Throwable -> L5e
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L5e
            r7 = 1
            r4[r7] = r5     // Catch: java.lang.Throwable -> L5e
            java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L5e
            int r2 = com.mbridge.msdk.foundation.tools.ae.d     // Catch: java.lang.Throwable -> L5e
            char[] r2 = d(r2)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L5e
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Throwable -> L5e
            int r4 = com.mbridge.msdk.foundation.tools.ae.f     // Catch: java.lang.Throwable -> L5e
            char[] r4 = d(r4)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Throwable -> L5e
            java.lang.Class[] r5 = new java.lang.Class[r6]     // Catch: java.lang.Throwable -> L5e
            java.lang.reflect.Method r2 = r2.getMethod(r4, r5)     // Catch: java.lang.Throwable -> L5e
            java.lang.Object[] r4 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L5e
            java.lang.Object r9 = r2.invoke(r9, r4)     // Catch: java.lang.Throwable -> L5e
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L5e
            r2[r6] = r8     // Catch: java.lang.Throwable -> L5e
            r8 = 8192(0x2000, float:1.148E-41)
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L5e
            r2[r7] = r8     // Catch: java.lang.Throwable -> L5e
            java.lang.Object r0 = r1.invoke(r9, r2)     // Catch: java.lang.Throwable -> L5e
        L5e:
            return r0
    }

    public static java.lang.String b(int r6) {
            java.lang.String r0 = ""
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L5f
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L5f
            java.lang.String r2 = r2.k()     // Catch: java.lang.Exception -> L5f
            com.mbridge.msdk.c.a r1 = r1.b(r2)     // Catch: java.lang.Exception -> L5f
            if (r1 != 0) goto L1c
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L5f
            com.mbridge.msdk.c.a r1 = r1.b()     // Catch: java.lang.Exception -> L5f
        L1c:
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Exception -> L5f
            r2.<init>()     // Catch: java.lang.Exception -> L5f
            if (r1 == 0) goto L54
            int r1 = r1.ai()     // Catch: java.lang.Exception -> L5f
            r3 = 1
            if (r1 != r3) goto L54
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L5f
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L5f
            com.mbridge.msdk.foundation.db.i r1 = com.mbridge.msdk.foundation.db.i.a(r1)     // Catch: java.lang.Exception -> L5f
            com.mbridge.msdk.foundation.db.l r1 = com.mbridge.msdk.foundation.db.l.a(r1)     // Catch: java.lang.Exception -> L5f
            long[] r1 = r1.a()     // Catch: java.lang.Exception -> L5f
            if (r1 == 0) goto L54
            int r3 = r1.length     // Catch: java.lang.Exception -> L5f
            if (r3 <= r6) goto L49
            if (r6 != 0) goto L46
            goto L49
        L46:
            int r6 = r3 - r6
            goto L4a
        L49:
            r6 = 0
        L4a:
            if (r6 >= r3) goto L54
            r4 = r1[r6]     // Catch: java.lang.Exception -> L5f
            r2.put(r4)     // Catch: java.lang.Exception -> L5f
            int r6 = r6 + 1
            goto L4a
        L54:
            int r6 = r2.length()     // Catch: java.lang.Exception -> L5f
            if (r6 <= 0) goto L63
            java.lang.String r0 = a(r2)     // Catch: java.lang.Exception -> L5f
            goto L63
        L5f:
            r6 = move-exception
            r6.printStackTrace()
        L63:
            return r0
    }

    public static java.lang.String b(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = ""
            org.json.JSONArray r2 = a(r2, r3)     // Catch: java.lang.Exception -> L27
            int r3 = r2.length()     // Catch: java.lang.Exception -> L27
            if (r3 <= 0) goto L10
            java.lang.String r0 = a(r2)     // Catch: java.lang.Exception -> L27
        L10:
            java.lang.String r2 = "SameTools"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L27
            r3.<init>()     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = "get excludes:"
            r3.append(r1)     // Catch: java.lang.Exception -> L27
            r3.append(r0)     // Catch: java.lang.Exception -> L27
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L27
            com.mbridge.msdk.foundation.tools.z.b(r2, r3)     // Catch: java.lang.Exception -> L27
            goto L2b
        L27:
            r2 = move-exception
            r2.printStackTrace()
        L2b:
            return r0
    }

    public static java.lang.String b(java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L50
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L50
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto L13
            goto L50
        L13:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L46
            r0.<init>(r4)     // Catch: java.lang.Exception -> L46
            java.lang.String r1 = "device"
            org.json.JSONObject r1 = r0.getJSONObject(r1)     // Catch: java.lang.Exception -> L46
            if (r1 != 0) goto L21
            return r4
        L21:
            boolean r2 = r1.has(r5)     // Catch: java.lang.Exception -> L46
            java.lang.String r3 = "0"
            if (r2 == 0) goto L37
            boolean r2 = r6.equals(r3)     // Catch: java.lang.Exception -> L46
            if (r2 == 0) goto L33
            r1.remove(r5)     // Catch: java.lang.Exception -> L46
            goto L41
        L33:
            r1.put(r5, r6)     // Catch: java.lang.Exception -> L46
            goto L41
        L37:
            boolean r2 = r6.equals(r3)     // Catch: java.lang.Exception -> L46
            if (r2 == 0) goto L3e
            return r4
        L3e:
            r1.put(r5, r6)     // Catch: java.lang.Exception -> L46
        L41:
            java.lang.String r4 = r0.toString()
            return r4
        L46:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            java.lang.String r6 = "SameTools"
            com.mbridge.msdk.foundation.tools.z.d(r6, r5)
        L50:
            return r4
    }

    public static java.util.List<java.lang.String> b(org.json.JSONArray r5) {
            r0 = 0
            if (r5 == 0) goto L31
            int r1 = r5.length()     // Catch: java.lang.Throwable -> L27
            if (r1 <= 0) goto L31
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L27
            r1.<init>()     // Catch: java.lang.Throwable -> L27
            r2 = 0
        Lf:
            int r3 = r5.length()     // Catch: java.lang.Throwable -> L27
            if (r2 >= r3) goto L25
            java.lang.String r3 = r5.optString(r2)     // Catch: java.lang.Throwable -> L27
            boolean r4 = com.mbridge.msdk.foundation.tools.ai.b(r3)     // Catch: java.lang.Throwable -> L27
            if (r4 == 0) goto L22
            r1.add(r3)     // Catch: java.lang.Throwable -> L27
        L22:
            int r2 = r2 + 1
            goto Lf
        L25:
            r0 = r1
            goto L31
        L27:
            r5 = move-exception
            java.lang.String r1 = r5.getMessage()
            java.lang.String r2 = "SameTools"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r5)
        L31:
            return r0
    }

    public static boolean b() {
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            java.lang.Thread r0 = r0.getThread()
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            if (r0 != r1) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    public static boolean b(android.content.Context r2) {
            java.lang.String r0 = "connectivity"
            java.lang.Object r2 = r2.getSystemService(r0)     // Catch: java.lang.Exception -> L22
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2     // Catch: java.lang.Exception -> L22
            android.net.NetworkInfo r2 = r2.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L22
            if (r2 == 0) goto L26
            java.lang.String r0 = "wifi"
            java.lang.String r2 = r2.getTypeName()     // Catch: java.lang.Exception -> L22
            java.util.Locale r1 = java.util.Locale.US     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = r2.toLowerCase(r1)     // Catch: java.lang.Exception -> L22
            boolean r2 = r0.equals(r2)     // Catch: java.lang.Exception -> L22
            if (r2 == 0) goto L26
            r2 = 1
            return r2
        L22:
            r2 = move-exception
            r2.printStackTrace()
        L26:
            r2 = 0
            return r2
    }

    public static boolean b(com.mbridge.msdk.foundation.entity.CampaignEx r2) {
            r0 = 0
            if (r2 == 0) goto L10
            int r2 = r2.getRetarget_offer()     // Catch: java.lang.Exception -> Lc
            r1 = 1
            if (r2 != r1) goto Lb
            return r1
        Lb:
            return r0
        Lc:
            r2 = move-exception
            r2.printStackTrace()
        L10:
            return r0
    }

    public static int c(int r2) {
            r0 = 100
            if (r2 <= r0) goto L8
            r0 = 199(0xc7, float:2.79E-43)
            if (r2 < r0) goto Lb
        L8:
            r0 = 2
            if (r2 != r0) goto Ld
        Lb:
            r2 = 1
            return r2
        Ld:
            r1 = 200(0xc8, float:2.8E-43)
            if (r2 <= r1) goto L15
            r1 = 299(0x12b, float:4.19E-43)
            if (r2 < r1) goto L18
        L15:
            r1 = 4
            if (r2 != r1) goto L19
        L18:
            return r0
        L19:
            r0 = 500(0x1f4, float:7.0E-43)
            if (r2 <= r0) goto L23
            r0 = 599(0x257, float:8.4E-43)
            if (r2 >= r0) goto L23
            r2 = 5
            return r2
        L23:
            r2 = -1
            return r2
    }

    public static java.lang.String c(java.lang.String r2) {
            boolean r0 = com.mbridge.msdk.foundation.tools.ai.b(r2)     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto L17
            java.lang.String r0 = "utf-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r0)     // Catch: java.lang.Throwable -> Ld
            return r2
        Ld:
            r2 = move-exception
            java.lang.String r0 = r2.getMessage()
            java.lang.String r1 = "SameTools"
            com.mbridge.msdk.foundation.tools.z.c(r1, r0, r2)
        L17:
            java.lang.String r2 = ""
            return r2
    }

    public static boolean c() {
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.m()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r0 == 0) goto L10
            return r1
        L10:
            java.lang.String r0 = "com.tencent.mm.opensdk.openapi.WXAPIFactory"
            java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L1c
            java.lang.String r0 = "com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram"
            java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L1c
            r0 = 1
            return r0
        L1c:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r2 = "SameTools"
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)
            return r1
    }

    public static boolean c(android.content.Context r2) {
            r0 = 0
            java.lang.String r1 = "connectivity"
            java.lang.Object r2 = r2.getSystemService(r1)     // Catch: java.lang.Exception -> L11
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2     // Catch: java.lang.Exception -> L11
            android.net.NetworkInfo r2 = r2.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L11
            if (r2 == 0) goto L10
            r0 = 1
        L10:
            return r0
        L11:
            r2 = move-exception
            r2.printStackTrace()
            return r0
    }

    public static synchronized boolean c(android.content.Context r3, java.lang.String r4) {
            java.lang.Class<com.mbridge.msdk.foundation.tools.ae> r0 = com.mbridge.msdk.foundation.tools.ae.class
            monitor-enter(r0)
            r1 = 0
            if (r3 == 0) goto L18
            boolean r2 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L15
            if (r2 != 0) goto L18
            java.lang.Object r3 = b(r4, r3)     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L18
            if (r3 == 0) goto L18
            r3 = 1
            r1 = r3
            goto L18
        L15:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
        L18:
            monitor-exit(r0)
            return r1
    }

    public static float d(android.content.Context r2) {
            r0 = 1075838976(0x40200000, float:2.5)
            if (r2 == 0) goto L1a
            android.content.res.Resources r2 = r2.getResources()     // Catch: java.lang.Exception -> L16
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()     // Catch: java.lang.Exception -> L16
            float r2 = r2.density     // Catch: java.lang.Exception -> L16
            r1 = 0
            int r1 = (r2 > r1 ? 1 : (r2 == r1 ? 0 : -1))
            if (r1 != 0) goto L14
            goto L1a
        L14:
            r0 = r2
            goto L1a
        L16:
            r2 = move-exception
            r2.printStackTrace()
        L1a:
            return r0
    }

    public static int d() {
            java.lang.String r0 = "com.tencent.mm.opensdk.constants.Build"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L18
            java.lang.String r1 = "SDK_INT"
            java.lang.reflect.Field r0 = r0.getField(r1)     // Catch: java.lang.Throwable -> L18
            r1 = 0
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L18
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Throwable -> L18
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L18
            goto L23
        L18:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "SameTools"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            r0 = 0
        L23:
            return r0
    }

    public static java.lang.Object d(java.lang.String r9) {
            java.lang.String r0 = "SameTools"
            boolean r1 = android.text.TextUtils.isEmpty(r9)
            r2 = 0
            if (r1 == 0) goto La
            return r2
        La:
            java.lang.String r1 = "com.tencent.mm.opensdk.openapi.WXAPIFactory"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L3f java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L51
            java.lang.String r3 = "createWXAPI"
            r4 = 2
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L3f java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L51
            java.lang.Class<android.content.Context> r6 = android.content.Context.class
            r7 = 0
            r5[r7] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L3f java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L51
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r8 = 1
            r5[r8] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L3f java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L51
            java.lang.reflect.Method r1 = r1.getMethod(r3, r5)     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L3f java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L51
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L3f java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L51
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L3f java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L51
            android.content.Context r4 = r4.j()     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L3f java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L51
            r3[r7] = r4     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L3f java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L51
            r3[r8] = r9     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L3f java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L51
            java.lang.Object r9 = r1.invoke(r2, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L3f java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L51
            return r9
        L36:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r9)
            goto L59
        L3f:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r9)
            goto L59
        L48:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r9)
            goto L59
        L51:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r9)
        L59:
            return r2
    }

    private static final char[] d(int r3) {
            if (r3 == 0) goto L99
            r0 = 1
            if (r3 == r0) goto L50
            r0 = 2
            if (r3 == r0) goto L2f
            r0 = 3
            if (r3 == r0) goto Le
            r3 = 0
            goto Lf3
        Le:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            char[] r0 = com.mbridge.msdk.foundation.tools.ad.c
            int r1 = com.mbridge.msdk.foundation.tools.ae.k
            int r2 = com.mbridge.msdk.foundation.tools.ae.j
            char[] r0 = java.util.Arrays.copyOfRange(r0, r1, r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.mbridge.msdk.foundation.tools.ac.c
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            goto Lf3
        L2f:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            char[] r0 = com.mbridge.msdk.foundation.tools.ad.c
            int r1 = com.mbridge.msdk.foundation.tools.ae.k
            int r2 = com.mbridge.msdk.foundation.tools.ae.j
            char[] r0 = java.util.Arrays.copyOfRange(r0, r1, r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.mbridge.msdk.foundation.tools.ae.a
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            goto Lf3
        L50:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            char[] r0 = com.mbridge.msdk.foundation.tools.ad.c
            int r1 = com.mbridge.msdk.foundation.tools.ae.h
            char[] r0 = java.util.Arrays.copyOf(r0, r1)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.mbridge.msdk.foundation.tools.ae.b
            int r1 = com.mbridge.msdk.foundation.tools.ae.g
            char r0 = r0[r1]
            r3.append(r0)
            char[] r0 = com.mbridge.msdk.foundation.tools.ad.c
            int r1 = com.mbridge.msdk.foundation.tools.ae.h
            int r2 = com.mbridge.msdk.foundation.tools.ae.i
            char[] r0 = java.util.Arrays.copyOfRange(r0, r1, r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.mbridge.msdk.foundation.tools.ae.b
            int r1 = com.mbridge.msdk.foundation.tools.ae.g
            char r0 = r0[r1]
            r3.append(r0)
            char[] r0 = com.mbridge.msdk.foundation.tools.ad.c
            int r1 = com.mbridge.msdk.foundation.tools.ae.j
            int r2 = com.mbridge.msdk.foundation.tools.ae.l
            char[] r0 = java.util.Arrays.copyOfRange(r0, r1, r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            goto Lf3
        L99:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            char[] r0 = com.mbridge.msdk.foundation.tools.ad.c
            int r1 = com.mbridge.msdk.foundation.tools.ae.h
            char[] r0 = java.util.Arrays.copyOf(r0, r1)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.mbridge.msdk.foundation.tools.ae.b
            int r1 = com.mbridge.msdk.foundation.tools.ae.g
            char r0 = r0[r1]
            r3.append(r0)
            char[] r0 = com.mbridge.msdk.foundation.tools.ad.c
            int r1 = com.mbridge.msdk.foundation.tools.ae.h
            int r2 = com.mbridge.msdk.foundation.tools.ae.i
            char[] r0 = java.util.Arrays.copyOfRange(r0, r1, r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.mbridge.msdk.foundation.tools.ae.b
            int r1 = com.mbridge.msdk.foundation.tools.ae.g
            char r0 = r0[r1]
            r3.append(r0)
            char[] r0 = com.mbridge.msdk.foundation.tools.ad.c
            int r1 = com.mbridge.msdk.foundation.tools.ae.i
            int r2 = com.mbridge.msdk.foundation.tools.ae.k
            char[] r0 = java.util.Arrays.copyOfRange(r0, r1, r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.mbridge.msdk.foundation.tools.ae.b
            int r1 = com.mbridge.msdk.foundation.tools.ae.g
            char r0 = r0[r1]
            r3.append(r0)
            char[] r0 = com.mbridge.msdk.foundation.tools.ac.c
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
        Lf3:
            java.lang.String r3 = r3.toString()
            char[] r3 = r3.toCharArray()
            return r3
    }

    public static final int e() {
            java.lang.Boolean r0 = com.mbridge.msdk.foundation.tools.ae.s
            if (r0 != 0) goto L19
            com.mbridge.msdk.foundation.tools.o r0 = com.mbridge.msdk.foundation.tools.o.a.a()     // Catch: java.lang.Exception -> Lf
            java.lang.Boolean r0 = r0.e()     // Catch: java.lang.Exception -> Lf
            com.mbridge.msdk.foundation.tools.ae.s = r0     // Catch: java.lang.Exception -> Lf
            goto L19
        Lf:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "SameTools"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L19:
            java.lang.Boolean r0 = com.mbridge.msdk.foundation.tools.ae.s
            if (r0 == 0) goto L29
            java.lang.Boolean r0 = com.mbridge.msdk.foundation.tools.ae.s
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L27
            r0 = 1
            goto L2a
        L27:
            r0 = 0
            goto L2a
        L29:
            r0 = -1
        L2a:
            return r0
    }

    public static int e(android.content.Context r3) {
            java.lang.String r0 = "com.android.internal.R$dimen"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L25
            java.lang.Object r1 = r0.newInstance()     // Catch: java.lang.Exception -> L25
            java.lang.String r2 = "status_bar_height"
            java.lang.reflect.Field r0 = r0.getField(r2)     // Catch: java.lang.Exception -> L25
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Exception -> L25
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L25
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L25
            android.content.res.Resources r3 = r3.getResources()     // Catch: java.lang.Exception -> L25
            int r3 = r3.getDimensionPixelSize(r0)     // Catch: java.lang.Exception -> L25
            goto L2a
        L25:
            r3 = move-exception
            r3.printStackTrace()
            r3 = 0
        L2a:
            return r3
    }

    public static int e(java.lang.String r4) {
            r0 = 0
            java.lang.Object r4 = com.mbridge.msdk.foundation.tools.v.f(r4)     // Catch: java.lang.Throwable -> L20
            java.lang.String r1 = "com.tencent.mm.opensdk.openapi.IWXAPI"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L20
            java.lang.String r2 = "getWXAppSupportAPI"
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.Throwable -> L20
            java.lang.reflect.Method r1 = r1.getMethod(r2, r3)     // Catch: java.lang.Throwable -> L20
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L20
            java.lang.Object r4 = r1.invoke(r4, r2)     // Catch: java.lang.Throwable -> L20
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Throwable -> L20
            int r0 = r4.intValue()     // Catch: java.lang.Throwable -> L20
            goto L2a
        L20:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            java.lang.String r1 = "SameTools"
            com.mbridge.msdk.foundation.tools.z.d(r1, r4)
        L2a:
            return r0
    }

    public static float f(android.content.Context r0) {
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r0 = r0.widthPixels
            float r0 = (float) r0
            return r0
    }

    public static final java.lang.String f() {
            com.mbridge.msdk.foundation.tools.o r0 = com.mbridge.msdk.foundation.tools.o.a.a()
            java.lang.String r0 = r0.f()
            return r0
    }

    public static final synchronized java.lang.String f(java.lang.String r10) {
            java.lang.Class<com.mbridge.msdk.foundation.tools.ae> r0 = com.mbridge.msdk.foundation.tools.ae.class
            monitor-enter(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            r1.<init>()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            java.lang.String r2 = r2.k()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            r1.append(r2)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            java.lang.String r2 = "_"
            r1.append(r2)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            r1.append(r10)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            java.lang.String r10 = r1.toString()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            java.lang.String r2 = r2.k()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            com.mbridge.msdk.c.a r1 = r1.b(r2)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            r2 = 3
            r3 = 0
            if (r1 == 0) goto L47
            boolean r2 = r1.aH()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            boolean r4 = r1.aF()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            int r1 = r1.aG()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            int r1 = java.lang.Math.max(r3, r1)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            r9 = r2
            r2 = r1
            r1 = r9
            goto L49
        L47:
            r1 = 1
            r4 = r3
        L49:
            if (r4 == 0) goto L132
            if (r2 != 0) goto L4f
            goto L132
        L4f:
            if (r1 == 0) goto L67
            java.util.Map<java.lang.String, java.lang.String> r4 = com.mbridge.msdk.foundation.tools.ae.q     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            if (r4 == 0) goto L67
            java.util.Map<java.lang.String, java.lang.String> r4 = com.mbridge.msdk.foundation.tools.ae.q     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            boolean r4 = r4.containsKey(r10)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            if (r4 == 0) goto L67
            java.util.Map<java.lang.String, java.lang.String> r1 = com.mbridge.msdk.foundation.tools.ae.q     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            java.lang.Object r10 = r1.get(r10)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            monitor-exit(r0)
            return r10
        L67:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            java.lang.String r5 = ""
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            java.lang.Exception r5 = new java.lang.Exception     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            r5.<init>()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            java.lang.StackTraceElement[] r5 = r5.getStackTrace()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            if (r5 == 0) goto L142
            int r6 = r5.length     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            if (r6 <= 0) goto L142
            java.util.List r5 = a(r5)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            java.util.Collections.reverse(r5)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            java.util.ArrayList r6 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            r6.<init>()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
        L8c:
            boolean r7 = r5.hasNext()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            if (r7 == 0) goto Lca
            java.lang.Object r7 = r5.next()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            java.lang.String r8 = "com.android"
            boolean r8 = r7.startsWith(r8)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            if (r8 != 0) goto L8c
            java.lang.String r8 = "android.os"
            boolean r8 = r7.startsWith(r8)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            if (r8 != 0) goto L8c
            java.lang.String r8 = "android.app"
            boolean r8 = r7.startsWith(r8)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            if (r8 != 0) goto L8c
            java.lang.String r8 = "java.lang.reflect.Method"
            boolean r8 = r7.startsWith(r8)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            if (r8 != 0) goto L8c
            java.lang.String r8 = "android.view"
            boolean r8 = r7.startsWith(r8)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            if (r8 != 0) goto L8c
            boolean r8 = r6.contains(r7)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            if (r8 != 0) goto L8c
            r6.add(r7)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            goto L8c
        Lca:
            int r5 = r6.size()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            int r2 = java.lang.Math.min(r5, r2)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            if (r2 <= 0) goto Leb
        Ld4:
            if (r3 >= r2) goto Leb
            java.lang.Object r5 = r6.get(r3)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            r4.append(r5)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            int r5 = r2 + (-1)
            if (r3 >= r5) goto Le8
            java.lang.String r5 = "|"
            r4.append(r5)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
        Le8:
            int r3 = r3 + 1
            goto Ld4
        Leb:
            r2 = 0
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            if (r3 != 0) goto L104
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            r2.<init>()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            java.lang.String r3 = "1"
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
        L104:
            if (r2 == 0) goto L12e
            int r3 = r2.length()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            if (r3 <= 0) goto L12e
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.a.a(r2)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            if (r1 == 0) goto L12c
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            if (r1 != 0) goto L12c
            java.util.Map<java.lang.String, java.lang.String> r1 = com.mbridge.msdk.foundation.tools.ae.q     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            if (r1 != 0) goto L127
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            r1.<init>()     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            com.mbridge.msdk.foundation.tools.ae.q = r1     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
        L127:
            java.util.Map<java.lang.String, java.lang.String> r1 = com.mbridge.msdk.foundation.tools.ae.q     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
            r1.put(r10, r2)     // Catch: java.lang.Throwable -> L136 java.lang.Exception -> L138
        L12c:
            monitor-exit(r0)
            return r2
        L12e:
            java.lang.String r10 = ""
            monitor-exit(r0)
            return r10
        L132:
            java.lang.String r10 = ""
            monitor-exit(r0)
            return r10
        L136:
            r10 = move-exception
            goto L146
        L138:
            r10 = move-exception
            java.lang.String r1 = "SameTools"
            java.lang.String r10 = r10.getMessage()     // Catch: java.lang.Throwable -> L136
            com.mbridge.msdk.foundation.tools.z.d(r1, r10)     // Catch: java.lang.Throwable -> L136
        L142:
            java.lang.String r10 = ""
            monitor-exit(r0)
            return r10
        L146:
            monitor-exit(r0)
            throw r10
    }

    public static int g(android.content.Context r1) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            android.util.DisplayMetrics r1 = n(r1)     // Catch: java.lang.Exception -> Lb
            int r1 = r1.heightPixels     // Catch: java.lang.Exception -> Lb
            return r1
        Lb:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public static synchronized java.lang.String g(java.lang.String r3) {
            java.lang.Class<com.mbridge.msdk.foundation.tools.ae> r0 = com.mbridge.msdk.foundation.tools.ae.class
            monitor-enter(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L38
            r1.<init>()     // Catch: java.lang.Throwable -> L38
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L38
            java.lang.String r2 = r2.k()     // Catch: java.lang.Throwable -> L38
            r1.append(r2)     // Catch: java.lang.Throwable -> L38
            java.lang.String r2 = "_"
            r1.append(r2)     // Catch: java.lang.Throwable -> L38
            r1.append(r3)     // Catch: java.lang.Throwable -> L38
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L38
            java.util.Map<java.lang.String, java.lang.String> r1 = com.mbridge.msdk.foundation.tools.ae.r     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto L35
            java.util.Map<java.lang.String, java.lang.String> r1 = com.mbridge.msdk.foundation.tools.ae.r     // Catch: java.lang.Throwable -> L38
            boolean r1 = r1.containsKey(r3)     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto L35
            java.util.Map<java.lang.String, java.lang.String> r1 = com.mbridge.msdk.foundation.tools.ae.r     // Catch: java.lang.Throwable -> L38
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L38
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L38
            monitor-exit(r0)
            return r3
        L35:
            r3 = 0
            monitor-exit(r0)
            return r3
        L38:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static boolean g() {
            r0 = 0
            android.net.ConnectivityManager r1 = com.mbridge.msdk.foundation.tools.q.a()     // Catch: java.lang.Exception -> L16
            if (r1 != 0) goto L8
            return r0
        L8:
            r2 = 17
            android.net.NetworkInfo r1 = r1.getNetworkInfo(r2)     // Catch: java.lang.Exception -> L16
            if (r1 != 0) goto L11
            goto L20
        L11:
            boolean r0 = r1.isConnected()     // Catch: java.lang.Exception -> L16
            goto L20
        L16:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r2 = "SameTools"
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
        L20:
            return r0
    }

    public static int h(android.content.Context r1) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            android.util.DisplayMetrics r1 = n(r1)     // Catch: java.lang.Exception -> Lb
            int r1 = r1.widthPixels     // Catch: java.lang.Exception -> Lb
            return r1
        Lb:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public static boolean h() {
            java.lang.String r0 = "~"
            r1 = 0
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L7b
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L7b
            if (r2 != 0) goto Le
            return r1
        Le:
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L7b
            r3 = 14
            r4 = 1
            if (r2 < r3) goto L17
            r2 = r4
            goto L18
        L17:
            r2 = r1
        L18:
            if (r2 == 0) goto L30
            java.lang.String r2 = "http.proxyHost"
            java.lang.String r2 = java.lang.System.getProperty(r2)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r3 = "http.proxyPort"
            java.lang.String r3 = java.lang.System.getProperty(r3)     // Catch: java.lang.Throwable -> L7b
            if (r3 == 0) goto L29
            goto L2b
        L29:
            java.lang.String r3 = "-1"
        L2b:
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Throwable -> L7b
            goto L48
        L30:
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L7b
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L7b
            java.lang.String r2 = android.net.Proxy.getHost(r2)     // Catch: java.lang.Throwable -> L7b
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L7b
            android.content.Context r3 = r3.j()     // Catch: java.lang.Throwable -> L7b
            int r3 = android.net.Proxy.getPort(r3)     // Catch: java.lang.Throwable -> L7b
        L48:
            java.lang.String r5 = "address = "
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7b
            r6.<init>()     // Catch: java.lang.Throwable -> L7b
            r6.append(r2)     // Catch: java.lang.Throwable -> L7b
            r6.append(r0)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L7b
            com.mbridge.msdk.foundation.tools.z.a(r5, r6)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r5 = "port = "
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7b
            r6.<init>()     // Catch: java.lang.Throwable -> L7b
            r6.append(r3)     // Catch: java.lang.Throwable -> L7b
            r6.append(r0)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r0 = r6.toString()     // Catch: java.lang.Throwable -> L7b
            com.mbridge.msdk.foundation.tools.z.a(r5, r0)     // Catch: java.lang.Throwable -> L7b
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L7b
            if (r0 != 0) goto L85
            r0 = -1
            if (r3 == r0) goto L85
            r1 = r4
            goto L85
        L7b:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r2 = "SameTools"
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)
        L85:
            return r1
    }

    public static boolean h(java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.net.Uri r4 = android.net.Uri.parse(r4)     // Catch: java.lang.Exception -> L46 java.lang.Throwable -> L53
            r0 = 1
            if (r4 == 0) goto L45
            java.lang.String r2 = "dyview"
            java.lang.String r2 = r4.getQueryParameter(r2)     // Catch: java.lang.Exception -> L46 java.lang.Throwable -> L53
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L46 java.lang.Throwable -> L53
            if (r3 == 0) goto L21
            java.lang.String r2 = "view"
            java.lang.String r2 = r4.getQueryParameter(r2)     // Catch: java.lang.Exception -> L46 java.lang.Throwable -> L53
        L21:
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L46 java.lang.Throwable -> L53
            if (r3 != 0) goto L32
            r3 = -1
            int r3 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Exception -> L2c java.lang.Throwable -> L53
        L2c:
            int r3 = r3 % 2
            if (r3 != 0) goto L32
            r2 = r0
            goto L33
        L32:
            r2 = r1
        L33:
            java.lang.String r3 = "natmp"
            java.lang.String r4 = r4.getQueryParameter(r3)     // Catch: java.lang.Exception -> L43 java.lang.Throwable -> L52
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L43 java.lang.Throwable -> L52
            if (r4 != 0) goto L41
            r1 = r0
            goto L45
        L41:
            r1 = r2
            goto L45
        L43:
            r4 = move-exception
            goto L48
        L45:
            return r1
        L46:
            r4 = move-exception
            r2 = r1
        L48:
            java.lang.String r0 = "SameTools"
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L52
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)     // Catch: java.lang.Throwable -> L52
            return r1
        L52:
            r1 = r2
        L53:
            return r1
    }

    public static int i(android.content.Context r1) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Exception -> Lf
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()     // Catch: java.lang.Exception -> Lf
            int r1 = r1.widthPixels     // Catch: java.lang.Exception -> Lf
            return r1
        Lf:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public static boolean i(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Exception -> L1c java.lang.Throwable -> L26
            if (r2 == 0) goto L1b
            java.lang.String r0 = "dyview"
            java.lang.String r2 = r2.getQueryParameter(r0)     // Catch: java.lang.Exception -> L1c java.lang.Throwable -> L26
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L1c java.lang.Throwable -> L26
            if (r2 != 0) goto L1b
            r1 = 1
        L1b:
            return r1
        L1c:
            r2 = move-exception
            java.lang.String r0 = "SameTools"
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L26
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)     // Catch: java.lang.Throwable -> L26
        L26:
            return r1
    }

    public static int j(android.content.Context r1) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Exception -> Lf
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()     // Catch: java.lang.Exception -> Lf
            int r1 = r1.heightPixels     // Catch: java.lang.Exception -> Lf
            return r1
        Lf:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public static boolean j(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Exception -> L21
            if (r2 == 0) goto L2b
            java.lang.String r0 = "isplayableec"
            java.lang.String r2 = r2.getQueryParameter(r0)     // Catch: java.lang.Exception -> L21
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L21
            if (r0 != 0) goto L2b
            java.lang.String r0 = "0"
            boolean r1 = r2.equals(r0)     // Catch: java.lang.Exception -> L21
            goto L2b
        L21:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "SameTools"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L2b:
            return r1
    }

    public static int k(android.content.Context r5) {
            java.lang.String r0 = "android"
            r1 = 0
            if (r5 == 0) goto L6
            return r1
        L6:
            android.content.res.Resources r2 = r5.getResources()     // Catch: java.lang.Exception -> L29
            java.lang.String r3 = "config_showNavigationBar"
            java.lang.String r4 = "bool"
            int r2 = r2.getIdentifier(r3, r4, r0)     // Catch: java.lang.Exception -> L29
            if (r2 == 0) goto L2d
            android.content.res.Resources r2 = r5.getResources()     // Catch: java.lang.Exception -> L29
            java.lang.String r3 = "navigation_bar_height"
            java.lang.String r4 = "dimen"
            int r0 = r2.getIdentifier(r3, r4, r0)     // Catch: java.lang.Exception -> L29
            android.content.res.Resources r5 = r5.getResources()     // Catch: java.lang.Exception -> L29
            int r5 = r5.getDimensionPixelSize(r0)     // Catch: java.lang.Exception -> L29
            return r5
        L29:
            r5 = move-exception
            r5.printStackTrace()
        L2d:
            return r1
    }

    public static boolean k(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Exception -> L21
            if (r2 == 0) goto L2b
            java.lang.String r0 = "nativecananim"
            java.lang.String r2 = r2.getQueryParameter(r0)     // Catch: java.lang.Exception -> L21
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L21
            if (r0 != 0) goto L2b
            java.lang.String r0 = "1"
            boolean r1 = r2.equals(r0)     // Catch: java.lang.Exception -> L21
            goto L2b
        L21:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "SameTools"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L2b:
            return r1
    }

    public static int l(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = -1
            if (r0 == 0) goto L8
            return r1
        L8:
            android.net.Uri r3 = android.net.Uri.parse(r3)     // Catch: java.lang.Exception -> L2b
            if (r3 == 0) goto L2a
            java.lang.String r0 = "dyview"
            java.lang.String r0 = r3.getQueryParameter(r0)     // Catch: java.lang.Exception -> L2b
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L2b
            if (r2 == 0) goto L20
            java.lang.String r0 = "view"
            java.lang.String r0 = r3.getQueryParameter(r0)     // Catch: java.lang.Exception -> L2b
        L20:
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L2b
            if (r3 != 0) goto L2a
            int r1 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L2a
        L2a:
            return r1
        L2b:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r0 = "SameTools"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            return r1
    }

    public static boolean l(android.content.Context r1) {
            java.lang.String r0 = "power"
            java.lang.Object r1 = r1.getSystemService(r0)     // Catch: java.lang.Throwable -> Ld
            android.os.PowerManager r1 = (android.os.PowerManager) r1     // Catch: java.lang.Throwable -> Ld
            boolean r1 = r1.isScreenOn()     // Catch: java.lang.Throwable -> Ld
            return r1
        Ld:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
            return r1
    }

    public static int m(android.content.Context r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L4f
            r2 = 26
            if (r1 < r2) goto Lf
            android.content.pm.PackageInfo r3 = android.webkit.WebView.getCurrentWebViewPackage()     // Catch: java.lang.Exception -> L4f
            goto L1a
        Lf:
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Exception -> L4f
            java.lang.String r1 = "com.google.android.webview"
            r2 = 1
            android.content.pm.PackageInfo r3 = r3.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L4f
        L1a:
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L4f
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L4f
            java.lang.String r2 = r2.k()     // Catch: java.lang.Exception -> L4f
            com.mbridge.msdk.c.a r1 = r1.b(r2)     // Catch: java.lang.Exception -> L4f
            if (r1 != 0) goto L34
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L4f
            com.mbridge.msdk.c.a r1 = r1.b()     // Catch: java.lang.Exception -> L4f
        L34:
            if (r3 == 0) goto L4a
            java.lang.String r2 = r3.versionName     // Catch: java.lang.Exception -> L4f
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L4f
            if (r2 != 0) goto L4a
            java.lang.String r3 = r3.versionName     // Catch: java.lang.Exception -> L4f
            java.lang.String r2 = "77.0.3865.92"
            boolean r3 = r3.equals(r2)     // Catch: java.lang.Exception -> L4f
            if (r3 == 0) goto L4a
            r3 = 5
            return r3
        L4a:
            int r3 = r1.aX()     // Catch: java.lang.Exception -> L4f
            return r3
        L4f:
            return r0
    }

    public static java.lang.String m(java.lang.String r14) {
            boolean r0 = android.text.TextUtils.isEmpty(r14)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.util.concurrent.ConcurrentHashMap r14 = com.mbridge.msdk.foundation.same.a.d.c(r14)
            if (r14 == 0) goto L9a
            int r0 = r14.size()
            if (r0 <= 0) goto L9a
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Collection r14 = r14.values()
            java.util.Iterator r14 = r14.iterator()
        L22:
            boolean r2 = r14.hasNext()
            if (r2 == 0) goto L85
            java.lang.Object r2 = r14.next()
            com.mbridge.msdk.foundation.entity.c r2 = (com.mbridge.msdk.foundation.entity.c) r2
            if (r2 == 0) goto L22
            long r3 = r2.d()
            long r5 = r2.e()
            long r7 = java.lang.System.currentTimeMillis()
            r9 = 0
            int r9 = (r3 > r9 ? 1 : (r3 == r9 ? 0 : -1))
            r10 = 1
            r11 = 0
            r12 = 1000(0x3e8, double:4.94E-321)
            if (r9 <= 0) goto L4d
            long r3 = r3 * r12
            long r5 = r5 + r3
            int r3 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r3 < 0) goto L72
            goto L73
        L4d:
            com.mbridge.msdk.c.b r3 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r4 = r4.k()
            com.mbridge.msdk.c.a r3 = r3.b(r4)
            if (r3 != 0) goto L67
            com.mbridge.msdk.c.b r3 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r3 = r3.b()
        L67:
            long r3 = r3.W()
            long r3 = r3 * r12
            long r5 = r5 + r3
            int r3 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r3 < 0) goto L72
            goto L73
        L72:
            r10 = r11
        L73:
            if (r10 == 0) goto L22
            java.util.List r2 = r2.c()
            if (r2 == 0) goto L22
            int r3 = r2.size()
            if (r3 <= 0) goto L22
            r0.addAll(r2)
            goto L22
        L85:
            int r14 = r0.size()
            if (r14 <= 0) goto L9a
            java.util.HashSet r14 = new java.util.HashSet
            r14.<init>(r0)
            r0.clear()
            r0.addAll(r14)
            java.lang.String r1 = r0.toString()
        L9a:
            return r1
    }

    private static android.util.DisplayMetrics n(android.content.Context r4) {
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics
            r0.<init>()
            java.lang.String r1 = "window"
            java.lang.Object r1 = r4.getSystemService(r1)     // Catch: java.lang.Throwable -> L23
            android.view.WindowManager r1 = (android.view.WindowManager) r1     // Catch: java.lang.Throwable -> L23
            android.view.Display r1 = r1.getDefaultDisplay()     // Catch: java.lang.Throwable -> L23
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L23
            r3 = 17
            if (r2 < r3) goto L1f
            r1.getRealMetrics(r0)     // Catch: java.lang.Throwable -> L23
            goto L2f
        L1f:
            r1.getMetrics(r0)     // Catch: java.lang.Throwable -> L23
            goto L2f
        L23:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r4 = r4.getResources()
            android.util.DisplayMetrics r0 = r4.getDisplayMetrics()
        L2f:
            return r0
    }
}
