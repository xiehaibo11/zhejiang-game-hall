package okhttp3.internal.ws;

@kotlin.Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\b\n\u0002\b\u0015\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0086\b\u0018\u0000 \u001c2\u00020\u0001:\u0001\u001cBE\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u0005\u0012\b\b\u0002\u0010\b\u001a\u00020\u0003\u0012\b\b\u0002\u0010\t\u001a\u00020\u0003¢\u0006\u0002\u0010\nJ\t\u0010\f\u001a\u00020\u0003HÆ\u0003J\u0010\u0010\r\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010\u000eJ\t\u0010\u000f\u001a\u00020\u0003HÆ\u0003J\u0010\u0010\u0010\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010\u000eJ\t\u0010\u0011\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0012\u001a\u00020\u0003HÆ\u0003JN\u0010\u0013\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00032\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u00052\b\b\u0002\u0010\b\u001a\u00020\u00032\b\b\u0002\u0010\t\u001a\u00020\u0003HÆ\u0001¢\u0006\u0002\u0010\u0014J\u0013\u0010\u0015\u001a\u00020\u00032\b\u0010\u0016\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0017\u001a\u00020\u0005HÖ\u0001J\u000e\u0010\u0018\u001a\u00020\u00032\u0006\u0010\u0019\u001a\u00020\u0003J\t\u0010\u001a\u001a\u00020\u001bHÖ\u0001R\u0014\u0010\u0004\u001a\u0004\u0018\u00010\u00058\u0006X\u0087\u0004¢\u0006\u0004\n\u0002\u0010\u000bR\u0010\u0010\u0006\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0002\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0007\u001a\u0004\u0018\u00010\u00058\u0006X\u0087\u0004¢\u0006\u0004\n\u0002\u0010\u000bR\u0010\u0010\b\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\t\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\u001d"}, d2 = {"Lokhttp3/internal/ws/WebSocketExtensions;", "", "perMessageDeflate", "", "clientMaxWindowBits", "", "clientNoContextTakeover", "serverMaxWindowBits", "serverNoContextTakeover", "unknownValues", "(ZLjava/lang/Integer;ZLjava/lang/Integer;ZZ)V", "Ljava/lang/Integer;", "component1", "component2", "()Ljava/lang/Integer;", "component3", "component4", "component5", "component6", "copy", "(ZLjava/lang/Integer;ZLjava/lang/Integer;ZZ)Lokhttp3/internal/ws/WebSocketExtensions;", "equals", "other", "hashCode", "noContextTakeover", "clientOriginated", "toString", "", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class WebSocketExtensions {
    public static final okhttp3.internal.ws.WebSocketExtensions.Companion Companion = null;
    private static final java.lang.String HEADER_WEB_SOCKET_EXTENSION = "Sec-WebSocket-Extensions";
    public final java.lang.Integer clientMaxWindowBits;
    public final boolean clientNoContextTakeover;
    public final boolean perMessageDeflate;
    public final java.lang.Integer serverMaxWindowBits;
    public final boolean serverNoContextTakeover;
    public final boolean unknownValues;

    @kotlin.Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u000e\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\bR\u000e\u0010\u0003\u001a\u00020\u0004X\u0082T¢\u0006\u0002\n\u0000¨\u0006\t"}, d2 = {"Lokhttp3/internal/ws/WebSocketExtensions$Companion;", "", "()V", "HEADER_WEB_SOCKET_EXTENSION", "", "parse", "Lokhttp3/internal/ws/WebSocketExtensions;", "responseHeaders", "Lokhttp3/Headers;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
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

        public final okhttp3.internal.ws.WebSocketExtensions parse(okhttp3.Headers r21) throws java.io.IOException {
                r20 = this;
                r0 = r21
                java.lang.String r1 = "responseHeaders"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r1)
                int r1 = r21.size()
                r4 = 0
                r6 = 0
                r7 = 0
                r8 = 0
                r9 = 0
                r10 = 0
                r11 = 0
            L12:
                if (r4 >= r1) goto Lde
                int r5 = r4 + 1
                java.lang.String r12 = r0.name(r4)
                r13 = 1
                java.lang.String r14 = "Sec-WebSocket-Extensions"
                boolean r12 = kotlin.text.StringsKt.equals(r12, r14, r13)
                if (r12 != 0) goto L25
            L23:
                r4 = r5
                goto L12
            L25:
                java.lang.String r4 = r0.value(r4)
                r12 = 0
            L2a:
                int r14 = r4.length()
                if (r12 >= r14) goto L23
                r15 = 44
                r17 = 0
                r18 = 4
                r19 = 0
                r14 = r4
                r16 = r12
                int r14 = okhttp3.internal.Util.delimiterOffset$default(r14, r15, r16, r17, r18, r19)
                r15 = 59
                int r3 = okhttp3.internal.Util.delimiterOffset(r4, r15, r12, r14)
                java.lang.String r12 = okhttp3.internal.Util.trimSubstring(r4, r12, r3)
                int r3 = r3 + r13
                java.lang.String r2 = "permessage-deflate"
                boolean r2 = kotlin.text.StringsKt.equals(r12, r2, r13)
                if (r2 == 0) goto Ld8
                if (r6 == 0) goto L55
                r11 = r13
            L55:
                r12 = r3
            L56:
                if (r12 >= r14) goto Ld3
                int r2 = okhttp3.internal.Util.delimiterOffset(r4, r15, r12, r14)
                r3 = 61
                int r3 = okhttp3.internal.Util.delimiterOffset(r4, r3, r12, r2)
                java.lang.String r6 = okhttp3.internal.Util.trimSubstring(r4, r12, r3)
                if (r3 >= r2) goto L79
                int r3 = r3 + 1
                java.lang.String r3 = okhttp3.internal.Util.trimSubstring(r4, r3, r2)
                java.lang.String r12 = "\""
                java.lang.CharSequence r12 = (java.lang.CharSequence) r12
                java.lang.String r3 = kotlin.text.StringsKt.removeSurrounding(r3, r12)
                r17 = 0
                goto L7f
            L79:
                r17 = 0
                r3 = r17
                java.lang.String r3 = (java.lang.String) r3
            L7f:
                int r12 = r2 + 1
                java.lang.String r2 = "client_max_window_bits"
                boolean r2 = kotlin.text.StringsKt.equals(r6, r2, r13)
                if (r2 == 0) goto L99
                if (r7 == 0) goto L8c
                r11 = r13
            L8c:
                if (r3 != 0) goto L91
                r7 = r17
                goto L96
            L91:
                java.lang.Integer r2 = kotlin.text.StringsKt.toIntOrNull(r3)
                r7 = r2
            L96:
                if (r7 != 0) goto L56
                goto Ld1
            L99:
                java.lang.String r2 = "client_no_context_takeover"
                boolean r2 = kotlin.text.StringsKt.equals(r6, r2, r13)
                if (r2 == 0) goto La9
                if (r8 == 0) goto La4
                r11 = r13
            La4:
                if (r3 == 0) goto La7
                r11 = r13
            La7:
                r8 = r13
                goto L56
            La9:
                java.lang.String r2 = "server_max_window_bits"
                boolean r2 = kotlin.text.StringsKt.equals(r6, r2, r13)
                if (r2 == 0) goto Lc1
                if (r9 == 0) goto Lb4
                r11 = r13
            Lb4:
                if (r3 != 0) goto Lb9
                r9 = r17
                goto Lbe
            Lb9:
                java.lang.Integer r2 = kotlin.text.StringsKt.toIntOrNull(r3)
                r9 = r2
            Lbe:
                if (r9 != 0) goto L56
                goto Ld1
            Lc1:
                java.lang.String r2 = "server_no_context_takeover"
                boolean r2 = kotlin.text.StringsKt.equals(r6, r2, r13)
                if (r2 == 0) goto Ld1
                if (r10 == 0) goto Lcc
                r11 = r13
            Lcc:
                if (r3 == 0) goto Lcf
                r11 = r13
            Lcf:
                r10 = r13
                goto L56
            Ld1:
                r11 = r13
                goto L56
            Ld3:
                r17 = 0
                r6 = r13
                goto L2a
            Ld8:
                r17 = 0
                r12 = r3
                r11 = r13
                goto L2a
            Lde:
                okhttp3.internal.ws.WebSocketExtensions r0 = new okhttp3.internal.ws.WebSocketExtensions
                r5 = r0
                r5.<init>(r6, r7, r8, r9, r10, r11)
                return r0
        }
    }

    static {
            okhttp3.internal.ws.WebSocketExtensions$Companion r0 = new okhttp3.internal.ws.WebSocketExtensions$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.internal.ws.WebSocketExtensions.Companion = r0
            return
    }

    public WebSocketExtensions() {
            r9 = this;
            r1 = 0
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 63
            r8 = 0
            r0 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public WebSocketExtensions(boolean r1, java.lang.Integer r2, boolean r3, java.lang.Integer r4, boolean r5, boolean r6) {
            r0 = this;
            r0.<init>()
            r0.perMessageDeflate = r1
            r0.clientMaxWindowBits = r2
            r0.clientNoContextTakeover = r3
            r0.serverMaxWindowBits = r4
            r0.serverNoContextTakeover = r5
            r0.unknownValues = r6
            return
    }

    public WebSocketExtensions(boolean r6, java.lang.Integer r7, boolean r8, java.lang.Integer r9, boolean r10, boolean r11, int r12, kotlin.jvm.internal.DefaultConstructorMarker r13) {
            r5 = this;
            r13 = r12 & 1
            r0 = 0
            if (r13 == 0) goto L7
            r13 = r0
            goto L8
        L7:
            r13 = r6
        L8:
            r6 = r12 & 2
            r1 = 0
            if (r6 == 0) goto Lf
            r2 = r1
            goto L10
        Lf:
            r2 = r7
        L10:
            r6 = r12 & 4
            if (r6 == 0) goto L16
            r3 = r0
            goto L17
        L16:
            r3 = r8
        L17:
            r6 = r12 & 8
            if (r6 == 0) goto L1c
            goto L1d
        L1c:
            r1 = r9
        L1d:
            r6 = r12 & 16
            if (r6 == 0) goto L23
            r4 = r0
            goto L24
        L23:
            r4 = r10
        L24:
            r6 = r12 & 32
            if (r6 == 0) goto L2a
            r12 = r0
            goto L2b
        L2a:
            r12 = r11
        L2b:
            r6 = r5
            r7 = r13
            r8 = r2
            r9 = r3
            r10 = r1
            r11 = r4
            r6.<init>(r7, r8, r9, r10, r11, r12)
            return
    }

    public static okhttp3.internal.ws.WebSocketExtensions copy$default(okhttp3.internal.ws.WebSocketExtensions r4, boolean r5, java.lang.Integer r6, boolean r7, java.lang.Integer r8, boolean r9, boolean r10, int r11, java.lang.Object r12) {
            r12 = r11 & 1
            if (r12 == 0) goto L6
            boolean r5 = r4.perMessageDeflate
        L6:
            r12 = r11 & 2
            if (r12 == 0) goto Lc
            java.lang.Integer r6 = r4.clientMaxWindowBits
        Lc:
            r12 = r6
            r6 = r11 & 4
            if (r6 == 0) goto L13
            boolean r7 = r4.clientNoContextTakeover
        L13:
            r0 = r7
            r6 = r11 & 8
            if (r6 == 0) goto L1a
            java.lang.Integer r8 = r4.serverMaxWindowBits
        L1a:
            r1 = r8
            r6 = r11 & 16
            if (r6 == 0) goto L21
            boolean r9 = r4.serverNoContextTakeover
        L21:
            r2 = r9
            r6 = r11 & 32
            if (r6 == 0) goto L28
            boolean r10 = r4.unknownValues
        L28:
            r3 = r10
            r6 = r4
            r7 = r5
            r8 = r12
            r9 = r0
            r10 = r1
            r11 = r2
            r12 = r3
            okhttp3.internal.ws.WebSocketExtensions r4 = r6.copy(r7, r8, r9, r10, r11, r12)
            return r4
    }

    public final boolean component1() {
            r1 = this;
            boolean r0 = r1.perMessageDeflate
            return r0
    }

    public final java.lang.Integer component2() {
            r1 = this;
            java.lang.Integer r0 = r1.clientMaxWindowBits
            return r0
    }

    public final boolean component3() {
            r1 = this;
            boolean r0 = r1.clientNoContextTakeover
            return r0
    }

    public final java.lang.Integer component4() {
            r1 = this;
            java.lang.Integer r0 = r1.serverMaxWindowBits
            return r0
    }

    public final boolean component5() {
            r1 = this;
            boolean r0 = r1.serverNoContextTakeover
            return r0
    }

    public final boolean component6() {
            r1 = this;
            boolean r0 = r1.unknownValues
            return r0
    }

    public final okhttp3.internal.ws.WebSocketExtensions copy(boolean r9, java.lang.Integer r10, boolean r11, java.lang.Integer r12, boolean r13, boolean r14) {
            r8 = this;
            okhttp3.internal.ws.WebSocketExtensions r7 = new okhttp3.internal.ws.WebSocketExtensions
            r0 = r7
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r7
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof okhttp3.internal.ws.WebSocketExtensions
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            okhttp3.internal.ws.WebSocketExtensions r5 = (okhttp3.internal.ws.WebSocketExtensions) r5
            boolean r1 = r4.perMessageDeflate
            boolean r3 = r5.perMessageDeflate
            if (r1 == r3) goto L13
            return r2
        L13:
            java.lang.Integer r1 = r4.clientMaxWindowBits
            java.lang.Integer r3 = r5.clientMaxWindowBits
            boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r1, r3)
            if (r1 != 0) goto L1e
            return r2
        L1e:
            boolean r1 = r4.clientNoContextTakeover
            boolean r3 = r5.clientNoContextTakeover
            if (r1 == r3) goto L25
            return r2
        L25:
            java.lang.Integer r1 = r4.serverMaxWindowBits
            java.lang.Integer r3 = r5.serverMaxWindowBits
            boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r1, r3)
            if (r1 != 0) goto L30
            return r2
        L30:
            boolean r1 = r4.serverNoContextTakeover
            boolean r3 = r5.serverNoContextTakeover
            if (r1 == r3) goto L37
            return r2
        L37:
            boolean r1 = r4.unknownValues
            boolean r5 = r5.unknownValues
            if (r1 == r5) goto L3e
            return r2
        L3e:
            return r0
    }

    public int hashCode() {
            r4 = this;
            boolean r0 = r4.perMessageDeflate
            r1 = 1
            if (r0 == 0) goto L6
            r0 = r1
        L6:
            int r0 = r0 * 31
            java.lang.Integer r2 = r4.clientMaxWindowBits
            r3 = 0
            if (r2 != 0) goto Lf
            r2 = r3
            goto L13
        Lf:
            int r2 = r2.hashCode()
        L13:
            int r0 = r0 + r2
            int r0 = r0 * 31
            boolean r2 = r4.clientNoContextTakeover
            if (r2 == 0) goto L1b
            r2 = r1
        L1b:
            int r0 = r0 + r2
            int r0 = r0 * 31
            java.lang.Integer r2 = r4.serverMaxWindowBits
            if (r2 != 0) goto L23
            goto L27
        L23:
            int r3 = r2.hashCode()
        L27:
            int r0 = r0 + r3
            int r0 = r0 * 31
            boolean r2 = r4.serverNoContextTakeover
            if (r2 == 0) goto L2f
            r2 = r1
        L2f:
            int r0 = r0 + r2
            int r0 = r0 * 31
            boolean r2 = r4.unknownValues
            if (r2 == 0) goto L37
            goto L38
        L37:
            r1 = r2
        L38:
            int r0 = r0 + r1
            return r0
    }

    public final boolean noContextTakeover(boolean r1) {
            r0 = this;
            if (r1 == 0) goto L5
            boolean r1 = r0.clientNoContextTakeover
            goto L7
        L5:
            boolean r1 = r0.serverNoContextTakeover
        L7:
            return r1
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "WebSocketExtensions(perMessageDeflate="
            r0.append(r1)
            boolean r1 = r2.perMessageDeflate
            r0.append(r1)
            java.lang.String r1 = ", clientMaxWindowBits="
            r0.append(r1)
            java.lang.Integer r1 = r2.clientMaxWindowBits
            r0.append(r1)
            java.lang.String r1 = ", clientNoContextTakeover="
            r0.append(r1)
            boolean r1 = r2.clientNoContextTakeover
            r0.append(r1)
            java.lang.String r1 = ", serverMaxWindowBits="
            r0.append(r1)
            java.lang.Integer r1 = r2.serverMaxWindowBits
            r0.append(r1)
            java.lang.String r1 = ", serverNoContextTakeover="
            r0.append(r1)
            boolean r1 = r2.serverNoContextTakeover
            r0.append(r1)
            java.lang.String r1 = ", unknownValues="
            r0.append(r1)
            boolean r1 = r2.unknownValues
            r0.append(r1)
            r1 = 41
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
