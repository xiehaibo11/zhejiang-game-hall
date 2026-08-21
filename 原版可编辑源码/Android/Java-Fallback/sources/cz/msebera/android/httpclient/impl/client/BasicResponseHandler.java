package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.Immutable
public class BasicResponseHandler extends cz.msebera.android.httpclient.impl.client.AbstractResponseHandler<java.lang.String> {
    public BasicResponseHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String handleEntity(cz.msebera.android.httpclient.HttpEntity r1) throws java.io.IOException {
            r0 = this;
            java.lang.String r1 = r0.handleEntity(r1)
            return r1
    }

    @Override
    public java.lang.String handleEntity(cz.msebera.android.httpclient.HttpEntity r1) throws java.io.IOException {
            r0 = this;
            java.lang.String r1 = cz.msebera.android.httpclient.util.EntityUtils.toString(r1)
            return r1
    }

    @Override
    public java.lang.Object handleResponse(cz.msebera.android.httpclient.HttpResponse r1) throws cz.msebera.android.httpclient.client.HttpResponseException, java.io.IOException {
            r0 = this;
            java.lang.String r1 = r0.handleResponse(r1)
            return r1
    }

    @Override
    public java.lang.String handleResponse(cz.msebera.android.httpclient.HttpResponse r1) throws cz.msebera.android.httpclient.client.HttpResponseException, java.io.IOException {
            r0 = this;
            java.lang.Object r1 = super.handleResponse(r1)
            java.lang.String r1 = (java.lang.String) r1
            return r1
    }
}
