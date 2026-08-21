package android.support.annotation;

@java.lang.annotation.Target({java.lang.annotation.ElementType.METHOD, java.lang.annotation.ElementType.PARAMETER, java.lang.annotation.ElementType.FIELD, java.lang.annotation.ElementType.LOCAL_VARIABLE, java.lang.annotation.ElementType.ANNOTATION_TYPE})
@java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.CLASS)
public @interface IntRange {
    long from() default Long.MIN_VALUE;

    long to() default Long.MAX_VALUE;
}
