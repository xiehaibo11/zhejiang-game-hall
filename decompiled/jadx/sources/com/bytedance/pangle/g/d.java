package com.bytedance.pangle.g;

import android.content.pm.Signature;
import android.os.Build;
import com.bianfeng.afext.read.ApkUtil;
import com.bytedance.pangle.g.c;
import java.io.RandomAccessFile;
import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.security.cert.Certificate;

/* JADX INFO: loaded from: classes.dex */
public final class d {
    public static o a(String str) throws Throwable {
        int[] iArr;
        RandomAccessFile randomAccessFile = null;
        Signature[] signatureArr = null;
        try {
            try {
                RandomAccessFile randomAccessFile2 = new RandomAccessFile(str, "r");
                try {
                    try {
                        f.a(str, randomAccessFile2, -262969152, ApkUtil.APK_SIGNATURE_SCHEME_V2_BLOCK_ID);
                        try {
                            try {
                                try {
                                    m mVar = f.f1538a.get(str).get(-262969152);
                                    if (mVar == null) {
                                        throw new n("findVerifiedSigner, No APK Signature Scheme v3 signature in package");
                                    }
                                    c.C0056c c0056cA = c.a(randomAccessFile2, mVar);
                                    Signature[] signatureArrA = a(new Certificate[][]{c0056cA.f1537a});
                                    if (c0056cA.b != null) {
                                        int size = c0056cA.b.f1536a.size();
                                        Signature[] signatureArr2 = new Signature[size];
                                        iArr = new int[c0056cA.b.b.size()];
                                        for (int i = 0; i < size; i++) {
                                            signatureArr2[i] = new Signature(c0056cA.b.f1536a.get(i).getEncoded());
                                            iArr[i] = c0056cA.b.b.get(i).intValue();
                                        }
                                        signatureArr = signatureArr2;
                                    } else {
                                        iArr = null;
                                    }
                                    o oVar = new o(signatureArrA, 3, signatureArr, iArr);
                                    try {
                                        randomAccessFile2.close();
                                    } catch (Exception unused) {
                                    }
                                    return oVar;
                                } catch (Exception e) {
                                    throw new q(4, "Failed to collect certificates from " + str + " using APK Signature Scheme v2", e);
                                }
                            } catch (n unused2) {
                                o oVarA = a.a(str);
                                try {
                                    randomAccessFile2.close();
                                } catch (Exception unused3) {
                                }
                                return oVarA;
                            }
                        } catch (n unused4) {
                            m mVar2 = f.f1538a.get(str).get(ApkUtil.APK_SIGNATURE_SCHEME_V2_BLOCK_ID);
                            if (mVar2 == null) {
                                throw new n("findVerifiedSigner, No APK Signature Scheme v2 signature in package");
                            }
                            o oVar2 = new o(a(b.a(randomAccessFile2, mVar2).f1535a));
                            try {
                                randomAccessFile2.close();
                            } catch (Exception unused5) {
                            }
                            return oVar2;
                        } catch (Exception e2) {
                            throw new q(4, "Failed to collect certificates from " + str + " using APK Signature Scheme v3", e2);
                        }
                    } catch (Throwable th) {
                        th = th;
                        randomAccessFile = randomAccessFile2;
                        if (randomAccessFile != null) {
                            try {
                                randomAccessFile.close();
                            } catch (Exception unused6) {
                            }
                        }
                        throw th;
                    }
                } catch (Exception e3) {
                    throw new q(4, "Failed to collect certificates from " + str + " when findSignatureInfo at once", e3);
                }
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Exception unused7) {
            throw new q(6, "failed to read apk file, minSignatureSchemeVersion : 1, apkPath : ".concat(String.valueOf(str)));
        }
    }

    public static Signature[] a(Certificate[][] certificateArr) {
        Signature[] signatureArr = new Signature[certificateArr.length];
        for (int i = 0; i < certificateArr.length; i++) {
            if (Build.VERSION.SDK_INT >= 21 && Build.VERSION.SDK_INT <= 28) {
                Constructor constructorA = com.bytedance.pangle.b.b.a.a((Class<?>) Signature.class, (Class<?>[]) new Class[]{Certificate[].class});
                if (constructorA != null) {
                    constructorA.setAccessible(true);
                }
                if (constructorA != null && constructorA.isAccessible()) {
                    try {
                        signatureArr[i] = (Signature) constructorA.newInstance(certificateArr[i]);
                    } catch (IllegalAccessException e) {
                        e.printStackTrace();
                    } catch (InstantiationException e2) {
                        e2.printStackTrace();
                    } catch (InvocationTargetException e3) {
                        e3.printStackTrace();
                    }
                }
            } else {
                signatureArr[i] = new Signature(certificateArr[i][0].getEncoded());
            }
        }
        return signatureArr;
    }
}
