package com.bianfeng.ymnsdk.util;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
public class YmnsdkTypeUtils {
    public static final String YMNSDK_NEW = "ymnsdk_new";
    public static final String YMNSDK_OLD = "ymnsdk_old";
    public static final String YMNSDK_PAY_NEED_LOGININFO = "YMNSDK_PAY_NEED_LOGININFO";
    public static final String YMNSDK_TRADE_NEW = "ymnsdk_trade_new";
    public static final String YMNSDK_TRADE_TYPE = "YMNSDK_TRADE_TYPE";
    public static final String YMNSDK_TYPE = "YMNSDK_TYPE";
    public static final String YNN_INIT_ALONE = "YNN_INIT_ALONE";

    private static String getYmnsdkType() {
        return YmnAppContext.getMetaDataValueString(YMNSDK_TYPE);
    }

    public static boolean isNewLogin() {
        String type = getYmnsdkType();
        if (YMNSDK_NEW.equals(type)) {
            return true;
        }
        return false;
    }

    public static boolean getYmnsdkPayNeedLogininfo() {
        String s = YmnAppContext.getMetaDataValueString(YMNSDK_PAY_NEED_LOGININFO);
        return !TextUtils.isEmpty(s);
    }

    private static String getYmnsdkTradeType() {
        return YmnAppContext.getMetaDataValueString(YMNSDK_TRADE_TYPE);
    }

    public static boolean isNewTrade() {
        String type = getYmnsdkTradeType();
        if (YMNSDK_TRADE_NEW.equals(type)) {
            return true;
        }
        return false;
    }

    public static boolean isInitAlone() {
        String str = YmnAppContext.getMetaDataValueString(YNN_INIT_ALONE);
        if (str != null && str.equals("alone")) {
            return true;
        }
        return false;
    }
}
