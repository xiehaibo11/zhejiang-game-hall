package com.kwad.sdk.service;

import android.content.Context;
import com.kwad.sdk.api.SdkConfig;
import com.kwad.sdk.m.l;
import com.kwad.sdk.service.a.d;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes2.dex */
public final class ServiceProvider {
    private static List<Throwable> IQ;
    private static Context aHD;
    private static Context aHE;
    private static SdkConfig aHF;
    private static boolean aHG;
    private static Context mContext;

    enum ServiceProviderDelegate {
        INSTANCE;

        private final Map<Class<?>, Object> mProviders = new HashMap(32);

        ServiceProviderDelegate() {
        }

        public final <T> T get(Class<T> cls) {
            return (T) this.mProviders.get(cls);
        }

        public final <T> void put(Class<T> cls, T t) {
            this.mProviders.put(cls, t);
        }
    }

    public static void HC() {
        aHG = true;
    }

    public static Context HD() {
        return mContext;
    }

    public static SdkConfig HE() {
        return aHF;
    }

    public static void a(SdkConfig sdkConfig) {
        aHF = sdkConfig;
    }

    public static void b(Throwable th) {
        d dVar = (d) get(d.class);
        if (dVar != null) {
            dVar.gatherException(th);
        } else {
            c(th);
        }
    }

    public static void bC(Context context) {
        aHD = context;
        mContext = l.dx(context);
    }

    private static void c(Throwable th) {
        if (IQ == null) {
            IQ = new CopyOnWriteArrayList();
        }
        IQ.add(th);
    }

    public static void d(com.kwad.sdk.g.a<Throwable> aVar) {
        List<Throwable> list = IQ;
        if (list == null) {
            return;
        }
        Iterator<Throwable> it = list.iterator();
        while (it.hasNext()) {
            aVar.accept(it.next());
        }
        IQ.clear();
        IQ = null;
    }

    public static <T> T get(Class<T> cls) {
        return (T) ServiceProviderDelegate.INSTANCE.get(cls);
    }

    public static Context getContext() {
        if (aHG) {
            return HD();
        }
        if (aHE == null) {
            aHE = l.wrapContextIfNeed(mContext);
        }
        return aHE;
    }

    public static <T> void put(Class<T> cls, T t) {
        ServiceProviderDelegate.INSTANCE.put(cls, t);
    }
}
