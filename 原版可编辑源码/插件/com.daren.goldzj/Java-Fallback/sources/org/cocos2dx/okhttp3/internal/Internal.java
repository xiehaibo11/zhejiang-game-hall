package org.cocos2dx.okhttp3.internal;

import java.io.IOException;
import java.net.Socket;
import javax.annotation.Nullable;
import javax.net.ssl.SSLSocket;
import org.cocos2dx.okhttp3.Address;
import org.cocos2dx.okhttp3.Call;
import org.cocos2dx.okhttp3.ConnectionPool;
import org.cocos2dx.okhttp3.ConnectionSpec;
import org.cocos2dx.okhttp3.Headers;
import org.cocos2dx.okhttp3.OkHttpClient;
import org.cocos2dx.okhttp3.Request;
import org.cocos2dx.okhttp3.Response;
import org.cocos2dx.okhttp3.Route;
import org.cocos2dx.okhttp3.internal.cache.InternalCache;
import org.cocos2dx.okhttp3.internal.connection.RealConnection;
import org.cocos2dx.okhttp3.internal.connection.RouteDatabase;
import org.cocos2dx.okhttp3.internal.connection.StreamAllocation;

public abstract class Internal {
    public static Internal instance;

    public abstract void addLenient(Headers.Builder r1, String r2);

    public abstract void addLenient(Headers.Builder r1, String r2, String r3);

    public abstract void apply(ConnectionSpec r1, SSLSocket r2, boolean r3);

    public abstract int code(Response.Builder r1);

    public abstract boolean connectionBecameIdle(ConnectionPool r1, RealConnection r2);

    public abstract Socket deduplicate(ConnectionPool r1, Address r2, StreamAllocation r3);

    public abstract boolean equalsNonHost(Address r1, Address r2);

    public abstract RealConnection get(ConnectionPool r1, Address r2, StreamAllocation r3, Route r4);

    public abstract boolean isInvalidHttpUrlHost(IllegalArgumentException r1);

    public abstract Call newWebSocketCall(OkHttpClient r1, Request r2);

    public abstract void put(ConnectionPool r1, RealConnection r2);

    public abstract RouteDatabase routeDatabase(ConnectionPool r1);

    public abstract void setCache(OkHttpClient.Builder r1, InternalCache r2);

    public abstract StreamAllocation streamAllocation(Call r1);

    @Nullable
    public abstract IOException timeoutExit(Call r1, @Nullable IOException r2);

    public Internal() {
    }

    public static void initializeInstanceForTests() {
        new OkHttpClient();
    }
}
