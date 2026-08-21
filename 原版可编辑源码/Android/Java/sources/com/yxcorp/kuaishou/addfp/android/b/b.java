package com.yxcorp.kuaishou.addfp.android.b;

import android.content.Context;
import android.os.Environment;
import android.os.storage.StorageManager;
import android.text.TextUtils;
import java.io.File;
import java.lang.reflect.Array;
import java.lang.reflect.Method;
import kotlin.UByte;

public class b {
    public static File a(Context context, boolean z) {
        Method method;
        Method method2;
        Object objInvoke;
        int length;
        int i;
        StorageManager storageManager = (StorageManager) context.getSystemService("storage");
        try {
            Class<?> cls = Class.forName("android.os.storage.StorageVolume");
            Method method3 = storageManager.getClass().getMethod("getVolumeList", new Class[0]);
            method = cls.getMethod("getPath", new Class[0]);
            method2 = cls.getMethod("isRemovable", new Class[0]);
            objInvoke = method3.invoke(storageManager, new Object[0]);
            length = Array.getLength(objInvoke);
        } catch (Throwable th) {
            th.printStackTrace();
        }
        for (i = 0; i < length; i++) {
            Object obj = Array.get(objInvoke, i);
            String str = (String) method.invoke(obj, new Object[0]);
            if (z == ((Boolean) method2.invoke(obj, new Object[0])).booleanValue() && !TextUtils.isEmpty(str)) {
                return new File(str);
            }
            return Environment.getExternalStorageDirectory();
        }
        return Environment.getExternalStorageDirectory();
    }

    private static byte[] a(byte[] bArr, byte[] bArr2) {
        byte[] bArr3 = new byte[256];
        for (int i = 0; i < 256; i++) {
            bArr3[i] = (byte) i;
        }
        if (bArr2.length == 0) {
            bArr3 = null;
        } else {
            int length = 0;
            int i2 = 0;
            for (int i3 = 0; i3 < 256; i3++) {
                i2 = ((bArr2[length] & UByte.MAX_VALUE) + (bArr3[i3] & UByte.MAX_VALUE) + i2) & 255;
                byte b = bArr3[i3];
                bArr3[i3] = bArr3[i2];
                bArr3[i2] = b;
                length = (length + 1) % bArr2.length;
            }
        }
        byte[] bArr4 = new byte[bArr.length];
        int i4 = 0;
        int i5 = 0;
        for (int i6 = 0; i6 < bArr.length; i6++) {
            i4 = (i4 + 1) & 255;
            i5 = ((bArr3[i4] & UByte.MAX_VALUE) + i5) & 255;
            byte b2 = bArr3[i4];
            bArr3[i4] = bArr3[i5];
            bArr3[i5] = b2;
            bArr4[i6] = (byte) (bArr3[((bArr3[i4] & UByte.MAX_VALUE) + (bArr3[i5] & UByte.MAX_VALUE)) & 255] ^ bArr[i6]);
            bArr4[i6] = (byte) (bArr4[i6] ^ 42);
        }
        return bArr4;
    }

    public static byte[] b(byte[] bArr, byte[] bArr2) {
        if (bArr2 != null) {
            try {
                if (bArr2.length > 0 && bArr != null && bArr.length > 0) {
                    byte[] bArrA = a(bArr, bArr2);
                    if (bArrA != null) {
                        if (bArrA.length > 0) {
                        }
                    }
                    return bArrA;
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        return null;
    }

    public static byte[] c(byte[] bArr, byte[] bArr2) {
        if (bArr2 != null) {
            try {
                if (bArr2.length > 0 && bArr != null && bArr.length > 0) {
                    byte[] bArrA = a(bArr, bArr2);
                    if (bArrA != null) {
                        if (bArrA.length > 0) {
                        }
                    }
                    return bArrA;
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        return null;
    }
}
