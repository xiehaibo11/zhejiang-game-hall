package org.apache.commons.codec1.digest;

import java.security.MessageDigest;
import java.util.Arrays;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import kotlin.UByte;
import org.apache.commons.codec1.Charsets;

/* JADX INFO: loaded from: classes4.dex */
public class Sha2Crypt {
    private static final int ROUNDS_DEFAULT = 5000;
    private static final int ROUNDS_MAX = 999999999;
    private static final int ROUNDS_MIN = 1000;
    private static final String ROUNDS_PREFIX = "rounds=";
    private static final Pattern SALT_PATTERN = Pattern.compile("^\\$([56])\\$(rounds=(\\d+)\\$)?([\\.\\/a-zA-Z0-9]{1,16}).*");
    private static final int SHA256_BLOCKSIZE = 32;
    static final String SHA256_PREFIX = "$5$";
    private static final int SHA512_BLOCKSIZE = 64;
    static final String SHA512_PREFIX = "$6$";

    public static String sha256Crypt(byte[] bArr) {
        return sha256Crypt(bArr, null);
    }

    public static String sha256Crypt(byte[] bArr, String str) {
        if (str == null) {
            str = SHA256_PREFIX + B64.getRandomSalt(8);
        }
        return sha2Crypt(bArr, str, SHA256_PREFIX, 32, MessageDigestAlgorithms.SHA_256);
    }

    private static String sha2Crypt(byte[] bArr, String str, String str2, int i, String str3) {
        int iMax;
        boolean z;
        int i2;
        byte b;
        int length = bArr.length;
        if (str == null) {
            throw new IllegalArgumentException("Salt must not be null");
        }
        Matcher matcher = SALT_PATTERN.matcher(str);
        if (matcher == null || !matcher.find()) {
            throw new IllegalArgumentException("Invalid salt value: " + str);
        }
        char c = 3;
        int i3 = 0;
        if (matcher.group(3) != null) {
            iMax = Math.max(1000, Math.min(ROUNDS_MAX, Integer.parseInt(matcher.group(3))));
            z = true;
        } else {
            iMax = 5000;
            z = false;
        }
        String strGroup = matcher.group(4);
        byte[] bytes = strGroup.getBytes(Charsets.UTF_8);
        int length2 = bytes.length;
        MessageDigest digest = DigestUtils.getDigest(str3);
        digest.update(bArr);
        digest.update(bytes);
        MessageDigest digest2 = DigestUtils.getDigest(str3);
        digest2.update(bArr);
        digest2.update(bytes);
        digest2.update(bArr);
        byte[] bArrDigest = digest2.digest();
        int length3 = bArr.length;
        while (length3 > i) {
            digest.update(bArrDigest, 0, i);
            length3 -= i;
        }
        digest.update(bArrDigest, 0, length3);
        int length4 = bArr.length;
        while (length4 > 0) {
            char c2 = c;
            int i4 = i3;
            if ((length4 & 1) != 0) {
                digest.update(bArrDigest, i4, i);
            } else {
                digest.update(bArr);
            }
            length4 >>= 1;
            i3 = i4;
            c = c2;
        }
        byte[] bArrDigest2 = digest.digest();
        MessageDigest digest3 = DigestUtils.getDigest(str3);
        for (int i5 = 1; i5 <= length; i5++) {
            digest3.update(bArr);
        }
        byte[] bArrDigest3 = digest3.digest();
        byte[] bArr2 = new byte[length];
        int i6 = i3;
        while (i6 < length - i) {
            System.arraycopy(bArrDigest3, i3, bArr2, i6, i);
            i6 += i;
        }
        System.arraycopy(bArrDigest3, i3, bArr2, i6, length - i6);
        MessageDigest digest4 = DigestUtils.getDigest(str3);
        for (int i7 = 1; i7 <= (bArrDigest2[i3] & UByte.MAX_VALUE) + 16; i7++) {
            digest4.update(bytes);
        }
        byte[] bArrDigest4 = digest4.digest();
        byte[] bArr3 = new byte[length2];
        while (true) {
            i2 = i3;
            if (i2 >= length2 - i) {
                break;
            }
            System.arraycopy(bArrDigest4, 0, bArr3, i2, i);
            i3 = i2 + i;
        }
        System.arraycopy(bArrDigest4, 0, bArr3, i2, length2 - i2);
        byte[] bArrDigest5 = bArrDigest2;
        int i8 = 0;
        while (i8 <= iMax - 1) {
            MessageDigest digest5 = DigestUtils.getDigest(str3);
            int i9 = i8 & 1;
            if (i9 != 0) {
                digest5.update(bArr2, 0, length);
            } else {
                digest5.update(bArrDigest5, 0, i);
            }
            if (i8 % 3 != 0) {
                digest5.update(bArr3, 0, length2);
            }
            if (i8 % 7 != 0) {
                digest5.update(bArr2, 0, length);
            }
            if (i9 != 0) {
                digest5.update(bArrDigest5, 0, i);
            } else {
                digest5.update(bArr2, 0, length);
            }
            bArrDigest5 = digest5.digest();
            i8++;
            digest = digest5;
        }
        StringBuilder sb = new StringBuilder(str2);
        if (z) {
            sb.append(ROUNDS_PREFIX);
            sb.append(iMax);
            sb.append("$");
        }
        sb.append(strGroup);
        sb.append("$");
        if (i == 32) {
            B64.b64from24bit(bArrDigest5[0], bArrDigest5[10], bArrDigest5[20], 4, sb);
            B64.b64from24bit(bArrDigest5[21], bArrDigest5[1], bArrDigest5[11], 4, sb);
            B64.b64from24bit(bArrDigest5[12], bArrDigest5[22], bArrDigest5[2], 4, sb);
            B64.b64from24bit(bArrDigest5[3], bArrDigest5[13], bArrDigest5[23], 4, sb);
            B64.b64from24bit(bArrDigest5[24], bArrDigest5[4], bArrDigest5[14], 4, sb);
            B64.b64from24bit(bArrDigest5[15], bArrDigest5[25], bArrDigest5[5], 4, sb);
            B64.b64from24bit(bArrDigest5[6], bArrDigest5[16], bArrDigest5[26], 4, sb);
            B64.b64from24bit(bArrDigest5[27], bArrDigest5[7], bArrDigest5[17], 4, sb);
            B64.b64from24bit(bArrDigest5[18], bArrDigest5[28], bArrDigest5[8], 4, sb);
            B64.b64from24bit(bArrDigest5[9], bArrDigest5[19], bArrDigest5[29], 4, sb);
            B64.b64from24bit((byte) 0, bArrDigest5[31], bArrDigest5[30], 3, sb);
            b = 0;
        } else {
            B64.b64from24bit(bArrDigest5[0], bArrDigest5[21], bArrDigest5[42], 4, sb);
            B64.b64from24bit(bArrDigest5[22], bArrDigest5[43], bArrDigest5[1], 4, sb);
            B64.b64from24bit(bArrDigest5[44], bArrDigest5[2], bArrDigest5[23], 4, sb);
            B64.b64from24bit(bArrDigest5[3], bArrDigest5[24], bArrDigest5[45], 4, sb);
            B64.b64from24bit(bArrDigest5[25], bArrDigest5[46], bArrDigest5[4], 4, sb);
            B64.b64from24bit(bArrDigest5[47], bArrDigest5[5], bArrDigest5[26], 4, sb);
            B64.b64from24bit(bArrDigest5[6], bArrDigest5[27], bArrDigest5[48], 4, sb);
            B64.b64from24bit(bArrDigest5[28], bArrDigest5[49], bArrDigest5[7], 4, sb);
            B64.b64from24bit(bArrDigest5[50], bArrDigest5[8], bArrDigest5[29], 4, sb);
            B64.b64from24bit(bArrDigest5[9], bArrDigest5[30], bArrDigest5[51], 4, sb);
            B64.b64from24bit(bArrDigest5[31], bArrDigest5[52], bArrDigest5[10], 4, sb);
            B64.b64from24bit(bArrDigest5[53], bArrDigest5[11], bArrDigest5[32], 4, sb);
            B64.b64from24bit(bArrDigest5[12], bArrDigest5[33], bArrDigest5[54], 4, sb);
            B64.b64from24bit(bArrDigest5[34], bArrDigest5[55], bArrDigest5[13], 4, sb);
            B64.b64from24bit(bArrDigest5[56], bArrDigest5[14], bArrDigest5[35], 4, sb);
            B64.b64from24bit(bArrDigest5[15], bArrDigest5[36], bArrDigest5[57], 4, sb);
            B64.b64from24bit(bArrDigest5[37], bArrDigest5[58], bArrDigest5[16], 4, sb);
            B64.b64from24bit(bArrDigest5[59], bArrDigest5[17], bArrDigest5[38], 4, sb);
            B64.b64from24bit(bArrDigest5[18], bArrDigest5[39], bArrDigest5[60], 4, sb);
            B64.b64from24bit(bArrDigest5[40], bArrDigest5[61], bArrDigest5[19], 4, sb);
            B64.b64from24bit(bArrDigest5[62], bArrDigest5[20], bArrDigest5[41], 4, sb);
            byte b2 = bArrDigest5[63];
            b = 0;
            B64.b64from24bit((byte) 0, (byte) 0, b2, 2, sb);
        }
        Arrays.fill(bArrDigest4, b);
        Arrays.fill(bArr2, b);
        Arrays.fill(bArr3, b);
        digest.reset();
        digest4.reset();
        Arrays.fill(bArr, b);
        Arrays.fill(bytes, b);
        return sb.toString();
    }

    public static String sha512Crypt(byte[] bArr) {
        return sha512Crypt(bArr, null);
    }

    public static String sha512Crypt(byte[] bArr, String str) {
        if (str == null) {
            str = SHA512_PREFIX + B64.getRandomSalt(8);
        }
        return sha2Crypt(bArr, str, SHA512_PREFIX, 64, MessageDigestAlgorithms.SHA_512);
    }
}
