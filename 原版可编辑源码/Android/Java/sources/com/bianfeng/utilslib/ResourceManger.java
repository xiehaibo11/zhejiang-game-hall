package com.bianfeng.utilslib;

import android.app.Activity;
import android.content.Context;

public class ResourceManger {
    protected ResourceManger() {
    }

    public int getId(Context context, String str, String str2) {
        if (context == null) {
            return 0;
        }
        if ((context instanceof Activity) && ((Activity) context).isFinishing()) {
            return 0;
        }
        return context.getResources().getIdentifier(str, str2, context.getPackageName());
    }

    public int getId(Context context, String str) {
        String[] strArrSplit = str.split("\\.");
        if (!isVaildContent(context)) {
            return 0;
        }
        return context.getResources().getIdentifier(strArrSplit[2], strArrSplit[1], context.getPackageName());
    }

    public boolean isVaildContent(Context context) {
        return (context == null || ((context instanceof Activity) && ((Activity) context).isFinishing())) ? false : true;
    }
}
