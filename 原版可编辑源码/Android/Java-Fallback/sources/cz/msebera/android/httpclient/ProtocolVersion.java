package cz.msebera.android.httpclient;

@cz.msebera.android.httpclient.annotation.Immutable
public class ProtocolVersion implements java.io.Serializable, java.lang.Cloneable {
    private static final long serialVersionUID = 8950662842175091068L;
    protected final int major;
    protected final int minor;
    protected final java.lang.String protocol;

    public ProtocolVersion(java.lang.String r2, int r3, int r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Protocol name"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r2 = (java.lang.String) r2
            r1.protocol = r2
            java.lang.String r2 = "Protocol minor version"
            int r3 = cz.msebera.android.httpclient.util.Args.notNegative(r3, r2)
            r1.major = r3
            int r2 = cz.msebera.android.httpclient.util.Args.notNegative(r4, r2)
            r1.minor = r2
            return
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            java.lang.Object r0 = super.clone()
            return r0
    }

    public int compareToVersion(cz.msebera.android.httpclient.ProtocolVersion r4) {
            r3 = this;
            java.lang.String r0 = "Protocol version"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = r3.protocol
            java.lang.String r1 = r4.protocol
            boolean r0 = r0.equals(r1)
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r3
            r2 = 1
            r1[r2] = r4
            java.lang.String r2 = "Versions for different protocols cannot be compared: %s %s"
            cz.msebera.android.httpclient.util.Args.check(r0, r2, r1)
            int r0 = r3.getMajor()
            int r1 = r4.getMajor()
            int r0 = r0 - r1
            if (r0 != 0) goto L2f
            int r0 = r3.getMinor()
            int r4 = r4.getMinor()
            int r0 = r0 - r4
        L2f:
            return r0
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof cz.msebera.android.httpclient.ProtocolVersion
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            cz.msebera.android.httpclient.ProtocolVersion r5 = (cz.msebera.android.httpclient.ProtocolVersion) r5
            java.lang.String r1 = r4.protocol
            java.lang.String r3 = r5.protocol
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L23
            int r1 = r4.major
            int r3 = r5.major
            if (r1 != r3) goto L23
            int r1 = r4.minor
            int r5 = r5.minor
            if (r1 != r5) goto L23
            goto L24
        L23:
            r0 = 0
        L24:
            return r0
    }

    public cz.msebera.android.httpclient.ProtocolVersion forVersion(int r3, int r4) {
            r2 = this;
            int r0 = r2.major
            if (r3 != r0) goto L9
            int r0 = r2.minor
            if (r4 != r0) goto L9
            return r2
        L9:
            cz.msebera.android.httpclient.ProtocolVersion r0 = new cz.msebera.android.httpclient.ProtocolVersion
            java.lang.String r1 = r2.protocol
            r0.<init>(r1, r3, r4)
            return r0
    }

    public final int getMajor() {
            r1 = this;
            int r0 = r1.major
            return r0
    }

    public final int getMinor() {
            r1 = this;
            int r0 = r1.minor
            return r0
    }

    public final java.lang.String getProtocol() {
            r1 = this;
            java.lang.String r0 = r1.protocol
            return r0
    }

    public final boolean greaterEquals(cz.msebera.android.httpclient.ProtocolVersion r2) {
            r1 = this;
            boolean r0 = r1.isComparable(r2)
            if (r0 == 0) goto Le
            int r2 = r1.compareToVersion(r2)
            if (r2 < 0) goto Le
            r2 = 1
            goto Lf
        Le:
            r2 = 0
        Lf:
            return r2
    }

    public final int hashCode() {
            r3 = this;
            java.lang.String r0 = r3.protocol
            int r0 = r0.hashCode()
            int r1 = r3.major
            r2 = 100000(0x186a0, float:1.4013E-40)
            int r1 = r1 * r2
            r0 = r0 ^ r1
            int r1 = r3.minor
            r0 = r0 ^ r1
            return r0
    }

    public boolean isComparable(cz.msebera.android.httpclient.ProtocolVersion r2) {
            r1 = this;
            if (r2 == 0) goto Le
            java.lang.String r0 = r1.protocol
            java.lang.String r2 = r2.protocol
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto Le
            r2 = 1
            goto Lf
        Le:
            r2 = 0
        Lf:
            return r2
    }

    public final boolean lessEquals(cz.msebera.android.httpclient.ProtocolVersion r2) {
            r1 = this;
            boolean r0 = r1.isComparable(r2)
            if (r0 == 0) goto Le
            int r2 = r1.compareToVersion(r2)
            if (r2 > 0) goto Le
            r2 = 1
            goto Lf
        Le:
            r2 = 0
        Lf:
            return r2
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.protocol
            r0.append(r1)
            r1 = 47
            r0.append(r1)
            int r1 = r2.major
            java.lang.String r1 = java.lang.Integer.toString(r1)
            r0.append(r1)
            r1 = 46
            r0.append(r1)
            int r1 = r2.minor
            java.lang.String r1 = java.lang.Integer.toString(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
