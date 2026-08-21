package com.vivo.push.util;

import android.content.Context;
import java.lang.reflect.Method;

/* JADX INFO: loaded from: classes4.dex */
public class ContextDelegate {
    private static final String TAG = "ContextDelegate";
    private static Context mContext;
    private static Method mCreateCredentialProtectedStorageContext;
    private static Method mCreateDeviceProtectedStorageContext;
    private static boolean mDelegateEnable;
    private static Boolean mIsFbeProject;

    final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static ContextDelegate f7943a = new ContextDelegate();
    }

    private static Context createCredentialProtectedStorageContext(Context context) {
        try {
            if (mCreateCredentialProtectedStorageContext == null) {
                mCreateCredentialProtectedStorageContext = Context.class.getMethod("createCredentialProtectedStorageContext", new Class[0]);
            }
            return (Context) mCreateCredentialProtectedStorageContext.invoke(context, new Object[0]);
        } catch (Exception e) {
            e.printStackTrace();
            return context;
        }
    }

    private static Context createDeviceProtectedStorageContext(Context context) {
        try {
            if (mCreateDeviceProtectedStorageContext == null) {
                mCreateDeviceProtectedStorageContext = Context.class.getMethod("createDeviceProtectedStorageContext", new Class[0]);
            }
            return (Context) mCreateDeviceProtectedStorageContext.invoke(context, new Object[0]);
        } catch (Exception e) {
            e.printStackTrace();
            return context;
        }
    }

    public static Context getContext(Context context) {
        if (!isFBEProject() || context == null) {
            return context;
        }
        Context context2 = mContext;
        if (context2 != null) {
            return context2;
        }
        setContext(context);
        return mContext;
    }

    public static ContextDelegate getInstance() {
        return a.f7943a;
    }

    public static boolean isFBEProject() {
        if (mIsFbeProject == null) {
            try {
                mIsFbeProject = Boolean.valueOf(com.sigmob.sdk.base.h.x.equals(j.a("ro.crypto.type", "unknow")));
                p.b(TAG, "mIsFbeProject = " + mIsFbeProject.toString());
            } catch (Exception e) {
                p.a(TAG, "mIsFbeProject = " + e.getMessage());
            }
        }
        Boolean bool = mIsFbeProject;
        if (bool == null) {
            return false;
        }
        return bool.booleanValue();
    }

    private static void setAppContext() {
        Context context = mContext;
        if (context == null) {
            return;
        }
        setContext(context);
    }

    private static void setContext(Context context) {
        mContext = !mDelegateEnable ? createCredentialProtectedStorageContext(context) : createDeviceProtectedStorageContext(context);
    }

    public static void setEnable(boolean z) {
        mDelegateEnable = z;
        setAppContext();
    }
}
