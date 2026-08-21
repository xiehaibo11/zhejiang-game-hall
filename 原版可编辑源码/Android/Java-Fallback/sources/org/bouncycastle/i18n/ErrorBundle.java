package org.bouncycastle.i18n;

public class ErrorBundle extends org.bouncycastle.i18n.MessageBundle {
    public static final java.lang.String DETAIL_ENTRY = "details";
    public static final java.lang.String SUMMARY_ENTRY = "summary";

    public ErrorBundle(java.lang.String r1, java.lang.String r2) throws java.lang.NullPointerException {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public ErrorBundle(java.lang.String r1, java.lang.String r2, java.lang.String r3) throws java.lang.NullPointerException, java.io.UnsupportedEncodingException {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public ErrorBundle(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.Object[] r4) throws java.lang.NullPointerException, java.io.UnsupportedEncodingException {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    public ErrorBundle(java.lang.String r1, java.lang.String r2, java.lang.Object[] r3) throws java.lang.NullPointerException {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public java.lang.String getDetail(java.util.Locale r3) throws org.bouncycastle.i18n.MissingEntryException {
            r2 = this;
            java.util.TimeZone r0 = java.util.TimeZone.getDefault()
            java.lang.String r1 = "details"
            java.lang.String r3 = r2.getEntry(r1, r3, r0)
            return r3
    }

    public java.lang.String getDetail(java.util.Locale r2, java.util.TimeZone r3) throws org.bouncycastle.i18n.MissingEntryException {
            r1 = this;
            java.lang.String r0 = "details"
            java.lang.String r2 = r1.getEntry(r0, r2, r3)
            return r2
    }

    public java.lang.String getSummary(java.util.Locale r3) throws org.bouncycastle.i18n.MissingEntryException {
            r2 = this;
            java.util.TimeZone r0 = java.util.TimeZone.getDefault()
            java.lang.String r1 = "summary"
            java.lang.String r3 = r2.getEntry(r1, r3, r0)
            return r3
    }

    public java.lang.String getSummary(java.util.Locale r2, java.util.TimeZone r3) throws org.bouncycastle.i18n.MissingEntryException {
            r1 = this;
            java.lang.String r0 = "summary"
            java.lang.String r2 = r1.getEntry(r0, r2, r3)
            return r2
    }
}
