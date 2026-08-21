package com.bianfeng.ymnsdk.feature.protocol;

@java.lang.annotation.Target({java.lang.annotation.ElementType.METHOD})
@java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.RUNTIME)
public @interface YFunction {
    java.lang.String alias() default "";

    java.lang.String name();
}
