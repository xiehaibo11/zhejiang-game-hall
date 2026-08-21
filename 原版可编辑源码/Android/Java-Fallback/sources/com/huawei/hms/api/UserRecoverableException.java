package com.huawei.hms.api;

public class UserRecoverableException extends java.lang.Exception {
    private final android.content.Intent a;

    public UserRecoverableException(java.lang.String r1, android.content.Intent r2) {
            r0 = this;
            r0.<init>(r1)
            r0.a = r2
            return
    }

    public android.content.Intent getIntent() {
            r2 = this;
            android.content.Intent r0 = new android.content.Intent
            android.content.Intent r1 = r2.a
            r0.<init>(r1)
            return r0
    }
}
