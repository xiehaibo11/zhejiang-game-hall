package com.bianfeng.ymnsdk.util.security;

import android.annotation.SuppressLint;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import java.security.MessageDigest;
import java.util.Locale;
import java.util.Map;
import java.util.TreeMap;
import javax.crypto.Cipher;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;

public class SecurityUtil {
    private static final String SIGN_APP_SECREAT = "c986f7b40c468a3a3b1087d0eb08628b";
    private static volatile SecurityUtil util;
    private URLDecoderUtils urlDecoderUtils = new URLDecoderUtils();
    private SHA256_HMACUtil hmacUtil = new SHA256_HMACUtil();
    private RSASignature rsaSignature = new RSASignature();
    private DecodeUtil decodeUtil = new DecodeUtil();
    private PayTokenUtils payTokenUtils = new PayTokenUtils();

    private SecurityUtil() {
    }

    public static SecurityUtil getInstance() {
        if (util == null) {
            synchronized (SecurityUtil.class) {
                if (util == null) {
                    util = new SecurityUtil();
                }
            }
        }
        return util;
    }

    String addContent(String str) {
        int length = str.length();
        for (int i = 0; i < length - ((length / 16) * 16); i++) {
            str = str + "?";
        }
        return str;
    }

    public byte[] aesDecrypt(byte[] bArr, String str) {
        try {
            SecretKeySpec secretKeySpec = new SecretKeySpec(str.getBytes(), "AES");
            Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
            cipher.init(2, secretKeySpec, new IvParameterSpec("0102030405060708".getBytes()));
            return cipher.doFinal(bArr);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    @SuppressLint({"TrulyRandom"})
    public byte[] aesEncrypt(String str, String str2) {
        try {
            SecretKeySpec secretKeySpec = new SecretKeySpec(str2.getBytes(), "AES");
            Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
            byte[] bytes = str.getBytes("utf-8");
            cipher.init(1, secretKeySpec, new IvParameterSpec("0102030405060708".getBytes()));
            return cipher.doFinal(bytes);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public String bytesToHexString(byte[] bArr) {
        StringBuilder sb = new StringBuilder();
        if (bArr == null || bArr.length <= 0) {
            return null;
        }
        for (byte b : bArr) {
            String hexString = Integer.toHexString(b & 255);
            if (hexString.length() < 2) {
                sb.append(0);
            }
            sb.append(hexString);
        }
        return sb.toString();
    }

    byte charToByte(char c) {
        return (byte) "0123456789ABCDEF".indexOf(c);
    }

    public byte[] decode(byte[] bArr) {
        return this.decodeUtil.decode(bArr);
    }

    public boolean doCheck(String str, String str2) {
        return this.rsaSignature.doCheck(str, str2);
    }

    public String getPaySignatue(String str, String str2) {
        try {
            return md5(YmnDataFunUtils.getInstance().getAppContext().getAppId() + "&" + YmnDataFunUtils.getInstance().getAppContext().getIdentify_id() + "&" + str2 + "&" + str + "&" + YmnAppContext.getSdkAppKey());
        } catch (Exception unused) {
            return "";
        }
    }

    public String getPayToken(String str, String str2) {
        return this.payTokenUtils.getPayToken(str, str2);
    }

    public String getSign(TreeMap<String, String> treeMap) throws YmnsdkException {
        return getSign(treeMap, "c986f7b40c468a3a3b1087d0eb08628b");
    }

    public byte[] hexStringToBytes(String str) {
        if (str == null || str.equals("")) {
            return null;
        }
        String upperCase = str.toUpperCase(Locale.getDefault());
        int length = upperCase.length() / 2;
        char[] charArray = upperCase.toCharArray();
        byte[] bArr = new byte[length];
        for (int i = 0; i < length; i++) {
            int i2 = i * 2;
            bArr[i] = (byte) (charToByte(charArray[i2 + 1]) | (charToByte(charArray[i2]) << 4));
        }
        return bArr;
    }

    public String md5(String str, int i) throws YmnsdkException {
        try {
            byte[] bArrDigest = MessageDigest.getInstance(System.getProperty("MD5.algorithm", "MD5")).digest(str.getBytes("utf-8"));
            return i == 16 ? bytesToHexString(bArrDigest).substring(8, 24) : bytesToHexString(bArrDigest);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public void mixByte(byte[] bArr) {
        for (int i = 1; i < bArr.length; i++) {
            int i2 = i - 1;
            int i3 = bArr[i2] & 240;
            int i4 = bArr[i2] & 15;
            int i5 = bArr[i] & 240;
            int i6 = bArr[i] & 15;
            if ((i & 1) == 1) {
                bArr[i] = (byte) (i3 | i6);
                bArr[i2] = (byte) (i5 | i4);
            } else {
                bArr[i] = (byte) (i4 | i5);
                bArr[i2] = (byte) (i3 | i6);
            }
        }
    }

    public String mixDecrypt(String str) {
        byte[] bArrHexStringToBytes = hexStringToBytes(str);
        resolveByte(bArrHexStringToBytes);
        return reduceCotent(new String(aesDecrypt(bArrHexStringToBytes, "linxcool_aes_mix")));
    }

    public String mixEncrypt(String str) {
        byte[] bArrAesEncrypt = aesEncrypt(addContent(str), "linxcool_aes_mix");
        mixByte(bArrAesEncrypt);
        return bytesToHexString(bArrAesEncrypt);
    }

    String reduceCotent(String str) {
        char cCharAt;
        String str2 = "";
        for (int i = 0; i < str.length() && (cCharAt = str.charAt(i)) != '?'; i++) {
            str2 = str2 + cCharAt;
        }
        return str2;
    }

    public void resolveByte(byte[] bArr) {
        for (int length = bArr.length - 1; length > 0; length--) {
            int i = length - 1;
            int i2 = bArr[i] & 240;
            int i3 = bArr[i] & 15;
            int i4 = bArr[length] & 240;
            int i5 = bArr[length] & 15;
            if ((length & 1) == 1) {
                bArr[length] = (byte) (i2 | i5);
                bArr[i] = (byte) (i4 | i3);
            } else {
                bArr[length] = (byte) (i3 | i4);
                bArr[i] = (byte) (i2 | i5);
            }
        }
    }

    public byte[] sha256_HMAC(String str, String str2) {
        return this.hmacUtil.sha256_HMAC(str, str2);
    }

    public String urlDecoder(String str) throws YmnsdkException {
        return this.urlDecoderUtils.decode(str);
    }

    public String urlEncode(String str) throws YmnsdkException {
        return this.urlDecoderUtils.encode(str);
    }

    public String getSign(TreeMap<String, String> treeMap, String str) throws YmnsdkException {
        StringBuilder sb = new StringBuilder();
        for (Map.Entry<String, String> entry : treeMap.entrySet()) {
            sb.append(entry.getKey() + "=" + entry.getValue() + "&");
        }
        sb.append(str);
        return md5(sb.toString());
    }

    public String md5(String str) throws YmnsdkException {
        try {
            return md5(str, 32);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }
}
