package org.cocos2dx.okhttp3.internal;

public abstract class Internal {
    public static org.cocos2dx.okhttp3.internal.Internal instance;

    public Internal() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void initializeInstanceForTests() {
            org.cocos2dx.okhttp3.OkHttpClient r0 = new org.cocos2dx.okhttp3.OkHttpClient
            r0.<init>()
            return
    }

    public abstract void addLenient(org.cocos2dx.okhttp3.Headers.Builder r1, java.lang.String r2);

    public abstract void addLenient(org.cocos2dx.okhttp3.Headers.Builder r1, java.lang.String r2, java.lang.String r3);

    public abstract void apply(org.cocos2dx.okhttp3.ConnectionSpec r1, javax.net.ssl.SSLSocket r2, boolean r3);

    public abstract int code(org.cocos2dx.okhttp3.Response.Builder r1);

    public abstract boolean connectionBecameIdle(org.cocos2dx.okhttp3.ConnectionPool r1, org.cocos2dx.okhttp3.internal.connection.RealConnection r2);

    public abstract java.net.Socket deduplicate(org.cocos2dx.okhttp3.ConnectionPool r1, org.cocos2dx.okhttp3.Address r2, org.cocos2dx.okhttp3.internal.connection.StreamAllocation r3);

    public abstract boolean equalsNonHost(org.cocos2dx.okhttp3.Address r1, org.cocos2dx.okhttp3.Address r2);

    public abstract org.cocos2dx.okhttp3.internal.connection.RealConnection get(org.cocos2dx.okhttp3.ConnectionPool r1, org.cocos2dx.okhttp3.Address r2, org.cocos2dx.okhttp3.internal.connection.StreamAllocation r3, org.cocos2dx.okhttp3.Route r4);

    public abstract boolean isInvalidHttpUrlHost(java.lang.IllegalArgumentException r1);

    public abstract org.cocos2dx.okhttp3.Call newWebSocketCall(org.cocos2dx.okhttp3.OkHttpClient r1, org.cocos2dx.okhttp3.Request r2);

    public abstract void put(org.cocos2dx.okhttp3.ConnectionPool r1, org.cocos2dx.okhttp3.internal.connection.RealConnection r2);

    public abstract org.cocos2dx.okhttp3.internal.connection.RouteDatabase routeDatabase(org.cocos2dx.okhttp3.ConnectionPool r1);

    public abstract void setCache(org.cocos2dx.okhttp3.OkHttpClient.Builder r1, org.cocos2dx.okhttp3.internal.cache.InternalCache r2);

    public abstract org.cocos2dx.okhttp3.internal.connection.StreamAllocation streamAllocation(org.cocos2dx.okhttp3.Call r1);

    @javax.annotation.Nullable
    public abstract java.io.IOException timeoutExit(org.cocos2dx.okhttp3.Call r1, @javax.annotation.Nullable java.io.IOException r2);
}
