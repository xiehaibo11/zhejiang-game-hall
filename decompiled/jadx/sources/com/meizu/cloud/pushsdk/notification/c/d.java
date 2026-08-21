package com.meizu.cloud.pushsdk.notification.c;

import android.content.Context;
import android.content.res.AssetManager;
import com.meizu.cloud.pushinternal.DebugLogger;

/* JADX INFO: loaded from: classes3.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static d f4623a;
    private AssetManager b;

    private d(Context context) {
        b(context);
    }

    public static d a(Context context) {
        if (f4623a == null) {
            f4623a = new d(context);
        }
        return f4623a;
    }

    private void b(Context context) {
        this.b = context.getAssets();
    }

    public int a(Context context, String str, String str2) {
        DebugLogger.i("ResourceReader", "Get resource type " + str2 + " " + str);
        return context.getResources().getIdentifier(str, str2, context.getApplicationInfo().packageName);
    }
}
