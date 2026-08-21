package okhttp3;

@kotlin.Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\u000e\n\u0002\b\n\b\u0086\u0001\u0018\u0000 \f2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\fB\u000f\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\b\u0010\u0005\u001a\u00020\u0003H\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000j\u0002\b\u0006j\u0002\b\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000b¨\u0006\r"}, d2 = {"Lokhttp3/Protocol;", "", "protocol", "", "(Ljava/lang/String;ILjava/lang/String;)V", "toString", "HTTP_1_0", "HTTP_1_1", "SPDY_3", "HTTP_2", "H2_PRIOR_KNOWLEDGE", "QUIC", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public enum Protocol extends java.lang.Enum<okhttp3.Protocol> {
    private static final okhttp3.Protocol[] $VALUES = null;
    public static final okhttp3.Protocol.Companion Companion = null;
    public static final okhttp3.Protocol H2_PRIOR_KNOWLEDGE = null;
    public static final okhttp3.Protocol HTTP_1_0 = null;
    public static final okhttp3.Protocol HTTP_1_1 = null;
    public static final okhttp3.Protocol HTTP_2 = null;
    public static final okhttp3.Protocol QUIC = null;

    @kotlin.Deprecated(message = "OkHttp has dropped support for SPDY. Prefer {@link #HTTP_2}.")
    public static final okhttp3.Protocol SPDY_3 = null;
    private final java.lang.String protocol;

    @kotlin.Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0010\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006H\u0007¨\u0006\u0007"}, d2 = {"Lokhttp3/Protocol$Companion;", "", "()V", "get", "Lokhttp3/Protocol;", "protocol", "", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
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

        @kotlin.jvm.JvmStatic
        public final okhttp3.Protocol get(java.lang.String r3) throws java.io.IOException {
                r2 = this;
                java.lang.String r0 = "protocol"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                okhttp3.Protocol r0 = okhttp3.Protocol.HTTP_1_0
                java.lang.String r0 = okhttp3.Protocol.access$getProtocol$p(r0)
                boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r0)
                if (r0 == 0) goto L14
                okhttp3.Protocol r3 = okhttp3.Protocol.HTTP_1_0
                goto L5e
            L14:
                okhttp3.Protocol r0 = okhttp3.Protocol.HTTP_1_1
                java.lang.String r0 = okhttp3.Protocol.access$getProtocol$p(r0)
                boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r0)
                if (r0 == 0) goto L23
                okhttp3.Protocol r3 = okhttp3.Protocol.HTTP_1_1
                goto L5e
            L23:
                okhttp3.Protocol r0 = okhttp3.Protocol.H2_PRIOR_KNOWLEDGE
                java.lang.String r0 = okhttp3.Protocol.access$getProtocol$p(r0)
                boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r0)
                if (r0 == 0) goto L32
                okhttp3.Protocol r3 = okhttp3.Protocol.H2_PRIOR_KNOWLEDGE
                goto L5e
            L32:
                okhttp3.Protocol r0 = okhttp3.Protocol.HTTP_2
                java.lang.String r0 = okhttp3.Protocol.access$getProtocol$p(r0)
                boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r0)
                if (r0 == 0) goto L41
                okhttp3.Protocol r3 = okhttp3.Protocol.HTTP_2
                goto L5e
            L41:
                okhttp3.Protocol r0 = okhttp3.Protocol.SPDY_3
                java.lang.String r0 = okhttp3.Protocol.access$getProtocol$p(r0)
                boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r0)
                if (r0 == 0) goto L50
                okhttp3.Protocol r3 = okhttp3.Protocol.SPDY_3
                goto L5e
            L50:
                okhttp3.Protocol r0 = okhttp3.Protocol.QUIC
                java.lang.String r0 = okhttp3.Protocol.access$getProtocol$p(r0)
                boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r0)
                if (r0 == 0) goto L5f
                okhttp3.Protocol r3 = okhttp3.Protocol.QUIC
            L5e:
                return r3
            L5f:
                java.io.IOException r0 = new java.io.IOException
                java.lang.String r1 = "Unexpected protocol: "
                java.lang.String r3 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r3)
                r0.<init>(r3)
                throw r0
        }
    }

    private static final okhttp3.Protocol[] $values() {
            r0 = 6
            okhttp3.Protocol[] r0 = new okhttp3.Protocol[r0]
            okhttp3.Protocol r1 = okhttp3.Protocol.HTTP_1_0
            r2 = 0
            r0[r2] = r1
            okhttp3.Protocol r1 = okhttp3.Protocol.HTTP_1_1
            r2 = 1
            r0[r2] = r1
            okhttp3.Protocol r1 = okhttp3.Protocol.SPDY_3
            r2 = 2
            r0[r2] = r1
            okhttp3.Protocol r1 = okhttp3.Protocol.HTTP_2
            r2 = 3
            r0[r2] = r1
            okhttp3.Protocol r1 = okhttp3.Protocol.H2_PRIOR_KNOWLEDGE
            r2 = 4
            r0[r2] = r1
            okhttp3.Protocol r1 = okhttp3.Protocol.QUIC
            r2 = 5
            r0[r2] = r1
            return r0
    }

    static {
            okhttp3.Protocol r0 = new okhttp3.Protocol
            java.lang.String r1 = "HTTP_1_0"
            r2 = 0
            java.lang.String r3 = "http/1.0"
            r0.<init>(r1, r2, r3)
            okhttp3.Protocol.HTTP_1_0 = r0
            okhttp3.Protocol r0 = new okhttp3.Protocol
            java.lang.String r1 = "HTTP_1_1"
            r2 = 1
            java.lang.String r3 = "http/1.1"
            r0.<init>(r1, r2, r3)
            okhttp3.Protocol.HTTP_1_1 = r0
            okhttp3.Protocol r0 = new okhttp3.Protocol
            java.lang.String r1 = "SPDY_3"
            r2 = 2
            java.lang.String r3 = "spdy/3.1"
            r0.<init>(r1, r2, r3)
            okhttp3.Protocol.SPDY_3 = r0
            okhttp3.Protocol r0 = new okhttp3.Protocol
            java.lang.String r1 = "HTTP_2"
            r2 = 3
            java.lang.String r3 = "h2"
            r0.<init>(r1, r2, r3)
            okhttp3.Protocol.HTTP_2 = r0
            okhttp3.Protocol r0 = new okhttp3.Protocol
            java.lang.String r1 = "H2_PRIOR_KNOWLEDGE"
            r2 = 4
            java.lang.String r3 = "h2_prior_knowledge"
            r0.<init>(r1, r2, r3)
            okhttp3.Protocol.H2_PRIOR_KNOWLEDGE = r0
            okhttp3.Protocol r0 = new okhttp3.Protocol
            java.lang.String r1 = "QUIC"
            r2 = 5
            java.lang.String r3 = "quic"
            r0.<init>(r1, r2, r3)
            okhttp3.Protocol.QUIC = r0
            okhttp3.Protocol[] r0 = $values()
            okhttp3.Protocol.$VALUES = r0
            okhttp3.Protocol$Companion r0 = new okhttp3.Protocol$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.Protocol.Companion = r0
            return
    }

    Protocol(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.protocol = r3
            return
    }

    public static final java.lang.String access$getProtocol$p(okhttp3.Protocol r0) {
            java.lang.String r0 = r0.protocol
            return r0
    }

    @kotlin.jvm.JvmStatic
    public static final okhttp3.Protocol get(java.lang.String r1) throws java.io.IOException {
            okhttp3.Protocol$Companion r0 = okhttp3.Protocol.Companion
            okhttp3.Protocol r1 = r0.get(r1)
            return r1
    }

    public static okhttp3.Protocol valueOf(java.lang.String r1) {
            java.lang.Class<okhttp3.Protocol> r0 = okhttp3.Protocol.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            okhttp3.Protocol r1 = (okhttp3.Protocol) r1
            return r1
    }

    public static okhttp3.Protocol[] values() {
            okhttp3.Protocol[] r0 = okhttp3.Protocol.$VALUES
            java.lang.Object r0 = r0.clone()
            okhttp3.Protocol[] r0 = (okhttp3.Protocol[]) r0
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.protocol
            return r0
    }
}
