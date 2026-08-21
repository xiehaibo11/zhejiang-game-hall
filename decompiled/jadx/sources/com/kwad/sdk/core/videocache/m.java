package com.kwad.sdk.core.videocache;

/* JADX INFO: loaded from: classes2.dex */
public final class m {
    public final long awV;
    public final String awW;
    public final String url;

    public m(String str, long j, String str2) {
        this.url = str;
        this.awV = j;
        this.awW = str2;
    }

    public final String toString() {
        return "SourceInfo{url='" + this.url + "', length=" + this.awV + ", mime='" + this.awW + "'}";
    }
}
