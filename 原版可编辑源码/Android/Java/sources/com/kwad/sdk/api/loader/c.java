package com.kwad.sdk.api.loader;

import android.app.Application;
import android.content.Context;
import android.content.pm.ApplicationInfo;

public final class c {

    static class a extends Application {
        private final Context aig;

        a(Context context) {
            this.aig = context;
        }

        @Override
        public final Context getApplicationContext() {
            return this.aig;
        }

        @Override
        public final ApplicationInfo getApplicationInfo() {
            return this.aig.getApplicationInfo();
        }
    }

    public static Context aw(Context context) {
        if (context == null) {
            return null;
        }
        Context applicationContext = context.getApplicationContext();
        return applicationContext == null ? context : !applicationContext.getClassLoader().equals(context.getClassLoader()) ? new a(context) : context.getApplicationContext();
    }
}
