package org.bouncycastle.util;

public class IPTest extends junit.framework.TestCase {
    private static final java.lang.String[] invalidIP4v = null;
    private static final java.lang.String[] invalidIP6v = null;
    private static final java.lang.String[] validIP4v = null;
    private static final java.lang.String[] validIP6v = null;

    static {
            java.lang.String r0 = "0.0.0.0"
            java.lang.String r1 = "255.255.255.255"
            java.lang.String r2 = "192.168.0.0"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            org.bouncycastle.util.IPTest.validIP4v = r0
            java.lang.String r0 = "0.0.0.0.1"
            java.lang.String r1 = "256.255.255.255"
            java.lang.String r2 = "1"
            java.lang.String r3 = "A.B.C"
            java.lang.String r4 = "1:.4.6.5"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4}
            org.bouncycastle.util.IPTest.invalidIP4v = r0
            java.lang.String r0 = "0:0:0:0:0:0:0:0"
            java.lang.String r1 = "FFFF:FFFF:FFFF:FFFF:FFFF:FFFF:FFFF:FFFF"
            java.lang.String r2 = "0:1:2:3:FFFF:5:FFFF:1"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            org.bouncycastle.util.IPTest.validIP6v = r0
            java.lang.String r0 = "0.0.0.0:1"
            java.lang.String r1 = "FFFF:FFFF:FFFF:FFFF:FFFF:FFFF:FFFF:FFFFF"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            org.bouncycastle.util.IPTest.invalidIP6v = r0
            return
    }

    public IPTest() {
            r0 = this;
            r0.<init>()
            return
    }

    private void testIP(java.lang.String[] r6, java.lang.String[] r7) {
            r5 = this;
            r0 = 0
            r1 = 0
        L2:
            int r2 = r6.length
            java.lang.String r3 = "."
            if (r1 >= r2) goto L2b
            r2 = r6[r1]
            boolean r2 = org.bouncycastle.util.IPAddress.isValid(r2)
            if (r2 != 0) goto L28
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "Valid input string not accepted: "
            r2.append(r4)
            r4 = r6[r1]
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            fail(r2)
        L28:
            int r1 = r1 + 1
            goto L2
        L2b:
            int r6 = r7.length
            if (r0 >= r6) goto L52
            r6 = r7[r0]
            boolean r6 = org.bouncycastle.util.IPAddress.isValid(r6)
            if (r6 == 0) goto L4f
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r1 = "Invalid input string accepted: "
            r6.append(r1)
            r1 = r7[r0]
            r6.append(r1)
            r6.append(r3)
            java.lang.String r6 = r6.toString()
            fail(r6)
        L4f:
            int r0 = r0 + 1
            goto L2b
        L52:
            return
    }

    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = "IPTest"
            return r0
    }

    public void testIPv4() {
            r2 = this;
            java.lang.String[] r0 = org.bouncycastle.util.IPTest.validIP4v
            java.lang.String[] r1 = org.bouncycastle.util.IPTest.invalidIP4v
            r2.testIP(r0, r1)
            return
    }

    public void testIPv6() {
            r2 = this;
            java.lang.String[] r0 = org.bouncycastle.util.IPTest.validIP6v
            java.lang.String[] r1 = org.bouncycastle.util.IPTest.invalidIP6v
            r2.testIP(r0, r1)
            return
    }
}
