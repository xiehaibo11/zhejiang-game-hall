package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.Immutable
public abstract class AbstractResponseHandler<T> implements cz.msebera.android.httpclient.client.ResponseHandler<T> {
    public AbstractResponseHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract T handleEntity(cz.msebera.android.httpclient.HttpEntity r1) throws java.io.IOException;

    @Override
    public T handleResponse(cz.msebera.android.httpclient.HttpResponse r4) throws cz.msebera.android.httpclient.client.HttpResponseException, java.io.IOException {
            r3 = this;
            cz.msebera.android.httpclient.StatusLine r0 = r4.getStatusLine()
            cz.msebera.android.httpclient.HttpEntity r4 = r4.getEntity()
            int r1 = r0.getStatusCode()
            r2 = 300(0x12c, float:4.2E-43)
            if (r1 >= r2) goto L19
            if (r4 != 0) goto L14
            r4 = 0
            goto L18
        L14:
            java.lang.Object r4 = r3.handleEntity(r4)
        L18:
            return r4
        L19:
            cz.msebera.android.httpclient.util.EntityUtils.consume(r4)
            cz.msebera.android.httpclient.client.HttpResponseException r4 = new cz.msebera.android.httpclient.client.HttpResponseException
            int r1 = r0.getStatusCode()
            java.lang.String r0 = r0.getReasonPhrase()
            r4.<init>(r1, r0)
            throw r4
    }
}
