package com.kwad.components.core.webview.jshandler;

/* JADX INFO: loaded from: classes2.dex */
public final class ar implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c Tv;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public int Vx;

        public a(int i) {
            this.Vx = i;
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        this.Tv = cVar;
    }

    public final void ai(boolean z) {
        if (this.Tv != null) {
            this.Tv.a(new a(z ? 1 : 0));
        } else {
            com.kwad.sdk.core.e.c.d("WebCardRewardTaskStatusHandler", "notifyTaskStatus , status:" + (z ? 1 : 0));
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "rewardTaskStatus";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
    }
}
