package com.huawei.hms.utils;

public class ReadApkFileUtil {
    public static final java.lang.String EMUI10_PK = "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAx4nUogUyMCmzHhaEb420yvpw9zBs+ETzE9Qm77bGxl1Iml9JEkBkNTsUWOstLgUBajNhV+BAMVBHKMEdzoQbL5kIHkTgUVM65yewd+5+BhrcB9OQ3LHp+0BN6aLKZh71T4WvsvHFhfhQpShuGWkRkSaVGLFTHxX70kpWLzeZ3RtqiEUNIufPR2SFCH6EmecJ+HdkmBOh603IblCpGxwSWse0fDI98wZBEmV88RFaiYEgyiezLlWvXzqIj6I/xuyd5nGAegjH2y3cmoDE6CubecoB1jf4KdgACXgdiQ4Oc63MfLGTor3l6RCqeUk4APAMtyhK83jc72W1sdXMd/sj2wIDAQAB";
    public static final java.lang.String EMUI11_PK = "MIIBojANBgkqhkiG9w0BAQEFAAOCAY8AMIIBigKCAYEAqq2eRTMYr2JHLtvuZzfgPrgU8oatD4Rar9fOD7E00es2VhtB3vTyaT2BvYPUPA/nbkHRPak3EZX77CfWj9tzLgSHJE8XLk9C+2ESkdrxCDA6z7I8X+cBDnA05OlCJeZFjnUbjYB8SP8M3BttdrvqtVPxTkEJhchC7UXnMLaJ3kQ3ZPjN7ubjYzO4rv7EtEpqr2bX+qjnSLIZZuUXraxqfdBuhGDIYq62dNsqiyrhX1mfvA3+43N4ZIs3BdfSYII8BNFmFxf+gyf1aoq386R2kAjHcrfOOhjAbZh+R1OAGLWPCqi3E9nB8EsZkeoTW/oIP6pJvgL3bnxq+1viT2dmZyipMgcx/3N6FJqkd67j/sPMtPlHJuq8/s0silzs13jAw1WBV6tWHFkLGpkWGs8jp50wQtndtY8cCPl2XPGmdPN72agH+zsHuKqr/HOB2TuzzaO8rKlGIDQlzZcCSHB28nnvOyBVN9xzLkbYiLnHfd6bTwzNPeqjWrTnPwKyH3BPAgMBAAE=";
    public static final java.lang.String KEY_SIGNATURE = "Signature:";
    public static final java.lang.String KEY_SIGNATURE2 = "Signature2:";
    public static final java.lang.String KEY_SIGNATURE3 = "Signature3:";
    public static final java.lang.String a = "ReadApkFileUtil";
    public static java.lang.String b;
    public static java.lang.String c;
    public static java.lang.String d;
    public static java.lang.String e;
    public static java.lang.String f;

    public ReadApkFileUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(java.io.BufferedReader r6) throws java.io.IOException {
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            int r1 = r6.read()
            r2 = -1
            if (r1 != r2) goto Lc
            return r0
        Lc:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r3 = 10
            r0.<init>(r3)
        L13:
            if (r1 == r2) goto L31
            char r1 = (char) r1
            if (r1 != r3) goto L19
            goto L31
        L19:
            int r4 = r0.length()
            r5 = 4096(0x1000, float:5.74E-42)
            if (r4 >= r5) goto L29
            r0.append(r1)
            int r1 = r6.read()
            goto L13
        L29:
            java.io.IOException r6 = new java.io.IOException
            java.lang.String r0 = "cert line is too long!"
            r6.<init>(r0)
            throw r6
        L31:
            java.lang.String r6 = r0.toString()
            boolean r0 = r6.isEmpty()
            if (r0 != 0) goto L4e
            java.lang.String r0 = "\r"
            boolean r0 = r6.endsWith(r0)
            if (r0 == 0) goto L4e
            int r0 = r6.length()
            int r0 = r0 + (-1)
            r1 = 0
            java.lang.String r6 = r6.substring(r1, r0)
        L4e:
            return r6
    }

    public static java.lang.String a(java.lang.String r2) {
            java.lang.String r0 = ""
            if (r2 == 0) goto L12
            java.lang.String r1 = "\\s*|\t|\r|\n"
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1)
            java.util.regex.Matcher r2 = r1.matcher(r2)
            java.lang.String r0 = r2.replaceAll(r0)
        L12:
            return r0
    }

    public static java.util.ArrayList<java.lang.String> a(byte[] r5) {
            r0 = 0
            if (r5 != 0) goto Lb
            java.lang.String r5 = com.huawei.hms.utils.ReadApkFileUtil.a
            java.lang.String r1 = "manifest is null！"
            com.huawei.hms.support.log.HMSLog.e(r5, r1)
            return r0
        Lb:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream     // Catch: java.io.IOException -> L4d
            r2.<init>(r5)     // Catch: java.io.IOException -> L4d
            java.io.BufferedReader r5 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L41
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L41
            java.nio.charset.Charset r4 = java.nio.charset.StandardCharsets.UTF_8     // Catch: java.lang.Throwable -> L41
            r3.<init>(r2, r4)     // Catch: java.lang.Throwable -> L41
            r5.<init>(r3)     // Catch: java.lang.Throwable -> L41
            boolean r3 = a(r5, r1)     // Catch: java.lang.Throwable -> L35
            if (r3 != 0) goto L2e
            r5.close()     // Catch: java.lang.Throwable -> L41
            r2.close()     // Catch: java.io.IOException -> L4d
            return r0
        L2e:
            r5.close()     // Catch: java.lang.Throwable -> L41
            r2.close()     // Catch: java.io.IOException -> L4d
            return r1
        L35:
            r1 = move-exception
            throw r1     // Catch: java.lang.Throwable -> L37
        L37:
            r3 = move-exception
            r5.close()     // Catch: java.lang.Throwable -> L3c
            goto L40
        L3c:
            r5 = move-exception
            r1.addSuppressed(r5)     // Catch: java.lang.Throwable -> L41
        L40:
            throw r3     // Catch: java.lang.Throwable -> L41
        L41:
            r5 = move-exception
            throw r5     // Catch: java.lang.Throwable -> L43
        L43:
            r1 = move-exception
            r2.close()     // Catch: java.lang.Throwable -> L48
            goto L4c
        L48:
            r2 = move-exception
            r5.addSuppressed(r2)     // Catch: java.io.IOException -> L4d
        L4c:
            throw r1     // Catch: java.io.IOException -> L4d
        L4d:
            java.lang.String r5 = com.huawei.hms.utils.ReadApkFileUtil.a
            java.lang.String r1 = "getManifestLinesArrary IOException!"
            com.huawei.hms.support.log.HMSLog.e(r5, r1)
            return r0
    }

    public static boolean a() {
            java.lang.String r0 = "30820122300d06092a864886f70d01010105000382010f003082010a0282010100a3d269348ac59923f65e8111c337605e29a1d1bc54fa96c1445050dd14d8d63b10f9f0230bb87ef348183660bedcabfdec045e235ed96935799fcdb4af5c97717ff3b0954eaf1b723225b3a00f81cbd67ce6dc5a4c07f7741ad3bf1913a480c6e267ab1740f409edd2dc33c8b718a8e30e56d9a93f321723c1d0c9ea62115f996812ceef186954595e39a19b74245542c407f7dddb1d12e6eedcfc0bd7cd945ef7255ad0fc9e796258e0fb5e52a23013d15033a32b4071b65f3f924ae5c5761e22327b4d2ae60f4158a5eb15565ba079de29b81540f5fbb3be101a95357f367fc661d797074ff3826950029c52223e4594673a24a334cae62d63b838ba3df9770203010001"
            byte[] r0 = b(r0)     // Catch: java.lang.Exception -> L2d
            java.lang.String r1 = com.huawei.hms.utils.ReadApkFileUtil.f     // Catch: java.lang.Exception -> L2d
            java.lang.String r2 = "SHA-256"
            byte[] r1 = a(r1, r2)     // Catch: java.lang.Exception -> L2d
            java.lang.String r2 = com.huawei.hms.utils.ReadApkFileUtil.b     // Catch: java.lang.Exception -> L2d
            byte[] r2 = b(r2)     // Catch: java.lang.Exception -> L2d
            java.lang.String r3 = "SHA256withRSA"
            boolean r0 = a(r0, r1, r2, r3)     // Catch: java.lang.Exception -> L2d
            if (r0 == 0) goto L25
            java.lang.String r0 = com.huawei.hms.utils.ReadApkFileUtil.a     // Catch: java.lang.Exception -> L2d
            java.lang.String r1 = "verifyMDMSignatureV1 verify successful!"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)     // Catch: java.lang.Exception -> L2d
            r0 = 1
            return r0
        L25:
            java.lang.String r0 = com.huawei.hms.utils.ReadApkFileUtil.a     // Catch: java.lang.Exception -> L2d
            java.lang.String r1 = "verifyMDMSignatureV1 verify failure!"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)     // Catch: java.lang.Exception -> L2d
            goto L48
        L2d:
            r0 = move-exception
            java.lang.String r1 = com.huawei.hms.utils.ReadApkFileUtil.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "verifyMDMSignatureV1 MDM verify Exception!:"
            r2.append(r3)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
        L48:
            r0 = 0
            return r0
    }

    public static boolean a(java.io.BufferedReader r4, java.util.ArrayList<java.lang.String> r5) throws java.io.IOException {
            java.lang.String r0 = a(r4)
            r1 = 0
        L5:
            if (r0 == 0) goto L33
            java.lang.String r2 = "Name: META-INF/HUAWEI.CER"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L25
            r1 = 1
            java.lang.String r2 = a(r4)
        L14:
            if (r2 == 0) goto L25
            java.lang.String r3 = "Name:"
            boolean r3 = r2.startsWith(r3)
            if (r3 == 0) goto L20
            r0 = r2
            goto L25
        L20:
            java.lang.String r2 = a(r4)
            goto L14
        L25:
            int r2 = r0.length()
            if (r2 == 0) goto L2e
            r5.add(r0)
        L2e:
            java.lang.String r0 = a(r4)
            goto L5
        L33:
            return r1
    }

    public static boolean a(byte[] r2, byte[] r3, byte[] r4, java.lang.String r5) throws java.lang.Exception {
            java.security.Signature r5 = java.security.Signature.getInstance(r5)
            java.lang.String r0 = "RSA"
            java.security.KeyFactory r0 = java.security.KeyFactory.getInstance(r0)
            java.security.spec.X509EncodedKeySpec r1 = new java.security.spec.X509EncodedKeySpec
            r1.<init>(r2)
            java.security.PublicKey r2 = r0.generatePublic(r1)
            r5.initVerify(r2)
            r5.update(r3)
            boolean r2 = r5.verify(r4)
            return r2
    }

    public static byte[] a(java.lang.String r1, java.lang.String r2) throws java.lang.Exception {
            java.security.MessageDigest r2 = java.security.MessageDigest.getInstance(r2)
            java.nio.charset.Charset r0 = java.nio.charset.StandardCharsets.UTF_8
            java.lang.String r0 = r0.name()
            byte[] r1 = r1.getBytes(r0)
            r2.update(r1)
            byte[] r1 = r2.digest()
            return r1
    }

    public static byte[] a(java.util.ArrayList<java.lang.String> r7) {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            java.io.BufferedWriter r1 = new java.io.BufferedWriter
            java.io.OutputStreamWriter r2 = new java.io.OutputStreamWriter
            java.nio.charset.Charset r3 = java.nio.charset.StandardCharsets.UTF_8
            r2.<init>(r0, r3)
            r1.<init>(r2)
            java.util.Collections.sort(r7)     // Catch: java.lang.Throwable -> L36 java.lang.Exception -> L38
            int r2 = r7.size()     // Catch: java.lang.Throwable -> L36 java.lang.Exception -> L38
            r3 = 0
            r4 = r3
        L1a:
            if (r4 >= r2) goto L32
            java.lang.Object r5 = r7.get(r4)     // Catch: java.lang.Throwable -> L36 java.lang.Exception -> L38
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L36 java.lang.Exception -> L38
            int r6 = r5.length()     // Catch: java.lang.Throwable -> L36 java.lang.Exception -> L38
            r1.write(r5, r3, r6)     // Catch: java.lang.Throwable -> L36 java.lang.Exception -> L38
            java.lang.String r5 = "\r\n"
            r6 = 2
            r1.write(r5, r3, r6)     // Catch: java.lang.Throwable -> L36 java.lang.Exception -> L38
            int r4 = r4 + 1
            goto L1a
        L32:
            r1.flush()     // Catch: java.lang.Throwable -> L36 java.lang.Exception -> L38
            goto L53
        L36:
            r7 = move-exception
            goto L5e
        L38:
            r7 = move-exception
            java.lang.String r2 = com.huawei.hms.utils.ReadApkFileUtil.a     // Catch: java.lang.Throwable -> L36
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L36
            r3.<init>()     // Catch: java.lang.Throwable -> L36
            java.lang.String r4 = "getManifestBytesbySorted Exception!"
            r3.append(r4)     // Catch: java.lang.Throwable -> L36
            java.lang.String r7 = r7.getMessage()     // Catch: java.lang.Throwable -> L36
            r3.append(r7)     // Catch: java.lang.Throwable -> L36
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Throwable -> L36
            com.huawei.hms.support.log.HMSLog.i(r2, r7)     // Catch: java.lang.Throwable -> L36
        L53:
            com.huawei.hms.utils.IOUtils.closeQuietly(r0)
            com.huawei.hms.utils.IOUtils.closeQuietly(r1)
            byte[] r7 = r0.toByteArray()
            return r7
        L5e:
            com.huawei.hms.utils.IOUtils.closeQuietly(r0)
            com.huawei.hms.utils.IOUtils.closeQuietly(r1)
            throw r7
    }

    public static byte[] a(java.util.zip.ZipFile r1) {
            java.lang.String r0 = "META-INF/MANIFEST.MF"
            byte[] r1 = a(r1, r0)
            return r1
    }

    public static byte[] a(java.util.zip.ZipFile r7, java.lang.String r8) {
            java.util.zip.ZipEntry r8 = r7.getEntry(r8)
            r0 = 0
            if (r8 != 0) goto L8
            return r0
        L8:
            java.io.InputStream r7 = r7.getInputStream(r8)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L6a
            if (r7 != 0) goto L1b
            com.huawei.hms.utils.IOUtils.closeQuietly(r7)
            com.huawei.hms.utils.IOUtils.closeQuietly(r0)
            com.huawei.hms.utils.IOUtils.closeQuietly(r0)
            com.huawei.hms.utils.IOUtils.closeQuietly(r0)
            return r0
        L1b:
            java.io.BufferedInputStream r8 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L60
            r8.<init>(r7)     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L60
            r1 = 4096(0x1000, float:5.74E-42)
            byte[] r2 = new byte[r1]     // Catch: java.lang.Throwable -> L58 java.lang.Exception -> L5b
            java.io.ByteArrayOutputStream r3 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L58 java.lang.Exception -> L5b
            r3.<init>()     // Catch: java.lang.Throwable -> L58 java.lang.Exception -> L5b
            java.io.BufferedOutputStream r4 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L55
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L55
            r5 = 0
            int r6 = r8.read(r2, r5, r1)     // Catch: java.lang.Exception -> L51 java.lang.Throwable -> L97
        L33:
            if (r6 <= 0) goto L3d
            r4.write(r2, r5, r6)     // Catch: java.lang.Exception -> L51 java.lang.Throwable -> L97
            int r6 = r8.read(r2, r5, r1)     // Catch: java.lang.Exception -> L51 java.lang.Throwable -> L97
            goto L33
        L3d:
            r4.flush()     // Catch: java.lang.Exception -> L51 java.lang.Throwable -> L97
            byte[] r0 = r3.toByteArray()     // Catch: java.lang.Exception -> L51 java.lang.Throwable -> L97
            com.huawei.hms.utils.IOUtils.closeQuietly(r7)
            com.huawei.hms.utils.IOUtils.closeQuietly(r8)
            com.huawei.hms.utils.IOUtils.closeQuietly(r3)
            com.huawei.hms.utils.IOUtils.closeQuietly(r4)
            return r0
        L51:
            r1 = move-exception
            goto L70
        L53:
            r1 = move-exception
            goto L9a
        L55:
            r1 = move-exception
            r4 = r0
            goto L70
        L58:
            r1 = move-exception
            r3 = r0
            goto L9a
        L5b:
            r1 = move-exception
            r3 = r0
            goto L6f
        L5e:
            r8 = move-exception
            goto L66
        L60:
            r8 = move-exception
            r1 = r8
            goto L6d
        L63:
            r7 = move-exception
            r8 = r7
            r7 = r0
        L66:
            r1 = r8
            r8 = r0
            r3 = r8
            goto L9a
        L6a:
            r7 = move-exception
            r1 = r7
            r7 = r0
        L6d:
            r8 = r0
            r3 = r8
        L6f:
            r4 = r3
        L70:
            java.lang.String r2 = com.huawei.hms.utils.ReadApkFileUtil.a     // Catch: java.lang.Throwable -> L97
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L97
            r5.<init>()     // Catch: java.lang.Throwable -> L97
            java.lang.String r6 = "getManifestBytes Exception!"
            r5.append(r6)     // Catch: java.lang.Throwable -> L97
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> L97
            r5.append(r1)     // Catch: java.lang.Throwable -> L97
            java.lang.String r1 = r5.toString()     // Catch: java.lang.Throwable -> L97
            com.huawei.hms.support.log.HMSLog.i(r2, r1)     // Catch: java.lang.Throwable -> L97
            com.huawei.hms.utils.IOUtils.closeQuietly(r7)
            com.huawei.hms.utils.IOUtils.closeQuietly(r8)
            com.huawei.hms.utils.IOUtils.closeQuietly(r3)
            com.huawei.hms.utils.IOUtils.closeQuietly(r4)
            return r0
        L97:
            r0 = move-exception
            r1 = r0
            r0 = r4
        L9a:
            com.huawei.hms.utils.IOUtils.closeQuietly(r7)
            com.huawei.hms.utils.IOUtils.closeQuietly(r8)
            com.huawei.hms.utils.IOUtils.closeQuietly(r3)
            com.huawei.hms.utils.IOUtils.closeQuietly(r0)
            throw r1
    }

    public static void b(byte[] r5) {
            if (r5 != 0) goto La
            java.lang.String r5 = com.huawei.hms.utils.ReadApkFileUtil.a
            java.lang.String r0 = "manifest is null！"
            com.huawei.hms.support.log.HMSLog.e(r5, r0)
            return
        La:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r1 = 0
            com.huawei.hms.utils.ReadApkFileUtil.b = r1
            com.huawei.hms.utils.ReadApkFileUtil.c = r1
            com.huawei.hms.utils.ReadApkFileUtil.d = r1
            java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> Lc1 java.lang.Exception -> Lc5
            r2.<init>(r5)     // Catch: java.lang.Throwable -> Lc1 java.lang.Exception -> Lc5
            java.io.BufferedReader r5 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> Lbe java.lang.Exception -> Lc6
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> Lbe java.lang.Exception -> Lc6
            java.nio.charset.Charset r4 = java.nio.charset.StandardCharsets.UTF_8     // Catch: java.lang.Throwable -> Lbe java.lang.Exception -> Lc6
            r3.<init>(r2, r4)     // Catch: java.lang.Throwable -> Lbe java.lang.Exception -> Lc6
            r5.<init>(r3)     // Catch: java.lang.Throwable -> Lbe java.lang.Exception -> Lc6
            java.lang.String r1 = a(r5)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
        L2b:
            if (r1 == 0) goto Lb2
            int r3 = r1.length()     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            if (r3 == 0) goto Lac
            java.lang.String r3 = "ApkHash:"
            boolean r3 = r1.startsWith(r3)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            java.lang.String r4 = ":"
            if (r3 == 0) goto L4d
            int r3 = r1.indexOf(r4)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            int r3 = r3 + 1
            java.lang.String r3 = r1.substring(r3)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            java.lang.String r3 = a(r3)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            com.huawei.hms.utils.ReadApkFileUtil.e = r3     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
        L4d:
            java.lang.String r3 = "Signature:"
            boolean r3 = r1.startsWith(r3)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            if (r3 == 0) goto L6a
            int r3 = r1.indexOf(r4)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            int r3 = r3 + 1
            java.lang.String r1 = r1.substring(r3)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            java.lang.String r1 = a(r1)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            com.huawei.hms.utils.ReadApkFileUtil.b = r1     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            java.lang.String r1 = a(r5)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            goto L2b
        L6a:
            java.lang.String r3 = "Signature2:"
            boolean r3 = r1.startsWith(r3)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            if (r3 == 0) goto L87
            int r3 = r1.indexOf(r4)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            int r3 = r3 + 1
            java.lang.String r1 = r1.substring(r3)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            java.lang.String r1 = a(r1)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            com.huawei.hms.utils.ReadApkFileUtil.c = r1     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            java.lang.String r1 = a(r5)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            goto L2b
        L87:
            java.lang.String r3 = "Signature3:"
            boolean r3 = r1.startsWith(r3)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            if (r3 == 0) goto La4
            int r3 = r1.indexOf(r4)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            int r3 = r3 + 1
            java.lang.String r1 = r1.substring(r3)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            java.lang.String r1 = a(r1)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            com.huawei.hms.utils.ReadApkFileUtil.d = r1     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            java.lang.String r1 = a(r5)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            goto L2b
        La4:
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            java.lang.String r1 = "\r\n"
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
        Lac:
            java.lang.String r1 = a(r5)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            goto L2b
        Lb2:
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            com.huawei.hms.utils.ReadApkFileUtil.f = r0     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbc
            goto Lce
        Lb9:
            r0 = move-exception
            r1 = r5
            goto Ld6
        Lbc:
            r1 = r5
            goto Lc6
        Lbe:
            r5 = move-exception
            r0 = r5
            goto Ld6
        Lc1:
            r5 = move-exception
            r0 = r5
            r2 = r1
            goto Ld6
        Lc5:
            r2 = r1
        Lc6:
            java.lang.String r5 = com.huawei.hms.utils.ReadApkFileUtil.a     // Catch: java.lang.Throwable -> Ld5
            java.lang.String r0 = "loadApkCert Exception!"
            com.huawei.hms.support.log.HMSLog.e(r5, r0)     // Catch: java.lang.Throwable -> Ld5
            r5 = r1
        Lce:
            com.huawei.hms.utils.IOUtils.closeQuietly(r2)
            com.huawei.hms.utils.IOUtils.closeQuietly(r5)
            return
        Ld5:
            r0 = move-exception
        Ld6:
            com.huawei.hms.utils.IOUtils.closeQuietly(r2)
            com.huawei.hms.utils.IOUtils.closeQuietly(r1)
            throw r0
    }

    public static boolean b() {
            r0 = 0
            java.lang.String r1 = "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAx4nUogUyMCmzHhaEb420yvpw9zBs+ETzE9Qm77bGxl1Iml9JEkBkNTsUWOstLgUBajNhV+BAMVBHKMEdzoQbL5kIHkTgUVM65yewd+5+BhrcB9OQ3LHp+0BN6aLKZh71T4WvsvHFhfhQpShuGWkRkSaVGLFTHxX70kpWLzeZ3RtqiEUNIufPR2SFCH6EmecJ+HdkmBOh603IblCpGxwSWse0fDI98wZBEmV88RFaiYEgyiezLlWvXzqIj6I/xuyd5nGAegjH2y3cmoDE6CubecoB1jf4KdgACXgdiQ4Oc63MfLGTor3l6RCqeUk4APAMtyhK83jc72W1sdXMd/sj2wIDAQAB"
            byte[] r1 = android.util.Base64.decode(r1, r0)     // Catch: java.lang.Exception -> L2e
            java.lang.String r2 = com.huawei.hms.utils.ReadApkFileUtil.f     // Catch: java.lang.Exception -> L2e
            java.lang.String r3 = "SHA-256"
            byte[] r2 = a(r2, r3)     // Catch: java.lang.Exception -> L2e
            java.lang.String r3 = com.huawei.hms.utils.ReadApkFileUtil.c     // Catch: java.lang.Exception -> L2e
            byte[] r3 = b(r3)     // Catch: java.lang.Exception -> L2e
            java.lang.String r4 = "SHA256withRSA"
            boolean r1 = a(r1, r2, r3, r4)     // Catch: java.lang.Exception -> L2e
            if (r1 == 0) goto L26
            java.lang.String r1 = com.huawei.hms.utils.ReadApkFileUtil.a     // Catch: java.lang.Exception -> L2e
            java.lang.String r2 = "verifyMDMSignatureV2 verify successful!"
            com.huawei.hms.support.log.HMSLog.i(r1, r2)     // Catch: java.lang.Exception -> L2e
            r0 = 1
            return r0
        L26:
            java.lang.String r1 = com.huawei.hms.utils.ReadApkFileUtil.a     // Catch: java.lang.Exception -> L2e
            java.lang.String r2 = "verifyMDMSignatureV2 verify failure!"
            com.huawei.hms.support.log.HMSLog.i(r1, r2)     // Catch: java.lang.Exception -> L2e
            goto L49
        L2e:
            r1 = move-exception
            java.lang.String r2 = com.huawei.hms.utils.ReadApkFileUtil.a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "verifyMDMSignatureV2 MDM verify Exception!:"
            r3.append(r4)
            java.lang.String r1 = r1.getMessage()
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            com.huawei.hms.support.log.HMSLog.i(r2, r1)
        L49:
            return r0
    }

    public static byte[] b(java.lang.String r7) {
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            r1 = 0
            if (r0 == 0) goto La
            byte[] r7 = new byte[r1]
            return r7
        La:
            int r0 = r7.length()
            int r2 = r0 % 2
            if (r2 != 0) goto L15
            int r2 = r0 / 2
            goto L19
        L15:
            int r2 = r0 / 2
            int r2 = r2 + 1
        L19:
            byte[] r2 = new byte[r2]
        L1b:
            if (r1 >= r0) goto L4e
            int r3 = r1 + 1
            r4 = 16
            if (r3 >= r0) goto L3c
            int r5 = r1 / 2
            char r6 = r7.charAt(r1)
            int r6 = java.lang.Character.digit(r6, r4)
            int r6 = r6 << 4
            char r3 = r7.charAt(r3)
            int r3 = java.lang.Character.digit(r3, r4)
            int r6 = r6 + r3
            byte r3 = (byte) r6
            r2[r5] = r3
            goto L4b
        L3c:
            int r3 = r1 / 2
            char r5 = r7.charAt(r1)
            int r4 = java.lang.Character.digit(r5, r4)
            int r4 = r4 << 4
            byte r4 = (byte) r4
            r2[r3] = r4
        L4b:
            int r1 = r1 + 2
            goto L1b
        L4e:
            return r2
    }

    public static java.lang.String bytesToString(byte[] r6) {
            if (r6 != 0) goto L4
            r6 = 0
            return r6
        L4:
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x0030: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            int r1 = r6.length
            int r1 = r1 * 2
            char[] r1 = new char[r1]
            r2 = 0
        L11:
            int r3 = r6.length
            if (r2 >= r3) goto L2b
            r3 = r6[r2]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r4 = r2 * 2
            int r5 = r3 >>> 4
            char r5 = r0[r5]
            r1[r4] = r5
            int r4 = r4 + 1
            r3 = r3 & 15
            char r3 = r0[r3]
            r1[r4] = r3
            int r2 = r2 + 1
            goto L11
        L2b:
            java.lang.String r6 = java.lang.String.valueOf(r1)
            return r6
    }

    public static boolean c() {
            r0 = 0
            java.lang.String r1 = "MIIBojANBgkqhkiG9w0BAQEFAAOCAY8AMIIBigKCAYEAqq2eRTMYr2JHLtvuZzfgPrgU8oatD4Rar9fOD7E00es2VhtB3vTyaT2BvYPUPA/nbkHRPak3EZX77CfWj9tzLgSHJE8XLk9C+2ESkdrxCDA6z7I8X+cBDnA05OlCJeZFjnUbjYB8SP8M3BttdrvqtVPxTkEJhchC7UXnMLaJ3kQ3ZPjN7ubjYzO4rv7EtEpqr2bX+qjnSLIZZuUXraxqfdBuhGDIYq62dNsqiyrhX1mfvA3+43N4ZIs3BdfSYII8BNFmFxf+gyf1aoq386R2kAjHcrfOOhjAbZh+R1OAGLWPCqi3E9nB8EsZkeoTW/oIP6pJvgL3bnxq+1viT2dmZyipMgcx/3N6FJqkd67j/sPMtPlHJuq8/s0silzs13jAw1WBV6tWHFkLGpkWGs8jp50wQtndtY8cCPl2XPGmdPN72agH+zsHuKqr/HOB2TuzzaO8rKlGIDQlzZcCSHB28nnvOyBVN9xzLkbYiLnHfd6bTwzNPeqjWrTnPwKyH3BPAgMBAAE="
            byte[] r1 = android.util.Base64.decode(r1, r0)     // Catch: java.lang.Exception -> L2e
            java.lang.String r2 = com.huawei.hms.utils.ReadApkFileUtil.f     // Catch: java.lang.Exception -> L2e
            java.lang.String r3 = "SHA-384"
            byte[] r2 = a(r2, r3)     // Catch: java.lang.Exception -> L2e
            java.lang.String r3 = com.huawei.hms.utils.ReadApkFileUtil.d     // Catch: java.lang.Exception -> L2e
            byte[] r3 = b(r3)     // Catch: java.lang.Exception -> L2e
            java.lang.String r4 = "SHA384withRSA"
            boolean r1 = a(r1, r2, r3, r4)     // Catch: java.lang.Exception -> L2e
            if (r1 == 0) goto L26
            java.lang.String r1 = com.huawei.hms.utils.ReadApkFileUtil.a     // Catch: java.lang.Exception -> L2e
            java.lang.String r2 = "verifyMDMSignatureV3 verify successful!"
            com.huawei.hms.support.log.HMSLog.i(r1, r2)     // Catch: java.lang.Exception -> L2e
            r0 = 1
            return r0
        L26:
            java.lang.String r1 = com.huawei.hms.utils.ReadApkFileUtil.a     // Catch: java.lang.Exception -> L2e
            java.lang.String r2 = "verifyMDMSignatureV3 verify failure!"
            com.huawei.hms.support.log.HMSLog.i(r1, r2)     // Catch: java.lang.Exception -> L2e
            goto L49
        L2e:
            r1 = move-exception
            java.lang.String r2 = com.huawei.hms.utils.ReadApkFileUtil.a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "verifyMDMSignatureV3 MDM verify Exception!:"
            r3.append(r4)
            java.lang.String r1 = r1.getMessage()
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            com.huawei.hms.support.log.HMSLog.i(r2, r1)
        L49:
            return r0
    }

    public static boolean checkSignature() {
            java.lang.String r0 = com.huawei.hms.utils.ReadApkFileUtil.d
            if (r0 == 0) goto L9
            boolean r0 = c()
            return r0
        L9:
            java.lang.String r0 = com.huawei.hms.utils.ReadApkFileUtil.c
            if (r0 == 0) goto L12
            boolean r0 = b()
            return r0
        L12:
            java.lang.String r0 = com.huawei.hms.utils.ReadApkFileUtil.b
            if (r0 == 0) goto L1b
            boolean r0 = a()
            return r0
        L1b:
            r0 = 0
            return r0
    }

    public static java.lang.String getHmsPath(android.content.Context r2) {
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
            java.lang.String r0 = "com.huawei.hwid"
            r1 = 0
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo(r0, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
            java.lang.String r2 = r2.sourceDir     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
            goto L16
        Le:
            java.lang.String r2 = com.huawei.hms.utils.ReadApkFileUtil.a
            java.lang.String r0 = "HMS is not found!"
            com.huawei.hms.support.log.HMSLog.e(r2, r0)
            r2 = 0
        L16:
            return r2
    }

    public static boolean isCertFound(java.lang.String r6) {
            java.lang.String r0 = "META-INF/HUAWEI.CER"
            java.lang.String r1 = "zipFile.close Exception!"
            r2 = 0
            r3 = 0
            java.util.zip.ZipFile r4 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L44
            r4.<init>(r6)     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L44
            java.util.zip.ZipEntry r6 = r4.getEntry(r0)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3f
            if (r6 == 0) goto L13
            r6 = 1
            goto L14
        L13:
            r6 = r2
        L14:
            if (r6 == 0) goto L1d
            byte[] r0 = a(r4, r0)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3f
            b(r0)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3f
        L1d:
            r4.close()     // Catch: java.io.IOException -> L21
            goto L3a
        L21:
            r0 = move-exception
            java.lang.String r2 = com.huawei.hms.utils.ReadApkFileUtil.a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            com.huawei.hms.support.log.HMSLog.e(r2, r0)
        L3a:
            r2 = r6
            goto L7e
        L3c:
            r6 = move-exception
            r3 = r4
            goto L7f
        L3f:
            r6 = move-exception
            r3 = r4
            goto L45
        L42:
            r6 = move-exception
            goto L7f
        L44:
            r6 = move-exception
        L45:
            java.lang.String r0 = com.huawei.hms.utils.ReadApkFileUtil.a     // Catch: java.lang.Throwable -> L42
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L42
            r4.<init>()     // Catch: java.lang.Throwable -> L42
            java.lang.String r5 = "isCertFound Exception!"
            r4.append(r5)     // Catch: java.lang.Throwable -> L42
            java.lang.String r6 = r6.getMessage()     // Catch: java.lang.Throwable -> L42
            r4.append(r6)     // Catch: java.lang.Throwable -> L42
            java.lang.String r6 = r4.toString()     // Catch: java.lang.Throwable -> L42
            com.huawei.hms.support.log.HMSLog.e(r0, r6)     // Catch: java.lang.Throwable -> L42
            if (r3 == 0) goto L7e
            r3.close()     // Catch: java.io.IOException -> L65
            goto L7e
        L65:
            r6 = move-exception
            java.lang.String r0 = com.huawei.hms.utils.ReadApkFileUtil.a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r6 = r6.getMessage()
            r3.append(r6)
            java.lang.String r6 = r3.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r6)
        L7e:
            return r2
        L7f:
            if (r3 == 0) goto L9e
            r3.close()     // Catch: java.io.IOException -> L85
            goto L9e
        L85:
            r0 = move-exception
            java.lang.String r2 = com.huawei.hms.utils.ReadApkFileUtil.a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            com.huawei.hms.support.log.HMSLog.e(r2, r0)
        L9e:
            throw r6
    }

    public static boolean verifyApkHash(java.lang.String r5) {
            java.lang.String r0 = "close stream Exception!"
            r1 = 0
            java.util.zip.ZipFile r2 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            byte[] r5 = a(r2)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L73
            java.util.ArrayList r1 = a(r5)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L73
            if (r1 == 0) goto L16
            byte[] r5 = a(r1)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L73
        L16:
            java.lang.String r1 = "SHA-256"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L73
            r1.update(r5)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L73
            byte[] r5 = r1.digest()     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L73
            java.lang.String r5 = bytesToString(r5)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L73
            java.lang.String r1 = com.huawei.hms.utils.ReadApkFileUtil.e     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L73
            if (r1 == 0) goto L52
            java.lang.String r1 = com.huawei.hms.utils.ReadApkFileUtil.e     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L73
            boolean r5 = r1.equals(r5)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L73
            if (r5 == 0) goto L52
            r5 = 1
            r2.close()     // Catch: java.lang.Exception -> L38
            goto L51
        L38:
            r1 = move-exception
            java.lang.String r2 = com.huawei.hms.utils.ReadApkFileUtil.a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r0 = r1.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            com.huawei.hms.support.log.HMSLog.i(r2, r0)
        L51:
            return r5
        L52:
            r2.close()     // Catch: java.lang.Exception -> L56
            goto Lb2
        L56:
            r5 = move-exception
            java.lang.String r1 = com.huawei.hms.utils.ReadApkFileUtil.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r5 = r5.getMessage()
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            com.huawei.hms.support.log.HMSLog.i(r1, r5)
            goto Lb2
        L70:
            r5 = move-exception
            r1 = r2
            goto Lb4
        L73:
            r5 = move-exception
            r1 = r2
            goto L79
        L76:
            r5 = move-exception
            goto Lb4
        L78:
            r5 = move-exception
        L79:
            java.lang.String r2 = com.huawei.hms.utils.ReadApkFileUtil.a     // Catch: java.lang.Throwable -> L76
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L76
            r3.<init>()     // Catch: java.lang.Throwable -> L76
            java.lang.String r4 = "verifyApkHash Exception!"
            r3.append(r4)     // Catch: java.lang.Throwable -> L76
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> L76
            r3.append(r5)     // Catch: java.lang.Throwable -> L76
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Throwable -> L76
            com.huawei.hms.support.log.HMSLog.i(r2, r5)     // Catch: java.lang.Throwable -> L76
            if (r1 == 0) goto Lb2
            r1.close()     // Catch: java.lang.Exception -> L99
            goto Lb2
        L99:
            r5 = move-exception
            java.lang.String r1 = com.huawei.hms.utils.ReadApkFileUtil.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r5 = r5.getMessage()
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            com.huawei.hms.support.log.HMSLog.i(r1, r5)
        Lb2:
            r5 = 0
            return r5
        Lb4:
            if (r1 == 0) goto Ld3
            r1.close()     // Catch: java.lang.Exception -> Lba
            goto Ld3
        Lba:
            r1 = move-exception
            java.lang.String r2 = com.huawei.hms.utils.ReadApkFileUtil.a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r0 = r1.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            com.huawei.hms.support.log.HMSLog.i(r2, r0)
        Ld3:
            throw r5
    }
}
