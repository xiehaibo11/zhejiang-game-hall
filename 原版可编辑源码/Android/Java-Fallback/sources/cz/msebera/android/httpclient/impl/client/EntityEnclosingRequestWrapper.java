package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class EntityEnclosingRequestWrapper extends cz.msebera.android.httpclient.impl.client.RequestWrapper implements cz.msebera.android.httpclient.HttpEntityEnclosingRequest {
    private boolean consumed;
    private cz.msebera.android.httpclient.HttpEntity entity;

    class EntityWrapper extends cz.msebera.android.httpclient.entity.HttpEntityWrapper {
        final cz.msebera.android.httpclient.impl.client.EntityEnclosingRequestWrapper this$0;

        EntityWrapper(cz.msebera.android.httpclient.impl.client.EntityEnclosingRequestWrapper r1, cz.msebera.android.httpclient.HttpEntity r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                return
        }

        @Override
        public void consumeContent() throws java.io.IOException {
                r2 = this;
                cz.msebera.android.httpclient.impl.client.EntityEnclosingRequestWrapper r0 = r2.this$0
                r1 = 1
                cz.msebera.android.httpclient.impl.client.EntityEnclosingRequestWrapper.access$002(r0, r1)
                super.consumeContent()
                return
        }

        @Override
        public java.io.InputStream getContent() throws java.io.IOException {
                r2 = this;
                cz.msebera.android.httpclient.impl.client.EntityEnclosingRequestWrapper r0 = r2.this$0
                r1 = 1
                cz.msebera.android.httpclient.impl.client.EntityEnclosingRequestWrapper.access$002(r0, r1)
                java.io.InputStream r0 = super.getContent()
                return r0
        }

        @Override
        public void writeTo(java.io.OutputStream r3) throws java.io.IOException {
                r2 = this;
                cz.msebera.android.httpclient.impl.client.EntityEnclosingRequestWrapper r0 = r2.this$0
                r1 = 1
                cz.msebera.android.httpclient.impl.client.EntityEnclosingRequestWrapper.access$002(r0, r1)
                super.writeTo(r3)
                return
        }
    }

    public EntityEnclosingRequestWrapper(cz.msebera.android.httpclient.HttpEntityEnclosingRequest r1) throws cz.msebera.android.httpclient.ProtocolException {
            r0 = this;
            r0.<init>(r1)
            cz.msebera.android.httpclient.HttpEntity r1 = r1.getEntity()
            r0.setEntity(r1)
            return
    }

    static boolean access$002(cz.msebera.android.httpclient.impl.client.EntityEnclosingRequestWrapper r0, boolean r1) {
            r0.consumed = r1
            return r1
    }

    @Override
    public boolean expectContinue() {
            r2 = this;
            java.lang.String r0 = "Expect"
            cz.msebera.android.httpclient.Header r0 = r2.getFirstHeader(r0)
            if (r0 == 0) goto L16
            java.lang.String r0 = r0.getValue()
            java.lang.String r1 = "100-continue"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto L16
            r0 = 1
            goto L17
        L16:
            r0 = 0
        L17:
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.HttpEntity getEntity() {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.entity
            return r0
    }

    @Override
    public boolean isRepeatable() {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.entity
            if (r0 == 0) goto L11
            boolean r0 = r0.isRepeatable()
            if (r0 != 0) goto L11
            boolean r0 = r1.consumed
            if (r0 != 0) goto Lf
            goto L11
        Lf:
            r0 = 0
            goto L12
        L11:
            r0 = 1
        L12:
            return r0
    }

    @Override
    public void setEntity(cz.msebera.android.httpclient.HttpEntity r2) {
            r1 = this;
            if (r2 == 0) goto L8
            cz.msebera.android.httpclient.impl.client.EntityEnclosingRequestWrapper$EntityWrapper r0 = new cz.msebera.android.httpclient.impl.client.EntityEnclosingRequestWrapper$EntityWrapper
            r0.<init>(r1, r2)
            goto L9
        L8:
            r0 = 0
        L9:
            r1.entity = r0
            r2 = 0
            r1.consumed = r2
            return
    }
}
