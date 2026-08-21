package com.kwad.components.core.offline.init.a;

import android.text.TextUtils;
import com.kwad.components.offline.api.core.api.ICache;
import com.kwad.sdk.KsAdSDKImpl;
import java.io.File;

final class b implements ICache {
    b() {
    }

    @Override
    public final String getPreCacheUrl(String str) {
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        int iZz = com.kwad.sdk.core.config.d.zz();
        if (iZz >= 0) {
            return iZz == 0 ? str : com.kwad.sdk.core.videocache.c.a.bj(KsAdSDKImpl.get().getContext()).dN(str);
        }
        File fileBR = com.kwad.sdk.core.diskcache.b.a.Au().bR(str);
        if (fileBR == null || !fileBR.exists()) {
            return null;
        }
        return fileBR.getAbsolutePath();
    }
}
