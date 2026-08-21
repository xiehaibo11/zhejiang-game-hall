package com.bianfeng.ymnsdk.feature.protocol;

import android.text.TextUtils;
import com.bianfeng.ymnsdk.util.Logger;
import java.util.LinkedHashMap;
import java.util.Map;

public interface IPaymentFeature {
    public static final int ARG_CHECK_ORDER_DELIVERY_SUCCESS = 3;
    public static final int ARG_CHECK_ORDER_PAY_SUCCESS = 2;
    public static final String ARG_CLIENT_CALLBACK = "client_callback";
    public static final String ARG_CLIENT_INFO_V2 = "client_info";
    public static final String ARG_CP_ORDER_ID = "order_id";
    public static final String ARG_CP_ORDER_ID_V2 = "cp_order_id";
    public static final String ARG_EXT = "ext";
    public static final String ARG_EXTENDS_V2 = "extend";
    public static final String ARG_IS_TEST_V2 = "is_test";
    public static final String ARG_IS_VERSION_V2 = "ymnsdk_version";
    public static final String ARG_NOTIFY_URL = "notify_url";
    public static final String ARG_ORDER_NO_V2 = "order_no";
    public static final String ARG_PAY_ATTACH_V2 = "trade_attach";
    public static final String ARG_PAY_PARAMETERS_V2 = "trade_parameters";
    public static final String ARG_PAY_PAR_VALUE_V2 = "par_value";
    public static final String ARG_PAY_REQUEST_CONTENT_V2 = "trade_request_content";
    public static final String ARG_PAY_TOTAL_FEE_V2 = "total_fee";
    public static final String ARG_PLATFORM_NOTIFY_URL = "platform_notify_url";
    public static final String ARG_PRODUCT_COUNT = "product_count";
    public static final String ARG_PRODUCT_ID = "product_id";
    public static final String ARG_PRODUCT_NAME = "product_name";
    public static final String ARG_PRODUCT_PRICE = "product_price";
    public static final String ARG_PRODUCT_QTY_V2 = "product_qty";
    public static final String ARG_ROLE_BALANCE = "role_balance";
    public static final String ARG_ROLE_GRADE = "role_grade";
    public static final String ARG_ROLE_ID = "role_id";
    public static final String ARG_ROLE_NAME = "role_name";
    public static final String ARG_SERVER_ID = "server_id";
    public static final String ARG_SERVER_NAME = "server_name";
    public static final String ARG_SHOP_ID_V2 = "shop_id";
    public static final String ARG_SOURCE_V2 = "source";
    public static final String ARG_THIRDPARTY_CALLBACK = "platform_callback";
    public static final String ARG_TOKEN_PRIVATEKEY = "token_hmac256_privatekey";
    public static final String ARG_TOKEN_SUB = "token_sub";
    public static final String ARG_TOKEN_UID = "token_uid";
    public static final String ARG_TRADE_CODE = "trade_code";
    public static final String FUNCTION_PRE_PAY = "pre_pay";
    public static final int ORDER_TYPE_CP = 0;
    public static final int ORDER_TYPE_YMN = 1;

    public static class PAYMENT_ARGS_CHECKER {
        public PAYMENT_ARGS_CHECKER() {
        }

        public static boolean check(Map<String, String> r4) {
            StringBuilder r0 = new StringBuilder();
            if (TextUtils.isEmpty(r4.get(IPaymentFeature.ARG_PRODUCT_ID)) == false) goto L6;
            r0.append("\n错误：商品ID为空，请传入product_id");
        L6:
            if (TextUtils.isEmpty(r4.get(IPaymentFeature.ARG_PRODUCT_NAME)) == false) goto L9;
            r0.append("\n错误：商品名称为空，请传入product_name");
            r4.put(IPaymentFeature.ARG_PRODUCT_NAME, "ymnDefValPro");
        L9:
            if (TextUtils.isEmpty(r4.get(IPaymentFeature.ARG_PRODUCT_PRICE)) == false) goto L12;
            r0.append("\n错误：商品价格为空，请传入product_price");
        L12:
            if (TextUtils.isEmpty(r4.get(IPaymentFeature.ARG_PRODUCT_COUNT)) == false) goto L15;
            r0.append("\n错误：商品数量为空，请传入product_count");
            r4.put(IPaymentFeature.ARG_PRODUCT_COUNT, "1");
        L15:
            if (TextUtils.isEmpty(r4.get(IPaymentFeature.ARG_ROLE_ID)) == false) goto L18;
            r0.append("\n错误：角色ID为空，请传入role_id");
            r4.put(IPaymentFeature.ARG_ROLE_ID, "123");
        L18:
            if (TextUtils.isEmpty(r4.get(IPaymentFeature.ARG_ROLE_NAME)) == false) goto L21;
            r0.append("\n错误：角色名称为空，请传入role_name");
            r4.put(IPaymentFeature.ARG_ROLE_NAME, "ymnDefValRole");
        L21:
            if (TextUtils.isEmpty(r4.get(IPaymentFeature.ARG_ROLE_GRADE)) == false) goto L24;
            r0.append("\n错误：角色等级为空，请传入role_grade");
            r4.put(IPaymentFeature.ARG_ROLE_GRADE, "1");
        L24:
            if (TextUtils.isEmpty(r4.get(IPaymentFeature.ARG_ROLE_BALANCE)) == false) goto L27;
            r0.append("\n错误：角色余额为空，请传入role_balance");
            r4.put(IPaymentFeature.ARG_ROLE_BALANCE, "0");
        L27:
            if (TextUtils.isEmpty(r4.get(IPaymentFeature.ARG_SERVER_ID)) == false) goto L30;
            r0.append("\n错误：服务器ID为空，请传入server_id");
            r4.put(IPaymentFeature.ARG_SERVER_ID, "456");
        L30:
            if (TextUtils.isEmpty(r4.get(IPaymentFeature.ARG_SERVER_NAME)) == false) goto L33;
            r0.append("\n错误：服务器名称为空，请传入server_name");
            r4.put(IPaymentFeature.ARG_SERVER_NAME, "ymnDefValSer");
        L33:
            if (TextUtils.isEmpty(r4.get(IPaymentFeature.ARG_NOTIFY_URL)) == false) goto L36;
            r0.append("\n错误：通知地址为空，请传入notify_url");
        L36:
            if (r0.length() != 0) goto L39;
            return true;
        L39:
            Logger.eRich(r0.toString());
            return false;
        }
    }

    String getOrderId();

    void pay(Map<String, String> r1);

    void prePay(LinkedHashMap<String, String> r1);
}
