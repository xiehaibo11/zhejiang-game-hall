package cz.msebera.android.httpclient;

public interface ExceptionLogger {
    public static final cz.msebera.android.httpclient.ExceptionLogger NO_OP = null;
    public static final cz.msebera.android.httpclient.ExceptionLogger STD_ERR = null;



    static {
            cz.msebera.android.httpclient.ExceptionLogger$1 r0 = new cz.msebera.android.httpclient.ExceptionLogger$1
            r0.<init>()
            cz.msebera.android.httpclient.ExceptionLogger.NO_OP = r0
            cz.msebera.android.httpclient.ExceptionLogger$2 r0 = new cz.msebera.android.httpclient.ExceptionLogger$2
            r0.<init>()
            cz.msebera.android.httpclient.ExceptionLogger.STD_ERR = r0
            return
    }

    void log(java.lang.Exception r1);
}
