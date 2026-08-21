package com.kwad.components.offline.adLive;

import android.content.Context;
import com.kwad.components.core.offline.init.a.i;
import com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo;
import com.kwad.components.offline.api.adLive.IAdLiveOfflineCompoInitConfig;
import com.kwad.components.offline.api.core.adlive.listener.AdLiveHttpRequestListenerDelegate;
import com.kwad.components.offline.api.core.api.IOfflineCompoWrapper;
import com.kwad.components.offline.api.core.soloader.ISoLoader;
import com.kwad.components.offline.api.core.soloader.SoLoadListener;
import com.kwad.sdk.core.network.c;
import com.kwad.sdk.g;
import com.kwad.sdk.utils.aq;
import java.util.Map;

public final class b implements IAdLiveOfflineCompoInitConfig {
    @Override
    public final AdLiveHttpRequestListenerDelegate getAdLiveHttpRequestListenerDelegate() {
        return new AdLiveHttpRequestListenerDelegate() {
            @Override
            public final c doPost(String str, Map<String, String> map, Map<String, String> map2, Map<String, String> map3) {
                try {
                    return g.wX().doPost(aq.appendUrl(str, map), map2, map3);
                } catch (Throwable unused) {
                    return null;
                }
            }
        };
    }

    @Override
    public final ISoLoader soLoader() {
        return new ISoLoader() {
            @Override
            public final void loadSo(Context context, SoLoadListener soLoadListener) {
                com.kwad.components.offline.adLive.a.a.a(context, soLoadListener);
            }
        };
    }

    @Override
    public final IOfflineCompoWrapper wrapper() {
        return new i(IAdLiveOfflineCompo.PACKAGE_NAME);
    }
}
