package com.kwad.sdk.crash.handler;

import android.content.Context;
import com.kwad.sdk.crash.model.message.JavaExceptionMessage;
import java.lang.Thread;

public final class d implements Thread.UncaughtExceptionHandler {
    private volatile boolean aAk = false;
    private Thread.UncaughtExceptionHandler aAl = Thread.getDefaultUncaughtExceptionHandler();
    private Context context;

    public d(Context context) {
        this.context = context;
    }

    @Override
    public final void uncaughtException(Thread thread, Throwable th) {
        try {
            if (this.aAk) {
                com.kwad.sdk.core.e.c.d("ExceptionCollector", "SDK捕获 uncaughtException 正在处理 ex=" + th.getMessage());
                Thread.UncaughtExceptionHandler uncaughtExceptionHandler = this.aAl;
                if (uncaughtExceptionHandler != null) {
                    uncaughtExceptionHandler.uncaughtException(thread, th);
                    return;
                }
                return;
            }
            this.aAk = true;
            com.kwad.sdk.core.e.c.d("ExceptionCollector", "thread=" + thread + " ex=" + th.getMessage());
            if (th != null && com.kwad.sdk.crash.b.a.m(th)) {
                JavaExceptionMessage javaExceptionMessage = new JavaExceptionMessage();
                javaExceptionMessage.mCrashSource = 1;
                c.ES().a(th, javaExceptionMessage, this.context);
            }
            Thread.UncaughtExceptionHandler uncaughtExceptionHandler2 = this.aAl;
            if (uncaughtExceptionHandler2 != null) {
                uncaughtExceptionHandler2.uncaughtException(thread, th);
            }
        } catch (Throwable unused) {
            Thread.UncaughtExceptionHandler uncaughtExceptionHandler3 = this.aAl;
            if (uncaughtExceptionHandler3 != null) {
                uncaughtExceptionHandler3.uncaughtException(thread, th);
            }
        }
    }
}
