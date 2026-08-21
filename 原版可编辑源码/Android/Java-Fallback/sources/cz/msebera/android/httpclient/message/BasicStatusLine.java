package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.Immutable
public class BasicStatusLine implements cz.msebera.android.httpclient.StatusLine, java.lang.Cloneable, java.io.Serializable {
    private static final long serialVersionUID = -2443303766890459269L;
    private final cz.msebera.android.httpclient.ProtocolVersion protoVersion;
    private final java.lang.String reasonPhrase;
    private final int statusCode;

    public BasicStatusLine(cz.msebera.android.httpclient.ProtocolVersion r2, int r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Version"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.ProtocolVersion r2 = (cz.msebera.android.httpclient.ProtocolVersion) r2
            r1.protoVersion = r2
            java.lang.String r2 = "Status code"
            int r2 = cz.msebera.android.httpclient.util.Args.notNegative(r3, r2)
            r1.statusCode = r2
            r1.reasonPhrase = r4
            return
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            java.lang.Object r0 = super.clone()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.ProtocolVersion getProtocolVersion() {
            r1 = this;
            cz.msebera.android.httpclient.ProtocolVersion r0 = r1.protoVersion
            return r0
    }

    @Override
    public java.lang.String getReasonPhrase() {
            r1 = this;
            java.lang.String r0 = r1.reasonPhrase
            return r0
    }

    @Override
    public int getStatusCode() {
            r1 = this;
            int r0 = r1.statusCode
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            cz.msebera.android.httpclient.message.BasicLineFormatter r0 = cz.msebera.android.httpclient.message.BasicLineFormatter.INSTANCE
            r1 = 0
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r0.formatStatusLine(r1, r2)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
