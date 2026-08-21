package com.bianfeng.ymnsdk.feature.protocol;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

/* JADX INFO: loaded from: classes.dex */
@Target({ElementType.TYPE})
@Retention(RetentionPolicy.RUNTIME)
public @interface YPlugin {

    public enum Entrance {
        CONTEXT,
        ACTIVITY,
        APPLICATION
    }

    public enum Policy {
        LAZY,
        FORCE,
        REMOTE,
        TRIGGER
    }

    Entrance entrance() default Entrance.CONTEXT;

    Policy strategy() default Policy.LAZY;
}
