package com.kwad.sdk.m;

import android.content.Context;
import android.content.res.Resources;
import com.kwad.sdk.api.core.IKsAdSDK;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.s;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import java.lang.reflect.Field;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes2.dex */
public class e {
    static final /* synthetic */ boolean $assertionsDisabled = false;
    private final AtomicBoolean IP;
    private Resources aMA;
    private h aMB;
    private boolean aMC;
    private ClassLoader aMD;
    private Resources aMz;

    static class a {
        private static final e aME = new e(0);
    }

    private e() {
        this.IP = new AtomicBoolean(false);
    }

    /* synthetic */ e(byte b) {
        this();
    }

    public static e KO() {
        return a.aME;
    }

    private boolean KP() {
        Context contextHD;
        Object objA;
        try {
            contextHD = ServiceProvider.HD();
        } catch (Throwable th) {
            ((com.kwad.sdk.service.a.d) ServiceProvider.get(com.kwad.sdk.service.a.d.class)).gatherException(th);
        }
        if (!l.dw(contextHD)) {
            ((com.kwad.sdk.service.a.d) ServiceProvider.get(com.kwad.sdk.service.a.d.class)).gatherException(new IllegalArgumentException("KSPlugin unwrapContextIfNeed fail"));
            return false;
        }
        Class<?> cls = Class.forName("com.kwad.sdk.api.loader.Loader", false, getClass().getClassLoader());
        Object objInvoke = cls.getDeclaredMethod(MonitorConstants.CONNECT_TYPE_GET, new Class[0]).invoke(null, new Object[0]);
        for (Field field : cls.getDeclaredFields()) {
            if (field.getType() != IKsAdSDK.class && field.getType() != Context.class && field.getType() != AtomicBoolean.class && (objA = s.a(field, objInvoke)) != null) {
                for (Field field2 : objA.getClass().getDeclaredFields()) {
                    if (field2.getType() == Resources.class) {
                        field2.setAccessible(true);
                        Resources resources = (Resources) field2.get(objA);
                        Resources resources2 = contextHD.getResources();
                        h hVar = new h(resources, resources2);
                        s.a(field2, objA, hVar);
                        this.aMz = resources2;
                        this.aMA = resources;
                        this.aMB = hVar;
                        return true;
                    }
                }
            }
        }
        return false;
    }

    private static boolean xK() {
        return ((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).xK();
    }

    private static boolean xL() {
        return ((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).xL();
    }

    public final boolean Jr() {
        return this.IP.get();
    }

    public final ClassLoader getClassLoader() {
        return this.aMD;
    }

    public final Resources getResources() {
        return this.aMB;
    }

    public final void init() {
        if (this.IP.get()) {
            return;
        }
        try {
            if (((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getIsExternal()) {
                if (xK() && KP()) {
                    this.aMD = getClass().getClassLoader();
                    i.bW(xL());
                    com.kwad.sdk.core.e.c.d("KSDY/KSPlugin", toString());
                    this.aMC = true;
                } else {
                    this.aMC = false;
                }
            }
        } catch (Throwable th) {
            ((com.kwad.sdk.service.a.d) ServiceProvider.get(com.kwad.sdk.service.a.d.class)).gatherException(th);
        }
        this.IP.set(true);
    }

    public String toString() {
        return "KSPlugin{mHostResources=" + this.aMz + ", mResResources=" + this.aMA + ", mPluginResources=" + this.aMB + ", mEnable=" + this.aMC + '}';
    }
}
