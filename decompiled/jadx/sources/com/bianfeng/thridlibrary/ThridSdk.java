package com.bianfeng.thridlibrary;

import android.app.Activity;
import com.bianfeng.thridlibrary.datafun.YmnDatafunUtils;

/* JADX INFO: loaded from: classes.dex */
public class ThridSdk {
    public static void init(Activity activity) {
        YmnDatafunUtils.getInstance().onInit(activity);
    }

    public static GsonUtils getGson() {
        return GsonUtils.getInstance();
    }

    public static ImageLoadUtils getImageLoad() {
        return ImageLoadUtils.getInstance();
    }

    public static YmnDatafunUtils getYmnDatafun() {
        return YmnDatafunUtils.getInstance();
    }

    public static void onResume() {
        YmnDatafunUtils.getInstance().onResume();
    }

    public static void onDestory() {
        YmnDatafunUtils.getInstance().onDestory();
    }
}
