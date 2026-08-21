package com.loopj.android.http;

public interface LogInterface {
    public static final int DEBUG = 3;
    public static final int ERROR = 6;
    public static final int INFO = 4;
    public static final int VERBOSE = 2;
    public static final int WARN = 5;
    public static final int WTF = 8;

    void d(java.lang.String r1, java.lang.String r2);

    void d(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3);

    void e(java.lang.String r1, java.lang.String r2);

    void e(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3);

    int getLoggingLevel();

    void i(java.lang.String r1, java.lang.String r2);

    void i(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3);

    boolean isLoggingEnabled();

    void setLoggingEnabled(boolean r1);

    void setLoggingLevel(int r1);

    boolean shouldLog(int r1);

    void v(java.lang.String r1, java.lang.String r2);

    void v(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3);

    void w(java.lang.String r1, java.lang.String r2);

    void w(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3);

    void wtf(java.lang.String r1, java.lang.String r2);

    void wtf(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3);
}
