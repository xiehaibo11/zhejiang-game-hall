package com.bianfeng.platform;

@java.lang.Deprecated
public interface PaymentWrapper {
    public static final java.util.Map<java.lang.Integer, java.lang.String> ERROR_MESSAGE = null;
    public static final int PAYRESULT_CANCEL = 202;
    public static final int PAYRESULT_FAIL = 201;
    public static final int PAYRESULT_INIT_FAIL = 206;
    public static final int PAYRESULT_INIT_SUCCESS = 205;
    public static final int PAYRESULT_NETWORK_ERROR = 203;
    public static final int PAYRESULT_NOW_PAYING = 207;
    public static final int PAYRESULT_PRE_ORDER_FAIL = 214;
    public static final int PAYRESULT_PRE_ORDER_SUCCESS = 213;
    public static final int PAYRESULT_PRODUCTIONINFOR_INCOMPLETE = 204;
    public static final int PAYRESULT_SUCCESS = 200;
    public static final int PAYRESULT_TOKEN_INVALID = 212;


    static {
            com.bianfeng.platform.PaymentWrapper$1 r0 = new com.bianfeng.platform.PaymentWrapper$1
            r0.<init>()
            com.bianfeng.platform.PaymentWrapper.ERROR_MESSAGE = r0
            return
    }
}
