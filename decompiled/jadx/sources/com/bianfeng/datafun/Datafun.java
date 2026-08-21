package com.bianfeng.datafun;

import android.content.Context;
import com.bianfeng.ymnsdk.ymndatalib.utils.YmndataDeviceInfo;

/* JADX INFO: loaded from: classes.dex */
public class Datafun {
    public static String getDeviceId(Context context) {
        return YmndataDeviceInfo.getDeviceId();
    }
}
