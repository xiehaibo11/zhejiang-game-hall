package com.kwad.sdk.utils;

import android.content.Context;
import android.os.Build;
import android.os.Environment;
import android.os.Process;
import android.support.v4.os.EnvironmentCompat;
import android.text.TextUtils;
import android.util.Log;
import com.kwad.sdk.service.ServiceProvider;
import com.qihoo360.replugin.RePlugin;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.HashSet;

public final class n {
    public static com.kwad.sdk.k.a.d aIg;

    static class a extends com.kwad.sdk.k.a.a {
        public a() {
            HW();
        }

        private void HW() {
            this.aGk = new ArrayList();
            this.aGk.add(new com.kwad.sdk.k.a.a(this.enabled) {
                @Override
                public final boolean bB(Context context) {
                    int i = (Build.PRODUCT.contains("sdk") || Build.PRODUCT.contains("Andy") || Build.PRODUCT.contains("ttVM_Hdragon") || Build.PRODUCT.contains("google_sdk") || Build.PRODUCT.contains("Droid4X") || Build.PRODUCT.contains("nox") || Build.PRODUCT.contains("sdk_x86") || Build.PRODUCT.contains("sdk_google") || Build.PRODUCT.contains("vbox86p") || Build.PRODUCT.contains("aries")) ? 1 : 0;
                    if (Build.MANUFACTURER.equals(EnvironmentCompat.MEDIA_UNKNOWN) || Build.MANUFACTURER.equals("Genymotion") || Build.MANUFACTURER.contains("Andy") || Build.MANUFACTURER.contains("MIT") || Build.MANUFACTURER.contains("nox") || Build.MANUFACTURER.contains("TiantianVM")) {
                        i++;
                    }
                    if (Build.BRAND.equals("generic") || Build.BRAND.equals("generic_x86") || Build.BRAND.equals("TTVM") || Build.BRAND.contains("Andy")) {
                        i++;
                    }
                    if (Build.DEVICE.contains("generic") || Build.DEVICE.contains("generic_x86") || Build.DEVICE.contains("Andy") || Build.DEVICE.contains("ttVM_Hdragon") || Build.DEVICE.contains("Droid4X") || Build.DEVICE.contains("nox") || Build.DEVICE.contains("generic_x86_64") || Build.DEVICE.contains("vbox86p") || Build.DEVICE.contains("aries")) {
                        i++;
                    }
                    if (Build.MODEL.equals("sdk") || Build.MODEL.contains("Emulator") || Build.MODEL.equals("google_sdk") || Build.MODEL.contains("Droid4X") || Build.MODEL.contains("TiantianVM") || Build.MODEL.contains("Andy") || Build.MODEL.equals("Android SDK built for x86_64") || Build.MODEL.equals("Android SDK built for x86")) {
                        i++;
                    }
                    if (Build.HARDWARE.equals("goldfish") || Build.HARDWARE.equals("vbox86") || Build.HARDWARE.contains("nox") || Build.HARDWARE.contains("ttVM_x86")) {
                        i++;
                    }
                    if (Build.FINGERPRINT.contains("generic/sdk/generic") || Build.FINGERPRINT.contains("generic_x86/sdk_x86/generic_x86") || Build.FINGERPRINT.contains("Andy") || Build.FINGERPRINT.contains("ttVM_Hdragon") || Build.FINGERPRINT.contains("generic_x86_64") || Build.FINGERPRINT.contains("generic/google_sdk/generic") || Build.FINGERPRINT.contains("vbox86p") || Build.FINGERPRINT.contains("generic/vbox86p/vbox86p")) {
                        i++;
                    }
                    try {
                        if (new File(Environment.getExternalStorageDirectory().toString() + File.separatorChar + "windows" + File.separatorChar + "BstSharedFolder").exists()) {
                            i += 10;
                        }
                    } catch (Exception unused) {
                    }
                    return i > 3;
                }
            });
            this.aGk.add(new com.kwad.sdk.k.a.a(this.enabled) {
                @Override
                public final boolean bB(Context context) {
                    return "1".equals(bd.get("ro.kernel.qemu"));
                }
            });
        }
    }

    static class b extends com.kwad.sdk.k.a.a {
    }

    static class c extends com.kwad.sdk.k.a.a {
    }

    static class d extends com.kwad.sdk.k.a.a {
        public d() {
            HW();
        }

        private void HW() {
            this.aGk = new ArrayList();
            this.aGk.add(new com.kwad.sdk.k.a.a(this.enabled) {
                @Override
                public final boolean bB(Context context) {
                    return new File("/system/app/Superuser.apk").exists();
                }
            });
            this.aGk.add(new com.kwad.sdk.k.a.a(this.enabled) {
                @Override
                public final boolean bB(Context context) {
                    String[] strArr = {"/system/bin/", "/system/xbin/", "/system/sbin/", "/sbin/", "/vendor/bin/"};
                    for (int i = 0; i < 5; i++) {
                        if (new File(strArr[i] + "su").exists()) {
                            return true;
                        }
                    }
                    return false;
                }
            });
            this.aGk.add(new com.kwad.sdk.k.a.a(this.enabled) {
                @Override
                public final boolean bB(Context context) {
                    return !TextUtils.isEmpty(n.g(new String[]{"/system/xbin/which", "su"}));
                }
            });
            this.aGk.add(new com.kwad.sdk.k.a.a(this.enabled) {
                @Override
                public final boolean bB(Context context) {
                    Charset charsetForName = Charset.forName("UTF-8");
                    File file = new File("/data/su_test");
                    try {
                        q.a(file, "ok", charsetForName, false);
                        return q.a(file, charsetForName).equals("ok");
                    } catch (Throwable unused) {
                        return false;
                    }
                }
            });
        }
    }

    static class e extends com.kwad.sdk.k.a.a {
        public e() {
            HW();
        }

        private void HW() {
            this.aGk = new ArrayList();
            this.aGk.add(new com.kwad.sdk.k.a.a(this.enabled) {
                @Override
                public final boolean bB(Context context) {
                    return ak.ak(context, "de.robv.android.xposed.installer") || ak.ak(context, "com.saurik.substrate");
                }
            });
            this.aGk.add(new com.kwad.sdk.k.a.a(this.enabled) {
                @Override
                public final boolean bB(Context context) {
                    try {
                        throw new Exception("empty");
                    } catch (Exception e) {
                        boolean z = false;
                        int i = 0;
                        for (StackTraceElement stackTraceElement : e.getStackTrace()) {
                            String className = stackTraceElement.getClassName();
                            String methodName = stackTraceElement.getMethodName();
                            if (className.equals("com.android.internal.os.ZygoteInit") && (i = i + 1) == 2) {
                                z = true;
                            }
                            if (className.equals("com.saurik.substrate.MS$2") && methodName.equals("invoked")) {
                                Log.wtf("HookDetection", "A method on the stack trace has been hooked using Substrate.");
                                z = true;
                            }
                            if (className.equals(com.kuaishou.weapon.p0.an.b) && methodName.equals(RePlugin.PLUGIN_NAME_MAIN)) {
                                z = true;
                            }
                            if (className.equals(com.kuaishou.weapon.p0.an.b) && methodName.equals("handleHookedMethod")) {
                                z = true;
                            }
                        }
                        return z;
                    }
                }
            });
            this.aGk.add(new com.kwad.sdk.k.a.a(this.enabled) {
                @Override
                public final boolean bB(Context context) throws Throwable {
                    BufferedReader bufferedReader;
                    FileReader fileReader;
                    Throwable th;
                    HashSet<String> hashSet;
                    BufferedReader bufferedReader2 = null;
                    boolean z = false;
                    try {
                        hashSet = new HashSet();
                        fileReader = new FileReader("/proc/" + Process.myPid() + "/maps");
                    } catch (Exception unused) {
                        fileReader = null;
                    } catch (Throwable th2) {
                        th = th2;
                        bufferedReader = null;
                        fileReader = null;
                    }
                    try {
                        bufferedReader = new BufferedReader(fileReader);
                    } catch (Exception unused2) {
                    } catch (Throwable th3) {
                        th = th3;
                        bufferedReader = null;
                        th = th;
                        com.kwad.sdk.crash.utils.b.closeQuietly(bufferedReader);
                        com.kwad.sdk.crash.utils.b.closeQuietly(fileReader);
                        throw th;
                    }
                    while (true) {
                        try {
                            String line = bufferedReader.readLine();
                            if (line == null) {
                                break;
                            }
                            if (line.endsWith(".so") || line.endsWith(".jar")) {
                                hashSet.add(line.substring(line.lastIndexOf(" ") + 1));
                            }
                        } catch (Exception unused3) {
                            bufferedReader2 = bufferedReader;
                            com.kwad.sdk.crash.utils.b.closeQuietly(bufferedReader2);
                        } catch (Throwable th4) {
                            th = th4;
                            com.kwad.sdk.crash.utils.b.closeQuietly(bufferedReader);
                            com.kwad.sdk.crash.utils.b.closeQuietly(fileReader);
                            throw th;
                        }
                        com.kwad.sdk.crash.utils.b.closeQuietly(fileReader);
                        return z;
                    }
                    for (String str : hashSet) {
                        if (str.contains("com.saurik.substrate")) {
                            Log.wtf("HookDetection", "Substrate shared object found: " + str);
                            z = true;
                        }
                        if (str.contains("XposedBridge.jar")) {
                            Log.wtf("HookDetection", "Xposed JAR found: " + str);
                            z = true;
                        }
                    }
                    com.kwad.sdk.crash.utils.b.closeQuietly(bufferedReader);
                    com.kwad.sdk.crash.utils.b.closeQuietly(fileReader);
                    return z;
                }
            });
        }
    }

    public static synchronized com.kwad.sdk.k.a.d HV() {
        if (!((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).xx()) {
            return null;
        }
        if (aIg != null) {
            return aIg;
        }
        Context applicationContext = ServiceProvider.getContext().getApplicationContext();
        com.kwad.sdk.k.a.d dVar = new com.kwad.sdk.k.a.d(applicationContext);
        boolean zBA = new d().bA(applicationContext);
        boolean zBA2 = new e().bA(applicationContext);
        boolean zBA3 = new b().bA(applicationContext);
        boolean zBA4 = new a().bA(applicationContext);
        boolean zBA5 = new c().bA(applicationContext);
        dVar.bx(zBA);
        dVar.by(zBA2);
        dVar.bz(zBA3);
        dVar.bB(zBA4);
        dVar.bC(zBA5);
        aIg = dVar;
        return dVar;
    }

    public static String g(String[] strArr) {
        try {
            return com.kwad.sdk.crash.utils.h.c(Runtime.getRuntime().exec(strArr).getInputStream());
        } catch (Exception unused) {
            return null;
        }
    }
}
