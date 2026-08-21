package com.kwad.sdk.api.core;

@java.lang.annotation.Target({java.lang.annotation.ElementType.TYPE, java.lang.annotation.ElementType.METHOD, java.lang.annotation.ElementType.CONSTRUCTOR})
@com.kwad.sdk.api.core.KsAdSdkDynamicApi
@java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.RUNTIME)
public @interface KsAdSdkDynamicImpl {
    java.lang.Class<?> value();
}
