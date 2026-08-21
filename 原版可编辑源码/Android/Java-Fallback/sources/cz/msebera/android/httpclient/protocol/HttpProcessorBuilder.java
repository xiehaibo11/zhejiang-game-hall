package cz.msebera.android.httpclient.protocol;

public class HttpProcessorBuilder {
    private cz.msebera.android.httpclient.protocol.ChainBuilder<cz.msebera.android.httpclient.HttpRequestInterceptor> requestChainBuilder;
    private cz.msebera.android.httpclient.protocol.ChainBuilder<cz.msebera.android.httpclient.HttpResponseInterceptor> responseChainBuilder;

    HttpProcessorBuilder() {
            r0 = this;
            r0.<init>()
            return
    }

    public static cz.msebera.android.httpclient.protocol.HttpProcessorBuilder create() {
            cz.msebera.android.httpclient.protocol.HttpProcessorBuilder r0 = new cz.msebera.android.httpclient.protocol.HttpProcessorBuilder
            r0.<init>()
            return r0
    }

    private cz.msebera.android.httpclient.protocol.ChainBuilder<cz.msebera.android.httpclient.HttpRequestInterceptor> getRequestChainBuilder() {
            r1 = this;
            cz.msebera.android.httpclient.protocol.ChainBuilder<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r1.requestChainBuilder
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.protocol.ChainBuilder r0 = new cz.msebera.android.httpclient.protocol.ChainBuilder
            r0.<init>()
            r1.requestChainBuilder = r0
        Lb:
            cz.msebera.android.httpclient.protocol.ChainBuilder<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r1.requestChainBuilder
            return r0
    }

    private cz.msebera.android.httpclient.protocol.ChainBuilder<cz.msebera.android.httpclient.HttpResponseInterceptor> getResponseChainBuilder() {
            r1 = this;
            cz.msebera.android.httpclient.protocol.ChainBuilder<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r1.responseChainBuilder
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.protocol.ChainBuilder r0 = new cz.msebera.android.httpclient.protocol.ChainBuilder
            r0.<init>()
            r1.responseChainBuilder = r0
        Lb:
            cz.msebera.android.httpclient.protocol.ChainBuilder<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r1.responseChainBuilder
            return r0
    }

    public cz.msebera.android.httpclient.protocol.HttpProcessorBuilder add(cz.msebera.android.httpclient.HttpRequestInterceptor r1) {
            r0 = this;
            cz.msebera.android.httpclient.protocol.HttpProcessorBuilder r1 = r0.addLast(r1)
            return r1
    }

    public cz.msebera.android.httpclient.protocol.HttpProcessorBuilder add(cz.msebera.android.httpclient.HttpResponseInterceptor r1) {
            r0 = this;
            cz.msebera.android.httpclient.protocol.HttpProcessorBuilder r1 = r0.addLast(r1)
            return r1
    }

    public cz.msebera.android.httpclient.protocol.HttpProcessorBuilder addAll(cz.msebera.android.httpclient.HttpRequestInterceptor... r1) {
            r0 = this;
            cz.msebera.android.httpclient.protocol.HttpProcessorBuilder r1 = r0.addAllLast(r1)
            return r1
    }

    public cz.msebera.android.httpclient.protocol.HttpProcessorBuilder addAll(cz.msebera.android.httpclient.HttpResponseInterceptor... r1) {
            r0 = this;
            cz.msebera.android.httpclient.protocol.HttpProcessorBuilder r1 = r0.addAllLast(r1)
            return r1
    }

    public cz.msebera.android.httpclient.protocol.HttpProcessorBuilder addAllFirst(cz.msebera.android.httpclient.HttpRequestInterceptor... r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            cz.msebera.android.httpclient.protocol.ChainBuilder r0 = r1.getRequestChainBuilder()
            r0.addAllFirst(r2)
            return r1
    }

    public cz.msebera.android.httpclient.protocol.HttpProcessorBuilder addAllFirst(cz.msebera.android.httpclient.HttpResponseInterceptor... r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            cz.msebera.android.httpclient.protocol.ChainBuilder r0 = r1.getResponseChainBuilder()
            r0.addAllFirst(r2)
            return r1
    }

    public cz.msebera.android.httpclient.protocol.HttpProcessorBuilder addAllLast(cz.msebera.android.httpclient.HttpRequestInterceptor... r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            cz.msebera.android.httpclient.protocol.ChainBuilder r0 = r1.getRequestChainBuilder()
            r0.addAllLast(r2)
            return r1
    }

    public cz.msebera.android.httpclient.protocol.HttpProcessorBuilder addAllLast(cz.msebera.android.httpclient.HttpResponseInterceptor... r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            cz.msebera.android.httpclient.protocol.ChainBuilder r0 = r1.getResponseChainBuilder()
            r0.addAllLast(r2)
            return r1
    }

    public cz.msebera.android.httpclient.protocol.HttpProcessorBuilder addFirst(cz.msebera.android.httpclient.HttpRequestInterceptor r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            cz.msebera.android.httpclient.protocol.ChainBuilder r0 = r1.getRequestChainBuilder()
            r0.addFirst(r2)
            return r1
    }

    public cz.msebera.android.httpclient.protocol.HttpProcessorBuilder addFirst(cz.msebera.android.httpclient.HttpResponseInterceptor r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            cz.msebera.android.httpclient.protocol.ChainBuilder r0 = r1.getResponseChainBuilder()
            r0.addFirst(r2)
            return r1
    }

    public cz.msebera.android.httpclient.protocol.HttpProcessorBuilder addLast(cz.msebera.android.httpclient.HttpRequestInterceptor r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            cz.msebera.android.httpclient.protocol.ChainBuilder r0 = r1.getRequestChainBuilder()
            r0.addLast(r2)
            return r1
    }

    public cz.msebera.android.httpclient.protocol.HttpProcessorBuilder addLast(cz.msebera.android.httpclient.HttpResponseInterceptor r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            cz.msebera.android.httpclient.protocol.ChainBuilder r0 = r1.getResponseChainBuilder()
            r0.addLast(r2)
            return r1
    }

    public cz.msebera.android.httpclient.protocol.HttpProcessor build() {
            r4 = this;
            cz.msebera.android.httpclient.protocol.ImmutableHttpProcessor r0 = new cz.msebera.android.httpclient.protocol.ImmutableHttpProcessor
            cz.msebera.android.httpclient.protocol.ChainBuilder<cz.msebera.android.httpclient.HttpRequestInterceptor> r1 = r4.requestChainBuilder
            r2 = 0
            if (r1 == 0) goto Lc
            java.util.LinkedList r1 = r1.build()
            goto Ld
        Lc:
            r1 = r2
        Ld:
            cz.msebera.android.httpclient.protocol.ChainBuilder<cz.msebera.android.httpclient.HttpResponseInterceptor> r3 = r4.responseChainBuilder
            if (r3 == 0) goto L15
            java.util.LinkedList r2 = r3.build()
        L15:
            r0.<init>(r1, r2)
            return r0
    }
}
