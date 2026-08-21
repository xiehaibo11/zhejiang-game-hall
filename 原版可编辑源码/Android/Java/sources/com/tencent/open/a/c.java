package com.tencent.open.a;

import java.net.HttpURLConnection;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

class c implements g {
    private String a;
    private int b;
    private int c;
    private int d;
    private String e;
    private Map<String, List<String>> f = new HashMap();

    public c(HttpURLConnection httpURLConnection, String str, int i, int i2, int i3, String str2) {
        Map<String, List<String>> headerFields;
        this.a = "";
        this.b = 0;
        this.c = 0;
        this.d = 0;
        this.e = "";
        this.a = str;
        this.b = i;
        this.c = i2;
        this.d = i3;
        this.e = str2;
        if (httpURLConnection == null || (headerFields = httpURLConnection.getHeaderFields()) == null) {
            return;
        }
        this.f.putAll(headerFields);
    }

    @Override
    public String a() {
        return this.a;
    }

    @Override
    public int b() {
        return this.b;
    }

    @Override
    public int c() {
        return this.c;
    }

    @Override
    public int d() {
        return this.d;
    }

    public String toString() {
        return getClass().getSimpleName() + '@' + hashCode() + "\ncontent = [" + this.a + "]\nresponseSize = " + this.b + "\nrequestSize = " + this.c + "\nresultCode = " + this.d + "\nerrorMsg = " + this.e;
    }
}
