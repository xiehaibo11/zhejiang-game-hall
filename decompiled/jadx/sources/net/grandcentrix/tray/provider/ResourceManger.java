package net.grandcentrix.tray.provider;

import android.content.Context;

/* JADX INFO: loaded from: classes4.dex */
public class ResourceManger {
    public static int getId(Context context, String sign) {
        String[] strs = sign.split("\\.");
        return getId(context, strs[2], strs[1]);
    }

    public static int getId(Context context, String name, String defType) {
        try {
            return context.getResources().getIdentifier(name, defType, context.getPackageName());
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }
}
