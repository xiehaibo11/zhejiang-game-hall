package com.huawei.hms.hatool;

public class z0 extends com.huawei.hms.hatool.f {
    public static java.lang.String c() {
            java.lang.String r0 = "hmsSdk"
            java.lang.String r1 = ""
            java.lang.String r2 = "com.huawei.android.os.BuildEx"
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.reflect.InvocationTargetException -> L2e java.lang.IllegalArgumentException -> L31 java.lang.IllegalAccessException -> L34 java.lang.NoSuchMethodException -> L37 android.util.AndroidRuntimeException -> L3a java.lang.ClassNotFoundException -> L3d
            java.lang.String r3 = "getUDID"
            r4 = 0
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L2e java.lang.IllegalArgumentException -> L31 java.lang.IllegalAccessException -> L34 java.lang.NoSuchMethodException -> L37 android.util.AndroidRuntimeException -> L3a java.lang.ClassNotFoundException -> L3d
            java.lang.reflect.Method r2 = r2.getMethod(r3, r5)     // Catch: java.lang.reflect.InvocationTargetException -> L2e java.lang.IllegalArgumentException -> L31 java.lang.IllegalAccessException -> L34 java.lang.NoSuchMethodException -> L37 android.util.AndroidRuntimeException -> L3a java.lang.ClassNotFoundException -> L3d
            r3 = 0
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L2e java.lang.IllegalArgumentException -> L31 java.lang.IllegalAccessException -> L34 java.lang.NoSuchMethodException -> L37 android.util.AndroidRuntimeException -> L3a java.lang.ClassNotFoundException -> L3d
            java.lang.Object r2 = r2.invoke(r3, r4)     // Catch: java.lang.reflect.InvocationTargetException -> L2e java.lang.IllegalArgumentException -> L31 java.lang.IllegalAccessException -> L34 java.lang.NoSuchMethodException -> L37 android.util.AndroidRuntimeException -> L3a java.lang.ClassNotFoundException -> L3d
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.reflect.InvocationTargetException -> L2e java.lang.IllegalArgumentException -> L31 java.lang.IllegalAccessException -> L34 java.lang.NoSuchMethodException -> L37 android.util.AndroidRuntimeException -> L3a java.lang.ClassNotFoundException -> L3d
            java.lang.String r1 = "getUDID success"
            com.huawei.hms.hatool.y.c(r0, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L22 java.lang.IllegalArgumentException -> L24 java.lang.IllegalAccessException -> L26 java.lang.NoSuchMethodException -> L28 android.util.AndroidRuntimeException -> L2a java.lang.ClassNotFoundException -> L2c
            goto L43
        L22:
            r1 = r2
            goto L2e
        L24:
            r1 = r2
            goto L31
        L26:
            r1 = r2
            goto L34
        L28:
            r1 = r2
            goto L37
        L2a:
            r1 = r2
            goto L3a
        L2c:
            r1 = r2
            goto L3d
        L2e:
            java.lang.String r2 = "getUDID method invoke failed : InvocationTargetException"
            goto L3f
        L31:
            java.lang.String r2 = "getUDID method invoke failed : Illegal ArgumentException"
            goto L3f
        L34:
            java.lang.String r2 = "getUDID method invoke failed : Illegal AccessException"
            goto L3f
        L37:
            java.lang.String r2 = "getUDID method invoke failed : NoSuchMethodException"
            goto L3f
        L3a:
            java.lang.String r2 = "getUDID getudid failed, RuntimeException is AndroidRuntimeException"
            goto L3f
        L3d:
            java.lang.String r2 = "getUDID method invoke failed"
        L3f:
            com.huawei.hms.hatool.y.f(r0, r2)
            r2 = r1
        L43:
            return r2
    }

    public static android.util.Pair<java.lang.String, java.lang.String> e(android.content.Context r3) {
            java.lang.String r0 = "android.permission.READ_PHONE_STATE"
            boolean r0 = com.huawei.hms.hatool.p0.a(r3, r0)
            java.lang.String r1 = ""
            if (r0 == 0) goto L17
            java.lang.String r3 = "hmsSdk"
            java.lang.String r0 = "getMccAndMnc() Pair value is empty"
            com.huawei.hms.hatool.y.f(r3, r0)
            android.util.Pair r3 = new android.util.Pair
            r3.<init>(r1, r1)
            return r3
        L17:
            java.lang.String r0 = "phone"
            java.lang.Object r3 = r3.getSystemService(r0)
            android.telephony.TelephonyManager r3 = (android.telephony.TelephonyManager) r3
            if (r3 != 0) goto L27
            android.util.Pair r3 = new android.util.Pair
            r3.<init>(r1, r1)
            return r3
        L27:
            int r0 = r3.getSimState()
            r2 = 5
            if (r0 == r2) goto L34
            android.util.Pair r3 = new android.util.Pair
            r3.<init>(r1, r1)
            return r3
        L34:
            java.lang.String r3 = r3.getNetworkOperator()
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L63
            java.lang.String r0 = "null"
            boolean r0 = android.text.TextUtils.equals(r3, r0)
            if (r0 == 0) goto L47
            goto L63
        L47:
            int r0 = r3.length()
            r2 = 3
            if (r0 <= r2) goto L5d
            r0 = 0
            java.lang.String r0 = r3.substring(r0, r2)
            java.lang.String r3 = r3.substring(r2)
            android.util.Pair r1 = new android.util.Pair
            r1.<init>(r0, r3)
            return r1
        L5d:
            android.util.Pair r3 = new android.util.Pair
            r3.<init>(r1, r1)
            return r3
        L63:
            android.util.Pair r3 = new android.util.Pair
            r3.<init>(r1, r1)
            return r3
    }

    public static java.lang.String f(android.content.Context r2) {
            java.lang.String r0 = "android.permission.READ_PHONE_STATE"
            boolean r0 = com.huawei.hms.hatool.p0.a(r2, r0)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lb
            return r1
        Lb:
            java.lang.String r0 = "phone"
            java.lang.Object r2 = r2.getSystemService(r0)     // Catch: java.lang.SecurityException -> L1a
            android.telephony.TelephonyManager r2 = (android.telephony.TelephonyManager) r2     // Catch: java.lang.SecurityException -> L1a
            if (r2 == 0) goto L21
            java.lang.String r1 = r2.getDeviceId()     // Catch: java.lang.SecurityException -> L1a
            goto L21
        L1a:
            java.lang.String r2 = "hmsSdk"
            java.lang.String r0 = "getDeviceID Incorrect permissions!"
            com.huawei.hms.hatool.y.b(r2, r0)
        L21:
            return r1
    }

    public static java.lang.String g(android.content.Context r3) {
            java.lang.String r0 = "hmsSdk"
            java.lang.String r1 = "getSerial : is executed."
            com.huawei.hms.hatool.y.a(r0, r1)
            java.lang.String r1 = ""
            if (r3 != 0) goto Lc
            return r1
        Lc:
            java.lang.String r2 = "android.permission.READ_PHONE_STATE"
            boolean r3 = com.huawei.hms.hatool.p0.a(r3, r2)
            if (r3 == 0) goto L15
            return r1
        L15:
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.SecurityException -> L20
            r2 = 26
            if (r3 < r2) goto L25
            java.lang.String r1 = android.os.Build.getSerial()     // Catch: java.lang.SecurityException -> L20
            goto L25
        L20:
            java.lang.String r3 = "getSerial() Incorrect permissions!"
            com.huawei.hms.hatool.y.f(r0, r3)
        L25:
            return r1
    }

    public static java.lang.String h(android.content.Context r2) {
            java.lang.String r0 = android.os.Build.SERIAL
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L12
            java.lang.String r1 = "unknown"
            boolean r1 = r0.equalsIgnoreCase(r1)
            if (r1 == 0) goto L11
            goto L12
        L11:
            return r0
        L12:
            java.lang.String r2 = g(r2)
            return r2
    }
}
