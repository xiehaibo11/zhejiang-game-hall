package com.czhj.sdk.common.network;

import cz.msebera.android.httpclient.HttpHeaders;

/* JADX INFO: loaded from: classes.dex */
public enum ResponseHeader {
    LOCATION("Location"),
    USER_AGENT("User-Agent"),
    ACCEPT_LANGUAGE(HttpHeaders.ACCEPT_LANGUAGE);

    private final String key;

    ResponseHeader(String str) {
        this.key = str;
    }

    public String getKey() {
        return this.key;
    }
}
