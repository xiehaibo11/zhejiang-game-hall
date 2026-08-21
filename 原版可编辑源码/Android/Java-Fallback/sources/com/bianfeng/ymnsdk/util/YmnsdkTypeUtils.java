package com.bianfeng.ymnsdk.util;

public class YmnsdkTypeUtils {
    public static final java.lang.String YMNSDK_NEW = "ymnsdk_new";
    public static final java.lang.String YMNSDK_OLD = "ymnsdk_old";
    public static final java.lang.String YMNSDK_PAY_NEED_LOGININFO = "YMNSDK_PAY_NEED_LOGININFO";
    public static final java.lang.String YMNSDK_TRADE_NEW = "ymnsdk_trade_new";
    public static final java.lang.String YMNSDK_TRADE_TYPE = "YMNSDK_TRADE_TYPE";
    public static final java.lang.String YMNSDK_TYPE = "YMNSDK_TYPE";
    public static final java.lang.String YNN_INIT_ALONE = "YNN_INIT_ALONE";

    public YmnsdkTypeUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean getYmnsdkPayNeedLogininfo() {
            java.lang.String r0 = "YMNSDK_PAY_NEED_LOGININFO"
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.getMetaDataValueString(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r1 = r1 ^ 1
            return r1
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

    public static boolean isInitAlone() {
            java.lang.String r0 = "YNN_INIT_ALONE"
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.getMetaDataValueString(r0)
            if (r0 == 0) goto L12
            java.lang.String r1 = "alone"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L12
            r1 = 1
            return r1
        L12:
            r1 = 0
            return r1
    }

    public static boolean isNewLogin() {
            java.lang.String r0 = getYmnsdkType()
            java.lang.String r1 = "ymnsdk_new"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto Le
            r1 = 1
            return r1
        Le:
            r1 = 0
            return r1
    }

    public static boolean isNewTrade() {
            java.lang.String r0 = getYmnsdkTradeType()
            java.lang.String r1 = "ymnsdk_trade_new"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto Le
            r1 = 1
            return r1
        Le:
            r1 = 0
            return r1
    }
}
