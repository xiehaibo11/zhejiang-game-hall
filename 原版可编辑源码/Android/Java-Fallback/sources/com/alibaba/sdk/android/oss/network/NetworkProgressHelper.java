package com.alibaba.sdk.android.oss.network;

public class NetworkProgressHelper {


    public NetworkProgressHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.alibaba.sdk.android.oss.network.ProgressTouchableRequestBody addProgressRequestBody(java.io.InputStream r7, long r8, java.lang.String r10, com.alibaba.sdk.android.oss.network.ExecutionContext r11) {
            com.alibaba.sdk.android.oss.network.ProgressTouchableRequestBody r6 = new com.alibaba.sdk.android.oss.network.ProgressTouchableRequestBody
            r0 = r6
            r1 = r7
            r2 = r8
            r4 = r10
            r5 = r11
            r0.<init>(r1, r2, r4, r5)
            return r6
    }

    public static okhttp3.OkHttpClient addProgressResponseListener(okhttp3.OkHttpClient r1, com.alibaba.sdk.android.oss.network.ExecutionContext r2) {
            okhttp3.OkHttpClient$Builder r1 = r1.newBuilder()
            com.alibaba.sdk.android.oss.network.NetworkProgressHelper$1 r0 = new com.alibaba.sdk.android.oss.network.NetworkProgressHelper$1
            r0.<init>(r2)
            okhttp3.OkHttpClient$Builder r1 = r1.addNetworkInterceptor(r0)
            okhttp3.OkHttpClient r1 = r1.build()
            return r1
    }
}
