package com.kuaishou.weapon.p0;

import android.os.Process;
import android.text.TextUtils;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Set;
import org.json.JSONObject;

public class di {
    public static String a() {
        try {
            return b(String.format(" lsof -p %1$s ", Integer.valueOf(Process.myPid())));
        } catch (Exception unused) {
            return null;
        }
    }

    public static String a(String str) throws Throwable {
        String str2 = "";
        BufferedReader bufferedReader = null;
        try {
            BufferedReader bufferedReader2 = new BufferedReader(new InputStreamReader(Runtime.getRuntime().exec(str).getInputStream()));
            try {
                String line = bufferedReader2.readLine();
                if (line != null) {
                    str2 = "" + line;
                }
                try {
                    bufferedReader2.close();
                } catch (Exception unused) {
                }
                return str2;
            } catch (Exception unused2) {
                bufferedReader = bufferedReader2;
                if (bufferedReader != null) {
                    try {
                        bufferedReader.close();
                    } catch (Exception unused3) {
                    }
                }
                return "";
            } catch (Throwable th) {
                th = th;
                bufferedReader = bufferedReader2;
                if (bufferedReader != null) {
                    try {
                        bufferedReader.close();
                    } catch (Exception unused4) {
                    }
                }
                throw th;
            }
        } catch (Exception unused5) {
        } catch (Throwable th2) {
            th = th2;
        }
    }

    public static String b() throws Throwable {
        try {
            String strA = a(" pidof adbd ");
            if (TextUtils.isEmpty(strA)) {
                return null;
            }
            return strA.length() > 10 ? strA.substring(0, 10) : strA;
        } catch (Exception unused) {
            return null;
        }
    }

    private static String b(String str) {
        try {
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(Runtime.getRuntime().exec(str).getInputStream()));
            ArrayList arrayList = new ArrayList();
            do {
                String line = bufferedReader.readLine();
                if (line == null) {
                    break;
                }
                if (line.contains("TCP") && !line.contains(":443")) {
                    arrayList.add(line);
                }
            } while (arrayList.size() <= 5);
            bufferedReader.close();
            if (arrayList.size() > 0) {
                return arrayList.toString();
            }
            return null;
        } catch (Exception unused) {
            return null;
        }
    }

    /* JADX WARN: Can't wrap try/catch for region: R(10:0|2|(2:40|3)|(6:42|4|(3:6|(1:51)(3:47|12|52)|48)(1:44)|34|17|29)|13|(3:36|15|16)|34|17|29|(1:(0))) */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Set c() throws Throwable {
        BufferedReader bufferedReader;
        Throwable th;
        HashSet hashSet;
        try {
            hashSet = new HashSet();
            bufferedReader = new BufferedReader(new InputStreamReader(Runtime.getRuntime().exec(" netstat -nap ").getInputStream()));
        } catch (Exception unused) {
            bufferedReader = null;
        } catch (Throwable th2) {
            bufferedReader = null;
            th = th2;
        }
        while (true) {
            try {
                String line = bufferedReader.readLine();
                if (line == null) {
                    break;
                }
                if (line.contains("tcp") && line.contains("ESTABLISHED") && line.contains(":5555 ")) {
                    hashSet.add(line);
                }
            } catch (Exception unused2) {
                if (bufferedReader != null) {
                }
                return null;
            } catch (Throwable th3) {
                th = th3;
                if (bufferedReader != null) {
                    try {
                        bufferedReader.close();
                    } catch (Exception unused3) {
                    }
                }
                throw th;
            }
            bufferedReader.close();
            return null;
        }
        if (hashSet.size() > 0) {
            try {
                bufferedReader.close();
            } catch (Exception unused4) {
            }
            return hashSet;
        }
        bufferedReader.close();
        return null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:41:?, code lost:
    
        return 1;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static int d() throws Throwable {
        String line;
        BufferedReader bufferedReader = null;
        try {
            BufferedReader bufferedReader2 = new BufferedReader(new InputStreamReader(Runtime.getRuntime().exec(" netstat -apn | grep scrcpy ").getInputStream()));
            do {
                try {
                    line = bufferedReader2.readLine();
                    if (line == null) {
                        try {
                            bufferedReader2.close();
                        } catch (Exception unused) {
                        }
                        return 0;
                    }
                } catch (Exception unused2) {
                    bufferedReader = bufferedReader2;
                    if (bufferedReader != null) {
                        try {
                            bufferedReader.close();
                        } catch (Exception unused3) {
                        }
                    }
                    return 0;
                } catch (Throwable th) {
                    th = th;
                    bufferedReader = bufferedReader2;
                    if (bufferedReader != null) {
                        try {
                            bufferedReader.close();
                        } catch (Exception unused4) {
                        }
                    }
                    throw th;
                }
            } while (!line.contains("scrcpy"));
            bufferedReader2.close();
            return 1;
        } catch (Exception unused5) {
        } catch (Throwable th2) {
            th = th2;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x005c A[Catch: all -> 0x008b, Exception -> 0x0096, TryCatch #8 {Exception -> 0x0096, all -> 0x008b, blocks: (B:4:0x001b, B:5:0x0020, B:7:0x0026, B:10:0x002e, B:12:0x0034, B:14:0x003a, B:15:0x003e, B:19:0x004e, B:22:0x0058, B:23:0x005c, B:26:0x0067, B:29:0x0072, B:16:0x0043, B:18:0x0049, B:32:0x007d), top: B:61:0x001b }] */
    /* JADX WARN: Removed duplicated region for block: B:68:0x0056 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static JSONObject e() throws Throwable {
        BufferedReader bufferedReader;
        int iIndexOf;
        String str;
        BufferedReader bufferedReader2 = null;
        try {
            bufferedReader = new BufferedReader(new InputStreamReader(Runtime.getRuntime().exec(" netstat -an ").getInputStream()));
            try {
                JSONObject jSONObject = new JSONObject();
                while (true) {
                    String line = bufferedReader.readLine();
                    if (line == null) {
                        break;
                    }
                    if (line.contains("/") || line.contains("@")) {
                        if (line.contains("/")) {
                            iIndexOf = line.indexOf("/");
                        } else {
                            if (line.contains("@")) {
                                iIndexOf = line.indexOf("@");
                            }
                            if (!line.contains("/ddy")) {
                                str = "0";
                            } else if (line.contains("scrcpy")) {
                                str = "1";
                            } else if (line.contains("supersu")) {
                                str = "2";
                            } else if (line.contains("/adbd")) {
                                str = "3";
                            }
                            jSONObject.put(str, line);
                        }
                        line = line.substring(iIndexOf);
                        if (!line.contains("/ddy")) {
                        }
                        jSONObject.put(str, line);
                    }
                }
                if (jSONObject.length() > 0) {
                    try {
                        bufferedReader.close();
                    } catch (Exception unused) {
                    }
                    return jSONObject;
                }
                try {
                    bufferedReader.close();
                } catch (Exception unused2) {
                }
                return null;
            } catch (Exception unused3) {
                if (bufferedReader != null) {
                    try {
                        bufferedReader.close();
                    } catch (Exception unused4) {
                    }
                }
                return null;
            } catch (Throwable th) {
                th = th;
                bufferedReader2 = bufferedReader;
                if (bufferedReader2 != null) {
                    try {
                        bufferedReader2.close();
                    } catch (Exception unused5) {
                    }
                }
                throw th;
            }
        } catch (Exception unused6) {
            bufferedReader = null;
        } catch (Throwable th2) {
            th = th2;
        }
    }
}
