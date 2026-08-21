package com.kwad.components.core.offline.init.a;

import com.kwad.components.offline.api.core.api.IEncrypt;
import com.kwad.sdk.utils.ad;
import java.io.File;
import java.io.IOException;

final class c implements IEncrypt {
    c() {
    }

    @Override
    public final String getFileMD5(File file) {
        return com.kwad.sdk.utils.a.getFileMD5(file);
    }

    @Override
    public final byte[] getFileMD5Digest(File file) {
        try {
            return com.kwad.sdk.utils.a.getFileMD5Digest(file);
        } catch (IOException unused) {
            return null;
        }
    }

    @Override
    public final String getMD5(String str) {
        return ad.bp(str);
    }

    @Override
    public final String getResponseData(String str) {
        return com.kwad.sdk.core.a.d.getResponseData(str);
    }
}
