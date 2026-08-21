package com.xiaomi.push;

public class m {
    private static volatile int a = 0;
    private static java.util.Map<java.lang.String, com.xiaomi.push.q> a = null;
    private static int b = -1;

    static {
            return
    }

    public static int a() {
            int r0 = com.xiaomi.push.m.a
            if (r0 != 0) goto L47
            r0 = 0
            java.lang.String r1 = "ro.miui.ui.version.code"
            java.lang.String r1 = a(r1)     // Catch: java.lang.Throwable -> L29
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L29
            r2 = 1
            if (r1 == 0) goto L21
            java.lang.String r1 = "ro.miui.ui.version.name"
            java.lang.String r1 = a(r1)     // Catch: java.lang.Throwable -> L29
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L29
            if (r1 != 0) goto L1f
            goto L21
        L1f:
            r1 = r0
            goto L22
        L21:
            r1 = r2
        L22:
            if (r1 == 0) goto L25
            goto L26
        L25:
            r2 = 2
        L26:
            com.xiaomi.push.m.a = r2     // Catch: java.lang.Throwable -> L29
            goto L31
        L29:
            r1 = move-exception
            java.lang.String r2 = "get isMIUI failed"
            com.xiaomi.channel.commonutils.logger.b.a(r2, r1)
            com.xiaomi.push.m.a = r0
        L31:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "isMIUI's value is: "
            r0.append(r1)
            int r1 = com.xiaomi.push.m.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.b(r0)
        L47:
            int r0 = com.xiaomi.push.m.a
            return r0
    }

    public static int a(android.content.Context r1) {
            java.lang.String r1 = "ro.miui.ui.version.code"
            java.lang.String r1 = a(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L18
            boolean r0 = android.text.TextUtils.isDigitsOnly(r1)
            if (r0 != 0) goto L13
            goto L18
        L13:
            int r1 = java.lang.Integer.parseInt(r1)
            goto L19
        L18:
            r1 = 0
        L19:
            return r1
    }

    public static com.xiaomi.push.q a(java.lang.String r0) {
            com.xiaomi.push.q r0 = b(r0)
            if (r0 != 0) goto L8
            com.xiaomi.push.q r0 = com.xiaomi.push.q.b
        L8:
            return r0
    }

    public static java.lang.String a() {
            int r0 = com.xiaomi.push.v.a()
            boolean r1 = a()
            if (r1 == 0) goto L1b
            if (r0 <= 0) goto L1b
            r1 = 2
            if (r0 >= r1) goto L12
            java.lang.String r0 = "alpha"
            return r0
        L12:
            r1 = 3
            if (r0 >= r1) goto L18
            java.lang.String r0 = "development"
            return r0
        L18:
            java.lang.String r0 = "stable"
            return r0
        L1b:
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String a(android.content.Intent r2) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.toString()
            r0.append(r1)
            java.lang.String r1 = " "
            r0.append(r1)
            android.os.Bundle r2 = r2.getExtras()
            java.lang.String r2 = a(r2)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static java.lang.String a(android.os.Bundle r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Bundle["
            r0.<init>(r1)
            if (r4 != 0) goto L10
            java.lang.String r4 = "null"
            r0.append(r4)
            goto Ld0
        L10:
            r1 = 1
            java.util.Set r2 = r4.keySet()
            java.util.Iterator r2 = r2.iterator()
        L19:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto Ld0
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            if (r1 != 0) goto L2c
            java.lang.String r1 = ", "
            r0.append(r1)
        L2c:
            r0.append(r3)
            r1 = 61
            r0.append(r1)
            java.lang.Object r1 = r4.get(r3)
            boolean r3 = r1 instanceof int[]
            if (r3 == 0) goto L49
            int[] r1 = (int[]) r1
            int[] r1 = (int[]) r1
            java.lang.String r1 = java.util.Arrays.toString(r1)
        L44:
            r0.append(r1)
            goto Lcd
        L49:
            boolean r3 = r1 instanceof byte[]
            if (r3 == 0) goto L56
            byte[] r1 = (byte[]) r1
            byte[] r1 = (byte[]) r1
            java.lang.String r1 = java.util.Arrays.toString(r1)
            goto L44
        L56:
            boolean r3 = r1 instanceof boolean[]
            if (r3 == 0) goto L63
            boolean[] r1 = (boolean[]) r1
            boolean[] r1 = (boolean[]) r1
            java.lang.String r1 = java.util.Arrays.toString(r1)
            goto L44
        L63:
            boolean r3 = r1 instanceof short[]
            if (r3 == 0) goto L70
            short[] r1 = (short[]) r1
            short[] r1 = (short[]) r1
            java.lang.String r1 = java.util.Arrays.toString(r1)
            goto L44
        L70:
            boolean r3 = r1 instanceof long[]
            if (r3 == 0) goto L7d
            long[] r1 = (long[]) r1
            long[] r1 = (long[]) r1
            java.lang.String r1 = java.util.Arrays.toString(r1)
            goto L44
        L7d:
            boolean r3 = r1 instanceof float[]
            if (r3 == 0) goto L8a
            float[] r1 = (float[]) r1
            float[] r1 = (float[]) r1
            java.lang.String r1 = java.util.Arrays.toString(r1)
            goto L44
        L8a:
            boolean r3 = r1 instanceof double[]
            if (r3 == 0) goto L97
            double[] r1 = (double[]) r1
            double[] r1 = (double[]) r1
            java.lang.String r1 = java.util.Arrays.toString(r1)
            goto L44
        L97:
            boolean r3 = r1 instanceof java.lang.String[]
            if (r3 == 0) goto La4
            java.lang.String[] r1 = (java.lang.String[]) r1
            java.lang.String[] r1 = (java.lang.String[]) r1
            java.lang.String r1 = java.util.Arrays.toString(r1)
            goto L44
        La4:
            boolean r3 = r1 instanceof java.lang.CharSequence[]
            if (r3 == 0) goto Lb1
            java.lang.CharSequence[] r1 = (java.lang.CharSequence[]) r1
            java.lang.CharSequence[] r1 = (java.lang.CharSequence[]) r1
            java.lang.String r1 = java.util.Arrays.toString(r1)
            goto L44
        Lb1:
            boolean r3 = r1 instanceof android.os.Parcelable[]
            if (r3 == 0) goto Lbe
            android.os.Parcelable[] r1 = (android.os.Parcelable[]) r1
            android.os.Parcelable[] r1 = (android.os.Parcelable[]) r1
            java.lang.String r1 = java.util.Arrays.toString(r1)
            goto L44
        Lbe:
            boolean r3 = r1 instanceof android.os.Bundle
            if (r3 == 0) goto Lca
            android.os.Bundle r1 = (android.os.Bundle) r1
            java.lang.String r1 = a(r1)
            goto L44
        Lca:
            r0.append(r1)
        Lcd:
            r1 = 0
            goto L19
        Ld0:
            java.lang.String r4 = "]"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            return r4
    }

    public static java.lang.String a(java.lang.String r5) {
            r0 = 0
            java.lang.String r1 = "android.os.SystemProperties"
            java.lang.String r2 = "get"
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L17 java.lang.Throwable -> L2c
            r4 = 0
            r3[r4] = r5     // Catch: java.lang.Exception -> L17 java.lang.Throwable -> L2c
            r5 = 1
            java.lang.String r4 = ""
            r3[r5] = r4     // Catch: java.lang.Exception -> L17 java.lang.Throwable -> L2c
            java.lang.Object r5 = com.xiaomi.push.bk.a(r1, r2, r3)     // Catch: java.lang.Exception -> L17 java.lang.Throwable -> L2c
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> L17 java.lang.Throwable -> L2c
            return r5
        L17:
            r5 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2c
            r1.<init>()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r2 = "fail to get property. "
            r1.append(r2)     // Catch: java.lang.Throwable -> L2c
            r1.append(r5)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L2c
            com.xiaomi.channel.commonutils.logger.b.d(r5)     // Catch: java.lang.Throwable -> L2c
        L2c:
            return r0
    }

    private static void a() {
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            if (r0 == 0) goto L5
            return
        L5:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.xiaomi.push.m.a = r0
            com.xiaomi.push.q r1 = com.xiaomi.push.q.a
            java.lang.String r2 = "CN"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "FI"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "SE"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "NO"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "FO"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "EE"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "LV"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "LT"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "BY"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "MD"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "UA"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "PL"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "CZ"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "SK"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "HU"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "DE"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "AT"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "CH"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "LI"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "GB"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "IE"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "NL"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "BE"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "LU"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "FR"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "RO"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "BG"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "RS"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "MK"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "AL"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "GR"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "SI"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "HR"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "IT"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "SM"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "MT"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "ES"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "PT"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "AD"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "CY"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "DK"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "IS"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "UK"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.c
            java.lang.String r2 = "EL"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.d
            java.lang.String r2 = "RU"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            com.xiaomi.push.q r1 = com.xiaomi.push.q.e
            java.lang.String r2 = "IN"
            r0.put(r2, r1)
            return
    }

    public static boolean a() {
            int r0 = a()
            r1 = 1
            if (r0 != r1) goto L8
            goto L9
        L8:
            r1 = 0
        L9:
            return r1
    }

    public static boolean a(android.content.Context r0) {
            if (r0 == 0) goto Le
            java.lang.String r0 = r0.getPackageName()
            boolean r0 = a(r0)
            if (r0 == 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    public static boolean a(java.lang.String r1) {
            java.lang.String r0 = "com.xiaomi.xmsf"
            boolean r1 = r0.equals(r1)
            return r1
    }

    public static int b(android.content.Context r2) {
            r0 = 0
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> Le
            java.lang.String r1 = "com.xiaomi.xmsf"
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r1, r0)     // Catch: java.lang.Exception -> Le
            int r2 = r2.versionCode     // Catch: java.lang.Exception -> Le
            return r2
        Le:
            return r0
    }

    private static com.xiaomi.push.q b(java.lang.String r1) {
            a()
            java.util.Map<java.lang.String, com.xiaomi.push.q> r0 = com.xiaomi.push.m.a
            java.lang.String r1 = r1.toUpperCase()
            java.lang.Object r1 = r0.get(r1)
            com.xiaomi.push.q r1 = (com.xiaomi.push.q) r1
            return r1
    }

    public static java.lang.String b() {
            java.lang.String r0 = ""
            java.lang.String r1 = "ro.miui.region"
            java.lang.String r1 = com.xiaomi.push.u.a(r1, r0)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L14
            java.lang.String r1 = "persist.sys.oppo.region"
            java.lang.String r1 = com.xiaomi.push.u.a(r1, r0)
        L14:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L20
            java.lang.String r1 = "ro.oppo.regionmark"
            java.lang.String r1 = com.xiaomi.push.u.a(r1, r0)
        L20:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L2c
            java.lang.String r1 = "ro.vendor.oplus.regionmark"
            java.lang.String r1 = com.xiaomi.push.u.a(r1, r0)
        L2c:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L38
            java.lang.String r1 = "ro.hw.country"
            java.lang.String r1 = com.xiaomi.push.u.a(r1, r0)
        L38:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L44
            java.lang.String r1 = "ro.csc.countryiso_code"
            java.lang.String r1 = com.xiaomi.push.u.a(r1, r0)
        L44:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L54
            java.lang.String r1 = "ro.product.country.region"
            java.lang.String r1 = com.xiaomi.push.u.a(r1, r0)
            java.lang.String r1 = b(r1)
        L54:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L60
            java.lang.String r1 = "gsm.vivo.countrycode"
            java.lang.String r1 = com.xiaomi.push.u.a(r1, r0)
        L60:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L6c
            java.lang.String r1 = "persist.sys.oem.region"
            java.lang.String r1 = com.xiaomi.push.u.a(r1, r0)
        L6c:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L78
            java.lang.String r1 = "ro.product.locale.region"
            java.lang.String r1 = com.xiaomi.push.u.a(r1, r0)
        L78:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L84
            java.lang.String r1 = "persist.sys.country"
            java.lang.String r1 = com.xiaomi.push.u.a(r1, r0)
        L84:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L9e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "get region from system, region = "
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L9e:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto Lc0
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r1 = r0.getCountry()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "locale.default.country = "
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        Lc0:
            return r1
    }

    private static java.lang.String b(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L12
            java.lang.String r0 = "-"
            java.lang.String[] r0 = r2.split(r0)
            int r1 = r0.length
            if (r1 <= 0) goto L12
            r2 = 0
            r2 = r0[r2]
        L12:
            return r2
    }

    public static boolean b() {
            int r0 = a()
            r1 = 2
            if (r0 != r1) goto L9
            r0 = 1
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public static java.lang.String c() {
            java.lang.String r0 = "ro.miui.ui.version.name"
            java.lang.String r0 = a(r0)
            return r0
    }

    public static boolean c() {
            int r0 = com.xiaomi.push.m.b
            r1 = 1
            if (r0 >= 0) goto Lc
            boolean r0 = e()
            r0 = r0 ^ r1
            com.xiaomi.push.m.b = r0
        Lc:
            int r0 = com.xiaomi.push.m.b
            if (r0 <= 0) goto L11
            goto L12
        L11:
            r1 = 0
        L12:
            return r1
    }

    public static java.lang.String d() {
            java.lang.String r0 = "ro.build.characteristics"
            java.lang.String r0 = a(r0)
            return r0
    }

    public static boolean d() {
            com.xiaomi.push.q r0 = com.xiaomi.push.q.a
            java.lang.String r0 = r0.name()
            java.lang.String r1 = b()
            com.xiaomi.push.q r1 = a(r1)
            java.lang.String r1 = r1.name()
            boolean r0 = r0.equalsIgnoreCase(r1)
            r0 = r0 ^ 1
            return r0
    }

    public static java.lang.String e() {
            java.lang.String r0 = "ro.product.manufacturer"
            java.lang.String r0 = a(r0)
            return r0
    }

    public static boolean e() {
            java.lang.String r0 = ""
            java.lang.String r1 = "ro.miui.ui.version.code"
            java.lang.String r0 = com.xiaomi.push.u.a(r1, r0)     // Catch: java.lang.Exception -> L8
        L8:
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r0 = r0 ^ 1
            return r0
    }
}
