package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public final class BasicHttpProcessor implements cz.msebera.android.httpclient.protocol.HttpProcessor, cz.msebera.android.httpclient.protocol.HttpRequestInterceptorList, cz.msebera.android.httpclient.protocol.HttpResponseInterceptorList, java.lang.Cloneable {
    protected final java.util.List<cz.msebera.android.httpclient.HttpRequestInterceptor> requestInterceptors;
    protected final java.util.List<cz.msebera.android.httpclient.HttpResponseInterceptor> responseInterceptors;

    public BasicHttpProcessor() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.requestInterceptors = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.responseInterceptors = r0
            return
    }

    public final void addInterceptor(cz.msebera.android.httpclient.HttpRequestInterceptor r1) {
            r0 = this;
            r0.addRequestInterceptor(r1)
            return
    }

    public final void addInterceptor(cz.msebera.android.httpclient.HttpRequestInterceptor r1, int r2) {
            r0 = this;
            r0.addRequestInterceptor(r1, r2)
            return
    }

    public final void addInterceptor(cz.msebera.android.httpclient.HttpResponseInterceptor r1) {
            r0 = this;
            r0.addResponseInterceptor(r1)
            return
    }

    public final void addInterceptor(cz.msebera.android.httpclient.HttpResponseInterceptor r1, int r2) {
            r0 = this;
            r0.addResponseInterceptor(r1, r2)
            return
    }

    @Override
    public void addRequestInterceptor(cz.msebera.android.httpclient.HttpRequestInterceptor r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.List<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r1.requestInterceptors
            r0.add(r2)
            return
    }

    @Override
    public void addRequestInterceptor(cz.msebera.android.httpclient.HttpRequestInterceptor r2, int r3) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.List<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r1.requestInterceptors
            r0.add(r3, r2)
            return
    }

    @Override
    public void addResponseInterceptor(cz.msebera.android.httpclient.HttpResponseInterceptor r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.List<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r1.responseInterceptors
            r0.add(r2)
            return
    }

    @Override
    public void addResponseInterceptor(cz.msebera.android.httpclient.HttpResponseInterceptor r2, int r3) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.List<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r1.responseInterceptors
            r0.add(r3, r2)
            return
    }

    public void clearInterceptors() {
            r0 = this;
            r0.clearRequestInterceptors()
            r0.clearResponseInterceptors()
            return
    }

    @Override
    public void clearRequestInterceptors() {
            r1 = this;
            java.util.List<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r1.requestInterceptors
            r0.clear()
            return
    }

    @Override
    public void clearResponseInterceptors() {
            r1 = this;
            java.util.List<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r1.responseInterceptors
            r0.clear()
            return
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            java.lang.Object r0 = super.clone()
            cz.msebera.android.httpclient.protocol.BasicHttpProcessor r0 = (cz.msebera.android.httpclient.protocol.BasicHttpProcessor) r0
            r1.copyInterceptors(r0)
            return r0
    }

    public cz.msebera.android.httpclient.protocol.BasicHttpProcessor copy() {
            r1 = this;
            cz.msebera.android.httpclient.protocol.BasicHttpProcessor r0 = new cz.msebera.android.httpclient.protocol.BasicHttpProcessor
            r0.<init>()
            r1.copyInterceptors(r0)
            return r0
    }

    protected void copyInterceptors(cz.msebera.android.httpclient.protocol.BasicHttpProcessor r3) {
            r2 = this;
            java.util.List<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r3.requestInterceptors
            r0.clear()
            java.util.List<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r3.requestInterceptors
            java.util.List<cz.msebera.android.httpclient.HttpRequestInterceptor> r1 = r2.requestInterceptors
            r0.addAll(r1)
            java.util.List<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r3.responseInterceptors
            r0.clear()
            java.util.List<cz.msebera.android.httpclient.HttpResponseInterceptor> r3 = r3.responseInterceptors
            java.util.List<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r2.responseInterceptors
            r3.addAll(r0)
            return
    }

    @Override
    public cz.msebera.android.httpclient.HttpRequestInterceptor getRequestInterceptor(int r2) {
            r1 = this;
            if (r2 < 0) goto L14
            java.util.List<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r1.requestInterceptors
            int r0 = r0.size()
            if (r2 < r0) goto Lb
            goto L14
        Lb:
            java.util.List<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r1.requestInterceptors
            java.lang.Object r2 = r0.get(r2)
            cz.msebera.android.httpclient.HttpRequestInterceptor r2 = (cz.msebera.android.httpclient.HttpRequestInterceptor) r2
            return r2
        L14:
            r2 = 0
            return r2
    }

    @Override
    public int getRequestInterceptorCount() {
            r1 = this;
            java.util.List<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r1.requestInterceptors
            int r0 = r0.size()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponseInterceptor getResponseInterceptor(int r2) {
            r1 = this;
            if (r2 < 0) goto L14
            java.util.List<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r1.responseInterceptors
            int r0 = r0.size()
            if (r2 < r0) goto Lb
            goto L14
        Lb:
            java.util.List<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r1.responseInterceptors
            java.lang.Object r2 = r0.get(r2)
            cz.msebera.android.httpclient.HttpResponseInterceptor r2 = (cz.msebera.android.httpclient.HttpResponseInterceptor) r2
            return r2
        L14:
            r2 = 0
            return r2
    }

    @Override
    public int getResponseInterceptorCount() {
            r1 = this;
            java.util.List<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r1.responseInterceptors
            int r0 = r0.size()
            return r0
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpRequest r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r2 = this;
            java.util.List<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r2.requestInterceptors
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            cz.msebera.android.httpclient.HttpRequestInterceptor r1 = (cz.msebera.android.httpclient.HttpRequestInterceptor) r1
            r1.process(r3, r4)
            goto L6
        L16:
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpResponse r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r2 = this;
            java.util.List<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r2.responseInterceptors
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            cz.msebera.android.httpclient.HttpResponseInterceptor r1 = (cz.msebera.android.httpclient.HttpResponseInterceptor) r1
            r1.process(r3, r4)
            goto L6
        L16:
            return
    }

    @Override
    public void removeRequestInterceptorByClass(java.lang.Class<? extends cz.msebera.android.httpclient.HttpRequestInterceptor> r3) {
            r2 = this;
            java.util.List<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r2.requestInterceptors
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1e
            java.lang.Object r1 = r0.next()
            java.lang.Class r1 = r1.getClass()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L6
            r0.remove()
            goto L6
        L1e:
            return
    }

    @Override
    public void removeResponseInterceptorByClass(java.lang.Class<? extends cz.msebera.android.httpclient.HttpResponseInterceptor> r3) {
            r2 = this;
            java.util.List<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r2.responseInterceptors
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1e
            java.lang.Object r1 = r0.next()
            java.lang.Class r1 = r1.getClass()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L6
            r0.remove()
            goto L6
        L1e:
            return
    }

    @Override
    public void setInterceptors(java.util.List<?> r3) {
            r2 = this;
            java.lang.String r0 = "Inteceptor list"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.util.List<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r2.requestInterceptors
            r0.clear()
            java.util.List<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r2.responseInterceptors
            r0.clear()
            java.util.Iterator r3 = r3.iterator()
        L13:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L31
            java.lang.Object r0 = r3.next()
            boolean r1 = r0 instanceof cz.msebera.android.httpclient.HttpRequestInterceptor
            if (r1 == 0) goto L27
            r1 = r0
            cz.msebera.android.httpclient.HttpRequestInterceptor r1 = (cz.msebera.android.httpclient.HttpRequestInterceptor) r1
            r2.addInterceptor(r1)
        L27:
            boolean r1 = r0 instanceof cz.msebera.android.httpclient.HttpResponseInterceptor
            if (r1 == 0) goto L13
            cz.msebera.android.httpclient.HttpResponseInterceptor r0 = (cz.msebera.android.httpclient.HttpResponseInterceptor) r0
            r2.addInterceptor(r0)
            goto L13
        L31:
            return
    }
}
