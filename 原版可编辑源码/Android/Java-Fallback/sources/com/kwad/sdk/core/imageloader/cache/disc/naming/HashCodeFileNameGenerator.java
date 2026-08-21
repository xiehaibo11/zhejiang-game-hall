package com.kwad.sdk.core.imageloader.cache.disc.naming;

public class HashCodeFileNameGenerator implements com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator {
    public HashCodeFileNameGenerator() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String generate(java.lang.String r1) {
            r0 = this;
            int r1 = r1.hashCode()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            return r1
    }
}
