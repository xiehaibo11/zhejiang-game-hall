package com.kwad.sdk.m;

import android.app.Application;
import android.content.Context;
import com.kwad.sdk.api.core.ResContext;
import com.kwad.sdk.api.loader.Wrapper;
import com.kwad.sdk.service.ServiceProvider;

/* JADX INFO: loaded from: classes2.dex */
final class j {
    /* JADX WARN: Multi-variable type inference failed */
    static Context at(Context context) {
        return ((ResContext) context).getDelegatedContext();
    }

    static boolean au(Context context) {
        return context instanceof ResContext;
    }

    /* JADX INFO: renamed from: do, reason: not valid java name */
    static Context m23do(Context context) {
        Context applicationContext = unwrapContextIfNeed(context).getApplicationContext();
        if (applicationContext instanceof Application) {
            return applicationContext;
        }
        for (int i = 0; i < 10; i++) {
            applicationContext = applicationContext.getApplicationContext();
            if (applicationContext instanceof Application) {
                return applicationContext;
            }
            if (au(applicationContext)) {
                applicationContext = at(applicationContext);
            }
        }
        return applicationContext;
    }

    public static void onDestroy(Context context) {
        Wrapper.onDestroy(context);
    }

    static Context unwrapContextIfNeed(Context context) {
        if (au(context)) {
            context = at(context);
        }
        if (!au(context)) {
            return context;
        }
        RuntimeException runtimeException = null;
        for (int i = 0; i < 10; i++) {
            if (runtimeException == null) {
                RuntimeException runtimeException2 = new RuntimeException("expect normalContext --context:" + context.getClass().getName() + "--initFinish:" + ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).hasInitFinish());
                ((com.kwad.sdk.service.a.d) ServiceProvider.get(com.kwad.sdk.service.a.d.class)).gatherException(runtimeException2);
                runtimeException = runtimeException2;
            }
            context = at(context);
            if (!au(context)) {
                return context;
            }
        }
        return context;
    }

    static Context wrapContextIfNeed(Context context) {
        return Wrapper.wrapContextIfNeed(context);
    }
}
