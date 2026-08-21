package com.meizu.cloud.pushsdk.platform;

public class a {
    private static java.util.Map<java.lang.String, java.lang.String> a;
    private static final java.util.List<java.lang.String> b = null;

    static {
            java.util.Map r0 = a()
            com.meizu.cloud.pushsdk.platform.a.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a
            java.util.Set r1 = r1.keySet()
            r0.<init>(r1)
            com.meizu.cloud.pushsdk.platform.a.b = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(java.lang.String r8) {
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 == 0) goto L7
            return r8
        L7:
            int r0 = r8.length()     // Catch: java.lang.Exception -> L73
            r1 = 3
            if (r0 <= r1) goto L8a
            r0 = 0
            java.lang.String r2 = r8.substring(r0, r1)     // Catch: java.lang.Exception -> L73
            java.util.Map<java.lang.String, java.lang.String> r3 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Exception -> L73
            boolean r3 = r3.containsKey(r2)     // Catch: java.lang.Exception -> L73
            if (r3 == 0) goto L8a
            java.util.Map<java.lang.String, java.lang.String> r3 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Exception -> L73
            java.lang.Object r2 = r3.get(r2)     // Catch: java.lang.Exception -> L73
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L73
            java.lang.String r1 = r8.substring(r1)     // Catch: java.lang.Exception -> L73
            int r3 = r1.length()     // Catch: java.lang.Exception -> L74
            int r3 = r3 / 2
            char[] r3 = new char[r3]     // Catch: java.lang.Exception -> L74
            r4 = r0
            r5 = r4
        L31:
            int r6 = r1.length()     // Catch: java.lang.Exception -> L74
            int r6 = r6 / 2
            if (r4 >= r6) goto L60
            int r6 = r2.length()     // Catch: java.lang.Exception -> L74
            if (r5 != r6) goto L40
            r5 = r0
        L40:
            int r6 = r4 * 2
            int r7 = r6 + 2
            java.lang.String r6 = r1.substring(r6, r7)     // Catch: java.lang.Exception -> L74
            r7 = 16
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6, r7)     // Catch: java.lang.Exception -> L74
            int r6 = r6.intValue()     // Catch: java.lang.Exception -> L74
            char r6 = (char) r6     // Catch: java.lang.Exception -> L74
            char r7 = r2.charAt(r5)     // Catch: java.lang.Exception -> L74
            r6 = r6 ^ r7
            char r6 = (char) r6     // Catch: java.lang.Exception -> L74
            r3[r4] = r6     // Catch: java.lang.Exception -> L74
            int r4 = r4 + 1
            int r5 = r5 + 1
            goto L31
        L60:
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Exception -> L74
            java.lang.String r2 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L74
            java.lang.String r3 = "iso-8859-1"
            byte[] r2 = r2.getBytes(r3)     // Catch: java.lang.Exception -> L74
            java.lang.String r3 = "UTF-8"
            r0.<init>(r2, r3)     // Catch: java.lang.Exception -> L74
            r8 = r0
            goto L8a
        L73:
            r1 = r8
        L74:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "invalid pushId encryption "
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PushIdEncryptUtils"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
        L8a:
            return r8
    }

    private static java.util.Map<java.lang.String, java.lang.String> a() {
            java.util.Map<java.lang.String, java.lang.String> r0 = com.meizu.cloud.pushsdk.platform.a.a
            boolean r0 = a(r0)
            if (r0 == 0) goto Ld1
            java.lang.Class<com.meizu.cloud.pushsdk.platform.a> r0 = com.meizu.cloud.pushsdk.platform.a.class
            monitor-enter(r0)
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Throwable -> Lce
            boolean r1 = a(r1)     // Catch: java.lang.Throwable -> Lce
            if (r1 == 0) goto Lcc
            java.util.TreeMap r1 = new java.util.TreeMap     // Catch: java.lang.Throwable -> Lce
            r1.<init>()     // Catch: java.lang.Throwable -> Lce
            com.meizu.cloud.pushsdk.platform.a.a = r1     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "UCI"
            java.lang.String r3 = "v9tC0Myz1MGwXRFy"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lce
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "G3G"
            java.lang.String r3 = "XAsFqhhaf4gKpmAi"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lce
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "V5R"
            java.lang.String r3 = "cOqH18NXwBtZVkvz"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lce
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "0XC"
            java.lang.String r3 = "IgSEKZ3Ea6Pm4woS"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lce
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "Z9K"
            java.lang.String r3 = "pH6J9DMPNgqQp8m8"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lce
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "EIM"
            java.lang.String r3 = "K11Rs9HAKRXeNwq8"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lce
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "SO7"
            java.lang.String r3 = "T8LquL1DvwVcogiU"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lce
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "DDI"
            java.lang.String r3 = "d02F6ttOtV05MYCQ"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lce
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "ULY"
            java.lang.String r3 = "ToZZIhAywnUfHShN"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lce
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "0EV"
            java.lang.String r3 = "r5D5RRwQhfV0AYLb"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lce
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "N6A"
            java.lang.String r3 = "QAtSBFcXnQoUgHO2"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lce
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "S5Q"
            java.lang.String r3 = "sDWLrZINnum227am"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lce
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "RA5"
            java.lang.String r3 = "4Uq3Ruxo1FTBdHQE"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lce
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "J04"
            java.lang.String r3 = "N5hViUTdLCpN59H0"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lce
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "B68"
            java.lang.String r3 = "EY3sH1KKtalg5ZaT"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lce
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "9IW"
            java.lang.String r3 = "q1u0MiuFyim4pCYY"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lce
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "UU3"
            java.lang.String r3 = "syLnkkd8AqNykVV7"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lce
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "Z49"
            java.lang.String r3 = "V00FiWu124yE91sH"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lce
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "BNA"
            java.lang.String r3 = "rPP7AK1VWpKEry3p"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lce
            java.util.Map<java.lang.String, java.lang.String> r1 = com.meizu.cloud.pushsdk.platform.a.a     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "WXG"
            java.lang.String r3 = "om8w5ahkJJgpAH9v"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lce
        Lcc:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lce
            goto Ld1
        Lce:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lce
            throw r1
        Ld1:
            java.util.Map<java.lang.String, java.lang.String> r0 = com.meizu.cloud.pushsdk.platform.a.a
            return r0
    }

    public static <K, V> boolean a(java.util.Map<K, V> r0) {
            if (r0 == 0) goto Lb
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L9
            goto Lb
        L9:
            r0 = 0
            goto Lc
        Lb:
            r0 = 1
        Lc:
            return r0
    }
}
