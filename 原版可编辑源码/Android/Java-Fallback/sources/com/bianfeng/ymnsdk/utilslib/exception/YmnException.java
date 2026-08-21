package com.bianfeng.ymnsdk.utilslib.exception;

public class YmnException extends java.lang.Exception {
    private static final java.lang.String TAG = null;

    static {
            java.lang.Class<com.bianfeng.ymnsdk.utilslib.exception.YmnException> r0 = com.bianfeng.ymnsdk.utilslib.exception.YmnException.class
            java.lang.String r0 = r0.getSimpleName()
            com.bianfeng.ymnsdk.utilslib.exception.YmnException.TAG = r0
            return
    }

    public YmnException() {
            r3 = this;
            r3.<init>()
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.exception.YmnException.TAG
            r1.append(r2)
            java.lang.String r2 = ":中的打印日志"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.println(r1)
            r3.printStackTrace()
            return
    }

    public YmnException(java.lang.String r4) {
            r3 = this;
            r3.<init>(r4)
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.exception.YmnException.TAG
            r1.append(r2)
            java.lang.String r2 = ":中的打印日志 message:"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r0.println(r1)
            r3.printStackTrace()
            return
    }

    public YmnException(java.lang.String r4, java.lang.Throwable r5) {
            r3 = this;
            r3.<init>(r4, r5)
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.exception.YmnException.TAG
            r1.append(r2)
            java.lang.String r2 = ":中的打印日志 message cause"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r0.println(r1)
            r5.printStackTrace()
            return
    }

    public YmnException(java.lang.Throwable r4) {
            r3 = this;
            r3.<init>(r4)
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.exception.YmnException.TAG
            r1.append(r2)
            java.lang.String r2 = ":中的打印日志 cause"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.println(r1)
            r4.printStackTrace()
            return
    }
}
