package com.kwad.components.core.c;

import com.kwad.sdk.core.response.model.AdTemplate;
import com.xiaomi.mipush.sdk.Constants;
import java.lang.ref.WeakReference;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes2.dex */
public class f {
    private static volatile f IJ;
    private ConcurrentHashMap<String, WeakReference<Object>> II = new ConcurrentHashMap<>();

    private static String K(AdTemplate adTemplate) {
        return com.kwad.sdk.core.response.b.d.bZ(adTemplate) + Constants.ACCEPT_TIME_SEPARATOR_SERVER + com.kwad.sdk.core.response.b.d.cq(adTemplate);
    }

    private static String b(g gVar) {
        return gVar.mv() + Constants.ACCEPT_TIME_SEPARATOR_SERVER + gVar.mB();
    }

    public static f mu() {
        if (IJ == null) {
            synchronized (f.class) {
                if (IJ == null) {
                    IJ = new f();
                }
            }
        }
        return IJ;
    }

    public final void J(AdTemplate adTemplate) {
        this.II.remove(K(adTemplate));
    }

    public final boolean a(g gVar) {
        String strB = b(gVar);
        com.kwad.sdk.core.e.c.d("AdMemCachePool", "contains key: " + strB);
        boolean z = false;
        if (!this.II.containsKey(strB)) {
            return false;
        }
        WeakReference<Object> weakReference = this.II.get(strB);
        if (weakReference != null && weakReference.get() != null) {
            z = true;
        }
        if (z) {
            com.kwad.sdk.core.e.c.d("AdMemCachePool", "contains ad: " + weakReference.get());
        }
        return z;
    }

    public final void add(Object obj) {
        if (obj instanceof com.kwad.components.core.internal.api.a) {
            this.II.put(K(((com.kwad.components.core.internal.api.a) obj).getAdTemplate()), new WeakReference<>(obj));
        }
    }
}
