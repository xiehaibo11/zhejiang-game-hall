package com.kwad.components.core.webview.jshandler;

public final class WebCardRegisterLiveMessageListener implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c Tv;

    public static final class AdLiveMessageInfoList extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -9127181276274466179L;
        public java.util.List<com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener.AdLiveMessageInfoList.AdLiveMessageItemInfo> adLiveMessageInfos;

        public static final class AdLiveMessageItemInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
            private static final long serialVersionUID = 1943278809007082732L;
            public java.lang.String content;
            public java.lang.String userName;

            public AdLiveMessageItemInfo() {
                    r0 = this;
                    r0.<init>()
                    return
            }
        }

        public AdLiveMessageInfoList() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public WebCardRegisterLiveMessageListener() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            java.lang.String r2 = "TAGGG"
            java.lang.String r0 = "recive CallBack "
            com.kwad.sdk.core.e.c.d(r2, r0)
            r1.Tv = r3
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "registerLiveMessageListener"
            return r0
    }

    public final void k(java.util.List<com.kwad.components.offline.api.core.adlive.model.AdLiveMessageInfo> r7) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "size "
            r0.<init>(r1)
            int r2 = r7.size()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "TAGGG"
            com.kwad.sdk.core.e.c.d(r2, r0)
            com.kwad.sdk.core.webview.c.c r0 = r6.Tv
            if (r0 != 0) goto L1c
            return
        L1c:
            com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener$AdLiveMessageInfoList r0 = new com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener$AdLiveMessageInfoList
            r0.<init>()
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r0.adLiveMessageInfos = r3
            java.util.Iterator r7 = r7.iterator()
        L2c:
            boolean r3 = r7.hasNext()
            if (r3 == 0) goto L4b
            java.lang.Object r3 = r7.next()
            com.kwad.components.offline.api.core.adlive.model.AdLiveMessageInfo r3 = (com.kwad.components.offline.api.core.adlive.model.AdLiveMessageInfo) r3
            com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener$AdLiveMessageInfoList$AdLiveMessageItemInfo r4 = new com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener$AdLiveMessageInfoList$AdLiveMessageItemInfo
            r4.<init>()
            java.lang.String r5 = r3.userName
            r4.userName = r5
            java.lang.String r3 = r3.content
            r4.content = r3
            java.util.List<com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener$AdLiveMessageInfoList$AdLiveMessageItemInfo> r3 = r0.adLiveMessageInfos
            r3.add(r4)
            goto L2c
        L4b:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>(r1)
            org.json.JSONObject r1 = r0.toJson()
            java.lang.String r1 = r1.toString()
            r7.append(r1)
            java.lang.String r7 = r7.toString()
            com.kwad.sdk.core.e.c.d(r2, r7)
            com.kwad.sdk.core.webview.c.c r7 = r6.Tv
            r7.a(r0)
            return
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.Tv = r0
            return
    }
}
