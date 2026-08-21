package com.carlt.networklibs.annotation;

import com.carlt.networklibs.NetType;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

/* JADX INFO: loaded from: classes.dex */
@Target({ElementType.METHOD})
@Retention(RetentionPolicy.RUNTIME)
public @interface NetWork {
    NetType netType() default NetType.AUTO;
}
