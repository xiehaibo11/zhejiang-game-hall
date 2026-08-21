package com.bianfeng.roomlib.utils;

import android.text.TextUtils;
import com.bianfeng.utilslib.Logger;
import com.bianfeng.utilslib.UtilsSdk;

/* JADX INFO: loaded from: classes.dex */
public class UrlManagerUtils {
    private static final String H5_ROOM_WEB_URL = "BF_H5SDK_ROOM_WEB_URL";
    private static final String room_web_action = "/indexNew.html?";
    private static final String url_room_web = "https://h5-sdk.starsshine1.com/h5_hall";
    private static final String url_room_web_test = "https://h5-test.starsshine1.com/h5_hall";

    public static String getRoomWebUrl() {
        String metaDataValue = UtilsSdk.getAppConfig().getMetaDataValue(H5_ROOM_WEB_URL);
        if (TextUtils.isEmpty(metaDataValue)) {
            metaDataValue = url_room_web;
        }
        if (checkDebug()) {
            metaDataValue = url_room_web_test;
        }
        String str = metaDataValue + room_web_action;
        Logger.getInstance().i("RoomWebUrl-->" + str);
        return str;
    }

    public static boolean checkDebug() {
        try {
            if (UtilsSdk.getFileUtils().isSdcardReady()) {
                return UtilsSdk.getFileUtils().isSdcardFileExist("bianfeng/sdk/h5_room_debug");
            }
            return false;
        } catch (Exception unused) {
            return false;
        }
    }
}
