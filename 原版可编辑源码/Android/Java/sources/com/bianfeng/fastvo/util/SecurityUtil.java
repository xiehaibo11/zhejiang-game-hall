package com.bianfeng.fastvo.util;

import com.bianfeng.fastvo.FastConfig;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.ss.android.download.api.constant.BaseConstants;
import java.net.URLEncoder;
import java.security.InvalidKeyException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.TimeZone;
import javax.crypto.Mac;
import javax.crypto.spec.SecretKeySpec;
import kotlin.UByte;

public class SecurityUtil {
    public static String md5(String str, int i) {
        try {
            byte[] bArrDigest = MessageDigest.getInstance(System.getProperty("MD5.algorithm", "MD5")).digest(str.getBytes("utf-8"));
            if (i == 16) {
                return bytesToHexString(bArrDigest).substring(8, 24);
            }
            return bytesToHexString(bArrDigest);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public static String md5(String str) {
        try {
            return md5(str, 32);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public static String bytesToHexString(byte[] bArr) {
        StringBuilder sb = new StringBuilder();
        if (bArr == null || bArr.length <= 0) {
            return null;
        }
        for (byte b : bArr) {
            String hexString = Integer.toHexString(b & UByte.MAX_VALUE);
            if (hexString.length() < 2) {
                sb.append(0);
            }
            sb.append(hexString);
        }
        return sb.toString();
    }

    public static String hmacSha256(String str, String str2) {
        try {
            SecretKeySpec secretKeySpec = new SecretKeySpec(str2.getBytes(), "HmacSHA256");
            Mac mac = Mac.getInstance("HmacSHA256");
            mac.init(secretKeySpec);
            return bytesToHexString(mac.doFinal(str.getBytes()));
        } catch (InvalidKeyException e) {
            e.printStackTrace();
            return null;
        } catch (NoSuchAlgorithmException e2) {
            e2.printStackTrace();
            return null;
        }
    }

    public static String getSign(String str) {
        String strMd5;
        String str2 = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss").format(new Date()) + createGmtOffsetString(TimeZone.getDefault().getRawOffset());
        try {
            strMd5 = SystemUtil.md5(System.currentTimeMillis() + URLEncoder.encode(YmnDataFunUtils.getInstance().getDeviceId(), "UTF-8"));
        } catch (Exception e) {
            e.printStackTrace();
            strMd5 = "";
        }
        return String.format("Shield RequestKey=%s, RequestTime=%s, Nonce=%s, Signature=%s", FastConfig.REQUEST_KEY, str2, strMd5, hmacSha256("Shield\n" + FastConfig.REQUEST_KEY + "\n" + str2 + "\n" + strMd5 + "\nGET\n/storage/oss/sts\n" + str + "\ne3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855", FastConfig.REQUEST_SECRET));
    }

    private static String createGmtOffsetString(int i) {
        char c;
        int i2 = i / BaseConstants.Time.MINUTE;
        if (i2 < 0) {
            c = '-';
            i2 = -i2;
        } else {
            c = '+';
        }
        StringBuilder sb = new StringBuilder(9);
        sb.append(c);
        appendNumber(sb, 2, i2 / 60);
        sb.append(':');
        appendNumber(sb, 2, i2 % 60);
        return sb.toString();
    }

    private static void appendNumber(StringBuilder sb, int i, int i2) {
        String string = Integer.toString(i2);
        for (int i3 = 0; i3 < i - string.length(); i3++) {
            sb.append('0');
        }
        sb.append(string);
    }
}
