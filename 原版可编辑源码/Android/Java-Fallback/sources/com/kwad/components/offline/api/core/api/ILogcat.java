package com.kwad.components.offline.api.core.api;

public interface ILogcat {
    void d(java.lang.String r1, java.lang.String r2);

    void e(java.lang.String r1, java.lang.String r2);

    void e(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3);

    void i(java.lang.String r1, java.lang.String r2);

    void printStackTrace(java.lang.Throwable r1);

    void printStackTraceOnly(java.lang.Throwable r1);

    void v(java.lang.String r1, java.lang.String r2);

    void v(java.lang.String r1, java.lang.String r2, boolean r3);

    void w(java.lang.String r1, java.lang.String r2);

    void w(java.lang.String r1, java.lang.String r2, boolean r3);
}
