package com.kwad.components.core.offline.api.b.a;

import com.kwad.sdk.core.response.model.AdTemplate;
import java.util.HashMap;
import java.util.Map;

public final class a {
    private static final Map<Integer, AdTemplate> Lp = new HashMap();

    public static void a(int i, AdTemplate adTemplate) {
        Lp.put(Integer.valueOf(i), adTemplate);
    }

    public static AdTemplate au(int i) {
        return Lp.get(Integer.valueOf(i));
    }

    public static void av(int i) {
        Lp.remove(Integer.valueOf(i));
    }
}
