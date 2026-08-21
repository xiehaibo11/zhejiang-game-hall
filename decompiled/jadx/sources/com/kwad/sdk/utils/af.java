package com.kwad.sdk.utils;

import java.util.Iterator;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public final class af {
    private Map<String, com.kwad.sdk.core.webview.a> aIP;
    private Map<String, com.kwad.sdk.core.webview.c.c> aIQ;

    public final void a(String str, com.kwad.sdk.core.webview.a aVar) {
        this.aIP.put(str, aVar);
    }

    public final void b(String str, com.kwad.sdk.core.webview.c.c cVar) {
        this.aIQ.put(str, cVar);
    }

    public final com.kwad.sdk.core.webview.a fy(String str) {
        return this.aIP.get(str);
    }

    public final com.kwad.sdk.core.webview.c.c fz(String str) {
        return this.aIQ.get(str);
    }

    public final void release() {
        Iterator<com.kwad.sdk.core.webview.a> it = this.aIP.values().iterator();
        while (it.hasNext()) {
            it.next().nL();
        }
        this.aIP.clear();
        this.aIQ.clear();
    }
}
