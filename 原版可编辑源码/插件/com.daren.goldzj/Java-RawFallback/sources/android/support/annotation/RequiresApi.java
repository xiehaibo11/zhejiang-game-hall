package android.support.annotation;

@java.lang.annotation.Target({java.lang.annotation.ElementType.TYPE, java.lang.annotation.ElementType.METHOD, java.lang.annotation.ElementType.CONSTRUCTOR, java.lang.annotation.ElementType.FIELD, java.lang.annotation.ElementType.PACKAGE})
@java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.CLASS)
public @interface RequiresApi {
    @android.support.annotation.IntRange(from = 1)
    int api() default 1;

    @android.support.annotation.IntRange(from = 1)
    int value() default 1;
}
