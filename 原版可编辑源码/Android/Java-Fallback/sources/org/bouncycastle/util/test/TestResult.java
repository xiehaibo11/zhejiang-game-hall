package org.bouncycastle.util.test;

public interface TestResult {
    java.lang.Throwable getException();

    boolean isSuccessful();

    java.lang.String toString();
}
