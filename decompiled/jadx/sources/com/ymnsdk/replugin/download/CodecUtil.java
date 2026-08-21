package com.ymnsdk.replugin.download;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.security.MessageDigest;
import org.apache.commons.codec1.binary.Hex;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class CodecUtil {
    private static MessageDigest MD5;

    static {
        try {
            MD5 = MessageDigest.getInstance("MD5");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String md5File(String str) {
        return md5File(new File(str));
    }

    public static String md5File(File file) {
        FileInputStream fileInputStream;
        byte[] bArr;
        try {
            fileInputStream = new FileInputStream(file);
            try {
                bArr = new byte[8192];
            } finally {
            }
        } catch (IOException e) {
            e.printStackTrace();
            return null;
        }
        while (true) {
            int i = fileInputStream.read(bArr);
            if (i != -1) {
                MD5.update(bArr, 0, i);
            } else {
                String str = new String(Hex.encodeHex(MD5.digest()));
                fileInputStream.close();
                return str;
            }
            e.printStackTrace();
            return null;
        }
    }
}
