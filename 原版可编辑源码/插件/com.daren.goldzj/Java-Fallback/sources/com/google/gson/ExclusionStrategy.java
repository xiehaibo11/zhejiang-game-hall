package com.google.gson;

public interface ExclusionStrategy {
    boolean shouldSkipClass(Class<?> r1);

    boolean shouldSkipField(FieldAttributes r1);
}
