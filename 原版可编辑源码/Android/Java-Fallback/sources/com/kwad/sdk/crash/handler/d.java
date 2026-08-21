package com.kwad.sdk.crash.handler;

public final class d implements java.lang.Thread.UncaughtExceptionHandler {
    private volatile boolean aAk;
    private java.lang.Thread.UncaughtExceptionHandler aAl;
    private android.content.Context context;

    public d(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.aAk = r0
            java.lang.Thread$UncaughtExceptionHandler r0 = java.lang.Thread.getDefaultUncaughtExceptionHandler()
            r1.aAl = r0
            r1.context = r2
            return
    }

    @Override
    public final void uncaughtException(java.lang.Thread r5, java.lang.Throwable r6) {
            r4 = this;
            boolean r0 = r4.aAk     // Catch: java.lang.Throwable -> L63
            java.lang.String r1 = "ExceptionCollector"
            if (r0 == 0) goto L23
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = "SDK捕获 uncaughtException 正在处理 ex="
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = r6.getMessage()     // Catch: java.lang.Throwable -> L63
            r0.append(r2)     // Catch: java.lang.Throwable -> L63
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L63
            com.kwad.sdk.core.e.c.d(r1, r0)     // Catch: java.lang.Throwable -> L63
            java.lang.Thread$UncaughtExceptionHandler r0 = r4.aAl
            if (r0 == 0) goto L22
            r0.uncaughtException(r5, r6)
        L22:
            return
        L23:
            r0 = 1
            r4.aAk = r0     // Catch: java.lang.Throwable -> L63
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L63
            java.lang.String r3 = "thread="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L63
            r2.append(r5)     // Catch: java.lang.Throwable -> L63
            java.lang.String r3 = " ex="
            r2.append(r3)     // Catch: java.lang.Throwable -> L63
            java.lang.String r3 = r6.getMessage()     // Catch: java.lang.Throwable -> L63
            r2.append(r3)     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L63
            com.kwad.sdk.core.e.c.d(r1, r2)     // Catch: java.lang.Throwable -> L63
            if (r6 == 0) goto L5b
            boolean r1 = com.kwad.sdk.crash.b.a.m(r6)     // Catch: java.lang.Throwable -> L63
            if (r1 == 0) goto L5b
            com.kwad.sdk.crash.model.message.JavaExceptionMessage r1 = new com.kwad.sdk.crash.model.message.JavaExceptionMessage     // Catch: java.lang.Throwable -> L63
            r1.<init>()     // Catch: java.lang.Throwable -> L63
            r1.mCrashSource = r0     // Catch: java.lang.Throwable -> L63
            com.kwad.sdk.crash.handler.c r0 = com.kwad.sdk.crash.handler.c.ES()     // Catch: java.lang.Throwable -> L63
            android.content.Context r2 = r4.context     // Catch: java.lang.Throwable -> L63
            r0.a(r6, r1, r2)     // Catch: java.lang.Throwable -> L63
        L5b:
            java.lang.Thread$UncaughtExceptionHandler r0 = r4.aAl
            if (r0 == 0) goto L6a
            r0.uncaughtException(r5, r6)
            return
        L63:
            java.lang.Thread$UncaughtExceptionHandler r0 = r4.aAl
            if (r0 == 0) goto L6a
            r0.uncaughtException(r5, r6)
        L6a:
            return
    }
}
