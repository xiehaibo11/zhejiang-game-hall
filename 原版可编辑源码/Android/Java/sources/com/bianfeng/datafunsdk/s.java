package com.bianfeng.datafunsdk;

import android.text.TextUtils;
import com.bianfeng.datafunsdk.bean.DataFunBean;
import com.bianfeng.datafunsdk.net.RequestHeaders;
import com.bianfeng.datafunsdk.net.ResponseData;
import com.bianfeng.datafunsdk.net.ResponseHeaders;

public final class s {
    public String a;
    public p b;
    public RequestHeaders c;
    public ResponseHeaders d;
    public ResponseData e;
    public q f;

    public s(DataFunBean dataFunBean) {
        this.a = dataFunBean.getUrl();
        this.b = new p(dataFunBean.getHttpMethod());
        this.f = new q(this.a, dataFunBean.getData().getBytes(), this.b);
        a(dataFunBean.getRequestHeaders());
        b(dataFunBean.getResponseData());
        c(dataFunBean.getResponseHeaders());
    }

    public final void a(String str) {
        if (TextUtils.isEmpty(str) || "NULL".equals(str)) {
            return;
        }
        try {
            RequestHeaders requestHeaders = (RequestHeaders) w.a(str, RequestHeaders.class);
            this.c = requestHeaders;
            this.f.a(requestHeaders);
        } catch (Exception e) {
            x.a("requestHeader===" + e.getMessage());
        }
    }

    public final void b(String str) {
        if (TextUtils.isEmpty(str) || "NULL".equals(str)) {
            return;
        }
        try {
            ResponseData responseData = (ResponseData) w.a(str, ResponseData.class);
            this.e = responseData;
            this.f.a(responseData);
        } catch (Exception e) {
            x.a("responseData===" + e.getMessage());
        }
    }

    public final void c(String str) {
        if (TextUtils.isEmpty(str) || "NULL".equals(str)) {
            return;
        }
        try {
            ResponseHeaders responseHeaders = (ResponseHeaders) w.a(str, ResponseHeaders.class);
            this.d = responseHeaders;
            this.f.a(responseHeaders);
        } catch (Exception e) {
            x.a("responseHeader===" + e.getMessage());
        }
    }

    public int a() {
        return this.f.a();
    }
}
