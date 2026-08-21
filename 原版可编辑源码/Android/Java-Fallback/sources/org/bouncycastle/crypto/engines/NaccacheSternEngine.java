package org.bouncycastle.crypto.engines;

public class NaccacheSternEngine implements org.bouncycastle.crypto.AsymmetricBlockCipher {
    private static java.math.BigInteger ONE;
    private static java.math.BigInteger ZERO;
    private boolean debug;
    private boolean forEncryption;
    private org.bouncycastle.crypto.params.NaccacheSternKeyParameters key;
    private java.util.Vector[] lookup;

    static {
            r0 = 0
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.crypto.engines.NaccacheSternEngine.ZERO = r0
            r0 = 1
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.crypto.engines.NaccacheSternEngine.ONE = r0
            return
    }

    public NaccacheSternEngine() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.lookup = r0
            r0 = 0
            r1.debug = r0
            return
    }

    private static java.math.BigInteger chineseRemainder(java.util.Vector r5, java.util.Vector r6) {
            java.math.BigInteger r0 = org.bouncycastle.crypto.engines.NaccacheSternEngine.ZERO
            java.math.BigInteger r1 = org.bouncycastle.crypto.engines.NaccacheSternEngine.ONE
            r2 = 0
            r3 = 0
        L6:
            int r4 = r6.size()
            if (r3 >= r4) goto L19
            java.lang.Object r4 = r6.elementAt(r3)
            java.math.BigInteger r4 = (java.math.BigInteger) r4
            java.math.BigInteger r1 = r1.multiply(r4)
            int r3 = r3 + 1
            goto L6
        L19:
            int r3 = r6.size()
            if (r2 >= r3) goto L42
            java.lang.Object r3 = r6.elementAt(r2)
            java.math.BigInteger r3 = (java.math.BigInteger) r3
            java.math.BigInteger r4 = r1.divide(r3)
            java.math.BigInteger r3 = r4.modInverse(r3)
            java.math.BigInteger r3 = r4.multiply(r3)
            java.lang.Object r4 = r5.elementAt(r2)
            java.math.BigInteger r4 = (java.math.BigInteger) r4
            java.math.BigInteger r3 = r3.multiply(r4)
            java.math.BigInteger r0 = r0.add(r3)
            int r2 = r2 + 1
            goto L19
        L42:
            java.math.BigInteger r5 = r0.mod(r1)
            return r5
    }

    public byte[] addCryptedBlocks(byte[] r5, byte[] r6) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r4 = this;
            boolean r0 = r4.forEncryption
            java.lang.String r1 = "BlockLength too large for simple addition.\n"
            if (r0 == 0) goto L1b
            int r0 = r5.length
            int r2 = r4.getOutputBlockSize()
            if (r0 > r2) goto L15
            int r0 = r6.length
            int r2 = r4.getOutputBlockSize()
            if (r0 > r2) goto L15
            goto L29
        L15:
            org.bouncycastle.crypto.InvalidCipherTextException r5 = new org.bouncycastle.crypto.InvalidCipherTextException
            r5.<init>(r1)
            throw r5
        L1b:
            int r0 = r5.length
            int r2 = r4.getInputBlockSize()
            if (r0 > r2) goto Laa
            int r0 = r6.length
            int r2 = r4.getInputBlockSize()
            if (r0 > r2) goto Laa
        L29:
            java.math.BigInteger r0 = new java.math.BigInteger
            r1 = 1
            r0.<init>(r1, r5)
            java.math.BigInteger r5 = new java.math.BigInteger
            r5.<init>(r1, r6)
            java.math.BigInteger r6 = r0.multiply(r5)
            org.bouncycastle.crypto.params.NaccacheSternKeyParameters r1 = r4.key
            java.math.BigInteger r1 = r1.getModulus()
            java.math.BigInteger r6 = r6.mod(r1)
            boolean r1 = r4.debug
            if (r1 == 0) goto L88
            java.io.PrintStream r1 = java.lang.System.out
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "c(m1) as BigInteger:....... "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.println(r0)
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "c(m2) as BigInteger:....... "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.println(r5)
            java.io.PrintStream r5 = java.lang.System.out
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "c(m1)*c(m2)%n = c(m1+m2)%n: "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            r5.println(r0)
        L88:
            org.bouncycastle.crypto.params.NaccacheSternKeyParameters r5 = r4.key
            java.math.BigInteger r5 = r5.getModulus()
            byte[] r5 = r5.toByteArray()
            r0 = 0
            org.bouncycastle.util.Arrays.fill(r5, r0)
            byte[] r1 = r6.toByteArray()
            int r2 = r5.length
            byte[] r3 = r6.toByteArray()
            int r3 = r3.length
            int r2 = r2 - r3
            byte[] r6 = r6.toByteArray()
            int r6 = r6.length
            java.lang.System.arraycopy(r1, r0, r5, r2, r6)
            return r5
        Laa:
            org.bouncycastle.crypto.InvalidCipherTextException r5 = new org.bouncycastle.crypto.InvalidCipherTextException
            r5.<init>(r1)
            throw r5
    }

    public byte[] encrypt(java.math.BigInteger r5) {
            r4 = this;
            org.bouncycastle.crypto.params.NaccacheSternKeyParameters r0 = r4.key
            java.math.BigInteger r0 = r0.getModulus()
            byte[] r0 = r0.toByteArray()
            r1 = 0
            org.bouncycastle.util.Arrays.fill(r0, r1)
            org.bouncycastle.crypto.params.NaccacheSternKeyParameters r2 = r4.key
            java.math.BigInteger r2 = r2.getG()
            org.bouncycastle.crypto.params.NaccacheSternKeyParameters r3 = r4.key
            java.math.BigInteger r3 = r3.getModulus()
            java.math.BigInteger r5 = r2.modPow(r5, r3)
            byte[] r5 = r5.toByteArray()
            int r2 = r0.length
            int r3 = r5.length
            int r2 = r2 - r3
            int r3 = r5.length
            java.lang.System.arraycopy(r5, r1, r0, r2, r3)
            boolean r5 = r4.debug
            if (r5 == 0) goto L48
            java.io.PrintStream r5 = java.lang.System.out
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Encrypted value is:  "
            r1.append(r2)
            java.math.BigInteger r2 = new java.math.BigInteger
            r2.<init>(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r5.println(r1)
        L48:
            return r0
    }

    @Override
    public int getInputBlockSize() {
            r1 = this;
            boolean r0 = r1.forEncryption
            if (r0 == 0) goto L11
            org.bouncycastle.crypto.params.NaccacheSternKeyParameters r0 = r1.key
            int r0 = r0.getLowerSigmaBound()
            int r0 = r0 + 7
            int r0 = r0 / 8
            int r0 = r0 + (-1)
            return r0
        L11:
            org.bouncycastle.crypto.params.NaccacheSternKeyParameters r0 = r1.key
            java.math.BigInteger r0 = r0.getModulus()
            byte[] r0 = r0.toByteArray()
            int r0 = r0.length
            return r0
    }

    @Override
    public int getOutputBlockSize() {
            r1 = this;
            boolean r0 = r1.forEncryption
            if (r0 == 0) goto L10
            org.bouncycastle.crypto.params.NaccacheSternKeyParameters r0 = r1.key
            java.math.BigInteger r0 = r0.getModulus()
            byte[] r0 = r0.toByteArray()
            int r0 = r0.length
            return r0
        L10:
            org.bouncycastle.crypto.params.NaccacheSternKeyParameters r0 = r1.key
            int r0 = r0.getLowerSigmaBound()
            int r0 = r0 + 7
            int r0 = r0 / 8
            int r0 = r0 + (-1)
            return r0
    }

    @Override
    public void init(boolean r10, org.bouncycastle.crypto.CipherParameters r11) {
            r9 = this;
            r9.forEncryption = r10
            boolean r10 = r11 instanceof org.bouncycastle.crypto.params.ParametersWithRandom
            if (r10 == 0) goto Lc
            org.bouncycastle.crypto.params.ParametersWithRandom r11 = (org.bouncycastle.crypto.params.ParametersWithRandom) r11
            org.bouncycastle.crypto.CipherParameters r11 = r11.getParameters()
        Lc:
            org.bouncycastle.crypto.params.NaccacheSternKeyParameters r11 = (org.bouncycastle.crypto.params.NaccacheSternKeyParameters) r11
            r9.key = r11
            boolean r10 = r9.forEncryption
            if (r10 != 0) goto L96
            boolean r10 = r9.debug
            if (r10 == 0) goto L1f
            java.io.PrintStream r10 = java.lang.System.out
            java.lang.String r11 = "Constructing lookup Array"
            r10.println(r11)
        L1f:
            org.bouncycastle.crypto.params.NaccacheSternKeyParameters r10 = r9.key
            org.bouncycastle.crypto.params.NaccacheSternPrivateKeyParameters r10 = (org.bouncycastle.crypto.params.NaccacheSternPrivateKeyParameters) r10
            java.util.Vector r11 = r10.getSmallPrimes()
            int r0 = r11.size()
            java.util.Vector[] r0 = new java.util.Vector[r0]
            r9.lookup = r0
            r0 = 0
        L30:
            int r1 = r11.size()
            if (r0 >= r1) goto L96
            java.lang.Object r1 = r11.elementAt(r0)
            java.math.BigInteger r1 = (java.math.BigInteger) r1
            int r2 = r1.intValue()
            java.util.Vector[] r3 = r9.lookup
            java.util.Vector r4 = new java.util.Vector
            r4.<init>()
            r3[r0] = r4
            java.util.Vector[] r3 = r9.lookup
            r3 = r3[r0]
            java.math.BigInteger r4 = org.bouncycastle.crypto.engines.NaccacheSternEngine.ONE
            r3.addElement(r4)
            boolean r3 = r9.debug
            if (r3 == 0) goto L6c
            java.io.PrintStream r3 = java.lang.System.out
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Constructing lookup ArrayList for "
            r4.append(r5)
            r4.append(r2)
            java.lang.String r4 = r4.toString()
            r3.println(r4)
        L6c:
            java.math.BigInteger r3 = org.bouncycastle.crypto.engines.NaccacheSternEngine.ZERO
            r4 = 1
        L6f:
            if (r4 >= r2) goto L93
            java.math.BigInteger r5 = r10.getPhi_n()
            java.math.BigInteger r3 = r3.add(r5)
            java.math.BigInteger r5 = r3.divide(r1)
            java.util.Vector[] r6 = r9.lookup
            r6 = r6[r0]
            java.math.BigInteger r7 = r10.getG()
            java.math.BigInteger r8 = r10.getModulus()
            java.math.BigInteger r5 = r7.modPow(r5, r8)
            r6.addElement(r5)
            int r4 = r4 + 1
            goto L6f
        L93:
            int r0 = r0 + 1
            goto L30
        L96:
            return
    }

    @Override
    public byte[] processBlock(byte[] r8, int r9, int r10) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r7 = this;
            org.bouncycastle.crypto.params.NaccacheSternKeyParameters r0 = r7.key
            if (r0 == 0) goto L1aa
            int r0 = r7.getInputBlockSize()
            r1 = 1
            int r0 = r0 + r1
            if (r10 > r0) goto L1a2
            boolean r0 = r7.forEncryption
            if (r0 != 0) goto L1f
            int r0 = r7.getInputBlockSize()
            if (r10 < r0) goto L17
            goto L1f
        L17:
            org.bouncycastle.crypto.InvalidCipherTextException r8 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r9 = "BlockLength does not match modulus for Naccache-Stern cipher.\n"
            r8.<init>(r9)
            throw r8
        L1f:
            r0 = 0
            if (r9 != 0) goto L25
            int r2 = r8.length
            if (r10 == r2) goto L2b
        L25:
            byte[] r2 = new byte[r10]
            java.lang.System.arraycopy(r8, r9, r2, r0, r10)
            r8 = r2
        L2b:
            java.math.BigInteger r9 = new java.math.BigInteger
            r9.<init>(r1, r8)
            boolean r8 = r7.debug
            if (r8 == 0) goto L4a
            java.io.PrintStream r8 = java.lang.System.out
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r1 = "input as BigInteger: "
            r10.append(r1)
            r10.append(r9)
            java.lang.String r10 = r10.toString()
            r8.println(r10)
        L4a:
            boolean r8 = r7.forEncryption
            if (r8 == 0) goto L54
            byte[] r8 = r7.encrypt(r9)
            goto L1a1
        L54:
            java.util.Vector r8 = new java.util.Vector
            r8.<init>()
            org.bouncycastle.crypto.params.NaccacheSternKeyParameters r10 = r7.key
            org.bouncycastle.crypto.params.NaccacheSternPrivateKeyParameters r10 = (org.bouncycastle.crypto.params.NaccacheSternPrivateKeyParameters) r10
            java.util.Vector r1 = r10.getSmallPrimes()
            r2 = 0
        L62:
            int r3 = r1.size()
            if (r2 >= r3) goto L199
            java.math.BigInteger r3 = r10.getPhi_n()
            java.lang.Object r4 = r1.elementAt(r2)
            java.math.BigInteger r4 = (java.math.BigInteger) r4
            java.math.BigInteger r3 = r3.divide(r4)
            java.math.BigInteger r4 = r10.getModulus()
            java.math.BigInteger r3 = r9.modPow(r3, r4)
            java.util.Vector[] r4 = r7.lookup
            r5 = r4[r2]
            r4 = r4[r2]
            int r4 = r4.size()
            java.lang.Object r6 = r1.elementAt(r2)
            java.math.BigInteger r6 = (java.math.BigInteger) r6
            int r6 = r6.intValue()
            if (r4 == r6) goto L101
            boolean r8 = r7.debug
            if (r8 == 0) goto Lbe
            java.io.PrintStream r8 = java.lang.System.out
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "Prime is "
            r9.append(r10)
            java.lang.Object r10 = r1.elementAt(r2)
            r9.append(r10)
            java.lang.String r10 = ", lookup table has size "
            r9.append(r10)
            int r10 = r5.size()
            r9.append(r10)
            java.lang.String r9 = r9.toString()
            r8.println(r9)
        Lbe:
            org.bouncycastle.crypto.InvalidCipherTextException r8 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "Error in lookup Array for "
            r9.append(r10)
            java.lang.Object r10 = r1.elementAt(r2)
            java.math.BigInteger r10 = (java.math.BigInteger) r10
            int r10 = r10.intValue()
            r9.append(r10)
            java.lang.String r10 = ": Size mismatch. Expected ArrayList with length "
            r9.append(r10)
            java.lang.Object r10 = r1.elementAt(r2)
            java.math.BigInteger r10 = (java.math.BigInteger) r10
            int r10 = r10.intValue()
            r9.append(r10)
            java.lang.String r10 = " but found ArrayList of length "
            r9.append(r10)
            java.util.Vector[] r10 = r7.lookup
            r10 = r10[r2]
            int r10 = r10.size()
            r9.append(r10)
            java.lang.String r9 = r9.toString()
            r8.<init>(r9)
            throw r8
        L101:
            int r4 = r5.indexOf(r3)
            r5 = -1
            if (r4 != r5) goto L18d
            boolean r8 = r7.debug
            if (r8 == 0) goto L185
            java.io.PrintStream r8 = java.lang.System.out
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "Actual prime is "
            r9.append(r10)
            java.lang.Object r10 = r1.elementAt(r2)
            r9.append(r10)
            java.lang.String r9 = r9.toString()
            r8.println(r9)
            java.io.PrintStream r8 = java.lang.System.out
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "Decrypted value is "
            r9.append(r10)
            r9.append(r3)
            java.lang.String r9 = r9.toString()
            r8.println(r9)
            java.io.PrintStream r8 = java.lang.System.out
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "LookupList for "
            r9.append(r10)
            java.lang.Object r10 = r1.elementAt(r2)
            r9.append(r10)
            java.lang.String r10 = " with size "
            r9.append(r10)
            java.util.Vector[] r10 = r7.lookup
            r10 = r10[r2]
            int r10 = r10.size()
            r9.append(r10)
            java.lang.String r10 = " is: "
            r9.append(r10)
            java.lang.String r9 = r9.toString()
            r8.println(r9)
        L16b:
            java.util.Vector[] r8 = r7.lookup
            r8 = r8[r2]
            int r8 = r8.size()
            if (r0 >= r8) goto L185
            java.io.PrintStream r8 = java.lang.System.out
            java.util.Vector[] r9 = r7.lookup
            r9 = r9[r2]
            java.lang.Object r9 = r9.elementAt(r0)
            r8.println(r9)
            int r0 = r0 + 1
            goto L16b
        L185:
            org.bouncycastle.crypto.InvalidCipherTextException r8 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r9 = "Lookup failed"
            r8.<init>(r9)
            throw r8
        L18d:
            long r3 = (long) r4
            java.math.BigInteger r3 = java.math.BigInteger.valueOf(r3)
            r8.addElement(r3)
            int r2 = r2 + 1
            goto L62
        L199:
            java.math.BigInteger r8 = chineseRemainder(r8, r1)
            byte[] r8 = r8.toByteArray()
        L1a1:
            return r8
        L1a2:
            org.bouncycastle.crypto.DataLengthException r8 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r9 = "input too large for Naccache-Stern cipher.\n"
            r8.<init>(r9)
            throw r8
        L1aa:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            java.lang.String r9 = "NaccacheStern engine not initialised"
            r8.<init>(r9)
            throw r8
    }

    public byte[] processData(byte[] r12) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r11 = this;
            boolean r0 = r11.debug
            if (r0 == 0) goto L9
            java.io.PrintStream r0 = java.lang.System.out
            r0.println()
        L9:
            int r0 = r12.length
            int r1 = r11.getInputBlockSize()
            r2 = 0
            if (r0 <= r1) goto Le5
            int r0 = r11.getInputBlockSize()
            int r1 = r11.getOutputBlockSize()
            boolean r3 = r11.debug
            java.lang.String r4 = " bytes"
            if (r3 == 0) goto L6b
            java.io.PrintStream r3 = java.lang.System.out
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Input blocksize is:  "
            r5.append(r6)
            r5.append(r0)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            r3.println(r5)
            java.io.PrintStream r3 = java.lang.System.out
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Output blocksize is: "
            r5.append(r6)
            r5.append(r1)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            r3.println(r5)
            java.io.PrintStream r3 = java.lang.System.out
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Data has length:.... "
            r5.append(r6)
            int r6 = r12.length
            r5.append(r6)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            r3.println(r5)
        L6b:
            int r3 = r12.length
            int r3 = r3 / r0
            int r3 = r3 + 1
            int r3 = r3 * r1
            byte[] r1 = new byte[r3]
            r3 = 0
            r5 = 0
        L75:
            int r6 = r12.length
            if (r3 >= r6) goto Lc2
            int r6 = r3 + r0
            int r7 = r12.length
            if (r6 >= r7) goto L85
            byte[] r3 = r11.processBlock(r12, r3, r0)
            r10 = r6
            r6 = r3
            r3 = r10
            goto L8e
        L85:
            int r6 = r12.length
            int r6 = r6 - r3
            byte[] r6 = r11.processBlock(r12, r3, r6)
            int r7 = r12.length
            int r7 = r7 - r3
            int r3 = r3 + r7
        L8e:
            boolean r7 = r11.debug
            if (r7 == 0) goto La8
            java.io.PrintStream r7 = java.lang.System.out
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "new datapos is "
            r8.append(r9)
            r8.append(r3)
            java.lang.String r8 = r8.toString()
            r7.println(r8)
        La8:
            if (r6 == 0) goto Lb1
            int r7 = r6.length
            java.lang.System.arraycopy(r6, r2, r1, r5, r7)
            int r6 = r6.length
            int r5 = r5 + r6
            goto L75
        Lb1:
            boolean r12 = r11.debug
            java.lang.String r0 = "cipher returned null"
            if (r12 == 0) goto Lbc
            java.io.PrintStream r12 = java.lang.System.out
            r12.println(r0)
        Lbc:
            org.bouncycastle.crypto.InvalidCipherTextException r12 = new org.bouncycastle.crypto.InvalidCipherTextException
            r12.<init>(r0)
            throw r12
        Lc2:
            byte[] r12 = new byte[r5]
            java.lang.System.arraycopy(r1, r2, r12, r2, r5)
            boolean r0 = r11.debug
            if (r0 == 0) goto Le4
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "returning "
            r1.append(r2)
            r1.append(r5)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r0.println(r1)
        Le4:
            return r12
        Le5:
            boolean r0 = r11.debug
            if (r0 == 0) goto Lf0
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.String r1 = "data size is less then input block size, processing directly"
            r0.println(r1)
        Lf0:
            int r0 = r12.length
            byte[] r12 = r11.processBlock(r12, r2, r0)
            return r12
    }

    public void setDebug(boolean r1) {
            r0 = this;
            r0.debug = r1
            return
    }
}
