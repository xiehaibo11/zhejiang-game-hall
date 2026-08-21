package com.bianfeng.ymnsdk.util.security;

import android.annotation.SuppressLint;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import java.security.MessageDigest;
import java.util.Iterator;
import java.util.Locale;
import java.util.Map;
import java.util.TreeMap;
import javax.crypto.Cipher;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;

public class SecurityUtil {
    private static final String SIGN_APP_SECREAT = "c986f7b40c468a3a3b1087d0eb08628b";
    private static volatile SecurityUtil util;
    private DecodeUtil decodeUtil;
    private SHA256_HMACUtil hmacUtil;
    private PayTokenUtils payTokenUtils;
    private RSASignature rsaSignature;
    private URLDecoderUtils urlDecoderUtils;

    private SecurityUtil() {
        this.urlDecoderUtils = new URLDecoderUtils();
        this.hmacUtil = new SHA256_HMACUtil();
        this.rsaSignature = new RSASignature();
        this.decodeUtil = new DecodeUtil();
        this.payTokenUtils = new PayTokenUtils();
    }

    public static SecurityUtil getInstance() {
        if (util != null) goto L15;
        monitor-enter(SecurityUtil.class);
    L11:
        th = move-exception;
        throw th;
    L7:
        if (util != null) goto L9;
        util = new SecurityUtil();     // Catch: Throwable -> L11
    L9:
        monitor-exit(SecurityUtil.class);     // Catch: Throwable -> L11
    L15:
        return util;
    }

    String addContent(String r4) {
        int r0 = r4.length();
        int r1 = 0;
    L3:
        if (r1 >= (r0 - ((r0 / 16) * 16))) goto L5;
        r4 = r4 + "?";
        r1 = r1 + 1;
        goto L3
    L5:
        return r4;
    }

    public byte[] aesDecrypt(byte[] r4, String r5) {
        SecretKeySpec r0 = new SecretKeySpec(r5.getBytes(), "AES");     // Catch: Exception -> L4
        Cipher r52 = Cipher.getInstance("AES/CBC/PKCS5Padding");     // Catch: Exception -> L4
        r52.init(2, r0, new IvParameterSpec("0102030405060708".getBytes()));     // Catch: Exception -> L4
        return r52.doFinal(r4);
    L4:
        e = move-exception;
        e.printStackTrace();
        return null;
    }

    @SuppressLint({"TrulyRandom"})
    public byte[] aesEncrypt(String r4, String r5) {
        SecretKeySpec r0 = new SecretKeySpec(r5.getBytes(), "AES");     // Catch: Exception -> L4
        Cipher r52 = Cipher.getInstance("AES/CBC/PKCS5Padding");     // Catch: Exception -> L4
        byte[] r42 = r4.getBytes("utf-8");     // Catch: Exception -> L4
        r52.init(1, r0, new IvParameterSpec("0102030405060708".getBytes()));     // Catch: Exception -> L4
        return r52.doFinal(r42);
    L4:
        e = move-exception;
        e.printStackTrace();
        return null;
    }

    public String bytesToHexString(byte[] r7) {
        StringBuilder r0 = new StringBuilder();
        if (r7 != null) goto L5;
        return null;
    L5:
        if (r7.length <= 0) goto L21;
        int r2 = 0;
    L9:
        if (r2 >= r7.length) goto L15;
        String r3 = Integer.toHexString(r7[r2] & 255);
        if (r3.length() >= 2) goto L13;
        r0.append(0);
    L13:
        r0.append(r3);
        r2 = r2 + 1;
        goto L9
    L15:
        return r0.toString();
    L21:
        return null;
    }

    byte charToByte(char r2) {
        return (byte) "0123456789ABCDEF".indexOf(r2);
    }

    public byte[] decode(byte[] r2) {
        return this.decodeUtil.decode(r2);
    }

    public boolean doCheck(String r2, String r3) {
        return this.rsaSignature.doCheck(r2, r3);
    }

    public String getPaySignatue(String r4, String r5) {
        return md5(YmnDataFunUtils.getInstance().getAppContext().getAppId() + "&" + YmnDataFunUtils.getInstance().getAppContext().getIdentify_id() + "&" + r5 + "&" + r4 + "&" + YmnAppContext.getSdkAppKey());
    L5:
        return "";
    }

    public String getPayToken(String r2, String r3) {
        return this.payTokenUtils.getPayToken(r2, r3);
    }

    public String getSign(TreeMap<String, String> r2) throws YmnsdkException {
        return getSign(r2, "c986f7b40c468a3a3b1087d0eb08628b");
    }

    public byte[] hexStringToBytes(String r6) {
        if (r6 != null) goto L4;
        return null;
    L4:
        if (r6.equals("") == true) goto L13;
        String r62 = r6.toUpperCase(Locale.getDefault());
        int r0 = r62.length() / 2;
        char[] r63 = r62.toCharArray();
        byte[] r1 = new byte[r0];
        int r2 = 0;
    L7:
        if (r2 >= r0) goto L9;
        int r3 = r2 * 2;
        int r4 = charToByte(r63[r3]) << 4;
        r1[r2] = (byte) (charToByte(r63[r3 + 1]) | r4);
        r2 = r2 + 1;
        goto L7
    L9:
        return r1;
    L13:
        return null;
    }

    public String md5(String r3, int r4) throws YmnsdkException {
        byte[] r32 = MessageDigest.getInstance(System.getProperty("MD5.algorithm", "MD5")).digest(r3.getBytes("utf-8"));     // Catch: Exception -> L8
        if (r4 != 16) goto L7;
        return bytesToHexString(r32).substring(8, 24);
    L7:
        return bytesToHexString(r32);
    L8:
        e = move-exception;
        throw new YmnsdkException(e);
    }

    public void mixByte(byte[] r9) {
        int r1 = 1;
    L4:
        if (r1 >= r9.length) goto L10;
        int r2 = r1 - 1;
        int r3 = r9[r2] & 240;
        int r4 = r9[r2] & 15;
        int r5 = r9[r1] & 240;
        int r6 = r9[r1] & 15;
        if ((r1 & 1) != 1) goto L8;
        r9[r1] = (byte) (r3 | r6);
        r9[r2] = (byte) (r5 | r4);
    L9:
        r1 = r1 + 1;
        goto L4
    L8:
        r9[r1] = (byte) (r4 | r5);
        r9[r2] = (byte) (r3 | r6);
        goto L9
    }

    public String mixDecrypt(String r2) {
        byte[] r22 = hexStringToBytes(r2);
        resolveByte(r22);
        return reduceCotent(new String(aesDecrypt(r22, "linxcool_aes_mix")));
    }

    public String mixEncrypt(String r2) {
        byte[] r22 = aesEncrypt(addContent(r2), "linxcool_aes_mix");
        mixByte(r22);
        return bytesToHexString(r22);
    }

    String reduceCotent(String r5) {
        String r0 = "";
        int r1 = 0;
    L4:
        if (r1 >= r5.length()) goto L8;
        char r2 = r5.charAt(r1);
        if (r2 == '?') goto L8;
        r0 = r0 + r2;
        r1 = r1 + 1;
    L8:
        return r0;
    }

    public void resolveByte(byte[] r9) {
        int r0 = r9.length - 1;
    L3:
        if (r0 <= 0) goto L9;
        int r2 = r0 - 1;
        int r3 = r9[r2] & 240;
        int r4 = r9[r2] & 15;
        int r5 = r9[r0] & 240;
        int r6 = r9[r0] & 15;
        if ((r0 & 1) != 1) goto L7;
        r9[r0] = (byte) (r3 | r6);
        r9[r2] = (byte) (r5 | r4);
    L8:
        r0 = r0 - 1;
        goto L3
    L7:
        r9[r0] = (byte) (r4 | r5);
        r9[r2] = (byte) (r3 | r6);
        goto L8
    }

    public byte[] sha256_HMAC(String r2, String r3) {
        return this.hmacUtil.sha256_HMAC(r2, r3);
    }

    public String urlDecoder(String r2) throws YmnsdkException {
        return this.urlDecoderUtils.decode(r2);
    }

    public String urlEncode(String r2) throws YmnsdkException {
        return this.urlDecoderUtils.encode(r2);
    }

    public String getSign(TreeMap<String, String> r5, String r6) throws YmnsdkException {
        StringBuilder r0 = new StringBuilder();
        Iterator<Map.Entry<String, String>> r52 = r5.entrySet().iterator();
    L4:
        if (r52.hasNext() == false) goto L6;
        Map.Entry<String, String> r1 = r52.next();
        r0.append(r1.getKey() + "=" + r1.getValue() + "&");
        goto L4
    L6:
        r0.append(r6);
        return md5(r0.toString());
    }

    public String md5(String r2) throws YmnsdkException {
        return md5(r2, 32);
    L5:
        e = move-exception;
        throw new YmnsdkException(e);
    }
}
