package com.czhj.sdk.common.network;

class PlayServicesUrlRewriter implements com.czhj.volley.toolbox.HurlStack.UrlRewriter {
    private static final java.lang.String a = "mp_tmpl_advertising_id";
    private static final java.lang.String b = "mp_tmpl_do_not_track";

    PlayServicesUrlRewriter() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String rewriteUrl(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "mp_tmpl_advertising_id"
            boolean r0 = r2.contains(r0)
            if (r0 != 0) goto L10
            java.lang.String r0 = "mp_tmpl_do_not_track"
            boolean r0 = r2.contains(r0)
            if (r0 != 0) goto L10
        L10:
            return r2
    }
}
