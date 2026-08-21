package com.bianfeng.addpermission.common;

import android.app.Activity;
import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.os.Build;
import com.heytap.mcssdk.constant.MessageConstant;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.UnsupportedEncodingException;
import org.json.JSONObject;

public class AddPermissionToolUtils {
    public static void sysfunc_hide_BottomUIMenu(Activity activity) {
        if (Build.VERSION.SDK_INT > 11 && Build.VERSION.SDK_INT < 19) {
            activity.getWindow().getDecorView().setSystemUiVisibility(8);
        } else if (Build.VERSION.SDK_INT >= 19) {
            activity.getWindow().getDecorView().setSystemUiVisibility(MessageConstant.MessageType.MESSAGE_LAUNCH_ALARM);
        }
    }

    public static String getMetaData(Context context, String str) {
        try {
            ApplicationInfo applicationInfo = context.getPackageManager().getApplicationInfo(context.getPackageName(), 128);
            return applicationInfo.metaData.get(str) != null ? (String) applicationInfo.metaData.get(str) : "";
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public static String getParamsInfo(Context context, String str) {
        try {
            return new JSONObject(getString(context.getAssets().open("usdk.cfg"))).getJSONObject("addpermission").getString(str);
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public static String getString(InputStream inputStream) {
        InputStreamReader inputStreamReader;
        try {
            inputStreamReader = new InputStreamReader(inputStream, "UTF-8");
        } catch (UnsupportedEncodingException e) {
            e.printStackTrace();
            inputStreamReader = null;
        }
        BufferedReader bufferedReader = new BufferedReader(inputStreamReader);
        StringBuffer stringBuffer = new StringBuffer("");
        while (true) {
            try {
                String line = bufferedReader.readLine();
                if (line == null) {
                    break;
                }
                stringBuffer.append(line);
                stringBuffer.append("\n");
            } catch (IOException e2) {
                e2.printStackTrace();
            }
        }
        return stringBuffer.toString();
    }

    public static String getAppName(Context context) {
        try {
            return context.getPackageManager().getPackageInfo(context.getPackageName(), 0).applicationInfo.loadLabel(context.getPackageManager()).toString();
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
            return "边锋";
        }
    }
}
