package com.bianfeng.loginlib.utils;

import android.text.TextUtils;
import com.bianfeng.utilslib.Logger;
import com.bianfeng.utilslib.UtilsSdk;

public class UrlManagerUtils {
    private static final String H5_LOGIN_URL = "BF_H5SDK_LOGIN_URL";
    private static final String login_action = "/channel_games/door";
    private static final String mURL = "https://h5.starsshine1.com";
    private static final String url_test = "https://h5-test.starsshine1.com";

    public static String getUrl() {
        String metaDataValue = UtilsSdk.getAppConfig().getMetaDataValue(H5_LOGIN_URL);
        if (TextUtils.isEmpty(metaDataValue)) {
            metaDataValue = mURL;
        }
        if (checkDebug()) {
            metaDataValue = "https://h5-test.starsshine1.com";
        }
        String str = metaDataValue + login_action;
        Logger.getInstance().i("login-->" + str);
        return str;
    }

    public static boolean checkDebug() {
        try {
            if (UtilsSdk.getFileUtils().isSdcardReady()) {
                return UtilsSdk.getFileUtils().isSdcardFileExist("bianfeng/sdk/h5_login_debug");
            }
            return false;
        } catch (Exception unused) {
            return false;
        }
    }
}
