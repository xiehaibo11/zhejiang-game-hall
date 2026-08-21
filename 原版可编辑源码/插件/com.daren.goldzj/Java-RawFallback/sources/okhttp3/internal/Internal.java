package okhttp3.internal;

public abstract class Internal {
    public static okhttp3.internal.Internal instance;

    public Internal() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void initializeInstanceForTests() {
            okhttp3.OkHttpClient r0 = new okhttp3.OkHttpClient
            r0.<init>()
            return
    }

    public abstract void addLenient(okhttp3.Headers.Builder r1, java.lang.String r2);

    public abstract void addLenient(okhttp3.Headers.Builder r1, java.lang.String r2, java.lang.String r3);

    public abstract void apply(okhttp3.ConnectionSpec r1, javax.net.ssl.SSLSocket r2, boolean r3);

    public abstract int code(okhttp3.Response.Builder r1);

    public abstract boolean connectionBecameIdle(okhttp3.ConnectionPool r1, okhttp3.internal.connection.RealConnection r2);

    public abstract java.net.Socket deduplicate(okhttp3.ConnectionPool r1, okhttp3.Address r2, okhttp3.internal.connection.StreamAllocation r3);

    public abstract boolean equalsNonHost(okhttp3.Address r1, okhttp3.Address r2);

    public abstract okhttp3.internal.connection.RealConnection get(okhttp3.ConnectionPool r1, okhttp3.Address r2, okhttp3.internal.connection.StreamAllocation r3, okhttp3.Route r4);

    public abstract boolean isInvalidHttpUrlHost(java.lang.IllegalArgumentException r1);

    public abstract okhttp3.Call newWebSocketCall(okhttp3.OkHttpClient r1, okhttp3.Request r2);

    public abstract void put(okhttp3.ConnectionPool r1, okhttp3.internal.connection.RealConnection r2);

    public abstract okhttp3.internal.connection.RouteDatabase routeDatabase(okhttp3.ConnectionPool r1);

    public abstract void setCache(okhttp3.OkHttpClient.Builder r1, okhttp3.internal.cache.InternalCache r2);

    public abstract okhttp3.internal.connection.StreamAllocation streamAllocation(okhttp3.Call r1);

    @javax.annotation.Nullable
    public abstract java.io.IOException timeoutExit(okhttp3.Call r1, @javax.annotation.Nullable java.io.IOException r2);
}
