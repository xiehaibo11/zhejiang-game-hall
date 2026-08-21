package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.Immutable
public class BasicHeader implements cz.msebera.android.httpclient.Header, java.lang.Cloneable, java.io.Serializable {
    private static final long serialVersionUID = -5427236326487562174L;
    private final java.lang.String name;
    private final java.lang.String value;

    public BasicHeader(java.lang.String r2, java.lang.String r3) {
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

    @Override
    public cz.msebera.android.httpclient.HeaderElement[] getElements() throws cz.msebera.android.httpclient.ParseException {
            r2 = this;
            java.lang.String r0 = r2.value
            if (r0 == 0) goto La
            r1 = 0
            cz.msebera.android.httpclient.HeaderElement[] r0 = cz.msebera.android.httpclient.message.BasicHeaderValueParser.parseElements(r0, r1)
            return r0
        La:
            r0 = 0
            cz.msebera.android.httpclient.HeaderElement[] r0 = new cz.msebera.android.httpclient.HeaderElement[r0]
            return r0
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

    public java.lang.String toString() {
            r2 = this;
            cz.msebera.android.httpclient.message.BasicLineFormatter r0 = cz.msebera.android.httpclient.message.BasicLineFormatter.INSTANCE
            r1 = 0
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r0.formatHeader(r1, r2)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
