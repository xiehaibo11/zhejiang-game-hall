package com.bianfeng.thridlibrary;

public class ThridSdk {
    public ThridSdk() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.thridlibrary.GsonUtils getGson() {
            com.bianfeng.thridlibrary.GsonUtils r0 = com.bianfeng.thridlibrary.GsonUtils.getInstance()
            return r0
    }

    public static com.bianfeng.thridlibrary.ImageLoadUtils getImageLoad() {
            com.bianfeng.thridlibrary.ImageLoadUtils r0 = com.bianfeng.thridlibrary.ImageLoadUtils.getInstance()
            return r0
    }

    public static com.bianfeng.thridlibrary.datafun.YmnDatafunUtils getYmnDatafun() {
            com.bianfeng.thridlibrary.datafun.YmnDatafunUtils r0 = com.bianfeng.thridlibrary.datafun.YmnDatafunUtils.getInstance()
            return r0
    }

    public static void init(android.app.Activity r1) {
            com.bianfeng.thridlibrary.datafun.YmnDatafunUtils r0 = com.bianfeng.thridlibrary.datafun.YmnDatafunUtils.getInstance()
            r0.onInit(r1)
            return
    }

    public static void onDestory() {
            com.bianfeng.thridlibrary.datafun.YmnDatafunUtils r0 = com.bianfeng.thridlibrary.datafun.YmnDatafunUtils.getInstance()
            r0.onDestory()
            return
    }

    public static void onResume() {
            com.bianfeng.thridlibrary.datafun.YmnDatafunUtils r0 = com.bianfeng.thridlibrary.datafun.YmnDatafunUtils.getInstance()
            r0.onResume()
            return
    }
}
