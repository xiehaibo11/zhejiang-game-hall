package com.kwad.components.core.offline.init.a;

import com.kwad.components.offline.api.core.api.IZipper;
import com.kwad.sdk.utils.br;
import java.io.File;
import java.io.InputStream;

final class l implements IZipper {
    l() {
    }

    @Override
    public final boolean unZip(InputStream inputStream, String str) {
        return br.unZip(inputStream, str);
    }

    @Override
    public final boolean zip(File file, File file2) {
        return br.zip(file, file2);
    }

    @Override
    public final void zipFile(File file) {
        br.zipFile(file);
    }
}
