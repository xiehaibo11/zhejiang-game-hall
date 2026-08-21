package com.kwad.sdk.core.imageloader.cache.disc.naming;

public class HashCodeFileNameGenerator implements FileNameGenerator {
    @Override
    public String generate(String str) {
        return String.valueOf(str.hashCode());
    }
}
