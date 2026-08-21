package cz.msebera.android.httpclient.impl.bootstrap;

class Worker implements java.lang.Runnable {
    private final cz.msebera.android.httpclient.HttpServerConnection conn;
    private final cz.msebera.android.httpclient.ExceptionLogger exceptionLogger;
    private final cz.msebera.android.httpclient.protocol.HttpService httpservice;

    Worker(cz.msebera.android.httpclient.protocol.HttpService r1, cz.msebera.android.httpclient.HttpServerConnection r2, cz.msebera.android.httpclient.ExceptionLogger r3) {
            r0 = this;
            r0.<init>()
            r0.httpservice = r1
            r0.conn = r2
            r0.exceptionLogger = r3
            return
    }

    public cz.msebera.android.httpclient.HttpServerConnection getConnection() {
            r1 = this;
            cz.msebera.android.httpclient.HttpServerConnection r0 = r1.conn
            return r0
    }

    @Override
    public void run() {
            r4 = this;
            cz.msebera.android.httpclient.protocol.BasicHttpContext r0 = new cz.msebera.android.httpclient.protocol.BasicHttpContext     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            r0.<init>()     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            cz.msebera.android.httpclient.protocol.HttpCoreContext r1 = cz.msebera.android.httpclient.protocol.HttpCoreContext.adapt(r0)     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
        L9:
            boolean r2 = java.lang.Thread.interrupted()     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            if (r2 != 0) goto L22
            cz.msebera.android.httpclient.HttpServerConnection r2 = r4.conn     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            boolean r2 = r2.isOpen()     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            if (r2 == 0) goto L22
            cz.msebera.android.httpclient.protocol.HttpService r2 = r4.httpservice     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            cz.msebera.android.httpclient.HttpServerConnection r3 = r4.conn     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            r2.handleRequest(r3, r1)     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            r0.clear()     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            goto L9
        L22:
            cz.msebera.android.httpclient.HttpServerConnection r0 = r4.conn     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            r0.close()     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            cz.msebera.android.httpclient.HttpServerConnection r0 = r4.conn     // Catch: java.io.IOException -> L3b
            r0.shutdown()     // Catch: java.io.IOException -> L3b
            goto L41
        L2d:
            r0 = move-exception
            goto L42
        L2f:
            r0 = move-exception
            cz.msebera.android.httpclient.ExceptionLogger r1 = r4.exceptionLogger     // Catch: java.lang.Throwable -> L2d
            r1.log(r0)     // Catch: java.lang.Throwable -> L2d
            cz.msebera.android.httpclient.HttpServerConnection r0 = r4.conn     // Catch: java.io.IOException -> L3b
            r0.shutdown()     // Catch: java.io.IOException -> L3b
            goto L41
        L3b:
            r0 = move-exception
            cz.msebera.android.httpclient.ExceptionLogger r1 = r4.exceptionLogger
            r1.log(r0)
        L41:
            return
        L42:
            cz.msebera.android.httpclient.HttpServerConnection r1 = r4.conn     // Catch: java.io.IOException -> L48
            r1.shutdown()     // Catch: java.io.IOException -> L48
            goto L4e
        L48:
            r1 = move-exception
            cz.msebera.android.httpclient.ExceptionLogger r2 = r4.exceptionLogger
            r2.log(r1)
        L4e:
            throw r0
    }
}
