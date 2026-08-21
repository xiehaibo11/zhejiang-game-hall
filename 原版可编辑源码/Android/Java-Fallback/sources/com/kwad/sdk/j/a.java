package com.kwad.sdk.j;

public final class a implements okhttp3.Interceptor {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final okhttp3.Response intercept(okhttp3.Interceptor.Chain r2) {
            r1 = this;
            okhttp3.Request r0 = r2.request()     // Catch: java.lang.Exception -> L9
            okhttp3.Response r2 = r2.proceed(r0)     // Catch: java.lang.Exception -> L9
            return r2
        L9:
            r2 = move-exception
            boolean r0 = r2 instanceof java.io.IOException
            if (r0 == 0) goto Lf
            throw r2
        Lf:
            java.io.IOException r0 = new java.io.IOException
            r0.<init>(r2)
            throw r0
    }
}
