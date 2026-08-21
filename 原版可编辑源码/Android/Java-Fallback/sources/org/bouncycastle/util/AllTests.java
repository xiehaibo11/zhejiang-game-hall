package org.bouncycastle.util;

public class AllTests {
    public AllTests() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void main(java.lang.String[] r0) {
            junit.framework.Test r0 = suite()
            junit.textui.TestRunner.run(r0)
            return
    }

    public static junit.framework.Test suite() {
            junit.framework.TestSuite r0 = new junit.framework.TestSuite
            java.lang.String r1 = "util tests"
            r0.<init>(r1)
            java.lang.Class<org.bouncycastle.util.IPTest> r1 = org.bouncycastle.util.IPTest.class
            r0.addTestSuite(r1)
            return r0
    }
}
