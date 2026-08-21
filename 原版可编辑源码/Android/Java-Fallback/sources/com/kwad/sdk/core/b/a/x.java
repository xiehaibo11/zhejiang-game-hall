package com.kwad.sdk.core.b.a;

public final class x implements com.kwad.sdk.core.d<com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener.AdLiveMessageInfoList.AdLiveMessageItemInfo> {
    public x() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener.AdLiveMessageInfoList.AdLiveMessageItemInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "userName"
            java.lang.String r0 = r4.optString(r0)
            r3.userName = r0
            java.lang.String r0 = r3.userName
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.userName = r2
        L15:
            java.lang.String r0 = "content"
            java.lang.String r4 = r4.optString(r0)
            r3.content = r4
            java.lang.String r4 = r3.content
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L25
            r3.content = r2
        L25:
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener.AdLiveMessageInfoList.AdLiveMessageItemInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.userName
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.userName
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.userName
            java.lang.String r2 = "userName"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            java.lang.String r0 = r3.content
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.content
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r3 = r3.content
            java.lang.String r0 = "content"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L2f:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener$AdLiveMessageInfoList$AdLiveMessageItemInfo r1 = (com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener.AdLiveMessageInfoList.AdLiveMessageItemInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener$AdLiveMessageInfoList$AdLiveMessageItemInfo r1 = (com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener.AdLiveMessageInfoList.AdLiveMessageItemInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
