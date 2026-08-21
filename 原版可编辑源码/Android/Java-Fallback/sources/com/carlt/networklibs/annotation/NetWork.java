package com.carlt.networklibs.annotation;

@java.lang.annotation.Target({java.lang.annotation.ElementType.METHOD})
@java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.RUNTIME)
public @interface NetWork {
    com.carlt.networklibs.NetType netType() default com.carlt.networklibs.NetType.AUTO;
}
