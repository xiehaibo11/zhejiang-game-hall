package com.kwad.components.core.offline.init.a;

final class l implements com.kwad.components.offline.api.core.api.IZipper {
    l() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final boolean unZip(java.io.InputStream r1, java.lang.String r2) {
            r0 = this;
            boolean r1 = com.kwad.sdk.utils.br.unZip(r1, r2)
            return r1
    }

    @Override
    public final boolean zip(java.io.File r1, java.io.File r2) {
            r0 = this;
            boolean r1 = com.kwad.sdk.utils.br.zip(r1, r2)
            return r1
    }

    @Override
    public final void zipFile(java.io.File r1) {
            r0 = this;
            com.kwad.sdk.utils.br.zipFile(r1)
            return
    }
}
