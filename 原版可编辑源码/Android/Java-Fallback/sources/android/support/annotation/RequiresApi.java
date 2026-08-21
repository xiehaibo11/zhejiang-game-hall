package android.support.annotation;

@java.lang.annotation.Target({java.lang.annotation.ElementType.TYPE, java.lang.annotation.ElementType.METHOD, java.lang.annotation.ElementType.CONSTRUCTOR, java.lang.annotation.ElementType.FIELD, java.lang.annotation.ElementType.PACKAGE})
@java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.CLASS)
public @interface RequiresApi {
    int api() default 1;

    int value() default 1;
}
