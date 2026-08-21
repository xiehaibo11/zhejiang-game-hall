package com.bianfeng.ymnsdk.util;

import android.content.Context;
import android.content.res.Resources;
import com.bianqi.wpll.BuildConfig;

public class ResourceManger {
    public static int getId(Context context, String str) {
        String[] strArrSplit = str.split("\\.");
        return getId(context, strArrSplit[2], strArrSplit[1]);
    }

    public static int getId(Context context, String str, String str2) {
        try {
            Resources resources = context.getResources();
            context.getPackageName();
            return resources.getIdentifier(str, str2, BuildConfig.APPLICATION_ID);
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }
}
