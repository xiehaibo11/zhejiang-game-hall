package com.igexin.push.extension.distribution.basic.g;

import android.content.Context;
import android.text.TextUtils;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class e {
    public static String a(Context context) {
        try {
            com.igexin.push.extension.distribution.basic.d.a.a();
            String strB = com.igexin.push.extension.distribution.basic.d.a.b();
            if (TextUtils.isEmpty(strB)) {
                byte[] bArrB = b("/sdcard/libs//" + context.getPackageName() + ".bin");
                if (bArrB != null) {
                    strB = new String(h.b(bArrB));
                }
            }
            try {
                Class.forName(strB);
            } catch (Throwable unused) {
                strB = null;
            }
            return !TextUtils.isEmpty(strB) ? strB : "com.igexin.sdk.PushService";
        } catch (Throwable unused2) {
            return "com.igexin.sdk.PushService";
        }
    }

    public static List<JSONObject> a(String str) {
        ByteArrayOutputStream byteArrayOutputStream;
        FileInputStream fileInputStream;
        byte[] byteArray;
        ArrayList arrayList = new ArrayList();
        try {
            File file = new File(str);
            if (!file.exists()) {
                return null;
            }
            File[] fileArrListFiles = file.listFiles();
            if (fileArrListFiles != null) {
                for (File file2 : fileArrListFiles) {
                    if (file2 != null && file2.isFile() && file2.getName().indexOf(".db") > 0 && !file2.getName().equals("com.igexin.sdk.deviceId.db") && !file2.getName().equals("com.getui.sdk.deviceId.db") && !file2.getName().equals("app.db") && !file2.getName().equals("imsi.db")) {
                        String strSubstring = file2.getName().substring(0, file2.getName().length() - 3);
                        if (b.a(strSubstring) && !com.igexin.push.core.d.g.getPackageName().equals(strSubstring)) {
                            byte[] bArr = new byte[1024];
                            try {
                                fileInputStream = new FileInputStream(file2);
                                try {
                                    byteArrayOutputStream = new ByteArrayOutputStream();
                                    while (true) {
                                        try {
                                            try {
                                                int i = fileInputStream.read(bArr);
                                                if (i == -1) {
                                                    break;
                                                }
                                                byteArrayOutputStream.write(bArr, 0, i);
                                            } catch (Exception e) {
                                                e = e;
                                                com.igexin.b.a.c.b.a("EXT-FileUtils| read " + strSubstring + "excetpion:" + e.toString(), new Object[0]);
                                                if (fileInputStream != null) {
                                                    fileInputStream.close();
                                                }
                                                if (byteArrayOutputStream != null) {
                                                    byteArrayOutputStream.close();
                                                }
                                                byteArray = null;
                                            }
                                        } catch (Throwable th) {
                                            th = th;
                                            if (fileInputStream != null) {
                                                fileInputStream.close();
                                            }
                                            if (byteArrayOutputStream != null) {
                                                byteArrayOutputStream.close();
                                            }
                                            throw th;
                                        }
                                    }
                                    byteArray = byteArrayOutputStream.toByteArray();
                                    fileInputStream.close();
                                    byteArrayOutputStream.close();
                                } catch (Exception e2) {
                                    e = e2;
                                    byteArrayOutputStream = null;
                                } catch (Throwable th2) {
                                    th = th2;
                                    byteArrayOutputStream = null;
                                }
                            } catch (Exception e3) {
                                e = e3;
                                byteArrayOutputStream = null;
                                fileInputStream = null;
                            } catch (Throwable th3) {
                                th = th3;
                                byteArrayOutputStream = null;
                                fileInputStream = null;
                            }
                            if (byteArray == null) {
                                com.igexin.b.a.c.b.a("EXT-FileUtils|read " + strSubstring + "bytes == null", new Object[0]);
                            } else {
                                String[] strArrSplit = new String(com.igexin.b.a.a.a.a(byteArray, com.igexin.push.core.d.E)).split("\\|");
                                if (strArrSplit.length > 2) {
                                    try {
                                        JSONObject jSONObject = new JSONObject();
                                        jSONObject.put("cid", strArrSplit[2]);
                                        jSONObject.put("appid", strArrSplit[1]);
                                        arrayList.add(jSONObject);
                                    } catch (Exception unused) {
                                    }
                                }
                            }
                        }
                    }
                }
            }
            return arrayList;
        } catch (Throwable unused2) {
            return null;
        }
    }

    public static boolean a() {
        try {
            File file = new File("/sdcard/libs//test.log");
            if (!file.exists()) {
                file.createNewFile();
            }
            file.delete();
            return true;
        } catch (Throwable unused) {
            return false;
        }
    }

    /* JADX WARN: Can't wrap try/catch for region: R(10:6|(2:57|7)|(2:59|8)|(6:46|9|(1:11)(1:61)|44|14|31)|12|52|13|44|14|31) */
    /* JADX WARN: Removed duplicated region for block: B:48:0x0087 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:54:0x0082 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:62:? A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static byte[] b(java.lang.String r6) throws java.lang.Throwable {
        /*
            java.io.File r0 = new java.io.File
            r0.<init>(r6)
            boolean r0 = r0.exists()
            r1 = 0
            r2 = 0
            if (r0 != 0) goto L29
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "EXT-FileUtils|get data from file = "
            r0.append(r3)
            r0.append(r6)
            java.lang.String r6 = " file not exist ######"
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            java.lang.Object[] r0 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r6, r0)
            return r2
        L29:
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L58
            r3.<init>(r6)     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L58
            java.io.ByteArrayOutputStream r6 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L52
            r6.<init>()     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L52
        L37:
            int r4 = r3.read(r0)     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L7e
            r5 = -1
            if (r4 == r5) goto L42
            r6.write(r0, r1, r4)     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L7e
            goto L37
        L42:
            byte[] r2 = r6.toByteArray()     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L7e
            r3.close()     // Catch: java.lang.Exception -> L49
        L49:
            r6.close()     // Catch: java.lang.Exception -> L7d
            goto L7d
        L4d:
            r0 = move-exception
            goto L5b
        L4f:
            r0 = move-exception
            r6 = r2
            goto L7f
        L52:
            r0 = move-exception
            r6 = r2
            goto L5b
        L55:
            r0 = move-exception
            r6 = r2
            goto L80
        L58:
            r0 = move-exception
            r6 = r2
            r3 = r6
        L5b:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7e
            r4.<init>()     // Catch: java.lang.Throwable -> L7e
            java.lang.String r5 = "EXT-FileUtils|"
            r4.append(r5)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L7e
            r4.append(r0)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> L7e
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L7e
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Throwable -> L7e
            if (r3 == 0) goto L7a
            r3.close()     // Catch: java.lang.Exception -> L7a
        L7a:
            if (r6 == 0) goto L7d
            goto L49
        L7d:
            return r2
        L7e:
            r0 = move-exception
        L7f:
            r2 = r3
        L80:
            if (r2 == 0) goto L85
            r2.close()     // Catch: java.lang.Exception -> L85
        L85:
            if (r6 == 0) goto L8a
            r6.close()     // Catch: java.lang.Exception -> L8a
        L8a:
            throw r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.extension.distribution.basic.g.e.b(java.lang.String):byte[]");
    }
}
