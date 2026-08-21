package org.bouncycastle.i18n;

public class TextBundle extends org.bouncycastle.i18n.LocalizedMessage {
    public static final java.lang.String TEXT_ENTRY = "text";

    public TextBundle(java.lang.String r1, java.lang.String r2) throws java.lang.NullPointerException {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public TextBundle(java.lang.String r1, java.lang.String r2, java.lang.String r3) throws java.lang.NullPointerException, java.io.UnsupportedEncodingException {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public TextBundle(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.Object[] r4) throws java.lang.NullPointerException, java.io.UnsupportedEncodingException {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    public TextBundle(java.lang.String r1, java.lang.String r2, java.lang.Object[] r3) throws java.lang.NullPointerException {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public java.lang.String getText(java.util.Locale r3) throws org.bouncycastle.i18n.MissingEntryException {
            r2 = this;
            java.util.TimeZone r0 = java.util.TimeZone.getDefault()
            java.lang.String r1 = "text"
            java.lang.String r3 = r2.getEntry(r1, r3, r0)
            return r3
    }

    public java.lang.String getText(java.util.Locale r2, java.util.TimeZone r3) throws org.bouncycastle.i18n.MissingEntryException {
            r1 = this;
            java.lang.String r0 = "text"
            java.lang.String r2 = r1.getEntry(r0, r2, r3)
            return r2
    }
}
