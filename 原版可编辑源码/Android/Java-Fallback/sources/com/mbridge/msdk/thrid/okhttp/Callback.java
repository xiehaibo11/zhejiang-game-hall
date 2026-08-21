package com.mbridge.msdk.thrid.okhttp;

public interface Callback {
    void onFailure(com.mbridge.msdk.thrid.okhttp.Call r1, java.io.IOException r2);

    void onResponse(com.mbridge.msdk.thrid.okhttp.Call r1, com.mbridge.msdk.thrid.okhttp.Response r2) throws java.io.IOException;
}
