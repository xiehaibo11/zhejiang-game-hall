package com.czhj.sdk.logger;

public class SigmobLog {
    private static final java.lang.String a = "com.sigmob";
    private static final java.lang.String b = "sigmob";
    private static final java.util.logging.Logger c = null;
    private static final boolean d = false;
    private static final com.czhj.sdk.logger.SigmobLog.SigmobLogHandler e = null;

    static class 1 {
    }

    private static final class SigmobLogHandler extends java.util.logging.Handler {
        private static final java.util.Map<java.util.logging.Level, java.lang.Integer> a = null;

        static {
                java.util.HashMap r0 = new java.util.HashMap
                r1 = 7
                r0.<init>(r1)
                com.czhj.sdk.logger.SigmobLog.SigmobLogHandler.a = r0
                java.util.logging.Level r1 = java.util.logging.Level.FINEST
                r2 = 2
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
                r0.put(r1, r2)
                java.util.Map<java.util.logging.Level, java.lang.Integer> r0 = com.czhj.sdk.logger.SigmobLog.SigmobLogHandler.a
                java.util.logging.Level r1 = java.util.logging.Level.FINER
                r0.put(r1, r2)
                java.util.Map<java.util.logging.Level, java.lang.Integer> r0 = com.czhj.sdk.logger.SigmobLog.SigmobLogHandler.a
                java.util.logging.Level r1 = java.util.logging.Level.FINE
                r0.put(r1, r2)
                java.util.Map<java.util.logging.Level, java.lang.Integer> r0 = com.czhj.sdk.logger.SigmobLog.SigmobLogHandler.a
                java.util.logging.Level r1 = java.util.logging.Level.CONFIG
                r2 = 3
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
                r0.put(r1, r2)
                java.util.Map<java.util.logging.Level, java.lang.Integer> r0 = com.czhj.sdk.logger.SigmobLog.SigmobLogHandler.a
                java.util.logging.Level r1 = java.util.logging.Level.INFO
                r0.put(r1, r2)
                java.util.Map<java.util.logging.Level, java.lang.Integer> r0 = com.czhj.sdk.logger.SigmobLog.SigmobLogHandler.a
                java.util.logging.Level r1 = java.util.logging.Level.WARNING
                r2 = 5
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
                r0.put(r1, r2)
                java.util.Map<java.util.logging.Level, java.lang.Integer> r0 = com.czhj.sdk.logger.SigmobLog.SigmobLogHandler.a
                java.util.logging.Level r1 = java.util.logging.Level.SEVERE
                r2 = 6
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
                r0.put(r1, r2)
                return
        }

        private SigmobLogHandler() {
                r0 = this;
                r0.<init>()
                return
        }

        SigmobLogHandler(com.czhj.sdk.logger.SigmobLog.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void close() {
                r0 = this;
                return
        }

        @Override
        public void flush() {
                r0 = this;
                return
        }

        @Override
        public void publish(java.util.logging.LogRecord r4) {
                r3 = this;
                boolean r0 = r3.isLoggable(r4)
                if (r0 == 0) goto L57
                java.util.Map<java.util.logging.Level, java.lang.Integer> r0 = com.czhj.sdk.logger.SigmobLog.SigmobLogHandler.a
                java.util.logging.Level r1 = r4.getLevel()
                boolean r0 = r0.containsKey(r1)
                if (r0 == 0) goto L23
                java.util.Map<java.util.logging.Level, java.lang.Integer> r0 = com.czhj.sdk.logger.SigmobLog.SigmobLogHandler.a
                java.util.logging.Level r1 = r4.getLevel()
                java.lang.Object r0 = r0.get(r1)
                java.lang.Integer r0 = (java.lang.Integer) r0
                int r0 = r0.intValue()
                goto L24
            L23:
                r0 = 2
            L24:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = r4.getMessage()
                r1.append(r2)
                java.lang.String r2 = "\n"
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                java.lang.Throwable r4 = r4.getThrown()
                if (r4 == 0) goto L52
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                r2.append(r1)
                java.lang.String r4 = android.util.Log.getStackTraceString(r4)
                r2.append(r4)
                java.lang.String r1 = r2.toString()
            L52:
                java.lang.String r4 = "sigmob"
                android.util.Log.println(r0, r4, r1)
            L57:
                return
        }
    }

    static {
            java.lang.String r0 = "com.sigmob"
            java.util.logging.Logger r0 = java.util.logging.Logger.getLogger(r0)
            com.czhj.sdk.logger.SigmobLog.c = r0
            com.czhj.sdk.logger.SigmobLog$SigmobLogHandler r0 = new com.czhj.sdk.logger.SigmobLog$SigmobLogHandler
            r1 = 0
            r0.<init>(r1)
            com.czhj.sdk.logger.SigmobLog.e = r0
            java.util.logging.Logger r0 = com.czhj.sdk.logger.SigmobLog.c
            r1 = 0
            r0.setUseParentHandlers(r1)
            java.util.logging.Logger r0 = com.czhj.sdk.logger.SigmobLog.c
            java.util.logging.Level r1 = java.util.logging.Level.ALL
            r0.setLevel(r1)
            com.czhj.sdk.logger.SigmobLog$SigmobLogHandler r0 = com.czhj.sdk.logger.SigmobLog.e
            java.util.logging.Level r1 = java.util.logging.Level.INFO
            r0.setLevel(r1)
            java.util.logging.LogManager r0 = java.util.logging.LogManager.getLogManager()
            java.util.logging.Logger r1 = com.czhj.sdk.logger.SigmobLog.c
            r0.addLogger(r1)
            java.util.logging.Logger r0 = com.czhj.sdk.logger.SigmobLog.c
            com.czhj.sdk.logger.SigmobLog$SigmobLogHandler r1 = com.czhj.sdk.logger.SigmobLog.e
            a(r0, r1)
            return
    }

    private SigmobLog() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(java.lang.String r2, java.lang.Throwable r3) {
            java.util.logging.Logger r0 = com.czhj.sdk.logger.SigmobLog.c
            java.util.logging.Level r1 = java.util.logging.Level.FINEST
            r0.log(r1, r2, r3)
            return
    }

    private static void a(java.util.logging.Logger r4, java.util.logging.Handler r5) {
            java.util.logging.Handler[] r0 = r4.getHandlers()
            int r1 = r0.length
            r2 = 0
        L6:
            if (r2 >= r1) goto L14
            r3 = r0[r2]
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L11
            return
        L11:
            int r2 = r2 + 1
            goto L6
        L14:
            r4.addHandler(r5)
            return
    }

    public static void addHandler(java.util.logging.Handler r1) {
            java.util.logging.Logger r0 = com.czhj.sdk.logger.SigmobLog.c
            a(r0, r1)
            return
    }

    private static void b(java.lang.String r2, java.lang.Throwable r3) {
            java.util.logging.Logger r0 = com.czhj.sdk.logger.SigmobLog.c
            java.util.logging.Level r1 = java.util.logging.Level.INFO
            r0.log(r1, r2, r3)
            return
    }

    public static void c(java.lang.String r1) {
            r0 = 0
            a(r1, r0)
            return
    }

    public static void d(java.lang.String r0) {
            return
    }

    public static void d(java.lang.String r0, java.lang.Throwable r1) {
            return
    }

    public static void dd(java.lang.String r5, java.lang.String r6) {
            if (r5 == 0) goto L36
            int r0 = r5.length()
            if (r0 == 0) goto L36
            if (r6 == 0) goto L36
            int r0 = r6.length()
            if (r0 != 0) goto L11
            goto L36
        L11:
            r0 = 3072(0xc00, float:4.305E-42)
            int r1 = r6.length()
            long r1 = (long) r1
            long r3 = (long) r0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 > 0) goto L21
        L1d:
            android.util.Log.d(r5, r6)
            goto L36
        L21:
            int r1 = r6.length()
            if (r1 <= r0) goto L1d
            r1 = 0
            java.lang.String r1 = r6.substring(r1, r0)
            java.lang.String r2 = ""
            java.lang.String r6 = r6.replace(r1, r2)
            android.util.Log.d(r5, r1)
            goto L21
        L36:
            return
    }

    public static void e(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto La
            r0 = 0
            e(r1, r0)
        La:
            return
    }

    public static void e(java.lang.String r2, java.lang.Throwable r3) {
            java.util.logging.Logger r0 = com.czhj.sdk.logger.SigmobLog.c
            java.util.logging.Level r1 = java.util.logging.Level.SEVERE
            r0.log(r1, r2, r3)
            return
    }

    public static void i(java.lang.String r1) {
            r0 = 0
            b(r1, r0)
            return
    }

    public static void setSdkHandlerLevel(java.util.logging.Level r1) {
            com.czhj.sdk.logger.SigmobLog$SigmobLogHandler r0 = com.czhj.sdk.logger.SigmobLog.e
            r0.setLevel(r1)
            return
    }

    public static void v(java.lang.String r1) {
            r0 = 0
            v(r1, r0)
            return
    }

    public static void v(java.lang.String r2, java.lang.Throwable r3) {
            java.util.logging.Logger r0 = com.czhj.sdk.logger.SigmobLog.c
            java.util.logging.Level r1 = java.util.logging.Level.FINE
            r0.log(r1, r2, r3)
            return
    }

    public static void w(java.lang.String r1) {
            r0 = 0
            w(r1, r0)
            return
    }

    public static void w(java.lang.String r2, java.lang.Throwable r3) {
            java.util.logging.Logger r0 = com.czhj.sdk.logger.SigmobLog.c
            java.util.logging.Level r1 = java.util.logging.Level.WARNING
            r0.log(r1, r2, r3)
            return
    }
}
