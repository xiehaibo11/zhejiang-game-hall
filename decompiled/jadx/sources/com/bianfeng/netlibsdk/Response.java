package com.bianfeng.netlibsdk;

import com.bianfeng.netlibsdk.utils.NetException;

/* JADX INFO: loaded from: classes.dex */
public class Response<T> {
    public final NetException error;
    public boolean intermediate;
    public final T result;

    public static <T> Response<T> success(T t) {
        return new Response<>(t);
    }

    public static <T> Response<T> error(NetException netException) {
        return new Response<>(netException);
    }

    public boolean isSuccess() {
        return this.error == null;
    }

    private Response(T t) {
        this.intermediate = false;
        this.result = t;
        this.error = null;
    }

    private Response(NetException netException) {
        this.intermediate = false;
        this.result = null;
        this.error = netException;
    }
}
