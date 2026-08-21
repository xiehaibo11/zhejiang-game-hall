package android.support.annotation;

@java.lang.annotation.Target({java.lang.annotation.ElementType.METHOD})
@java.lang.annotation.Documented
@java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.CLASS)
public @interface CheckResult {
    java.lang.String suggest() default "";
}
