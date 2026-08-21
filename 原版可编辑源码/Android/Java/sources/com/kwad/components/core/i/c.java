package com.kwad.components.core.i;

import com.kwad.sdk.core.response.model.AdTemplate;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public final class c {
    private Object KS;
    private AdTemplate KT;

    public c(AdTemplate adTemplate, int i) {
        this.KS = null;
        try {
            this.KS = new b(adTemplate, i);
        } catch (Throwable unused) {
            this.KT = adTemplate;
        }
    }

    public static List<AdTemplate> j(List<c> list) {
        ArrayList arrayList = new ArrayList();
        Iterator<c> it = list.iterator();
        while (it.hasNext()) {
            arrayList.add(it.next().getAdTemplate());
        }
        return arrayList;
    }

    public final AdTemplate getAdTemplate() {
        AdTemplate adTemplate;
        Object obj = this.KS;
        if (obj != null) {
            try {
                adTemplate = ((b) obj).getAdTemplate();
            } catch (Exception unused) {
                adTemplate = null;
            }
        } else {
            adTemplate = null;
        }
        return adTemplate == null ? this.KT : adTemplate;
    }

    public final Object getHost() {
        return this.KS;
    }
}
