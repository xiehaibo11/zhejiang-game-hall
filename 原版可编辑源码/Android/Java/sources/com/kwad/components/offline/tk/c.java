package com.kwad.components.offline.tk;

import android.content.Context;
import com.kwad.components.core.offline.init.a.i;
import com.kwad.components.offline.api.core.api.IOfflineCompoWrapper;
import com.kwad.components.offline.api.core.soloader.ISoLoader;
import com.kwad.components.offline.api.core.soloader.SoLoadListener;
import com.kwad.components.offline.api.tk.ITkOfflineCompo;
import com.kwad.components.offline.api.tk.ITkOfflineCompoInitConfig;
import com.kwad.sdk.components.DevelopMangerComponents;
import com.kwad.sdk.core.config.d;
import com.kwad.sdk.utils.av;

public final class c implements ITkOfflineCompoInitConfig {
    @Override
    public final String getSpKeyTkSoLoadTimes() {
        return "tk_so_load_times";
    }

    @Override
    public final String getSpNameSoLoadTimes() {
        return "ksadsdk_so_load_times";
    }

    @Override
    public final String getTkJsFileDir(Context context, String str) {
        return av.getTkJsFileDir(context, str);
    }

    @Override
    public final String getTkJsRootDir(Context context) {
        return av.getTkJsRootDir(context);
    }

    @Override
    public final String getTkVersion() {
        return "5.0.3";
    }

    @Override
    public final boolean isCanUseTk() {
        return d.isCanUseTk();
    }

    @Override
    public final boolean isLocalDebugEnable() {
        com.kwad.sdk.components.c.f(DevelopMangerComponents.class);
        return false;
    }

    @Override
    public final ISoLoader soLoader() {
        return new ISoLoader() {
            @Override
            public final void loadSo(Context context, SoLoadListener soLoadListener) {
                com.kwad.components.offline.tk.b.a.a(context, soLoadListener);
            }
        };
    }

    @Override
    public final boolean useTkLite() {
        return com.kwad.components.offline.tk.b.a.useTkLite();
    }

    @Override
    public final IOfflineCompoWrapper wrapper() {
        return new i(ITkOfflineCompo.PACKAGE_NAME);
    }
}
