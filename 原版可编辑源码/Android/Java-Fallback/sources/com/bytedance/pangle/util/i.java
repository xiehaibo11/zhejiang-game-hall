package com.bytedance.pangle.util;

public final class i {
    public static boolean a() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public static boolean b() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 >= r1) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public static boolean c() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Le
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 > r1) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    public static boolean d() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Le
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 25
            if (r0 > r1) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    public static boolean e() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Le
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 > r1) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    public static boolean f() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 29
            if (r0 < r1) goto Le
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 30
            if (r0 > r1) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    public static boolean g() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 <= r1) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public static boolean h() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public static boolean i() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 >= r1) goto L13
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 27
            if (r0 != r1) goto L11
            int r0 = android.os.Build.VERSION.PREVIEW_SDK_INT
            if (r0 <= 0) goto L11
            goto L13
        L11:
            r0 = 0
            return r0
        L13:
            r0 = 1
            return r0
    }

    public static boolean j() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 31
            if (r0 >= r1) goto L13
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 30
            if (r0 != r1) goto L11
            int r0 = android.os.Build.VERSION.PREVIEW_SDK_INT
            if (r0 <= 0) goto L11
            goto L13
        L11:
            r0 = 0
            return r0
        L13:
            r0 = 1
            return r0
    }
}
