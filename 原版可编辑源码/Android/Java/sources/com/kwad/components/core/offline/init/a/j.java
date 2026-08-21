package com.kwad.components.core.offline.init.a;

import com.kwad.components.offline.api.core.network.IIdc;

public final class j implements IIdc {
    @Override
    public final String hostForAPI(String str) {
        if (str.equals("api")) {
            return com.kwad.sdk.h.wZ();
        }
        return "https://" + com.kwad.sdk.core.network.idc.a.Bo().P(str, null);
    }
}
