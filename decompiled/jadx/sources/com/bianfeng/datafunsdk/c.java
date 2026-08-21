package com.bianfeng.datafunsdk;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

/* JADX INFO: compiled from: DBTable.java */
/* JADX INFO: loaded from: classes.dex */
@Target({ElementType.TYPE})
@Retention(RetentionPolicy.RUNTIME)
public @interface c {
    String value();
}
