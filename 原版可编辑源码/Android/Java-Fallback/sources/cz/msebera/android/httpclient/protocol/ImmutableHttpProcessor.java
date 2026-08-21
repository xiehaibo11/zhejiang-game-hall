package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public final class ImmutableHttpProcessor implements cz.msebera.android.httpclient.protocol.HttpProcessor {
    private final cz.msebera.android.httpclient.HttpRequestInterceptor[] requestInterceptors;
    private final cz.msebera.android.httpclient.HttpResponseInterceptor[] responseInterceptors;

    @java.lang.Deprecated
    public ImmutableHttpProcessor(cz.msebera.android.httpclient.protocol.HttpRequestInterceptorList r6, cz.msebera.android.httpclient.protocol.HttpResponseInterceptorList r7) {
            r5 = this;
            r5.<init>()
            r0 = 0
            if (r6 == 0) goto L1c
            int r1 = r6.getRequestInterceptorCount()
            cz.msebera.android.httpclient.HttpRequestInterceptor[] r2 = new cz.msebera.android.httpclient.HttpRequestInterceptor[r1]
            r5.requestInterceptors = r2
            r2 = 0
        Lf:
            if (r2 >= r1) goto L20
            cz.msebera.android.httpclient.HttpRequestInterceptor[] r3 = r5.requestInterceptors
            cz.msebera.android.httpclient.HttpRequestInterceptor r4 = r6.getRequestInterceptor(r2)
            r3[r2] = r4
            int r2 = r2 + 1
            goto Lf
        L1c:
            cz.msebera.android.httpclient.HttpRequestInterceptor[] r6 = new cz.msebera.android.httpclient.HttpRequestInterceptor[r0]
            r5.requestInterceptors = r6
        L20:
            if (r7 == 0) goto L37
            int r6 = r7.getResponseInterceptorCount()
            cz.msebera.android.httpclient.HttpResponseInterceptor[] r1 = new cz.msebera.android.httpclient.HttpResponseInterceptor[r6]
            r5.responseInterceptors = r1
        L2a:
            if (r0 >= r6) goto L3b
            cz.msebera.android.httpclient.HttpResponseInterceptor[] r1 = r5.responseInterceptors
            cz.msebera.android.httpclient.HttpResponseInterceptor r2 = r7.getResponseInterceptor(r0)
            r1[r0] = r2
            int r0 = r0 + 1
            goto L2a
        L37:
            cz.msebera.android.httpclient.HttpResponseInterceptor[] r6 = new cz.msebera.android.httpclient.HttpResponseInterceptor[r0]
            r5.responseInterceptors = r6
        L3b:
            return
    }

    public ImmutableHttpProcessor(java.util.List<cz.msebera.android.httpclient.HttpRequestInterceptor> r3, java.util.List<cz.msebera.android.httpclient.HttpResponseInterceptor> r4) {
            r2 = this;
            r2.<init>()
            r0 = 0
            if (r3 == 0) goto L15
            int r1 = r3.size()
            cz.msebera.android.httpclient.HttpRequestInterceptor[] r1 = new cz.msebera.android.httpclient.HttpRequestInterceptor[r1]
            java.lang.Object[] r3 = r3.toArray(r1)
            cz.msebera.android.httpclient.HttpRequestInterceptor[] r3 = (cz.msebera.android.httpclient.HttpRequestInterceptor[]) r3
            r2.requestInterceptors = r3
            goto L19
        L15:
            cz.msebera.android.httpclient.HttpRequestInterceptor[] r3 = new cz.msebera.android.httpclient.HttpRequestInterceptor[r0]
            r2.requestInterceptors = r3
        L19:
            if (r4 == 0) goto L2a
            int r3 = r4.size()
            cz.msebera.android.httpclient.HttpResponseInterceptor[] r3 = new cz.msebera.android.httpclient.HttpResponseInterceptor[r3]
            java.lang.Object[] r3 = r4.toArray(r3)
            cz.msebera.android.httpclient.HttpResponseInterceptor[] r3 = (cz.msebera.android.httpclient.HttpResponseInterceptor[]) r3
            r2.responseInterceptors = r3
            goto L2e
        L2a:
            cz.msebera.android.httpclient.HttpResponseInterceptor[] r3 = new cz.msebera.android.httpclient.HttpResponseInterceptor[r0]
            r2.responseInterceptors = r3
        L2e:
            return
    }

    public ImmutableHttpProcessor(cz.msebera.android.httpclient.HttpRequestInterceptor... r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public ImmutableHttpProcessor(cz.msebera.android.httpclient.HttpRequestInterceptor[] r4, cz.msebera.android.httpclient.HttpResponseInterceptor[] r5) {
            r3 = this;
            r3.<init>()
            r0 = 0
            if (r4 == 0) goto L11
            int r1 = r4.length
            cz.msebera.android.httpclient.HttpRequestInterceptor[] r2 = new cz.msebera.android.httpclient.HttpRequestInterceptor[r1]
            r3.requestInterceptors = r2
            cz.msebera.android.httpclient.HttpRequestInterceptor[] r2 = r3.requestInterceptors
            java.lang.System.arraycopy(r4, r0, r2, r0, r1)
            goto L15
        L11:
            cz.msebera.android.httpclient.HttpRequestInterceptor[] r4 = new cz.msebera.android.httpclient.HttpRequestInterceptor[r0]
            r3.requestInterceptors = r4
        L15:
            if (r5 == 0) goto L22
            int r4 = r5.length
            cz.msebera.android.httpclient.HttpResponseInterceptor[] r1 = new cz.msebera.android.httpclient.HttpResponseInterceptor[r4]
            r3.responseInterceptors = r1
            cz.msebera.android.httpclient.HttpResponseInterceptor[] r1 = r3.responseInterceptors
            java.lang.System.arraycopy(r5, r0, r1, r0, r4)
            goto L26
        L22:
            cz.msebera.android.httpclient.HttpResponseInterceptor[] r4 = new cz.msebera.android.httpclient.HttpResponseInterceptor[r0]
            r3.responseInterceptors = r4
        L26:
            return
    }

    public ImmutableHttpProcessor(cz.msebera.android.httpclient.HttpResponseInterceptor... r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2)
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpRequest r5, cz.msebera.android.httpclient.protocol.HttpContext r6) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r4 = this;
            cz.msebera.android.httpclient.HttpRequestInterceptor[] r0 = r4.requestInterceptors
            int r1 = r0.length
            r2 = 0
        L4:
            if (r2 >= r1) goto Le
            r3 = r0[r2]
            r3.process(r5, r6)
            int r2 = r2 + 1
            goto L4
        Le:
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpResponse r5, cz.msebera.android.httpclient.protocol.HttpContext r6) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r4 = this;
            cz.msebera.android.httpclient.HttpResponseInterceptor[] r0 = r4.responseInterceptors
            int r1 = r0.length
            r2 = 0
        L4:
            if (r2 >= r1) goto Le
            r3 = r0[r2]
            r3.process(r5, r6)
            int r2 = r2 + 1
            goto L4
        Le:
            return
    }
}
