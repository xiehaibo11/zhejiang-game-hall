package android.support.annotation;

@java.lang.annotation.Target({java.lang.annotation.ElementType.ANNOTATION_TYPE})
@java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
public @interface StringDef {
    java.lang.String[] value() default {};
}
