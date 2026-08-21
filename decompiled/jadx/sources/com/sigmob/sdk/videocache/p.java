package com.sigmob.sdk.videocache;

/* JADX INFO: loaded from: classes3.dex */
public class p extends Exception {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f5235a = ". Version: 4.9.0";

    public p(String str) {
        super(str + f5235a);
    }

    public p(String str, Throwable th) {
        super(str + f5235a, th);
    }

    public p(Throwable th) {
        super("No explanation error. Version: 4.9.0", th);
    }
}
