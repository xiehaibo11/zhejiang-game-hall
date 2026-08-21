package com.kwad.components.ad.reward;

import android.view.MotionEvent;
import android.view.View;
import android.widget.FrameLayout;
import com.kwad.components.core.webview.jshandler.n;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.view.AdBaseFrameLayout;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

public final class g extends com.kwad.components.ad.k.b {
    private List<AdTemplate> oN;
    private boolean oO;
    private List<com.kwad.components.core.e.d.c> oP;
    private n.b oQ;

    public g(List<AdTemplate> list, JSONObject jSONObject, n.b bVar) {
        super(jSONObject, null);
        this.oO = false;
        this.oP = new ArrayList();
        this.oN = list;
        this.oQ = bVar;
        if (list == null || list.size() <= 0) {
            return;
        }
        Iterator<AdTemplate> it = this.oN.iterator();
        while (it.hasNext()) {
            this.oP.add(new com.kwad.components.core.e.d.c(it.next()));
        }
    }

    @Override
    public final void a(FrameLayout frameLayout, AdBaseFrameLayout adBaseFrameLayout, AdTemplate adTemplate, com.kwad.components.core.e.d.c cVar, int i) {
        super.a(frameLayout, adBaseFrameLayout, this.oN, this.oP, i);
    }

    @Override
    public final void a(com.kwad.components.core.webview.a aVar) {
        super.a(aVar);
        List<AdTemplate> list = this.oN;
        com.kwad.components.core.webview.jshandler.n nVar = new com.kwad.components.core.webview.jshandler.n(new ArrayList(list.subList(1, list.size() - 1)));
        nVar.a(this.oQ);
        aVar.a(nVar);
    }

    @Override
    public final void b(com.kwad.sdk.core.webview.b bVar) {
        bVar.setAdTemplateList(this.oN);
    }

    @Override
    public final boolean bv() {
        return this.oO ? this.Hd : super.bv();
    }

    @Override
    public final void fA() {
        super.fA();
        this.cB.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public final boolean onTouch(View view, MotionEvent motionEvent) {
                return motionEvent.getAction() == 2;
            }
        });
    }

    @Override
    public final boolean fB() {
        return false;
    }

    public final void fC() {
        if (this.cG != null) {
            this.cG.rA();
        }
    }

    @Override
    public final void fD() {
        com.kwad.components.ad.reward.monitor.a.a(true, "middle_play_end_card");
    }

    @Override
    public final void fE() {
        com.kwad.components.ad.reward.monitor.a.a(true, "middle_play_end_card", o(this.mAdTemplate));
    }

    @Override
    public final void fF() {
        com.kwad.components.ad.reward.monitor.a.a(true, "middle_play_end_card", o(this.mAdTemplate), System.currentTimeMillis() - getLoadTime());
    }

    @Override
    public final String getName() {
        return "MiddlePlayEndCard";
    }

    @Override
    public final String o(AdTemplate adTemplate) {
        List<AdTemplate> list = this.oN;
        if (list == null || list.size() < 2) {
            return super.o(adTemplate);
        }
        String strAZ = com.kwad.sdk.core.response.b.b.aZ(this.oN.get(1));
        new StringBuilder("getUrl: ").append(strAZ);
        return strAZ;
    }

    public final void z(boolean z) {
        this.oO = z;
    }
}
