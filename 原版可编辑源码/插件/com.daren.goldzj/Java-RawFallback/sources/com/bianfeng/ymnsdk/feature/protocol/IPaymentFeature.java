package com.bianfeng.ymnsdk.feature.protocol;

public interface IPaymentFeature {
    public static final int ARG_CHECK_ORDER_DELIVERY_SUCCESS = 3;
    public static final int ARG_CHECK_ORDER_PAY_SUCCESS = 2;
    public static final java.lang.String ARG_CLIENT_CALLBACK = "client_callback";
    public static final java.lang.String ARG_CLIENT_INFO_V2 = "client_info";
    public static final java.lang.String ARG_CP_ORDER_ID = "order_id";
    public static final java.lang.String ARG_CP_ORDER_ID_V2 = "cp_order_id";
    public static final java.lang.String ARG_EXT = "ext";
    public static final java.lang.String ARG_EXTENDS_V2 = "extend";
    public static final java.lang.String ARG_IS_TEST_V2 = "is_test";
    public static final java.lang.String ARG_IS_VERSION_V2 = "ymnsdk_version";
    public static final java.lang.String ARG_NOTIFY_URL = "notify_url";
    public static final java.lang.String ARG_ORDER_NO_V2 = "order_no";
    public static final java.lang.String ARG_PAY_ATTACH_V2 = "trade_attach";
    public static final java.lang.String ARG_PAY_PARAMETERS_V2 = "trade_parameters";
    public static final java.lang.String ARG_PAY_PAR_VALUE_V2 = "par_value";
    public static final java.lang.String ARG_PAY_REQUEST_CONTENT_V2 = "trade_request_content";
    public static final java.lang.String ARG_PAY_TOTAL_FEE_V2 = "total_fee";
    public static final java.lang.String ARG_PLATFORM_NOTIFY_URL = "platform_notify_url";
    public static final java.lang.String ARG_PRODUCT_COUNT = "product_count";
    public static final java.lang.String ARG_PRODUCT_ID = "product_id";
    public static final java.lang.String ARG_PRODUCT_NAME = "product_name";
    public static final java.lang.String ARG_PRODUCT_PRICE = "product_price";
    public static final java.lang.String ARG_PRODUCT_QTY_V2 = "product_qty";
    public static final java.lang.String ARG_ROLE_BALANCE = "role_balance";
    public static final java.lang.String ARG_ROLE_GRADE = "role_grade";
    public static final java.lang.String ARG_ROLE_ID = "role_id";
    public static final java.lang.String ARG_ROLE_NAME = "role_name";
    public static final java.lang.String ARG_SERVER_ID = "server_id";
    public static final java.lang.String ARG_SERVER_NAME = "server_name";
    public static final java.lang.String ARG_SHOP_ID_V2 = "shop_id";
    public static final java.lang.String ARG_SOURCE_V2 = "source";
    public static final java.lang.String ARG_THIRDPARTY_CALLBACK = "platform_callback";
    public static final java.lang.String ARG_TOKEN_PRIVATEKEY = "token_hmac256_privatekey";
    public static final java.lang.String ARG_TOKEN_SUB = "token_sub";
    public static final java.lang.String ARG_TOKEN_UID = "token_uid";
    public static final java.lang.String ARG_TRADE_CODE = "trade_code";
    public static final java.lang.String FUNCTION_PRE_PAY = "pre_pay";
    public static final int ORDER_TYPE_CP = 0;
    public static final int ORDER_TYPE_YMN = 1;

    public static class PAYMENT_ARGS_CHECKER {
        public PAYMENT_ARGS_CHECKER() {
                r0 = this;
                r0.<init>()
                return
        }

        public static boolean check(java.util.Map<java.lang.String, java.lang.String> r4) {
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "product_id"
                java.lang.Object r1 = r4.get(r1)
                java.lang.CharSequence r1 = (java.lang.CharSequence) r1
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 == 0) goto L18
                java.lang.String r1 = "\n错误：商品ID为空，请传入product_id"
                r0.append(r1)
            L18:
                java.lang.String r1 = "product_name"
                java.lang.Object r2 = r4.get(r1)
                java.lang.CharSequence r2 = (java.lang.CharSequence) r2
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                if (r2 == 0) goto L30
                java.lang.String r2 = "\n错误：商品名称为空，请传入product_name"
                r0.append(r2)
                java.lang.String r2 = "ymnDefValPro"
                r4.put(r1, r2)
            L30:
                java.lang.String r1 = "product_price"
                java.lang.Object r1 = r4.get(r1)
                java.lang.CharSequence r1 = (java.lang.CharSequence) r1
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 == 0) goto L43
                java.lang.String r1 = "\n错误：商品价格为空，请传入product_price"
                r0.append(r1)
            L43:
                java.lang.String r1 = "product_count"
                java.lang.Object r2 = r4.get(r1)
                java.lang.CharSequence r2 = (java.lang.CharSequence) r2
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                java.lang.String r3 = "1"
                if (r2 == 0) goto L5b
                java.lang.String r2 = "\n错误：商品数量为空，请传入product_count"
                r0.append(r2)
                r4.put(r1, r3)
            L5b:
                java.lang.String r1 = "role_id"
                java.lang.Object r2 = r4.get(r1)
                java.lang.CharSequence r2 = (java.lang.CharSequence) r2
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                if (r2 == 0) goto L73
                java.lang.String r2 = "\n错误：角色ID为空，请传入role_id"
                r0.append(r2)
                java.lang.String r2 = "123"
                r4.put(r1, r2)
            L73:
                java.lang.String r1 = "role_name"
                java.lang.Object r2 = r4.get(r1)
                java.lang.CharSequence r2 = (java.lang.CharSequence) r2
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                if (r2 == 0) goto L8b
                java.lang.String r2 = "\n错误：角色名称为空，请传入role_name"
                r0.append(r2)
                java.lang.String r2 = "ymnDefValRole"
                r4.put(r1, r2)
            L8b:
                java.lang.String r1 = "role_grade"
                java.lang.Object r2 = r4.get(r1)
                java.lang.CharSequence r2 = (java.lang.CharSequence) r2
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                if (r2 == 0) goto La1
                java.lang.String r2 = "\n错误：角色等级为空，请传入role_grade"
                r0.append(r2)
                r4.put(r1, r3)
            La1:
                java.lang.String r1 = "role_balance"
                java.lang.Object r2 = r4.get(r1)
                java.lang.CharSequence r2 = (java.lang.CharSequence) r2
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                if (r2 == 0) goto Lb9
                java.lang.String r2 = "\n错误：角色余额为空，请传入role_balance"
                r0.append(r2)
                java.lang.String r2 = "0"
                r4.put(r1, r2)
            Lb9:
                java.lang.String r1 = "server_id"
                java.lang.Object r2 = r4.get(r1)
                java.lang.CharSequence r2 = (java.lang.CharSequence) r2
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                if (r2 == 0) goto Ld1
                java.lang.String r2 = "\n错误：服务器ID为空，请传入server_id"
                r0.append(r2)
                java.lang.String r2 = "456"
                r4.put(r1, r2)
            Ld1:
                java.lang.String r1 = "server_name"
                java.lang.Object r2 = r4.get(r1)
                java.lang.CharSequence r2 = (java.lang.CharSequence) r2
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                if (r2 == 0) goto Le9
                java.lang.String r2 = "\n错误：服务器名称为空，请传入server_name"
                r0.append(r2)
                java.lang.String r2 = "ymnDefValSer"
                r4.put(r1, r2)
            Le9:
                java.lang.String r1 = "notify_url"
                java.lang.Object r4 = r4.get(r1)
                java.lang.CharSequence r4 = (java.lang.CharSequence) r4
                boolean r4 = android.text.TextUtils.isEmpty(r4)
                if (r4 == 0) goto Lfc
                java.lang.String r4 = "\n错误：通知地址为空，请传入notify_url"
                r0.append(r4)
            Lfc:
                int r4 = r0.length()
                if (r4 != 0) goto L104
                r4 = 1
                return r4
            L104:
                java.lang.String r4 = r0.toString()
                com.bianfeng.ymnsdk.util.Logger.eRich(r4)
                r4 = 0
                return r4
        }
    }

    java.lang.String getOrderId();

    void pay(java.util.Map<java.lang.String, java.lang.String> r1);

    void prePay(java.util.LinkedHashMap<java.lang.String, java.lang.String> r1);
}
