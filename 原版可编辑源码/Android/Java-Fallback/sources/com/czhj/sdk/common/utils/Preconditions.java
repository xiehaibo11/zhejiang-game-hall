package com.czhj.sdk.common.utils;

public final class Preconditions {
    private static final java.lang.String a = "";

    public static final class NoThrow {
        private static volatile boolean a = true;

        static {
                return
        }

        public NoThrow() {
                r0 = this;
                r0.<init>()
                return
        }

        public static boolean checkArgument(boolean r4) {
                boolean r0 = com.czhj.sdk.common.utils.Preconditions.NoThrow.a
                r1 = 1
                java.lang.Object[] r1 = new java.lang.Object[r1]
                r2 = 0
                java.lang.String r3 = ""
                r1[r2] = r3
                java.lang.String r2 = "Illegal argument"
                boolean r4 = com.czhj.sdk.common.utils.Preconditions.a(r4, r0, r2, r1)
                return r4
        }

        public static boolean checkArgument(boolean r4, java.lang.String r5) {
                boolean r0 = com.czhj.sdk.common.utils.Preconditions.NoThrow.a
                r1 = 1
                java.lang.Object[] r1 = new java.lang.Object[r1]
                r2 = 0
                java.lang.String r3 = ""
                r1[r2] = r3
                boolean r4 = com.czhj.sdk.common.utils.Preconditions.a(r4, r0, r5, r1)
                return r4
        }

        public static boolean checkNotNull(java.lang.Object r4) {
                boolean r0 = com.czhj.sdk.common.utils.Preconditions.NoThrow.a
                r1 = 1
                java.lang.Object[] r1 = new java.lang.Object[r1]
                r2 = 0
                java.lang.String r3 = ""
                r1[r2] = r3
                r2 = 0
                boolean r4 = com.czhj.sdk.common.utils.Preconditions.a(r4, r0, r2, r1)
                return r4
        }

        public static boolean checkNotNull(java.lang.Object r4, java.lang.String r5) {
                boolean r0 = com.czhj.sdk.common.utils.Preconditions.NoThrow.a
                r1 = 1
                java.lang.Object[] r1 = new java.lang.Object[r1]
                r2 = 0
                java.lang.String r3 = ""
                r1[r2] = r3
                boolean r4 = com.czhj.sdk.common.utils.Preconditions.a(r4, r0, r5, r1)
                return r4
        }

        public static boolean checkUiThread(java.lang.String r4) {
                boolean r0 = com.czhj.sdk.common.utils.Preconditions.NoThrow.a
                r1 = 1
                java.lang.Object[] r1 = new java.lang.Object[r1]
                r2 = 0
                java.lang.String r3 = ""
                r1[r2] = r3
                boolean r4 = com.czhj.sdk.common.utils.Preconditions.a(r0, r4, r1)
                return r4
        }

        public static java.lang.String getLineInfo() {
                java.lang.Throwable r0 = new java.lang.Throwable     // Catch: java.lang.Throwable -> L29
                r0.<init>()     // Catch: java.lang.Throwable -> L29
                java.lang.StackTraceElement[] r0 = r0.getStackTrace()     // Catch: java.lang.Throwable -> L29
                r1 = 2
                r0 = r0[r1]     // Catch: java.lang.Throwable -> L29
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L29
                r1.<init>()     // Catch: java.lang.Throwable -> L29
                java.lang.String r2 = r0.getFileName()     // Catch: java.lang.Throwable -> L29
                r1.append(r2)     // Catch: java.lang.Throwable -> L29
                java.lang.String r2 = ": Line "
                r1.append(r2)     // Catch: java.lang.Throwable -> L29
                java.lang.String r0 = r0.getMethodName()     // Catch: java.lang.Throwable -> L29
                r1.append(r0)     // Catch: java.lang.Throwable -> L29
                java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L29
                return r0
            L29:
                java.lang.String r0 = ""
                return r0
        }
    }

    private Preconditions() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(java.lang.String r2, java.lang.Object... r3) {
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r2 = java.lang.String.format(r2, r3)     // Catch: java.util.IllegalFormatException -> L9
            return r2
        L9:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Sigmob preconditions had a format exception: "
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.e(r3)
            return r2
    }

    static boolean a(java.lang.Object r0, boolean r1, java.lang.String r2, java.lang.Object[] r3) {
            boolean r0 = b(r0, r1, r2, r3)
            return r0
    }

    static boolean a(boolean r0, java.lang.String r1, java.lang.Object[] r2) {
            boolean r0 = b(r0, r1, r2)
            return r0
    }

    static boolean a(boolean r0, boolean r1, java.lang.String r2, java.lang.Object[] r3) {
            boolean r0 = b(r0, r1, r2, r3)
            return r0
    }

    private static boolean b(java.lang.Object r0, boolean r1, java.lang.String r2, java.lang.Object... r3) {
            if (r0 == 0) goto L4
            r0 = 1
            return r0
        L4:
            java.lang.String r0 = a(r2, r3)
            if (r1 != 0) goto Lf
            com.czhj.sdk.logger.SigmobLog.e(r0)
            r0 = 0
            return r0
        Lf:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            r1.<init>(r0)
            throw r1
    }

    private static boolean b(boolean r2, java.lang.String r3, java.lang.Object... r4) {
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L10
            r2 = 1
            return r2
        L10:
            java.lang.String r3 = a(r3, r4)
            if (r2 != 0) goto L1b
            com.czhj.sdk.logger.SigmobLog.e(r3)
            r2 = 0
            return r2
        L1b:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            r2.<init>(r3)
            throw r2
    }

    private static boolean b(boolean r0, boolean r1, java.lang.String r2, java.lang.Object... r3) {
            if (r0 == 0) goto L4
            r0 = 1
            return r0
        L4:
            java.lang.String r0 = a(r2, r3)
            if (r1 != 0) goto Lf
            com.czhj.sdk.logger.SigmobLog.e(r0)
            r0 = 0
            return r0
        Lf:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            r1.<init>(r0)
            throw r1
    }

    private static boolean c(boolean r0, boolean r1, java.lang.String r2, java.lang.Object... r3) {
            if (r0 == 0) goto L4
            r0 = 1
            return r0
        L4:
            java.lang.String r0 = a(r2, r3)
            if (r1 != 0) goto Lf
            com.czhj.sdk.logger.SigmobLog.e(r0)
            r0 = 0
            return r0
        Lf:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            r1.<init>(r0)
            throw r1
    }

    public static void checkNotNull(java.lang.Object r4) {
            r0 = 1
            java.lang.Object[] r1 = new java.lang.Object[r0]
            r2 = 0
            java.lang.String r3 = ""
            r1[r2] = r3
            java.lang.String r2 = "Object can not be null."
            b(r4, r0, r2, r1)
            return
    }
}
