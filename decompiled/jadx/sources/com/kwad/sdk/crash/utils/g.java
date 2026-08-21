package com.kwad.sdk.crash.utils;

import android.content.Context;
import android.os.Build;
import android.os.Debug;
import android.os.Environment;
import android.os.ParcelFileDescriptor;
import android.os.Process;
import android.system.Os;
import android.text.TextUtils;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.kwad.sdk.crash.model.message.DiskInfo;
import com.kwad.sdk.crash.model.message.ExceptionMessage;
import com.kwad.sdk.crash.model.message.JavaExceptionMessage;
import com.kwad.sdk.crash.model.message.MemoryInfo;
import com.kwad.sdk.crash.model.message.NativeExceptionMessage;
import com.kwad.sdk.crash.model.message.ThreadInfo;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.AbiUtil;
import com.kwad.sdk.utils.SystemUtil;
import com.kwad.sdk.utils.ao;
import com.kwad.sdk.utils.q;
import com.kwad.sdk.utils.s;
import com.qihoo360.loader2.BuildCompat;
import com.qihoo360.replugin.RePlugin;
import com.sigmob.sdk.base.mta.PointCategory;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.Closeable;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.io.StringWriter;
import java.math.BigDecimal;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.regex.Matcher;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class g {
    private static final File aBS = new File("/proc/self/fd");
    private static final File aBT = new File("/proc/self/task");

    public static void E(File file) throws Throwable {
        try {
            d.a(SystemUtil.de(21) ? new String[]{"logcat", "-v", "threadtime", "-b", RePlugin.PLUGIN_NAME_MAIN, "-b", "system", "-b", "events", "-b", PointCategory.CRASH, "-d", "-f", file.getPath()} : new String[]{"logcat", "-v", "threadtime", "-b", RePlugin.PLUGIN_NAME_MAIN, "-b", "system", "-b", "events", "-d", "-f", file.getPath()}, 0);
        } catch (IOException e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
    }

    public static void F(File file) {
        if (file == null) {
            return;
        }
        try {
            q.T(file);
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
    }

    private static int Fn() {
        File[] fileArrListFiles;
        ao.checkNotNull(aBS);
        if (aBS.exists() && aBS.isDirectory() && (fileArrListFiles = aBS.listFiles()) != null) {
            return fileArrListFiles.length;
        }
        return 0;
    }

    public static void G(File file) throws Throwable {
        BufferedWriter bufferedWriter;
        try {
            q.P(file);
            BufferedWriter bufferedWriter2 = null;
            try {
                try {
                    bufferedWriter = new BufferedWriter(new FileWriter(file, true));
                } catch (Throwable th) {
                    th = th;
                }
            } catch (FileNotFoundException e) {
                e = e;
            } catch (IOException e2) {
                e = e2;
            }
            try {
                for (Map.Entry<Thread, StackTraceElement[]> entry : Thread.getAllStackTraces().entrySet()) {
                    String strB = b(entry.getValue());
                    if (strB.isEmpty()) {
                        strB = "(no managed stack frames)\n";
                    }
                    bufferedWriter.write(entry.getKey().getName());
                    bufferedWriter.newLine();
                    bufferedWriter.write(strB);
                    bufferedWriter.newLine();
                }
                b.closeQuietly(bufferedWriter);
            } catch (FileNotFoundException e3) {
                e = e3;
                bufferedWriter2 = bufferedWriter;
                com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                b.closeQuietly(bufferedWriter2);
            } catch (IOException e4) {
                e = e4;
                bufferedWriter2 = bufferedWriter;
                com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                b.closeQuietly(bufferedWriter2);
            } catch (Throwable th2) {
                th = th2;
                bufferedWriter2 = bufferedWriter;
                b.closeQuietly(bufferedWriter2);
                throw th;
            }
        } catch (IOException e5) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e5);
        }
    }

    public static void H(File file) {
        try {
            Debug.MemoryInfo memoryInfo = new Debug.MemoryInfo();
            Debug.getMemoryInfo(memoryInfo);
            Object objF = s.f(s.a("android.app.ActivityThread", "currentActivityThread", new Object[0]), "mAppThread");
            Object objOpen = ParcelFileDescriptor.open(file, 1006632960);
            if (!SystemUtil.de(26)) {
                objOpen = ((ParcelFileDescriptor) objOpen).getFileDescriptor();
            }
            if (SystemUtil.de(24)) {
                s.f(objF, "dumpMemInfo", objOpen, memoryInfo, Boolean.FALSE, Boolean.TRUE, Boolean.TRUE, Boolean.FALSE, Boolean.FALSE, new String[0]);
            } else if (SystemUtil.de(23)) {
                s.f(objF, "dumpMemInfo", objOpen, memoryInfo, Boolean.FALSE, Boolean.TRUE, Boolean.TRUE, Boolean.FALSE, new String[0]);
            } else if (SystemUtil.de(19)) {
                s.f(objF, "dumpMemInfo", objOpen, memoryInfo, Boolean.FALSE, Boolean.TRUE, Boolean.TRUE, new String[0]);
            }
            Object objOpen2 = ParcelFileDescriptor.open(file, 973078528);
            if (!SystemUtil.de(26)) {
                objOpen2 = ((ParcelFileDescriptor) objOpen2).getFileDescriptor();
            }
            s.f(objF, "dumpGfxInfo", objOpen2, new String[]{SystemUtil.getProcessName(com.kwad.sdk.crash.e.EC().getContext())});
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
    }

    private static String a(StackTraceElement[] stackTraceElementArr, int i) {
        if (stackTraceElementArr == null) {
            return "";
        }
        StringBuilder sb = new StringBuilder();
        for (StackTraceElement stackTraceElement : stackTraceElementArr) {
            sb.append("at ");
            sb.append(stackTraceElement);
            sb.append('\n');
        }
        return sb.substring(0);
    }

    public static void a(ExceptionMessage exceptionMessage, int i) {
        com.kwad.sdk.crash.h hVarEI = com.kwad.sdk.crash.e.EC().EI();
        if (hVarEI == null) {
            com.kwad.sdk.core.e.c.d(RemoteMessageConst.Notification.TAG, "getter is null!");
        } else {
            exceptionMessage.mCustomMsg = hVarEI.mJ().toString();
        }
    }

    private static void a(ExceptionMessage exceptionMessage, Context context) {
        if (exceptionMessage instanceof JavaExceptionMessage) {
            if ("Unknown".equals(exceptionMessage.mThreadName)) {
                exceptionMessage.mThreadName = Thread.currentThread().getName();
            }
            exceptionMessage.mTid = Process.myTid();
        }
        if (context != null) {
            String processName = SystemUtil.getProcessName(context);
            if (!TextUtils.isEmpty(processName)) {
                exceptionMessage.mProcessName = processName;
            }
        }
        exceptionMessage.mPid = Process.myPid();
        exceptionMessage.mCurrentTimeStamp = System.currentTimeMillis();
        exceptionMessage.mUsageTimeMills = com.kwad.sdk.crash.e.EC().EJ();
        exceptionMessage.mAbi = AbiUtil.isArm64(context) ? BuildCompat.ARM64 : BuildCompat.ARM;
        exceptionMessage.mVersionConflict = TextUtils.equals(exceptionMessage.mVersionCode, ExceptionMessage.getSdkCrashVersionName("1.0", com.kwad.sdk.crash.e.EC().EG()));
        exceptionMessage.mBuildConfigInfo = by(context);
        e(exceptionMessage);
        b(exceptionMessage, context);
        exceptionMessage.mTaskId = bx(context);
    }

    private static void a(ExceptionMessage exceptionMessage, DiskInfo diskInfo) {
        File externalStorageDirectory;
        try {
            String path = Environment.getDataDirectory().getPath();
            diskInfo.mDataTotalGB = ak(h.getTotalBytes(path));
            if (!((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).R(1024L)) {
                diskInfo.mDataAvailableGB = ak(h.getAvailableBytes(path));
            }
            if ("mounted".equals(Environment.getExternalStorageState()) && (externalStorageDirectory = Environment.getExternalStorageDirectory()) != null) {
                diskInfo.mExternalStorageTotalGB = ak(h.getTotalBytes(externalStorageDirectory.getPath()));
                if (!((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).R(1024L)) {
                    diskInfo.mExternalStorageAvailableGB = ak(h.getAvailableBytes(externalStorageDirectory.getPath()));
                }
            }
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
        exceptionMessage.mDiskInfo = diskInfo.toJson().toString();
    }

    private static void a(ExceptionMessage exceptionMessage, MemoryInfo memoryInfo) {
        if (memoryInfo.mPssMB * 2 > memoryInfo.mTotalMB || (!AbiUtil.isArm64(((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext()) && memoryInfo.mVssMB > 3686.4d)) {
            exceptionMessage.mCrashType = exceptionMessage.getTypeHeapOOM();
        }
    }

    private static void a(ExceptionMessage exceptionMessage, MemoryInfo memoryInfo, Context context) throws Throwable {
        List<String> list;
        String canonicalPath;
        SystemUtil.a aVarJF = SystemUtil.JF();
        aVarJF.aJK = Runtime.getRuntime().totalMemory() - Runtime.getRuntime().freeMemory();
        aVarJF.aJG = SystemUtil.JE();
        aVarJF.aJJ = Debug.getPss();
        memoryInfo.mTotalMB = (int) (aVarJF.aJG / 1048576);
        memoryInfo.mJavaHeapLimitMB = (int) (com.kwad.sdk.crash.d.azO / 1048576.0d);
        memoryInfo.mJavaHeapMB = (int) (aVarJF.aJK / 1048576);
        memoryInfo.mVssMB = (int) (aVarJF.aJH / 1024);
        memoryInfo.mRssMB = (int) (aVarJF.aJI / 1024);
        memoryInfo.mPssMB = (int) (aVarJF.aJJ / 1024);
        memoryInfo.mThreadsCount = aVarJF.mThreadsCount;
        memoryInfo.mFdCount = Fn();
        if (context != null) {
            memoryInfo.mAvailableMB = (int) (SystemUtil.cY(context) / 1048576);
        }
        exceptionMessage.mFdOverflow = "False";
        if (memoryInfo.mFdCount > 800) {
            exceptionMessage.mCrashType = exceptionMessage.getTypeFdOOM();
            exceptionMessage.mFdOverflow = "True";
            File[] fileArrListFiles = aBS.listFiles();
            if (fileArrListFiles != null && fileArrListFiles.length > 0) {
                for (File file : fileArrListFiles) {
                    try {
                        if (Build.VERSION.SDK_INT >= 21) {
                            list = memoryInfo.mFds;
                            canonicalPath = Os.readlink(file.getPath());
                        } else {
                            list = memoryInfo.mFds;
                            canonicalPath = file.getCanonicalPath();
                        }
                        list.add(canonicalPath);
                    } catch (Exception e) {
                        com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                    }
                }
                Collections.sort(memoryInfo.mFds);
            }
        }
        exceptionMessage.mThreadOverflow = "False";
        if (aVarJF.mThreadsCount > 400) {
            exceptionMessage.mCrashType = exceptionMessage.getTypeThreadOOM();
            exceptionMessage.mThreadOverflow = "True";
            a(memoryInfo);
            Collections.sort(memoryInfo.mAllThreads, new Comparator<ThreadInfo>() { // from class: com.kwad.sdk.crash.utils.g.1
                private static int a(ThreadInfo threadInfo, ThreadInfo threadInfo2) {
                    return threadInfo.mName.compareTo(threadInfo2.mName);
                }

                @Override // java.util.Comparator
                public final /* synthetic */ int compare(ThreadInfo threadInfo, ThreadInfo threadInfo2) {
                    return a(threadInfo, threadInfo2);
                }
            });
        }
        exceptionMessage.mMemoryInfo = memoryInfo.toJson().toString();
    }

    private static void a(MemoryInfo memoryInfo) {
        File[] fileArrListFiles = aBT.listFiles();
        if (fileArrListFiles == null) {
            return;
        }
        for (File file : fileArrListFiles) {
            ThreadInfo threadInfo = new ThreadInfo();
            try {
                threadInfo.mName = h.I(new File(file, "comm"));
            } catch (IOException e) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            }
            if (!TextUtils.isEmpty(threadInfo.mName)) {
                threadInfo.mName = ag(threadInfo.mName, "\n");
                memoryInfo.mAllThreads.add(threadInfo);
            }
        }
    }

    public static void a(com.kwad.sdk.crash.report.e eVar, String str, File file) throws Throwable {
        String line;
        try {
            q.P(file);
            BufferedReader bufferedReader = null;
            try {
                try {
                    BufferedReader bufferedReader2 = new BufferedReader(new FileReader(file));
                    if (eVar != null) {
                        do {
                            try {
                                line = bufferedReader2.readLine();
                                if (line == null) {
                                    break;
                                }
                            } catch (FileNotFoundException e) {
                                e = e;
                                bufferedReader = bufferedReader2;
                                com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                                b.closeQuietly(bufferedReader);
                                return;
                            } catch (IOException e2) {
                                e = e2;
                                bufferedReader = bufferedReader2;
                                com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                                b.closeQuietly(bufferedReader);
                                return;
                            } catch (Throwable th) {
                                th = th;
                                bufferedReader = bufferedReader2;
                                b.closeQuietly(bufferedReader);
                                throw th;
                            }
                        } while (!line.isEmpty());
                    }
                    b.closeQuietly(bufferedReader2);
                } catch (Throwable th2) {
                    th = th2;
                }
            } catch (FileNotFoundException e3) {
                e = e3;
            } catch (IOException e4) {
                e = e4;
            }
        } catch (IOException e5) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e5);
        }
    }

    public static void a(File file, CharSequence charSequence) {
        a(file, charSequence, Charset.defaultCharset(), false);
    }

    private static void a(File file, CharSequence charSequence, Charset charset, boolean z) {
        a(file, charSequence == null ? null : charSequence.toString(), charset, z);
    }

    public static void a(File file, CharSequence charSequence, boolean z) {
        a(file, charSequence, Charset.defaultCharset(), true);
    }

    private static void a(File file, String str, Charset charset, boolean z) {
        FileOutputStream fileOutputStreamA = null;
        try {
            fileOutputStreamA = q.a(file, z);
            h.a(str, fileOutputStreamA, charset);
            a(fileOutputStreamA);
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        } finally {
            b.closeQuietly(fileOutputStreamA);
        }
    }

    private static void a(Throwable th, ExceptionMessage exceptionMessage) {
        if (o(th) && exceptionMessage.mCrashType.equals(exceptionMessage.getTypeCommon())) {
            exceptionMessage.mCrashType = exceptionMessage.getTypeHeapOOM();
        }
    }

    private static boolean a(FileOutputStream fileOutputStream) {
        if (fileOutputStream == null) {
            return true;
        }
        try {
            fileOutputStream.getFD().sync();
            return true;
        } catch (IOException e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            return false;
        }
    }

    private static String ag(String str, String str2) {
        ao.fE(str);
        return !str.endsWith(str2) ? str : str.substring(0, str.lastIndexOf(str2));
    }

    private static double ak(long j) {
        return BigDecimal.valueOf((j >> 20) / 1024.0f).setScale(2, 4).floatValue();
    }

    private static String b(StackTraceElement[] stackTraceElementArr) {
        return a(stackTraceElementArr, 0);
    }

    private static void b(ExceptionMessage exceptionMessage, Context context) {
        String absolutePath;
        String packageName;
        if (context == null) {
            return;
        }
        File parentFile = context.getCacheDir().getParentFile().getParentFile().getParentFile();
        try {
            absolutePath = parentFile.getCanonicalPath();
        } catch (IOException e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            absolutePath = parentFile.getAbsolutePath();
        }
        if (com.kwad.sdk.crash.d.azP.matcher(absolutePath).matches() || com.kwad.sdk.crash.d.azQ.matcher(absolutePath).matches()) {
            packageName = context.getPackageName();
        } else {
            Matcher matcher = com.kwad.sdk.crash.d.azR.matcher(absolutePath);
            Matcher matcher2 = com.kwad.sdk.crash.d.azS.matcher(absolutePath);
            if (matcher.matches()) {
                packageName = matcher.group(1);
            } else {
                if (!matcher2.matches()) {
                    exceptionMessage.mVirtualApp = absolutePath;
                    return;
                }
                packageName = matcher2.group(1);
            }
        }
        exceptionMessage.mVirtualApp = packageName;
    }

    private static void b(Throwable th, ExceptionMessage exceptionMessage) throws Throwable {
        String strP = p(th);
        if (th instanceof StackOverflowError) {
            strP = eU(strP);
        }
        exceptionMessage.mCrashDetail = strP.replaceAll("[\n\t]", "#");
    }

    public static void b(Throwable th, ExceptionMessage exceptionMessage, Context context) throws Throwable {
        if (th != null) {
            b(th, exceptionMessage);
        }
        a(exceptionMessage, context);
        MemoryInfo memoryInfo = new MemoryInfo();
        a(exceptionMessage, memoryInfo, context);
        a(exceptionMessage, new DiskInfo());
        if (exceptionMessage instanceof NativeExceptionMessage) {
            a(exceptionMessage, memoryInfo);
        } else if (exceptionMessage instanceof JavaExceptionMessage) {
            a(th, exceptionMessage);
        }
    }

    private static String bx(Context context) {
        InputStream inputStreamOpen = null;
        try {
            inputStreamOpen = context.getResources().getAssets().open("apk.json");
            return new JSONObject(h.d(inputStreamOpen)).getString("task_id");
        } catch (IOException e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            return "";
        } catch (JSONException e2) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e2);
            return "";
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
            return "";
        } finally {
            b.closeQuietly(inputStreamOpen);
        }
    }

    private static String by(Context context) {
        StringBuilder sb = new StringBuilder();
        try {
            sb.append("BuildConfig Version Name: " + com.kwad.sdk.crash.e.EC().getSdkVersion() + "\n");
            sb.append("PackageInfo CodePath: " + context.getPackageCodePath() + "\n");
            sb.append("PackageInfo ResPath: " + context.getPackageResourcePath() + "\n");
            sb.append("DexPath: " + bz(context) + "\n");
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
        return sb.toString();
    }

    private static String bz(Context context) {
        StringBuilder sb = new StringBuilder();
        ClassLoader classLoader = context.getClassLoader();
        if (classLoader != null) {
            String string = classLoader.toString();
            StringBuilder sb2 = new StringBuilder("ClassLoader ");
            int i = 0;
            sb2.append(0);
            sb2.append(" : ");
            sb2.append(string);
            while (true) {
                sb.append(sb2.toString());
                if (classLoader.getParent() == null) {
                    break;
                }
                classLoader = classLoader.getParent();
                i++;
                sb2 = new StringBuilder("\nClassLoader ");
                sb2.append(i);
                sb2.append(" : ");
                sb2.append(classLoader.toString());
            }
            if (string != null) {
                String[] strArrSplit = string.split("\"");
                if (strArrSplit.length >= 2) {
                    sb.append("\n====path: " + strArrSplit[1] + ", length: " + eT(strArrSplit[1]));
                }
            }
        }
        return sb.toString();
    }

    public static void d(File file, File file2) throws Throwable {
        BufferedReader bufferedReader;
        try {
            q.P(file);
            q.P(file2);
            BufferedWriter bufferedWriter = null;
            try {
                try {
                    bufferedReader = new BufferedReader(new FileReader(file));
                    try {
                        BufferedWriter bufferedWriter2 = new BufferedWriter(new FileWriter(file2, true));
                        while (true) {
                            try {
                                String line = bufferedReader.readLine();
                                if (line == null) {
                                    break;
                                }
                                bufferedWriter2.write(line);
                                bufferedWriter2.newLine();
                            } catch (FileNotFoundException e) {
                                e = e;
                                bufferedWriter = bufferedWriter2;
                                com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                                b.closeQuietly(bufferedWriter);
                            } catch (IOException e2) {
                                e = e2;
                                bufferedWriter = bufferedWriter2;
                                com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                                b.closeQuietly(bufferedWriter);
                            } catch (Throwable th) {
                                th = th;
                                bufferedWriter = bufferedWriter2;
                                b.closeQuietly(bufferedWriter);
                                b.closeQuietly(bufferedReader);
                                throw th;
                            }
                        }
                        b.closeQuietly(bufferedWriter2);
                    } catch (FileNotFoundException e3) {
                        e = e3;
                    } catch (IOException e4) {
                        e = e4;
                    }
                } catch (Throwable th2) {
                    th = th2;
                }
            } catch (FileNotFoundException e5) {
                e = e5;
                bufferedReader = null;
            } catch (IOException e6) {
                e = e6;
                bufferedReader = null;
            } catch (Throwable th3) {
                th = th3;
                bufferedReader = null;
            }
            b.closeQuietly(bufferedReader);
        } catch (IOException e7) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e7);
        }
    }

    private static void e(ExceptionMessage exceptionMessage) {
        exceptionMessage.mVirtualApp = com.kwad.sdk.crash.e.EC().EF();
        exceptionMessage.mVersionCode = com.kwad.sdk.crash.e.EC().getSdkVersion();
    }

    public static String eR(String str) {
        return str.contains(".") ? str.substring(0, str.lastIndexOf(46)) : str;
    }

    public static String eS(String str) {
        return (str.contains("(") && str.contains(")")) ? str.substring(str.lastIndexOf(40) + 1, str.lastIndexOf(41)) : str;
    }

    private static long eT(String str) {
        try {
            File file = new File(str);
            if (file.exists()) {
                return file.length();
            }
            return -1L;
        } catch (Exception unused) {
            return -1L;
        }
    }

    private static String eU(String str) {
        HashSet hashSet = new HashSet();
        for (String str2 : str.split("\n")) {
            hashSet.add(str2);
        }
        ArrayList arrayList = new ArrayList(hashSet);
        StringBuilder sb = new StringBuilder();
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            sb.append((String) it.next());
            sb.append("\n");
        }
        return sb.substring(0);
    }

    public static int getIndex(String str) {
        if (str.contains(Constants.ACCEPT_TIME_SEPARATOR_SERVER)) {
            return Integer.parseInt(str.substring(str.lastIndexOf(45)));
        }
        return -1;
    }

    private static boolean o(Throwable th) {
        if (th == null) {
            return false;
        }
        while (th.getCause() != null) {
            th = th.getCause();
        }
        return th instanceof OutOfMemoryError;
    }

    public static String p(Throwable th) throws Throwable {
        StringWriter stringWriter;
        String string = th.toString();
        Closeable closeable = null;
        StringWriter stringWriter2 = null;
        try {
            try {
                stringWriter = new StringWriter();
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Exception e) {
            e = e;
        }
        try {
            PrintWriter printWriter = new PrintWriter(stringWriter);
            f.a(th, printWriter);
            string = stringWriter.toString();
            b.closeQuietly(stringWriter);
            closeable = printWriter;
        } catch (Exception e2) {
            e = e2;
            stringWriter2 = stringWriter;
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            b.closeQuietly(stringWriter2);
            closeable = stringWriter2;
        } catch (Throwable th3) {
            th = th3;
            closeable = stringWriter;
            b.closeQuietly(closeable);
            throw th;
        }
        return string;
    }
}
