package cz.msebera.android.httpclient.client;

import cz.msebera.android.httpclient.annotation.Immutable;

/* JADX INFO: loaded from: classes4.dex */
@Immutable
public class CircularRedirectException extends RedirectException {
    private static final long serialVersionUID = 6830063487001091803L;

    public CircularRedirectException() {
    }

    public CircularRedirectException(String str) {
        super(str);
    }

    public CircularRedirectException(String str, Throwable th) {
        super(str, th);
    }
}
