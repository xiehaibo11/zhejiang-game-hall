package com.kwad.sdk.ranger;

import android.text.TextUtils;
import android.util.Log;
import com.kwad.sdk.ranger.c;
import com.kwad.sdk.utils.aw;
import com.kwad.sdk.utils.g;
import com.kwad.sdk.utils.s;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import java.io.IOException;
import java.net.Socket;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.TimeUnit;
import javax.net.ssl.SSLSocket;
import okhttp3.Address;
import okhttp3.Call;
import okhttp3.ConnectionPool;
import okhttp3.ConnectionSpec;
import okhttp3.Headers;
import okhttp3.HttpUrl;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;
import okhttp3.Route;
import okhttp3.internal.Internal;
import okhttp3.internal.Version;
import okhttp3.internal.cache.InternalCache;
import okhttp3.internal.connection.RealConnection;
import okhttp3.internal.connection.RouteDatabase;
import okhttp3.internal.connection.StreamAllocation;
import okhttp3.internal.http.HttpCodec;

/* JADX INFO: loaded from: classes2.dex */
public class RangerHelper {
    private static volatile boolean aGN;
    private static List<String> aGO;
    private static d aGP;
    private static List<OkHttpClient> aGQ = new ArrayList();

    private static boolean Ht() {
        String strUserAgent;
        try {
            strUserAgent = Version.userAgent();
        } catch (Throwable unused) {
        }
        if (TextUtils.isEmpty(strUserAgent)) {
            com.kwad.sdk.core.e.c.d("Ranger_Helper", "TextUtils.isEmpty(userAgent)");
            return false;
        }
        com.kwad.sdk.core.e.c.d("Ranger_Helper", "userAgent:" + strUserAgent);
        String strReplace = strUserAgent.replace("okhttp/", "");
        if (!strReplace.startsWith("3.")) {
            return false;
        }
        int i = Integer.parseInt(strReplace.replaceAll("\\.", ""));
        return i >= 390 && i <= 3131;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void a(final StreamAllocation streamAllocation) {
        g.schedule(new aw() { // from class: com.kwad.sdk.ranger.RangerHelper.2
            @Override // com.kwad.sdk.utils.aw
            public final void doTask() {
                RangerHelper.m(s.f(streamAllocation, "call"));
            }
        }, 0L, TimeUnit.SECONDS);
    }

    static void c(d dVar) {
        aGP = dVar;
        aGO = dVar.aGG;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void m(Object obj) {
        if (obj == null) {
            com.kwad.sdk.core.e.c.d("Ranger_Helper", "real call null");
            return;
        }
        try {
            OkHttpClient okHttpClient = (OkHttpClient) s.f(obj, "client");
            if (aGQ.contains(okHttpClient)) {
                com.kwad.sdk.core.e.c.d("Ranger_Helper", "already invoke");
                return;
            }
            aGQ.add(okHttpClient);
            Object objF = s.f(obj, "eventListener");
            if (objF != null) {
                com.kwad.sdk.core.e.c.d("Ranger_Helper", "eventListener.getClass().getName():" + objF.getClass().getName());
                s.a(okHttpClient, "eventListenerFactory", new c(objF, new c.a() { // from class: com.kwad.sdk.ranger.RangerHelper.3
                }));
            }
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.e("Ranger_Helper", Log.getStackTraceString(th));
        }
    }

    public static void replaceInternal() {
        if (aGN) {
            return;
        }
        if (!Ht()) {
            aGN = true;
            return;
        }
        final Internal internal = (Internal) s.c(Internal.class, "instance");
        if (internal == null) {
            aGN = true;
            return;
        }
        com.kwad.sdk.core.e.c.d("Ranger_Helper", "internal:" + internal.getClass().getName());
        try {
            s.a(internal, "instance", new Internal() { // from class: com.kwad.sdk.ranger.RangerHelper.1
                public final void acquire(ConnectionPool connectionPool, Address address, StreamAllocation streamAllocation, Route route) {
                    RangerHelper.a(streamAllocation);
                    s.g(internal, "acquire", connectionPool, address, streamAllocation, route);
                }

                public final void addLenient(Headers.Builder builder, String str) {
                    try {
                        internal.addLenient(builder, str);
                    } catch (Throwable th) {
                        com.kwad.sdk.core.e.c.e("Ranger_Helper", Log.getStackTraceString(th));
                    }
                }

                public final void addLenient(Headers.Builder builder, String str, String str2) {
                    try {
                        internal.addLenient(builder, str, str2);
                    } catch (Throwable th) {
                        com.kwad.sdk.core.e.c.e("Ranger_Helper", Log.getStackTraceString(th));
                    }
                }

                public final void apply(ConnectionSpec connectionSpec, SSLSocket sSLSocket, boolean z) {
                    try {
                        internal.apply(connectionSpec, sSLSocket, z);
                    } catch (Throwable th) {
                        com.kwad.sdk.core.e.c.e("Ranger_Helper", Log.getStackTraceString(th));
                    }
                }

                public final int code(Response.Builder builder) {
                    try {
                        return internal.code(builder);
                    } catch (Throwable th) {
                        com.kwad.sdk.core.e.c.e("Ranger_Helper", Log.getStackTraceString(th));
                        return -1;
                    }
                }

                public final boolean connectionBecameIdle(ConnectionPool connectionPool, RealConnection realConnection) {
                    try {
                        return internal.connectionBecameIdle(connectionPool, realConnection);
                    } catch (Throwable th) {
                        com.kwad.sdk.core.e.c.e("Ranger_Helper", Log.getStackTraceString(th));
                        return false;
                    }
                }

                public final Socket deduplicate(ConnectionPool connectionPool, Address address, StreamAllocation streamAllocation) {
                    try {
                        return internal.deduplicate(connectionPool, address, streamAllocation);
                    } catch (Throwable th) {
                        com.kwad.sdk.core.e.c.e("Ranger_Helper", Log.getStackTraceString(th));
                        return null;
                    }
                }

                public final boolean equalsNonHost(Address address, Address address2) {
                    Boolean bool = (Boolean) s.g(internal, "equalsNonHost", address, address2);
                    if (bool != null) {
                        return bool.booleanValue();
                    }
                    return false;
                }

                public final RealConnection get(ConnectionPool connectionPool, Address address, StreamAllocation streamAllocation) {
                    return (RealConnection) s.g(internal, MonitorConstants.CONNECT_TYPE_GET, connectionPool, address, streamAllocation);
                }

                public final RealConnection get(ConnectionPool connectionPool, Address address, StreamAllocation streamAllocation, Route route) {
                    RangerHelper.a(streamAllocation);
                    return (RealConnection) s.g(internal, MonitorConstants.CONNECT_TYPE_GET, connectionPool, address, streamAllocation, route);
                }

                public final HttpUrl getHttpUrlChecked(String str) {
                    return (HttpUrl) s.g(internal, "getHttpUrlChecked", str);
                }

                public final void initCodec(Response.Builder builder, HttpCodec httpCodec) {
                    s.g(internal, "initCodec", builder, httpCodec);
                }

                public final boolean isInvalidHttpUrlHost(IllegalArgumentException illegalArgumentException) {
                    Boolean bool = (Boolean) s.g(internal, "isInvalidHttpUrlHost", illegalArgumentException);
                    if (bool != null) {
                        return bool.booleanValue();
                    }
                    return false;
                }

                public final Call newWebSocketCall(OkHttpClient okHttpClient, Request request) {
                    try {
                        return internal.newWebSocketCall(okHttpClient, request);
                    } catch (Throwable th) {
                        com.kwad.sdk.core.e.c.e("Ranger_Helper", Log.getStackTraceString(th));
                        return null;
                    }
                }

                public final void put(ConnectionPool connectionPool, RealConnection realConnection) {
                    s.g(internal, "put", connectionPool, realConnection);
                }

                public final RouteDatabase routeDatabase(ConnectionPool connectionPool) {
                    try {
                        return internal.routeDatabase(connectionPool);
                    } catch (Throwable th) {
                        com.kwad.sdk.core.e.c.e("Ranger_Helper", Log.getStackTraceString(th));
                        return null;
                    }
                }

                public final void setCache(OkHttpClient.Builder builder, InternalCache internalCache) {
                    try {
                        internal.setCache(builder, internalCache);
                    } catch (Throwable th) {
                        com.kwad.sdk.core.e.c.e("Ranger_Helper", Log.getStackTraceString(th));
                    }
                }

                public final StreamAllocation streamAllocation(Call call) {
                    try {
                        return internal.streamAllocation(call);
                    } catch (Throwable th) {
                        com.kwad.sdk.core.e.c.e("Ranger_Helper", Log.getStackTraceString(th));
                        return null;
                    }
                }

                public final IOException timeoutExit(Call call, IOException iOException) {
                    return (IOException) s.g(internal, "timeoutExit", call, iOException);
                }
            });
            aGN = true;
        } catch (Throwable th) {
            aGN = true;
            com.kwad.sdk.core.e.c.e("Ranger_Helper", Log.getStackTraceString(th));
        }
    }
}
