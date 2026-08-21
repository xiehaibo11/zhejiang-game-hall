package com.igexin.push.extension.distribution.basic.g;

import android.content.Context;
import android.text.TextUtils;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONObject;

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
    */
    public static byte[] b(String str) throws Throwable {
        ByteArrayOutputStream byteArrayOutputStream;
        FileInputStream fileInputStream;
        FileInputStream fileInputStream2 = null;
        byteArray = null;
        byte[] byteArray = null;
        if (!new File(str).exists()) {
            com.igexin.b.a.c.b.a("EXT-FileUtils|get data from file = " + str + " file not exist ######", new Object[0]);
            return null;
        }
        byte[] bArr = new byte[1024];
        try {
            fileInputStream = new FileInputStream(str);
        } catch (Exception e) {
            e = e;
            byteArrayOutputStream = null;
            fileInputStream = null;
        } catch (Throwable th) {
            th = th;
            byteArrayOutputStream = null;
            if (fileInputStream2 != null) {
            }
            if (byteArrayOutputStream == null) {
            }
        }
        try {
            byteArrayOutputStream = new ByteArrayOutputStream();
        } catch (Exception e2) {
            e = e2;
            byteArrayOutputStream = null;
        } catch (Throwable th2) {
            th = th2;
            byteArrayOutputStream = null;
            fileInputStream2 = fileInputStream;
            if (fileInputStream2 != null) {
            }
            if (byteArrayOutputStream == null) {
            }
        }
        while (true) {
            try {
                try {
                    int i = fileInputStream.read(bArr);
                    if (i == -1) {
                        break;
                    }
                    byteArrayOutputStream.write(bArr, 0, i);
                } catch (Exception e3) {
                    e = e3;
                    com.igexin.b.a.c.b.a("EXT-FileUtils|" + e.toString(), new Object[0]);
                    if (fileInputStream != null) {
                        try {
                            fileInputStream.close();
                        } catch (Exception unused) {
                        }
                    }
                    if (byteArrayOutputStream != null) {
                    }
                    return byteArray;
                }
                byteArrayOutputStream.close();
                return byteArray;
            } catch (Throwable th3) {
                th = th3;
                fileInputStream2 = fileInputStream;
                if (fileInputStream2 != null) {
                    try {
                        fileInputStream2.close();
                    } catch (Exception unused2) {
                    }
                }
                if (byteArrayOutputStream == null) {
                    throw th;
                }
                try {
                    byteArrayOutputStream.close();
                    throw th;
                } catch (Exception unused3) {
                    throw th;
                }
            }
        }
        byteArray = byteArrayOutputStream.toByteArray();
        fileInputStream.close();
        byteArrayOutputStream.close();
        return byteArray;
    }
}
