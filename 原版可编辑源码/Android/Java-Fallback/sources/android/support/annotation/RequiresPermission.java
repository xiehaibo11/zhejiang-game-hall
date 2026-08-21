package android.support.annotation;

@java.lang.annotation.Target({java.lang.annotation.ElementType.ANNOTATION_TYPE, java.lang.annotation.ElementType.METHOD, java.lang.annotation.ElementType.CONSTRUCTOR, java.lang.annotation.ElementType.FIELD, java.lang.annotation.ElementType.PARAMETER})
@java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.CLASS)
public @interface RequiresPermission {

    @java.lang.annotation.Target({java.lang.annotation.ElementType.FIELD, java.lang.annotation.ElementType.METHOD, java.lang.annotation.ElementType.PARAMETER})
    public @interface Read {
        android.support.annotation.RequiresPermission value() default @android.support.annotation.RequiresPermission;
    }

    @java.lang.annotation.Target({java.lang.annotation.ElementType.FIELD, java.lang.annotation.ElementType.METHOD, java.lang.annotation.ElementType.PARAMETER})
    public @interface Write {
        android.support.annotation.RequiresPermission value() default @android.support.annotation.RequiresPermission;
    }

    java.lang.String[] allOf() default {};

    java.lang.String[] anyOf() default {};

    boolean conditional() default false;

    java.lang.String value() default "";
}
