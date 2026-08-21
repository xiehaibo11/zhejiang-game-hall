package com.bianfeng.paylib.ui;

public interface WebpaysdkCallback {
    public static final String ALIPAYTYPE = "aliPay";
    public static final String WXPAYTYPE = "wx";

    void buyNext(String str);

    void onCancel();

    void onPayFail(String str);

    void onPaySuccess();
}
