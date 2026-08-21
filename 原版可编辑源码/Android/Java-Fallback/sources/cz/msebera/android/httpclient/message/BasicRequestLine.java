package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.Immutable
public class BasicRequestLine implements cz.msebera.android.httpclient.RequestLine, java.lang.Cloneable, java.io.Serializable {
    private static final long serialVersionUID = 2810581718468737193L;
    private final java.lang.String method;
    private final cz.msebera.android.httpclient.ProtocolVersion protoversion;
    private final java.lang.String uri;

    public BasicRequestLine(java.lang.String r2, java.lang.String r3, cz.msebera.android.httpclient.ProtocolVersion r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Method"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r2 = (java.lang.String) r2
            r1.method = r2
            java.lang.String r2 = "URI"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r3, r2)
            java.lang.String r2 = (java.lang.String) r2
            r1.uri = r2
            java.lang.String r2 = "Version"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r4, r2)
            cz.msebera.android.httpclient.ProtocolVersion r2 = (cz.msebera.android.httpclient.ProtocolVersion) r2
            r1.protoversion = r2
            return
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            java.lang.Object r0 = super.clone()
            return r0
    }

    @Override
    public java.lang.String getMethod() {
            r1 = this;
            java.lang.String r0 = r1.method
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.ProtocolVersion getProtocolVersion() {
            r1 = this;
            cz.msebera.android.httpclient.ProtocolVersion r0 = r1.protoversion
            return r0
    }

    @Override
    public java.lang.String getUri() {
            r1 = this;
            java.lang.String r0 = r1.uri
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            cz.msebera.android.httpclient.message.BasicLineFormatter r0 = cz.msebera.android.httpclient.message.BasicLineFormatter.INSTANCE
            r1 = 0
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r0.formatRequestLine(r1, r2)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
