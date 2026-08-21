package com.bianfeng.ymnsdk.ymndatalib.bean.other;

import android.content.Context;
import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;
import com.bianfeng.ymnsdk.ymndatalib.a;
import com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent;
import com.bianfeng.ymnsdk.ymndatalib.bean.base.InitEvent;
import com.bianfeng.ymnsdk.ymndatalib.c;
import com.bianfeng.ymnsdk.ymndatalib.f;

/* JADX INFO: loaded from: classes.dex */
public class OtherEventMap {
    public static final String key = "ymn_app_install";
    public static volatile OtherEventMap otherEventMap;

    public static OtherEventMap getInstance() {
        if (otherEventMap == null) {
            synchronized (OtherEventMap.class) {
                if (otherEventMap == null) {
                    otherEventMap = new OtherEventMap();
                }
            }
        }
        return otherEventMap;
    }

    public void appInstall() {
        if (SharedPreferencesUtils.getBoolean(key)) {
            return;
        }
        try {
            SharedPreferencesUtils.put(key, true);
            f.a().a(new BaseEvent(new c(), 5100, "app_install").toString());
        } catch (Exception e) {
        }
    }

    public void appOnDestroy() {
        f.a().a(new BaseEvent(new c(), 5203, "app_destroy").toString());
    }

    public void appOnPaues() {
        f.a().a(new BaseEvent(new c(), 5202, "app_paues").toString());
    }

    public void appOnResume() {
        f.a().a(new BaseEvent(new c(), 5201, "app_resume").toString());
    }

    public void appStart() {
        f.a().a(new InitEvent(new c(), 5200, "app_launch").toString());
    }

    public void initSdkReturn(int i, String str) {
        f.a().a(new BaseEvent(new a(i, str), 12001, "init_sdk_return").toString());
    }

    public void postPermissionEvent(Context context) {
    }

    public void appStart(Context context) {
        f.a().a(new InitEvent(new c(), 5200, "app_launch", context).toString());
    }
}
