package org.bouncycastle.jce.provider;

class JCEDigestUtil {
    private static java.util.Set md5;
    private static java.util.Map oids;
    private static java.util.Set sha1;
    private static java.util.Set sha224;
    private static java.util.Set sha256;
    private static java.util.Set sha384;
    private static java.util.Set sha512;

    static {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            org.bouncycastle.jce.provider.JCEDigestUtil.md5 = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            org.bouncycastle.jce.provider.JCEDigestUtil.sha1 = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            org.bouncycastle.jce.provider.JCEDigestUtil.sha224 = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            org.bouncycastle.jce.provider.JCEDigestUtil.sha256 = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            org.bouncycastle.jce.provider.JCEDigestUtil.sha384 = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            org.bouncycastle.jce.provider.JCEDigestUtil.sha512 = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            org.bouncycastle.jce.provider.JCEDigestUtil.oids = r0
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.md5
            java.lang.String r1 = "MD5"
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.md5
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md5
            java.lang.String r2 = r2.getId()
            r0.add(r2)
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha1
            java.lang.String r2 = "SHA1"
            r0.add(r2)
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha1
            java.lang.String r3 = "SHA-1"
            r0.add(r3)
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha1
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.oiw.OIWObjectIdentifiers.idSHA1
            java.lang.String r4 = r4.getId()
            r0.add(r4)
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha224
            java.lang.String r4 = "SHA224"
            r0.add(r4)
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha224
            java.lang.String r5 = "SHA-224"
            r0.add(r5)
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha224
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha224
            java.lang.String r6 = r6.getId()
            r0.add(r6)
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha256
            java.lang.String r6 = "SHA256"
            r0.add(r6)
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha256
            java.lang.String r7 = "SHA-256"
            r0.add(r7)
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha256
            org.bouncycastle.asn1.DERObjectIdentifier r8 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha256
            java.lang.String r8 = r8.getId()
            r0.add(r8)
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha384
            java.lang.String r8 = "SHA384"
            r0.add(r8)
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha384
            java.lang.String r9 = "SHA-384"
            r0.add(r9)
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha384
            org.bouncycastle.asn1.DERObjectIdentifier r10 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha384
            java.lang.String r10 = r10.getId()
            r0.add(r10)
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha512
            java.lang.String r10 = "SHA512"
            r0.add(r10)
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha512
            java.lang.String r11 = "SHA-512"
            r0.add(r11)
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha512
            org.bouncycastle.asn1.DERObjectIdentifier r12 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha512
            java.lang.String r12 = r12.getId()
            r0.add(r12)
            java.util.Map r0 = org.bouncycastle.jce.provider.JCEDigestUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r12 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md5
            r0.put(r1, r12)
            java.util.Map r0 = org.bouncycastle.jce.provider.JCEDigestUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md5
            java.lang.String r1 = r1.getId()
            org.bouncycastle.asn1.DERObjectIdentifier r12 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md5
            r0.put(r1, r12)
            java.util.Map r0 = org.bouncycastle.jce.provider.JCEDigestUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.oiw.OIWObjectIdentifiers.idSHA1
            r0.put(r2, r1)
            java.util.Map r0 = org.bouncycastle.jce.provider.JCEDigestUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.oiw.OIWObjectIdentifiers.idSHA1
            r0.put(r3, r1)
            java.util.Map r0 = org.bouncycastle.jce.provider.JCEDigestUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.oiw.OIWObjectIdentifiers.idSHA1
            java.lang.String r1 = r1.getId()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.oiw.OIWObjectIdentifiers.idSHA1
            r0.put(r1, r2)
            java.util.Map r0 = org.bouncycastle.jce.provider.JCEDigestUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha224
            r0.put(r4, r1)
            java.util.Map r0 = org.bouncycastle.jce.provider.JCEDigestUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha224
            r0.put(r5, r1)
            java.util.Map r0 = org.bouncycastle.jce.provider.JCEDigestUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha224
            java.lang.String r1 = r1.getId()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha224
            r0.put(r1, r2)
            java.util.Map r0 = org.bouncycastle.jce.provider.JCEDigestUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha256
            r0.put(r6, r1)
            java.util.Map r0 = org.bouncycastle.jce.provider.JCEDigestUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha256
            r0.put(r7, r1)
            java.util.Map r0 = org.bouncycastle.jce.provider.JCEDigestUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha256
            java.lang.String r1 = r1.getId()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha256
            r0.put(r1, r2)
            java.util.Map r0 = org.bouncycastle.jce.provider.JCEDigestUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha384
            r0.put(r8, r1)
            java.util.Map r0 = org.bouncycastle.jce.provider.JCEDigestUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha384
            r0.put(r9, r1)
            java.util.Map r0 = org.bouncycastle.jce.provider.JCEDigestUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha384
            java.lang.String r1 = r1.getId()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha384
            r0.put(r1, r2)
            java.util.Map r0 = org.bouncycastle.jce.provider.JCEDigestUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha512
            r0.put(r10, r1)
            java.util.Map r0 = org.bouncycastle.jce.provider.JCEDigestUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha512
            r0.put(r11, r1)
            java.util.Map r0 = org.bouncycastle.jce.provider.JCEDigestUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha512
            java.lang.String r1 = r1.getId()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha512
            r0.put(r1, r2)
            return
    }

    JCEDigestUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    static org.bouncycastle.crypto.Digest getDigest(java.lang.String r1) {
            java.lang.String r1 = org.bouncycastle.util.Strings.toUpperCase(r1)
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha1
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L12
            org.bouncycastle.crypto.digests.SHA1Digest r1 = new org.bouncycastle.crypto.digests.SHA1Digest
            r1.<init>()
            return r1
        L12:
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.md5
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L20
            org.bouncycastle.crypto.digests.MD5Digest r1 = new org.bouncycastle.crypto.digests.MD5Digest
            r1.<init>()
            return r1
        L20:
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha224
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L2e
            org.bouncycastle.crypto.digests.SHA224Digest r1 = new org.bouncycastle.crypto.digests.SHA224Digest
            r1.<init>()
            return r1
        L2e:
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha256
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L3c
            org.bouncycastle.crypto.digests.SHA256Digest r1 = new org.bouncycastle.crypto.digests.SHA256Digest
            r1.<init>()
            return r1
        L3c:
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha384
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L4a
            org.bouncycastle.crypto.digests.SHA384Digest r1 = new org.bouncycastle.crypto.digests.SHA384Digest
            r1.<init>()
            return r1
        L4a:
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha512
            boolean r1 = r0.contains(r1)
            if (r1 == 0) goto L58
            org.bouncycastle.crypto.digests.SHA512Digest r1 = new org.bouncycastle.crypto.digests.SHA512Digest
            r1.<init>()
            return r1
        L58:
            r1 = 0
            return r1
    }

    static org.bouncycastle.asn1.DERObjectIdentifier getOID(java.lang.String r1) {
            java.util.Map r0 = org.bouncycastle.jce.provider.JCEDigestUtil.oids
            java.lang.Object r1 = r0.get(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = (org.bouncycastle.asn1.DERObjectIdentifier) r1
            return r1
    }

    static boolean isSameDigest(java.lang.String r1, java.lang.String r2) {
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha1
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L10
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha1
            boolean r0 = r0.contains(r2)
            if (r0 != 0) goto L60
        L10:
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha224
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L20
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha224
            boolean r0 = r0.contains(r2)
            if (r0 != 0) goto L60
        L20:
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha256
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L30
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha256
            boolean r0 = r0.contains(r2)
            if (r0 != 0) goto L60
        L30:
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha384
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L40
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha384
            boolean r0 = r0.contains(r2)
            if (r0 != 0) goto L60
        L40:
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha512
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L50
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.sha512
            boolean r0 = r0.contains(r2)
            if (r0 != 0) goto L60
        L50:
            java.util.Set r0 = org.bouncycastle.jce.provider.JCEDigestUtil.md5
            boolean r1 = r0.contains(r1)
            if (r1 == 0) goto L62
            java.util.Set r1 = org.bouncycastle.jce.provider.JCEDigestUtil.md5
            boolean r1 = r1.contains(r2)
            if (r1 == 0) goto L62
        L60:
            r1 = 1
            goto L63
        L62:
            r1 = 0
        L63:
            return r1
    }
}
