package com.huawei.hms.framework.common;

public class ExceptionCode {
    public static final int CANCEL = 1104;
    private static final java.lang.String CONNECT = "connect";
    public static final int CONNECTION_ABORT = 110205;
    public static final int CONNECTION_REFUSED = 110209;
    public static final int CONNECTION_RESET = 110204;
    public static final int CONNECT_FAILED = 110206;
    public static final int CRASH_EXCEPTION = 1103;
    public static final int INTERRUPT_CONNECT_CLOSE = 110214;
    public static final int INTERRUPT_EXCEPTION = 110213;
    public static final int NETWORK_CHANGED = 110216;
    public static final int NETWORK_IO_EXCEPTION = 1102;
    public static final int NETWORK_UNREACHABLE = 110208;
    public static final int PROTOCOL_ERROR = 110217;
    private static final java.lang.String READ = "read";
    public static final int READ_ERROR = 110203;
    public static final int ROUTE_FAILED = 110207;
    public static final int SHUTDOWN_EXCEPTION = 110218;
    public static final int SOCKET_CLOSE = 110215;
    public static final int SOCKET_CONNECT_TIMEOUT = 110221;
    public static final int SOCKET_READ_TIMEOUT = 110223;
    public static final int SOCKET_TIMEOUT = 110200;
    public static final int SOCKET_WRITE_TIMEOUT = 110225;
    public static final int SSL_HANDSHAKE_EXCEPTION = 110211;
    public static final int SSL_PEERUNVERIFIED_EXCEPTION = 110212;
    public static final int SSL_PROTOCOL_EXCEPTION = 110210;
    public static final int UNABLE_TO_RESOLVE_HOST = 110202;
    public static final int UNEXPECTED_EOF = 110201;
    private static final java.lang.String WRITE = "write";

    public ExceptionCode() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String checkExceptionContainsKey(java.lang.Exception r4, java.lang.String... r5) {
            java.lang.String r0 = r4.getMessage()
            java.lang.String r0 = com.huawei.hms.framework.common.StringUtils.toLowerCase(r0)
            java.lang.String r0 = checkStrContainsKey(r0, r5)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L13
            return r0
        L13:
            java.lang.StackTraceElement[] r4 = r4.getStackTrace()
            int r1 = r4.length
            r2 = 0
        L19:
            if (r2 >= r1) goto L33
            r0 = r4[r2]
            java.lang.String r0 = r0.toString()
            java.lang.String r0 = com.huawei.hms.framework.common.StringUtils.toLowerCase(r0)
            java.lang.String r0 = checkStrContainsKey(r0, r5)
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 != 0) goto L30
            return r0
        L30:
            int r2 = r2 + 1
            goto L19
        L33:
            return r0
    }

    private static java.lang.String checkStrContainsKey(java.lang.String r5, java.lang.String... r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            int r0 = r6.length
            r2 = 0
        Lb:
            if (r2 >= r0) goto L19
            r3 = r6[r2]
            boolean r4 = r5.contains(r3)
            if (r4 == 0) goto L16
            return r3
        L16:
            int r2 = r2 + 1
            goto Lb
        L19:
            return r1
    }

    public static int getErrorCodeFromException(java.lang.Exception r3) {
            r0 = 1102(0x44e, float:1.544E-42)
            if (r3 != 0) goto L5
            return r0
        L5:
            boolean r1 = r3 instanceof java.io.IOException
            if (r1 != 0) goto Lc
            r3 = 1103(0x44f, float:1.546E-42)
            return r3
        Lc:
            java.lang.String r1 = r3.getMessage()
            if (r1 != 0) goto L13
            return r0
        L13:
            java.lang.String r1 = com.huawei.hms.framework.common.StringUtils.toLowerCase(r1)
            int r2 = getErrorCodeFromMsg(r1)
            if (r2 == r0) goto L1e
            return r2
        L1e:
            boolean r0 = r3 instanceof java.net.SocketTimeoutException
            if (r0 == 0) goto L27
            int r3 = getErrorCodeSocketTimeout(r3)
            return r3
        L27:
            boolean r0 = r3 instanceof java.net.ConnectException
            if (r0 == 0) goto L2f
            r3 = 110206(0x1ae7e, float:1.54431E-40)
            return r3
        L2f:
            boolean r0 = r3 instanceof java.net.NoRouteToHostException
            if (r0 == 0) goto L37
            r3 = 110207(0x1ae7f, float:1.54433E-40)
            return r3
        L37:
            boolean r0 = r3 instanceof javax.net.ssl.SSLProtocolException
            if (r0 == 0) goto L3f
            r3 = 110210(0x1ae82, float:1.54437E-40)
            return r3
        L3f:
            boolean r0 = r3 instanceof javax.net.ssl.SSLHandshakeException
            if (r0 == 0) goto L47
            r3 = 110211(0x1ae83, float:1.54439E-40)
            return r3
        L47:
            boolean r0 = r3 instanceof javax.net.ssl.SSLPeerUnverifiedException
            if (r0 == 0) goto L4f
            r3 = 110212(0x1ae84, float:1.5444E-40)
            return r3
        L4f:
            boolean r0 = r3 instanceof java.net.UnknownHostException
            if (r0 == 0) goto L57
            r3 = 110202(0x1ae7a, float:1.54426E-40)
            return r3
        L57:
            boolean r3 = r3 instanceof java.io.InterruptedIOException
            if (r3 == 0) goto L6b
            java.lang.String r3 = "connection has been shut down"
            boolean r3 = r1.contains(r3)
            if (r3 == 0) goto L67
            r3 = 110214(0x1ae86, float:1.54443E-40)
            return r3
        L67:
            r3 = 110213(0x1ae85, float:1.54441E-40)
            return r3
        L6b:
            return r2
    }

    private static int getErrorCodeFromMsg(java.lang.String r1) {
            java.lang.String r0 = "unexpected end of stream"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto Ld
            r1 = 110201(0x1ae79, float:1.54424E-40)
            goto L88
        Ld:
            java.lang.String r0 = "unable to resolve host"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L1a
            r1 = 110202(0x1ae7a, float:1.54426E-40)
            goto L88
        L1a:
            java.lang.String r0 = "read error"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L26
            r1 = 110203(0x1ae7b, float:1.54427E-40)
            goto L88
        L26:
            java.lang.String r0 = "connection reset"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L32
            r1 = 110204(0x1ae7c, float:1.54429E-40)
            goto L88
        L32:
            java.lang.String r0 = "software caused connection abort"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L3e
            r1 = 110205(0x1ae7d, float:1.5443E-40)
            goto L88
        L3e:
            java.lang.String r0 = "failed to connect to"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L4a
            r1 = 110206(0x1ae7e, float:1.54431E-40)
            goto L88
        L4a:
            java.lang.String r0 = "connection refused"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L56
            r1 = 110209(0x1ae81, float:1.54436E-40)
            goto L88
        L56:
            java.lang.String r0 = "connection timed out"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L62
            r1 = 110221(0x1ae8d, float:1.54453E-40)
            return r1
        L62:
            java.lang.String r0 = "no route to host"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L6e
            r1 = 110207(0x1ae7f, float:1.54433E-40)
            goto L88
        L6e:
            java.lang.String r0 = "network is unreachable"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L7a
            r1 = 110208(0x1ae80, float:1.54434E-40)
            goto L88
        L7a:
            java.lang.String r0 = "socket closed"
            boolean r1 = r1.contains(r0)
            if (r1 == 0) goto L86
            r1 = 110215(0x1ae87, float:1.54444E-40)
            goto L88
        L86:
            r1 = 1102(0x44e, float:1.544E-42)
        L88:
            return r1
    }

    private static int getErrorCodeSocketTimeout(java.lang.Exception r7) {
            java.lang.String r0 = "write"
            java.lang.String r1 = "read"
            java.lang.String r2 = "connect"
            java.lang.String[] r3 = new java.lang.String[]{r2, r1, r0}
            java.lang.String r7 = checkExceptionContainsKey(r7, r3)
            int r3 = r7.hashCode()
            r4 = 2
            r5 = 1
            r6 = 3496342(0x355996, float:4.899419E-39)
            if (r3 == r6) goto L34
            r1 = 113399775(0x6c257df, float:7.3103804E-35)
            if (r3 == r1) goto L2c
            r0 = 951351530(0x38b478ea, float:8.605591E-5)
            if (r3 == r0) goto L24
            goto L3c
        L24:
            boolean r7 = r7.equals(r2)
            if (r7 == 0) goto L3c
            r7 = 0
            goto L3d
        L2c:
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L3c
            r7 = r4
            goto L3d
        L34:
            boolean r7 = r7.equals(r1)
            if (r7 == 0) goto L3c
            r7 = r5
            goto L3d
        L3c:
            r7 = -1
        L3d:
            if (r7 == 0) goto L4f
            if (r7 == r5) goto L4b
            if (r7 == r4) goto L47
            r7 = 110200(0x1ae78, float:1.54423E-40)
            return r7
        L47:
            r7 = 110225(0x1ae91, float:1.54458E-40)
            return r7
        L4b:
            r7 = 110223(0x1ae8f, float:1.54455E-40)
            return r7
        L4f:
            r7 = 110221(0x1ae8d, float:1.54453E-40)
            return r7
    }
}
