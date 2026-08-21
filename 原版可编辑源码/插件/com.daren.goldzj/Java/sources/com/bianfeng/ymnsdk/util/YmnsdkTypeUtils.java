package com.bianfeng.ymnsdk.util;

import android.text.TextUtils;

public class YmnsdkTypeUtils {
    public static final String YMNSDK_NEW = "ymnsdk_new";
    public static final String YMNSDK_OLD = "ymnsdk_old";
    public static final String YMNSDK_PAY_NEED_LOGININFO = "YMNSDK_PAY_NEED_LOGININFO";
    public static final String YMNSDK_TRADE_NEW = "ymnsdk_trade_new";
    public static final String YMNSDK_TRADE_TYPE = "YMNSDK_TRADE_TYPE";
    public static final String YMNSDK_TYPE = "YMNSDK_TYPE";

    public static boolean getYmnsdkPayNeedLogininfo() {
        return !TextUtils.isEmpty(YmnAppContext.getMetaDataValueString(YMNSDK_PAY_NEED_LOGININFO));
    }

    private static String getYmnsdkTradeType() {
        return YmnAppContext.getMetaDataValueString(YMNSDK_TRADE_TYPE);
    }

    private static String getYmnsdkType() {
        return YmnAppContext.getMetaDataValueString(YMNSDK_TYPE);
    }

    public static boolean isNewLogin() {
        return YMNSDK_NEW.equals(getYmnsdkType());
    }

    public static boolean isNewTrade() {
        return YMNSDK_TRADE_NEW.equals(getYmnsdkTradeType());
    }
}
