package com.kwad.sdk.crash.report;

import android.text.TextUtils;
import com.kwad.sdk.crash.model.message.ExceptionMessage;
import com.kwad.sdk.crash.model.message.MemoryInfo;
import com.kwad.sdk.crash.model.message.ThreadInfo;
import com.kwad.sdk.utils.m;
import com.kwad.sdk.utils.q;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileFilter;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CountDownLatch;
import org.json.JSONObject;

public abstract class d {
    protected String mErrorMessage = "";
    protected e mUploader;

    private void a(ExceptionMessage exceptionMessage, List<File> list, CountDownLatch countDownLatch) throws Throwable {
        com.kwad.sdk.core.e.c.d("ExceptionCollector", "compressAndUpload");
        File fileEy = this.mUploader.Ey();
        if (!fileEy.exists()) {
            fileEy.mkdir();
        }
        File file = new File(fileEy, exceptionMessage.mLogUUID + ".zip");
        StringBuilder sb = new StringBuilder("compressAndUpload zipFile=");
        sb.append(file.getPath());
        com.kwad.sdk.core.e.c.d("ExceptionCollector", sb.toString());
        if (!file.exists()) {
            try {
                file.createNewFile();
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            }
        }
        m.a((File[]) list.toArray(new File[0]), file.getPath());
        if (file.length() <= 0) {
            q.S(file);
            return;
        }
        HashMap map = new HashMap();
        map.put("mLogUUID", exceptionMessage.mLogUUID);
        new JSONObject((Map<String, Object>) map);
        b(file, countDownLatch);
    }

    protected static void a(File file, ExceptionMessage exceptionMessage) throws Throwable {
        BufferedReader bufferedReader;
        ThreadInfo threadInfo;
        String line;
        String str;
        try {
            MemoryInfo memoryInfo = new MemoryInfo(exceptionMessage.mMemoryInfo);
            ArrayList arrayList = new ArrayList();
            BufferedReader bufferedReader2 = null;
            BufferedReader bufferedReader3 = null;
            try {
                try {
                    bufferedReader = new BufferedReader(new FileReader(file));
                } catch (Throwable th) {
                    th = th;
                }
            } catch (IOException e) {
                e = e;
            }
            try {
                threadInfo = new ThreadInfo();
            } catch (IOException e2) {
                e = e2;
                bufferedReader3 = bufferedReader;
                com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                com.kwad.sdk.crash.utils.b.closeQuietly(bufferedReader3);
                bufferedReader2 = bufferedReader3;
            } catch (Throwable th2) {
                th = th2;
                bufferedReader2 = bufferedReader;
                com.kwad.sdk.crash.utils.b.closeQuietly(bufferedReader2);
                throw th;
            }
            while (true) {
                line = bufferedReader.readLine();
                if (line == null) {
                    break;
                }
                if (line.isEmpty()) {
                    arrayList.add(threadInfo);
                    threadInfo = new ThreadInfo();
                } else if (line.startsWith("at ") || line.startsWith("(no ")) {
                    if (threadInfo.mTrace == null) {
                        str = line;
                    } else {
                        str = threadInfo.mTrace + line;
                    }
                    threadInfo.mTrace = str;
                    threadInfo.mTrace += "#";
                } else {
                    threadInfo.mName = line;
                }
            }
            memoryInfo.mJavaThreads = arrayList;
            exceptionMessage.mMemoryInfo = memoryInfo.toJson().toString();
            com.kwad.sdk.crash.utils.b.closeQuietly(bufferedReader);
            bufferedReader2 = line;
        } catch (Exception e3) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e3);
        }
    }

    private static void b(File file, CountDownLatch countDownLatch) {
        com.kwad.sdk.crash.report.upload.d.a(file, true, countDownLatch);
    }

    private static String eN(String str) {
        return (str == null || !str.contains(Constants.ACCEPT_TIME_SEPARATOR_SERVER)) ? str : str.substring(0, str.lastIndexOf(45));
    }

    public final void C(File file) {
        com.kwad.sdk.core.e.c.d("ExceptionCollector", "reportException dir =" + file);
        File[] fileArrListFiles = file.listFiles(new FileFilter() {
            @Override
            public final boolean accept(File file2) {
                return file2.getName().endsWith(".dump");
            }
        });
        if (fileArrListFiles != null) {
            for (File file2 : fileArrListFiles) {
                a(file2, (CountDownLatch) null);
            }
        }
    }

    protected abstract ExceptionMessage a(File file, File file2, File file3, String str);

    public final void a(e eVar) {
        this.mUploader = eVar;
    }

    public final void a(File file, CountDownLatch countDownLatch) {
        String strER = com.kwad.sdk.crash.utils.g.eR(file.getPath());
        File file2 = new File(strER + ".msg");
        File file3 = new File(strER + com.tkay.china.common.a.a.f);
        File file4 = new File(strER + ".blog");
        File file5 = new File(strER + ".jtrace");
        File file6 = new File(strER + ".minfo");
        ArrayList arrayList = new ArrayList();
        try {
            ExceptionMessage exceptionMessageA = a(file, file2, file3, strER);
            if (exceptionMessageA == null) {
                try {
                    q.delete(file.getPath());
                    q.delete(file3.getPath());
                    q.delete(file4.getPath());
                    q.delete(file2.getPath());
                    q.delete(file5.getPath());
                    q.delete(file6.getPath());
                    Iterator it = arrayList.iterator();
                    while (it.hasNext()) {
                        q.delete(((File) it.next()).getPath());
                    }
                    com.kwad.sdk.crash.utils.g.F(com.kwad.sdk.crash.handler.b.sBackupDir);
                    return;
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                    return;
                }
            }
            com.kwad.sdk.core.e.c.d("ExceptionCollector", "message.mCrashSource=" + exceptionMessageA.mCrashSource);
            if (exceptionMessageA.mCrashSource == 2) {
                try {
                    q.delete(file.getPath());
                    q.delete(file3.getPath());
                    q.delete(file4.getPath());
                    q.delete(file2.getPath());
                    q.delete(file5.getPath());
                    q.delete(file6.getPath());
                    Iterator it2 = arrayList.iterator();
                    while (it2.hasNext()) {
                        q.delete(((File) it2.next()).getPath());
                    }
                    com.kwad.sdk.crash.utils.g.F(com.kwad.sdk.crash.handler.b.sBackupDir);
                    return;
                } catch (Throwable th2) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(th2);
                    return;
                }
            }
            this.mUploader.a(exceptionMessageA, countDownLatch);
            if (this instanceof f) {
                com.kwad.sdk.core.e.c.d("ExceptionCollector", " java crash 不上传文件");
                try {
                    q.delete(file.getPath());
                    q.delete(file3.getPath());
                    q.delete(file4.getPath());
                    q.delete(file2.getPath());
                    q.delete(file5.getPath());
                    q.delete(file6.getPath());
                    Iterator it3 = arrayList.iterator();
                    while (it3.hasNext()) {
                        q.delete(((File) it3.next()).getPath());
                    }
                    com.kwad.sdk.crash.utils.g.F(com.kwad.sdk.crash.handler.b.sBackupDir);
                    return;
                } catch (Throwable th3) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(th3);
                    return;
                }
            }
            com.kwad.sdk.crash.utils.g.E(file4);
            List<File> arrayList2 = new ArrayList<>();
            Collections.addAll(arrayList2, file3, file4);
            Iterator<File> it4 = arrayList2.iterator();
            while (it4.hasNext()) {
                if (!it4.next().exists()) {
                    it4.remove();
                }
            }
            File file7 = new File(file.getParentFile().getParent(), "custom");
            if (file7.exists()) {
                for (File file8 : file7.listFiles()) {
                    if (!file8.isDirectory() && (file8.getName().startsWith(exceptionMessageA.mLogUUID) || file8.getName().startsWith(eN(exceptionMessageA.mLogUUID)))) {
                        arrayList.add(file8);
                    }
                }
                arrayList2.addAll(arrayList);
            }
            a(exceptionMessageA, arrayList2, countDownLatch);
            try {
                q.delete(file.getPath());
                q.delete(file3.getPath());
                q.delete(file4.getPath());
                q.delete(file2.getPath());
                q.delete(file5.getPath());
                q.delete(file6.getPath());
                Iterator it5 = arrayList.iterator();
                while (it5.hasNext()) {
                    q.delete(((File) it5.next()).getPath());
                }
                com.kwad.sdk.crash.utils.g.F(com.kwad.sdk.crash.handler.b.sBackupDir);
            } catch (Throwable th4) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(th4);
            }
        } catch (Throwable th5) {
            try {
                com.kwad.sdk.core.e.c.printStackTraceOnly(th5);
                com.kwad.sdk.crash.utils.g.p(th5);
                try {
                    q.delete(file.getPath());
                    q.delete(file3.getPath());
                    q.delete(file4.getPath());
                    q.delete(file2.getPath());
                    q.delete(file5.getPath());
                    q.delete(file6.getPath());
                    Iterator it6 = arrayList.iterator();
                    while (it6.hasNext()) {
                        q.delete(((File) it6.next()).getPath());
                    }
                    com.kwad.sdk.crash.utils.g.F(com.kwad.sdk.crash.handler.b.sBackupDir);
                } catch (Throwable th6) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(th6);
                }
            } catch (Throwable th7) {
                try {
                    q.delete(file.getPath());
                    q.delete(file3.getPath());
                    q.delete(file4.getPath());
                    q.delete(file2.getPath());
                    q.delete(file5.getPath());
                    q.delete(file6.getPath());
                    Iterator it7 = arrayList.iterator();
                    while (it7.hasNext()) {
                        q.delete(((File) it7.next()).getPath());
                    }
                    com.kwad.sdk.crash.utils.g.F(com.kwad.sdk.crash.handler.b.sBackupDir);
                    throw th7;
                } catch (Throwable th8) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(th8);
                    throw th7;
                }
            }
        }
    }

    protected final void b(File file, ExceptionMessage exceptionMessage) throws Throwable {
        StringBuilder sb;
        StringBuilder sb2;
        StringBuilder sb3;
        StringBuilder sb4;
        StringBuilder sb5;
        BufferedReader bufferedReader = null;
        try {
            try {
                BufferedReader bufferedReader2 = new BufferedReader(new FileReader(file));
                boolean z = false;
                while (true) {
                    try {
                        String line = bufferedReader2.readLine();
                        if (line == null) {
                            com.kwad.sdk.crash.utils.b.closeQuietly(bufferedReader2);
                            return;
                        }
                        if (!z && line.contains("JNI DETECTED ERROR IN APPLICATION")) {
                            exceptionMessage.mJNIError = line.substring(line.indexOf("JNI DETECTED ERROR IN APPLICATION"));
                            z = true;
                        } else if (line.contains("Waiting for a blocking GC ") || line.contains("WaitForGcToComplete")) {
                            if (TextUtils.isEmpty(exceptionMessage.mGCInfo)) {
                                sb = new StringBuilder();
                                sb.append(line);
                                sb.append("\n");
                            } else {
                                sb = new StringBuilder();
                                sb.append(exceptionMessage.mGCInfo);
                                sb.append(line);
                                sb.append("\n");
                            }
                            exceptionMessage.mGCInfo = sb.toString();
                        } else if (line.contains("dvm_lock_sample")) {
                            if (TextUtils.isEmpty(exceptionMessage.mLockInfo)) {
                                sb2 = new StringBuilder();
                                sb2.append(line);
                                sb2.append("\n");
                            } else {
                                sb2 = new StringBuilder();
                                sb2.append(exceptionMessage.mLockInfo);
                                sb2.append(line);
                                sb2.append("\n");
                            }
                            exceptionMessage.mLockInfo = sb2.toString();
                        } else if (line.contains("Long monitor")) {
                            if (TextUtils.isEmpty(exceptionMessage.mMonitorInfo)) {
                                sb3 = new StringBuilder();
                                sb3.append(line);
                                sb3.append("\n");
                            } else {
                                sb3 = new StringBuilder();
                                sb3.append(exceptionMessage.mMonitorInfo);
                                sb3.append(line);
                                sb3.append("\n");
                            }
                            exceptionMessage.mMonitorInfo = sb3.toString();
                        } else if (line.contains("Slow Looper")) {
                            if (TextUtils.isEmpty(exceptionMessage.mSlowLooper)) {
                                sb4 = new StringBuilder();
                                sb4.append(line);
                                sb4.append("\n");
                            } else {
                                sb4 = new StringBuilder();
                                sb4.append(exceptionMessage.mSlowLooper);
                                sb4.append(line);
                                sb4.append("\n");
                            }
                            exceptionMessage.mSlowLooper = sb4.toString();
                        } else if (line.contains("Slow Operation")) {
                            if (TextUtils.isEmpty(exceptionMessage.mSlowOperation)) {
                                sb5 = new StringBuilder();
                                sb5.append(line);
                                sb5.append("\n");
                            } else {
                                sb5 = new StringBuilder();
                                sb5.append(exceptionMessage.mSlowOperation);
                                sb5.append(line);
                                sb5.append("\n");
                            }
                            exceptionMessage.mSlowOperation = sb5.toString();
                        }
                    } catch (FileNotFoundException e) {
                        e = e;
                        bufferedReader = bufferedReader2;
                        this.mErrorMessage += e + "\n";
                        com.kwad.sdk.crash.utils.b.closeQuietly(bufferedReader);
                        return;
                    } catch (IOException e2) {
                        e = e2;
                        bufferedReader = bufferedReader2;
                        this.mErrorMessage += e + "\n";
                        com.kwad.sdk.crash.utils.b.closeQuietly(bufferedReader);
                        return;
                    } catch (Throwable th) {
                        th = th;
                        bufferedReader = bufferedReader2;
                        com.kwad.sdk.crash.utils.b.closeQuietly(bufferedReader);
                        throw th;
                    }
                }
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (FileNotFoundException e3) {
            e = e3;
        } catch (IOException e4) {
            e = e4;
        }
    }
}
