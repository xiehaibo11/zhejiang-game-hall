package com.huawei.hms.push;

import com.huawei.hms.aaid.constant.ErrorEnum;

/* JADX INFO: loaded from: classes.dex */
public class BaseException extends Exception {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f2144a;
    public final ErrorEnum b;

    public BaseException(int i) {
        ErrorEnum errorEnumFromCode = ErrorEnum.fromCode(i);
        this.b = errorEnumFromCode;
        this.f2144a = errorEnumFromCode.getExternalCode();
    }

    public int getErrorCode() {
        return this.f2144a;
    }

    @Override // java.lang.Throwable
    public String getMessage() {
        return this.b.getMessage();
    }
}
