package com.huawei.secure.android.common.util;

public class SafeBase64 {
    private static final java.lang.String a = "SafeBase64";

    static {
            return
    }

    private SafeBase64() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] decode(java.lang.String r2, int r3) {
            byte[] r2 = android.util.Base64.decode(r2, r3)     // Catch: java.lang.Exception -> L5
            return r2
        L5:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.util.SafeBase64.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r1 = " , message2 : "
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            android.util.Log.e(r3, r2)
            r2 = 0
            byte[] r2 = new byte[r2]
            return r2
    }

    public static byte[] decode(byte[] r2, int r3) {
            byte[] r2 = android.util.Base64.decode(r2, r3)     // Catch: java.lang.Exception -> L5
            return r2
        L5:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.util.SafeBase64.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r1 = " , message0 : "
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            android.util.Log.e(r3, r2)
            r2 = 0
            byte[] r2 = new byte[r2]
            return r2
    }

    public static byte[] decode(byte[] r0, int r1, int r2, int r3) {
            byte[] r0 = android.util.Base64.decode(r0, r1, r2, r3)     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            r0 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.util.SafeBase64.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.Class r3 = r0.getClass()
            java.lang.String r3 = r3.getSimpleName()
            r2.append(r3)
            java.lang.String r3 = " , message1 : "
            r2.append(r3)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            android.util.Log.e(r1, r0)
            r0 = 0
            byte[] r0 = new byte[r0]
            return r0
    }

    public static byte[] encode(byte[] r2, int r3) {
            byte[] r2 = android.util.Base64.encode(r2, r3)     // Catch: java.lang.Exception -> L5
            return r2
        L5:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.util.SafeBase64.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r1 = " , message3 : "
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            android.util.Log.e(r3, r2)
            r2 = 0
            byte[] r2 = new byte[r2]
            return r2
    }

    public static byte[] encode(byte[] r0, int r1, int r2, int r3) {
            byte[] r0 = android.util.Base64.encode(r0, r1, r2, r3)     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            r0 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.util.SafeBase64.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.Class r3 = r0.getClass()
            java.lang.String r3 = r3.getSimpleName()
            r2.append(r3)
            java.lang.String r3 = " , message4 : "
            r2.append(r3)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            android.util.Log.e(r1, r0)
            r0 = 0
            byte[] r0 = new byte[r0]
            return r0
    }

    public static java.lang.String encodeToString(byte[] r2, int r3) {
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: java.lang.Exception -> L5
            return r2
        L5:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.util.SafeBase64.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r1 = " , message5 : "
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            android.util.Log.e(r3, r2)
            java.lang.String r2 = ""
            return r2
    }

    public static java.lang.String encodeToString(byte[] r0, int r1, int r2, int r3) {
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1, r2, r3)     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            r0 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.util.SafeBase64.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.Class r3 = r0.getClass()
            java.lang.String r3 = r3.getSimpleName()
            r2.append(r3)
            java.lang.String r3 = " , message6 : "
            r2.append(r3)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            android.util.Log.e(r1, r0)
            java.lang.String r0 = ""
            return r0
    }
}
