package com.czhj.sdk.common.network;

import com.czhj.volley.AuthFailureError;
import com.czhj.volley.Request;
import com.czhj.volley.toolbox.HttpResponse;
import com.czhj.volley.toolbox.HurlStack;
import java.io.IOException;
import java.util.Map;
import java.util.TreeMap;
import javax.net.ssl.SSLSocketFactory;

/* JADX INFO: loaded from: classes.dex */
class RequestQueueHttpStack extends HurlStack {
    private RequestQueueHttpStack(HurlStack.UrlRewriter urlRewriter) {
        this(urlRewriter, null);
    }

    public RequestQueueHttpStack(HurlStack.UrlRewriter urlRewriter, SSLSocketFactory sSLSocketFactory) {
        super(urlRewriter, sSLSocketFactory);
    }

    @Override // com.czhj.volley.toolbox.HurlStack, com.czhj.volley.toolbox.BaseHttpStack
    public HttpResponse executeRequest(Request<?> request, Map<String, String> map) throws AuthFailureError, IOException {
        if (map == null || map.isEmpty()) {
            map = new TreeMap<>();
        }
        map.put(ResponseHeader.USER_AGENT.getKey(), Networking.getUserAgent());
        return super.executeRequest(request, map);
    }
}
