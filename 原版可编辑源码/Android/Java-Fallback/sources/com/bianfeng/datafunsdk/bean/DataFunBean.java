package com.bianfeng.datafunsdk.bean;

@com.bianfeng.datafunsdk.c("db_datafunbean")
public class DataFunBean {
    public final java.lang.String NULL;

    @com.bianfeng.datafunsdk.b("db_datafun_data")
    public java.lang.String data;

    @com.bianfeng.datafunsdk.b("db_datafun_dataTime")
    public java.lang.String dataTime;

    @com.bianfeng.datafunsdk.b("db_datafun_method")
    public java.lang.String httpMethod;
    public int id;

    @com.bianfeng.datafunsdk.b("db_datafun_request_headers")
    public java.lang.String requestHeaders;

    @com.bianfeng.datafunsdk.b("db_datafun_response_data")
    public java.lang.String responseData;

    @com.bianfeng.datafunsdk.b("db_datafun_response_headers")
    public java.lang.String responseHeaders;

    @com.bianfeng.datafunsdk.b("db_datafun_url")
    public java.lang.String url;

    public DataFunBean() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "NULL"
            r1.NULL = r0
            return
    }

    public DataFunBean(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "NULL"
            r1.NULL = r0
            r1.data = r3
            r1.url = r2
            java.lang.String r2 = r1.httpMethod
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L16
            java.lang.String r2 = "post"
            goto L18
        L16:
            java.lang.String r2 = r1.httpMethod
        L18:
            r1.httpMethod = r2
            r1.requestHeaders = r0
            r1.responseHeaders = r0
            r1.responseData = r0
            java.lang.String r2 = com.bianfeng.datafunsdk.z.a()
            r1.dataTime = r2
            return
    }

    public DataFunBean(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "NULL"
            r1.NULL = r0
            r1.data = r3
            r1.url = r2
            boolean r2 = android.text.TextUtils.isEmpty(r4)
            if (r2 == 0) goto L13
            java.lang.String r4 = "post"
        L13:
            r1.httpMethod = r4
            boolean r2 = android.text.TextUtils.isEmpty(r5)
            if (r2 == 0) goto L1c
            r5 = r0
        L1c:
            r1.requestHeaders = r5
            boolean r2 = android.text.TextUtils.isEmpty(r6)
            if (r2 == 0) goto L25
            r6 = r0
        L25:
            r1.responseHeaders = r6
            boolean r2 = android.text.TextUtils.isEmpty(r7)
            if (r2 == 0) goto L2e
            r7 = r0
        L2e:
            r1.responseData = r7
            java.lang.String r2 = com.bianfeng.datafunsdk.z.a()
            r1.dataTime = r2
            return
    }

    public java.lang.String getData() {
            r1 = this;
            java.lang.String r0 = r1.data
            return r0
    }

    public java.lang.String getDataTime() {
            r1 = this;
            java.lang.String r0 = r1.dataTime
            return r0
    }

    public java.lang.String getHttpMethod() {
            r1 = this;
            java.lang.String r0 = r1.httpMethod
            return r0
    }

    public int getId() {
            r1 = this;
            int r0 = r1.id
            return r0
    }

    public java.lang.String getRequestHeaders() {
            r1 = this;
            java.lang.String r0 = r1.requestHeaders
            return r0
    }

    public java.lang.String getResponseData() {
            r1 = this;
            java.lang.String r0 = r1.responseData
            return r0
    }

    public java.lang.String getResponseHeaders() {
            r1 = this;
            java.lang.String r0 = r1.responseHeaders
            return r0
    }

    public java.lang.String getUrl() {
            r1 = this;
            java.lang.String r0 = r1.url
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lc
            java.lang.String r0 = ""
            r1.url = r0
        Lc:
            java.lang.String r0 = r1.url
            return r0
    }

    public void setData(java.lang.String r1) {
            r0 = this;
            r0.data = r1
            return
    }

    public void setDataTime(java.lang.String r1) {
            r0 = this;
            r0.dataTime = r1
            return
    }

    public void setHttpMethod(java.lang.String r1) {
            r0 = this;
            r0.httpMethod = r1
            return
    }

    public void setHttpRequestHeaders(java.lang.String r1) {
            r0 = this;
            r0.requestHeaders = r1
            return
    }

    public void setHttpResponseHeaders(java.lang.String r1) {
            r0 = this;
            r0.responseHeaders = r1
            return
    }

    public void setId(int r1) {
            r0 = this;
            r0.id = r1
            return
    }

    public void setResponseData(java.lang.String r1) {
            r0 = this;
            r0.responseData = r1
            return
    }

    public void setUrl(java.lang.String r1) {
            r0 = this;
            r0.url = r1
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.datafunsdk.w.a(r1)
            return r0
    }
}
