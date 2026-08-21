package com.bianfeng.datafunsdk.bean;

import android.text.TextUtils;
import com.bianfeng.datafunsdk.b;
import com.bianfeng.datafunsdk.c;
import com.bianfeng.datafunsdk.w;
import com.bianfeng.datafunsdk.z;

/* JADX INFO: loaded from: classes.dex */
@c("db_datafunbean")
public class DataFunBean {
    public final String NULL = "NULL";

    @b("db_datafun_data")
    public String data;

    @b("db_datafun_dataTime")
    public String dataTime;

    @b("db_datafun_method")
    public String httpMethod;
    public int id;

    @b("db_datafun_request_headers")
    public String requestHeaders;

    @b("db_datafun_response_data")
    public String responseData;

    @b("db_datafun_response_headers")
    public String responseHeaders;

    @b("db_datafun_url")
    public String url;

    public DataFunBean() {
    }

    public String getData() {
        return this.data;
    }

    public String getDataTime() {
        return this.dataTime;
    }

    public String getHttpMethod() {
        return this.httpMethod;
    }

    public int getId() {
        return this.id;
    }

    public String getRequestHeaders() {
        return this.requestHeaders;
    }

    public String getResponseData() {
        return this.responseData;
    }

    public String getResponseHeaders() {
        return this.responseHeaders;
    }

    public String getUrl() {
        if (TextUtils.isEmpty(this.url)) {
            this.url = "";
        }
        return this.url;
    }

    public void setData(String str) {
        this.data = str;
    }

    public void setDataTime(String str) {
        this.dataTime = str;
    }

    public void setHttpMethod(String str) {
        this.httpMethod = str;
    }

    public void setHttpRequestHeaders(String str) {
        this.requestHeaders = str;
    }

    public void setHttpResponseHeaders(String str) {
        this.responseHeaders = str;
    }

    public void setId(int i) {
        this.id = i;
    }

    public void setResponseData(String str) {
        this.responseData = str;
    }

    public void setUrl(String str) {
        this.url = str;
    }

    public String toString() {
        return w.a(this);
    }

    public DataFunBean(String str, String str2, String str3, String str4, String str5, String str6) {
        this.data = str2;
        this.url = str;
        this.httpMethod = TextUtils.isEmpty(str3) ? "post" : str3;
        this.requestHeaders = TextUtils.isEmpty(str4) ? "NULL" : str4;
        this.responseHeaders = TextUtils.isEmpty(str5) ? "NULL" : str5;
        this.responseData = TextUtils.isEmpty(str6) ? "NULL" : str6;
        this.dataTime = z.a();
    }

    public DataFunBean(String str, String str2) {
        this.data = str2;
        this.url = str;
        this.httpMethod = TextUtils.isEmpty(this.httpMethod) ? "post" : this.httpMethod;
        this.requestHeaders = "NULL";
        this.responseHeaders = "NULL";
        this.responseData = "NULL";
        this.dataTime = z.a();
    }
}
