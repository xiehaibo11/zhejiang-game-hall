package com.iab.omid.library.mmadbridge.utils;

public class c {
    private static android.view.WindowManager a;
    private static java.lang.String[] b;
    static float c;

    static class a {
        static final int[] a = null;

        static {
                com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus[] r0 = com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.iab.omid.library.mmadbridge.utils.c.a.a = r0
                com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus r1 = com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus.NOT_DETECTED     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                return
        }
    }

    private static class b {
        final float a;
        final float b;

        b(float r1, float r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }
    }

    static {
            java.lang.String r0 = "x"
            java.lang.String r1 = "y"
            java.lang.String r2 = "width"
            java.lang.String r3 = "height"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3}
            com.iab.omid.library.mmadbridge.utils.c.b = r0
            android.content.res.Resources r0 = android.content.res.Resources.getSystem()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r0 = r0.density
            com.iab.omid.library.mmadbridge.utils.c.c = r0
            return
    }

    static float a(int r1) {
            float r1 = (float) r1
            float r0 = com.iab.omid.library.mmadbridge.utils.c.c
            float r1 = r1 / r0
            return r1
    }

    private static com.iab.omid.library.mmadbridge.utils.c.b a(org.json.JSONObject r13) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 0
            r3 = 17
            if (r0 < r3) goto L27
            android.view.WindowManager r13 = com.iab.omid.library.mmadbridge.utils.c.a
            if (r13 == 0) goto L66
            android.graphics.Point r13 = new android.graphics.Point
            r13.<init>(r2, r2)
            android.view.WindowManager r0 = com.iab.omid.library.mmadbridge.utils.c.a
            android.view.Display r0 = r0.getDefaultDisplay()
            r0.getRealSize(r13)
            int r0 = r13.x
            float r1 = a(r0)
            int r13 = r13.y
            float r13 = a(r13)
            goto L67
        L27:
            java.lang.String r0 = "childViews"
            org.json.JSONArray r13 = r13.optJSONArray(r0)
            if (r13 == 0) goto L66
            int r0 = r13.length()
            r3 = r2
            r2 = r1
        L35:
            if (r3 >= r0) goto L64
            org.json.JSONObject r4 = r13.optJSONObject(r3)
            if (r4 == 0) goto L61
            java.lang.String r5 = "x"
            double r5 = r4.optDouble(r5)
            java.lang.String r7 = "y"
            double r7 = r4.optDouble(r7)
            java.lang.String r9 = "width"
            double r9 = r4.optDouble(r9)
            java.lang.String r11 = "height"
            double r11 = r4.optDouble(r11)
            double r5 = r5 + r9
            float r4 = (float) r5
            float r1 = java.lang.Math.max(r1, r4)
            double r7 = r7 + r11
            float r4 = (float) r7
            float r2 = java.lang.Math.max(r2, r4)
        L61:
            int r3 = r3 + 1
            goto L35
        L64:
            r13 = r2
            goto L67
        L66:
            r13 = r1
        L67:
            com.iab.omid.library.mmadbridge.utils.c$b r0 = new com.iab.omid.library.mmadbridge.utils.c$b
            r0.<init>(r1, r13)
            return r0
    }

    public static org.json.JSONObject a(int r4, int r5, int r6, int r7) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "x"
            float r4 = a(r4)     // Catch: org.json.JSONException -> L2e
            double r2 = (double) r4     // Catch: org.json.JSONException -> L2e
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L2e
            java.lang.String r4 = "y"
            float r5 = a(r5)     // Catch: org.json.JSONException -> L2e
            double r1 = (double) r5     // Catch: org.json.JSONException -> L2e
            r0.put(r4, r1)     // Catch: org.json.JSONException -> L2e
            java.lang.String r4 = "width"
            float r5 = a(r6)     // Catch: org.json.JSONException -> L2e
            double r5 = (double) r5     // Catch: org.json.JSONException -> L2e
            r0.put(r4, r5)     // Catch: org.json.JSONException -> L2e
            java.lang.String r4 = "height"
            float r5 = a(r7)     // Catch: org.json.JSONException -> L2e
            double r5 = (double) r5     // Catch: org.json.JSONException -> L2e
            r0.put(r4, r5)     // Catch: org.json.JSONException -> L2e
            goto L34
        L2e:
            r4 = move-exception
            java.lang.String r5 = "Error with creating viewStateObject"
            com.iab.omid.library.mmadbridge.utils.d.a(r5, r4)
        L34:
            return r0
    }

    public static void a(android.content.Context r1) {
            if (r1 == 0) goto L18
            android.content.res.Resources r0 = r1.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r0 = r0.density
            com.iab.omid.library.mmadbridge.utils.c.c = r0
            java.lang.String r0 = "window"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.view.WindowManager r1 = (android.view.WindowManager) r1
            com.iab.omid.library.mmadbridge.utils.c.a = r1
        L18:
            return
    }

    public static void a(org.json.JSONObject r1, com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus r2) {
            boolean r2 = a(r2)
            java.lang.String r0 = "noOutputDevice"
            r1.put(r0, r2)     // Catch: org.json.JSONException -> La
            goto L10
        La:
            r1 = move-exception
            java.lang.String r2 = "Error with setting output device status"
            com.iab.omid.library.mmadbridge.utils.d.a(r2, r1)
        L10:
            return
    }

    public static void a(org.json.JSONObject r3, com.iab.omid.library.mmadbridge.walking.a.a r4) {
            com.iab.omid.library.mmadbridge.internal.e r0 = r4.a()
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>()
            java.util.ArrayList r4 = r4.b()
            java.util.Iterator r4 = r4.iterator()
        L11:
            boolean r2 = r4.hasNext()
            if (r2 == 0) goto L21
            java.lang.Object r2 = r4.next()
            java.lang.String r2 = (java.lang.String) r2
            r1.put(r2)
            goto L11
        L21:
            java.lang.String r4 = "isFriendlyObstructionFor"
            r3.put(r4, r1)     // Catch: org.json.JSONException -> L42
            java.lang.String r4 = "friendlyObstructionClass"
            java.lang.String r1 = r0.d()     // Catch: org.json.JSONException -> L42
            r3.put(r4, r1)     // Catch: org.json.JSONException -> L42
            java.lang.String r4 = "friendlyObstructionPurpose"
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r1 = r0.b()     // Catch: org.json.JSONException -> L42
            r3.put(r4, r1)     // Catch: org.json.JSONException -> L42
            java.lang.String r4 = "friendlyObstructionReason"
            java.lang.String r0 = r0.a()     // Catch: org.json.JSONException -> L42
            r3.put(r4, r0)     // Catch: org.json.JSONException -> L42
            goto L48
        L42:
            r3 = move-exception
            java.lang.String r4 = "Error with setting friendly obstruction"
            com.iab.omid.library.mmadbridge.utils.d.a(r4, r3)
        L48:
            return
    }

    public static void a(org.json.JSONObject r1, java.lang.Boolean r2) {
            java.lang.String r0 = "hasWindowFocus"
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L6
            goto Lc
        L6:
            r1 = move-exception
            java.lang.String r2 = "Error with setting has window focus"
            com.iab.omid.library.mmadbridge.utils.d.a(r2, r1)
        Lc:
            return
    }

    public static void a(org.json.JSONObject r1, java.lang.String r2) {
            java.lang.String r0 = "adSessionId"
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L6
            goto Lc
        L6:
            r1 = move-exception
            java.lang.String r2 = "Error with setting ad session id"
            com.iab.omid.library.mmadbridge.utils.d.a(r2, r1)
        Lc:
            return
    }

    public static void a(org.json.JSONObject r1, java.lang.String r2, java.lang.Object r3) {
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L4 java.lang.NullPointerException -> L6
            goto L20
        L4:
            r1 = move-exception
            goto L7
        L6:
            r1 = move-exception
        L7:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "JSONException during JSONObject.put for name ["
            r3.append(r0)
            r3.append(r2)
            java.lang.String r2 = "]"
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.iab.omid.library.mmadbridge.utils.d.a(r2, r1)
        L20:
            return
    }

    public static void a(org.json.JSONObject r2, org.json.JSONObject r3) {
            java.lang.String r0 = "childViews"
            org.json.JSONArray r1 = r2.optJSONArray(r0)     // Catch: org.json.JSONException -> L14
            if (r1 != 0) goto L10
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: org.json.JSONException -> L14
            r1.<init>()     // Catch: org.json.JSONException -> L14
            r2.put(r0, r1)     // Catch: org.json.JSONException -> L14
        L10:
            r1.put(r3)     // Catch: org.json.JSONException -> L14
            goto L18
        L14:
            r2 = move-exception
            r2.printStackTrace()
        L18:
            return
    }

    private static boolean a(com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus r1) {
            int[] r0 = com.iab.omid.library.mmadbridge.utils.c.a.a
            int r1 = r1.ordinal()
            r1 = r0[r1]
            r0 = 1
            if (r1 == r0) goto Ld
            r1 = 0
            return r1
        Ld:
            return r0
    }

    private static boolean a(org.json.JSONArray r2, org.json.JSONArray r3) {
            r0 = 1
            if (r2 != 0) goto L6
            if (r3 != 0) goto L6
            return r0
        L6:
            r1 = 0
            if (r2 == 0) goto L19
            if (r3 != 0) goto Lc
            goto L19
        Lc:
            int r2 = r2.length()
            int r3 = r3.length()
            if (r2 != r3) goto L17
            goto L18
        L17:
            r0 = r1
        L18:
            return r0
        L19:
            return r1
    }

    public static void b(org.json.JSONObject r4) {
            com.iab.omid.library.mmadbridge.utils.c$b r0 = a(r4)
            java.lang.String r1 = "width"
            float r2 = r0.a     // Catch: org.json.JSONException -> L15
            double r2 = (double) r2     // Catch: org.json.JSONException -> L15
            r4.put(r1, r2)     // Catch: org.json.JSONException -> L15
            java.lang.String r1 = "height"
            float r0 = r0.b     // Catch: org.json.JSONException -> L15
            double r2 = (double) r0     // Catch: org.json.JSONException -> L15
            r4.put(r1, r2)     // Catch: org.json.JSONException -> L15
            goto L19
        L15:
            r4 = move-exception
            r4.printStackTrace()
        L19:
            return
    }

    public static void b(org.json.JSONObject r1, java.lang.String r2) {
            java.lang.String r0 = "notVisibleReason"
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L6
            goto Lc
        L6:
            r1 = move-exception
            java.lang.String r2 = "Error with setting not visible reason"
            com.iab.omid.library.mmadbridge.utils.d.a(r2, r1)
        Lc:
            return
    }

    private static boolean b(org.json.JSONObject r5, org.json.JSONObject r6) {
            java.lang.String r0 = "childViews"
            org.json.JSONArray r5 = r5.optJSONArray(r0)
            org.json.JSONArray r6 = r6.optJSONArray(r0)
            r0 = 1
            if (r5 != 0) goto L10
            if (r6 != 0) goto L10
            return r0
        L10:
            boolean r1 = a(r5, r6)
            r2 = 0
            if (r1 != 0) goto L18
            return r2
        L18:
            r1 = r2
        L19:
            int r3 = r5.length()
            if (r1 >= r3) goto L31
            org.json.JSONObject r3 = r5.optJSONObject(r1)
            org.json.JSONObject r4 = r6.optJSONObject(r1)
            boolean r3 = h(r3, r4)
            if (r3 != 0) goto L2e
            return r2
        L2e:
            int r1 = r1 + 1
            goto L19
        L31:
            return r0
    }

    private static boolean c(org.json.JSONObject r5, org.json.JSONObject r6) {
            java.lang.String r0 = "isFriendlyObstructionFor"
            org.json.JSONArray r5 = r5.optJSONArray(r0)
            org.json.JSONArray r6 = r6.optJSONArray(r0)
            r0 = 1
            if (r5 != 0) goto L10
            if (r6 != 0) goto L10
            return r0
        L10:
            boolean r1 = a(r5, r6)
            r2 = 0
            if (r1 != 0) goto L18
            return r2
        L18:
            r1 = r2
        L19:
            int r3 = r5.length()
            if (r1 >= r3) goto L33
            java.lang.String r3 = ""
            java.lang.String r4 = r5.optString(r1, r3)
            java.lang.String r3 = r6.optString(r1, r3)
            boolean r3 = r4.equals(r3)
            if (r3 != 0) goto L30
            return r2
        L30:
            int r1 = r1 + 1
            goto L19
        L33:
            return r0
    }

    private static boolean d(org.json.JSONObject r1, org.json.JSONObject r2) {
            java.lang.String r0 = "hasWindowFocus"
            boolean r1 = r1.optBoolean(r0)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            boolean r2 = r2.optBoolean(r0)
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            boolean r1 = r1.equals(r2)
            return r1
    }

    private static boolean e(org.json.JSONObject r1, org.json.JSONObject r2) {
            java.lang.String r0 = "noOutputDevice"
            boolean r1 = r1.optBoolean(r0)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            boolean r2 = r2.optBoolean(r0)
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            boolean r1 = r1.equals(r2)
            return r1
    }

    private static boolean f(org.json.JSONObject r9, org.json.JSONObject r10) {
            java.lang.String[] r0 = com.iab.omid.library.mmadbridge.utils.c.b
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L5:
            if (r3 >= r1) goto L19
            r4 = r0[r3]
            double r5 = r9.optDouble(r4)
            double r7 = r10.optDouble(r4)
            int r4 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r4 == 0) goto L16
            return r2
        L16:
            int r3 = r3 + 1
            goto L5
        L19:
            r9 = 1
            return r9
    }

    private static boolean g(org.json.JSONObject r2, org.json.JSONObject r3) {
            java.lang.String r0 = ""
            java.lang.String r1 = "adSessionId"
            java.lang.String r2 = r2.optString(r1, r0)
            java.lang.String r3 = r3.optString(r1, r0)
            boolean r2 = r2.equals(r3)
            return r2
    }

    public static boolean h(org.json.JSONObject r3, org.json.JSONObject r4) {
            r0 = 1
            if (r3 != 0) goto L6
            if (r4 != 0) goto L6
            return r0
        L6:
            r1 = 0
            if (r3 == 0) goto L33
            if (r4 != 0) goto Lc
            goto L33
        Lc:
            boolean r2 = f(r3, r4)
            if (r2 == 0) goto L31
            boolean r2 = g(r3, r4)
            if (r2 == 0) goto L31
            boolean r2 = e(r3, r4)
            if (r2 == 0) goto L31
            boolean r2 = d(r3, r4)
            if (r2 == 0) goto L31
            boolean r2 = c(r3, r4)
            if (r2 == 0) goto L31
            boolean r3 = b(r3, r4)
            if (r3 == 0) goto L31
            goto L32
        L31:
            r0 = r1
        L32:
            return r0
        L33:
            return r1
    }
}
