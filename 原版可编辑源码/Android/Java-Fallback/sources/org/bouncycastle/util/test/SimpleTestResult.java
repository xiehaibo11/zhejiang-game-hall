package org.bouncycastle.util.test;

public class SimpleTestResult implements org.bouncycastle.util.test.TestResult {
    private static final java.lang.String SEPARATOR = null;
    private java.lang.Throwable exception;
    private java.lang.String message;
    private boolean success;

    static {
            java.lang.String r0 = "line.separator"
            java.lang.String r0 = java.lang.System.getProperty(r0)
            org.bouncycastle.util.test.SimpleTestResult.SEPARATOR = r0
            return
    }

    public SimpleTestResult(boolean r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.success = r1
            r0.message = r2
            return
    }

    public SimpleTestResult(boolean r1, java.lang.String r2, java.lang.Throwable r3) {
            r0 = this;
            r0.<init>()
            r0.success = r1
            r0.message = r2
            r0.exception = r3
            return
    }

    public static org.bouncycastle.util.test.TestResult failed(org.bouncycastle.util.test.Test r2, java.lang.String r3) {
            org.bouncycastle.util.test.SimpleTestResult r0 = new org.bouncycastle.util.test.SimpleTestResult
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r2 = ": "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = r1.toString()
            r3 = 0
            r0.<init>(r3, r2)
            return r0
    }

    public static org.bouncycastle.util.test.TestResult failed(org.bouncycastle.util.test.Test r1, java.lang.String r2, java.lang.Object r3, java.lang.Object r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = org.bouncycastle.util.test.SimpleTestResult.SEPARATOR
            r0.append(r2)
            java.lang.String r2 = "Expected: "
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = org.bouncycastle.util.test.SimpleTestResult.SEPARATOR
            r0.append(r2)
            java.lang.String r2 = "Found   : "
            r0.append(r2)
            r0.append(r4)
            java.lang.String r2 = r0.toString()
            org.bouncycastle.util.test.TestResult r1 = failed(r1, r2)
            return r1
    }

    public static org.bouncycastle.util.test.TestResult failed(org.bouncycastle.util.test.Test r2, java.lang.String r3, java.lang.Throwable r4) {
            org.bouncycastle.util.test.SimpleTestResult r0 = new org.bouncycastle.util.test.SimpleTestResult
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r2 = ": "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = r1.toString()
            r3 = 0
            r0.<init>(r3, r2, r4)
            return r0
    }

    public static java.lang.String failedMessage(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>(r1)
            java.lang.String r1 = " failing "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = org.bouncycastle.util.test.SimpleTestResult.SEPARATOR
            r0.append(r1)
            java.lang.String r1 = "    expected: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = org.bouncycastle.util.test.SimpleTestResult.SEPARATOR
            r0.append(r1)
            java.lang.String r1 = "    got     : "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static org.bouncycastle.util.test.TestResult successful(org.bouncycastle.util.test.Test r2, java.lang.String r3) {
            org.bouncycastle.util.test.SimpleTestResult r0 = new org.bouncycastle.util.test.SimpleTestResult
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r2 = ": "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = r1.toString()
            r3 = 1
            r0.<init>(r3, r2)
            return r0
    }

    @Override
    public java.lang.Throwable getException() {
            r1 = this;
            java.lang.Throwable r0 = r1.exception
            return r0
    }

    @Override
    public boolean isSuccessful() {
            r1 = this;
            boolean r0 = r1.success
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.message
            return r0
    }
}
