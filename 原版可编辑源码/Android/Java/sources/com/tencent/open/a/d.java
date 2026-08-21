package com.tencent.open.a;

import java.io.IOException;
import okhttp3.Response;
import okhttp3.ResponseBody;

class d implements g {
    private Response a;
    private String b = null;
    private int c;
    private int d;
    private int e;

    d(Response response, int i) {
        this.a = response;
        this.d = i;
        this.c = response.code();
        ResponseBody responseBodyBody = this.a.body();
        if (responseBodyBody != null) {
            this.e = (int) responseBodyBody.get$contentLength();
        } else {
            this.e = 0;
        }
    }

    @Override
    public String a() throws IOException {
        if (this.b == null) {
            ResponseBody responseBodyBody = this.a.body();
            if (responseBodyBody != null) {
                this.b = responseBodyBody.string();
            }
            if (this.b == null) {
                this.b = "";
            }
        }
        return this.b;
    }

    @Override
    public int b() {
        return this.e;
    }

    @Override
    public int c() {
        return this.d;
    }

    @Override
    public int d() {
        return this.c;
    }

    public String toString() {
        return getClass().getSimpleName() + '@' + hashCode() + this.b + this.c + this.d + this.e;
    }
}
