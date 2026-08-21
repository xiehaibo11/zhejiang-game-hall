package com.kwad.components.offline.tk.a;

import android.view.View;
import com.kwad.components.offline.api.tk.IOfflineCompoTachikomaView;
import com.kwad.sdk.components.j;
import com.kwad.sdk.components.k;
import com.kwad.sdk.components.l;
import com.kwad.sdk.utils.ao;
import java.util.Map;

public final class g implements l {
    private final IOfflineCompoTachikomaView ZS;

    public g(IOfflineCompoTachikomaView iOfflineCompoTachikomaView) {
        ao.checkNotNull(iOfflineCompoTachikomaView);
        this.ZS = iOfflineCompoTachikomaView;
    }

    @Override
    public final void a(j jVar) {
        if (jVar != null) {
            this.ZS.registerHostActionHandler(new c(jVar));
        }
    }

    @Override
    public final void a(String str, String str2, k kVar) {
        this.ZS.execute(str, str2, new f(kVar));
    }

    @Override
    public final void b(com.kwad.sdk.core.webview.c.g gVar) {
        if (gVar == null) {
            return;
        }
        this.ZS.registerTKBridge(new d(gVar));
    }

    @Override
    public final void c(com.kwad.sdk.core.webview.c.a aVar) {
        if (aVar == null) {
            return;
        }
        this.ZS.registerJsBridge(new b(aVar));
    }

    @Override
    public final Object execute(String str) {
        return this.ZS.execute(str);
    }

    @Override
    public final int getUniqId() {
        return this.ZS.getUniqId();
    }

    @Override
    public final View getView() {
        return this.ZS.getView();
    }

    @Override
    public final void onDestroy() {
        this.ZS.onDestroy();
    }

    @Override
    public final void setCustomEnv(Map<String, Object> map) {
        this.ZS.setCustomEnv(map);
    }
}
