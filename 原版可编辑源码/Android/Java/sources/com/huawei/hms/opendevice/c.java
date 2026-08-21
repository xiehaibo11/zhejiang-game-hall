package com.huawei.hms.opendevice;

import android.content.Context;
import android.text.TextUtils;
import com.huawei.android.hms.openid.R;
import com.huawei.hms.support.log.HMSLog;
import com.huawei.hms.utils.IOUtils;
import com.huawei.secure.android.common.encrypt.utils.EncryptUtil;
import com.huawei.secure.android.common.encrypt.utils.RootKeyUtil;
import com.huawei.secure.android.common.encrypt.utils.WorkKeyCryptUtil;
import com.huawei.secure.android.common.util.IOUtil;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.io.Writer;
import java.util.HashMap;
import java.util.Map;

public abstract class c {
    public static final String a = "c";
    public static RootKeyUtil b;
    public static Map<String, String> c = new HashMap();
    public static final Object d = new Object();

    public static String a() {
        return "2A57086C86EF54970C1E6EB37BFC72B1";
    }

    public static byte[] a(Context context) {
        byte[] bArrA = a.a(context.getString(R.string.push_cat_head));
        byte[] bArrA2 = a.a(context.getString(R.string.push_cat_body));
        return a(a(a(bArrA, bArrA2), a.a(a())));
    }

    public static RootKeyUtil b(Context context) {
        if (b == null) {
            if (g()) {
                b = RootKeyUtil.newInstance(c(), d(), b(), f());
            } else {
                HMSLog.w(a, "root key util is null, init root key.");
                d(context);
            }
        }
        return b;
    }

    public static String c(Context context) {
        if (!g()) {
            HMSLog.i(a, "work key is empty, execute init.");
            d(context);
        }
        return WorkKeyCryptUtil.decryptWorkKey(e(), b(context));
    }

    public static void d(Context context) {
        synchronized (d) {
            e(context.getApplicationContext());
            if (g()) {
                HMSLog.i(a, "The local secret is already in separate file mode.");
                return;
            }
            StringBuilder sb = new StringBuilder();
            sb.append(p.a(context.getApplicationContext()));
            sb.append("/shared_prefs/LocalAvengers.xml");
            File file = new File(sb.toString());
            if (file.exists()) {
                IOUtil.deleteSecure(file);
                HMSLog.i(a, "destroy C, delete file LocalAvengers.xml.");
            }
            byte[] bArrGenerateSecureRandom = EncryptUtil.generateSecureRandom(32);
            byte[] bArrGenerateSecureRandom2 = EncryptUtil.generateSecureRandom(32);
            byte[] bArrGenerateSecureRandom3 = EncryptUtil.generateSecureRandom(32);
            byte[] bArrGenerateSecureRandom4 = EncryptUtil.generateSecureRandom(32);
            String strA = a.a(bArrGenerateSecureRandom);
            String strA2 = a.a(bArrGenerateSecureRandom2);
            String strA3 = a.a(bArrGenerateSecureRandom3);
            b = RootKeyUtil.newInstance(strA, strA2, strA3, bArrGenerateSecureRandom4);
            a(strA, strA2, strA3, a.a(bArrGenerateSecureRandom4), WorkKeyCryptUtil.encryptWorkKey(a.a(EncryptUtil.generateSecureRandom(32)), b), context);
            HMSLog.i(a, "generate D.");
        }
    }

    public static void e(Context context) throws Throwable {
        if (g()) {
            HMSLog.i(a, "secretKeyCache not empty.");
            return;
        }
        c.clear();
        String strA = p.a(context);
        if (TextUtils.isEmpty(strA)) {
            return;
        }
        String strA2 = s.a(strA + "/files/math/m");
        String strA3 = s.a(strA + "/files/panda/p");
        String strA4 = s.a(strA + "/files/panda/d");
        String strA5 = s.a(strA + "/files/math/t");
        String strA6 = s.a(strA + "/files/s");
        if (t.a(strA2, strA3, strA4, strA5, strA6)) {
            c.put("m", strA2);
            c.put("p", strA3);
            c.put("d", strA4);
            c.put("t", strA5);
            c.put("s", strA6);
        }
    }

    public static String f() {
        return a("t");
    }

    public static boolean g() {
        return !TextUtils.isEmpty(e());
    }

    public static byte[] a(byte[] bArr, byte[] bArr2) {
        if (bArr == null || bArr2 == null || bArr.length == 0 || bArr2.length == 0) {
            return new byte[0];
        }
        int length = bArr.length;
        if (length != bArr2.length) {
            return new byte[0];
        }
        byte[] bArr3 = new byte[length];
        for (int i = 0; i < length; i++) {
            bArr3[i] = (byte) (bArr[i] ^ bArr2[i]);
        }
        return bArr3;
    }

    public static String c() {
        return a("m");
    }

    public static String b() {
        return a("d");
    }

    public static byte[] a(byte[] bArr) {
        if (bArr == null || bArr.length == 0) {
            return new byte[0];
        }
        for (int i = 0; i < bArr.length; i++) {
            bArr[i] = (byte) (bArr[i] >> 2);
        }
        return bArr;
    }

    public static void a(String str, String str2, String str3, String str4, String str5, Context context) throws Throwable {
        String strA = p.a(context.getApplicationContext());
        if (TextUtils.isEmpty(strA)) {
            return;
        }
        try {
            StringBuilder sb = new StringBuilder();
            sb.append(strA);
            sb.append("/files/math/m");
            a("m", str, sb.toString());
            StringBuilder sb2 = new StringBuilder();
            sb2.append(strA);
            sb2.append("/files/panda/p");
            a("p", str2, sb2.toString());
            StringBuilder sb3 = new StringBuilder();
            sb3.append(strA);
            sb3.append("/files/panda/d");
            a("d", str3, sb3.toString());
            StringBuilder sb4 = new StringBuilder();
            sb4.append(strA);
            sb4.append("/files/math/t");
            a("t", str4, sb4.toString());
            StringBuilder sb5 = new StringBuilder();
            sb5.append(strA);
            sb5.append("/files/s");
            a("s", str5, sb5.toString());
        } catch (IOException unused) {
            HMSLog.e(a, "save key IOException.");
        }
    }

    public static String e() {
        return a("s");
    }

    public static String d() {
        return a("p");
    }

    public static void a(String str, String str2, String str3) throws Throwable {
        OutputStreamWriter outputStreamWriter;
        HMSLog.i(a, "save local secret key.");
        BufferedWriter bufferedWriter = null;
        try {
            File file = new File(str3);
            s.a(file);
            outputStreamWriter = new OutputStreamWriter(new FileOutputStream(file), "UTF-8");
            try {
                BufferedWriter bufferedWriter2 = new BufferedWriter(outputStreamWriter);
                try {
                    bufferedWriter2.write(str2);
                    bufferedWriter2.flush();
                    c.put(str, str2);
                    IOUtils.closeQuietly((Writer) outputStreamWriter);
                    IOUtils.closeQuietly((Writer) bufferedWriter2);
                } catch (Throwable th) {
                    th = th;
                    bufferedWriter = bufferedWriter2;
                    IOUtils.closeQuietly((Writer) outputStreamWriter);
                    IOUtils.closeQuietly((Writer) bufferedWriter);
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Throwable th3) {
            th = th3;
            outputStreamWriter = null;
        }
    }

    public static String a(String str) {
        String str2 = c.get(str);
        return TextUtils.isEmpty(str2) ? "" : str2;
    }
}
