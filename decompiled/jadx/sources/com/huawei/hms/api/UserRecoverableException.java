package com.huawei.hms.api;

import android.content.Intent;

/* JADX INFO: loaded from: classes.dex */
public class UserRecoverableException extends Exception {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Intent f2012a;

    public UserRecoverableException(String str, Intent intent) {
        super(str);
        this.f2012a = intent;
    }

    public Intent getIntent() {
        return new Intent(this.f2012a);
    }
}
