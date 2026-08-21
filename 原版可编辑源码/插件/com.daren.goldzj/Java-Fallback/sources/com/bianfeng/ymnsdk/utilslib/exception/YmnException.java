package com.bianfeng.ymnsdk.utilslib.exception;

public class YmnException extends Exception {
    private static final String TAG = "YmnException";

    static {
    }

    public YmnException() {
        System.out.println(TAG + ":中的打印日志");
        printStackTrace();
    }

    public YmnException(String r4) {
        super(r4);
        System.out.println(TAG + ":中的打印日志 message:" + r4);
        printStackTrace();
    }

    public YmnException(String r4, Throwable r5) {
        super(r4, r5);
        System.out.println(TAG + ":中的打印日志 message cause" + r4);
        r5.printStackTrace();
    }

    public YmnException(Throwable r4) {
        super(r4);
        System.out.println(TAG + ":中的打印日志 cause");
        r4.printStackTrace();
    }
}
