package com.kwad.sdk.core.response.model;

public class TemplateConfig extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b, java.io.Serializable {
    private static final long serialVersionUID = -6943205584670122269L;
    public java.lang.String h5Checksum;
    public java.lang.String h5Url;
    public java.lang.String h5Version;

    public TemplateConfig() {
            r0 = this;
            r0.<init>()
            return
    }

    public boolean notEmpty() {
            r1 = this;
            java.lang.String r0 = r1.h5Url
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1a
            java.lang.String r0 = r1.h5Version
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1a
            java.lang.String r0 = r1.h5Checksum
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1a
            r0 = 1
            return r0
        L1a:
            r0 = 0
            return r0
    }
}
