package org.bouncycastle.util.test;

public abstract class SimpleTest implements org.bouncycastle.util.test.Test {
    public SimpleTest() {
            r0 = this;
            r0.<init>()
            return
    }

    protected static void runTest(org.bouncycastle.util.test.Test r1) {
            java.io.PrintStream r0 = java.lang.System.out
            runTest(r1, r0)
            return
    }

    protected static void runTest(org.bouncycastle.util.test.Test r1, java.io.PrintStream r2) {
            org.bouncycastle.util.test.TestResult r1 = r1.perform()
            java.lang.String r0 = r1.toString()
            r2.println(r0)
            java.lang.Throwable r0 = r1.getException()
            if (r0 == 0) goto L18
            java.lang.Throwable r1 = r1.getException()
            r1.printStackTrace(r2)
        L18:
            return
    }

    private org.bouncycastle.util.test.TestResult success() {
            r1 = this;
            java.lang.String r0 = "Okay"
            org.bouncycastle.util.test.TestResult r0 = org.bouncycastle.util.test.SimpleTestResult.successful(r1, r0)
            return r0
    }

    protected boolean areEqual(byte[] r1, byte[] r2) {
            r0 = this;
            boolean r1 = org.bouncycastle.util.Arrays.areEqual(r1, r2)
            return r1
    }

    protected void fail(java.lang.String r2) {
            r1 = this;
            org.bouncycastle.util.test.TestFailedException r0 = new org.bouncycastle.util.test.TestFailedException
            org.bouncycastle.util.test.TestResult r2 = org.bouncycastle.util.test.SimpleTestResult.failed(r1, r2)
            r0.<init>(r2)
            throw r0
    }

    protected void fail(java.lang.String r2, java.lang.Object r3, java.lang.Object r4) {
            r1 = this;
            org.bouncycastle.util.test.TestFailedException r0 = new org.bouncycastle.util.test.TestFailedException
            org.bouncycastle.util.test.TestResult r2 = org.bouncycastle.util.test.SimpleTestResult.failed(r1, r2, r3, r4)
            r0.<init>(r2)
            throw r0
    }

    protected void fail(java.lang.String r2, java.lang.Throwable r3) {
            r1 = this;
            org.bouncycastle.util.test.TestFailedException r0 = new org.bouncycastle.util.test.TestFailedException
            org.bouncycastle.util.test.TestResult r2 = org.bouncycastle.util.test.SimpleTestResult.failed(r1, r2, r3)
            r0.<init>(r2)
            throw r0
    }

    @Override
    public abstract java.lang.String getName();

    @Override
    public org.bouncycastle.util.test.TestResult perform() {
            r3 = this;
            r3.performTest()     // Catch: java.lang.Exception -> L8 org.bouncycastle.util.test.TestFailedException -> L1f
            org.bouncycastle.util.test.TestResult r0 = r3.success()     // Catch: java.lang.Exception -> L8 org.bouncycastle.util.test.TestFailedException -> L1f
            return r0
        L8:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Exception: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            org.bouncycastle.util.test.TestResult r0 = org.bouncycastle.util.test.SimpleTestResult.failed(r3, r1, r0)
            return r0
        L1f:
            r0 = move-exception
            org.bouncycastle.util.test.TestResult r0 = r0.getResult()
            return r0
    }

    public abstract void performTest() throws java.lang.Exception;
}
