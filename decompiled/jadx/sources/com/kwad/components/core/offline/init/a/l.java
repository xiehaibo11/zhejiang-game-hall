package com.kwad.components.core.offline.init.a;

import com.kwad.components.offline.api.core.api.IZipper;
import com.kwad.sdk.utils.br;
import java.io.File;
import java.io.InputStream;

/* JADX INFO: loaded from: classes2.dex */
final class l implements IZipper {
    l() {
    }

    @Override // com.kwad.components.offline.api.core.api.IZipper
    public final boolean unZip(InputStream inputStream, String str) {
        return br.unZip(inputStream, str);
    }

    @Override // com.kwad.components.offline.api.core.api.IZipper
    public final boolean zip(File file, File file2) {
        return br.zip(file, file2);
    }

    @Override // com.kwad.components.offline.api.core.api.IZipper
    public final void zipFile(File file) {
        br.zipFile(file);
    }
}
