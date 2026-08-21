package com.bianfeng.ymnsdk.util;

public class YmnsdkTypeUtils {
    public static final java.lang.String YMNSDK_NEW = "ymnsdk_new";
    public static final java.lang.String YMNSDK_OLD = "ymnsdk_old";
    public static final java.lang.String YMNSDK_PAY_NEED_LOGININFO = "YMNSDK_PAY_NEED_LOGININFO";
    public static final java.lang.String YMNSDK_TRADE_NEW = "ymnsdk_trade_new";
    public static final java.lang.String YMNSDK_TRADE_TYPE = "YMNSDK_TRADE_TYPE";
    public static final java.lang.String YMNSDK_TYPE = "YMNSDK_TYPE";

    public YmnsdkTypeUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean getYmnsdkPayNeedLogininfo() {
            java.lang.String r0 = "YMNSDK_PAY_NEED_LOGININFO"
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.getMetaDataValueString(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r0 = r0 ^ 1
            return r0
    }

    private static java.lang.String getYmnsdkTradeType() {
            java.lang.String r0 = "YMNSDK_TRADE_TYPE"
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.getMetaDataValueString(r0)
            return r0
    }

    private static java.lang.String getYmnsdkType() {
            java.lang.String r0 = "YMNSDK_TYPE"
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.getMetaDataValueString(r0)
            return r0
    }

    public static boolean isNewLogin() {
            java.lang.String r0 = getYmnsdkType()
            java.lang.String r1 = "ymnsdk_new"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    public static boolean isNewTrade() {
            java.lang.String r0 = getYmnsdkTradeType()
            java.lang.String r1 = "ymnsdk_trade_new"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }
}
