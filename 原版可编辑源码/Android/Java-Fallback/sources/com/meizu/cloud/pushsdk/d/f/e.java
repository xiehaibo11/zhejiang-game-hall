package com.meizu.cloud.pushsdk.d.f;

public class e {
    private static final java.lang.String a = null;

    static {
            java.lang.Class<com.meizu.cloud.pushsdk.d.f.e> r0 = com.meizu.cloud.pushsdk.d.f.e.class
            java.lang.String r0 = r0.getSimpleName()
            com.meizu.cloud.pushsdk.d.f.e.a = r0
            return
    }

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    public static long a(java.lang.String r7) {
            r0 = 0
            r2 = 0
        L3:
            int r3 = r7.length()
            if (r2 >= r3) goto L38
            char r3 = r7.charAt(r2)
            r4 = 127(0x7f, float:1.78E-43)
            if (r3 > r4) goto L15
            r3 = 1
        L13:
            long r0 = r0 + r3
            goto L35
        L15:
            r4 = 2047(0x7ff, float:2.868E-42)
            if (r3 > r4) goto L1c
            r3 = 2
            goto L13
        L1c:
            r4 = 55296(0xd800, float:7.7486E-41)
            r5 = 4
            if (r3 < r4) goto L2c
            r4 = 57343(0xdfff, float:8.0355E-41)
            if (r3 > r4) goto L2c
            long r0 = r0 + r5
            int r2 = r2 + 1
            goto L35
        L2c:
            r4 = 65535(0xffff, float:9.1834E-41)
            if (r3 >= r4) goto L34
            r3 = 3
            goto L13
        L34:
            long r0 = r0 + r5
        L35:
            int r2 = r2 + 1
            goto L3
        L38:
            return r0
    }

    private static java.lang.Object a(java.lang.Object r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L7
            return r4
        L7:
            if (r4 != 0) goto Lc
            java.lang.Object r4 = org.json.JSONObject.NULL
            return r4
        Lc:
            boolean r0 = r4 instanceof org.json.JSONObject
            if (r0 != 0) goto La7
            boolean r0 = r4 instanceof org.json.JSONArray
            if (r0 == 0) goto L16
            goto La7
        L16:
            boolean r0 = r4 instanceof java.util.Collection
            if (r0 == 0) goto L38
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            java.util.Collection r4 = (java.util.Collection) r4
            java.util.Iterator r4 = r4.iterator()
        L25:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L37
            java.lang.Object r1 = r4.next()
            java.lang.Object r1 = a(r1)
            r0.put(r1)
            goto L25
        L37:
            return r0
        L38:
            java.lang.Class r0 = r4.getClass()
            boolean r0 = r0.isArray()
            if (r0 == 0) goto L5d
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            int r1 = java.lang.reflect.Array.getLength(r4)
            r2 = 0
        L4c:
            if (r2 >= r1) goto L5c
            java.lang.Object r3 = java.lang.reflect.Array.get(r4, r2)
            java.lang.Object r3 = a(r3)
            r0.put(r3)
            int r2 = r2 + 1
            goto L4c
        L5c:
            return r0
        L5d:
            boolean r0 = r4 instanceof java.util.Map
            if (r0 == 0) goto L68
            java.util.Map r4 = (java.util.Map) r4
            org.json.JSONObject r4 = a(r4)
            return r4
        L68:
            boolean r0 = r4 instanceof java.lang.Boolean
            if (r0 != 0) goto La7
            boolean r0 = r4 instanceof java.lang.Byte
            if (r0 != 0) goto La7
            boolean r0 = r4 instanceof java.lang.Character
            if (r0 != 0) goto La7
            boolean r0 = r4 instanceof java.lang.Double
            if (r0 != 0) goto La7
            boolean r0 = r4 instanceof java.lang.Float
            if (r0 != 0) goto La7
            boolean r0 = r4 instanceof java.lang.Integer
            if (r0 != 0) goto La7
            boolean r0 = r4 instanceof java.lang.Long
            if (r0 != 0) goto La7
            boolean r0 = r4 instanceof java.lang.Short
            if (r0 != 0) goto La7
            boolean r0 = r4 instanceof java.lang.String
            if (r0 == 0) goto L8d
            goto La7
        L8d:
            java.lang.Class r0 = r4.getClass()
            java.lang.Package r0 = r0.getPackage()
            java.lang.String r0 = r0.getName()
            java.lang.String r1 = "java."
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto La6
            java.lang.String r4 = r4.toString()
            return r4
        La6:
            r4 = 0
        La7:
            return r4
    }

    public static java.lang.String a() {
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r0 = java.lang.Long.toString(r0)
            return r0
    }

    public static org.json.JSONObject a(java.util.Map r7) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lc
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r7)
            return r0
        Lc:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.util.Set r7 = r7.entrySet()
            java.util.Iterator r7 = r7.iterator()
        L19:
            boolean r1 = r7.hasNext()
            if (r1 == 0) goto L4f
            java.lang.Object r1 = r7.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            java.lang.Object r1 = a(r1)
            r0.put(r2, r1)     // Catch: org.json.JSONException -> L37
            goto L19
        L37:
            r3 = move-exception
            java.lang.String r4 = com.meizu.cloud.pushsdk.d.f.e.a
            r5 = 3
            java.lang.Object[] r5 = new java.lang.Object[r5]
            r6 = 0
            r5[r6] = r2
            r2 = 1
            r5[r2] = r1
            r1 = 2
            r5[r1] = r3
            java.lang.String r1 = "Could not put key '%s' and value '%s' into new JSONObject: %s"
            com.meizu.cloud.pushsdk.d.f.c.a(r4, r1, r5)
            r3.printStackTrace()
            goto L19
        L4f:
            return r0
    }

    public static boolean a(long r0, long r2, long r4) {
            long r2 = r2 - r4
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    public static boolean a(android.content.Context r6) {
            r0 = 1
            r1 = 0
            java.lang.String r2 = com.meizu.cloud.pushsdk.d.f.e.a     // Catch: java.lang.Exception -> L35
            java.lang.String r3 = "Checking tracker internet connectivity."
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L35
            com.meizu.cloud.pushsdk.d.f.c.c(r2, r3, r4)     // Catch: java.lang.Exception -> L35
            java.lang.String r2 = "connectivity"
            java.lang.Object r6 = r6.getSystemService(r2)     // Catch: java.lang.Exception -> L35
            android.net.ConnectivityManager r6 = (android.net.ConnectivityManager) r6     // Catch: java.lang.Exception -> L35
            if (r6 != 0) goto L16
            return r1
        L16:
            android.net.NetworkInfo r6 = r6.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L35
            if (r6 == 0) goto L24
            boolean r6 = r6.isConnected()     // Catch: java.lang.Exception -> L35
            if (r6 == 0) goto L24
            r6 = r0
            goto L25
        L24:
            r6 = r1
        L25:
            java.lang.String r2 = com.meizu.cloud.pushsdk.d.f.e.a     // Catch: java.lang.Exception -> L35
            java.lang.String r3 = "Tracker connection online: %s"
            java.lang.Object[] r4 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L35
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r6)     // Catch: java.lang.Exception -> L35
            r4[r1] = r5     // Catch: java.lang.Exception -> L35
            com.meizu.cloud.pushsdk.d.f.c.b(r2, r3, r4)     // Catch: java.lang.Exception -> L35
            return r6
        L35:
            r6 = move-exception
            java.lang.String r2 = com.meizu.cloud.pushsdk.d.f.e.a
            java.lang.Object[] r3 = new java.lang.Object[r0]
            java.lang.String r6 = r6.toString()
            r3[r1] = r6
            java.lang.String r6 = "Security exception checking connection: %s"
            com.meizu.cloud.pushsdk.d.f.c.a(r2, r6, r3)
            return r0
    }

    public static java.lang.String b() {
            java.util.UUID r0 = java.util.UUID.randomUUID()
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static java.lang.String b(android.content.Context r3) {
            java.lang.String r0 = "phone"
            java.lang.Object r3 = r3.getSystemService(r0)     // Catch: java.lang.Exception -> Lf
            android.telephony.TelephonyManager r3 = (android.telephony.TelephonyManager) r3     // Catch: java.lang.Exception -> Lf
            if (r3 == 0) goto L21
            java.lang.String r3 = r3.getNetworkOperatorName()     // Catch: java.lang.Exception -> Lf
            return r3
        Lf:
            r3 = move-exception
            java.lang.String r0 = com.meizu.cloud.pushsdk.d.f.e.a
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.String r3 = r3.toString()
            r1[r2] = r3
            java.lang.String r3 = "getCarrier: %s"
            com.meizu.cloud.pushsdk.d.f.c.a(r0, r3, r1)
        L21:
            r3 = 0
            return r3
    }

    public static java.lang.String c(android.content.Context r4) {
            r0 = 0
            java.lang.String r1 = "phone"
            java.lang.Object r4 = r4.getSystemService(r1)     // Catch: java.lang.Exception -> L11
            android.telephony.TelephonyManager r4 = (android.telephony.TelephonyManager) r4     // Catch: java.lang.Exception -> L11
            if (r4 == 0) goto L2f
            java.lang.String r4 = r4.getSimOperator()     // Catch: java.lang.Exception -> L11
            r0 = r4
            goto L2f
        L11:
            r4 = move-exception
            java.lang.String r1 = com.meizu.cloud.pushsdk.d.f.e.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getOperator error "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]
            com.meizu.cloud.pushsdk.d.f.c.a(r1, r4, r2)
        L2f:
            return r0
    }

    public static android.graphics.Point d(android.content.Context r5) {
            android.graphics.Point r0 = new android.graphics.Point
            r0.<init>()
            r1 = 0
            r2 = 0
            java.lang.String r3 = "window"
            java.lang.Object r5 = r5.getSystemService(r3)     // Catch: java.lang.Exception -> L28
            android.view.WindowManager r5 = (android.view.WindowManager) r5     // Catch: java.lang.Exception -> L28
            if (r5 != 0) goto L12
            return r1
        L12:
            android.view.Display r1 = r5.getDefaultDisplay()     // Catch: java.lang.Exception -> L28
            r5 = 1
            java.lang.Class[] r5 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> L28
            java.lang.Class<android.graphics.Point> r3 = android.graphics.Point.class
            r5[r2] = r3     // Catch: java.lang.Exception -> L28
            java.lang.Class<android.view.Display> r3 = android.view.Display.class
            java.lang.String r4 = "getSize"
            r3.getMethod(r4, r5)     // Catch: java.lang.Exception -> L28
            r1.getSize(r0)     // Catch: java.lang.Exception -> L28
            goto L49
        L28:
            java.lang.String r5 = com.meizu.cloud.pushsdk.d.f.e.a
            java.lang.Object[] r3 = new java.lang.Object[r2]
            java.lang.String r4 = "Display.getSize isn't available on older devices."
            com.meizu.cloud.pushsdk.d.f.c.a(r5, r4, r3)
            if (r1 == 0) goto L40
            int r5 = r1.getWidth()
            r0.x = r5
            int r5 = r1.getHeight()
            r0.y = r5
            goto L49
        L40:
            java.lang.String r5 = com.meizu.cloud.pushsdk.d.f.e.a
            java.lang.Object[] r1 = new java.lang.Object[r2]
            java.lang.String r2 = "error get display"
            com.meizu.cloud.pushsdk.d.f.c.a(r5, r2, r1)
        L49:
            return r0
    }
}
