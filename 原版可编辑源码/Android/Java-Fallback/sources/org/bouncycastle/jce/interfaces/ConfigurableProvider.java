package org.bouncycastle.jce.interfaces;

public interface ConfigurableProvider {
    public static final java.lang.String EC_IMPLICITLY_CA = "ecImplicitlyCa";
    public static final java.lang.String THREAD_LOCAL_EC_IMPLICITLY_CA = "threadLocalEcImplicitlyCa";

    void setParameter(java.lang.String r1, java.lang.Object r2);
}
