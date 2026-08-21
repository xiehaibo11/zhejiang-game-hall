package cz.msebera.android.httpclient.client.methods;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public abstract class HttpEntityEnclosingRequestBase extends cz.msebera.android.httpclient.client.methods.HttpRequestBase implements cz.msebera.android.httpclient.HttpEntityEnclosingRequest {
    private cz.msebera.android.httpclient.HttpEntity entity;

    public HttpEntityEnclosingRequestBase() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r2 = this;
            java.lang.Object r0 = super.clone()
            cz.msebera.android.httpclient.client.methods.HttpEntityEnclosingRequestBase r0 = (cz.msebera.android.httpclient.client.methods.HttpEntityEnclosingRequestBase) r0
            cz.msebera.android.httpclient.HttpEntity r1 = r2.entity
            if (r1 == 0) goto L12
            java.lang.Object r1 = cz.msebera.android.httpclient.client.utils.CloneUtils.cloneObject(r1)
            cz.msebera.android.httpclient.HttpEntity r1 = (cz.msebera.android.httpclient.HttpEntity) r1
            r0.entity = r1
        L12:
            return r0
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
    public void setEntity(cz.msebera.android.httpclient.HttpEntity r1) {
            r0 = this;
            r0.entity = r1
            return
    }
}
