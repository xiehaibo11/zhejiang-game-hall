package com.czhj.sdk.common.network;

import android.text.TextUtils;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.utils.Md5Util;
import com.czhj.volley.DefaultRetryPolicy;
import com.czhj.volley.NetworkResponse;
import com.czhj.volley.Request;
import com.czhj.volley.Response;
import com.czhj.volley.VolleyError;
import com.czhj.volley.toolbox.HttpHeaderParser;
import java.util.Locale;
import java.util.Map;
import java.util.TreeMap;

/* JADX INFO: loaded from: classes.dex */
public abstract class SigmobRequest<T> extends Request<T> {
    protected static final String AESKEY = "KGpfzbYsn4T9Jyuq";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f1787a;

    protected SigmobRequest(String str, int i, Response.ErrorListener errorListener) {
        super(i, str, errorListener);
        this.f1787a = str;
        setRetryPolicy(new DefaultRetryPolicy(10000, 2, 0.0f));
        setShouldCache(false);
    }

    @Override // com.czhj.volley.Request
    public byte[] getBody() {
        String strGenerateBodyFromParams = SigmobRequestUtil.generateBodyFromParams(getParams(), getUrl());
        if (strGenerateBodyFromParams == null) {
            return null;
        }
        return strGenerateBodyFromParams.getBytes();
    }

    @Override // com.czhj.volley.Request
    public String getBodyContentType() {
        return super.getBodyContentType();
    }

    @Override // com.czhj.volley.Request
    public Map<String, String> getHeaders() {
        TreeMap treeMap = new TreeMap();
        if (!SigmobRequestUtil.a(this.f1787a)) {
            return treeMap;
        }
        String language = Locale.getDefault().getLanguage();
        String strMd5 = null;
        if (ClientMetadata.getInstance() != null) {
            Locale deviceLocale = ClientMetadata.getInstance().getDeviceLocale();
            if (!deviceLocale.getLanguage().trim().isEmpty()) {
                language = deviceLocale.getLanguage().trim();
            }
            if (!TextUtils.isEmpty(ClientMetadata.getInstance().getAndroidId())) {
                strMd5 = Md5Util.md5(ClientMetadata.getInstance().getAndroidId());
            }
        }
        if (!TextUtils.isEmpty(language)) {
            treeMap.put(ResponseHeader.ACCEPT_LANGUAGE.getKey(), language);
        }
        if (!TextUtils.isEmpty(strMd5)) {
            treeMap.put("token", strMd5);
        }
        return treeMap;
    }

    public String getOriginalUrl() {
        return this.f1787a;
    }

    @Override // com.czhj.volley.Request
    protected VolleyError parseNetworkError(VolleyError volleyError) {
        return super.parseNetworkError(volleyError);
    }

    @Override // com.czhj.volley.Request
    protected Response<T> parseNetworkResponse(NetworkResponse networkResponse) {
        return Response.success(networkResponse, HttpHeaderParser.parseCacheHeaders(networkResponse));
    }
}
