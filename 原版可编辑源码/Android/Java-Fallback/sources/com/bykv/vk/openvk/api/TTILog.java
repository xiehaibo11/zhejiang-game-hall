package com.bykv.vk.openvk.api;

public interface TTILog {
    void d(java.lang.String r1, java.lang.String r2);

    void e(java.lang.String r1, java.lang.String r2);

    void e(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3);

    void e(java.lang.String r1, java.lang.Throwable r2);

    void flush();

    void forceLogSharding();

    void i(java.lang.String r1, java.lang.String r2);

    void v(java.lang.String r1, java.lang.String r2);

    void w(java.lang.String r1, java.lang.String r2);

    void w(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3);

    void w(java.lang.String r1, java.lang.Throwable r2);
}
