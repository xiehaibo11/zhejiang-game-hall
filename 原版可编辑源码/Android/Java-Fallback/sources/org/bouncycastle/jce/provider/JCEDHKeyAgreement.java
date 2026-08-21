package org.bouncycastle.jce.provider;

public class JCEDHKeyAgreement extends javax.crypto.KeyAgreementSpi {
    private static final java.util.Hashtable algorithms = null;
    private java.math.BigInteger g;
    private java.math.BigInteger p;
    private java.security.SecureRandom random;
    private java.math.BigInteger result;
    private java.math.BigInteger x;

    static {
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.jce.provider.JCEDHKeyAgreement.algorithms = r0
            java.lang.Integer r0 = new java.lang.Integer
            r1 = 64
            r0.<init>(r1)
            java.lang.Integer r1 = new java.lang.Integer
            r2 = 192(0xc0, float:2.69E-43)
            r1.<init>(r2)
            java.lang.Integer r2 = new java.lang.Integer
            r3 = 448(0x1c0, float:6.28E-43)
            r2.<init>(r3)
            java.util.Hashtable r3 = org.bouncycastle.jce.provider.JCEDHKeyAgreement.algorithms
            java.lang.String r4 = "DES"
            r3.put(r4, r0)
            java.util.Hashtable r0 = org.bouncycastle.jce.provider.JCEDHKeyAgreement.algorithms
            java.lang.String r3 = "DESEDE"
            r0.put(r3, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.provider.JCEDHKeyAgreement.algorithms
            java.lang.String r1 = "BLOWFISH"
            r0.put(r1, r2)
            return
    }

    public JCEDHKeyAgreement() {
            r0 = this;
            r0.<init>()
            return
    }

    private byte[] bigIntToBytes(java.math.BigInteger r5) {
            r4 = this;
            byte[] r5 = r5.toByteArray()
            r0 = 0
            r1 = r5[r0]
            if (r1 != 0) goto L12
            int r1 = r5.length
            r2 = 1
            int r1 = r1 - r2
            byte[] r3 = new byte[r1]
            java.lang.System.arraycopy(r5, r2, r3, r0, r1)
            return r3
        L12:
            return r5
    }

    @Override
    protected java.security.Key engineDoPhase(java.security.Key r3, boolean r4) throws java.security.InvalidKeyException, java.lang.IllegalStateException {
            r2 = this;
            java.math.BigInteger r0 = r2.x
            if (r0 == 0) goto L66
            boolean r0 = r3 instanceof javax.crypto.interfaces.DHPublicKey
            if (r0 == 0) goto L5e
            javax.crypto.interfaces.DHPublicKey r3 = (javax.crypto.interfaces.DHPublicKey) r3
            javax.crypto.spec.DHParameterSpec r0 = r3.getParams()
            java.math.BigInteger r0 = r0.getG()
            java.math.BigInteger r1 = r2.g
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L56
            javax.crypto.spec.DHParameterSpec r0 = r3.getParams()
            java.math.BigInteger r0 = r0.getP()
            java.math.BigInteger r1 = r2.p
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L56
            if (r4 == 0) goto L3c
            java.math.BigInteger r3 = r3.getY()
            java.math.BigInteger r4 = r2.x
            java.math.BigInteger r0 = r2.p
            java.math.BigInteger r3 = r3.modPow(r4, r0)
            r2.result = r3
            r3 = 0
            return r3
        L3c:
            java.math.BigInteger r4 = r3.getY()
            java.math.BigInteger r0 = r2.x
            java.math.BigInteger r1 = r2.p
            java.math.BigInteger r4 = r4.modPow(r0, r1)
            r2.result = r4
            org.bouncycastle.jce.provider.JCEDHPublicKey r4 = new org.bouncycastle.jce.provider.JCEDHPublicKey
            java.math.BigInteger r0 = r2.result
            javax.crypto.spec.DHParameterSpec r3 = r3.getParams()
            r4.<init>(r0, r3)
            return r4
        L56:
            java.security.InvalidKeyException r3 = new java.security.InvalidKeyException
            java.lang.String r4 = "DHPublicKey not for this KeyAgreement!"
            r3.<init>(r4)
            throw r3
        L5e:
            java.security.InvalidKeyException r3 = new java.security.InvalidKeyException
            java.lang.String r4 = "DHKeyAgreement doPhase requires DHPublicKey"
            r3.<init>(r4)
            throw r3
        L66:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r4 = "Diffie-Hellman not initialised."
            r3.<init>(r4)
            throw r3
    }

    @Override
    protected int engineGenerateSecret(byte[] r4, int r5) throws java.lang.IllegalStateException, javax.crypto.ShortBufferException {
            r3 = this;
            java.math.BigInteger r0 = r3.x
            if (r0 == 0) goto L1e
            java.math.BigInteger r0 = r3.result
            byte[] r0 = r3.bigIntToBytes(r0)
            int r1 = r4.length
            int r1 = r1 - r5
            int r2 = r0.length
            if (r1 < r2) goto L16
            r1 = 0
            int r2 = r0.length
            java.lang.System.arraycopy(r0, r1, r4, r5, r2)
            int r4 = r0.length
            return r4
        L16:
            javax.crypto.ShortBufferException r4 = new javax.crypto.ShortBufferException
            java.lang.String r5 = "DHKeyAgreement - buffer too short"
            r4.<init>(r5)
            throw r4
        L1e:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r5 = "Diffie-Hellman not initialised."
            r4.<init>(r5)
            throw r4
    }

    @Override
    protected javax.crypto.SecretKey engineGenerateSecret(java.lang.String r6) {
            r5 = this;
            java.math.BigInteger r0 = r5.x
            if (r0 == 0) goto L41
            java.lang.String r0 = org.bouncycastle.util.Strings.toUpperCase(r6)
            java.math.BigInteger r1 = r5.result
            byte[] r1 = r5.bigIntToBytes(r1)
            java.util.Hashtable r2 = org.bouncycastle.jce.provider.JCEDHKeyAgreement.algorithms
            boolean r2 = r2.containsKey(r0)
            if (r2 == 0) goto L3b
            java.util.Hashtable r2 = org.bouncycastle.jce.provider.JCEDHKeyAgreement.algorithms
            java.lang.Object r2 = r2.get(r0)
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            int r2 = r2 / 8
            byte[] r3 = new byte[r2]
            r4 = 0
            java.lang.System.arraycopy(r1, r4, r3, r4, r2)
            java.lang.String r1 = "DES"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L35
            org.bouncycastle.crypto.params.DESParameters.setOddParity(r3)
        L35:
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec
            r0.<init>(r3, r6)
            return r0
        L3b:
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec
            r0.<init>(r1, r6)
            return r0
        L41:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.String r0 = "Diffie-Hellman not initialised."
            r6.<init>(r0)
            throw r6
    }

    @Override
    protected byte[] engineGenerateSecret() throws java.lang.IllegalStateException {
            r2 = this;
            java.math.BigInteger r0 = r2.x
            if (r0 == 0) goto Lb
            java.math.BigInteger r0 = r2.result
            byte[] r0 = r2.bigIntToBytes(r0)
            return r0
        Lb:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Diffie-Hellman not initialised."
            r0.<init>(r1)
            throw r0
    }

    @Override
    protected void engineInit(java.security.Key r2, java.security.SecureRandom r3) throws java.security.InvalidKeyException {
            r1 = this;
            boolean r0 = r2 instanceof javax.crypto.interfaces.DHPrivateKey
            if (r0 == 0) goto L25
            javax.crypto.interfaces.DHPrivateKey r2 = (javax.crypto.interfaces.DHPrivateKey) r2
            r1.random = r3
            javax.crypto.spec.DHParameterSpec r3 = r2.getParams()
            java.math.BigInteger r3 = r3.getP()
            r1.p = r3
            javax.crypto.spec.DHParameterSpec r3 = r2.getParams()
            java.math.BigInteger r3 = r3.getG()
            r1.g = r3
            java.math.BigInteger r2 = r2.getX()
            r1.result = r2
            r1.x = r2
            return
        L25:
            java.security.InvalidKeyException r2 = new java.security.InvalidKeyException
            java.lang.String r3 = "DHKeyAgreement requires DHPrivateKey"
            r2.<init>(r3)
            throw r2
    }

    @Override
    protected void engineInit(java.security.Key r2, java.security.spec.AlgorithmParameterSpec r3, java.security.SecureRandom r4) throws java.security.InvalidKeyException, java.security.InvalidAlgorithmParameterException {
            r1 = this;
            boolean r0 = r2 instanceof javax.crypto.interfaces.DHPrivateKey
            if (r0 == 0) goto L3c
            javax.crypto.interfaces.DHPrivateKey r2 = (javax.crypto.interfaces.DHPrivateKey) r2
            r1.random = r4
            if (r3 == 0) goto L1f
            boolean r4 = r3 instanceof javax.crypto.spec.DHParameterSpec
            if (r4 == 0) goto L17
            javax.crypto.spec.DHParameterSpec r3 = (javax.crypto.spec.DHParameterSpec) r3
            java.math.BigInteger r4 = r3.getP()
            r1.p = r4
            goto L2d
        L17:
            java.security.InvalidAlgorithmParameterException r2 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r3 = "DHKeyAgreement only accepts DHParameterSpec"
            r2.<init>(r3)
            throw r2
        L1f:
            javax.crypto.spec.DHParameterSpec r3 = r2.getParams()
            java.math.BigInteger r3 = r3.getP()
            r1.p = r3
            javax.crypto.spec.DHParameterSpec r3 = r2.getParams()
        L2d:
            java.math.BigInteger r3 = r3.getG()
            r1.g = r3
            java.math.BigInteger r2 = r2.getX()
            r1.result = r2
            r1.x = r2
            return
        L3c:
            java.security.InvalidKeyException r2 = new java.security.InvalidKeyException
            java.lang.String r3 = "DHKeyAgreement requires DHPrivateKey for initialisation"
            r2.<init>(r3)
            throw r2
    }
}
