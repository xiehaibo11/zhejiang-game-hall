package cz.msebera.android.httpclient.client.entity;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class UrlEncodedFormEntity extends cz.msebera.android.httpclient.entity.StringEntity {
    public UrlEncodedFormEntity(java.lang.Iterable<? extends cz.msebera.android.httpclient.NameValuePair> r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public UrlEncodedFormEntity(java.lang.Iterable<? extends cz.msebera.android.httpclient.NameValuePair> r2, java.nio.charset.Charset r3) {
            r1 = this;
            if (r3 == 0) goto L4
            r0 = r3
            goto L6
        L4:
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.protocol.HTTP.DEF_CONTENT_CHARSET
        L6:
            java.lang.String r2 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.format(r2, r0)
            java.lang.String r0 = "application/x-www-form-urlencoded"
            cz.msebera.android.httpclient.entity.ContentType r3 = cz.msebera.android.httpclient.entity.ContentType.create(r0, r3)
            r1.<init>(r2, r3)
            return
    }

    public UrlEncodedFormEntity(java.util.List<? extends cz.msebera.android.httpclient.NameValuePair> r2) throws java.io.UnsupportedEncodingException {
            r1 = this;
            r0 = 0
            java.nio.charset.Charset r0 = (java.nio.charset.Charset) r0
            r1.<init>(r2, r0)
            return
    }

    public UrlEncodedFormEntity(java.util.List<? extends cz.msebera.android.httpclient.NameValuePair> r2, java.lang.String r3) throws java.io.UnsupportedEncodingException {
            r1 = this;
            if (r3 == 0) goto L4
            r0 = r3
            goto La
        L4:
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.protocol.HTTP.DEF_CONTENT_CHARSET
            java.lang.String r0 = r0.name()
        La:
            java.lang.String r2 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.format(r2, r0)
            java.lang.String r0 = "application/x-www-form-urlencoded"
            cz.msebera.android.httpclient.entity.ContentType r3 = cz.msebera.android.httpclient.entity.ContentType.create(r0, r3)
            r1.<init>(r2, r3)
            return
    }
}
