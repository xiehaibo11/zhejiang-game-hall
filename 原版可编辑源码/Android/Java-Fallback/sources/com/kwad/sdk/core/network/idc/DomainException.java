package com.kwad.sdk.core.network.idc;

public class DomainException extends java.lang.Exception {
    private final java.util.regex.Pattern CONNECT_ERR_PATTERN;
    private final int httpCode;

    public DomainException(int r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public DomainException(int r2, java.lang.Throwable r3) {
            r1 = this;
            r1.<init>(r3)
            java.lang.String r3 = ".*(ECONN(RESET|REFUSED|ABORTED)|ETIMEDOUT|ENETUNREACH|EHOSTUNREACH).*"
            r0 = 2
            java.util.regex.Pattern r3 = java.util.regex.Pattern.compile(r3, r0)
            r1.CONNECT_ERR_PATTERN = r3
            r1.httpCode = r2
            return
    }

    public DomainException(java.lang.Throwable r2) {
            r1 = this;
            r0 = -1
            r1.<init>(r0, r2)
            return
    }

    private java.lang.Exception getInternal() {
            r2 = this;
            java.lang.Throwable r0 = r2.getCause()
            boolean r1 = r0 instanceof java.lang.Exception
            if (r1 == 0) goto Lb
            java.lang.Exception r0 = (java.lang.Exception) r0
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public int getHttpCode() {
            r1 = this;
            int r0 = r1.httpCode
            return r0
    }

    boolean isConnectException() {
            r4 = this;
            java.lang.Exception r0 = r4.getInternal()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            boolean r2 = r0 instanceof java.net.SocketTimeoutException
            if (r2 != 0) goto L3b
            boolean r2 = r0 instanceof org.apache.http.conn.ConnectTimeoutException
            if (r2 != 0) goto L3b
            boolean r2 = r0 instanceof java.net.SocketException
            if (r2 != 0) goto L3b
            boolean r2 = r0 instanceof java.net.UnknownHostException
            if (r2 == 0) goto L19
            goto L3b
        L19:
            java.lang.Class r2 = r0.getClass()
            java.lang.String r2 = r2.getSimpleName()
            java.lang.String r3 = "ErrnoException"
            boolean r2 = r2.equalsIgnoreCase(r3)
            if (r2 == 0) goto L3a
            java.lang.String r0 = r0.getMessage()
            if (r0 == 0) goto L3a
            java.util.regex.Pattern r1 = r4.CONNECT_ERR_PATTERN
            java.util.regex.Matcher r0 = r1.matcher(r0)
            boolean r0 = r0.find()
            return r0
        L3a:
            return r1
        L3b:
            r0 = 1
            return r0
    }
}
