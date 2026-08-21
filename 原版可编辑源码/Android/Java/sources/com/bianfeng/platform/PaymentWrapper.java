package com.bianfeng.platform;

import java.util.HashMap;
import java.util.Map;

@Deprecated
public interface PaymentWrapper {
    public static final Map<Integer, String> ERROR_MESSAGE = new HashMap<Integer, String>() {
        {
            put(200, "支付成功");
            put(201, "支付失败");
            put(202, "取消支付");
            put(203, "网络错误，请再次尝试");
            put(204, "订单信息不完整或非法");
            put(205, "支付初始化成功");
            put(206, "支付初始化失败");
            put(207, "支付正在进行");
        }
    };
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
}
