package com.bianfeng.ymnsdk.utilslib.exception;

public class YmnException extends Exception {
    private static final String TAG = "YmnException";

    public YmnException() {
        System.out.println(TAG + ":中的打印日志");
        printStackTrace();
    }

    public YmnException(String str) {
        super(str);
        System.out.println(TAG + ":中的打印日志 message:" + str);
        printStackTrace();
    }

    public YmnException(String str, Throwable th) {
        super(str, th);
        System.out.println(TAG + ":中的打印日志 message cause" + str);
        th.printStackTrace();
    }

    public YmnException(Throwable th) {
        super(th);
        System.out.println(TAG + ":中的打印日志 cause");
        th.printStackTrace();
    }
}
