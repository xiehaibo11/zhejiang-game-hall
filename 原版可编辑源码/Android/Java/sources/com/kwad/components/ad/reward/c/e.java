package com.kwad.components.ad.reward.c;

import android.text.TextUtils;

public final class e implements com.kwad.sdk.core.webview.c.a {
    private String TAG;
    private com.kwad.sdk.core.webview.c.c nA;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public String rx;
    }

    public e() {
        String str = "ExtraDialogListener" + hashCode();
        this.TAG = str;
        com.kwad.sdk.core.e.c.d(str, "create: ");
    }

    private void O(String str) {
        if (TextUtils.isEmpty(str) || this.nA == null) {
            return;
        }
        a aVar = new a();
        aVar.rx = str;
        this.nA.a(aVar);
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        com.kwad.sdk.core.e.c.d(this.TAG, "handleJsCall: " + cVar);
        this.nA = cVar;
    }

    @Override
    public final String getKey() {
        return "registerExtraDialogListener";
    }

    public final void hb() {
        com.kwad.sdk.core.e.c.d(this.TAG, "notifyDialogClose: ");
        O("close");
    }

    @Override
    public final void onDestroy() {
        com.kwad.sdk.core.e.c.d(this.TAG, "onDestroy: ");
        this.nA = null;
    }
}
