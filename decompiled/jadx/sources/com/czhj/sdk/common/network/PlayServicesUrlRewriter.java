package com.czhj.sdk.common.network;

import com.czhj.volley.toolbox.HurlStack;

/* JADX INFO: loaded from: classes.dex */
class PlayServicesUrlRewriter implements HurlStack.UrlRewriter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f1786a = "mp_tmpl_advertising_id";
    private static final String b = "mp_tmpl_do_not_track";

    PlayServicesUrlRewriter() {
    }

    @Override // com.czhj.volley.toolbox.HurlStack.UrlRewriter
    public String rewriteUrl(String str) {
        if (str.contains(f1786a) || !str.contains(b)) {
        }
        return str;
    }
}
