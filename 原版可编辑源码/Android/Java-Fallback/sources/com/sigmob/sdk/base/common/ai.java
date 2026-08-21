package com.sigmob.sdk.base.common;

public abstract class ai extends com.sigmob.sdk.mraid.e {
    protected ai(com.sigmob.sdk.base.common.m.b r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private static boolean b(com.sigmob.sdk.base.models.rtb.MaterialMeta r2) {
            java.lang.Integer r0 = r2.creative_type
            int r0 = r0.intValue()
            com.sigmob.sdk.base.common.l r1 = com.sigmob.sdk.base.common.l.a
            int r1 = r1.a()
            if (r0 != r1) goto L28
            java.lang.String r0 = r2.endcard_md5
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L28
            java.lang.String r0 = r2.endcard_url
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L28
            java.lang.String r2 = r2.video_url
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L28
            r2 = 1
            goto L29
        L28:
            r2 = 0
        L29:
            return r2
    }

    public static boolean c(com.sigmob.sdk.base.models.BaseAdUnit r5) {
            boolean r0 = d(r5)
            com.sigmob.sdk.base.models.rtb.MaterialMeta r1 = r5.getMaterial()
            int r5 = r5.getCreativeType()
            com.sigmob.sdk.base.common.l r2 = com.sigmob.sdk.base.common.l.h
            int r2 = r2.a()
            r3 = 0
            r4 = 1
            if (r5 != r2) goto L1b
            boolean r5 = a(r1)
            goto L31
        L1b:
            boolean r5 = b(r1)
            if (r5 != 0) goto L30
            boolean r5 = c(r1)
            if (r5 != 0) goto L30
            boolean r5 = d(r1)
            if (r5 == 0) goto L2e
            goto L30
        L2e:
            r5 = r3
            goto L31
        L30:
            r5 = r4
        L31:
            if (r0 == 0) goto L36
            if (r5 == 0) goto L36
            r3 = r4
        L36:
            return r3
    }

    private static boolean c(com.sigmob.sdk.base.models.rtb.MaterialMeta r2) {
            java.lang.Integer r0 = r2.creative_type
            int r0 = r0.intValue()
            com.sigmob.sdk.base.common.l r1 = com.sigmob.sdk.base.common.l.c
            int r1 = r1.a()
            if (r0 == r1) goto L1c
            java.lang.Integer r0 = r2.creative_type
            int r0 = r0.intValue()
            com.sigmob.sdk.base.common.l r1 = com.sigmob.sdk.base.common.l.e
            int r1 = r1.a()
            if (r0 != r1) goto L34
        L1c:
            com.czhj.wire.okio.ByteString r0 = r2.html_snippet
            if (r0 == 0) goto L34
            com.czhj.wire.okio.ByteString r0 = r2.html_snippet
            int r0 = r0.size()
            r1 = 10
            if (r0 <= r1) goto L34
            java.lang.String r2 = r2.video_url
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L34
            r2 = 1
            goto L35
        L34:
            r2 = 0
        L35:
            return r2
    }

    private static boolean d(com.sigmob.sdk.base.models.rtb.MaterialMeta r2) {
            java.lang.Integer r0 = r2.creative_type
            int r0 = r0.intValue()
            com.sigmob.sdk.base.common.l r1 = com.sigmob.sdk.base.common.l.f
            int r1 = r1.a()
            if (r0 != r1) goto L20
            java.lang.String r0 = r2.html_url
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L20
            java.lang.String r2 = r2.video_url
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L20
            r2 = 1
            goto L21
        L20:
            r2 = 0
        L21:
            return r2
    }

    @Override
    protected void a(com.sigmob.sdk.base.common.m.b r1) {
            r0 = this;
            super.a(r1)
            return
    }

    @Override
    public void a(com.sigmob.sdk.base.models.BaseAdUnit r1, android.os.Bundle r2) {
            r0 = this;
            com.sigmob.sdk.base.common.f.a(r1)
            super.a(r1, r2)
            return
    }

    @Override
    public boolean a(com.sigmob.sdk.base.models.BaseAdUnit r7) {
            r6 = this;
            boolean r0 = super.a(r7)
            com.sigmob.sdk.base.models.rtb.MaterialMeta r1 = r7.getMaterial()
            int r2 = r7.getCreativeType()
            com.sigmob.sdk.base.common.l r3 = com.sigmob.sdk.base.common.l.h
            int r3 = r3.a()
            r4 = 0
            r5 = 1
            if (r2 != r3) goto L1b
            boolean r7 = a(r1)
            goto L3d
        L1b:
            int r7 = r7.getCreativeType()
            com.sigmob.sdk.base.common.l r2 = com.sigmob.sdk.base.common.l.i
            int r2 = r2.a()
            if (r7 != r2) goto L29
        L27:
            r7 = r5
            goto L3d
        L29:
            boolean r7 = b(r1)
            if (r7 != 0) goto L27
            boolean r7 = c(r1)
            if (r7 != 0) goto L27
            boolean r7 = d(r1)
            if (r7 == 0) goto L3c
            goto L27
        L3c:
            r7 = r4
        L3d:
            if (r0 == 0) goto L42
            if (r7 == 0) goto L42
            r4 = r5
        L42:
            return r4
    }

    @Override
    public void b(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            com.sigmob.sdk.base.common.f.c(r1)
            super.b(r1)
            return
    }
}
