package okhttp3;

import java.io.IOException;

public enum Protocol extends Enum<Protocol> {
    private static final Protocol[] $VALUES = null;
    public static final Protocol H2_PRIOR_KNOWLEDGE = null;
    public static final Protocol HTTP_1_0 = null;
    public static final Protocol HTTP_1_1 = null;
    public static final Protocol HTTP_2 = null;
    public static final Protocol QUIC = null;
    public static final Protocol SPDY_3 = null;
    private final String protocol;

    public static Protocol valueOf(String r1) {
        return (Protocol) Enum.valueOf(Protocol.class, r1);
    }

    public static Protocol[] values() {
        return (Protocol[]) $VALUES.clone();
    }

    static {
        HTTP_1_0 = new Protocol("HTTP_1_0", 0, "http/1.0");
        HTTP_1_1 = new Protocol("HTTP_1_1", 1, "http/1.1");
        SPDY_3 = new Protocol("SPDY_3", 2, "spdy/3.1");
        HTTP_2 = new Protocol("HTTP_2", 3, "h2");
        H2_PRIOR_KNOWLEDGE = new Protocol("H2_PRIOR_KNOWLEDGE", 4, "h2_prior_knowledge");
        QUIC = new Protocol("QUIC", 5, "quic");
        $VALUES = new Protocol[]{HTTP_1_0, HTTP_1_1, SPDY_3, HTTP_2, H2_PRIOR_KNOWLEDGE, QUIC};
    }

    Protocol(String r1, int r2, String r3) {
        this.protocol = r3;
    }

    public static Protocol get(String r3) throws IOException {
        if (r3.equals(HTTP_1_0.protocol) == false) goto L7;
        return HTTP_1_0;
    L7:
        if (r3.equals(HTTP_1_1.protocol) == false) goto L11;
        return HTTP_1_1;
    L11:
        if (r3.equals(H2_PRIOR_KNOWLEDGE.protocol) == false) goto L15;
        return H2_PRIOR_KNOWLEDGE;
    L15:
        if (r3.equals(HTTP_2.protocol) == false) goto L19;
        return HTTP_2;
    L19:
        if (r3.equals(SPDY_3.protocol) == false) goto L23;
        return SPDY_3;
    L23:
        if (r3.equals(QUIC.protocol) == false) goto L27;
        return QUIC;
    L27:
        throw new IOException("Unexpected protocol: " + r3);
    }

    @Override
    public String toString() {
        return this.protocol;
    }
}
