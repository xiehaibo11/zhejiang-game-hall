package com.kwad.components.core.offline.init.a;

final class c implements com.kwad.components.offline.api.core.api.IEncrypt {
    c() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.lang.String getFileMD5(java.io.File r1) {
            r0 = this;
            java.lang.String r1 = com.kwad.sdk.utils.a.getFileMD5(r1)
            return r1
    }

    @Override
    public final byte[] getFileMD5Digest(java.io.File r1) {
            r0 = this;
            byte[] r1 = com.kwad.sdk.utils.a.getFileMD5Digest(r1)     // Catch: java.io.IOException -> L5
            return r1
        L5:
            r1 = 0
            return r1
    }

    @Override
    public final java.lang.String getMD5(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = com.kwad.sdk.utils.ad.bp(r1)
            return r1
    }

    @Override
    public final java.lang.String getResponseData(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = com.kwad.sdk.core.a.d.getResponseData(r1)
            return r1
    }
}
