package androidx.versionedparcelable;

@java.lang.annotation.Target({java.lang.annotation.ElementType.TYPE})
@java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
public @interface VersionedParcelize {
    boolean allowSerialization() default false;

    int[] deprecatedIds() default {};

    boolean ignoreParcelables() default false;

    boolean isCustom() default false;

    java.lang.String jetifyAs() default "";
}
