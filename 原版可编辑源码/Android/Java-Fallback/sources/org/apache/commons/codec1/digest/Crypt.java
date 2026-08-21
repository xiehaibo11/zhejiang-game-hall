package org.apache.commons.codec1.digest;

public class Crypt {
    public Crypt() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String crypt(java.lang.String r1) {
            r0 = 0
            java.lang.String r1 = crypt(r1, r0)
            return r1
    }

    public static java.lang.String crypt(java.lang.String r1, java.lang.String r2) {
            java.nio.charset.Charset r0 = org.apache.commons.codec1.Charsets.UTF_8
            byte[] r1 = r1.getBytes(r0)
            java.lang.String r1 = crypt(r1, r2)
            return r1
    }

    public static java.lang.String crypt(byte[] r1) {
            r0 = 0
            java.lang.String r1 = crypt(r1, r0)
            return r1
    }

    public static java.lang.String crypt(byte[] r1, java.lang.String r2) {
            if (r2 != 0) goto L7
            java.lang.String r1 = org.apache.commons.codec1.digest.Sha2Crypt.sha512Crypt(r1)
            return r1
        L7:
            java.lang.String r0 = "$6$"
            boolean r0 = r2.startsWith(r0)
            if (r0 == 0) goto L14
            java.lang.String r1 = org.apache.commons.codec1.digest.Sha2Crypt.sha512Crypt(r1, r2)
            return r1
        L14:
            java.lang.String r0 = "$5$"
            boolean r0 = r2.startsWith(r0)
            if (r0 == 0) goto L21
            java.lang.String r1 = org.apache.commons.codec1.digest.Sha2Crypt.sha256Crypt(r1, r2)
            return r1
        L21:
            java.lang.String r0 = "$1$"
            boolean r0 = r2.startsWith(r0)
            if (r0 == 0) goto L2e
            java.lang.String r1 = org.apache.commons.codec1.digest.Md5Crypt.md5Crypt(r1, r2)
            return r1
        L2e:
            java.lang.String r1 = org.apache.commons.codec1.digest.UnixCrypt.crypt(r1, r2)
            return r1
    }
}
