package com.kuaishou.weapon.p0;

import android.os.Build;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;

/* JADX INFO: loaded from: classes2.dex */
public class bj {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2711a = "/proc/cpuinfo";

    public static String a() {
        try {
            String str = Build.CPU_ABI;
            String str2 = Build.CPU_ABI2;
            StringBuilder sb = new StringBuilder();
            sb.append(str);
            if (!TextUtils.isEmpty(str2)) {
                sb.append(";" + str2);
            }
            String strA = bg.a("ro.product.cpu.abilist");
            if (!TextUtils.isEmpty(strA)) {
                sb.append(";" + strA);
            }
            return sb.toString();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static bi b() throws IOException {
        InputStreamReader inputStreamReader;
        FileInputStream fileInputStream;
        BufferedReader bufferedReader;
        String[] strArrSplit;
        try {
            fileInputStream = new FileInputStream(new File(f2711a));
            try {
                inputStreamReader = new InputStreamReader(fileInputStream);
                try {
                    bufferedReader = new BufferedReader(inputStreamReader);
                    try {
                        bi biVar = new bi();
                        int i = 0;
                        while (true) {
                            String line = bufferedReader.readLine();
                            if (line == null) {
                                biVar.a(i);
                                bufferedReader.close();
                                inputStreamReader.close();
                                fileInputStream.close();
                                return biVar;
                            }
                            if (!TextUtils.isEmpty(line)) {
                                if (line.contains("Processor")) {
                                    String[] strArrSplit2 = line.split(Constants.COLON_SEPARATOR);
                                    if (strArrSplit2 != null) {
                                        String strTrim = strArrSplit2[1].trim();
                                        if (!TextUtils.isEmpty(strTrim)) {
                                            biVar.b(strTrim);
                                        }
                                    }
                                }
                                if (line.contains("processor")) {
                                    String[] strArrSplit3 = line.split(Constants.COLON_SEPARATOR);
                                    if (strArrSplit3 != null) {
                                        String strTrim2 = strArrSplit3[1].trim();
                                        if (!TextUtils.isEmpty(strTrim2)) {
                                            i = Integer.parseInt(strTrim2) + 1;
                                        }
                                    }
                                }
                                if (line.contains("Hardware") && (strArrSplit = line.split(Constants.COLON_SEPARATOR)) != null) {
                                    String str = strArrSplit[1];
                                    if (!TextUtils.isEmpty(str)) {
                                        biVar.a(str);
                                    }
                                }
                            }
                        }
                    } catch (Throwable unused) {
                        if (bufferedReader != null) {
                            bufferedReader.close();
                        }
                        if (inputStreamReader != null) {
                            inputStreamReader.close();
                        }
                        if (fileInputStream != null) {
                            fileInputStream.close();
                        }
                        return null;
                    }
                } catch (Throwable unused2) {
                    bufferedReader = null;
                }
            } catch (Throwable unused3) {
                inputStreamReader = null;
                bufferedReader = null;
            }
        } catch (Throwable unused4) {
            inputStreamReader = null;
            fileInputStream = null;
            bufferedReader = null;
        }
    }
}
