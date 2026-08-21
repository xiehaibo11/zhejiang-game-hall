package com.bianfeng.ymnsdk.utilslib.exception;

public class YmnException extends Exception {
    private static final String TAG = YmnException.class.getSimpleName();

    public YmnException() {
        System.out.println(TAG + ":中的打印日志");
        printStackTrace();
    }

    public YmnException(String message) {
        super(message);
        System.out.println(TAG + ":中的打印日志 message:" + message);
        printStackTrace();
    }

    public YmnException(String message, Throwable cause) {
        super(message, cause);
        System.out.println(TAG + ":中的打印日志 message cause" + message);
        cause.printStackTrace();
    }

    public YmnException(Throwable cause) {
        super(cause);
        System.out.println(TAG + ":中的打印日志 cause");
        cause.printStackTrace();
    }
}
