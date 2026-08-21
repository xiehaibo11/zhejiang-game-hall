package com.kwad.sdk.utils;

import android.app.Activity;
import android.content.Context;
import android.os.Build;
import android.view.Window;
import com.kwad.sdk.service.ServiceProvider;

/* JADX INFO: loaded from: classes2.dex */
public final class ai {
    public static boolean IN() {
        return IO();
    }

    public static boolean IO() {
        return ServiceProvider.HD().getApplicationContext().getResources().getConfiguration().orientation == 1;
    }

    public static void b(Context context, boolean z) {
        try {
            Activity activityDr = com.kwad.sdk.m.l.dr(context);
            if (activityDr == null) {
                return;
            }
            if (z) {
                if (Build.VERSION.SDK_INT < 19) {
                    activityDr.getWindow().getDecorView().setSystemUiVisibility(8);
                    return;
                } else {
                    activityDr.getWindow().getDecorView().setSystemUiVisibility(1792);
                    return;
                }
            }
            if (Build.VERSION.SDK_INT < 19) {
                activityDr.getWindow().getDecorView().setSystemUiVisibility(0);
            } else {
                activityDr.getWindow().getDecorView().setSystemUiVisibility(3846);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static boolean ck(Context context) {
        Activity activityDr = com.kwad.sdk.m.l.dr(context);
        if (activityDr != null) {
            Window window = activityDr.getWindow();
            z = (window.getAttributes().flags & 1024) == 1024;
            window.setFlags(1024, 1024);
        }
        return z;
    }

    public static void cl(Context context) {
        Activity activityDr = com.kwad.sdk.m.l.dr(context);
        if (activityDr != null) {
            activityDr.getWindow().clearFlags(1024);
        }
    }

    public static void cm(Context context) {
        Activity activityDr = com.kwad.sdk.m.l.dr(context);
        if (activityDr != null) {
            activityDr.setRequestedOrientation(0);
        }
    }

    public static void cn(Context context) {
        Activity activityDr = com.kwad.sdk.m.l.dr(context);
        if (activityDr != null) {
            activityDr.setRequestedOrientation(1);
        }
    }
}
