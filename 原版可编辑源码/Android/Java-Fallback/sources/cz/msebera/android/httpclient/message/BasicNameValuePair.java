package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.Immutable
public class BasicNameValuePair implements cz.msebera.android.httpclient.NameValuePair, java.lang.Cloneable, java.io.Serializable {
    private static final long serialVersionUID = -6437800749411518984L;
    private final java.lang.String name;
    private final java.lang.String value;

    public BasicNameValuePair(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Name"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r2 = (java.lang.String) r2
            r1.name = r2
            r1.value = r3
            return
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            java.lang.Object r0 = super.clone()
            return r0
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof cz.msebera.android.httpclient.NameValuePair
            r2 = 0
            if (r1 == 0) goto L22
            cz.msebera.android.httpclient.message.BasicNameValuePair r5 = (cz.msebera.android.httpclient.message.BasicNameValuePair) r5
            java.lang.String r1 = r4.name
            java.lang.String r3 = r5.name
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L20
            java.lang.String r1 = r4.value
            java.lang.String r5 = r5.value
            boolean r5 = cz.msebera.android.httpclient.util.LangUtils.equals(r1, r5)
            if (r5 == 0) goto L20
            goto L21
        L20:
            r0 = 0
        L21:
            return r0
        L22:
            return r2
    }

    @Override
    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }

    @Override
    public java.lang.String getValue() {
            r1 = this;
            java.lang.String r0 = r1.value
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.lang.String r0 = r2.name
            r1 = 17
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r1, r0)
            java.lang.String r1 = r2.value
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.String r0 = r2.value
            if (r0 != 0) goto L7
            java.lang.String r0 = r2.name
            return r0
        L7:
            java.lang.String r0 = r2.name
            int r0 = r0.length()
            int r0 = r0 + 1
            java.lang.String r1 = r2.value
            int r1 = r1.length()
            int r0 = r0 + r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            java.lang.String r0 = r2.name
            r1.append(r0)
            java.lang.String r0 = "="
            r1.append(r0)
            java.lang.String r0 = r2.value
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
    }
}
