package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class BasicHttpEntityEnclosingRequest extends cz.msebera.android.httpclient.message.BasicHttpRequest implements cz.msebera.android.httpclient.HttpEntityEnclosingRequest {
    private cz.msebera.android.httpclient.HttpEntity entity;

    public BasicHttpEntityEnclosingRequest(cz.msebera.android.httpclient.RequestLine r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public BasicHttpEntityEnclosingRequest(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public BasicHttpEntityEnclosingRequest(java.lang.String r1, java.lang.String r2, cz.msebera.android.httpclient.ProtocolVersion r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
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
