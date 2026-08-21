package com.alibaba.sdk.android.oss;

public class TaskCancelException extends java.lang.Exception {
    public TaskCancelException() {
            r0 = this;
            r0.<init>()
            return
    }

    public TaskCancelException(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[ErrorMessage]: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3)
            return
    }

    public TaskCancelException(java.lang.Throwable r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }
}
