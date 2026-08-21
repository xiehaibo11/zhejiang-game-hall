package com.kuaishou.weapon.p0;

public class an {
    public static final java.lang.String a = "de.robv.android.xposed.XposedHelpers";
    public static final java.lang.String b = "de.robv.android.xposed.XposedBridge";
    public static final java.lang.String c = "com.elderdrivers.riru.edxp.config.EdXpConfigGlobal";

    public an() {
            r0 = this;
            r0.<init>()
            return
    }

    private boolean a(android.content.Context r3, java.lang.String r4, java.util.Set r5) {
            r2 = this;
            r0 = 0
            int r1 = r5.size()     // Catch: java.lang.Exception -> L1c
            if (r1 > 0) goto L8
            return r0
        L8:
            java.lang.String r1 = "phone"
            java.lang.Object r3 = r3.getSystemService(r1)     // Catch: java.lang.Exception -> L1c
            android.telephony.TelephonyManager r3 = (android.telephony.TelephonyManager) r3     // Catch: java.lang.Exception -> L1c
            if (r3 != 0) goto L13
            return r0
        L13:
            java.lang.Class r3 = r3.getClass()     // Catch: java.lang.Exception -> L1c
            boolean r3 = r2.a(r3, r4, r5)     // Catch: java.lang.Exception -> L1c
            return r3
        L1c:
            return r0
    }

    private boolean a(java.lang.Class r3, java.lang.String r4, java.util.Set r5) {
            r2 = this;
            r0 = 0
            if (r4 == 0) goto L23
            int r1 = r5.size()     // Catch: java.lang.Exception -> L23
            if (r1 <= 0) goto L23
            java.lang.String r1 = r5.toString()     // Catch: java.lang.Exception -> L23
            boolean r4 = r1.contains(r4)     // Catch: java.lang.Exception -> L23
            if (r4 == 0) goto L23
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Exception -> L23
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Exception -> L23
            boolean r3 = r4.contains(r3)     // Catch: java.lang.Exception -> L23
            if (r3 == 0) goto L23
            r3 = 1
            return r3
        L23:
            return r0
    }

    private boolean a(java.lang.reflect.Method r1) {
            r0 = this;
            if (r1 == 0) goto Le
            int r1 = r1.getModifiers()
            boolean r1 = java.lang.reflect.Modifier.isNative(r1)
            if (r1 == 0) goto Le
            r1 = 1
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    public int a(android.content.Context r3, int r4, java.util.Set r5) {
            r2 = this;
            r0 = 0
            java.lang.ClassLoader r1 = java.lang.ClassLoader.getSystemClassLoader()     // Catch: java.lang.Exception -> L3f
            if (r1 == 0) goto L3a
            switch(r4) {
                case 13: goto L37;
                case 14: goto L34;
                case 15: goto L2d;
                case 16: goto L28;
                case 17: goto L23;
                case 18: goto L1e;
                case 19: goto L19;
                case 20: goto L14;
                case 21: goto Lb;
                default: goto La;
            }     // Catch: java.lang.Exception -> L3f
        La:
            goto L3a
        Lb:
            java.lang.Class<android.net.wifi.WifiInfo> r3 = android.net.wifi.WifiInfo.class
            java.lang.String r4 = "getBSSID"
        Lf:
            boolean r3 = r2.a(r3, r4, r5)     // Catch: java.lang.Exception -> L3f
            goto L3b
        L14:
            java.lang.Class<android.net.wifi.WifiInfo> r3 = android.net.wifi.WifiInfo.class
            java.lang.String r4 = "getSSID"
            goto Lf
        L19:
            java.lang.Class<android.net.wifi.WifiInfo> r3 = android.net.wifi.WifiInfo.class
            java.lang.String r4 = "getMacAddress"
            goto Lf
        L1e:
            java.lang.Class<java.lang.reflect.Method> r3 = java.lang.reflect.Method.class
            java.lang.String r4 = "invoke"
            goto Lf
        L23:
            java.lang.Class<java.lang.StringBuilder> r3 = java.lang.StringBuilder.class
            java.lang.String r4 = "toString"
            goto Lf
        L28:
            java.lang.Class<android.provider.Settings$Secure> r3 = android.provider.Settings.Secure.class
            java.lang.String r4 = "getString"
            goto Lf
        L2d:
            java.lang.String r4 = "getSimSerialNumber"
        L2f:
            boolean r3 = r2.a(r3, r4, r5)     // Catch: java.lang.Exception -> L3f
            goto L3b
        L34:
            java.lang.String r4 = "getSubscriberId"
            goto L2f
        L37:
            java.lang.String r4 = "getDeviceId"
            goto L2f
        L3a:
            r3 = r0
        L3b:
            if (r3 == 0) goto L3f
            r3 = 1
            return r3
        L3f:
            return r0
    }

    public java.util.Set<java.lang.String> a() {
            r6 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1 = 0
            java.util.HashSet r2 = new java.util.HashSet     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L88
            r2.<init>()     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L88
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L88
            java.lang.String r4 = "/proc/"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L88
            int r4 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L88
            r3.append(r4)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L88
            java.lang.String r4 = "/maps"
            r3.append(r4)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L88
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L88
            java.io.BufferedReader r4 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L88
            java.io.FileReader r5 = new java.io.FileReader     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L88
            r5.<init>(r3)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L88
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L88
        L2c:
            java.lang.String r3 = r4.readLine()     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L89
            if (r3 == 0) goto L52
            java.lang.String r5 = ".so"
            boolean r5 = r3.endsWith(r5)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L89
            if (r5 != 0) goto L42
            java.lang.String r5 = ".jar"
            boolean r5 = r3.endsWith(r5)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L89
            if (r5 == 0) goto L2c
        L42:
            java.lang.String r5 = " "
            int r5 = r3.lastIndexOf(r5)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L89
            int r5 = r5 + 1
            java.lang.String r3 = r3.substring(r5)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L89
            r2.add(r3)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L89
            goto L2c
        L52:
            r4.close()     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L89
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L89
        L59:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L89
            if (r3 == 0) goto L7a
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L89
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L89
            java.lang.String r5 = "com.saurik.substrate"
            boolean r5 = r3.contains(r5)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L89
            if (r5 == 0) goto L71
        L6d:
            r0.add(r3)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L89
            goto L59
        L71:
            java.lang.String r5 = "XposedBridge.jar"
            boolean r5 = r3.contains(r5)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L89
            if (r5 == 0) goto L59
            goto L6d
        L7a:
            r4.close()     // Catch: java.lang.Exception -> L8c
            goto L8c
        L7e:
            r0 = move-exception
            r1 = r4
            goto L82
        L81:
            r0 = move-exception
        L82:
            if (r1 == 0) goto L87
            r1.close()     // Catch: java.lang.Exception -> L87
        L87:
            throw r0
        L88:
            r4 = r1
        L89:
            if (r4 == 0) goto L8c
            goto L7a
        L8c:
            int r2 = r0.size()
            if (r2 <= 0) goto L93
            return r0
        L93:
            return r1
    }

    public java.util.Set a(java.util.Set r5) {
            r4 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Iterator r5 = r5.iterator()
        L9:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L3b
            java.lang.Object r1 = r5.next()
            boolean r2 = r1 instanceof java.lang.String
            if (r2 == 0) goto L30
            if (r1 == 0) goto L2c
            r2 = r1
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = "android.app.ResourcesManager#"
            boolean r3 = r2.startsWith(r3)
            if (r3 != 0) goto L9
            java.lang.String r3 = "android.view.LayoutInflater#"
            boolean r2 = r2.startsWith(r3)
            if (r2 != 0) goto L9
        L2c:
            r0.add(r1)
            goto L9
        L30:
            boolean r2 = r1 instanceof java.lang.reflect.Method
            if (r2 == 0) goto L9
            java.lang.reflect.Method r1 = (java.lang.reflect.Method) r1
            java.lang.String r1 = r1.getName()
            goto L2c
        L3b:
            return r0
    }

    public boolean a(java.lang.Class r1, java.lang.String r2, java.lang.Class<?>... r3) {
            r0 = this;
            java.lang.reflect.Method r1 = com.kuaishou.weapon.p0.bg.a(r1, r2, r3)     // Catch: java.lang.Exception -> L9
            boolean r1 = r0.a(r1)     // Catch: java.lang.Exception -> L9
            return r1
        L9:
            r1 = 0
            return r1
    }

    public java.util.Set<java.lang.String> b() {
            r3 = this;
            java.lang.ClassLoader r0 = java.lang.ClassLoader.getSystemClassLoader()     // Catch: java.lang.Exception -> L2f
            java.lang.String r1 = "de.robv.android.xposed.XposedBridge"
            java.lang.Class r0 = r0.loadClass(r1)     // Catch: java.lang.Exception -> L2f
            if (r0 == 0) goto L2f
            java.lang.String r1 = "sHookedMethodCallbacks"
            java.lang.reflect.Field r1 = r0.getDeclaredField(r1)     // Catch: java.lang.Exception -> L2f
            r2 = 1
            r1.setAccessible(r2)     // Catch: java.lang.Exception -> L2f
            java.lang.Object r0 = r1.get(r0)     // Catch: java.lang.Exception -> L2f
            java.util.Map r0 = (java.util.Map) r0     // Catch: java.lang.Exception -> L2f
            if (r0 == 0) goto L2f
            java.util.Set r0 = r0.keySet()     // Catch: java.lang.Exception -> L2f
            if (r0 == 0) goto L2f
            int r1 = r0.size()     // Catch: java.lang.Exception -> L2f
            if (r1 <= 0) goto L2f
            java.util.Set r0 = r3.a(r0)     // Catch: java.lang.Exception -> L2f
            return r0
        L2f:
            r0 = 0
            return r0
    }

    public org.json.JSONObject b(java.util.Set r7) {
            r6 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L9a
            r0.<init>()     // Catch: java.lang.Exception -> L9a
            java.lang.ClassLoader r1 = java.lang.ClassLoader.getSystemClassLoader()     // Catch: java.lang.Exception -> L9a
            if (r1 == 0) goto L99
            int r1 = r7.size()     // Catch: java.lang.Exception -> L9a
            if (r1 <= 0) goto L99
            java.lang.Class<java.lang.Class> r1 = java.lang.Class.class
            java.lang.String r2 = "forName"
            boolean r1 = r6.a(r1, r2, r7)     // Catch: java.lang.Exception -> L9a
            java.lang.String r2 = "0"
            r3 = 1
            r4 = 0
            if (r1 == 0) goto L21
            r1 = r3
            goto L22
        L21:
            r1 = r4
        L22:
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L9a
            java.lang.Class<java.lang.ClassLoader> r1 = java.lang.ClassLoader.class
            java.lang.String r2 = "loadClass"
            boolean r1 = r6.a(r1, r2, r7)     // Catch: java.lang.Exception -> L9a
            java.lang.String r2 = "1"
            if (r1 == 0) goto L33
            r1 = r3
            goto L34
        L33:
            r1 = r4
        L34:
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L9a
            java.lang.Class<java.lang.Throwable> r1 = java.lang.Throwable.class
            java.lang.String r2 = "getStackTrace"
            boolean r1 = r6.a(r1, r2, r7)     // Catch: java.lang.Exception -> L9a
            java.lang.String r2 = "2"
            if (r1 == 0) goto L45
            r1 = r3
            goto L46
        L45:
            r1 = r4
        L46:
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L9a
            java.lang.Class<android.content.pm.PackageManager> r1 = android.content.pm.PackageManager.class
            java.lang.String r2 = "Z2V0SW5zdGFsbGVkUGFja2FnZXM="
            r5 = 2
            java.lang.String r2 = com.kuaishou.weapon.p0.c.b(r2, r5)     // Catch: java.lang.Exception -> L9a
            boolean r1 = r6.a(r1, r2, r7)     // Catch: java.lang.Exception -> L9a
            java.lang.String r2 = "3"
            if (r1 == 0) goto L5c
            r1 = r3
            goto L5d
        L5c:
            r1 = r4
        L5d:
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L9a
            java.lang.Class<android.content.pm.PackageManager> r1 = android.content.pm.PackageManager.class
            java.lang.String r2 = "Z2V0SW5zdGFsbGVkQXBwbGljYXRpb25z"
            java.lang.String r2 = com.kuaishou.weapon.p0.c.b(r2, r5)     // Catch: java.lang.Exception -> L9a
            boolean r1 = r6.a(r1, r2, r7)     // Catch: java.lang.Exception -> L9a
            java.lang.String r2 = "4"
            if (r1 == 0) goto L72
            r1 = r3
            goto L73
        L72:
            r1 = r4
        L73:
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L9a
            java.lang.Class<android.app.ActivityManager> r1 = android.app.ActivityManager.class
            java.lang.String r2 = "getRunningServices"
            boolean r1 = r6.a(r1, r2, r7)     // Catch: java.lang.Exception -> L9a
            java.lang.String r2 = "5"
            if (r1 == 0) goto L84
            r1 = r3
            goto L85
        L84:
            r1 = r4
        L85:
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L9a
            java.lang.Class<org.json.JSONObject> r1 = org.json.JSONObject.class
            java.lang.String r2 = "toString"
            boolean r7 = r6.a(r1, r2, r7)     // Catch: java.lang.Exception -> L9a
            java.lang.String r1 = "6"
            if (r7 == 0) goto L95
            goto L96
        L95:
            r3 = r4
        L96:
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L9a
        L99:
            return r0
        L9a:
            r7 = 0
            return r7
    }

    public java.util.Set<java.lang.String> c() {
            r3 = this;
            java.lang.ClassLoader r0 = java.lang.ClassLoader.getSystemClassLoader()     // Catch: java.lang.Exception -> L2f
            java.lang.String r1 = "de.robv.android.xposed.XposedHelpers"
            java.lang.Class r0 = r0.loadClass(r1)     // Catch: java.lang.Exception -> L2f
            if (r0 == 0) goto L2f
            java.lang.String r1 = "methodCache"
            java.lang.reflect.Field r1 = r0.getDeclaredField(r1)     // Catch: java.lang.Exception -> L2f
            r2 = 1
            r1.setAccessible(r2)     // Catch: java.lang.Exception -> L2f
            java.lang.Object r0 = r1.get(r0)     // Catch: java.lang.Exception -> L2f
            java.util.Map r0 = (java.util.Map) r0     // Catch: java.lang.Exception -> L2f
            if (r0 == 0) goto L2f
            java.util.Set r0 = r0.keySet()     // Catch: java.lang.Exception -> L2f
            if (r0 == 0) goto L2f
            int r1 = r0.size()     // Catch: java.lang.Exception -> L2f
            if (r1 <= 0) goto L2f
            java.util.Set r0 = r3.a(r0)     // Catch: java.lang.Exception -> L2f
            return r0
        L2f:
            r0 = 0
            return r0
    }

    public org.json.JSONObject d() {
            r7 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lf4
            r0.<init>()     // Catch: java.lang.Exception -> Lf4
            java.lang.Class<android.telephony.TelephonyManager> r1 = android.telephony.TelephonyManager.class
            java.lang.String r2 = "getDeviceId"
            r3 = 0
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> Lf4
            boolean r1 = r7.a(r1, r2, r4)     // Catch: java.lang.Exception -> Lf4
            java.lang.String r2 = "0"
            r4 = 1
            if (r1 == 0) goto L17
            r1 = r4
            goto L18
        L17:
            r1 = r3
        L18:
            r0.put(r2, r1)     // Catch: java.lang.Exception -> Lf4
            java.lang.Class<android.telephony.TelephonyManager> r1 = android.telephony.TelephonyManager.class
            java.lang.String r2 = "getSubscriberId"
            java.lang.Class[] r5 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> Lf4
            boolean r1 = r7.a(r1, r2, r5)     // Catch: java.lang.Exception -> Lf4
            java.lang.String r2 = "1"
            if (r1 == 0) goto L2b
            r1 = r4
            goto L2c
        L2b:
            r1 = r3
        L2c:
            r0.put(r2, r1)     // Catch: java.lang.Exception -> Lf4
            java.lang.Class<android.telephony.TelephonyManager> r1 = android.telephony.TelephonyManager.class
            java.lang.String r2 = "getSimSerialNumber"
            java.lang.Class[] r5 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> Lf4
            boolean r1 = r7.a(r1, r2, r5)     // Catch: java.lang.Exception -> Lf4
            java.lang.String r2 = "2"
            if (r1 == 0) goto L3f
            r1 = r4
            goto L40
        L3f:
            r1 = r3
        L40:
            r0.put(r2, r1)     // Catch: java.lang.Exception -> Lf4
            java.lang.Class<android.location.Location> r1 = android.location.Location.class
            java.lang.String r2 = "getLatitude"
            java.lang.Class[] r5 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> Lf4
            boolean r1 = r7.a(r1, r2, r5)     // Catch: java.lang.Exception -> Lf4
            java.lang.String r2 = "3"
            if (r1 == 0) goto L53
            r1 = r4
            goto L54
        L53:
            r1 = r3
        L54:
            r0.put(r2, r1)     // Catch: java.lang.Exception -> Lf4
            java.lang.Class<android.location.Location> r1 = android.location.Location.class
            java.lang.String r2 = "getLongitude"
            java.lang.Class[] r5 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> Lf4
            boolean r1 = r7.a(r1, r2, r5)     // Catch: java.lang.Exception -> Lf4
            java.lang.String r2 = "4"
            if (r1 == 0) goto L67
            r1 = r4
            goto L68
        L67:
            r1 = r3
        L68:
            r0.put(r2, r1)     // Catch: java.lang.Exception -> Lf4
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> Lf4
            r2 = 26
            java.lang.String r5 = "5"
            if (r1 < r2) goto L86
            java.lang.Class<android.os.Build> r1 = android.os.Build.class
            java.lang.String r2 = "getSerial"
            java.lang.Class[] r6 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> Lf4
            boolean r1 = r7.a(r1, r2, r6)     // Catch: java.lang.Exception -> Lf4
            if (r1 == 0) goto L81
            r1 = r4
            goto L82
        L81:
            r1 = r3
        L82:
            r0.put(r5, r1)     // Catch: java.lang.Exception -> Lf4
            goto L89
        L86:
            r0.put(r5, r3)     // Catch: java.lang.Exception -> Lf4
        L89:
            java.lang.Class<android.net.wifi.WifiInfo> r1 = android.net.wifi.WifiInfo.class
            java.lang.String r2 = "getMacAddress"
            java.lang.Class[] r5 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> Lf4
            boolean r1 = r7.a(r1, r2, r5)     // Catch: java.lang.Exception -> Lf4
            java.lang.String r2 = "6"
            if (r1 == 0) goto L99
            r1 = r4
            goto L9a
        L99:
            r1 = r3
        L9a:
            r0.put(r2, r1)     // Catch: java.lang.Exception -> Lf4
            java.lang.Class<android.net.wifi.WifiInfo> r1 = android.net.wifi.WifiInfo.class
            java.lang.String r2 = "getBSSID"
            java.lang.Class[] r5 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> Lf4
            boolean r1 = r7.a(r1, r2, r5)     // Catch: java.lang.Exception -> Lf4
            java.lang.String r2 = "7"
            if (r1 == 0) goto Lad
            r1 = r4
            goto Lae
        Lad:
            r1 = r3
        Lae:
            r0.put(r2, r1)     // Catch: java.lang.Exception -> Lf4
            java.lang.Class<android.net.wifi.WifiInfo> r1 = android.net.wifi.WifiInfo.class
            java.lang.String r2 = "getRssi"
            java.lang.Class[] r5 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> Lf4
            boolean r1 = r7.a(r1, r2, r5)     // Catch: java.lang.Exception -> Lf4
            java.lang.String r2 = "8"
            if (r1 == 0) goto Lc1
            r1 = r4
            goto Lc2
        Lc1:
            r1 = r3
        Lc2:
            r0.put(r2, r1)     // Catch: java.lang.Exception -> Lf4
            java.lang.Class<java.lang.Class> r1 = java.lang.Class.class
            java.lang.String r2 = "forName"
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> Lf4
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r5[r3] = r6     // Catch: java.lang.Exception -> Lf4
            boolean r1 = r7.a(r1, r2, r5)     // Catch: java.lang.Exception -> Lf4
            java.lang.String r2 = "9"
            if (r1 == 0) goto Ld9
            r1 = r4
            goto Lda
        Ld9:
            r1 = r3
        Lda:
            r0.put(r2, r1)     // Catch: java.lang.Exception -> Lf4
            java.lang.Class<android.app.ActivityManager> r1 = android.app.ActivityManager.class
            java.lang.String r2 = "getRunningServices"
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> Lf4
            java.lang.Class r6 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> Lf4
            r5[r3] = r6     // Catch: java.lang.Exception -> Lf4
            boolean r1 = r7.a(r1, r2, r5)     // Catch: java.lang.Exception -> Lf4
            java.lang.String r2 = "10"
            if (r1 == 0) goto Lf0
            r3 = r4
        Lf0:
            r0.put(r2, r3)     // Catch: java.lang.Exception -> Lf4
            return r0
        Lf4:
            r0 = 0
            return r0
    }

    public org.json.JSONObject e() {
            r8 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L69
            r0.<init>()     // Catch: java.lang.Exception -> L69
            java.lang.Class<android.media.MediaRecorder> r1 = android.media.MediaRecorder.class
            java.lang.String r2 = "setOutputFile"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L69
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Exception -> L69
            boolean r1 = r8.a(r1, r2, r4)     // Catch: java.lang.Exception -> L69
            if (r1 == 0) goto L21
            java.lang.String r2 = "0"
            if (r1 == 0) goto L1d
            r1 = r3
            goto L1e
        L1d:
            r1 = r6
        L1e:
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L69
        L21:
            java.lang.Class<android.hardware.Camera> r1 = android.hardware.Camera.class
            java.lang.String r2 = "takePicture"
            r4 = 3
            java.lang.Class[] r4 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L69
            java.lang.Class<android.hardware.Camera$ShutterCallback> r5 = android.hardware.Camera.ShutterCallback.class
            r4[r6] = r5     // Catch: java.lang.Exception -> L69
            java.lang.Class<android.hardware.Camera$PictureCallback> r5 = android.hardware.Camera.PictureCallback.class
            r4[r3] = r5     // Catch: java.lang.Exception -> L69
            java.lang.Class<android.hardware.Camera$PictureCallback> r5 = android.hardware.Camera.PictureCallback.class
            r7 = 2
            r4[r7] = r5     // Catch: java.lang.Exception -> L69
            boolean r1 = r8.a(r1, r2, r4)     // Catch: java.lang.Exception -> L69
            if (r1 == 0) goto L45
            java.lang.String r2 = "1"
            if (r1 == 0) goto L41
            r1 = r3
            goto L42
        L41:
            r1 = r6
        L42:
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L69
        L45:
            java.lang.Class<android.media.MediaPlayer> r1 = android.media.MediaPlayer.class
            java.lang.String r2 = "setDataSource"
            java.lang.Class[] r4 = new java.lang.Class[r7]     // Catch: java.lang.Exception -> L69
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r4[r6] = r5     // Catch: java.lang.Exception -> L69
            java.lang.Class<android.net.Uri> r5 = android.net.Uri.class
            r4[r3] = r5     // Catch: java.lang.Exception -> L69
            boolean r1 = r8.a(r1, r2, r4)     // Catch: java.lang.Exception -> L69
            if (r1 == 0) goto L62
            java.lang.String r2 = "2"
            if (r1 == 0) goto L5e
            goto L5f
        L5e:
            r3 = r6
        L5f:
            r0.put(r2, r3)     // Catch: java.lang.Exception -> L69
        L62:
            int r1 = r0.length()     // Catch: java.lang.Exception -> L69
            if (r1 <= 0) goto L69
            return r0
        L69:
            r0 = 0
            return r0
    }

    public org.json.JSONObject f() {
            r9 = this;
            java.lang.Class<byte[]> r0 = byte[].class
            r1 = 0
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lbc
            r2.<init>()     // Catch: java.lang.Exception -> Lbc
            java.lang.Class<javax.crypto.Cipher> r3 = javax.crypto.Cipher.class
            java.lang.String r4 = "doFinal"
            r5 = 1
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> Lbc
            r7 = 0
            r6[r7] = r0     // Catch: java.lang.Exception -> Lbc
            boolean r3 = r9.a(r3, r4, r6)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r4 = "0"
            if (r3 == 0) goto L1c
            r6 = r5
            goto L1d
        L1c:
            r6 = r7
        L1d:
            r2.put(r4, r6)     // Catch: java.lang.Exception -> Lbc
            java.lang.Class<java.security.SecureRandom> r4 = java.security.SecureRandom.class
            java.lang.String r6 = "setSeed"
            java.lang.Class[] r8 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> Lbc
            r8[r7] = r0     // Catch: java.lang.Exception -> Lbc
            boolean r4 = r9.a(r4, r6, r8)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r6 = "1"
            if (r4 == 0) goto L32
            r8 = r5
            goto L33
        L32:
            r8 = r7
        L33:
            r2.put(r6, r8)     // Catch: java.lang.Exception -> Lbc
            if (r4 == 0) goto L39
            r3 = r5
        L39:
            java.lang.Class<java.security.MessageDigest> r4 = java.security.MessageDigest.class
            java.lang.String r6 = "update"
            java.lang.Class[] r8 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> Lbc
            r8[r7] = r0     // Catch: java.lang.Exception -> Lbc
            boolean r0 = r9.a(r4, r6, r8)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r4 = "2"
            if (r0 == 0) goto L4b
            r6 = r5
            goto L4c
        L4b:
            r6 = r7
        L4c:
            r2.put(r4, r6)     // Catch: java.lang.Exception -> Lbc
            if (r0 == 0) goto L52
            r3 = r5
        L52:
            java.lang.Class<java.security.MessageDigest> r0 = java.security.MessageDigest.class
            java.lang.String r4 = "getInstance"
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> Lbc
            java.lang.Class<java.lang.String> r8 = java.lang.String.class
            r6[r7] = r8     // Catch: java.lang.Exception -> Lbc
            boolean r0 = r9.a(r0, r4, r6)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r4 = "3"
            if (r0 == 0) goto L66
            r6 = r5
            goto L67
        L66:
            r6 = r7
        L67:
            r2.put(r4, r6)     // Catch: java.lang.Exception -> Lbc
            if (r0 == 0) goto L6d
            r3 = r5
        L6d:
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            java.lang.String r4 = "parse"
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> Lbc
            java.lang.Class<java.lang.String> r8 = java.lang.String.class
            r6[r7] = r8     // Catch: java.lang.Exception -> Lbc
            boolean r0 = r9.a(r0, r4, r6)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r4 = "4"
            if (r0 == 0) goto L81
            r6 = r5
            goto L82
        L81:
            r6 = r7
        L82:
            r2.put(r4, r6)     // Catch: java.lang.Exception -> Lbc
            if (r0 == 0) goto L88
            r3 = r5
        L88:
            java.lang.Class<android.database.sqlite.SQLiteDatabase> r0 = android.database.sqlite.SQLiteDatabase.class
            java.lang.String r4 = "execSQL"
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> Lbc
            java.lang.Class<java.lang.String> r8 = java.lang.String.class
            r6[r7] = r8     // Catch: java.lang.Exception -> Lbc
            boolean r0 = r9.a(r0, r4, r6)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r4 = "5"
            if (r0 == 0) goto L9c
            r6 = r5
            goto L9d
        L9c:
            r6 = r7
        L9d:
            r2.put(r4, r6)     // Catch: java.lang.Exception -> Lbc
            if (r0 == 0) goto La3
            r3 = r5
        La3:
            java.lang.Class<android.app.Activity> r0 = android.app.Activity.class
            java.lang.String r4 = "finish"
            java.lang.Class[] r6 = new java.lang.Class[r7]     // Catch: java.lang.Exception -> Lbc
            boolean r0 = r9.a(r0, r4, r6)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r4 = "6"
            if (r0 == 0) goto Lb2
            r7 = r5
        Lb2:
            r2.put(r4, r7)     // Catch: java.lang.Exception -> Lbc
            if (r0 == 0) goto Lb8
            goto Lb9
        Lb8:
            r5 = r3
        Lb9:
            if (r5 == 0) goto Lbc
            return r2
        Lbc:
            return r1
    }

    public org.json.JSONObject g() {
            r10 = this;
            java.lang.Class<byte[]> r0 = byte[].class
            java.lang.String r1 = "toString"
            r2 = 0
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lb8
            r3.<init>()     // Catch: java.lang.Exception -> Lb8
            java.lang.Class<org.json.JSONObject> r4 = org.json.JSONObject.class
            r5 = 0
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> Lb8
            boolean r4 = r10.a(r4, r1, r6)     // Catch: java.lang.Exception -> Lb8
            r6 = 1
            if (r4 == 0) goto L20
            java.lang.String r7 = "0"
            if (r4 == 0) goto L1c
            r4 = r6
            goto L1d
        L1c:
            r4 = r5
        L1d:
            r3.put(r7, r4)     // Catch: java.lang.Exception -> Lb8
        L20:
            java.lang.Class<android.text.TextUtils> r4 = android.text.TextUtils.class
            java.lang.String r7 = "isEmpty"
            java.lang.Class[] r8 = new java.lang.Class[r6]     // Catch: java.lang.Exception -> Lb8
            java.lang.Class<java.lang.CharSequence> r9 = java.lang.CharSequence.class
            r8[r5] = r9     // Catch: java.lang.Exception -> Lb8
            boolean r4 = r10.a(r4, r7, r8)     // Catch: java.lang.Exception -> Lb8
            if (r4 == 0) goto L3a
            java.lang.String r7 = "1"
            if (r4 == 0) goto L36
            r4 = r6
            goto L37
        L36:
            r4 = r5
        L37:
            r3.put(r7, r4)     // Catch: java.lang.Exception -> Lb8
        L3a:
            java.lang.Class<org.json.JSONArray> r4 = org.json.JSONArray.class
            java.lang.Class[] r7 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> Lb8
            boolean r1 = r10.a(r4, r1, r7)     // Catch: java.lang.Exception -> Lb8
            if (r1 == 0) goto L4e
            java.lang.String r4 = "2"
            if (r1 == 0) goto L4a
            r1 = r6
            goto L4b
        L4a:
            r1 = r5
        L4b:
            r3.put(r4, r1)     // Catch: java.lang.Exception -> Lb8
        L4e:
            java.lang.Class<javax.crypto.Cipher> r1 = javax.crypto.Cipher.class
            java.lang.String r4 = "doFinal"
            java.lang.Class[] r7 = new java.lang.Class[r6]     // Catch: java.lang.Exception -> Lb8
            r7[r5] = r0     // Catch: java.lang.Exception -> Lb8
            boolean r1 = r10.a(r1, r4, r7)     // Catch: java.lang.Exception -> Lb8
            if (r1 == 0) goto L66
            java.lang.String r4 = "3"
            if (r1 == 0) goto L62
            r1 = r6
            goto L63
        L62:
            r1 = r5
        L63:
            r3.put(r4, r1)     // Catch: java.lang.Exception -> Lb8
        L66:
            java.lang.Class<java.io.ByteArrayOutputStream> r1 = java.io.ByteArrayOutputStream.class
            java.lang.String r4 = "toByteArray"
            java.lang.Class[] r7 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> Lb8
            boolean r1 = r10.a(r1, r4, r7)     // Catch: java.lang.Exception -> Lb8
            if (r1 == 0) goto L7c
            java.lang.String r4 = "4"
            if (r1 == 0) goto L78
            r1 = r6
            goto L79
        L78:
            r1 = r5
        L79:
            r3.put(r4, r1)     // Catch: java.lang.Exception -> Lb8
        L7c:
            java.lang.Class<java.io.FileOutputStream> r1 = java.io.FileOutputStream.class
            java.lang.String r4 = "write"
            java.lang.Class[] r7 = new java.lang.Class[r6]     // Catch: java.lang.Exception -> Lb8
            r7[r5] = r0     // Catch: java.lang.Exception -> Lb8
            boolean r0 = r10.a(r1, r4, r7)     // Catch: java.lang.Exception -> Lb8
            if (r0 == 0) goto L94
            java.lang.String r1 = "5"
            if (r0 == 0) goto L90
            r0 = r6
            goto L91
        L90:
            r0 = r5
        L91:
            r3.put(r1, r0)     // Catch: java.lang.Exception -> Lb8
        L94:
            java.lang.Class<java.net.HttpURLConnection> r0 = java.net.HttpURLConnection.class
            java.lang.String r1 = "setRequestProperty"
            r4 = 2
            java.lang.Class[] r4 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> Lb8
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r4[r5] = r7     // Catch: java.lang.Exception -> Lb8
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r4[r6] = r7     // Catch: java.lang.Exception -> Lb8
            boolean r0 = r10.a(r0, r1, r4)     // Catch: java.lang.Exception -> Lb8
            if (r0 == 0) goto Lb1
            java.lang.String r1 = "6"
            if (r0 == 0) goto Lae
            r5 = r6
        Lae:
            r3.put(r1, r5)     // Catch: java.lang.Exception -> Lb8
        Lb1:
            int r0 = r3.length()     // Catch: java.lang.Exception -> Lb8
            if (r0 <= 0) goto Lb8
            return r3
        Lb8:
            return r2
    }
}
