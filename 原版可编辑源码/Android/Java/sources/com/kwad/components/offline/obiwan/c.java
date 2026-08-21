package com.kwad.components.offline.obiwan;

import com.kwad.components.core.offline.init.a.i;
import com.kwad.components.offline.api.core.api.IOfflineCompoWrapper;
import com.kwad.components.offline.api.obiwan.IObiwanOfflineCompo;
import com.kwad.components.offline.api.obiwan.IObiwanOfflineCompoInitConfig;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.components.DevelopMangerComponents;
import com.kwad.sdk.core.config.d;
import com.kwad.sdk.utils.av;

public final class c implements IObiwanOfflineCompoInitConfig {
    @Override
    public final String getLogDirPath() {
        return av.cM(KsAdSDKImpl.get().getContext()).getAbsolutePath();
    }

    @Override
    public final String getLogObiwanData() {
        return d.getLogObiwanData();
    }

    @Override
    public final long getLogObiwanStorageQuota() {
        com.kwad.sdk.components.c.f(DevelopMangerComponents.class);
        return d.a(com.kwad.sdk.core.config.c.alT);
    }

    @Override
    public final boolean isLogObiwanEnableNow() {
        return d.a(com.kwad.sdk.core.config.c.alR);
    }

    @Override
    public final boolean isLogObiwanRecordAll() {
        return d.a(com.kwad.sdk.core.config.c.alS);
    }

    @Override
    public final IOfflineCompoWrapper wrapper() {
        return new i(IObiwanOfflineCompo.PACKAGE_NAME);
    }
}
