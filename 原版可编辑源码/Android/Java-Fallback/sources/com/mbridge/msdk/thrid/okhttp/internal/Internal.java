package com.mbridge.msdk.thrid.okhttp.internal;

public abstract class Internal {
    public static com.mbridge.msdk.thrid.okhttp.internal.Internal instance;

    public Internal() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void initializeInstanceForTests() {
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = new com.mbridge.msdk.thrid.okhttp.OkHttpClient
            r0.<init>()
            return
    }

    public abstract void addLenient(com.mbridge.msdk.thrid.okhttp.Headers.Builder r1, java.lang.String r2);

    public abstract void addLenient(com.mbridge.msdk.thrid.okhttp.Headers.Builder r1, java.lang.String r2, java.lang.String r3);

    public abstract void apply(com.mbridge.msdk.thrid.okhttp.ConnectionSpec r1, javax.net.ssl.SSLSocket r2, boolean r3);

    public abstract int code(com.mbridge.msdk.thrid.okhttp.Response.Builder r1);

    public abstract boolean connectionBecameIdle(com.mbridge.msdk.thrid.okhttp.ConnectionPool r1, com.mbridge.msdk.thrid.okhttp.internal.connection.RealConnection r2);

    public abstract java.net.Socket deduplicate(com.mbridge.msdk.thrid.okhttp.ConnectionPool r1, com.mbridge.msdk.thrid.okhttp.Address r2, com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation r3);

    public abstract boolean equalsNonHost(com.mbridge.msdk.thrid.okhttp.Address r1, com.mbridge.msdk.thrid.okhttp.Address r2);

    public abstract com.mbridge.msdk.thrid.okhttp.internal.connection.RealConnection get(com.mbridge.msdk.thrid.okhttp.ConnectionPool r1, com.mbridge.msdk.thrid.okhttp.Address r2, com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation r3, com.mbridge.msdk.thrid.okhttp.Route r4);

    public abstract boolean isInvalidHttpUrlHost(java.lang.IllegalArgumentException r1);

    public abstract com.mbridge.msdk.thrid.okhttp.Call newWebSocketCall(com.mbridge.msdk.thrid.okhttp.OkHttpClient r1, com.mbridge.msdk.thrid.okhttp.Request r2);

    public abstract void put(com.mbridge.msdk.thrid.okhttp.ConnectionPool r1, com.mbridge.msdk.thrid.okhttp.internal.connection.RealConnection r2);

    public abstract com.mbridge.msdk.thrid.okhttp.internal.connection.RouteDatabase routeDatabase(com.mbridge.msdk.thrid.okhttp.ConnectionPool r1);

    public abstract void setCache(com.mbridge.msdk.thrid.okhttp.OkHttpClient.Builder r1, com.mbridge.msdk.thrid.okhttp.internal.cache.InternalCache r2);

    public abstract com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation streamAllocation(com.mbridge.msdk.thrid.okhttp.Call r1);

    @javax.annotation.Nullable
    public abstract java.io.IOException timeoutExit(com.mbridge.msdk.thrid.okhttp.Call r1, @javax.annotation.Nullable java.io.IOException r2);
}
