package cz.msebera.android.httpclient.conn.ssl;

@java.lang.Deprecated
public final class PrivateKeyDetails {
    private final java.security.cert.X509Certificate[] certChain;
    private final java.lang.String type;

    public PrivateKeyDetails(java.lang.String r2, java.security.cert.X509Certificate[] r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Private key type"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r2 = (java.lang.String) r2
            r1.type = r2
            r1.certChain = r3
            return
    }

    public java.security.cert.X509Certificate[] getCertChain() {
            r1 = this;
            java.security.cert.X509Certificate[] r0 = r1.certChain
            return r0
    }

    public java.lang.String getType() {
            r1 = this;
            java.lang.String r0 = r1.type
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.type
            r0.append(r1)
            r1 = 58
            r0.append(r1)
            java.security.cert.X509Certificate[] r1 = r2.certChain
            java.lang.String r1 = java.util.Arrays.toString(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
