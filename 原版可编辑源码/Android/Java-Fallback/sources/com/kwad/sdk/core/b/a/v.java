package com.kwad.sdk.core.b.a;

public final class v implements com.kwad.sdk.core.d<com.kwad.components.core.webview.jshandler.WebCardRegisterLiveShopListener.AdLiveItemShopInfo> {
    public v() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.webview.jshandler.WebCardRegisterLiveShopListener.AdLiveItemShopInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "status"
            int r0 = r4.optInt(r0)
            r3.status = r0
            java.lang.String r0 = "title"
            java.lang.String r0 = r4.optString(r0)
            r3.title = r0
            java.lang.String r0 = r3.title
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L1d
            r3.title = r2
        L1d:
            java.lang.String r0 = "url"
            java.lang.String r0 = r4.optString(r0)
            r3.url = r0
            java.lang.String r0 = r3.url
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L2d
            r3.url = r2
        L2d:
            java.lang.String r0 = "price"
            java.lang.String r4 = r4.optString(r0)
            r3.price = r4
            java.lang.String r4 = r3.price
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L3d
            r3.price = r2
        L3d:
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.webview.jshandler.WebCardRegisterLiveShopListener.AdLiveItemShopInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            int r0 = r3.status
            if (r0 == 0) goto L12
            int r0 = r3.status
            java.lang.String r1 = "status"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L12:
            java.lang.String r0 = r3.title
            java.lang.String r1 = ""
            if (r0 == 0) goto L27
            java.lang.String r0 = r3.title
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L27
            java.lang.String r0 = r3.title
            java.lang.String r2 = "title"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L27:
            java.lang.String r0 = r3.url
            if (r0 == 0) goto L3a
            java.lang.String r0 = r3.url
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3a
            java.lang.String r0 = r3.url
            java.lang.String r2 = "url"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L3a:
            java.lang.String r0 = r3.price
            if (r0 == 0) goto L4d
            java.lang.String r0 = r3.price
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L4d
            java.lang.String r3 = r3.price
            java.lang.String r0 = "price"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L4d:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.WebCardRegisterLiveShopListener$AdLiveItemShopInfo r1 = (com.kwad.components.core.webview.jshandler.WebCardRegisterLiveShopListener.AdLiveItemShopInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.WebCardRegisterLiveShopListener$AdLiveItemShopInfo r1 = (com.kwad.components.core.webview.jshandler.WebCardRegisterLiveShopListener.AdLiveItemShopInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
