package cz.msebera.android.httpclient;

/* JADX INFO: loaded from: classes4.dex */
public interface StatusLine {
    ProtocolVersion getProtocolVersion();

    String getReasonPhrase();

    int getStatusCode();
}
