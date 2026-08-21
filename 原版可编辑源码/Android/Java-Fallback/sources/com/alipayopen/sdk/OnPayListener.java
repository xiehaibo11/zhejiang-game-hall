package com.alipayopen.sdk;

public interface OnPayListener {
    public static final int CODE_SYSTEM_ERROR = 150;
    public static final int CODE_USER_CACEL_PAY = 6001;

    void onFailure(int r1, java.lang.String r2);

    void onSuccess(java.lang.String r1);
}
