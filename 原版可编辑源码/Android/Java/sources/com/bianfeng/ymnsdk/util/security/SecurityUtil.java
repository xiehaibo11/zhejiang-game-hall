package com.bianfeng.ymnsdk.util.security;

import android.annotation.SuppressLint;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.huawei.hms.framework.common.ContainerUtils;
import java.security.MessageDigest;
import java.util.Locale;
import java.util.Map;
import java.util.TreeMap;
import javax.crypto.Cipher;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;
import kotlin.UByte;

public class SecurityUtil {
    private static final String SIGN_APP_SECREAT = "c986f7b40c468a3a3b1087d0eb08628b";
    private static volatile SecurityUtil util;
    private URLDecoderUtils urlDecoderUtils = new URLDecoderUtils();
    private SHA256_HMACUtil hmacUtil = new SHA256_HMACUtil();
    private RSASignature rsaSignature = new RSASignature();
    private DecodeUtil decodeUtil = new DecodeUtil();
    private PayTokenUtils payTokenUtils = new PayTokenUtils();

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

    private SecurityUtil() {
    }

    public String bytesToHexString(byte[] src) {
        StringBuilder sb = new StringBuilder();
        if (src == null || src.length <= 0) {
            return null;
        }
        for (byte b : src) {
            int v = b & UByte.MAX_VALUE;
            String hv = Integer.toHexString(v);
            if (hv.length() < 2) {
                sb.append(0);
            }
            sb.append(hv);
        }
        return sb.toString();
    }

    public byte[] hexStringToBytes(String str) {
        if (str == null || str.equals("")) {
            return null;
        }
        String str2 = str.toUpperCase(Locale.getDefault());
        int length = str2.length() / 2;
        char[] hexChars = str2.toCharArray();
        byte[] d = new byte[length];
        for (int i = 0; i < length; i++) {
            int pos = i * 2;
            d[i] = (byte) ((charToByte(hexChars[pos]) << 4) | charToByte(hexChars[pos + 1]));
        }
        return d;
    }

    byte charToByte(char c) {
        return (byte) "0123456789ABCDEF".indexOf(c);
    }

    public String md5(String input, int bit) throws YmnsdkException {
        try {
            String algorithm = System.getProperty("MD5.algorithm", "MD5");
            MessageDigest md = MessageDigest.getInstance(algorithm);
            byte[] bs = md.digest(input.getBytes("utf-8"));
            if (bit == 16) {
                return bytesToHexString(bs).substring(8, 24);
            }
            return bytesToHexString(bs);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public String md5(String input) throws YmnsdkException {
        try {
            return md5(input, 32);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    @SuppressLint({"TrulyRandom"})
    public byte[] aesEncrypt(String content, String in) {
        try {
            SecretKeySpec key = new SecretKeySpec(in.getBytes(), "AES");
            Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
            byte[] byteContent = content.getBytes("utf-8");
            IvParameterSpec zeroIv = new IvParameterSpec("0102030405060708".getBytes());
            cipher.init(1, key, zeroIv);
            return cipher.doFinal(byteContent);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public byte[] aesDecrypt(byte[] str, String in) {
        try {
            SecretKeySpec key = new SecretKeySpec(in.getBytes(), "AES");
            Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
            IvParameterSpec zeroIv = new IvParameterSpec("0102030405060708".getBytes());
            cipher.init(2, key, zeroIv);
            return cipher.doFinal(str);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    String addContent(String content) {
        int srcLen = content.length();
        int addedLen = srcLen - ((srcLen / 16) * 16);
        for (int i = 0; i < addedLen; i++) {
            content = content + "?";
        }
        return content;
    }

    String reduceCotent(String content) {
        String rs = "";
        for (int i = 0; i < content.length(); i++) {
            char c = content.charAt(i);
            if (c != '?') {
                rs = rs + c;
            } else {
                return rs;
            }
        }
        return rs;
    }

    public void mixByte(byte[] bytes) {
        for (int i = 1; i < bytes.length; i++) {
            int pMSB = bytes[i - 1] & 240;
            int pLSB = bytes[i - 1] & 15;
            int cMSB = bytes[i] & 240;
            int cLSB = bytes[i] & 15;
            if ((i & 1) == 1) {
                bytes[i] = (byte) (pMSB | cLSB);
                bytes[i - 1] = (byte) (cMSB | pLSB);
            } else {
                bytes[i] = (byte) (cMSB | pLSB);
                bytes[i - 1] = (byte) (pMSB | cLSB);
            }
        }
    }

    public void resolveByte(byte[] bytes) {
        for (int i = bytes.length - 1; i > 0; i--) {
            int pMSB = bytes[i - 1] & 240;
            int pLSB = bytes[i - 1] & 15;
            int cMSB = bytes[i] & 240;
            int cLSB = bytes[i] & 15;
            if ((i & 1) == 1) {
                bytes[i] = (byte) (pMSB | cLSB);
                bytes[i - 1] = (byte) (cMSB | pLSB);
            } else {
                bytes[i] = (byte) (cMSB | pLSB);
                bytes[i - 1] = (byte) (pMSB | cLSB);
            }
        }
    }

    public String mixEncrypt(String in) {
        byte[] bytes = aesEncrypt(addContent(in), "linxcool_aes_mix");
        mixByte(bytes);
        return bytesToHexString(bytes);
    }

    public String mixDecrypt(String in) {
        byte[] bytes = hexStringToBytes(in);
        resolveByte(bytes);
        return reduceCotent(new String(aesDecrypt(bytes, "linxcool_aes_mix")));
    }

    public String getSign(TreeMap<String, String> map) throws YmnsdkException {
        return getSign(map, "c986f7b40c468a3a3b1087d0eb08628b");
    }

    public String getSign(TreeMap<String, String> map, String appSecret) throws YmnsdkException {
        StringBuilder sb = new StringBuilder();
        for (Map.Entry<String, String> entry : map.entrySet()) {
            String key = entry.getKey();
            String value = entry.getValue();
            sb.append(key + ContainerUtils.KEY_VALUE_DELIMITER + value + "&");
        }
        sb.append(appSecret);
        return md5(sb.toString());
    }

    public String urlDecoder(String str) throws YmnsdkException {
        return this.urlDecoderUtils.decode(str);
    }

    public String urlEncode(String str) throws YmnsdkException {
        return this.urlDecoderUtils.encode(str);
    }

    public byte[] sha256_HMAC(String message, String secret) {
        return this.hmacUtil.sha256_HMAC(message, secret);
    }

    public boolean doCheck(String content, String sign) {
        return this.rsaSignature.doCheck(content, sign);
    }

    public byte[] decode(byte[] in) {
        return this.decodeUtil.decode(in);
    }

    public String getPayToken(String header, String payload) {
        return this.payTokenUtils.getPayToken(header, payload);
    }

    public String getPaySignatue(String httpData, String trace) {
        String data = YmnDataFunUtils.getInstance().getAppContext().getAppId() + "&" + YmnDataFunUtils.getInstance().getAppContext().getIdentify_id() + "&" + trace + "&" + httpData + "&" + YmnAppContext.getSdkAppKey();
        try {
            return md5(data);
        } catch (Exception e) {
            return "";
        }
    }
}
