package org.bouncycastle.util;

public interface Selector extends java.lang.Cloneable {
    java.lang.Object clone();

    boolean match(java.lang.Object r1);
}
