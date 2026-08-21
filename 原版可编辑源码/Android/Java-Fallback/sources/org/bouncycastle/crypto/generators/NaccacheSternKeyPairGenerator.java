package org.bouncycastle.crypto.generators;

public class NaccacheSternKeyPairGenerator implements org.bouncycastle.crypto.AsymmetricCipherKeyPairGenerator {
    private static final java.math.BigInteger ONE = null;
    private static int[] smallPrimes;
    private org.bouncycastle.crypto.params.NaccacheSternKeyGenerationParameters param;

    static {
            r0 = 101(0x65, float:1.42E-43)
            int[] r0 = new int[r0]
            r0 = {x0012: FILL_ARRAY_DATA , data: [3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557} // fill-array
            org.bouncycastle.crypto.generators.NaccacheSternKeyPairGenerator.smallPrimes = r0
            r0 = 1
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.crypto.generators.NaccacheSternKeyPairGenerator.ONE = r0
            return
    }

    public NaccacheSternKeyPairGenerator() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.util.Vector findFirstPrimes(int r4) {
            java.util.Vector r0 = new java.util.Vector
            r0.<init>(r4)
            r1 = 0
        L6:
            if (r1 == r4) goto L17
            int[] r2 = org.bouncycastle.crypto.generators.NaccacheSternKeyPairGenerator.smallPrimes
            r2 = r2[r1]
            long r2 = (long) r2
            java.math.BigInteger r2 = java.math.BigInteger.valueOf(r2)
            r0.addElement(r2)
            int r1 = r1 + 1
            goto L6
        L17:
            return r0
    }

    private static java.math.BigInteger generatePrime(int r2, int r3, java.security.SecureRandom r4) {
            java.math.BigInteger r0 = new java.math.BigInteger
            r0.<init>(r2, r3, r4)
        L5:
            int r1 = r0.bitLength()
            if (r1 == r2) goto L11
            java.math.BigInteger r0 = new java.math.BigInteger
            r0.<init>(r2, r3, r4)
            goto L5
        L11:
            return r0
    }

    private static int getInt(java.security.SecureRandom r4, int r5) {
            int r0 = -r5
            r0 = r0 & r5
            r1 = 2147483647(0x7fffffff, float:NaN)
            if (r0 != r5) goto L16
            long r2 = (long) r5
            int r4 = r4.nextInt()
            r4 = r4 & r1
            long r4 = (long) r4
            long r2 = r2 * r4
            r4 = 31
            long r4 = r2 >> r4
            int r5 = (int) r4
            return r5
        L16:
            int r0 = r4.nextInt()
            r0 = r0 & r1
            int r2 = r0 % r5
            int r0 = r0 - r2
            int r3 = r5 + (-1)
            int r0 = r0 + r3
            if (r0 < 0) goto L16
            return r2
    }

    private static java.util.Vector permuteList(java.util.Vector r5, java.security.SecureRandom r6) {
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            java.util.Vector r1 = new java.util.Vector
            r1.<init>()
            r2 = 0
            r3 = 0
        Lc:
            int r4 = r5.size()
            if (r3 >= r4) goto L1c
            java.lang.Object r4 = r5.elementAt(r3)
            r1.addElement(r4)
            int r3 = r3 + 1
            goto Lc
        L1c:
            java.lang.Object r5 = r1.elementAt(r2)
            r0.addElement(r5)
        L23:
            r1.removeElementAt(r2)
            int r5 = r1.size()
            if (r5 == 0) goto L3e
            java.lang.Object r5 = r1.elementAt(r2)
            int r3 = r0.size()
            int r3 = r3 + 1
            int r3 = getInt(r6, r3)
            r0.insertElementAt(r5, r3)
            goto L23
        L3e:
            return r0
    }

    @Override
    public org.bouncycastle.crypto.AsymmetricCipherKeyPair generateKeyPair() {
            r28 = this;
            r0 = r28
            org.bouncycastle.crypto.params.NaccacheSternKeyGenerationParameters r1 = r0.param
            int r1 = r1.getStrength()
            org.bouncycastle.crypto.params.NaccacheSternKeyGenerationParameters r2 = r0.param
            java.security.SecureRandom r2 = r2.getRandom()
            org.bouncycastle.crypto.params.NaccacheSternKeyGenerationParameters r3 = r0.param
            int r3 = r3.getCertainty()
            org.bouncycastle.crypto.params.NaccacheSternKeyGenerationParameters r4 = r0.param
            boolean r4 = r4.isDebug()
            if (r4 == 0) goto L3d
            java.io.PrintStream r5 = java.lang.System.out
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "Fetching first "
            r6.append(r7)
            org.bouncycastle.crypto.params.NaccacheSternKeyGenerationParameters r7 = r0.param
            int r7 = r7.getCntSmallPrimes()
            r6.append(r7)
            java.lang.String r7 = " primes."
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            r5.println(r6)
        L3d:
            org.bouncycastle.crypto.params.NaccacheSternKeyGenerationParameters r5 = r0.param
            int r5 = r5.getCntSmallPrimes()
            java.util.Vector r5 = findFirstPrimes(r5)
            java.util.Vector r10 = permuteList(r5, r2)
            java.math.BigInteger r5 = org.bouncycastle.crypto.generators.NaccacheSternKeyPairGenerator.ONE
            r8 = r5
            r7 = 0
        L4f:
            int r9 = r10.size()
            int r9 = r9 / 2
            if (r7 >= r9) goto L64
            java.lang.Object r9 = r10.elementAt(r7)
            java.math.BigInteger r9 = (java.math.BigInteger) r9
            java.math.BigInteger r8 = r8.multiply(r9)
            int r7 = r7 + 1
            goto L4f
        L64:
            int r7 = r10.size()
            int r7 = r7 / 2
        L6a:
            int r9 = r10.size()
            if (r7 >= r9) goto L7d
            java.lang.Object r9 = r10.elementAt(r7)
            java.math.BigInteger r9 = (java.math.BigInteger) r9
            java.math.BigInteger r5 = r5.multiply(r9)
            int r7 = r7 + 1
            goto L6a
        L7d:
            java.math.BigInteger r7 = r8.multiply(r5)
            int r9 = r7.bitLength()
            int r9 = r1 - r9
            int r9 = r9 + (-48)
            int r9 = r9 / 2
            r11 = 1
            int r9 = r9 + r11
            java.math.BigInteger r12 = generatePrime(r9, r3, r2)
            java.math.BigInteger r9 = generatePrime(r9, r3, r2)
            if (r4 == 0) goto L9e
            java.io.PrintStream r13 = java.lang.System.out
            java.lang.String r14 = "generating p and q"
            r13.println(r14)
        L9e:
            java.math.BigInteger r8 = r12.multiply(r8)
            java.math.BigInteger r8 = r8.shiftLeft(r11)
            java.math.BigInteger r5 = r9.multiply(r5)
            java.math.BigInteger r5 = r5.shiftLeft(r11)
            r15 = 0
        Lb0:
            r17 = 1
            long r13 = r15 + r17
            r15 = 24
            java.math.BigInteger r11 = generatePrime(r15, r3, r2)
            java.math.BigInteger r6 = r11.multiply(r8)
            java.math.BigInteger r15 = org.bouncycastle.crypto.generators.NaccacheSternKeyPairGenerator.ONE
            java.math.BigInteger r6 = r6.add(r15)
            boolean r15 = r6.isProbablePrime(r3)
            if (r15 != 0) goto Lcf
            r22 = r5
            r23 = r8
            goto L133
        Lcf:
            r15 = 24
        Ld1:
            java.math.BigInteger r0 = generatePrime(r15, r3, r2)
            boolean r21 = r11.equals(r0)
            if (r21 == 0) goto Ldc
            goto Ld1
        Ldc:
            java.math.BigInteger r15 = r0.multiply(r5)
            r22 = r5
            java.math.BigInteger r5 = org.bouncycastle.crypto.generators.NaccacheSternKeyPairGenerator.ONE
            java.math.BigInteger r5 = r15.add(r5)
            boolean r15 = r5.isProbablePrime(r3)
            if (r15 == 0) goto L447
            java.math.BigInteger r15 = r11.multiply(r0)
            java.math.BigInteger r15 = r7.gcd(r15)
            r23 = r8
            java.math.BigInteger r8 = org.bouncycastle.crypto.generators.NaccacheSternKeyPairGenerator.ONE
            boolean r8 = r15.equals(r8)
            if (r8 != 0) goto L101
            goto L133
        L101:
            java.math.BigInteger r8 = r6.multiply(r5)
            int r8 = r8.bitLength()
            if (r8 >= r1) goto L13d
            if (r4 == 0) goto L133
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r11 = "key size too small. Should be "
            r8.append(r11)
            r8.append(r1)
            java.lang.String r11 = " but is actually "
            r8.append(r11)
            java.math.BigInteger r5 = r6.multiply(r5)
            int r5 = r5.bitLength()
            r8.append(r5)
            java.lang.String r5 = r8.toString()
            r0.println(r5)
        L133:
            r11 = 1
            r0 = r28
            r15 = r13
            r5 = r22
            r8 = r23
            goto Lb0
        L13d:
            java.lang.String r8 = "needed "
            if (r4 == 0) goto L15d
            java.io.PrintStream r15 = java.lang.System.out
            r24 = r9
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            r9.append(r8)
            r9.append(r13)
            java.lang.String r13 = " tries to generate p and q."
            r9.append(r13)
            java.lang.String r9 = r9.toString()
            r15.println(r9)
            goto L15f
        L15d:
            r24 = r9
        L15f:
            java.math.BigInteger r9 = r6.multiply(r5)
            java.math.BigInteger r13 = org.bouncycastle.crypto.generators.NaccacheSternKeyPairGenerator.ONE
            java.math.BigInteger r13 = r6.subtract(r13)
            java.math.BigInteger r14 = org.bouncycastle.crypto.generators.NaccacheSternKeyPairGenerator.ONE
            java.math.BigInteger r14 = r5.subtract(r14)
            java.math.BigInteger r13 = r13.multiply(r14)
            if (r4 == 0) goto L17c
            java.io.PrintStream r14 = java.lang.System.out
            java.lang.String r15 = "generating g"
            r14.println(r15)
        L17c:
            r19 = 0
        L17e:
            java.util.Vector r14 = new java.util.Vector
            r14.<init>()
            r25 = r5
            r21 = r19
            r15 = 0
            r19 = r6
        L18a:
            int r5 = r10.size()
            if (r15 == r5) goto L1c0
            java.lang.Object r5 = r10.elementAt(r15)
            java.math.BigInteger r5 = (java.math.BigInteger) r5
            java.math.BigInteger r5 = r13.divide(r5)
        L19a:
            long r21 = r21 + r17
            java.math.BigInteger r6 = new java.math.BigInteger
            r6.<init>(r1, r3, r2)
            r26 = r1
            java.math.BigInteger r1 = r6.modPow(r5, r9)
            r27 = r2
            java.math.BigInteger r2 = org.bouncycastle.crypto.generators.NaccacheSternKeyPairGenerator.ONE
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L1b6
            r1 = r26
            r2 = r27
            goto L19a
        L1b6:
            r14.addElement(r6)
            int r15 = r15 + 1
            r1 = r26
            r2 = r27
            goto L18a
        L1c0:
            r26 = r1
            r27 = r2
            java.math.BigInteger r1 = org.bouncycastle.crypto.generators.NaccacheSternKeyPairGenerator.ONE
            r2 = 0
        L1c7:
            int r5 = r10.size()
            if (r2 >= r5) goto L1ec
            java.lang.Object r5 = r14.elementAt(r2)
            java.math.BigInteger r5 = (java.math.BigInteger) r5
            java.lang.Object r6 = r10.elementAt(r2)
            java.math.BigInteger r6 = (java.math.BigInteger) r6
            java.math.BigInteger r6 = r7.divide(r6)
            java.math.BigInteger r5 = r5.modPow(r6, r9)
            java.math.BigInteger r1 = r1.multiply(r5)
            java.math.BigInteger r1 = r1.mod(r9)
            int r2 = r2 + 1
            goto L1c7
        L1ec:
            r2 = 0
        L1ed:
            int r5 = r10.size()
            if (r2 >= r5) goto L232
            java.lang.Object r5 = r10.elementAt(r2)
            java.math.BigInteger r5 = (java.math.BigInteger) r5
            java.math.BigInteger r5 = r13.divide(r5)
            java.math.BigInteger r5 = r1.modPow(r5, r9)
            java.math.BigInteger r6 = org.bouncycastle.crypto.generators.NaccacheSternKeyPairGenerator.ONE
            boolean r5 = r5.equals(r6)
            if (r5 == 0) goto L22f
            if (r4 == 0) goto L22d
            java.io.PrintStream r5 = java.lang.System.out
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r14 = "g has order phi(n)/"
            r6.append(r14)
            java.lang.Object r2 = r10.elementAt(r2)
            r6.append(r2)
            java.lang.String r2 = "\n g: "
            r6.append(r2)
            r6.append(r1)
            java.lang.String r2 = r6.toString()
            r5.println(r2)
        L22d:
            r2 = 1
            goto L233
        L22f:
            int r2 = r2 + 1
            goto L1ed
        L232:
            r2 = 0
        L233:
            if (r2 == 0) goto L239
        L235:
            r2 = r24
            goto L2e6
        L239:
            r5 = 4
            java.math.BigInteger r2 = java.math.BigInteger.valueOf(r5)
            java.math.BigInteger r2 = r13.divide(r2)
            java.math.BigInteger r2 = r1.modPow(r2, r9)
            java.math.BigInteger r5 = org.bouncycastle.crypto.generators.NaccacheSternKeyPairGenerator.ONE
            boolean r2 = r2.equals(r5)
            if (r2 == 0) goto L268
            if (r4 == 0) goto L235
            java.io.PrintStream r2 = java.lang.System.out
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "g has order phi(n)/4\n g:"
        L25a:
            r5.append(r6)
            r5.append(r1)
            java.lang.String r1 = r5.toString()
            r2.println(r1)
            goto L235
        L268:
            java.math.BigInteger r2 = r13.divide(r11)
            java.math.BigInteger r2 = r1.modPow(r2, r9)
            java.math.BigInteger r5 = org.bouncycastle.crypto.generators.NaccacheSternKeyPairGenerator.ONE
            boolean r2 = r2.equals(r5)
            if (r2 == 0) goto L284
            if (r4 == 0) goto L235
            java.io.PrintStream r2 = java.lang.System.out
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "g has order phi(n)/p'\n g: "
            goto L25a
        L284:
            java.math.BigInteger r2 = r13.divide(r0)
            java.math.BigInteger r2 = r1.modPow(r2, r9)
            java.math.BigInteger r5 = org.bouncycastle.crypto.generators.NaccacheSternKeyPairGenerator.ONE
            boolean r2 = r2.equals(r5)
            if (r2 == 0) goto L2a0
            if (r4 == 0) goto L235
            java.io.PrintStream r2 = java.lang.System.out
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "g has order phi(n)/q'\n g: "
            goto L25a
        L2a0:
            java.math.BigInteger r2 = r13.divide(r12)
            java.math.BigInteger r2 = r1.modPow(r2, r9)
            java.math.BigInteger r5 = org.bouncycastle.crypto.generators.NaccacheSternKeyPairGenerator.ONE
            boolean r2 = r2.equals(r5)
            if (r2 == 0) goto L2bc
            if (r4 == 0) goto L235
            java.io.PrintStream r2 = java.lang.System.out
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "g has order phi(n)/a\n g: "
            goto L25a
        L2bc:
            r2 = r24
            java.math.BigInteger r5 = r13.divide(r2)
            java.math.BigInteger r5 = r1.modPow(r5, r9)
            java.math.BigInteger r6 = org.bouncycastle.crypto.generators.NaccacheSternKeyPairGenerator.ONE
            boolean r5 = r5.equals(r6)
            if (r5 == 0) goto L2f4
            if (r4 == 0) goto L2e6
            java.io.PrintStream r5 = java.lang.System.out
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r14 = "g has order phi(n)/b\n g: "
            r6.append(r14)
            r6.append(r1)
            java.lang.String r1 = r6.toString()
            r5.println(r1)
        L2e6:
            r24 = r2
            r6 = r19
            r19 = r21
            r5 = r25
            r1 = r26
            r2 = r27
            goto L17e
        L2f4:
            if (r4 == 0) goto L429
            java.io.PrintStream r3 = java.lang.System.out
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r8)
            r5 = r21
            r4.append(r5)
            java.lang.String r5 = " tries to generate g"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.println(r4)
            java.io.PrintStream r3 = java.lang.System.out
            r3.println()
            java.io.PrintStream r3 = java.lang.System.out
            java.lang.String r4 = "found new NaccacheStern cipher variables:"
            r3.println(r4)
            java.io.PrintStream r3 = java.lang.System.out
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "smallPrimes: "
            r4.append(r5)
            r4.append(r10)
            java.lang.String r4 = r4.toString()
            r3.println(r4)
            java.io.PrintStream r3 = java.lang.System.out
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "sigma:...... "
            r4.append(r5)
            r4.append(r7)
            java.lang.String r5 = " ("
            r4.append(r5)
            int r5 = r7.bitLength()
            r4.append(r5)
            java.lang.String r5 = " bits)"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.println(r4)
            java.io.PrintStream r3 = java.lang.System.out
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "a:.......... "
            r4.append(r5)
            r4.append(r12)
            java.lang.String r4 = r4.toString()
            r3.println(r4)
            java.io.PrintStream r3 = java.lang.System.out
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "b:.......... "
            r4.append(r5)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r3.println(r2)
            java.io.PrintStream r2 = java.lang.System.out
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "p':......... "
            r3.append(r4)
            r3.append(r11)
            java.lang.String r3 = r3.toString()
            r2.println(r3)
            java.io.PrintStream r2 = java.lang.System.out
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "q':......... "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.println(r0)
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "p:.......... "
            r2.append(r3)
            r5 = r19
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            r0.println(r2)
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "q:.......... "
            r2.append(r3)
            r3 = r25
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.println(r2)
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "n:.......... "
            r2.append(r3)
            r2.append(r9)
            java.lang.String r2 = r2.toString()
            r0.println(r2)
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "phi(n):..... "
            r2.append(r3)
            r2.append(r13)
            java.lang.String r2 = r2.toString()
            r0.println(r2)
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "g:.......... "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            r0.println(r2)
            java.io.PrintStream r0 = java.lang.System.out
            r0.println()
        L429:
            org.bouncycastle.crypto.AsymmetricCipherKeyPair r0 = new org.bouncycastle.crypto.AsymmetricCipherKeyPair
            org.bouncycastle.crypto.params.NaccacheSternKeyParameters r2 = new org.bouncycastle.crypto.params.NaccacheSternKeyParameters
            int r3 = r7.bitLength()
            r6 = 0
            r2.<init>(r6, r1, r9, r3)
            org.bouncycastle.crypto.params.NaccacheSternPrivateKeyParameters r3 = new org.bouncycastle.crypto.params.NaccacheSternPrivateKeyParameters
            int r4 = r7.bitLength()
            r6 = r3
            r7 = r1
            r8 = r9
            r9 = r4
            r11 = r13
            r6.<init>(r7, r8, r9, r10, r11)
            r0.<init>(r2, r3)
            return r0
        L447:
            r5 = r6
            r5 = r22
            goto Lcf
    }

    @Override
    public void init(org.bouncycastle.crypto.KeyGenerationParameters r1) {
            r0 = this;
            org.bouncycastle.crypto.params.NaccacheSternKeyGenerationParameters r1 = (org.bouncycastle.crypto.params.NaccacheSternKeyGenerationParameters) r1
            r0.param = r1
            return
    }
}
