package com.igexin.push.config;

import com.huawei.hms.framework.common.ContainerUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedReader;
import java.io.Closeable;
import java.io.File;
import java.io.FileInputStream;
import java.io.InputStream;
import java.io.InputStreamReader;

/* JADX INFO: loaded from: classes2.dex */
public class k {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f2495a = "FileConfig";

    public static void a() throws Throwable {
        InputStream inputStreamOpen;
        Closeable closeable = null;
        try {
            inputStreamOpen = com.igexin.push.core.d.g.getResources().getAssets().open(com.igexin.push.core.d.e + ".properties");
            try {
                a(inputStreamOpen);
            } catch (Exception unused) {
            } catch (Throwable th) {
                th = th;
                closeable = inputStreamOpen;
                com.igexin.push.util.h.a(closeable);
                throw th;
            }
        } catch (Exception unused2) {
            inputStreamOpen = null;
        } catch (Throwable th2) {
            th = th2;
        }
        com.igexin.push.util.h.a(inputStreamOpen);
        if (!new File(com.igexin.push.core.d.Q).exists()) {
            com.igexin.push.core.d.Q = com.igexin.push.util.c.c(com.igexin.push.core.d.g) + com.igexin.push.core.d.e + ".properties";
            if (!new File(com.igexin.push.core.d.Q).exists()) {
                return;
            }
        }
        try {
            FileInputStream fileInputStream = new FileInputStream(com.igexin.push.core.d.Q);
            try {
                BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(fileInputStream, "UTF-8"));
                while (true) {
                    try {
                        String line = bufferedReader.readLine();
                        if (line == null) {
                            com.igexin.push.util.h.a(bufferedReader);
                            com.igexin.push.util.h.a(fileInputStream);
                            return;
                        } else if (!line.startsWith("#")) {
                            String[] strArrSplit = line.split(ContainerUtils.KEY_VALUE_DELIMITER);
                            if (strArrSplit.length >= 2) {
                                String strTrim = strArrSplit[0].trim();
                                String strTrim2 = strArrSplit[1].trim();
                                if (strTrim.equals("sdk.debug")) {
                                    com.igexin.b.a.c.b.f2448a = Boolean.parseBoolean(strTrim2);
                                }
                            }
                        }
                    } catch (Exception unused3) {
                        closeable = bufferedReader;
                        inputStreamOpen = fileInputStream;
                        com.igexin.push.util.h.a(closeable);
                        com.igexin.push.util.h.a(inputStreamOpen);
                        return;
                    } catch (Throwable th3) {
                        th = th3;
                        closeable = bufferedReader;
                        inputStreamOpen = fileInputStream;
                        com.igexin.push.util.h.a(closeable);
                        com.igexin.push.util.h.a(inputStreamOpen);
                        throw th;
                    }
                }
            } catch (Exception unused4) {
            } catch (Throwable th4) {
                th = th4;
            }
        } catch (Exception unused5) {
        } catch (Throwable th5) {
            th = th5;
        }
    }

    public static void a(InputStream inputStream) throws Throwable {
        BufferedReader bufferedReader = null;
        try {
            try {
                BufferedReader bufferedReader2 = new BufferedReader(new InputStreamReader(inputStream, "UTF-8"));
                while (true) {
                    try {
                        String line = bufferedReader2.readLine();
                        if (line == null) {
                            break;
                        }
                        if (!line.startsWith("#")) {
                            String[] strArrSplit = line.split(ContainerUtils.KEY_VALUE_DELIMITER);
                            if (strArrSplit.length >= 2) {
                                String strTrim = strArrSplit[0].trim();
                                String strTrim2 = strArrSplit[1].trim();
                                if (strTrim.equals("sdk.cm_address")) {
                                    SDKUrlConfig.setXfrAddressIps(strTrim2.split(Constants.ACCEPT_TIME_SEPARATOR_SP));
                                } else if (strTrim.equals("sdk.cm_address_backup")) {
                                    SDKUrlConfig.XFR_ADDRESS_BAK = strTrim2.split(Constants.ACCEPT_TIME_SEPARATOR_SP);
                                } else if (strTrim.equals("sdk.debug")) {
                                    com.igexin.b.a.c.b.f2448a = Boolean.parseBoolean(strTrim2);
                                }
                            }
                        }
                    } catch (Exception unused) {
                        bufferedReader = bufferedReader2;
                        if (bufferedReader == null) {
                            return;
                        } else {
                            bufferedReader.close();
                        }
                    } catch (Throwable th) {
                        th = th;
                        bufferedReader = bufferedReader2;
                        if (bufferedReader != null) {
                            try {
                                bufferedReader.close();
                            } catch (Exception e) {
                                e.printStackTrace();
                            }
                        }
                        throw th;
                    }
                }
                bufferedReader2.close();
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        } catch (Exception unused2) {
        } catch (Throwable th2) {
            th = th2;
        }
    }
}
