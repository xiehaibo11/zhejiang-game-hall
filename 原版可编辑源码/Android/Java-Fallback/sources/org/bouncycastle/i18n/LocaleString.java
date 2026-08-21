package org.bouncycastle.i18n;

public class LocaleString extends org.bouncycastle.i18n.LocalizedMessage {
    public LocaleString(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public LocaleString(java.lang.String r1, java.lang.String r2, java.lang.String r3) throws java.lang.NullPointerException, java.io.UnsupportedEncodingException {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public java.lang.String getLocaleString(java.util.Locale r2) {
            r1 = this;
            r0 = 0
            java.lang.String r2 = r1.getEntry(r0, r2, r0)
            return r2
    }
}
