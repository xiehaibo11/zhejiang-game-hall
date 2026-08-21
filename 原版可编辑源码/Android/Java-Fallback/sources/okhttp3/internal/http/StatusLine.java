package okhttp3.internal.http;

@kotlin.Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0004\u0018\u0000 \n2\u00020\u0001:\u0001\nB\u001d\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0002\u0010\bJ\b\u0010\t\u001a\u00020\u0007H\u0016R\u0010\u0010\u0004\u001a\u00020\u00058\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0006\u001a\u00020\u00078\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0002\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\u000b"}, d2 = {"Lokhttp3/internal/http/StatusLine;", "", "protocol", "Lokhttp3/Protocol;", "code", "", "message", "", "(Lokhttp3/Protocol;ILjava/lang/String;)V", "toString", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class StatusLine {
    public static final okhttp3.internal.http.StatusLine.Companion Companion = null;
    public static final int HTTP_CONTINUE = 100;
    public static final int HTTP_MISDIRECTED_REQUEST = 421;
    public static final int HTTP_PERM_REDIRECT = 308;
    public static final int HTTP_TEMP_REDIRECT = 307;
    public final int code;
    public final java.lang.String message;
    public final okhttp3.Protocol protocol;

    @kotlin.Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u000e\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000bJ\u000e\u0010\f\u001a\u00020\t2\u0006\u0010\r\u001a\u00020\u000eR\u000e\u0010\u0003\u001a\u00020\u0004X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0004X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0004X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0004X\u0086T¢\u0006\u0002\n\u0000¨\u0006\u000f"}, d2 = {"Lokhttp3/internal/http/StatusLine$Companion;", "", "()V", "HTTP_CONTINUE", "", "HTTP_MISDIRECTED_REQUEST", "HTTP_PERM_REDIRECT", "HTTP_TEMP_REDIRECT", "get", "Lokhttp3/internal/http/StatusLine;", "response", "Lokhttp3/Response;", "parse", "statusLine", "", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }

        public Companion(kotlin.jvm.internal.DefaultConstructorMarker r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public final okhttp3.internal.http.StatusLine get(okhttp3.Response r4) {
                r3 = this;
                java.lang.String r0 = "response"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                okhttp3.internal.http.StatusLine r0 = new okhttp3.internal.http.StatusLine
                okhttp3.Protocol r1 = r4.protocol()
                int r2 = r4.code()
                java.lang.String r4 = r4.message()
                r0.<init>(r1, r2, r4)
                return r0
        }

        public final okhttp3.internal.http.StatusLine parse(java.lang.String r9) throws java.io.IOException {
                r8 = this;
                java.lang.String r0 = "statusLine"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
                r0 = 0
                r1 = 2
                r2 = 0
                java.lang.String r3 = "HTTP/1."
                boolean r3 = kotlin.text.StringsKt.startsWith$default(r9, r3, r2, r1, r0)
                r4 = 32
                r5 = 4
                r6 = 9
                java.lang.String r7 = "Unexpected status line: "
                if (r3 == 0) goto L4b
                int r0 = r9.length()
                if (r0 < r6) goto L41
                r0 = 8
                char r0 = r9.charAt(r0)
                if (r0 != r4) goto L41
                r0 = 7
                char r0 = r9.charAt(r0)
                int r0 = r0 + (-48)
                if (r0 == 0) goto L3e
                r1 = 1
                if (r0 != r1) goto L34
                okhttp3.Protocol r0 = okhttp3.Protocol.HTTP_1_1
                goto L56
            L34:
                java.net.ProtocolException r0 = new java.net.ProtocolException
                java.lang.String r9 = kotlin.jvm.internal.Intrinsics.stringPlus(r7, r9)
                r0.<init>(r9)
                throw r0
            L3e:
                okhttp3.Protocol r0 = okhttp3.Protocol.HTTP_1_0
                goto L56
            L41:
                java.net.ProtocolException r0 = new java.net.ProtocolException
                java.lang.String r9 = kotlin.jvm.internal.Intrinsics.stringPlus(r7, r9)
                r0.<init>(r9)
                throw r0
            L4b:
                java.lang.String r3 = "ICY "
                boolean r0 = kotlin.text.StringsKt.startsWith$default(r9, r3, r2, r1, r0)
                if (r0 == 0) goto La8
                okhttp3.Protocol r0 = okhttp3.Protocol.HTTP_1_0
                r6 = r5
            L56:
                int r1 = r9.length()
                int r2 = r6 + 3
                if (r1 < r2) goto L9e
                java.lang.String r1 = r9.substring(r6, r2)     // Catch: java.lang.NumberFormatException -> L94
                java.lang.String r3 = "this as java.lang.String…ing(startIndex, endIndex)"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r3)     // Catch: java.lang.NumberFormatException -> L94
                int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.NumberFormatException -> L94
                int r3 = r9.length()
                if (r3 <= r2) goto L8c
                char r2 = r9.charAt(r2)
                if (r2 != r4) goto L82
                int r6 = r6 + r5
                java.lang.String r9 = r9.substring(r6)
                java.lang.String r2 = "this as java.lang.String).substring(startIndex)"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r9, r2)
                goto L8e
            L82:
                java.net.ProtocolException r0 = new java.net.ProtocolException
                java.lang.String r9 = kotlin.jvm.internal.Intrinsics.stringPlus(r7, r9)
                r0.<init>(r9)
                throw r0
            L8c:
                java.lang.String r9 = ""
            L8e:
                okhttp3.internal.http.StatusLine r2 = new okhttp3.internal.http.StatusLine
                r2.<init>(r0, r1, r9)
                return r2
            L94:
                java.net.ProtocolException r0 = new java.net.ProtocolException
                java.lang.String r9 = kotlin.jvm.internal.Intrinsics.stringPlus(r7, r9)
                r0.<init>(r9)
                throw r0
            L9e:
                java.net.ProtocolException r0 = new java.net.ProtocolException
                java.lang.String r9 = kotlin.jvm.internal.Intrinsics.stringPlus(r7, r9)
                r0.<init>(r9)
                throw r0
            La8:
                java.net.ProtocolException r0 = new java.net.ProtocolException
                java.lang.String r9 = kotlin.jvm.internal.Intrinsics.stringPlus(r7, r9)
                r0.<init>(r9)
                throw r0
        }
    }

    static {
            okhttp3.internal.http.StatusLine$Companion r0 = new okhttp3.internal.http.StatusLine$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.internal.http.StatusLine.Companion = r0
            return
    }

    public StatusLine(okhttp3.Protocol r2, int r3, java.lang.String r4) {
            r1 = this;
            java.lang.String r0 = "protocol"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "message"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r1.<init>()
            r1.protocol = r2
            r1.code = r3
            r1.message = r4
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            okhttp3.Protocol r1 = r3.protocol
            okhttp3.Protocol r2 = okhttp3.Protocol.HTTP_1_0
            if (r1 != r2) goto L11
            java.lang.String r1 = "HTTP/1.0"
            r0.append(r1)
            goto L16
        L11:
            java.lang.String r1 = "HTTP/1.1"
            r0.append(r1)
        L16:
            r1 = 32
            r0.append(r1)
            int r2 = r3.code
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = r3.message
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "StringBuilder().apply(builderAction).toString()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }
}
