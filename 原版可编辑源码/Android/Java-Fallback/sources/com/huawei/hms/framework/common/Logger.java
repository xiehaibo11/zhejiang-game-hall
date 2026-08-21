package com.huawei.hms.framework.common;

public class Logger {
    private static final boolean DEBUG = false;
    private static final int MAX_STACK_DEEP_LENGTH = 20;
    private static final int MAX_STACK_DEEP_LENGTH_NORMAL = 8;
    private static final java.lang.String SPLIT = "|";
    private static final java.lang.String TAG = "NetworkKit_Logger";
    private static final java.lang.String TAG_NETWORKKIT_PRE = "NetworkKit_";
    private static final java.lang.String TAG_NETWORK_SDK_PRE = "NetworkSdk_";
    private static com.huawei.hms.framework.common.ExtLogger extLogger = null;
    private static boolean println = true;

    static class 1 {
    }

    private static class ThrowableWrapper extends java.lang.Throwable {
        private static final long serialVersionUID = 7129050843360571879L;
        private java.lang.String message;
        private java.lang.Throwable ownerThrowable;
        private java.lang.Throwable thisCause;

        private ThrowableWrapper(java.lang.Throwable r4) {
                r3 = this;
                r3.<init>()
                r3.ownerThrowable = r4
                java.lang.StackTraceElement[] r0 = r4.getStackTrace()
                boolean r1 = r4 instanceof java.io.IOException
                if (r1 != 0) goto L15
                boolean r1 = r4 instanceof org.json.JSONException
                if (r1 == 0) goto L12
                goto L15
            L12:
                r1 = 20
                goto L17
            L15:
                r1 = 8
            L17:
                int r2 = r0.length
                if (r2 <= r1) goto L24
                java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)
                java.lang.StackTraceElement[] r0 = (java.lang.StackTraceElement[]) r0
                r3.setStackTrace(r0)
                goto L27
            L24:
                r3.setStackTrace(r0)
            L27:
                java.lang.String r4 = r4.getMessage()
                java.lang.String r4 = com.huawei.hms.framework.common.StringUtils.anonymizeMessage(r4)
                r3.setMessage(r4)
                return
        }

        ThrowableWrapper(java.lang.Throwable r1, com.huawei.hms.framework.common.Logger.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        static void access$100(com.huawei.hms.framework.common.Logger.ThrowableWrapper r0, java.lang.Throwable r1) {
                r0.setCause(r1)
                return
        }

        private void setCause(java.lang.Throwable r1) {
                r0 = this;
                r0.thisCause = r1
                return
        }

        @Override
        public java.lang.Throwable getCause() {
                r1 = this;
                java.lang.Throwable r0 = r1.thisCause
                if (r0 != r1) goto L5
                r0 = 0
            L5:
                return r0
        }

        @Override
        public java.lang.String getMessage() {
                r1 = this;
                java.lang.String r0 = r1.message
                return r0
        }

        public void setMessage(java.lang.String r1) {
                r0 = this;
                r0.message = r1
                return
        }

        @Override
        public java.lang.String toString() {
                r2 = this;
                java.lang.Throwable r0 = r2.ownerThrowable
                if (r0 != 0) goto L7
                java.lang.String r0 = ""
                return r0
            L7:
                java.lang.Class r0 = r0.getClass()
                java.lang.String r0 = r0.getName()
                java.lang.String r1 = r2.message
                if (r1 == 0) goto L40
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r0)
                java.lang.String r0 = ": "
                r1.append(r0)
                java.lang.String r0 = r1.toString()
                java.lang.String r1 = r2.message
                boolean r1 = r1.startsWith(r0)
                if (r1 == 0) goto L2f
                java.lang.String r0 = r2.message
                return r0
            L2f:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r0)
                java.lang.String r0 = r2.message
                r1.append(r0)
                java.lang.String r0 = r1.toString()
            L40:
                return r0
        }
    }

    static {
            return
    }

    public Logger() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String complexAppTag(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "NetworkSdk_"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    private static java.lang.String complexMsg(java.lang.String r1, int r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L1f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = getCallMethodInfo(r2)
            r0.append(r2)
            java.lang.String r2 = "|"
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
        L1f:
            java.lang.String r1 = getCallMethodInfo(r2)
            return r1
    }

    private static java.lang.String complexTag(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "NetworkKit_"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static void d(java.lang.String r1, java.lang.Object r2) {
            r0 = 3
            println(r0, r1, r2)
            return
    }

    public static void d(java.lang.String r1, java.lang.String r2, java.lang.Object... r3) {
            r0 = 3
            println(r0, r1, r2, r3)
            return
    }

    public static void e(java.lang.String r1, java.lang.Object r2) {
            r0 = 6
            println(r0, r1, r2)
            return
    }

    public static void e(java.lang.String r5, java.lang.String r6, java.lang.Throwable r7) {
            r0 = 6
            boolean r0 = isAPPLoggable(r0)
            r1 = 5
            if (r0 == 0) goto L19
            com.huawei.hms.framework.common.ExtLogger r0 = com.huawei.hms.framework.common.Logger.extLogger
            java.lang.String r2 = complexAppTag(r5)
            java.lang.String r3 = complexMsg(r6, r1)
            java.lang.Throwable r4 = getNewThrowable(r7)
            r0.e(r2, r3, r4)
        L19:
            boolean r0 = com.huawei.hms.framework.common.Logger.println
            if (r0 == 0) goto L2c
            java.lang.String r5 = complexTag(r5)
            java.lang.String r6 = complexMsg(r6, r1)
            java.lang.Throwable r7 = getNewThrowable(r7)
            android.util.Log.e(r5, r6, r7)
        L2c:
            return
    }

    public static void e(java.lang.String r1, java.lang.String r2, java.lang.Object... r3) {
            r0 = 6
            println(r0, r1, r2, r3)
            return
    }

    private static void extLogPrintln(int r1, java.lang.String r2, java.lang.String r3) {
            r0 = 2
            if (r1 == r0) goto L28
            r0 = 3
            if (r1 == r0) goto L22
            r0 = 4
            if (r1 == r0) goto L1c
            r0 = 5
            if (r1 == r0) goto L16
            r0 = 6
            if (r1 == r0) goto L10
            goto L2d
        L10:
            com.huawei.hms.framework.common.ExtLogger r1 = com.huawei.hms.framework.common.Logger.extLogger
            r1.e(r2, r3)
            goto L2d
        L16:
            com.huawei.hms.framework.common.ExtLogger r1 = com.huawei.hms.framework.common.Logger.extLogger
            r1.w(r2, r3)
            goto L2d
        L1c:
            com.huawei.hms.framework.common.ExtLogger r1 = com.huawei.hms.framework.common.Logger.extLogger
            r1.i(r2, r3)
            goto L2d
        L22:
            com.huawei.hms.framework.common.ExtLogger r1 = com.huawei.hms.framework.common.Logger.extLogger
            r1.d(r2, r3)
            goto L2d
        L28:
            com.huawei.hms.framework.common.ExtLogger r1 = com.huawei.hms.framework.common.Logger.extLogger
            r1.v(r2, r3)
        L2d:
            return
    }

    private static java.lang.String getCallMethodInfo(int r3) {
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            java.lang.StackTraceElement[] r0 = r0.getStackTrace()
            int r1 = r0.length
            if (r1 <= r3) goto L4c
            r3 = r0[r3]
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = "|"
            r0.append(r1)
            java.lang.String r2 = r3.getFileName()
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = r3.getClassName()
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = r3.getMethodName()
            r0.append(r2)
            r0.append(r1)
            int r3 = r3.getLineNumber()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
        L4c:
            java.lang.String r3 = ""
            return r3
    }

    private static java.lang.Throwable getNewThrowable(java.lang.Throwable r4) {
            r0 = 3
            boolean r0 = isLoggable(r0)
            if (r0 == 0) goto L8
            return r4
        L8:
            r0 = 0
            if (r4 != 0) goto Lc
            return r0
        Lc:
            com.huawei.hms.framework.common.Logger$ThrowableWrapper r1 = new com.huawei.hms.framework.common.Logger$ThrowableWrapper
            r1.<init>(r4, r0)
            java.lang.Throwable r4 = r4.getCause()
            r2 = r1
        L16:
            if (r4 == 0) goto L26
            com.huawei.hms.framework.common.Logger$ThrowableWrapper r3 = new com.huawei.hms.framework.common.Logger$ThrowableWrapper
            r3.<init>(r4, r0)
            com.huawei.hms.framework.common.Logger.ThrowableWrapper.access$100(r2, r3)
            java.lang.Throwable r4 = r4.getCause()
            r2 = r3
            goto L16
        L26:
            return r1
    }

    public static void i(java.lang.String r1, java.lang.Object r2) {
            r0 = 4
            println(r0, r1, r2)
            return
    }

    public static void i(java.lang.String r1, java.lang.String r2, java.lang.Object... r3) {
            r0 = 4
            println(r0, r1, r2, r3)
            return
    }

    public static boolean isAPPLoggable(int r1) {
            com.huawei.hms.framework.common.ExtLogger r0 = com.huawei.hms.framework.common.Logger.extLogger
            if (r0 == 0) goto Lb
            java.lang.String r0 = "NetworkSdk_"
            boolean r1 = android.util.Log.isLoggable(r0, r1)
            return r1
        Lb:
            r1 = 0
            return r1
    }

    public static boolean isLoggable(int r1) {
            java.lang.String r0 = "NetworkKit_"
            boolean r1 = android.util.Log.isLoggable(r0, r1)
            return r1
    }

    private static int logPrintln(int r3, java.lang.String r4, java.lang.String r5) {
            boolean r0 = isAPPLoggable(r3)
            r1 = 7
            if (r0 == 0) goto L12
            java.lang.String r0 = complexAppTag(r4)
            java.lang.String r2 = complexMsg(r5, r1)
            extLogPrintln(r3, r0, r2)
        L12:
            boolean r0 = com.huawei.hms.framework.common.Logger.println
            if (r0 == 0) goto L23
            java.lang.String r4 = complexTag(r4)
            java.lang.String r5 = complexMsg(r5, r1)
            int r3 = android.util.Log.println(r3, r4, r5)
            return r3
        L23:
            r3 = 1
            return r3
    }

    public static void println(int r1, java.lang.String r2, java.lang.Object r3) {
            r0 = 3
            if (r1 >= r0) goto L4
            return
        L4:
            boolean r0 = isLoggable(r1)
            if (r0 == 0) goto L16
            if (r3 != 0) goto Lf
            java.lang.String r3 = "null"
            goto L13
        Lf:
            java.lang.String r3 = r3.toString()
        L13:
            logPrintln(r1, r2, r3)
        L16:
            return
    }

    public static void println(int r2, java.lang.String r3, java.lang.String r4, java.lang.Object... r5) {
            r0 = 3
            if (r2 >= r0) goto L4
            return
        L4:
            java.lang.String r0 = "NetworkKit_Logger"
            if (r4 != 0) goto Le
            java.lang.String r2 = "format is null, not log"
            android.util.Log.w(r0, r2)
            return
        Le:
            boolean r1 = isLoggable(r2)     // Catch: java.util.IllegalFormatException -> L1c
            if (r1 == 0) goto L31
            java.lang.String r5 = com.huawei.hms.framework.common.StringUtils.format(r4, r5)     // Catch: java.util.IllegalFormatException -> L1c
            logPrintln(r2, r3, r5)     // Catch: java.util.IllegalFormatException -> L1c
            goto L31
        L1c:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "log format error"
            r3.append(r5)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            w(r0, r3, r2)
        L31:
            return
    }

    public static void setExtLogger(com.huawei.hms.framework.common.ExtLogger r2, boolean r3) {
            com.huawei.hms.framework.common.Logger.extLogger = r2
            com.huawei.hms.framework.common.Logger.println = r3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "logger = "
            r0.append(r1)
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            java.lang.String r3 = "NetworkKit_Logger"
            i(r3, r2)
            return
    }

    public static void v(java.lang.String r1, java.lang.Object r2) {
            r0 = 2
            println(r0, r1, r2)
            return
    }

    public static void v(java.lang.String r1, java.lang.String r2, java.lang.Object... r3) {
            r0 = 2
            println(r0, r1, r2, r3)
            return
    }

    public static void w(java.lang.String r1, java.lang.Object r2) {
            r0 = 5
            println(r0, r1, r2)
            return
    }

    public static void w(java.lang.String r5, java.lang.String r6, java.lang.Throwable r7) {
            r0 = 5
            boolean r1 = isAPPLoggable(r0)
            if (r1 == 0) goto L18
            com.huawei.hms.framework.common.ExtLogger r1 = com.huawei.hms.framework.common.Logger.extLogger
            java.lang.String r2 = complexAppTag(r5)
            java.lang.String r3 = complexMsg(r6, r0)
            java.lang.Throwable r4 = getNewThrowable(r7)
            r1.w(r2, r3, r4)
        L18:
            boolean r1 = com.huawei.hms.framework.common.Logger.println
            if (r1 == 0) goto L2b
            java.lang.String r5 = complexTag(r5)
            java.lang.String r6 = complexMsg(r6, r0)
            java.lang.Throwable r7 = getNewThrowable(r7)
            android.util.Log.w(r5, r6, r7)
        L2b:
            return
    }

    public static void w(java.lang.String r1, java.lang.String r2, java.lang.Object... r3) {
            r0 = 5
            println(r0, r1, r2, r3)
            return
    }
}
