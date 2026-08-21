package com.bianfeng.seppellita.exception;

import com.bianfeng.ymnsdk.utilslib.exception.YmnException;

/* JADX INFO: loaded from: classes.dex */
public class SeppellitaException extends YmnException {
    public SeppellitaException() {
    }

    public SeppellitaException(String str) {
        super("seppellita--->" + str);
    }

    public SeppellitaException(String str, Throwable th) {
        super("seppellita--->" + str, th);
    }

    public SeppellitaException(Throwable th) {
        super(th);
    }
}
