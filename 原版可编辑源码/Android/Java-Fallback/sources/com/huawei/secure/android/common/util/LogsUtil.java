package com.huawei.secure.android.common.util;

public class LogsUtil {
    private static final java.util.regex.Pattern a = null;
    private static final char b = '*';
    private static final int c = 2;

    private static class a extends java.lang.Throwable {
        private static final long d = 7129050843360571879L;
        private java.lang.String a;
        private java.lang.Throwable b;
        private java.lang.Throwable c;

        public a(java.lang.Throwable r1) {
                r0 = this;
                r0.<init>()
                r0.c = r1
                return
        }

        public void a(java.lang.String r1) {
                r0 = this;
                r0.a = r1
                return
        }

        public void a(java.lang.Throwable r1) {
                r0 = this;
                r0.b = r1
                return
        }

        @Override
        public java.lang.Throwable getCause() {
                r1 = this;
                java.lang.Throwable r0 = r1.b
                if (r0 != r1) goto L5
                r0 = 0
            L5:
                return r0
        }

        @Override
        public java.lang.String getMessage() {
                r1 = this;
                java.lang.String r0 = r1.a
                return r0
        }

        @Override
        public java.lang.String toString() {
                r2 = this;
                java.lang.Throwable r0 = r2.c
                if (r0 != 0) goto L7
                java.lang.String r0 = ""
                return r0
            L7:
                java.lang.Class r0 = r0.getClass()
                java.lang.String r0 = r0.getName()
                java.lang.String r1 = r2.a
                if (r1 == 0) goto L40
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r0)
                java.lang.String r0 = ": "
                r1.append(r0)
                java.lang.String r0 = r1.toString()
                java.lang.String r1 = r2.a
                boolean r1 = r1.startsWith(r0)
                if (r1 == 0) goto L2f
                java.lang.String r0 = r2.a
                return r0
            L2f:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r0)
                java.lang.String r0 = r2.a
                r1.append(r0)
                java.lang.String r0 = r1.toString()
            L40:
                return r0
        }
    }

    static {
            java.lang.String r0 = "[0-9]*[a-z|A-Z]*[一-龥]*"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.huawei.secure.android.common.util.LogsUtil.a = r0
            return
    }

    public LogsUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(java.lang.String r8) {
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 == 0) goto L7
            return r8
        L7:
            int r0 = r8.length()
            r1 = 42
            r2 = 1
            if (r2 != r0) goto L15
            java.lang.String r8 = java.lang.String.valueOf(r1)
            return r8
        L15:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r0)
            r4 = 0
        L1b:
            if (r4 >= r0) goto L3e
            char r5 = r8.charAt(r4)
            java.util.regex.Pattern r6 = com.huawei.secure.android.common.util.LogsUtil.a
            java.lang.String r7 = java.lang.String.valueOf(r5)
            java.util.regex.Matcher r6 = r6.matcher(r7)
            boolean r6 = r6.matches()
            if (r6 == 0) goto L38
            int r6 = r2 % 2
            if (r6 != 0) goto L36
            r5 = r1
        L36:
            int r2 = r2 + 1
        L38:
            r3.append(r5)
            int r4 = r4 + 1
            goto L1b
        L3e:
            java.lang.String r8 = r3.toString()
            return r8
    }

    private static java.lang.String a(java.lang.String r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 512(0x200, float:7.17E-43)
            r0.<init>(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L10
            r0.append(r2)
        L10:
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 != 0) goto L1d
            java.lang.String r2 = a(r3)
            r0.append(r2)
        L1d:
            java.lang.String r2 = r0.toString()
            return r2
    }

    private static java.lang.String a(java.lang.String r2, boolean r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 512(0x200, float:7.17E-43)
            r0.<init>(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L1a
            if (r3 == 0) goto L17
            java.lang.String r2 = a(r2)
            r0.append(r2)
            goto L1a
        L17:
            r0.append(r2)
        L1a:
            java.lang.String r2 = r0.toString()
            return r2
    }

    private static java.lang.Throwable a(java.lang.Throwable r4) {
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            com.huawei.secure.android.common.util.LogsUtil$a r0 = new com.huawei.secure.android.common.util.LogsUtil$a
            r0.<init>(r4)
            java.lang.StackTraceElement[] r1 = r4.getStackTrace()
            r0.setStackTrace(r1)
            java.lang.String r1 = r4.getMessage()
            java.lang.String r1 = b(r1)
            r0.a(r1)
            java.lang.Throwable r4 = r4.getCause()
            r1 = r0
        L20:
            if (r4 == 0) goto L42
            com.huawei.secure.android.common.util.LogsUtil$a r2 = new com.huawei.secure.android.common.util.LogsUtil$a
            r2.<init>(r4)
            java.lang.StackTraceElement[] r3 = r4.getStackTrace()
            r2.setStackTrace(r3)
            java.lang.String r3 = r4.getMessage()
            java.lang.String r3 = b(r3)
            r2.a(r3)
            r1.a(r2)
            java.lang.Throwable r4 = r4.getCause()
            r1 = r2
            goto L20
        L42:
            return r0
    }

    private static java.lang.String b(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return r2
        L7:
            char[] r2 = r2.toCharArray()
            r0 = 0
        Lc:
            int r1 = r2.length
            if (r0 >= r1) goto L1a
            int r1 = r0 % 2
            if (r1 != 0) goto L17
            r1 = 42
            r2[r0] = r1
        L17:
            int r0 = r0 + 1
            goto Lc
        L1a:
            java.lang.String r0 = new java.lang.String
            r0.<init>(r2)
            return r0
    }

    public static void d(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            r0 = 0
            java.lang.String r2 = a(r2, r0)
            android.util.Log.d(r1, r2)
            return
    }

    public static void d(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Ld
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Ld
            return
        Ld:
            java.lang.String r2 = a(r2, r3)
            android.util.Log.d(r1, r2)
            return
    }

    public static void d(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Ld
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Ld
            return
        Ld:
            java.lang.String r2 = a(r2, r3)
            java.lang.Throwable r3 = a(r4)
            android.util.Log.d(r1, r2, r3)
            return
    }

    public static void d(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            if (r3 != 0) goto L9
            return
        L9:
            r0 = 0
            java.lang.String r2 = a(r2, r0)
            java.lang.Throwable r3 = a(r3)
            android.util.Log.d(r1, r2, r3)
            return
    }

    public static void d(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3, boolean r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.String r2 = a(r2, r4)
            java.lang.Throwable r3 = a(r3)
            android.util.Log.d(r1, r2, r3)
            return
    }

    public static void d(java.lang.String r1, java.lang.String r2, boolean r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.String r2 = a(r2, r3)
            android.util.Log.d(r1, r2)
            return
    }

    public static void e(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            r0 = 0
            java.lang.String r2 = a(r2, r0)
            android.util.Log.e(r1, r2)
            return
    }

    public static void e(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Ld
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Ld
            return
        Ld:
            java.lang.String r2 = a(r2, r3)
            android.util.Log.e(r1, r2)
            return
    }

    public static void e(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Ld
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Ld
            return
        Ld:
            java.lang.String r2 = a(r2, r3)
            java.lang.Throwable r3 = a(r4)
            android.util.Log.e(r1, r2, r3)
            return
    }

    public static void e(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            if (r3 != 0) goto L9
            return
        L9:
            r0 = 0
            java.lang.String r2 = a(r2, r0)
            java.lang.Throwable r3 = a(r3)
            android.util.Log.e(r1, r2, r3)
            return
    }

    public static void e(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3, boolean r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            if (r3 != 0) goto L9
            return
        L9:
            java.lang.String r2 = a(r2, r4)
            java.lang.Throwable r3 = a(r3)
            android.util.Log.e(r1, r2, r3)
            return
    }

    public static void e(java.lang.String r1, java.lang.String r2, boolean r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.String r2 = a(r2, r3)
            android.util.Log.e(r1, r2)
            return
    }

    public static void i(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            r0 = 0
            java.lang.String r2 = a(r2, r0)
            android.util.Log.i(r1, r2)
            return
    }

    public static void i(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Ld
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Ld
            return
        Ld:
            java.lang.String r2 = a(r2, r3)
            android.util.Log.i(r1, r2)
            return
    }

    public static void i(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Ld
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Ld
            return
        Ld:
            java.lang.String r2 = a(r2, r3)
            java.lang.Throwable r3 = a(r4)
            android.util.Log.i(r1, r2, r3)
            return
    }

    public static void i(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            if (r3 != 0) goto L9
            return
        L9:
            r0 = 0
            java.lang.String r2 = a(r2, r0)
            java.lang.Throwable r3 = a(r3)
            android.util.Log.i(r1, r2, r3)
            return
    }

    public static void i(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3, boolean r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            if (r3 != 0) goto L9
            return
        L9:
            java.lang.String r2 = a(r2, r4)
            java.lang.Throwable r3 = a(r3)
            android.util.Log.i(r1, r2, r3)
            return
    }

    public static void i(java.lang.String r1, java.lang.String r2, boolean r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.String r2 = a(r2, r3)
            android.util.Log.i(r1, r2)
            return
    }

    public static void w(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            r0 = 0
            java.lang.String r2 = a(r2, r0)
            android.util.Log.w(r1, r2)
            return
    }

    public static void w(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Ld
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Ld
            return
        Ld:
            java.lang.String r2 = a(r2, r3)
            android.util.Log.w(r1, r2)
            return
    }

    public static void w(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Ld
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Ld
            return
        Ld:
            java.lang.String r2 = a(r2, r3)
            java.lang.Throwable r3 = a(r4)
            android.util.Log.w(r1, r2, r3)
            return
    }

    public static void w(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            if (r3 != 0) goto L9
            return
        L9:
            r0 = 0
            java.lang.String r2 = a(r2, r0)
            java.lang.Throwable r3 = a(r3)
            android.util.Log.w(r1, r2, r3)
            return
    }

    public static void w(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3, boolean r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            if (r3 != 0) goto L9
            return
        L9:
            java.lang.String r2 = a(r2, r4)
            java.lang.Throwable r3 = a(r3)
            android.util.Log.w(r1, r2, r3)
            return
    }

    public static void w(java.lang.String r1, java.lang.String r2, boolean r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.String r2 = a(r2, r3)
            android.util.Log.w(r1, r2)
            return
    }
}
