package com.kwad.components.offline.adLive;

import android.content.Context;
import com.kwad.components.core.offline.init.DefaultOfflineCompo;
import com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo;
import com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest;
import com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView;
import com.kwad.components.offline.api.core.adlive.IAdLivePlayModule;
import org.json.JSONObject;

public class AdLiveCompoImpl extends DefaultOfflineCompo implements com.kwad.components.core.offline.api.a.a {
    private final IAdLiveOfflineCompo mOfflineCompo;

    public AdLiveCompoImpl(IAdLiveOfflineCompo iAdLiveOfflineCompo) {
        super(iAdLiveOfflineCompo);
        this.mOfflineCompo = iAdLiveOfflineCompo;
    }

    @Override
    public IAdLiveEndRequest getAdLiveEndRequest(String str) {
        return this.mOfflineCompo.getAdLiveEndRequest(str);
    }

    @Override
    public IAdLivePlayModule getAdLivePlayModule(IAdLiveOfflineView iAdLiveOfflineView, String str, String str2) {
        return this.mOfflineCompo.getAdLivePlayModule(iAdLiveOfflineView, str, str2);
    }

    @Override
    public Class getComponentsType() {
        return AdLiveCompoImpl.class;
    }

    public IAdLiveOfflineCompo.AdLiveState getState() {
        return this.mOfflineCompo.getState();
    }

    @Override
    public IAdLiveOfflineView getView(Context context, int i) {
        return this.mOfflineCompo.getView(context, i);
    }

    @Override
    public boolean hasLiveCompoReady() {
        return this.mOfflineCompo.getState() == IAdLiveOfflineCompo.AdLiveState.READY;
    }

    public void onConfigRefresh(Context context, JSONObject jSONObject) {
        if (jSONObject != null) {
            this.mOfflineCompo.onConfigRefresh(context, jSONObject);
        }
    }
}
