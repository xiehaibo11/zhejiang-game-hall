package com.bykv.vk.openvk;

@java.lang.annotation.Target({java.lang.annotation.ElementType.ANNOTATION_TYPE})
@java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
public @interface IntDef {
    boolean flag() default false;

    int[] value() default {};
}
