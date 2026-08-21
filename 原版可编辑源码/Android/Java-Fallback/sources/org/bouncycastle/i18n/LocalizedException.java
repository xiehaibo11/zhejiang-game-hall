package org.bouncycastle.i18n;

public class LocalizedException extends java.lang.Exception {
    private java.lang.Throwable cause;
    protected org.bouncycastle.i18n.ErrorBundle message;

    public LocalizedException(org.bouncycastle.i18n.ErrorBundle r2) {
            r1 = this;
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r0 = r2.getText(r0)
            r1.<init>(r0)
            r1.message = r2
            return
    }

    public LocalizedException(org.bouncycastle.i18n.ErrorBundle r2, java.lang.Throwable r3) {
            r1 = this;
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r0 = r2.getText(r0)
            r1.<init>(r0)
            r1.message = r2
            r1.cause = r3
            return
    }

    @Override
    public java.lang.Throwable getCause() {
            r1 = this;
            java.lang.Throwable r0 = r1.cause
            return r0
    }

    public org.bouncycastle.i18n.ErrorBundle getErrorMessage() {
            r1 = this;
            org.bouncycastle.i18n.ErrorBundle r0 = r1.message
            return r0
    }
}
