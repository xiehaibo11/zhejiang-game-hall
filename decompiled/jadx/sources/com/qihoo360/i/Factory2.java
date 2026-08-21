package com.qihoo360.i;

import android.app.Activity;
import android.app.Service;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import com.qihoo360.loader2.PluginLibraryInternalProxy;
import org.json.JSONArray;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public final class Factory2 {
    public static PluginLibraryInternalProxy sPLProxy;

    public static final Context createActivityContext(Activity activity, Context context) {
        return sPLProxy.createActivityContext(activity, context);
    }

    public static final void handleActivityCreateBefore(Activity activity, Bundle bundle) {
        sPLProxy.handleActivityCreateBefore(activity, bundle);
    }

    public static final void handleActivityCreate(Activity activity, Bundle bundle) {
        sPLProxy.handleActivityCreate(activity, bundle);
    }

    public static final void handleActivityDestroy(Activity activity) {
        sPLProxy.handleActivityDestroy(activity);
    }

    public static final void handleRestoreInstanceState(Activity activity, Bundle bundle) {
        sPLProxy.handleRestoreInstanceState(activity, bundle);
    }

    public static final void handleServiceCreate(Service service) {
        sPLProxy.handleServiceCreate(service);
    }

    public static final void handleServiceDestroy(Service service) {
        sPLProxy.handleServiceDestroy(service);
    }

    public static final boolean startActivity(Context context, Intent intent) {
        return sPLProxy.startActivity(context, intent);
    }

    public static final boolean startActivity(Activity activity, Intent intent) {
        return sPLProxy.startActivity(activity, intent);
    }

    public static final boolean startActivity(Context context, Intent intent, String str, String str2, int i, boolean z) {
        return sPLProxy.startActivity(context, intent, str, str2, i, z);
    }

    public static final boolean startActivityForResult(Activity activity, Intent intent, int i, Bundle bundle) {
        return sPLProxy.startActivityForResult(activity, intent, i, bundle);
    }

    public static final JSONArray fetchPlugins(String str) {
        return sPLProxy.fetchPlugins(str);
    }

    public static final boolean registerDynamicClass(String str, String str2, String str3, String str4) {
        return sPLProxy.registerDynamicClass(str, str2, str3, str4);
    }

    public static final boolean registerDynamicClass(String str, String str2, String str3, Class cls) {
        return sPLProxy.registerDynamicClass(str, str2, str3, cls);
    }

    public static final boolean isDynamicClass(String str, String str2) {
        return sPLProxy.isDynamicClass(str, str2);
    }

    public static void unregisterDynamicClass(String str) {
        sPLProxy.unregisterDynamicClass(str);
    }

    public static final String getPluginByDynamicClass(String str) {
        return sPLProxy.getPluginByDynamicClass(str);
    }
}
