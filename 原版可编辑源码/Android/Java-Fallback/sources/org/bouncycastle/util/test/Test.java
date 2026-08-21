package org.bouncycastle.util.test;

public interface Test {
    java.lang.String getName();

    org.bouncycastle.util.test.TestResult perform();
}
