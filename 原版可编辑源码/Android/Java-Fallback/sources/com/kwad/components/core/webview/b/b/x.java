package com.kwad.components.core.webview.b.b;

public class x extends com.kwad.sdk.core.response.a.a {
    public java.lang.String Xj;
    public int errorCode;
    public java.lang.String errorReason;
    public int nM;

    public x() {
            r0 = this;
            r0.<init>()
            return
    }

    public final boolean isFailed() {
            r2 = this;
            java.lang.String r0 = r2.Xj
            java.lang.String r1 = "failed"
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            return r0
    }

    public final boolean rU() {
            r2 = this;
            java.lang.String r0 = r2.Xj
            java.lang.String r1 = "start"
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            return r0
    }

    public final boolean rV() {
            r2 = this;
            java.lang.String r0 = r2.Xj
            java.lang.String r1 = "end"
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            return r0
    }

    public final boolean rW() {
            r2 = this;
            java.lang.String r0 = r2.Xj
            java.lang.String r1 = "progress"
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            return r0
    }

    public final int rX() {
            r2 = this;
            java.lang.String r0 = r2.errorReason
            if (r0 == 0) goto La
            long r0 = java.lang.Long.parseLong(r0)
            int r0 = (int) r0
            return r0
        La:
            r0 = 0
            return r0
    }
}
