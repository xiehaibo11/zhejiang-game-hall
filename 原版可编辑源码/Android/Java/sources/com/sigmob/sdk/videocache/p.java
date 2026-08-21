package com.sigmob.sdk.videocache;

public class p extends Exception {
    private static final String a = ". Version: 4.9.0";

    public p(String str) {
        super(str + a);
    }

    public p(String str, Throwable th) {
        super(str + a, th);
    }

    public p(Throwable th) {
        super("No explanation error. Version: 4.9.0", th);
    }
}
