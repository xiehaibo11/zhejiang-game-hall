package com.ymnsdk.replugin.ui;

import android.app.Activity;
import android.content.Context;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class ResourceManger {
    public static int getId(Context context, String str, String str2) {
        if (context == null) {
            return 0;
        }
        if ((context instanceof Activity) && ((Activity) context).isFinishing()) {
            return 0;
        }
        return context.getResources().getIdentifier(str, str2, context.getPackageName());
    }

    public static int getId(Context context, String str) {
        String[] strArrSplit = str.split("\\.");
        if (!isVaildContent(context)) {
            return 0;
        }
        return context.getResources().getIdentifier(strArrSplit[2], strArrSplit[1], context.getPackageName());
    }

    public static boolean isVaildContent(Context context) {
        return (context == null || ((context instanceof Activity) && ((Activity) context).isFinishing())) ? false : true;
    }
}
