package org.bouncycastle.jce.provider;

public class JCESecretKeyFactory extends javax.crypto.SecretKeyFactorySpi implements org.bouncycastle.jce.provider.PBE {
    protected java.lang.String algName;
    protected org.bouncycastle.asn1.DERObjectIdentifier algOid;

    public static class DES extends org.bouncycastle.jce.provider.JCESecretKeyFactory {
        public DES() {
                r2 = this;
                java.lang.String r0 = "DES"
                r1 = 0
                r2.<init>(r0, r1)
                return
        }

        @Override
        protected javax.crypto.SecretKey engineGenerateSecret(java.security.spec.KeySpec r3) throws java.security.spec.InvalidKeySpecException {
                r2 = this;
                boolean r0 = r3 instanceof javax.crypto.spec.DESKeySpec
                if (r0 == 0) goto L12
                javax.crypto.spec.DESKeySpec r3 = (javax.crypto.spec.DESKeySpec) r3
                javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec
                byte[] r3 = r3.getKey()
                java.lang.String r1 = "DES"
                r0.<init>(r3, r1)
                return r0
            L12:
                javax.crypto.SecretKey r3 = super.engineGenerateSecret(r3)
                return r3
        }
    }

    public static class DESPBEKeyFactory extends org.bouncycastle.jce.provider.JCESecretKeyFactory {
        private int digest;
        private boolean forCipher;
        private int ivSize;
        private int keySize;
        private int scheme;

        public DESPBEKeyFactory(java.lang.String r1, org.bouncycastle.asn1.DERObjectIdentifier r2, boolean r3, int r4, int r5, int r6, int r7) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.forCipher = r3
                r0.scheme = r4
                r0.digest = r5
                r0.keySize = r6
                r0.ivSize = r7
                return
        }

        @Override
        protected javax.crypto.SecretKey engineGenerateSecret(java.security.spec.KeySpec r11) throws java.security.spec.InvalidKeySpecException {
                r10 = this;
                boolean r0 = r11 instanceof javax.crypto.spec.PBEKeySpec
                if (r0 == 0) goto L70
                r8 = r11
                javax.crypto.spec.PBEKeySpec r8 = (javax.crypto.spec.PBEKeySpec) r8
                byte[] r11 = r8.getSalt()
                if (r11 != 0) goto L21
                org.bouncycastle.jce.provider.JCEPBEKey r11 = new org.bouncycastle.jce.provider.JCEPBEKey
                java.lang.String r2 = r10.algName
                org.bouncycastle.asn1.DERObjectIdentifier r3 = r10.algOid
                int r4 = r10.scheme
                int r5 = r10.digest
                int r6 = r10.keySize
                int r7 = r10.ivSize
                r9 = 0
                r1 = r11
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
                return r11
            L21:
                boolean r11 = r10.forCipher
                if (r11 == 0) goto L32
                int r11 = r10.scheme
                int r0 = r10.digest
                int r1 = r10.keySize
                int r2 = r10.ivSize
                org.bouncycastle.crypto.CipherParameters r11 = org.bouncycastle.jce.provider.PBE.Util.makePBEParameters(r8, r11, r0, r1, r2)
                goto L3c
            L32:
                int r11 = r10.scheme
                int r0 = r10.digest
                int r1 = r10.keySize
                org.bouncycastle.crypto.CipherParameters r11 = org.bouncycastle.jce.provider.PBE.Util.makePBEMacParameters(r8, r11, r0, r1)
            L3c:
                r9 = r11
                boolean r11 = r9 instanceof org.bouncycastle.crypto.params.ParametersWithIV
                if (r11 == 0) goto L53
                r11 = r9
                org.bouncycastle.crypto.params.ParametersWithIV r11 = (org.bouncycastle.crypto.params.ParametersWithIV) r11
                org.bouncycastle.crypto.CipherParameters r11 = r11.getParameters()
                org.bouncycastle.crypto.params.KeyParameter r11 = (org.bouncycastle.crypto.params.KeyParameter) r11
                byte[] r11 = r11.getKey()
                org.bouncycastle.crypto.params.DESParameters.setOddParity(r11)
                goto L5d
            L53:
                r11 = r9
                org.bouncycastle.crypto.params.KeyParameter r11 = (org.bouncycastle.crypto.params.KeyParameter) r11
                byte[] r11 = r11.getKey()
                org.bouncycastle.crypto.params.DESParameters.setOddParity(r11)
            L5d:
                org.bouncycastle.jce.provider.JCEPBEKey r11 = new org.bouncycastle.jce.provider.JCEPBEKey
                java.lang.String r2 = r10.algName
                org.bouncycastle.asn1.DERObjectIdentifier r3 = r10.algOid
                int r4 = r10.scheme
                int r5 = r10.digest
                int r6 = r10.keySize
                int r7 = r10.ivSize
                r1 = r11
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
                return r11
            L70:
                java.security.spec.InvalidKeySpecException r11 = new java.security.spec.InvalidKeySpecException
                java.lang.String r0 = "Invalid KeySpec"
                r11.<init>(r0)
                throw r11
        }
    }

    public static class DESede extends org.bouncycastle.jce.provider.JCESecretKeyFactory {
        public DESede() {
                r2 = this;
                java.lang.String r0 = "DESede"
                r1 = 0
                r2.<init>(r0, r1)
                return
        }

        @Override
        protected javax.crypto.SecretKey engineGenerateSecret(java.security.spec.KeySpec r3) throws java.security.spec.InvalidKeySpecException {
                r2 = this;
                boolean r0 = r3 instanceof javax.crypto.spec.DESedeKeySpec
                if (r0 == 0) goto L12
                javax.crypto.spec.DESedeKeySpec r3 = (javax.crypto.spec.DESedeKeySpec) r3
                javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec
                byte[] r3 = r3.getKey()
                java.lang.String r1 = "DESede"
                r0.<init>(r3, r1)
                return r0
            L12:
                javax.crypto.SecretKey r3 = super.engineGenerateSecret(r3)
                return r3
        }

        @Override
        protected java.security.spec.KeySpec engineGetKeySpec(javax.crypto.SecretKey r4, java.lang.Class r5) throws java.security.spec.InvalidKeySpecException {
                r3 = this;
                if (r5 == 0) goto L5d
                if (r4 == 0) goto L55
                java.lang.Class<javax.crypto.spec.SecretKeySpec> r0 = javax.crypto.spec.SecretKeySpec.class
                boolean r0 = r0.isAssignableFrom(r5)
                if (r0 == 0) goto L18
                javax.crypto.spec.SecretKeySpec r5 = new javax.crypto.spec.SecretKeySpec
                byte[] r4 = r4.getEncoded()
                java.lang.String r0 = r3.algName
                r5.<init>(r4, r0)
                return r5
            L18:
                java.lang.Class<javax.crypto.spec.DESedeKeySpec> r0 = javax.crypto.spec.DESedeKeySpec.class
                boolean r5 = r0.isAssignableFrom(r5)
                if (r5 == 0) goto L4d
                byte[] r4 = r4.getEncoded()
                int r5 = r4.length     // Catch: java.lang.Exception -> L42
                r0 = 16
                if (r5 != r0) goto L3c
                r5 = 24
                byte[] r5 = new byte[r5]     // Catch: java.lang.Exception -> L42
                r1 = 0
                java.lang.System.arraycopy(r4, r1, r5, r1, r0)     // Catch: java.lang.Exception -> L42
                r2 = 8
                java.lang.System.arraycopy(r4, r1, r5, r0, r2)     // Catch: java.lang.Exception -> L42
                javax.crypto.spec.DESedeKeySpec r4 = new javax.crypto.spec.DESedeKeySpec     // Catch: java.lang.Exception -> L42
                r4.<init>(r5)     // Catch: java.lang.Exception -> L42
                return r4
            L3c:
                javax.crypto.spec.DESedeKeySpec r5 = new javax.crypto.spec.DESedeKeySpec     // Catch: java.lang.Exception -> L42
                r5.<init>(r4)     // Catch: java.lang.Exception -> L42
                return r5
            L42:
                r4 = move-exception
                java.security.spec.InvalidKeySpecException r5 = new java.security.spec.InvalidKeySpecException
                java.lang.String r4 = r4.toString()
                r5.<init>(r4)
                throw r5
            L4d:
                java.security.spec.InvalidKeySpecException r4 = new java.security.spec.InvalidKeySpecException
                java.lang.String r5 = "Invalid KeySpec"
                r4.<init>(r5)
                throw r4
            L55:
                java.security.spec.InvalidKeySpecException r4 = new java.security.spec.InvalidKeySpecException
                java.lang.String r5 = "key parameter is null"
                r4.<init>(r5)
                throw r4
            L5d:
                java.security.spec.InvalidKeySpecException r4 = new java.security.spec.InvalidKeySpecException
                java.lang.String r5 = "keySpec parameter is null"
                r4.<init>(r5)
                throw r4
        }
    }

    public static class PBEKeyFactory extends org.bouncycastle.jce.provider.JCESecretKeyFactory {
        private int digest;
        private boolean forCipher;
        private int ivSize;
        private int keySize;
        private int scheme;

        public PBEKeyFactory(java.lang.String r1, org.bouncycastle.asn1.DERObjectIdentifier r2, boolean r3, int r4, int r5, int r6, int r7) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.forCipher = r3
                r0.scheme = r4
                r0.digest = r5
                r0.keySize = r6
                r0.ivSize = r7
                return
        }

        @Override
        protected javax.crypto.SecretKey engineGenerateSecret(java.security.spec.KeySpec r11) throws java.security.spec.InvalidKeySpecException {
                r10 = this;
                boolean r0 = r11 instanceof javax.crypto.spec.PBEKeySpec
                if (r0 == 0) goto L50
                r8 = r11
                javax.crypto.spec.PBEKeySpec r8 = (javax.crypto.spec.PBEKeySpec) r8
                byte[] r11 = r8.getSalt()
                if (r11 != 0) goto L21
                org.bouncycastle.jce.provider.JCEPBEKey r11 = new org.bouncycastle.jce.provider.JCEPBEKey
                java.lang.String r2 = r10.algName
                org.bouncycastle.asn1.DERObjectIdentifier r3 = r10.algOid
                int r4 = r10.scheme
                int r5 = r10.digest
                int r6 = r10.keySize
                int r7 = r10.ivSize
                r9 = 0
                r1 = r11
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
                return r11
            L21:
                boolean r11 = r10.forCipher
                if (r11 == 0) goto L32
                int r11 = r10.scheme
                int r0 = r10.digest
                int r1 = r10.keySize
                int r2 = r10.ivSize
                org.bouncycastle.crypto.CipherParameters r11 = org.bouncycastle.jce.provider.PBE.Util.makePBEParameters(r8, r11, r0, r1, r2)
                goto L3c
            L32:
                int r11 = r10.scheme
                int r0 = r10.digest
                int r1 = r10.keySize
                org.bouncycastle.crypto.CipherParameters r11 = org.bouncycastle.jce.provider.PBE.Util.makePBEMacParameters(r8, r11, r0, r1)
            L3c:
                r9 = r11
                org.bouncycastle.jce.provider.JCEPBEKey r11 = new org.bouncycastle.jce.provider.JCEPBEKey
                java.lang.String r2 = r10.algName
                org.bouncycastle.asn1.DERObjectIdentifier r3 = r10.algOid
                int r4 = r10.scheme
                int r5 = r10.digest
                int r6 = r10.keySize
                int r7 = r10.ivSize
                r1 = r11
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
                return r11
            L50:
                java.security.spec.InvalidKeySpecException r11 = new java.security.spec.InvalidKeySpecException
                java.lang.String r0 = "Invalid KeySpec"
                r11.<init>(r0)
                throw r11
        }
    }

    public static class PBEWithMD2AndDES extends org.bouncycastle.jce.provider.JCESecretKeyFactory.DESPBEKeyFactory {
        public PBEWithMD2AndDES() {
                r8 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pbeWithMD2AndDES_CBC
                java.lang.String r1 = "PBEwithMD2andDES"
                r3 = 1
                r4 = 0
                r5 = 5
                r6 = 64
                r7 = 64
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithMD2AndRC2 extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithMD2AndRC2() {
                r8 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pbeWithMD2AndRC2_CBC
                java.lang.String r1 = "PBEwithMD2andRC2"
                r3 = 1
                r4 = 0
                r5 = 5
                r6 = 64
                r7 = 64
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithMD5And128BitAESCBCOpenSSL extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithMD5And128BitAESCBCOpenSSL() {
                r8 = this;
                java.lang.String r1 = "PBEWithMD5And128BitAES-CBC-OpenSSL"
                r2 = 0
                r3 = 1
                r4 = 3
                r5 = 0
                r6 = 128(0x80, float:1.8E-43)
                r7 = 128(0x80, float:1.8E-43)
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithMD5And192BitAESCBCOpenSSL extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithMD5And192BitAESCBCOpenSSL() {
                r8 = this;
                java.lang.String r1 = "PBEWithMD5And192BitAES-CBC-OpenSSL"
                r2 = 0
                r3 = 1
                r4 = 3
                r5 = 0
                r6 = 192(0xc0, float:2.69E-43)
                r7 = 128(0x80, float:1.8E-43)
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithMD5And256BitAESCBCOpenSSL extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithMD5And256BitAESCBCOpenSSL() {
                r8 = this;
                java.lang.String r1 = "PBEWithMD5And256BitAES-CBC-OpenSSL"
                r2 = 0
                r3 = 1
                r4 = 3
                r5 = 0
                r6 = 256(0x100, float:3.59E-43)
                r7 = 128(0x80, float:1.8E-43)
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithMD5AndDES extends org.bouncycastle.jce.provider.JCESecretKeyFactory.DESPBEKeyFactory {
        public PBEWithMD5AndDES() {
                r8 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pbeWithMD5AndDES_CBC
                java.lang.String r1 = "PBEwithMD5andDES"
                r3 = 1
                r4 = 0
                r5 = 0
                r6 = 64
                r7 = 64
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithMD5AndRC2 extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithMD5AndRC2() {
                r8 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pbeWithMD5AndRC2_CBC
                java.lang.String r1 = "PBEwithMD5andRC2"
                r3 = 1
                r4 = 0
                r5 = 0
                r6 = 64
                r7 = 64
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithRIPEMD160 extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithRIPEMD160() {
                r8 = this;
                java.lang.String r1 = "PBEwithHmacRIPEMD160"
                r2 = 0
                r3 = 0
                r4 = 2
                r5 = 2
                r6 = 160(0xa0, float:2.24E-43)
                r7 = 0
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithSHA extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithSHA() {
                r8 = this;
                java.lang.String r1 = "PBEwithHmacSHA"
                r2 = 0
                r3 = 0
                r4 = 2
                r5 = 1
                r6 = 160(0xa0, float:2.24E-43)
                r7 = 0
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithSHA1AndDES extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithSHA1AndDES() {
                r8 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pbeWithSHA1AndDES_CBC
                java.lang.String r1 = "PBEwithSHA1andDES"
                r3 = 1
                r4 = 0
                r5 = 1
                r6 = 64
                r7 = 64
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithSHA1AndRC2 extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithSHA1AndRC2() {
                r8 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pbeWithSHA1AndRC2_CBC
                java.lang.String r1 = "PBEwithSHA1andRC2"
                r3 = 1
                r4 = 0
                r5 = 1
                r6 = 64
                r7 = 64
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithSHA256And128BitAESBC extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithSHA256And128BitAESBC() {
                r8 = this;
                java.lang.String r1 = "PBEWithSHA256And128BitAES-CBC-BC"
                r2 = 0
                r3 = 1
                r4 = 2
                r5 = 4
                r6 = 128(0x80, float:1.8E-43)
                r7 = 128(0x80, float:1.8E-43)
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithSHA256And192BitAESBC extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithSHA256And192BitAESBC() {
                r8 = this;
                java.lang.String r1 = "PBEWithSHA256And192BitAES-CBC-BC"
                r2 = 0
                r3 = 1
                r4 = 2
                r5 = 4
                r6 = 192(0xc0, float:2.69E-43)
                r7 = 128(0x80, float:1.8E-43)
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithSHA256And256BitAESBC extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithSHA256And256BitAESBC() {
                r8 = this;
                java.lang.String r1 = "PBEWithSHA256And256BitAES-CBC-BC"
                r2 = 0
                r3 = 1
                r4 = 2
                r5 = 4
                r6 = 256(0x100, float:3.59E-43)
                r7 = 128(0x80, float:1.8E-43)
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithSHAAnd128BitAESBC extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithSHAAnd128BitAESBC() {
                r8 = this;
                java.lang.String r1 = "PBEWithSHA1And128BitAES-CBC-BC"
                r2 = 0
                r3 = 1
                r4 = 2
                r5 = 1
                r6 = 128(0x80, float:1.8E-43)
                r7 = 128(0x80, float:1.8E-43)
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithSHAAnd128BitRC2 extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithSHAAnd128BitRC2() {
                r8 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pbeWithSHAAnd128BitRC2_CBC
                java.lang.String r1 = "PBEwithSHAand128BitRC2-CBC"
                r3 = 1
                r4 = 2
                r5 = 1
                r6 = 128(0x80, float:1.8E-43)
                r7 = 64
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithSHAAnd128BitRC4 extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithSHAAnd128BitRC4() {
                r8 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pbeWithSHAAnd128BitRC4
                java.lang.String r1 = "PBEWithSHAAnd128BitRC4"
                r3 = 1
                r4 = 2
                r5 = 1
                r6 = 128(0x80, float:1.8E-43)
                r7 = 0
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithSHAAnd192BitAESBC extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithSHAAnd192BitAESBC() {
                r8 = this;
                java.lang.String r1 = "PBEWithSHA1And192BitAES-CBC-BC"
                r2 = 0
                r3 = 1
                r4 = 2
                r5 = 1
                r6 = 192(0xc0, float:2.69E-43)
                r7 = 128(0x80, float:1.8E-43)
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithSHAAnd256BitAESBC extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithSHAAnd256BitAESBC() {
                r8 = this;
                java.lang.String r1 = "PBEWithSHA1And256BitAES-CBC-BC"
                r2 = 0
                r3 = 1
                r4 = 2
                r5 = 1
                r6 = 256(0x100, float:3.59E-43)
                r7 = 128(0x80, float:1.8E-43)
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithSHAAnd40BitRC2 extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithSHAAnd40BitRC2() {
                r8 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pbewithSHAAnd40BitRC2_CBC
                java.lang.String r1 = "PBEwithSHAand40BitRC2-CBC"
                r3 = 1
                r4 = 2
                r5 = 1
                r6 = 40
                r7 = 64
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithSHAAnd40BitRC4 extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithSHAAnd40BitRC4() {
                r8 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pbeWithSHAAnd128BitRC4
                java.lang.String r1 = "PBEWithSHAAnd128BitRC4"
                r3 = 1
                r4 = 2
                r5 = 1
                r6 = 40
                r7 = 0
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithSHAAndDES2Key extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithSHAAndDES2Key() {
                r8 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pbeWithSHAAnd2_KeyTripleDES_CBC
                java.lang.String r1 = "PBEwithSHAandDES2Key-CBC"
                r3 = 1
                r4 = 2
                r5 = 1
                r6 = 128(0x80, float:1.8E-43)
                r7 = 64
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithSHAAndDES3Key extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithSHAAndDES3Key() {
                r8 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pbeWithSHAAnd3_KeyTripleDES_CBC
                java.lang.String r1 = "PBEwithSHAandDES3Key-CBC"
                r3 = 1
                r4 = 2
                r5 = 1
                r6 = 192(0xc0, float:2.69E-43)
                r7 = 64
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithSHAAndIDEA extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithSHAAndIDEA() {
                r8 = this;
                java.lang.String r1 = "PBEwithSHAandIDEA-CBC"
                r2 = 0
                r3 = 1
                r4 = 2
                r5 = 1
                r6 = 128(0x80, float:1.8E-43)
                r7 = 64
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithSHAAndTwofish extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithSHAAndTwofish() {
                r8 = this;
                java.lang.String r1 = "PBEwithSHAandTwofish-CBC"
                r2 = 0
                r3 = 1
                r4 = 2
                r5 = 1
                r6 = 256(0x100, float:3.59E-43)
                r7 = 128(0x80, float:1.8E-43)
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    public static class PBEWithTiger extends org.bouncycastle.jce.provider.JCESecretKeyFactory.PBEKeyFactory {
        public PBEWithTiger() {
                r8 = this;
                java.lang.String r1 = "PBEwithHmacTiger"
                r2 = 0
                r3 = 0
                r4 = 2
                r5 = 3
                r6 = 192(0xc0, float:2.69E-43)
                r7 = 0
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return
        }
    }

    protected JCESecretKeyFactory(java.lang.String r1, org.bouncycastle.asn1.DERObjectIdentifier r2) {
            r0 = this;
            r0.<init>()
            r0.algName = r1
            r0.algOid = r2
            return
    }

    @Override
    protected javax.crypto.SecretKey engineGenerateSecret(java.security.spec.KeySpec r2) throws java.security.spec.InvalidKeySpecException {
            r1 = this;
            boolean r0 = r2 instanceof javax.crypto.spec.SecretKeySpec
            if (r0 == 0) goto L7
            javax.crypto.SecretKey r2 = (javax.crypto.SecretKey) r2
            return r2
        L7:
            java.security.spec.InvalidKeySpecException r2 = new java.security.spec.InvalidKeySpecException
            java.lang.String r0 = "Invalid KeySpec"
            r2.<init>(r0)
            throw r2
    }

    @Override
    protected java.security.spec.KeySpec engineGetKeySpec(javax.crypto.SecretKey r5, java.lang.Class r6) throws java.security.spec.InvalidKeySpecException {
            r4 = this;
            if (r6 == 0) goto L46
            if (r5 == 0) goto L3e
            java.lang.Class<javax.crypto.spec.SecretKeySpec> r0 = javax.crypto.spec.SecretKeySpec.class
            boolean r0 = r0.isAssignableFrom(r6)
            if (r0 == 0) goto L18
            javax.crypto.spec.SecretKeySpec r6 = new javax.crypto.spec.SecretKeySpec
            byte[] r5 = r5.getEncoded()
            java.lang.String r0 = r4.algName
            r6.<init>(r5, r0)
            return r6
        L18:
            r0 = 1
            java.lang.Class[] r1 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L33
            java.lang.Class<byte[]> r2 = byte[].class
            r3 = 0
            r1[r3] = r2     // Catch: java.lang.Exception -> L33
            java.lang.reflect.Constructor r6 = r6.getConstructor(r1)     // Catch: java.lang.Exception -> L33
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L33
            byte[] r5 = r5.getEncoded()     // Catch: java.lang.Exception -> L33
            r0[r3] = r5     // Catch: java.lang.Exception -> L33
            java.lang.Object r5 = r6.newInstance(r0)     // Catch: java.lang.Exception -> L33
            java.security.spec.KeySpec r5 = (java.security.spec.KeySpec) r5     // Catch: java.lang.Exception -> L33
            return r5
        L33:
            r5 = move-exception
            java.security.spec.InvalidKeySpecException r6 = new java.security.spec.InvalidKeySpecException
            java.lang.String r5 = r5.toString()
            r6.<init>(r5)
            throw r6
        L3e:
            java.security.spec.InvalidKeySpecException r5 = new java.security.spec.InvalidKeySpecException
            java.lang.String r6 = "key parameter is null"
            r5.<init>(r6)
            throw r5
        L46:
            java.security.spec.InvalidKeySpecException r5 = new java.security.spec.InvalidKeySpecException
            java.lang.String r6 = "keySpec parameter is null"
            r5.<init>(r6)
            throw r5
    }

    @Override
    protected javax.crypto.SecretKey engineTranslateKey(javax.crypto.SecretKey r3) throws java.security.InvalidKeyException {
            r2 = this;
            if (r3 == 0) goto L38
            java.lang.String r0 = r3.getAlgorithm()
            java.lang.String r1 = r2.algName
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L1a
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec
            byte[] r3 = r3.getEncoded()
            java.lang.String r1 = r2.algName
            r0.<init>(r3, r1)
            return r0
        L1a:
            java.security.InvalidKeyException r3 = new java.security.InvalidKeyException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Key not of type "
            r0.append(r1)
            java.lang.String r1 = r2.algName
            r0.append(r1)
            java.lang.String r1 = "."
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
        L38:
            java.security.InvalidKeyException r3 = new java.security.InvalidKeyException
            java.lang.String r0 = "key parameter is null"
            r3.<init>(r0)
            throw r3
    }
}
