package com.bumptech.glide.load;

public interface Key {
    public static final java.lang.String STRING_CHARSET_NAME = "UTF-8";

    boolean equals(java.lang.Object r1);

    int hashCode();

    void updateDiskCacheKey(java.security.MessageDigest r1) throws java.io.UnsupportedEncodingException;
}
