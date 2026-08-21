package com.loc;

import com.loc.bl;
import java.io.File;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: compiled from: LogEngine.java */
/* JADX INFO: loaded from: classes2.dex */
public final class bw {
    public static int a(bv bvVar) {
        bl blVar = null;
        try {
            try {
                if (bvVar.f.c()) {
                    bvVar.f.a(true);
                    bl blVarA = bl.a(new File(bvVar.f2892a), bvVar.b);
                    try {
                        ArrayList arrayList = new ArrayList();
                        byte[] bArrA = a(blVarA, bvVar, arrayList);
                        if (bArrA != null && bArrA.length != 0) {
                            au auVar = new au(bArrA, bvVar.c);
                            bo.a();
                            JSONObject jSONObject = new JSONObject(new String(bo.a(auVar).f2891a));
                            if (jSONObject.has("code") && jSONObject.getInt("code") == 1) {
                                if (bvVar.f != null && bArrA != null) {
                                    bvVar.f.a(bArrA.length);
                                }
                                if (bvVar.f.b() < Integer.MAX_VALUE) {
                                    a(blVarA, arrayList);
                                } else {
                                    try {
                                        blVarA.d();
                                    } catch (Throwable th) {
                                        av.b(th, "ofm", "dlo");
                                    }
                                }
                                return bArrA.length;
                            }
                            blVar = blVarA;
                        }
                        try {
                            blVarA.close();
                        } catch (Throwable th2) {
                            th2.printStackTrace();
                        }
                        return -1;
                    } catch (Throwable th3) {
                        th = th3;
                        blVar = blVarA;
                        try {
                            av.b(th, "leg", "uts");
                            if (blVar != null) {
                                blVar.close();
                            }
                            return -1;
                        } catch (Throwable th4) {
                            if (blVar != null) {
                                try {
                                    blVar.close();
                                } catch (Throwable th5) {
                                    th5.printStackTrace();
                                }
                            }
                            throw th4;
                        }
                    }
                }
            } catch (Throwable th6) {
                th6.printStackTrace();
            }
        } catch (Throwable th7) {
            th = th7;
        }
        if (blVar != null) {
            blVar.close();
        }
        return -1;
    }

    private static void a(bl blVar, List<String> list) {
        if (blVar != null) {
            try {
                Iterator<String> it = list.iterator();
                while (it.hasNext()) {
                    blVar.c(it.next());
                }
                blVar.close();
            } catch (Throwable th) {
                av.b(th, "ofm", "dlo");
            }
        }
    }

    public static void a(String str, byte[] bArr, bv bvVar) throws Throwable {
        bl blVarA;
        OutputStream outputStreamA = null;
        try {
            if (a(bvVar.f2892a, str)) {
                return;
            }
            File file = new File(bvVar.f2892a);
            if (!file.exists()) {
                file.mkdirs();
            }
            blVarA = bl.a(file, bvVar.b);
            try {
                blVarA.a(bvVar.d);
                byte[] bArrB = bvVar.e.b(bArr);
                bl.a aVarB = blVarA.b(str);
                outputStreamA = aVarB.a();
                outputStreamA.write(bArrB);
                aVarB.b();
                blVarA.c();
                if (outputStreamA != null) {
                    try {
                        outputStreamA.close();
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                }
                try {
                    blVarA.close();
                    return;
                } catch (Throwable th2) {
                    th2.printStackTrace();
                    return;
                }
            } catch (Throwable th3) {
                th = th3;
            }
        } catch (Throwable th4) {
            th = th4;
            blVarA = null;
        }
        if (outputStreamA != null) {
            try {
                outputStreamA.close();
            } catch (Throwable th5) {
                th5.printStackTrace();
            }
        }
        if (blVarA == null) {
            throw th;
        }
        try {
            blVarA.close();
            throw th;
        } catch (Throwable th6) {
            th6.printStackTrace();
            throw th;
        }
    }

    private static boolean a(String str, String str2) {
        try {
            return new File(str, str2 + ".0").exists();
        } catch (Throwable th) {
            av.b(th, "leg", "fet");
            return false;
        }
    }

    private static byte[] a(bl blVar, bv bvVar, List<String> list) {
        try {
            File fileB = blVar.b();
            if (fileB != null && fileB.exists()) {
                int length = 0;
                for (String str : fileB.list()) {
                    if (str.contains(".0")) {
                        String str2 = str.split("\\.")[0];
                        byte[] bArrA = cb.a(blVar, str2);
                        length += bArrA.length;
                        list.add(str2);
                        if (length > bvVar.f.b()) {
                            break;
                        }
                        bvVar.g.b(bArrA);
                    }
                }
                if (length <= 0) {
                    return null;
                }
                return bvVar.g.a();
            }
        } catch (Throwable th) {
            av.b(th, "leg", "gCo");
        }
        return new byte[0];
    }
}
