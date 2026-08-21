package okhttp3.internal.http;

public final class StatusLine {
    public static final int HTTP_CONTINUE = 100;
    public static final int HTTP_PERM_REDIRECT = 308;
    public static final int HTTP_TEMP_REDIRECT = 307;
    public final int code;
    public final java.lang.String message;
    public final okhttp3.Protocol protocol;

    public StatusLine(okhttp3.Protocol r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.protocol = r1
            r0.code = r2
            r0.message = r3
            return
    }

    public static okhttp3.internal.http.StatusLine get(okhttp3.Response r3) {
            okhttp3.internal.http.StatusLine r0 = new okhttp3.internal.http.StatusLine
            okhttp3.Protocol r1 = r3.protocol()
            int r2 = r3.code()
            java.lang.String r3 = r3.message()
            r0.<init>(r1, r2, r3)
            return r0
    }

    public static okhttp3.internal.http.StatusLine parse(java.lang.String r8) throws java.io.IOException {
            java.lang.String r0 = "HTTP/1."
            boolean r0 = r8.startsWith(r0)
            r1 = 32
            r2 = 4
            r3 = 9
            java.lang.String r4 = "Unexpected status line: "
            if (r0 == 0) goto L59
            int r0 = r8.length()
            if (r0 < r3) goto L44
            r0 = 8
            char r0 = r8.charAt(r0)
            if (r0 != r1) goto L44
            r0 = 7
            char r0 = r8.charAt(r0)
            int r0 = r0 + (-48)
            if (r0 != 0) goto L29
            okhttp3.Protocol r0 = okhttp3.Protocol.HTTP_1_0
            goto L64
        L29:
            r5 = 1
            if (r0 != r5) goto L2f
            okhttp3.Protocol r0 = okhttp3.Protocol.HTTP_1_1
            goto L64
        L2f:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            r0.<init>(r8)
            throw r0
        L44:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            r0.<init>(r8)
            throw r0
        L59:
            java.lang.String r0 = "ICY "
            boolean r0 = r8.startsWith(r0)
            if (r0 == 0) goto Lcd
            okhttp3.Protocol r0 = okhttp3.Protocol.HTTP_1_0
            r3 = 4
        L64:
            int r5 = r8.length()
            int r6 = r3 + 3
            if (r5 < r6) goto Lb8
            java.lang.String r5 = r8.substring(r3, r6)     // Catch: java.lang.NumberFormatException -> La3
            int r5 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.NumberFormatException -> La3
            int r7 = r8.length()
            if (r7 <= r6) goto L9b
            char r6 = r8.charAt(r6)
            if (r6 != r1) goto L86
            int r3 = r3 + r2
            java.lang.String r8 = r8.substring(r3)
            goto L9d
        L86:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            r0.<init>(r8)
            throw r0
        L9b:
            java.lang.String r8 = ""
        L9d:
            okhttp3.internal.http.StatusLine r1 = new okhttp3.internal.http.StatusLine
            r1.<init>(r0, r5, r8)
            return r1
        La3:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            r0.<init>(r8)
            throw r0
        Lb8:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            r0.<init>(r8)
            throw r0
        Lcd:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            r0.<init>(r8)
            throw r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            okhttp3.Protocol r1 = r3.protocol
            okhttp3.Protocol r2 = okhttp3.Protocol.HTTP_1_0
            if (r1 != r2) goto Le
            java.lang.String r1 = "HTTP/1.0"
            goto L10
        Le:
            java.lang.String r1 = "HTTP/1.1"
        L10:
            r0.append(r1)
            r1 = 32
            r0.append(r1)
            int r2 = r3.code
            r0.append(r2)
            java.lang.String r2 = r3.message
            if (r2 == 0) goto L29
            r0.append(r1)
            java.lang.String r1 = r3.message
            r0.append(r1)
        L29:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
