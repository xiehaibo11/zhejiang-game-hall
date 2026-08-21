package com.kwad.sdk.core.webview;

public class b {
    public android.view.ViewGroup MT;
    public android.webkit.WebView Ms;
    public com.kwad.sdk.widget.e aye;
    public com.kwad.sdk.utils.af ayf;
    public boolean ayg;
    public boolean ayh;
    private java.util.List<com.kwad.sdk.core.response.model.AdTemplate> ayi;
    public org.json.JSONObject mReportExtData;
    public int mScreenOrientation;

    public b() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.ayg = r0
            r1.ayh = r0
            r0 = 0
            r1.ayi = r0
            return
    }

    public final java.util.List<com.kwad.sdk.core.response.model.AdTemplate> DX() {
            r1 = this;
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r0 = r1.ayi
            return r0
    }

    public final boolean DY() {
            r1 = this;
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r0 = r1.ayi
            if (r0 == 0) goto Ld
            int r0 = r0.size()
            if (r0 != 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            return r0
        Ld:
            r0 = 1
            return r0
    }

    public final com.kwad.sdk.core.response.model.AdTemplate getAdTemplate() {
            r2 = this;
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r0 = r2.ayi
            if (r0 == 0) goto L15
            int r0 = r0.size()
            if (r0 != 0) goto Lb
            goto L15
        Lb:
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r0 = r2.ayi
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.kwad.sdk.core.response.model.AdTemplate r0 = (com.kwad.sdk.core.response.model.AdTemplate) r0
            return r0
        L15:
            r0 = 0
            return r0
    }

    public final void setAdTemplate(com.kwad.sdk.core.response.model.AdTemplate r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.ayi = r0
            r0.add(r2)
            return
    }

    public final void setAdTemplateList(java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r3) {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r3.size()
            r0.<init>(r1)
            java.util.Iterator r3 = r3.iterator()
        Ld:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r3.next()
            com.kwad.sdk.core.response.model.AdTemplate r1 = (com.kwad.sdk.core.response.model.AdTemplate) r1
            r0.add(r1)
            goto Ld
        L1d:
            r2.ayi = r0
            return
    }
}
