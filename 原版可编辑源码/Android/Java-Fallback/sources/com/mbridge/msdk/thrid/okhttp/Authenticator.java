package com.mbridge.msdk.thrid.okhttp;

public interface Authenticator {
    public static final com.mbridge.msdk.thrid.okhttp.Authenticator NONE = null;


    static {
            com.mbridge.msdk.thrid.okhttp.Authenticator$1 r0 = new com.mbridge.msdk.thrid.okhttp.Authenticator$1
            r0.<init>()
            com.mbridge.msdk.thrid.okhttp.Authenticator.NONE = r0
            return
    }

    @javax.annotation.Nullable
    com.mbridge.msdk.thrid.okhttp.Request authenticate(@javax.annotation.Nullable com.mbridge.msdk.thrid.okhttp.Route r1, com.mbridge.msdk.thrid.okhttp.Response r2) throws java.io.IOException;
}
