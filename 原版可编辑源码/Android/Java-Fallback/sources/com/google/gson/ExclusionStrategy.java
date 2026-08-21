package com.google.gson;

public interface ExclusionStrategy {
    boolean shouldSkipClass(java.lang.Class<?> r1);

    boolean shouldSkipField(com.google.gson.FieldAttributes r1);
}
