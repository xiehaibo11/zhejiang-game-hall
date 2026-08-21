package org.bouncycastle.jce.provider;

public abstract class JDKAlgorithmParameters extends java.security.AlgorithmParametersSpi {

    public static class DH extends org.bouncycastle.jce.provider.JDKAlgorithmParameters {
        javax.crypto.spec.DHParameterSpec currentSpec;

        public DH() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected byte[] engineGetEncoded() {
                r6 = this;
                java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
                r0.<init>()
                org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream
                r1.<init>(r0)
                org.bouncycastle.asn1.pkcs.DHParameter r2 = new org.bouncycastle.asn1.pkcs.DHParameter
                javax.crypto.spec.DHParameterSpec r3 = r6.currentSpec
                java.math.BigInteger r3 = r3.getP()
                javax.crypto.spec.DHParameterSpec r4 = r6.currentSpec
                java.math.BigInteger r4 = r4.getG()
                javax.crypto.spec.DHParameterSpec r5 = r6.currentSpec
                int r5 = r5.getL()
                r2.<init>(r3, r4, r5)
                r1.writeObject(r2)     // Catch: java.io.IOException -> L2c
                r1.close()     // Catch: java.io.IOException -> L2c
                byte[] r0 = r0.toByteArray()
                return r0
            L2c:
                java.lang.RuntimeException r0 = new java.lang.RuntimeException
                java.lang.String r1 = "Error encoding DHParameters"
                r0.<init>(r1)
                throw r0
        }

        @Override
        protected byte[] engineGetEncoded(java.lang.String r1) {
                r0 = this;
                boolean r1 = r0.isASN1FormatString(r1)
                if (r1 == 0) goto Lb
                byte[] r1 = r0.engineGetEncoded()
                return r1
            Lb:
                r1 = 0
                return r1
        }

        @Override
        protected void engineInit(java.security.spec.AlgorithmParameterSpec r2) throws java.security.spec.InvalidParameterSpecException {
                r1 = this;
                boolean r0 = r2 instanceof javax.crypto.spec.DHParameterSpec
                if (r0 == 0) goto L9
                javax.crypto.spec.DHParameterSpec r2 = (javax.crypto.spec.DHParameterSpec) r2
                r1.currentSpec = r2
                return
            L9:
                java.security.spec.InvalidParameterSpecException r2 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "DHParameterSpec required to initialise a Diffie-Hellman algorithm parameters object"
                r2.<init>(r0)
                throw r2
        }

        @Override
        protected void engineInit(byte[] r5) throws java.io.IOException {
                r4 = this;
                java.lang.String r0 = "Not a valid DH Parameter encoding."
                org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream
                r1.<init>(r5)
                org.bouncycastle.asn1.pkcs.DHParameter r5 = new org.bouncycastle.asn1.pkcs.DHParameter     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L3f java.lang.ClassCastException -> L45
                org.bouncycastle.asn1.DERObject r1 = r1.readObject()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L3f java.lang.ClassCastException -> L45
                org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L3f java.lang.ClassCastException -> L45
                r5.<init>(r1)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L3f java.lang.ClassCastException -> L45
                java.math.BigInteger r1 = r5.getL()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L3f java.lang.ClassCastException -> L45
                if (r1 == 0) goto L30
                javax.crypto.spec.DHParameterSpec r1 = new javax.crypto.spec.DHParameterSpec     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L3f java.lang.ClassCastException -> L45
                java.math.BigInteger r2 = r5.getP()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L3f java.lang.ClassCastException -> L45
                java.math.BigInteger r3 = r5.getG()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L3f java.lang.ClassCastException -> L45
                java.math.BigInteger r5 = r5.getL()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L3f java.lang.ClassCastException -> L45
                int r5 = r5.intValue()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L3f java.lang.ClassCastException -> L45
                r1.<init>(r2, r3, r5)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L3f java.lang.ClassCastException -> L45
            L2d:
                r4.currentSpec = r1     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L3f java.lang.ClassCastException -> L45
                goto L3e
            L30:
                javax.crypto.spec.DHParameterSpec r1 = new javax.crypto.spec.DHParameterSpec     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L3f java.lang.ClassCastException -> L45
                java.math.BigInteger r2 = r5.getP()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L3f java.lang.ClassCastException -> L45
                java.math.BigInteger r5 = r5.getG()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L3f java.lang.ClassCastException -> L45
                r1.<init>(r2, r5)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L3f java.lang.ClassCastException -> L45
                goto L2d
            L3e:
                return
            L3f:
                java.io.IOException r5 = new java.io.IOException
                r5.<init>(r0)
                throw r5
            L45:
                java.io.IOException r5 = new java.io.IOException
                r5.<init>(r0)
                throw r5
        }

        @Override
        protected void engineInit(byte[] r3, java.lang.String r4) throws java.io.IOException {
                r2 = this;
                boolean r0 = r2.isASN1FormatString(r4)
                if (r0 == 0) goto La
                r2.engineInit(r3)
                return
            La:
                java.io.IOException r3 = new java.io.IOException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Unknown parameter format "
                r0.append(r1)
                r0.append(r4)
                java.lang.String r4 = r0.toString()
                r3.<init>(r4)
                throw r3
        }

        @Override
        protected java.lang.String engineToString() {
                r1 = this;
                java.lang.String r0 = "Diffie-Hellman Parameters"
                return r0
        }

        @Override
        protected java.security.spec.AlgorithmParameterSpec localEngineGetParameterSpec(java.lang.Class r2) throws java.security.spec.InvalidParameterSpecException {
                r1 = this;
                java.lang.Class<javax.crypto.spec.DHParameterSpec> r0 = javax.crypto.spec.DHParameterSpec.class
                if (r2 != r0) goto L7
                javax.crypto.spec.DHParameterSpec r2 = r1.currentSpec
                return r2
            L7:
                java.security.spec.InvalidParameterSpecException r2 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "unknown parameter spec passed to DH parameters object."
                r2.<init>(r0)
                throw r2
        }
    }

    public static class DSA extends org.bouncycastle.jce.provider.JDKAlgorithmParameters {
        java.security.spec.DSAParameterSpec currentSpec;

        public DSA() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected byte[] engineGetEncoded() {
                r6 = this;
                java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
                r0.<init>()
                org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream
                r1.<init>(r0)
                org.bouncycastle.asn1.x509.DSAParameter r2 = new org.bouncycastle.asn1.x509.DSAParameter
                java.security.spec.DSAParameterSpec r3 = r6.currentSpec
                java.math.BigInteger r3 = r3.getP()
                java.security.spec.DSAParameterSpec r4 = r6.currentSpec
                java.math.BigInteger r4 = r4.getQ()
                java.security.spec.DSAParameterSpec r5 = r6.currentSpec
                java.math.BigInteger r5 = r5.getG()
                r2.<init>(r3, r4, r5)
                r1.writeObject(r2)     // Catch: java.io.IOException -> L2c
                r1.close()     // Catch: java.io.IOException -> L2c
                byte[] r0 = r0.toByteArray()
                return r0
            L2c:
                java.lang.RuntimeException r0 = new java.lang.RuntimeException
                java.lang.String r1 = "Error encoding DSAParameters"
                r0.<init>(r1)
                throw r0
        }

        @Override
        protected byte[] engineGetEncoded(java.lang.String r1) {
                r0 = this;
                boolean r1 = r0.isASN1FormatString(r1)
                if (r1 == 0) goto Lb
                byte[] r1 = r0.engineGetEncoded()
                return r1
            Lb:
                r1 = 0
                return r1
        }

        @Override
        protected void engineInit(java.security.spec.AlgorithmParameterSpec r2) throws java.security.spec.InvalidParameterSpecException {
                r1 = this;
                boolean r0 = r2 instanceof java.security.spec.DSAParameterSpec
                if (r0 == 0) goto L9
                java.security.spec.DSAParameterSpec r2 = (java.security.spec.DSAParameterSpec) r2
                r1.currentSpec = r2
                return
            L9:
                java.security.spec.InvalidParameterSpecException r2 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "DSAParameterSpec required to initialise a DSA algorithm parameters object"
                r2.<init>(r0)
                throw r2
        }

        @Override
        protected void engineInit(byte[] r5) throws java.io.IOException {
                r4 = this;
                java.lang.String r0 = "Not a valid DSA Parameter encoding."
                org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream
                r1.<init>(r5)
                org.bouncycastle.asn1.x509.DSAParameter r5 = new org.bouncycastle.asn1.x509.DSAParameter     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L26 java.lang.ClassCastException -> L2c
                org.bouncycastle.asn1.DERObject r1 = r1.readObject()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L26 java.lang.ClassCastException -> L2c
                org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L26 java.lang.ClassCastException -> L2c
                r5.<init>(r1)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L26 java.lang.ClassCastException -> L2c
                java.security.spec.DSAParameterSpec r1 = new java.security.spec.DSAParameterSpec     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L26 java.lang.ClassCastException -> L2c
                java.math.BigInteger r2 = r5.getP()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L26 java.lang.ClassCastException -> L2c
                java.math.BigInteger r3 = r5.getQ()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L26 java.lang.ClassCastException -> L2c
                java.math.BigInteger r5 = r5.getG()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L26 java.lang.ClassCastException -> L2c
                r1.<init>(r2, r3, r5)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L26 java.lang.ClassCastException -> L2c
                r4.currentSpec = r1     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L26 java.lang.ClassCastException -> L2c
                return
            L26:
                java.io.IOException r5 = new java.io.IOException
                r5.<init>(r0)
                throw r5
            L2c:
                java.io.IOException r5 = new java.io.IOException
                r5.<init>(r0)
                throw r5
        }

        @Override
        protected void engineInit(byte[] r3, java.lang.String r4) throws java.io.IOException {
                r2 = this;
                boolean r0 = r2.isASN1FormatString(r4)
                if (r0 != 0) goto L26
                java.lang.String r0 = "X.509"
                boolean r0 = r4.equalsIgnoreCase(r0)
                if (r0 == 0) goto Lf
                goto L26
            Lf:
                java.io.IOException r3 = new java.io.IOException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Unknown parameter format "
                r0.append(r1)
                r0.append(r4)
                java.lang.String r4 = r0.toString()
                r3.<init>(r4)
                throw r3
            L26:
                r2.engineInit(r3)
                return
        }

        @Override
        protected java.lang.String engineToString() {
                r1 = this;
                java.lang.String r0 = "DSA Parameters"
                return r0
        }

        @Override
        protected java.security.spec.AlgorithmParameterSpec localEngineGetParameterSpec(java.lang.Class r2) throws java.security.spec.InvalidParameterSpecException {
                r1 = this;
                java.lang.Class<java.security.spec.DSAParameterSpec> r0 = java.security.spec.DSAParameterSpec.class
                if (r2 != r0) goto L7
                java.security.spec.DSAParameterSpec r2 = r1.currentSpec
                return r2
            L7:
                java.security.spec.InvalidParameterSpecException r2 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "unknown parameter spec passed to DSA parameters object."
                r2.<init>(r0)
                throw r2
        }
    }

    public static class ElGamal extends org.bouncycastle.jce.provider.JDKAlgorithmParameters {
        org.bouncycastle.jce.spec.ElGamalParameterSpec currentSpec;

        public ElGamal() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected byte[] engineGetEncoded() {
                r5 = this;
                java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
                r0.<init>()
                org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream
                r1.<init>(r0)
                org.bouncycastle.asn1.oiw.ElGamalParameter r2 = new org.bouncycastle.asn1.oiw.ElGamalParameter
                org.bouncycastle.jce.spec.ElGamalParameterSpec r3 = r5.currentSpec
                java.math.BigInteger r3 = r3.getP()
                org.bouncycastle.jce.spec.ElGamalParameterSpec r4 = r5.currentSpec
                java.math.BigInteger r4 = r4.getG()
                r2.<init>(r3, r4)
                r1.writeObject(r2)     // Catch: java.io.IOException -> L26
                r1.close()     // Catch: java.io.IOException -> L26
                byte[] r0 = r0.toByteArray()
                return r0
            L26:
                java.lang.RuntimeException r0 = new java.lang.RuntimeException
                java.lang.String r1 = "Error encoding ElGamalParameters"
                r0.<init>(r1)
                throw r0
        }

        @Override
        protected byte[] engineGetEncoded(java.lang.String r2) {
                r1 = this;
                boolean r0 = r1.isASN1FormatString(r2)
                if (r0 != 0) goto L11
                java.lang.String r0 = "X.509"
                boolean r2 = r2.equalsIgnoreCase(r0)
                if (r2 == 0) goto Lf
                goto L11
            Lf:
                r2 = 0
                return r2
            L11:
                byte[] r2 = r1.engineGetEncoded()
                return r2
        }

        @Override
        protected void engineInit(java.security.spec.AlgorithmParameterSpec r3) throws java.security.spec.InvalidParameterSpecException {
                r2 = this;
                boolean r0 = r3 instanceof org.bouncycastle.jce.spec.ElGamalParameterSpec
                if (r0 != 0) goto L11
                boolean r1 = r3 instanceof javax.crypto.spec.DHParameterSpec
                if (r1 == 0) goto L9
                goto L11
            L9:
                java.security.spec.InvalidParameterSpecException r3 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "DHParameterSpec required to initialise a ElGamal algorithm parameters object"
                r3.<init>(r0)
                throw r3
            L11:
                if (r0 == 0) goto L18
                org.bouncycastle.jce.spec.ElGamalParameterSpec r3 = (org.bouncycastle.jce.spec.ElGamalParameterSpec) r3
                r2.currentSpec = r3
                goto L29
            L18:
                javax.crypto.spec.DHParameterSpec r3 = (javax.crypto.spec.DHParameterSpec) r3
                org.bouncycastle.jce.spec.ElGamalParameterSpec r0 = new org.bouncycastle.jce.spec.ElGamalParameterSpec
                java.math.BigInteger r1 = r3.getP()
                java.math.BigInteger r3 = r3.getG()
                r0.<init>(r1, r3)
                r2.currentSpec = r0
            L29:
                return
        }

        @Override
        protected void engineInit(byte[] r4) throws java.io.IOException {
                r3 = this;
                java.lang.String r0 = "Not a valid ElGamal Parameter encoding."
                org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream
                r1.<init>(r4)
                org.bouncycastle.asn1.oiw.ElGamalParameter r4 = new org.bouncycastle.asn1.oiw.ElGamalParameter     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L22 java.lang.ClassCastException -> L28
                org.bouncycastle.asn1.DERObject r1 = r1.readObject()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L22 java.lang.ClassCastException -> L28
                org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L22 java.lang.ClassCastException -> L28
                r4.<init>(r1)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L22 java.lang.ClassCastException -> L28
                org.bouncycastle.jce.spec.ElGamalParameterSpec r1 = new org.bouncycastle.jce.spec.ElGamalParameterSpec     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L22 java.lang.ClassCastException -> L28
                java.math.BigInteger r2 = r4.getP()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L22 java.lang.ClassCastException -> L28
                java.math.BigInteger r4 = r4.getG()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L22 java.lang.ClassCastException -> L28
                r1.<init>(r2, r4)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L22 java.lang.ClassCastException -> L28
                r3.currentSpec = r1     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L22 java.lang.ClassCastException -> L28
                return
            L22:
                java.io.IOException r4 = new java.io.IOException
                r4.<init>(r0)
                throw r4
            L28:
                java.io.IOException r4 = new java.io.IOException
                r4.<init>(r0)
                throw r4
        }

        @Override
        protected void engineInit(byte[] r3, java.lang.String r4) throws java.io.IOException {
                r2 = this;
                boolean r0 = r2.isASN1FormatString(r4)
                if (r0 != 0) goto L26
                java.lang.String r0 = "X.509"
                boolean r0 = r4.equalsIgnoreCase(r0)
                if (r0 == 0) goto Lf
                goto L26
            Lf:
                java.io.IOException r3 = new java.io.IOException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Unknown parameter format "
                r0.append(r1)
                r0.append(r4)
                java.lang.String r4 = r0.toString()
                r3.<init>(r4)
                throw r3
            L26:
                r2.engineInit(r3)
                return
        }

        @Override
        protected java.lang.String engineToString() {
                r1 = this;
                java.lang.String r0 = "ElGamal Parameters"
                return r0
        }

        @Override
        protected java.security.spec.AlgorithmParameterSpec localEngineGetParameterSpec(java.lang.Class r3) throws java.security.spec.InvalidParameterSpecException {
                r2 = this;
                java.lang.Class<org.bouncycastle.jce.spec.ElGamalParameterSpec> r0 = org.bouncycastle.jce.spec.ElGamalParameterSpec.class
                if (r3 != r0) goto L7
                org.bouncycastle.jce.spec.ElGamalParameterSpec r3 = r2.currentSpec
                return r3
            L7:
                java.lang.Class<javax.crypto.spec.DHParameterSpec> r0 = javax.crypto.spec.DHParameterSpec.class
                if (r3 != r0) goto L1d
                javax.crypto.spec.DHParameterSpec r3 = new javax.crypto.spec.DHParameterSpec
                org.bouncycastle.jce.spec.ElGamalParameterSpec r0 = r2.currentSpec
                java.math.BigInteger r0 = r0.getP()
                org.bouncycastle.jce.spec.ElGamalParameterSpec r1 = r2.currentSpec
                java.math.BigInteger r1 = r1.getG()
                r3.<init>(r0, r1)
                return r3
            L1d:
                java.security.spec.InvalidParameterSpecException r3 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "unknown parameter spec passed to ElGamal parameters object."
                r3.<init>(r0)
                throw r3
        }
    }

    public static class GOST3410 extends org.bouncycastle.jce.provider.JDKAlgorithmParameters {
        org.bouncycastle.jce.spec.GOST3410ParameterSpec currentSpec;

        public GOST3410() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected byte[] engineGetEncoded() {
                r7 = this;
                java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
                r0.<init>()
                org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream
                r1.<init>(r0)
                org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters r2 = new org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters
                org.bouncycastle.asn1.DERObjectIdentifier r3 = new org.bouncycastle.asn1.DERObjectIdentifier
                org.bouncycastle.jce.spec.GOST3410ParameterSpec r4 = r7.currentSpec
                java.lang.String r4 = r4.getPublicKeyParamSetOID()
                r3.<init>(r4)
                org.bouncycastle.asn1.DERObjectIdentifier r4 = new org.bouncycastle.asn1.DERObjectIdentifier
                org.bouncycastle.jce.spec.GOST3410ParameterSpec r5 = r7.currentSpec
                java.lang.String r5 = r5.getDigestParamSetOID()
                r4.<init>(r5)
                org.bouncycastle.asn1.DERObjectIdentifier r5 = new org.bouncycastle.asn1.DERObjectIdentifier
                org.bouncycastle.jce.spec.GOST3410ParameterSpec r6 = r7.currentSpec
                java.lang.String r6 = r6.getEncryptionParamSetOID()
                r5.<init>(r6)
                r2.<init>(r3, r4, r5)
                r1.writeObject(r2)     // Catch: java.io.IOException -> L3b
                r1.close()     // Catch: java.io.IOException -> L3b
                byte[] r0 = r0.toByteArray()
                return r0
            L3b:
                java.lang.RuntimeException r0 = new java.lang.RuntimeException
                java.lang.String r1 = "Error encoding GOST3410Parameters"
                r0.<init>(r1)
                throw r0
        }

        @Override
        protected byte[] engineGetEncoded(java.lang.String r2) {
                r1 = this;
                boolean r0 = r1.isASN1FormatString(r2)
                if (r0 != 0) goto L11
                java.lang.String r0 = "X.509"
                boolean r2 = r2.equalsIgnoreCase(r0)
                if (r2 == 0) goto Lf
                goto L11
            Lf:
                r2 = 0
                return r2
            L11:
                byte[] r2 = r1.engineGetEncoded()
                return r2
        }

        @Override
        protected void engineInit(java.security.spec.AlgorithmParameterSpec r2) throws java.security.spec.InvalidParameterSpecException {
                r1 = this;
                boolean r0 = r2 instanceof org.bouncycastle.jce.spec.GOST3410ParameterSpec
                if (r0 == 0) goto L9
                org.bouncycastle.jce.spec.GOST3410ParameterSpec r2 = (org.bouncycastle.jce.spec.GOST3410ParameterSpec) r2
                r1.currentSpec = r2
                return
            L9:
                java.security.spec.InvalidParameterSpecException r2 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "GOST3410ParameterSpec required to initialise a GOST3410 algorithm parameters object"
                r2.<init>(r0)
                throw r2
        }

        @Override
        protected void engineInit(byte[] r3) throws java.io.IOException {
                r2 = this;
                java.lang.String r0 = "Not a valid GOST3410 Parameter encoding."
                org.bouncycastle.asn1.ASN1Object r3 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r3)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L14 java.lang.ClassCastException -> L1a
                org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L14 java.lang.ClassCastException -> L1a
                org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters r1 = new org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L14 java.lang.ClassCastException -> L1a
                r1.<init>(r3)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L14 java.lang.ClassCastException -> L1a
                org.bouncycastle.jce.spec.GOST3410ParameterSpec r3 = org.bouncycastle.jce.spec.GOST3410ParameterSpec.fromPublicKeyAlg(r1)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L14 java.lang.ClassCastException -> L1a
                r2.currentSpec = r3     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L14 java.lang.ClassCastException -> L1a
                return
            L14:
                java.io.IOException r3 = new java.io.IOException
                r3.<init>(r0)
                throw r3
            L1a:
                java.io.IOException r3 = new java.io.IOException
                r3.<init>(r0)
                throw r3
        }

        @Override
        protected void engineInit(byte[] r3, java.lang.String r4) throws java.io.IOException {
                r2 = this;
                boolean r0 = r2.isASN1FormatString(r4)
                if (r0 != 0) goto L26
                java.lang.String r0 = "X.509"
                boolean r0 = r4.equalsIgnoreCase(r0)
                if (r0 == 0) goto Lf
                goto L26
            Lf:
                java.io.IOException r3 = new java.io.IOException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Unknown parameter format "
                r0.append(r1)
                r0.append(r4)
                java.lang.String r4 = r0.toString()
                r3.<init>(r4)
                throw r3
            L26:
                r2.engineInit(r3)
                return
        }

        @Override
        protected java.lang.String engineToString() {
                r1 = this;
                java.lang.String r0 = "GOST3410 Parameters"
                return r0
        }

        @Override
        protected java.security.spec.AlgorithmParameterSpec localEngineGetParameterSpec(java.lang.Class r2) throws java.security.spec.InvalidParameterSpecException {
                r1 = this;
                java.lang.Class<org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec> r0 = org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec.class
                if (r2 != r0) goto L7
                org.bouncycastle.jce.spec.GOST3410ParameterSpec r2 = r1.currentSpec
                return r2
            L7:
                java.security.spec.InvalidParameterSpecException r2 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "unknown parameter spec passed to GOST3410 parameters object."
                r2.<init>(r0)
                throw r2
        }
    }

    public static class IDEAAlgorithmParameters extends org.bouncycastle.jce.provider.JDKAlgorithmParameters {
        private byte[] iv;

        public IDEAAlgorithmParameters() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected byte[] engineGetEncoded() throws java.io.IOException {
                r1 = this;
                java.lang.String r0 = "ASN.1"
                byte[] r0 = r1.engineGetEncoded(r0)
                return r0
        }

        @Override
        protected byte[] engineGetEncoded(java.lang.String r4) throws java.io.IOException {
                r3 = this;
                boolean r0 = r3.isASN1FormatString(r4)
                java.lang.String r1 = "RAW"
                if (r0 == 0) goto L16
                org.bouncycastle.asn1.misc.IDEACBCPar r4 = new org.bouncycastle.asn1.misc.IDEACBCPar
                byte[] r0 = r3.engineGetEncoded(r1)
                r4.<init>(r0)
                byte[] r4 = r4.getEncoded()
                return r4
            L16:
                boolean r4 = r4.equals(r1)
                if (r4 == 0) goto L27
                byte[] r4 = r3.iv
                int r0 = r4.length
                byte[] r0 = new byte[r0]
                int r1 = r4.length
                r2 = 0
                java.lang.System.arraycopy(r4, r2, r0, r2, r1)
                return r0
            L27:
                r4 = 0
                return r4
        }

        @Override
        protected void engineInit(java.security.spec.AlgorithmParameterSpec r2) throws java.security.spec.InvalidParameterSpecException {
                r1 = this;
                boolean r0 = r2 instanceof javax.crypto.spec.IvParameterSpec
                if (r0 == 0) goto Ld
                javax.crypto.spec.IvParameterSpec r2 = (javax.crypto.spec.IvParameterSpec) r2
                byte[] r2 = r2.getIV()
                r1.iv = r2
                return
            Ld:
                java.security.spec.InvalidParameterSpecException r2 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "IvParameterSpec required to initialise a IV parameters algorithm parameters object"
                r2.<init>(r0)
                throw r2
        }

        @Override
        protected void engineInit(byte[] r4) throws java.io.IOException {
                r3 = this;
                int r0 = r4.length
                byte[] r0 = new byte[r0]
                r3.iv = r0
                int r1 = r0.length
                r2 = 0
                java.lang.System.arraycopy(r4, r2, r0, r2, r1)
                return
        }

        @Override
        protected void engineInit(byte[] r2, java.lang.String r3) throws java.io.IOException {
                r1 = this;
                java.lang.String r0 = "RAW"
                boolean r0 = r3.equals(r0)
                if (r0 == 0) goto Lc
                r1.engineInit(r2)
                return
            Lc:
                java.lang.String r0 = "ASN.1"
                boolean r3 = r3.equals(r0)
                if (r3 == 0) goto L2c
                org.bouncycastle.asn1.ASN1InputStream r3 = new org.bouncycastle.asn1.ASN1InputStream
                r3.<init>(r2)
                org.bouncycastle.asn1.misc.IDEACBCPar r2 = new org.bouncycastle.asn1.misc.IDEACBCPar
                org.bouncycastle.asn1.DERObject r3 = r3.readObject()
                org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
                r2.<init>(r3)
                byte[] r2 = r2.getIV()
                r1.engineInit(r2)
                return
            L2c:
                java.io.IOException r2 = new java.io.IOException
                java.lang.String r3 = "Unknown parameters format in IV parameters object"
                r2.<init>(r3)
                throw r2
        }

        @Override
        protected java.lang.String engineToString() {
                r1 = this;
                java.lang.String r0 = "IDEA Parameters"
                return r0
        }

        @Override
        protected java.security.spec.AlgorithmParameterSpec localEngineGetParameterSpec(java.lang.Class r2) throws java.security.spec.InvalidParameterSpecException {
                r1 = this;
                java.lang.Class<javax.crypto.spec.IvParameterSpec> r0 = javax.crypto.spec.IvParameterSpec.class
                if (r2 != r0) goto Lc
                javax.crypto.spec.IvParameterSpec r2 = new javax.crypto.spec.IvParameterSpec
                byte[] r0 = r1.iv
                r2.<init>(r0)
                return r2
            Lc:
                java.security.spec.InvalidParameterSpecException r2 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "unknown parameter spec passed to IV parameters object."
                r2.<init>(r0)
                throw r2
        }
    }

    public static class IES extends org.bouncycastle.jce.provider.JDKAlgorithmParameters {
        org.bouncycastle.jce.spec.IESParameterSpec currentSpec;

        public IES() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected byte[] engineGetEncoded() {
                r5 = this;
                java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
                r0.<init>()
                org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream
                r1.<init>(r0)
                org.bouncycastle.asn1.ASN1EncodableVector r2 = new org.bouncycastle.asn1.ASN1EncodableVector     // Catch: java.io.IOException -> L49
                r2.<init>()     // Catch: java.io.IOException -> L49
                org.bouncycastle.asn1.DEROctetString r3 = new org.bouncycastle.asn1.DEROctetString     // Catch: java.io.IOException -> L49
                org.bouncycastle.jce.spec.IESParameterSpec r4 = r5.currentSpec     // Catch: java.io.IOException -> L49
                byte[] r4 = r4.getDerivationV()     // Catch: java.io.IOException -> L49
                r3.<init>(r4)     // Catch: java.io.IOException -> L49
                r2.add(r3)     // Catch: java.io.IOException -> L49
                org.bouncycastle.asn1.DEROctetString r3 = new org.bouncycastle.asn1.DEROctetString     // Catch: java.io.IOException -> L49
                org.bouncycastle.jce.spec.IESParameterSpec r4 = r5.currentSpec     // Catch: java.io.IOException -> L49
                byte[] r4 = r4.getEncodingV()     // Catch: java.io.IOException -> L49
                r3.<init>(r4)     // Catch: java.io.IOException -> L49
                r2.add(r3)     // Catch: java.io.IOException -> L49
                org.bouncycastle.asn1.DERInteger r3 = new org.bouncycastle.asn1.DERInteger     // Catch: java.io.IOException -> L49
                org.bouncycastle.jce.spec.IESParameterSpec r4 = r5.currentSpec     // Catch: java.io.IOException -> L49
                int r4 = r4.getMacKeySize()     // Catch: java.io.IOException -> L49
                r3.<init>(r4)     // Catch: java.io.IOException -> L49
                r2.add(r3)     // Catch: java.io.IOException -> L49
                org.bouncycastle.asn1.DERSequence r3 = new org.bouncycastle.asn1.DERSequence     // Catch: java.io.IOException -> L49
                r3.<init>(r2)     // Catch: java.io.IOException -> L49
                r1.writeObject(r3)     // Catch: java.io.IOException -> L49
                r1.close()     // Catch: java.io.IOException -> L49
                byte[] r0 = r0.toByteArray()
                return r0
            L49:
                java.lang.RuntimeException r0 = new java.lang.RuntimeException
                java.lang.String r1 = "Error encoding IESParameters"
                r0.<init>(r1)
                throw r0
        }

        @Override
        protected byte[] engineGetEncoded(java.lang.String r2) {
                r1 = this;
                boolean r0 = r1.isASN1FormatString(r2)
                if (r0 != 0) goto L11
                java.lang.String r0 = "X.509"
                boolean r2 = r2.equalsIgnoreCase(r0)
                if (r2 == 0) goto Lf
                goto L11
            Lf:
                r2 = 0
                return r2
            L11:
                byte[] r2 = r1.engineGetEncoded()
                return r2
        }

        @Override
        protected void engineInit(java.security.spec.AlgorithmParameterSpec r2) throws java.security.spec.InvalidParameterSpecException {
                r1 = this;
                boolean r0 = r2 instanceof org.bouncycastle.jce.spec.IESParameterSpec
                if (r0 == 0) goto L9
                org.bouncycastle.jce.spec.IESParameterSpec r2 = (org.bouncycastle.jce.spec.IESParameterSpec) r2
                r1.currentSpec = r2
                return
            L9:
                java.security.spec.InvalidParameterSpecException r2 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "IESParameterSpec required to initialise a IES algorithm parameters object"
                r2.<init>(r0)
                throw r2
        }

        @Override
        protected void engineInit(byte[] r6) throws java.io.IOException {
                r5 = this;
                java.lang.String r0 = "Not a valid IES Parameter encoding."
                org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream
                r1.<init>(r6)
                org.bouncycastle.asn1.DERObject r6 = r1.readObject()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L38 java.lang.ClassCastException -> L3e
                org.bouncycastle.asn1.ASN1Sequence r6 = (org.bouncycastle.asn1.ASN1Sequence) r6     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L38 java.lang.ClassCastException -> L3e
                org.bouncycastle.jce.spec.IESParameterSpec r1 = new org.bouncycastle.jce.spec.IESParameterSpec     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L38 java.lang.ClassCastException -> L3e
                r2 = 0
                org.bouncycastle.asn1.DEREncodable r3 = r6.getObjectAt(r2)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L38 java.lang.ClassCastException -> L3e
                org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L38 java.lang.ClassCastException -> L3e
                byte[] r3 = r3.getOctets()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L38 java.lang.ClassCastException -> L3e
                org.bouncycastle.asn1.DEREncodable r4 = r6.getObjectAt(r2)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L38 java.lang.ClassCastException -> L3e
                org.bouncycastle.asn1.ASN1OctetString r4 = (org.bouncycastle.asn1.ASN1OctetString) r4     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L38 java.lang.ClassCastException -> L3e
                byte[] r4 = r4.getOctets()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L38 java.lang.ClassCastException -> L3e
                org.bouncycastle.asn1.DEREncodable r6 = r6.getObjectAt(r2)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L38 java.lang.ClassCastException -> L3e
                org.bouncycastle.asn1.DERInteger r6 = (org.bouncycastle.asn1.DERInteger) r6     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L38 java.lang.ClassCastException -> L3e
                java.math.BigInteger r6 = r6.getValue()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L38 java.lang.ClassCastException -> L3e
                int r6 = r6.intValue()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L38 java.lang.ClassCastException -> L3e
                r1.<init>(r3, r4, r6)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L38 java.lang.ClassCastException -> L3e
                r5.currentSpec = r1     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L38 java.lang.ClassCastException -> L3e
                return
            L38:
                java.io.IOException r6 = new java.io.IOException
                r6.<init>(r0)
                throw r6
            L3e:
                java.io.IOException r6 = new java.io.IOException
                r6.<init>(r0)
                throw r6
        }

        @Override
        protected void engineInit(byte[] r3, java.lang.String r4) throws java.io.IOException {
                r2 = this;
                boolean r0 = r2.isASN1FormatString(r4)
                if (r0 != 0) goto L26
                java.lang.String r0 = "X.509"
                boolean r0 = r4.equalsIgnoreCase(r0)
                if (r0 == 0) goto Lf
                goto L26
            Lf:
                java.io.IOException r3 = new java.io.IOException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Unknown parameter format "
                r0.append(r1)
                r0.append(r4)
                java.lang.String r4 = r0.toString()
                r3.<init>(r4)
                throw r3
            L26:
                r2.engineInit(r3)
                return
        }

        @Override
        protected java.lang.String engineToString() {
                r1 = this;
                java.lang.String r0 = "IES Parameters"
                return r0
        }

        @Override
        protected java.security.spec.AlgorithmParameterSpec localEngineGetParameterSpec(java.lang.Class r2) throws java.security.spec.InvalidParameterSpecException {
                r1 = this;
                java.lang.Class<org.bouncycastle.jce.spec.IESParameterSpec> r0 = org.bouncycastle.jce.spec.IESParameterSpec.class
                if (r2 != r0) goto L7
                org.bouncycastle.jce.spec.IESParameterSpec r2 = r1.currentSpec
                return r2
            L7:
                java.security.spec.InvalidParameterSpecException r2 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "unknown parameter spec passed to ElGamal parameters object."
                r2.<init>(r0)
                throw r2
        }
    }

    public static class IVAlgorithmParameters extends org.bouncycastle.jce.provider.JDKAlgorithmParameters {
        private byte[] iv;

        public IVAlgorithmParameters() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected byte[] engineGetEncoded() throws java.io.IOException {
                r1 = this;
                java.lang.String r0 = "ASN.1"
                byte[] r0 = r1.engineGetEncoded(r0)
                return r0
        }

        @Override
        protected byte[] engineGetEncoded(java.lang.String r4) throws java.io.IOException {
                r3 = this;
                boolean r0 = r3.isASN1FormatString(r4)
                java.lang.String r1 = "RAW"
                if (r0 == 0) goto L16
                org.bouncycastle.asn1.DEROctetString r4 = new org.bouncycastle.asn1.DEROctetString
                byte[] r0 = r3.engineGetEncoded(r1)
                r4.<init>(r0)
                byte[] r4 = r4.getEncoded()
                return r4
            L16:
                boolean r4 = r4.equals(r1)
                if (r4 == 0) goto L27
                byte[] r4 = r3.iv
                int r0 = r4.length
                byte[] r0 = new byte[r0]
                int r1 = r4.length
                r2 = 0
                java.lang.System.arraycopy(r4, r2, r0, r2, r1)
                return r0
            L27:
                r4 = 0
                return r4
        }

        @Override
        protected void engineInit(java.security.spec.AlgorithmParameterSpec r2) throws java.security.spec.InvalidParameterSpecException {
                r1 = this;
                boolean r0 = r2 instanceof javax.crypto.spec.IvParameterSpec
                if (r0 == 0) goto Ld
                javax.crypto.spec.IvParameterSpec r2 = (javax.crypto.spec.IvParameterSpec) r2
                byte[] r2 = r2.getIV()
                r1.iv = r2
                return
            Ld:
                java.security.spec.InvalidParameterSpecException r2 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "IvParameterSpec required to initialise a IV parameters algorithm parameters object"
                r2.<init>(r0)
                throw r2
        }

        @Override
        protected void engineInit(byte[] r4) throws java.io.IOException {
                r3 = this;
                int r0 = r4.length
                int r0 = r0 % 8
                r1 = 0
                if (r0 == 0) goto L22
                r0 = r4[r1]
                r2 = 4
                if (r0 != r2) goto L22
                r0 = 1
                r0 = r4[r0]
                int r2 = r4.length
                int r2 = r2 + (-2)
                if (r0 != r2) goto L22
                org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
                r0.<init>(r4)
                org.bouncycastle.asn1.DERObject r4 = r0.readObject()
                org.bouncycastle.asn1.ASN1OctetString r4 = (org.bouncycastle.asn1.ASN1OctetString) r4
                byte[] r4 = r4.getOctets()
            L22:
                int r0 = r4.length
                byte[] r0 = new byte[r0]
                r3.iv = r0
                int r2 = r0.length
                java.lang.System.arraycopy(r4, r1, r0, r1, r2)
                return
        }

        @Override
        protected void engineInit(byte[] r3, java.lang.String r4) throws java.io.IOException {
                r2 = this;
                boolean r0 = r2.isASN1FormatString(r4)
                if (r0 == 0) goto L31
                org.bouncycastle.asn1.ASN1InputStream r4 = new org.bouncycastle.asn1.ASN1InputStream
                r4.<init>(r3)
                org.bouncycastle.asn1.DERObject r3 = r4.readObject()     // Catch: java.lang.Exception -> L19
                org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3     // Catch: java.lang.Exception -> L19
                byte[] r3 = r3.getOctets()     // Catch: java.lang.Exception -> L19
                r2.engineInit(r3)     // Catch: java.lang.Exception -> L19
                return
            L19:
                r3 = move-exception
                java.io.IOException r4 = new java.io.IOException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Exception decoding: "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                r4.<init>(r3)
                throw r4
            L31:
                java.lang.String r0 = "RAW"
                boolean r4 = r4.equals(r0)
                if (r4 == 0) goto L3d
                r2.engineInit(r3)
                return
            L3d:
                java.io.IOException r3 = new java.io.IOException
                java.lang.String r4 = "Unknown parameters format in IV parameters object"
                r3.<init>(r4)
                throw r3
        }

        @Override
        protected java.lang.String engineToString() {
                r1 = this;
                java.lang.String r0 = "IV Parameters"
                return r0
        }

        @Override
        protected java.security.spec.AlgorithmParameterSpec localEngineGetParameterSpec(java.lang.Class r2) throws java.security.spec.InvalidParameterSpecException {
                r1 = this;
                java.lang.Class<javax.crypto.spec.IvParameterSpec> r0 = javax.crypto.spec.IvParameterSpec.class
                if (r2 != r0) goto Lc
                javax.crypto.spec.IvParameterSpec r2 = new javax.crypto.spec.IvParameterSpec
                byte[] r0 = r1.iv
                r2.<init>(r0)
                return r2
            Lc:
                java.security.spec.InvalidParameterSpecException r2 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "unknown parameter spec passed to IV parameters object."
                r2.<init>(r0)
                throw r2
        }
    }

    public static class OAEP extends org.bouncycastle.jce.provider.JDKAlgorithmParameters {
        javax.crypto.spec.OAEPParameterSpec currentSpec;

        public OAEP() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected byte[] engineGetEncoded() {
                r8 = this;
                java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
                r0.<init>()
                org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream
                r1.<init>(r0)
                org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
                javax.crypto.spec.OAEPParameterSpec r3 = r8.currentSpec
                java.lang.String r3 = r3.getDigestAlgorithm()
                org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.jce.provider.JCEDigestUtil.getOID(r3)
                org.bouncycastle.asn1.DERNull r4 = new org.bouncycastle.asn1.DERNull
                r4.<init>()
                r2.<init>(r3, r4)
                javax.crypto.spec.OAEPParameterSpec r3 = r8.currentSpec
                java.security.spec.AlgorithmParameterSpec r3 = r3.getMGFParameters()
                java.security.spec.MGF1ParameterSpec r3 = (java.security.spec.MGF1ParameterSpec) r3
                org.bouncycastle.asn1.x509.AlgorithmIdentifier r4 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
                org.bouncycastle.asn1.DERObjectIdentifier r5 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_mgf1
                org.bouncycastle.asn1.x509.AlgorithmIdentifier r6 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
                java.lang.String r3 = r3.getDigestAlgorithm()
                org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.jce.provider.JCEDigestUtil.getOID(r3)
                org.bouncycastle.asn1.DERNull r7 = new org.bouncycastle.asn1.DERNull
                r7.<init>()
                r6.<init>(r3, r7)
                r4.<init>(r5, r6)
                javax.crypto.spec.OAEPParameterSpec r3 = r8.currentSpec
                javax.crypto.spec.PSource r3 = r3.getPSource()
                javax.crypto.spec.PSource$PSpecified r3 = (javax.crypto.spec.PSource.PSpecified) r3
                org.bouncycastle.asn1.x509.AlgorithmIdentifier r5 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
                org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_pSpecified
                org.bouncycastle.asn1.DEROctetString r7 = new org.bouncycastle.asn1.DEROctetString
                byte[] r3 = r3.getValue()
                r7.<init>(r3)
                r5.<init>(r6, r7)
                org.bouncycastle.asn1.pkcs.RSAESOAEPparams r3 = new org.bouncycastle.asn1.pkcs.RSAESOAEPparams
                r3.<init>(r2, r4, r5)
                r1.writeObject(r3)     // Catch: java.io.IOException -> L67
                r1.close()     // Catch: java.io.IOException -> L67
                byte[] r0 = r0.toByteArray()
                return r0
            L67:
                java.lang.RuntimeException r0 = new java.lang.RuntimeException
                java.lang.String r1 = "Error encoding OAEPParameters"
                r0.<init>(r1)
                throw r0
        }

        @Override
        protected byte[] engineGetEncoded(java.lang.String r2) {
                r1 = this;
                boolean r0 = r1.isASN1FormatString(r2)
                if (r0 != 0) goto L11
                java.lang.String r0 = "X.509"
                boolean r2 = r2.equalsIgnoreCase(r0)
                if (r2 == 0) goto Lf
                goto L11
            Lf:
                r2 = 0
                return r2
            L11:
                byte[] r2 = r1.engineGetEncoded()
                return r2
        }

        @Override
        protected void engineInit(java.security.spec.AlgorithmParameterSpec r2) throws java.security.spec.InvalidParameterSpecException {
                r1 = this;
                boolean r0 = r2 instanceof javax.crypto.spec.OAEPParameterSpec
                if (r0 == 0) goto L9
                javax.crypto.spec.OAEPParameterSpec r2 = (javax.crypto.spec.OAEPParameterSpec) r2
                r1.currentSpec = r2
                return
            L9:
                java.security.spec.InvalidParameterSpecException r2 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "OAEPParameterSpec required to initialise an OAEP algorithm parameters object"
                r2.<init>(r0)
                throw r2
        }

        @Override
        protected void engineInit(byte[] r7) throws java.io.IOException {
                r6 = this;
                java.lang.String r0 = "Not a valid OAEP Parameter encoding."
                org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream
                r1.<init>(r7)
                org.bouncycastle.asn1.pkcs.RSAESOAEPparams r7 = new org.bouncycastle.asn1.pkcs.RSAESOAEPparams     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                org.bouncycastle.asn1.DERObject r1 = r1.readObject()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                r7.<init>(r1)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                javax.crypto.spec.OAEPParameterSpec r1 = new javax.crypto.spec.OAEPParameterSpec     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = r7.getHashAlgorithm()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                org.bouncycastle.asn1.DERObjectIdentifier r2 = r2.getObjectId()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                java.lang.String r2 = r2.getId()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                org.bouncycastle.asn1.x509.AlgorithmIdentifier r3 = r7.getMaskGenAlgorithm()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                org.bouncycastle.asn1.DERObjectIdentifier r3 = r3.getObjectId()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                java.lang.String r3 = r3.getId()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                java.security.spec.MGF1ParameterSpec r4 = new java.security.spec.MGF1ParameterSpec     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                org.bouncycastle.asn1.x509.AlgorithmIdentifier r5 = r7.getMaskGenAlgorithm()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                org.bouncycastle.asn1.DEREncodable r5 = r5.getParameters()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                org.bouncycastle.asn1.x509.AlgorithmIdentifier r5 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r5)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                org.bouncycastle.asn1.DERObjectIdentifier r5 = r5.getObjectId()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                java.lang.String r5 = r5.getId()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                r4.<init>(r5)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                javax.crypto.spec.PSource$PSpecified r5 = new javax.crypto.spec.PSource$PSpecified     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                org.bouncycastle.asn1.x509.AlgorithmIdentifier r7 = r7.getPSourceAlgorithm()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                org.bouncycastle.asn1.DEREncodable r7 = r7.getParameters()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                org.bouncycastle.asn1.ASN1OctetString r7 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r7)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                byte[] r7 = r7.getOctets()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                r5.<init>(r7)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                r1.<init>(r2, r3, r4, r5)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                r6.currentSpec = r1     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L60 java.lang.ClassCastException -> L66
                return
            L60:
                java.io.IOException r7 = new java.io.IOException
                r7.<init>(r0)
                throw r7
            L66:
                java.io.IOException r7 = new java.io.IOException
                r7.<init>(r0)
                throw r7
        }

        @Override
        protected void engineInit(byte[] r3, java.lang.String r4) throws java.io.IOException {
                r2 = this;
                java.lang.String r0 = "X.509"
                boolean r0 = r4.equalsIgnoreCase(r0)
                if (r0 != 0) goto L28
                java.lang.String r0 = "ASN.1"
                boolean r0 = r4.equalsIgnoreCase(r0)
                if (r0 == 0) goto L11
                goto L28
            L11:
                java.io.IOException r3 = new java.io.IOException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Unknown parameter format "
                r0.append(r1)
                r0.append(r4)
                java.lang.String r4 = r0.toString()
                r3.<init>(r4)
                throw r3
            L28:
                r2.engineInit(r3)
                return
        }

        @Override
        protected java.lang.String engineToString() {
                r1 = this;
                java.lang.String r0 = "OAEP Parameters"
                return r0
        }

        @Override
        protected java.security.spec.AlgorithmParameterSpec localEngineGetParameterSpec(java.lang.Class r2) throws java.security.spec.InvalidParameterSpecException {
                r1 = this;
                java.lang.Class<javax.crypto.spec.OAEPParameterSpec> r0 = javax.crypto.spec.OAEPParameterSpec.class
                if (r2 != r0) goto L9
                javax.crypto.spec.OAEPParameterSpec r2 = r1.currentSpec
                if (r2 == 0) goto L9
                return r2
            L9:
                java.security.spec.InvalidParameterSpecException r2 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "unknown parameter spec passed to OAEP parameters object."
                r2.<init>(r0)
                throw r2
        }
    }

    public static class PKCS12PBE extends org.bouncycastle.jce.provider.JDKAlgorithmParameters {
        org.bouncycastle.asn1.pkcs.PKCS12PBEParams params;

        public PKCS12PBE() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected byte[] engineGetEncoded() {
                r4 = this;
                java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
                r0.<init>()
                org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream
                r1.<init>(r0)
                org.bouncycastle.asn1.pkcs.PKCS12PBEParams r2 = r4.params     // Catch: java.io.IOException -> L14
                r1.writeObject(r2)     // Catch: java.io.IOException -> L14
                byte[] r0 = r0.toByteArray()
                return r0
            L14:
                r0 = move-exception
                java.lang.RuntimeException r1 = new java.lang.RuntimeException
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "Oooops! "
                r2.append(r3)
                java.lang.String r0 = r0.toString()
                r2.append(r0)
                java.lang.String r0 = r2.toString()
                r1.<init>(r0)
                throw r1
        }

        @Override
        protected byte[] engineGetEncoded(java.lang.String r1) {
                r0 = this;
                boolean r1 = r0.isASN1FormatString(r1)
                if (r1 == 0) goto Lb
                byte[] r1 = r0.engineGetEncoded()
                return r1
            Lb:
                r1 = 0
                return r1
        }

        @Override
        protected void engineInit(java.security.spec.AlgorithmParameterSpec r3) throws java.security.spec.InvalidParameterSpecException {
                r2 = this;
                boolean r0 = r3 instanceof javax.crypto.spec.PBEParameterSpec
                if (r0 == 0) goto L16
                javax.crypto.spec.PBEParameterSpec r3 = (javax.crypto.spec.PBEParameterSpec) r3
                org.bouncycastle.asn1.pkcs.PKCS12PBEParams r0 = new org.bouncycastle.asn1.pkcs.PKCS12PBEParams
                byte[] r1 = r3.getSalt()
                int r3 = r3.getIterationCount()
                r0.<init>(r1, r3)
                r2.params = r0
                return
            L16:
                java.security.spec.InvalidParameterSpecException r3 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "PBEParameterSpec required to initialise a PKCS12 PBE parameters algorithm parameters object"
                r3.<init>(r0)
                throw r3
        }

        @Override
        protected void engineInit(byte[] r2) throws java.io.IOException {
                r1 = this;
                org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
                r0.<init>(r2)
                org.bouncycastle.asn1.DERObject r2 = r0.readObject()
                org.bouncycastle.asn1.pkcs.PKCS12PBEParams r2 = org.bouncycastle.asn1.pkcs.PKCS12PBEParams.getInstance(r2)
                r1.params = r2
                return
        }

        @Override
        protected void engineInit(byte[] r1, java.lang.String r2) throws java.io.IOException {
                r0 = this;
                boolean r2 = r0.isASN1FormatString(r2)
                if (r2 == 0) goto La
                r0.engineInit(r1)
                return
            La:
                java.io.IOException r1 = new java.io.IOException
                java.lang.String r2 = "Unknown parameters format in PKCS12 PBE parameters object"
                r1.<init>(r2)
                throw r1
        }

        @Override
        protected java.lang.String engineToString() {
                r1 = this;
                java.lang.String r0 = "PKCS12 PBE Parameters"
                return r0
        }

        @Override
        protected java.security.spec.AlgorithmParameterSpec localEngineGetParameterSpec(java.lang.Class r3) throws java.security.spec.InvalidParameterSpecException {
                r2 = this;
                java.lang.Class<javax.crypto.spec.PBEParameterSpec> r0 = javax.crypto.spec.PBEParameterSpec.class
                if (r3 != r0) goto L1a
                javax.crypto.spec.PBEParameterSpec r3 = new javax.crypto.spec.PBEParameterSpec
                org.bouncycastle.asn1.pkcs.PKCS12PBEParams r0 = r2.params
                byte[] r0 = r0.getIV()
                org.bouncycastle.asn1.pkcs.PKCS12PBEParams r1 = r2.params
                java.math.BigInteger r1 = r1.getIterations()
                int r1 = r1.intValue()
                r3.<init>(r0, r1)
                return r3
            L1a:
                java.security.spec.InvalidParameterSpecException r3 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "unknown parameter spec passed to PKCS12 PBE parameters object."
                r3.<init>(r0)
                throw r3
        }
    }

    public static class PSS extends org.bouncycastle.jce.provider.JDKAlgorithmParameters {
        java.security.spec.PSSParameterSpec currentSpec;

        public PSS() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected byte[] engineGetEncoded() throws java.io.IOException {
                r7 = this;
                java.security.spec.PSSParameterSpec r0 = r7.currentSpec
                org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
                java.lang.String r2 = r0.getDigestAlgorithm()
                org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.provider.JCEDigestUtil.getOID(r2)
                org.bouncycastle.asn1.DERNull r3 = new org.bouncycastle.asn1.DERNull
                r3.<init>()
                r1.<init>(r2, r3)
                java.security.spec.AlgorithmParameterSpec r2 = r0.getMGFParameters()
                java.security.spec.MGF1ParameterSpec r2 = (java.security.spec.MGF1ParameterSpec) r2
                org.bouncycastle.asn1.x509.AlgorithmIdentifier r3 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
                org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_mgf1
                org.bouncycastle.asn1.x509.AlgorithmIdentifier r5 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
                java.lang.String r2 = r2.getDigestAlgorithm()
                org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.provider.JCEDigestUtil.getOID(r2)
                org.bouncycastle.asn1.DERNull r6 = new org.bouncycastle.asn1.DERNull
                r6.<init>()
                r5.<init>(r2, r6)
                r3.<init>(r4, r5)
                org.bouncycastle.asn1.pkcs.RSASSAPSSparams r2 = new org.bouncycastle.asn1.pkcs.RSASSAPSSparams
                org.bouncycastle.asn1.DERInteger r4 = new org.bouncycastle.asn1.DERInteger
                int r5 = r0.getSaltLength()
                r4.<init>(r5)
                org.bouncycastle.asn1.DERInteger r5 = new org.bouncycastle.asn1.DERInteger
                int r0 = r0.getTrailerField()
                r5.<init>(r0)
                r2.<init>(r1, r3, r4, r5)
                java.lang.String r0 = "DER"
                byte[] r0 = r2.getEncoded(r0)
                return r0
        }

        @Override
        protected byte[] engineGetEncoded(java.lang.String r2) throws java.io.IOException {
                r1 = this;
                java.lang.String r0 = "X.509"
                boolean r0 = r2.equalsIgnoreCase(r0)
                if (r0 != 0) goto L13
                java.lang.String r0 = "ASN.1"
                boolean r2 = r2.equalsIgnoreCase(r0)
                if (r2 == 0) goto L11
                goto L13
            L11:
                r2 = 0
                return r2
            L13:
                byte[] r2 = r1.engineGetEncoded()
                return r2
        }

        @Override
        protected void engineInit(java.security.spec.AlgorithmParameterSpec r2) throws java.security.spec.InvalidParameterSpecException {
                r1 = this;
                boolean r0 = r2 instanceof java.security.spec.PSSParameterSpec
                if (r0 == 0) goto L9
                java.security.spec.PSSParameterSpec r2 = (java.security.spec.PSSParameterSpec) r2
                r1.currentSpec = r2
                return
            L9:
                java.security.spec.InvalidParameterSpecException r2 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "PSSParameterSpec required to initialise an PSS algorithm parameters object"
                r2.<init>(r0)
                throw r2
        }

        @Override
        protected void engineInit(byte[] r9) throws java.io.IOException {
                r8 = this;
                java.lang.String r0 = "Not a valid PSS Parameter encoding."
                org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream
                r1.<init>(r9)
                org.bouncycastle.asn1.pkcs.RSASSAPSSparams r9 = new org.bouncycastle.asn1.pkcs.RSASSAPSSparams     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                org.bouncycastle.asn1.DERObject r1 = r1.readObject()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                r9.<init>(r1)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                java.security.spec.PSSParameterSpec r1 = new java.security.spec.PSSParameterSpec     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = r9.getHashAlgorithm()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                org.bouncycastle.asn1.DERObjectIdentifier r2 = r2.getObjectId()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                java.lang.String r3 = r2.getId()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = r9.getMaskGenAlgorithm()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                org.bouncycastle.asn1.DERObjectIdentifier r2 = r2.getObjectId()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                java.lang.String r4 = r2.getId()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                java.security.spec.MGF1ParameterSpec r5 = new java.security.spec.MGF1ParameterSpec     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = r9.getMaskGenAlgorithm()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                org.bouncycastle.asn1.DEREncodable r2 = r2.getParameters()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r2)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                org.bouncycastle.asn1.DERObjectIdentifier r2 = r2.getObjectId()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                java.lang.String r2 = r2.getId()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                r5.<init>(r2)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                org.bouncycastle.asn1.DERInteger r2 = r9.getSaltLength()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                java.math.BigInteger r2 = r2.getValue()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                int r6 = r2.intValue()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                org.bouncycastle.asn1.DERInteger r9 = r9.getTrailerField()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                java.math.BigInteger r9 = r9.getValue()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                int r7 = r9.intValue()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                r2 = r1
                r2.<init>(r3, r4, r5, r6, r7)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                r8.currentSpec = r1     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L64 java.lang.ClassCastException -> L6a
                return
            L64:
                java.io.IOException r9 = new java.io.IOException
                r9.<init>(r0)
                throw r9
            L6a:
                java.io.IOException r9 = new java.io.IOException
                r9.<init>(r0)
                throw r9
        }

        @Override
        protected void engineInit(byte[] r3, java.lang.String r4) throws java.io.IOException {
                r2 = this;
                boolean r0 = r2.isASN1FormatString(r4)
                if (r0 != 0) goto L26
                java.lang.String r0 = "X.509"
                boolean r0 = r4.equalsIgnoreCase(r0)
                if (r0 == 0) goto Lf
                goto L26
            Lf:
                java.io.IOException r3 = new java.io.IOException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Unknown parameter format "
                r0.append(r1)
                r0.append(r4)
                java.lang.String r4 = r0.toString()
                r3.<init>(r4)
                throw r3
            L26:
                r2.engineInit(r3)
                return
        }

        @Override
        protected java.lang.String engineToString() {
                r1 = this;
                java.lang.String r0 = "PSS Parameters"
                return r0
        }

        @Override
        protected java.security.spec.AlgorithmParameterSpec localEngineGetParameterSpec(java.lang.Class r2) throws java.security.spec.InvalidParameterSpecException {
                r1 = this;
                java.lang.Class<java.security.spec.PSSParameterSpec> r0 = java.security.spec.PSSParameterSpec.class
                if (r2 != r0) goto L9
                java.security.spec.PSSParameterSpec r2 = r1.currentSpec
                if (r2 == 0) goto L9
                return r2
            L9:
                java.security.spec.InvalidParameterSpecException r2 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "unknown parameter spec passed to PSS parameters object."
                r2.<init>(r0)
                throw r2
        }
    }

    public static class RC2AlgorithmParameters extends org.bouncycastle.jce.provider.JDKAlgorithmParameters {
        private short[] ekb;
        private byte[] iv;
        private int parameterVersion;
        private short[] table;

        public RC2AlgorithmParameters() {
                r2 = this;
                r2.<init>()
                r0 = 256(0x100, float:3.59E-43)
                short[] r1 = new short[r0]
                r1 = {x0018: FILL_ARRAY_DATA , data: [189, 86, 234, 242, 162, 241, 172, 42, 176, 147, 209, 156, 27, 51, 253, 208, 48, 4, 182, 220, 125, 223, 50, 75, 247, 203, 69, 155, 49, 187, 33, 90, 65, 159, 225, 217, 74, 77, 158, 218, 160, 104, 44, 195, 39, 95, 128, 54, 62, 238, 251, 149, 26, 254, 206, 168, 52, 169, 19, 240, 166, 63, 216, 12, 120, 36, 175, 35, 82, 193, 103, 23, 245, 102, 144, 231, 232, 7, 184, 96, 72, 230, 30, 83, 243, 146, 164, 114, 140, 8, 21, 110, 134, 0, 132, 250, 244, 127, 138, 66, 25, 246, 219, 205, 20, 141, 80, 18, 186, 60, 6, 78, 236, 179, 53, 17, 161, 136, 142, 43, 148, 153, 183, 113, 116, 211, 228, 191, 58, 222, 150, 14, 188, 10, 237, 119, 252, 55, 107, 3, 121, 137, 98, 198, 215, 192, 210, 124, 106, 139, 34, 163, 91, 5, 93, 2, 117, 213, 97, 227, 24, 143, 85, 81, 173, 31, 11, 94, 133, 229, 194, 87, 99, 202, 61, 108, 180, 197, 204, 112, 178, 145, 89, 13, 71, 32, 200, 79, 88, 224, 1, 226, 22, 56, 196, 111, 59, 15, 101, 70, 190, 126, 45, 123, 130, 249, 64, 181, 29, 115, 248, 235, 38, 199, 135, 151, 37, 84, 177, 40, 170, 152, 157, 165, 100, 109, 122, 212, 16, 129, 68, 239, 73, 214, 174, 46, 221, 118, 92, 47, 167, 28, 201, 9, 105, 154, 131, 207, 41, 57, 185, 233, 76, 255, 67, 171} // fill-array
                r2.table = r1
                short[] r0 = new short[r0]
                r0 = {x011c: FILL_ARRAY_DATA , data: [93, 190, 155, 139, 17, 153, 110, 77, 89, 243, 133, 166, 63, 183, 131, 197, 228, 115, 107, 58, 104, 90, 192, 71, 160, 100, 52, 12, 241, 208, 82, 165, 185, 30, 150, 67, 65, 216, 212, 44, 219, 248, 7, 119, 42, 202, 235, 239, 16, 28, 22, 13, 56, 114, 47, 137, 193, 249, 128, 196, 109, 174, 48, 61, 206, 32, 99, 254, 230, 26, 199, 184, 80, 232, 36, 23, 252, 37, 111, 187, 106, 163, 68, 83, 217, 162, 1, 171, 188, 182, 31, 152, 238, 154, 167, 45, 79, 158, 142, 172, 224, 198, 73, 70, 41, 244, 148, 138, 175, 225, 91, 195, 179, 123, 87, 209, 124, 156, 237, 135, 64, 140, 226, 203, 147, 20, 201, 97, 46, 229, 204, 246, 94, 168, 92, 214, 117, 141, 98, 149, 88, 105, 118, 161, 74, 181, 85, 9, 120, 51, 130, 215, 221, 121, 245, 27, 11, 222, 38, 33, 40, 116, 4, 151, 86, 223, 60, 240, 55, 57, 220, 255, 6, 164, 234, 66, 8, 218, 180, 113, 176, 207, 18, 122, 78, 250, 108, 29, 132, 0, 200, 127, 145, 69, 170, 43, 194, 177, 143, 213, 186, 242, 173, 25, 178, 103, 54, 247, 15, 10, 146, 125, 227, 157, 233, 144, 62, 35, 39, 102, 19, 236, 129, 21, 189, 34, 191, 159, 126, 169, 81, 75, 76, 251, 2, 211, 112, 134, 49, 231, 59, 5, 3, 84, 96, 72, 101, 24, 210, 205, 95, 50, 136, 14, 53, 253} // fill-array
                r2.ekb = r0
                r0 = 58
                r2.parameterVersion = r0
                return
        }

        @Override
        protected byte[] engineGetEncoded() {
                r4 = this;
                byte[] r0 = r4.iv
                int r1 = r0.length
                byte[] r1 = new byte[r1]
                int r2 = r0.length
                r3 = 0
                java.lang.System.arraycopy(r0, r3, r1, r3, r2)
                return r1
        }

        @Override
        protected byte[] engineGetEncoded(java.lang.String r3) throws java.io.IOException {
                r2 = this;
                boolean r0 = r2.isASN1FormatString(r3)
                if (r0 == 0) goto L25
                int r3 = r2.parameterVersion
                r0 = -1
                if (r3 != r0) goto L19
                org.bouncycastle.asn1.pkcs.RC2CBCParameter r3 = new org.bouncycastle.asn1.pkcs.RC2CBCParameter
                byte[] r0 = r2.engineGetEncoded()
                r3.<init>(r0)
            L14:
                byte[] r3 = r3.getEncoded()
                return r3
            L19:
                org.bouncycastle.asn1.pkcs.RC2CBCParameter r3 = new org.bouncycastle.asn1.pkcs.RC2CBCParameter
                int r0 = r2.parameterVersion
                byte[] r1 = r2.engineGetEncoded()
                r3.<init>(r0, r1)
                goto L14
            L25:
                java.lang.String r0 = "RAW"
                boolean r3 = r3.equals(r0)
                if (r3 == 0) goto L32
                byte[] r3 = r2.engineGetEncoded()
                return r3
            L32:
                r3 = 0
                return r3
        }

        @Override
        protected void engineInit(java.security.spec.AlgorithmParameterSpec r3) throws java.security.spec.InvalidParameterSpecException {
                r2 = this;
                boolean r0 = r3 instanceof javax.crypto.spec.IvParameterSpec
                if (r0 == 0) goto Ld
                javax.crypto.spec.IvParameterSpec r3 = (javax.crypto.spec.IvParameterSpec) r3
                byte[] r3 = r3.getIV()
                r2.iv = r3
                goto L2a
            Ld:
                boolean r0 = r3 instanceof javax.crypto.spec.RC2ParameterSpec
                if (r0 == 0) goto L2b
                javax.crypto.spec.RC2ParameterSpec r3 = (javax.crypto.spec.RC2ParameterSpec) r3
                int r0 = r3.getEffectiveKeyBits()
                r1 = -1
                if (r0 == r1) goto L24
                r1 = 256(0x100, float:3.59E-43)
                if (r0 >= r1) goto L22
                short[] r1 = r2.table
                short r0 = r1[r0]
            L22:
                r2.parameterVersion = r0
            L24:
                byte[] r3 = r3.getIV()
                r2.iv = r3
            L2a:
                return
            L2b:
                java.security.spec.InvalidParameterSpecException r3 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "IvParameterSpec or RC2ParameterSpec required to initialise a RC2 parameters algorithm parameters object"
                r3.<init>(r0)
                throw r3
        }

        @Override
        protected void engineInit(byte[] r4) throws java.io.IOException {
                r3 = this;
                int r0 = r4.length
                byte[] r0 = new byte[r0]
                r3.iv = r0
                int r1 = r0.length
                r2 = 0
                java.lang.System.arraycopy(r4, r2, r0, r2, r1)
                return
        }

        @Override
        protected void engineInit(byte[] r2, java.lang.String r3) throws java.io.IOException {
                r1 = this;
                boolean r0 = r1.isASN1FormatString(r3)
                if (r0 == 0) goto L2a
                org.bouncycastle.asn1.ASN1InputStream r3 = new org.bouncycastle.asn1.ASN1InputStream
                r3.<init>(r2)
                org.bouncycastle.asn1.DERObject r2 = r3.readObject()
                org.bouncycastle.asn1.pkcs.RC2CBCParameter r2 = org.bouncycastle.asn1.pkcs.RC2CBCParameter.getInstance(r2)
                java.math.BigInteger r3 = r2.getRC2ParameterVersion()
                if (r3 == 0) goto L23
                java.math.BigInteger r3 = r2.getRC2ParameterVersion()
                int r3 = r3.intValue()
                r1.parameterVersion = r3
            L23:
                byte[] r2 = r2.getIV()
                r1.iv = r2
                return
            L2a:
                java.lang.String r0 = "RAW"
                boolean r3 = r3.equals(r0)
                if (r3 == 0) goto L36
                r1.engineInit(r2)
                return
            L36:
                java.io.IOException r2 = new java.io.IOException
                java.lang.String r3 = "Unknown parameters format in IV parameters object"
                r2.<init>(r3)
                throw r2
        }

        @Override
        protected java.lang.String engineToString() {
                r1 = this;
                java.lang.String r0 = "RC2 Parameters"
                return r0
        }

        @Override
        protected java.security.spec.AlgorithmParameterSpec localEngineGetParameterSpec(java.lang.Class r3) throws java.security.spec.InvalidParameterSpecException {
                r2 = this;
                java.lang.Class<javax.crypto.spec.RC2ParameterSpec> r0 = javax.crypto.spec.RC2ParameterSpec.class
                if (r3 != r0) goto L25
                int r0 = r2.parameterVersion
                r1 = -1
                if (r0 == r1) goto L25
                r3 = 256(0x100, float:3.59E-43)
                if (r0 >= r3) goto L1b
                javax.crypto.spec.RC2ParameterSpec r3 = new javax.crypto.spec.RC2ParameterSpec
                short[] r0 = r2.ekb
                int r1 = r2.parameterVersion
                short r0 = r0[r1]
                byte[] r1 = r2.iv
                r3.<init>(r0, r1)
                return r3
            L1b:
                javax.crypto.spec.RC2ParameterSpec r3 = new javax.crypto.spec.RC2ParameterSpec
                int r0 = r2.parameterVersion
                byte[] r1 = r2.iv
                r3.<init>(r0, r1)
                return r3
            L25:
                java.lang.Class<javax.crypto.spec.IvParameterSpec> r0 = javax.crypto.spec.IvParameterSpec.class
                if (r3 != r0) goto L31
                javax.crypto.spec.IvParameterSpec r3 = new javax.crypto.spec.IvParameterSpec
                byte[] r0 = r2.iv
                r3.<init>(r0)
                return r3
            L31:
                java.security.spec.InvalidParameterSpecException r3 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "unknown parameter spec passed to RC2 parameters object."
                r3.<init>(r0)
                throw r3
        }
    }

    public JDKAlgorithmParameters() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected java.security.spec.AlgorithmParameterSpec engineGetParameterSpec(java.lang.Class r2) throws java.security.spec.InvalidParameterSpecException {
            r1 = this;
            if (r2 == 0) goto L7
            java.security.spec.AlgorithmParameterSpec r2 = r1.localEngineGetParameterSpec(r2)
            return r2
        L7:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "argument to getParameterSpec must not be null"
            r2.<init>(r0)
            throw r2
    }

    protected boolean isASN1FormatString(java.lang.String r2) {
            r1 = this;
            if (r2 == 0) goto Ld
            java.lang.String r0 = "ASN.1"
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto Lb
            goto Ld
        Lb:
            r2 = 0
            goto Le
        Ld:
            r2 = 1
        Le:
            return r2
    }

    protected abstract java.security.spec.AlgorithmParameterSpec localEngineGetParameterSpec(java.lang.Class r1) throws java.security.spec.InvalidParameterSpecException;
}
