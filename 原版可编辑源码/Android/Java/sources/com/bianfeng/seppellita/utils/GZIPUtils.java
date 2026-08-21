package com.bianfeng.seppellita.utils;

import com.bianfeng.ymnsdk.utilslib.security.Base64;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.util.zip.GZIPOutputStream;

public class GZIPUtils {
    public static String compress(String str) throws Throwable {
        GZIPOutputStream gZIPOutputStream;
        GZIPOutputStream gZIPOutputStream2 = null;
        if (str == null || str.length() == 0) {
            return null;
        }
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        try {
            try {
                try {
                    gZIPOutputStream = new GZIPOutputStream(byteArrayOutputStream);
                } catch (Throwable th) {
                    th = th;
                }
            } catch (Exception e) {
                e = e;
            }
        } catch (IOException e2) {
            e2.printStackTrace();
        }
        try {
            gZIPOutputStream.write(str.getBytes());
            gZIPOutputStream.close();
        } catch (Exception e3) {
            e = e3;
            gZIPOutputStream2 = gZIPOutputStream;
            e.printStackTrace();
            if (gZIPOutputStream2 != null) {
                gZIPOutputStream2.close();
            }
            return Base64.encode(byteArrayOutputStream.toByteArray());
        } catch (Throwable th2) {
            th = th2;
            gZIPOutputStream2 = gZIPOutputStream;
            if (gZIPOutputStream2 != null) {
                try {
                    gZIPOutputStream2.close();
                } catch (IOException e4) {
                    e4.printStackTrace();
                }
            }
            throw th;
        }
        return Base64.encode(byteArrayOutputStream.toByteArray());
    }
}
