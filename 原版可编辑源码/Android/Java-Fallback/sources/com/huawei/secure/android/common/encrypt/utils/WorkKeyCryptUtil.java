package com.huawei.secure.android.common.encrypt.utils;

public class WorkKeyCryptUtil {
    private WorkKeyCryptUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String decryptWorkKey(java.lang.String r0, com.huawei.secure.android.common.encrypt.utils.RootKeyUtil r1) {
            byte[] r1 = r1.getRootKey()
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.aes.AesCbc.decrypt(r0, r1)
            return r0
    }

    public static java.lang.String decryptWorkKey(java.lang.String r0, byte[] r1) {
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.aes.AesCbc.decrypt(r0, r1)
            return r0
    }

    public static byte[] decryptWorkKey2Byte(byte[] r0, com.huawei.secure.android.common.encrypt.utils.RootKeyUtil r1, byte[] r2) {
            byte[] r1 = r1.getRootKey()
            byte[] r0 = com.huawei.secure.android.common.encrypt.aes.AesCbc.decrypt(r0, r1, r2)
            return r0
    }

    public static byte[] decryptWorkKey2Byte(byte[] r0, byte[] r1, byte[] r2) {
            byte[] r0 = com.huawei.secure.android.common.encrypt.aes.AesCbc.decrypt(r0, r1, r2)
            return r0
    }

    public static byte[] decryptWorkKey2ByteGcm(byte[] r0, com.huawei.secure.android.common.encrypt.utils.RootKeyUtil r1, byte[] r2) {
            byte[] r1 = r1.getRootKey()
            byte[] r0 = com.huawei.secure.android.common.encrypt.aes.AesGcm.decrypt(r0, r1, r2)
            return r0
    }

    public static byte[] decryptWorkKey2ByteGcm(byte[] r0, byte[] r1, byte[] r2) {
            byte[] r0 = com.huawei.secure.android.common.encrypt.aes.AesGcm.decrypt(r0, r1, r2)
            return r0
    }

    public static java.lang.String decryptWorkKeyGcm(java.lang.String r0, com.huawei.secure.android.common.encrypt.utils.RootKeyUtil r1) {
            byte[] r1 = r1.getRootKey()
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.aes.AesGcm.decrypt(r0, r1)
            return r0
    }

    public static java.lang.String decryptWorkKeyGcm(java.lang.String r0, byte[] r1) {
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.aes.AesGcm.decrypt(r0, r1)
            return r0
    }

    public static java.lang.String encryptWorkKey(java.lang.String r0, com.huawei.secure.android.common.encrypt.utils.RootKeyUtil r1) {
            byte[] r1 = r1.getRootKey()
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.aes.AesCbc.encrypt(r0, r1)
            return r0
    }

    public static java.lang.String encryptWorkKey(java.lang.String r0, byte[] r1) {
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.aes.AesCbc.encrypt(r0, r1)
            return r0
    }

    public static byte[] encryptWorkKey2Byte(byte[] r0, com.huawei.secure.android.common.encrypt.utils.RootKeyUtil r1, byte[] r2) {
            byte[] r1 = r1.getRootKey()
            byte[] r0 = com.huawei.secure.android.common.encrypt.aes.AesCbc.encrypt(r0, r1, r2)
            return r0
    }

    public static byte[] encryptWorkKey2Byte(byte[] r0, byte[] r1, byte[] r2) {
            byte[] r0 = com.huawei.secure.android.common.encrypt.aes.AesCbc.encrypt(r0, r1, r2)
            return r0
    }

    public static byte[] encryptWorkKey2ByteGcm(byte[] r0, com.huawei.secure.android.common.encrypt.utils.RootKeyUtil r1, byte[] r2) {
            byte[] r1 = r1.getRootKey()
            byte[] r0 = com.huawei.secure.android.common.encrypt.aes.AesGcm.encrypt(r0, r1, r2)
            return r0
    }

    public static byte[] encryptWorkKey2ByteGcm(byte[] r0, byte[] r1, byte[] r2) {
            byte[] r0 = com.huawei.secure.android.common.encrypt.aes.AesGcm.encrypt(r0, r1, r2)
            return r0
    }

    public static java.lang.String encryptWorkKeyGcm(java.lang.String r0, com.huawei.secure.android.common.encrypt.utils.RootKeyUtil r1) {
            byte[] r1 = r1.getRootKey()
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.aes.AesGcm.encrypt(r0, r1)
            return r0
    }

    public static java.lang.String encryptWorkKeyGcm(java.lang.String r0, byte[] r1) {
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.aes.AesGcm.encrypt(r0, r1)
            return r0
    }
}
