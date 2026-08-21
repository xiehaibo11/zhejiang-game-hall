package com.bianfeng.platform;

import java.util.HashMap;
import java.util.Map;

@Deprecated
public interface PaymentWrapper {
    public static final Map<Integer, String> ERROR_MESSAGE = new HashMap<Integer, String>() {
        {
            put(Integer.valueOf(PaymentWrapper.PAYRESULT_SUCCESS), "支付成功");
            put(Integer.valueOf(PaymentWrapper.PAYRESULT_FAIL), "支付失败");
            put(Integer.valueOf(PaymentWrapper.PAYRESULT_CANCEL), "取消支付");
            put(Integer.valueOf(PaymentWrapper.PAYRESULT_NETWORK_ERROR), "网络错误，请再次尝试");
            put(Integer.valueOf(PaymentWrapper.PAYRESULT_PRODUCTIONINFOR_INCOMPLETE), "订单信息不完整或非法");
            put(Integer.valueOf(PaymentWrapper.PAYRESULT_INIT_SUCCESS), "支付初始化成功");
            put(Integer.valueOf(PaymentWrapper.PAYRESULT_INIT_FAIL), "支付初始化失败");
            put(Integer.valueOf(PaymentWrapper.PAYRESULT_NOW_PAYING), "支付正在进行");
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
