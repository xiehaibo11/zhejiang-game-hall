package com.kwad.components.ad.reward.j;

import com.kwad.components.core.webview.b.a.v;
import com.kwad.components.core.webview.jshandler.u;
import com.kwad.sdk.core.response.model.AdTemplate;
import java.util.List;

public final class l extends v {
    public final void e(List<AdTemplate> list) {
        b(new u.a(list));
    }

    @Override
    public final String getKey() {
        return "registerAggregationDataListener";
    }
}
