package cz.msebera.android.httpclient.client;

import cz.msebera.android.httpclient.annotation.Immutable;

/* JADX INFO: loaded from: classes4.dex */
@Immutable
public class HttpResponseException extends ClientProtocolException {
    private static final long serialVersionUID = -7186627969477257933L;
    private final int statusCode;

    public HttpResponseException(int i, String str) {
        super(str);
        this.statusCode = i;
    }

    public int getStatusCode() {
        return this.statusCode;
    }
}
