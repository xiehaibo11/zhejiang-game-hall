package com.alibaba.sdk.android.oss.callback;

public interface OSSProgressCallback<T> {
    void onProgress(T r1, long r2, long r4);
}
