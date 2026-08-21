package com.czhj.sdk.common.network;

import com.czhj.volley.toolbox.HurlStack;

class PlayServicesUrlRewriter implements HurlStack.UrlRewriter {
    private static final String a = "mp_tmpl_advertising_id";
    private static final String b = "mp_tmpl_do_not_track";

    PlayServicesUrlRewriter() {
    }

    @Override
    public String rewriteUrl(String str) {
        if (str.contains(a) || !str.contains(b)) {
        }
        return str;
    }
}
