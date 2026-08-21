package org.bouncycastle.util.test;

public class TestFailedException extends java.lang.RuntimeException {
    private org.bouncycastle.util.test.TestResult _result;

    public TestFailedException(org.bouncycastle.util.test.TestResult r1) {
            r0 = this;
            r0.<init>()
            r0._result = r1
            return
    }

    public org.bouncycastle.util.test.TestResult getResult() {
            r1 = this;
            org.bouncycastle.util.test.TestResult r0 = r1._result
            return r0
    }
}
