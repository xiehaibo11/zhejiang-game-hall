package com.bykv.vk.openvk;

import android.app.Application;
import android.content.Context;
import java.lang.reflect.Method;

/* JADX INFO: loaded from: classes.dex */
public class TTAppContextHolder {
    private static volatile Context rg;

    public static Context getContext() {
        if (rg == null) {
            setContext(null);
        }
        return rg;
    }

    public static synchronized void setContext(Context context) {
        if (rg == null) {
            if (context != null) {
                rg = context.getApplicationContext();
            } else if (rg.rg() != null) {
                try {
                    rg = rg.rg();
                    if (rg != null) {
                    }
                } catch (Throwable unused) {
                }
            }
        }
    }

    private static class rg {
        private static volatile Application rg;

        public static Application rg() {
            return rg;
        }

        static {
            try {
                Object objDf = df();
                rg = (Application) objDf.getClass().getMethod("getApplication", new Class[0]).invoke(objDf, new Object[0]);
                com.bykv.vk.openvk.api.rg.pt("MyApplication", "application get success");
            } catch (Throwable th) {
                com.bykv.vk.openvk.api.rg.df("MyApplication", "application get failed", th);
            }
        }

        private static Object df() {
            try {
                Method method = Class.forName("android.app.ActivityThread").getMethod("currentActivityThread", new Class[0]);
                method.setAccessible(true);
                return method.invoke(null, new Object[0]);
            } catch (Throwable th) {
                com.bykv.vk.openvk.api.rg.df("MyApplication", "ActivityThread get error, maybe api level <= 4.2.2", th);
                return null;
            }
        }
    }
}
