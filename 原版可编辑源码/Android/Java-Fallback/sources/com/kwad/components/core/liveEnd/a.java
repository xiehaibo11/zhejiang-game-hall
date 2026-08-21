package com.kwad.components.core.liveEnd;

public final class a extends com.kwad.sdk.core.network.b {
    private com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest fH;

    public a(com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r1) {
            r0 = this;
            r0.<init>()
            r0.fH = r1
            return
    }

    @Override
    public final void buildBaseBody() {
            r0 = this;
            return
    }

    @Override
    public final void buildBaseHeader() {
            r0 = this;
            return
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.String> getBodyMap() {
            r1 = this;
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r0 = r1.fH
            java.util.Map r0 = r0.getBodyMap()
            return r0
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.String> getHeader() {
            r3 = this;
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r0 = r3.fH
            if (r0 == 0) goto L58
            java.util.Map r0 = r0.getHeader()
            if (r0 == 0) goto L58
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r0 = r3.fH
            java.util.Map r0 = r0.getHeader()
            int r0 = r0.size()
            if (r0 > 0) goto L17
            goto L58
        L17:
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r0 = r3.fH
            java.util.Map r0 = r0.getHeader()
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        L25:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L53
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r2 = r3.fH
            java.util.Map r2 = r2.getHeader()
            java.lang.Object r2 = r2.get(r1)
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L25
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r2 = r3.fH
            java.util.Map r2 = r2.getHeader()
            java.lang.Object r2 = r2.get(r1)
            java.lang.String r2 = (java.lang.String) r2
            r3.addHeader(r1, r2)
            goto L25
        L53:
            java.util.Map r0 = super.getHeader()
            return r0
        L58:
            java.util.Map r0 = super.getHeader()
            return r0
    }

    @Override
    public final java.lang.String getUrl() {
            r2 = this;
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r0 = r2.fH
            java.lang.String r0 = r0.getUrl()
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r1 = r2.fH
            java.util.Map r1 = r1.getUrlParam()
            java.lang.String r0 = com.kwad.sdk.utils.aq.appendUrl(r0, r1)
            return r0
    }
}
