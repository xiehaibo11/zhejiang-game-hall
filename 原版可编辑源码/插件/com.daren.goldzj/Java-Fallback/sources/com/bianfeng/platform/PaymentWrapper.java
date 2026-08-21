package com.bianfeng.platform;

import java.util.Map;

@Deprecated
public interface PaymentWrapper {
    public static final Map<Integer, String> ERROR_MESSAGE = null;
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
        ERROR_MESSAGE = new 1();
    }
}
