package com.bianfeng.toponad.common;

import android.app.Activity;
import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.util.Logger;
import com.heytap.mcssdk.constant.MessageConstant;

public class ToponAdToolUtils {
    public static void sysfunc_hide_BottomUIMenu(Activity activity) {
        if (Build.VERSION.SDK_INT > 11 && Build.VERSION.SDK_INT < 19) {
            activity.getWindow().getDecorView().setSystemUiVisibility(8);
        } else if (Build.VERSION.SDK_INT >= 19) {
            activity.getWindow().getDecorView().setSystemUiVisibility(MessageConstant.MessageType.MESSAGE_LAUNCH_ALARM);
        }
    }

    public static String getMetaDataStr(Context context, String str) {
        String str2;
        try {
            str2 = (String) context.getPackageManager().getApplicationInfo(context.getPackageName(), 128).metaData.get(str);
        } catch (Exception e) {
            Logger.i("头条后台配置测试没有带x" + e.getMessage());
            str2 = null;
        }
        if (!str.equals("BF_ACTIVITY_MAIN") && str.equals("TOPONAD_MAIN_ACTIVITY")) {
        }
        return str2;
    }

    public static String getMetaDataInt(Context context, String str) {
        String str2;
        try {
            str2 = (String) context.getPackageManager().getApplicationInfo(context.getPackageName(), 128).metaData.get(str);
        } catch (Exception e) {
            Logger.i("头条后台配置测试没有带x" + e.getMessage());
            str2 = null;
        }
        return getSplit(str2);
    }

    private static String getSplit(String str) {
        if (TextUtils.isEmpty(str)) {
            Logger.i("getSplit接到的字符串为空");
            return "";
        }
        StringBuilder sb = new StringBuilder();
        sb.append(str.charAt(str.length() - 1));
        sb.append("");
        return "x".equalsIgnoreCase(sb.toString()) ? str.substring(0, str.length() - 1) : str;
    }

    public static void hide_BottomUIMenu(Activity activity) {
        if (Build.VERSION.SDK_INT > 11 && Build.VERSION.SDK_INT < 19) {
            activity.getWindow().getDecorView().setSystemUiVisibility(8);
        } else if (Build.VERSION.SDK_INT >= 19) {
            activity.getWindow().getDecorView().setSystemUiVisibility(MessageConstant.MessageType.MESSAGE_LAUNCH_ALARM);
        }
    }
}
