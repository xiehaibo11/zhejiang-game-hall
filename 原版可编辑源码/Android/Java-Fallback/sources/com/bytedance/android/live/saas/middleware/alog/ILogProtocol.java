package com.bytedance.android.live.saas.middleware.alog;

public interface ILogProtocol {
    void bundle(int r1, java.lang.String r2, android.os.Bundle r3);

    void changeLevel(int r1);

    void d(java.lang.String r1, java.lang.String r2);

    void destroy();

    void e(java.lang.String r1, java.lang.String r2);

    void e(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3);

    void e(java.lang.String r1, java.lang.Throwable r2);

    void flush();

    void forceLogSharding();

    void header(int r1, java.lang.String r2, java.lang.String r3);

    void i(java.lang.String r1, java.lang.String r2);

    void intent(int r1, java.lang.String r2, android.content.Intent r3);

    void json(int r1, java.lang.String r2, java.lang.String r3);

    void release();

    void stacktrace(int r1, java.lang.String r2, java.lang.StackTraceElement[] r3);

    void thread(int r1, java.lang.String r2, java.lang.Thread r3);

    void throwable(int r1, java.lang.String r2, java.lang.String r3, java.lang.Throwable r4);

    void throwable(int r1, java.lang.String r2, java.lang.Throwable r3);

    void v(java.lang.String r1, java.lang.String r2);

    void w(java.lang.String r1, java.lang.String r2);

    void w(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3);

    void w(java.lang.String r1, java.lang.Throwable r2);
}
