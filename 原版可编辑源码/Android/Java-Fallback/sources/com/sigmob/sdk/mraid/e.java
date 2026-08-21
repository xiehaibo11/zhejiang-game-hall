package com.sigmob.sdk.mraid;

public class e extends com.sigmob.sdk.base.common.v {
    protected e(com.sigmob.sdk.base.common.m.b r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    protected static boolean a(com.sigmob.sdk.base.models.rtb.MaterialMeta r2) {
            java.lang.Integer r0 = r2.creative_type
            int r0 = r0.intValue()
            com.sigmob.sdk.base.common.l r1 = com.sigmob.sdk.base.common.l.h
            int r1 = r1.a()
            if (r0 != r1) goto L26
            java.lang.String r0 = r2.html_url
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L24
            com.czhj.wire.okio.ByteString r0 = r2.html_snippet
            if (r0 == 0) goto L26
            com.czhj.wire.okio.ByteString r2 = r2.html_snippet
            int r2 = r2.size()
            r0 = 10
            if (r2 <= r0) goto L26
        L24:
            r2 = 1
            goto L27
        L26:
            r2 = 0
        L27:
            return r2
    }

    public static boolean d(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r1.getMaterial()
            if (r0 == 0) goto L13
            java.lang.String r1 = r1.getCrid()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L11
            goto L13
        L11:
            r1 = 1
            return r1
        L13:
            r1 = 0
            return r1
    }

    @Override
    protected void a(com.sigmob.sdk.base.common.m.b r1) {
            r0 = this;
            r0.b = r1
            return
    }

    @Override
    public void a(java.util.Map<java.lang.String, java.lang.Object> r1, com.sigmob.sdk.base.models.BaseAdUnit r2) {
            r0 = this;
            super.a(r1, r2)
            return
    }

    @Override
    protected boolean a(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            boolean r1 = d(r1)
            return r1
    }

    @Override
    public void b(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            super.b(r1)
            return
    }
}
