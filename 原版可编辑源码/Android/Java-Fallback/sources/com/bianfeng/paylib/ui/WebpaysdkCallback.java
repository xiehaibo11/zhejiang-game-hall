package com.bianfeng.paylib.ui;

public interface WebpaysdkCallback {
    public static final java.lang.String ALIPAYTYPE = "aliPay";
    public static final java.lang.String WXPAYTYPE = "wx";

    void buyNext(java.lang.String r1);

    void onCancel();

    void onPayFail(java.lang.String r1);

    void onPaySuccess();
}
