package com.bianfeng.addpermission.common;

import android.content.Context;
import android.text.TextUtils;

public class PolicyConstantsUtils {
    private static String NOT_NEED_SPLASH = "ADD_PERMISSION_NOT_NEED_SPLASH";
    private static String assetsHtml = "file:android_asset/";
    private static String contentTv = "ANDPERMISSION_POLICY_CONTENT";
    private static String game = "ANDPERMISSION_POLICY_GAME_URL";
    public static String gameFlag = "gameFlag";
    private static String user = "ANDPERMISSION_POLICY_USER_URL";
    public static String userFlag = "userFlag";

    private static String getUserUrl(Context context) {
        String metaData = AddPermissionToolUtils.getMetaData(context, user);
        if (TextUtils.isEmpty(metaData)) {
            return "";
        }
        if (metaData.contains("https") || metaData.contains("http")) {
            return metaData;
        }
        return assetsHtml + metaData;
    }

    private static String getGameUrl(Context context) {
        String metaData = AddPermissionToolUtils.getMetaData(context, game);
        if (TextUtils.isEmpty(metaData)) {
            return "";
        }
        if (metaData.contains("https") || metaData.contains("http")) {
            return metaData;
        }
        return assetsHtml + metaData;
    }

    public static String getContentTv(Context context) {
        String metaData = AddPermissionToolUtils.getMetaData(context, contentTv);
        return TextUtils.isEmpty(metaData) ? "" : metaData;
    }

    public static String getUrl(Context context, String str) {
        if (userFlag.equalsIgnoreCase(str)) {
            return getUserUrl(context);
        }
        return gameFlag.equalsIgnoreCase(str) ? getGameUrl(context) : "";
    }

    public static String getDialogPolicyTitle(String str) {
        return userFlag.equalsIgnoreCase(str) ? "服务协议" : gameFlag.equalsIgnoreCase(str) ? "隐私政策" : "";
    }

    public static boolean isNotNeedSplash(Context context) {
        String metaData = AddPermissionToolUtils.getMetaData(context, NOT_NEED_SPLASH);
        return !TextUtils.isEmpty(metaData) && "YES".equalsIgnoreCase(metaData);
    }
}
