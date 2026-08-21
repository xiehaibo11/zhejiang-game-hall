package com.bianfeng.splitscreenlib.utils;

import android.app.Activity;
import android.util.Log;

public class YmnH5GameUtils {
    public static void checkOnCreat(Activity activity) {
        if (activity == null) {
            Log.e("ymnsdk: ", "没有调onCreat方法");
        }
    }
}
