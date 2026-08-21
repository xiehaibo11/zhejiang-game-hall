package com.bianfeng.ymnsdk.feature.protocol;

import android.text.TextUtils;
import com.bianfeng.ymnsdk.util.Logger;
import java.util.LinkedHashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
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

    String getOrderId();

    void pay(Map<String, String> map);

    void prePay(LinkedHashMap<String, String> linkedHashMap);

    public static class PAYMENT_ARGS_CHECKER {
        public static boolean check(Map<String, String> order) {
            StringBuilder builder = new StringBuilder();
            if (TextUtils.isEmpty(order.get("product_id"))) {
                builder.append("\n错误：商品ID为空，请传入product_id");
            }
            if (TextUtils.isEmpty(order.get("product_name"))) {
                builder.append("\n错误：商品名称为空，请传入product_name");
                order.put("product_name", "ymnDefValPro");
            }
            if (TextUtils.isEmpty(order.get("product_price"))) {
                builder.append("\n错误：商品价格为空，请传入product_price");
            }
            if (TextUtils.isEmpty(order.get("product_count"))) {
                builder.append("\n错误：商品数量为空，请传入product_count");
                order.put("product_count", "1");
            }
            if (TextUtils.isEmpty(order.get("role_id"))) {
                builder.append("\n错误：角色ID为空，请传入role_id");
                order.put("role_id", "123");
            }
            if (TextUtils.isEmpty(order.get("role_name"))) {
                builder.append("\n错误：角色名称为空，请传入role_name");
                order.put("role_name", "ymnDefValRole");
            }
            if (TextUtils.isEmpty(order.get(IPaymentFeature.ARG_ROLE_GRADE))) {
                builder.append("\n错误：角色等级为空，请传入role_grade");
                order.put(IPaymentFeature.ARG_ROLE_GRADE, "1");
            }
            if (TextUtils.isEmpty(order.get(IPaymentFeature.ARG_ROLE_BALANCE))) {
                builder.append("\n错误：角色余额为空，请传入role_balance");
                order.put(IPaymentFeature.ARG_ROLE_BALANCE, "0");
            }
            if (TextUtils.isEmpty(order.get(IPaymentFeature.ARG_SERVER_ID))) {
                builder.append("\n错误：服务器ID为空，请传入server_id");
                order.put(IPaymentFeature.ARG_SERVER_ID, "456");
            }
            if (TextUtils.isEmpty(order.get(IPaymentFeature.ARG_SERVER_NAME))) {
                builder.append("\n错误：服务器名称为空，请传入server_name");
                order.put(IPaymentFeature.ARG_SERVER_NAME, "ymnDefValSer");
            }
            if (TextUtils.isEmpty(order.get("notify_url"))) {
                builder.append("\n错误：通知地址为空，请传入notify_url");
            }
            if (builder.length() == 0) {
                return true;
            }
            Logger.eRich(builder.toString());
            return false;
        }
    }
}
