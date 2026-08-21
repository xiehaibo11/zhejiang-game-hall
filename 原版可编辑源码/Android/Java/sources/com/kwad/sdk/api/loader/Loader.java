package com.kwad.sdk.api.loader;

import android.content.Context;
import android.content.res.Resources;
import android.text.TextUtils;
import com.kwad.components.offline.api.BuildConfig;
import com.kwad.sdk.api.KsAdSDK;
import com.kwad.sdk.api.SdkConfig;
import com.kwad.sdk.api.core.IKsAdSDK;
import com.kwad.sdk.api.core.KSLifecycleObserver;
import com.kwad.sdk.api.core.KsAdSdkDynamicApi;
import com.kwad.sdk.api.proxy.IComponentProxy;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.tkay.core.common.c.d;
import java.util.concurrent.atomic.AtomicBoolean;

public class Loader {
    static final boolean $assertionsDisabled = false;
    private static Context mContext;
    private final AtomicBoolean IP;
    private IKsAdSDK aiL;
    private k aiM;

    static class a {
        private static final Loader aiN = new Loader(0);
    }

    private Loader() {
        this.aiM = null;
        this.IP = new AtomicBoolean(false);
    }

    Loader(byte b) {
        this();
    }

    static synchronized IKsAdSDK a(ClassLoader classLoader) {
        Object objInvoke;
        try {
            objInvoke = Class.forName(((KsAdSdkDynamicApi) IKsAdSDK.class.getAnnotation(KsAdSdkDynamicApi.class)).value(), true, classLoader).getDeclaredMethod(MonitorConstants.CONNECT_TYPE_GET, new Class[0]).invoke(null, new Object[0]);
            if (objInvoke == null) {
                throw new RuntimeException("Can not get sdk form " + classLoader);
            }
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
        return (IKsAdSDK) objInvoke;
    }

    private boolean aC(Context context) {
        String strAy = g.ay(context);
        String strAz = g.az(context);
        if (TextUtils.isEmpty(strAy) && TextUtils.isEmpty(strAz)) {
            return false;
        }
        if (!TextUtils.isEmpty(strAz) && g.F(strAz, strAy)) {
            g.k(context, strAz);
            u(context, strAy);
            g.l(context, "");
            strAy = strAz;
        }
        return !TextUtils.isEmpty(strAy);
    }

    private static void aD(Context context) {
        String strAA = g.aA(context);
        boolean zB = t.b(context, g.air, false);
        if (TextUtils.isEmpty(strAA) || !strAA.equals(BuildConfig.VERSION_NAME) || zB) {
            String strAy = g.ay(context);
            g.k(context, "");
            g.l(context, "");
            t.a(context, g.air, false);
            h.j(h.p(context, strAy));
            g.m(context, BuildConfig.VERSION_NAME);
        }
    }

    public static Loader get() {
        return a.aiN;
    }

    private static void u(Context context, String str) {
        h.t(context, str);
    }

    private static void yu() {
        try {
            int iYm = com.kwad.sdk.api.c.ym();
            if (iYm > 0) {
                try {
                    d.ax(mContext).setDefaultUncaughtExceptionHandler(Thread.getDefaultUncaughtExceptionHandler());
                    Thread.setDefaultUncaughtExceptionHandler(d.ax(mContext));
                    d.ax(mContext).bP(iYm);
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        } catch (Throwable th2) {
            th2.printStackTrace();
        }
    }

    public Context getContext() {
        return mContext;
    }

    public ClassLoader getExternalClassLoader() {
        k kVar = this.aiM;
        if (kVar != null) {
            return kVar.getClassLoader();
        }
        return null;
    }

    public Resources getExternalResource() {
        k kVar = this.aiM;
        if (kVar != null) {
            return kVar.yr();
        }
        return null;
    }

    public ClassLoader getRealClassLoader() {
        k kVar = this.aiM;
        return kVar != null ? kVar.getClassLoader() : getClass().getClassLoader();
    }

    public IKsAdSDK init(Context context, ClassLoader classLoader) {
        if (this.IP.get()) {
            return this.aiL;
        }
        mContext = context.getApplicationContext();
        aD(context);
        if (aC(context)) {
            this.aiM = k.a(context, classLoader, g.ay(context));
        }
        k kVar = this.aiM;
        if (kVar == null) {
            IKsAdSDK iKsAdSDKA = a(getClass().getClassLoader());
            this.aiL = iKsAdSDKA;
            iKsAdSDKA.setIsExternal(false);
        } else {
            IKsAdSDK iKsAdSDKYs = kVar.ys();
            this.aiL = iKsAdSDKYs;
            iKsAdSDKYs.setIsExternal(true);
        }
        com.kwad.sdk.api.c.a(this.aiL);
        if (this.aiM != null) {
            yu();
        }
        this.IP.set(true);
        return this.aiL;
    }

    public boolean isExternalLoaded() {
        return this.aiM != null;
    }

    public <T extends IComponentProxy> T newComponentProxy(Context context, Class<?> cls, Object obj) {
        if (!KsAdSDK.sHasInit.get()) {
            KsAdSDK.init(context, SdkConfig.create(t.getString(context, d.a.a)));
        }
        return (T) this.aiL.newComponentProxy(cls, obj);
    }

    public <T> T newInstance(Class<T> cls) {
        if (!KsAdSDK.sHasInit.get()) {
            Context application = mContext;
            if (application == null) {
                application = KSLifecycleObserver.getInstance().getApplication();
            }
            KsAdSDK.init(application, SdkConfig.create(t.getString(application, d.a.a)));
        }
        return (T) this.aiL.newInstance(cls);
    }

    public void rest() {
        this.IP.set(false);
        mContext = null;
        this.aiL = null;
        this.aiM = null;
    }
}
