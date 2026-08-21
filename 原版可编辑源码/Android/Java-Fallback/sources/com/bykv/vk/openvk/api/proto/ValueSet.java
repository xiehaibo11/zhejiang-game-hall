package com.bykv.vk.openvk.api.proto;

public interface ValueSet {

    public interface ValueGetter<T> {
        T get();
    }

    <T> T[] arrayValue(int r1, java.lang.Class<T> r2);

    boolean booleanValue(int r1);

    boolean booleanValue(int r1, boolean r2);

    boolean containsKey(int r1);

    double doubleValue(int r1);

    float floatValue(int r1);

    float floatValue(int r1, float r2);

    int intValue(int r1);

    int intValue(int r1, int r2);

    boolean isEmpty();

    java.util.Set<java.lang.Integer> keys();

    long longValue(int r1);

    long longValue(int r1, long r2);

    <T> T objectValue(int r1, java.lang.Class<T> r2);

    int size();

    java.lang.String stringValue(int r1);

    java.lang.String stringValue(int r1, java.lang.String r2);
}
