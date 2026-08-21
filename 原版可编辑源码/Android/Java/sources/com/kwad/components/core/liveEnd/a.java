package com.kwad.components.core.liveEnd;

import android.text.TextUtils;
import com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest;
import com.kwad.sdk.core.network.b;
import com.kwad.sdk.utils.aq;
import java.util.Map;

public final class a extends b {
    private IAdLiveEndRequest fH;

    public a(IAdLiveEndRequest iAdLiveEndRequest) {
        this.fH = iAdLiveEndRequest;
    }

    @Override
    public final void buildBaseBody() {
    }

    @Override
    public final void buildBaseHeader() {
    }

    @Override
    public final Map<String, String> getBodyMap() {
        return this.fH.getBodyMap();
    }

    @Override
    public final Map<String, String> getHeader() {
        IAdLiveEndRequest iAdLiveEndRequest = this.fH;
        if (iAdLiveEndRequest == null || iAdLiveEndRequest.getHeader() == null || this.fH.getHeader().size() <= 0) {
            return super.getHeader();
        }
        for (String str : this.fH.getHeader().keySet()) {
            if (!TextUtils.isEmpty(this.fH.getHeader().get(str))) {
                addHeader(str, this.fH.getHeader().get(str));
            }
        }
        return super.getHeader();
    }

    @Override
    public final String getUrl() {
        return aq.appendUrl(this.fH.getUrl(), this.fH.getUrlParam());
    }
}
