package com.kwad.sdk.crash.report;

import android.text.TextUtils;
import com.kwad.sdk.crash.model.message.ExceptionMessage;
import com.kwad.sdk.crash.model.message.MemoryInfo;
import com.kwad.sdk.crash.model.message.NativeExceptionMessage;
import com.kwad.sdk.crash.model.message.ThreadInfo;
import com.kwad.sdk.utils.q;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class g extends d {
    public static final Pattern aBn = Pattern.compile("(.*)\\s\\(tid=(\\d+), index=(\\d+)*");
    public static final Pattern aBo = Pattern.compile("\\sd+\\spc");

    private NativeExceptionMessage D(File file) {
        String strV;
        try {
            strV = q.V(file);
        } catch (IOException e) {
            this.mErrorMessage += e + "\n";
            strV = null;
        }
        NativeExceptionMessage nativeExceptionMessage = new NativeExceptionMessage();
        if (strV != null) {
            try {
                nativeExceptionMessage.parseJson(new JSONObject(strV));
            } catch (Exception e2) {
                this.mErrorMessage += e2 + "\n";
            }
        }
        q.S(file);
        return nativeExceptionMessage;
    }

    private void a(NativeExceptionMessage nativeExceptionMessage, File file) {
        nativeExceptionMessage.mLogUUID = com.kwad.sdk.crash.utils.g.eR(file.getName());
        StringBuilder sb = new StringBuilder();
        StringBuilder sb2 = new StringBuilder();
        BufferedReader bufferedReader = new BufferedReader(new FileReader(file));
        boolean z = false;
        boolean z2 = false;
        while (true) {
            try {
                try {
                    String line = bufferedReader.readLine();
                    if (line == null) {
                        break;
                    }
                    if (z && line.startsWith("backtrace:")) {
                        z = false;
                        z2 = true;
                    } else if (z2) {
                        if (line.startsWith("###### ending of java stack trace ######")) {
                            break;
                        }
                        sb.append(line);
                        sb.append('\n');
                    } else if (z) {
                        a(nativeExceptionMessage, line, sb2);
                    } else if (line.startsWith("*** ***")) {
                        z = true;
                    }
                } catch (IOException e) {
                    this.mErrorMessage += e + "\n";
                }
            } finally {
                com.kwad.sdk.crash.utils.b.closeQuietly(bufferedReader);
            }
        }
        if (sb.length() > 1) {
            nativeExceptionMessage.mCrashDetail = sb.substring(0, sb.length() - 1);
        }
        if (sb2.length() > 1) {
            nativeExceptionMessage.mRegister = sb2.substring(0, sb2.length() - 1);
        }
    }

    private static void a(NativeExceptionMessage nativeExceptionMessage, String str, StringBuilder sb) {
        if (str.startsWith("Build fingerprint: ")) {
            nativeExceptionMessage.mFingerprint = str.substring(19);
            return;
        }
        if (str.startsWith("Revision: ")) {
            nativeExceptionMessage.mRevision = str.substring(10);
            return;
        }
        if (str.startsWith("ABI: ")) {
            nativeExceptionMessage.mAbi = str.substring(5);
            return;
        }
        if (str.startsWith("Current UTC: ")) {
            nativeExceptionMessage.mCurrentTimeStamp = Long.parseLong(str.substring(13));
            return;
        }
        if (str.startsWith("Abort message: ")) {
            nativeExceptionMessage.mAbortMsg = str.substring(15);
            return;
        }
        if (str.startsWith("    r") || str.startsWith("    ip") || str.startsWith("    x") || str.startsWith("    sp")) {
            sb.append(str);
            sb.append('\n');
            return;
        }
        if (!str.startsWith("pid: ")) {
            if (str.startsWith("signal ")) {
                String[] strArrSplit = str.split("\\s+");
                if (strArrSplit.length >= 9) {
                    nativeExceptionMessage.mSignal = com.kwad.sdk.crash.utils.g.eS(strArrSplit[2]);
                    nativeExceptionMessage.mCode = com.kwad.sdk.crash.utils.g.eS(strArrSplit[5]);
                    nativeExceptionMessage.mFaultAddr = strArrSplit[strArrSplit.length - 1];
                    nativeExceptionMessage.mManuallyKill = "--------".equals(strArrSplit[strArrSplit.length + (-1)]) ? "True" : "False";
                    return;
                }
                return;
            }
            return;
        }
        String[] strArrSplit2 = str.split("\\s+");
        if (strArrSplit2.length < 9) {
            return;
        }
        int i = 0;
        int i2 = 0;
        int i3 = 0;
        for (int i4 = 0; i4 < strArrSplit2.length; i4++) {
            if ("name:".equals(strArrSplit2[i4])) {
                i = i4;
            } else if (">>>".equals(strArrSplit2[i4])) {
                i2 = i4;
            } else if ("<<<".equals(strArrSplit2[i4])) {
                i3 = i4;
            }
        }
        StringBuilder sb2 = new StringBuilder();
        int i5 = i + 1;
        String str2 = strArrSplit2[i5];
        while (true) {
            sb2.append(str2);
            i5++;
            if (i5 >= i2) {
                break;
            }
            sb2.append(" ");
            str2 = strArrSplit2[i5];
        }
        nativeExceptionMessage.mThreadName = sb2.toString();
        sb2.setLength(0);
        int i6 = i2 + 1;
        String str3 = strArrSplit2[i6];
        while (true) {
            sb2.append(str3);
            i6++;
            if (i6 >= i3) {
                nativeExceptionMessage.mProcessName = sb2.toString();
                return;
            } else {
                sb2.append(" ");
                str3 = strArrSplit2[i6];
            }
        }
    }

    private static void c(File file, ExceptionMessage exceptionMessage) {
        try {
            MemoryInfo memoryInfo = new MemoryInfo(exceptionMessage.mMemoryInfo);
            ArrayList arrayList = new ArrayList();
            BufferedReader bufferedReader = new BufferedReader(new FileReader(file));
            try {
                try {
                    ThreadInfo threadInfo = new ThreadInfo();
                    while (true) {
                        String line = bufferedReader.readLine();
                        if (line == null) {
                            break;
                        }
                        if (line.isEmpty()) {
                            arrayList.add(threadInfo);
                            threadInfo = new ThreadInfo();
                        } else if (aBo.matcher(line).matches()) {
                            if (threadInfo.mTrace != null) {
                                line = threadInfo.mTrace + line;
                            }
                            threadInfo.mTrace = line;
                            threadInfo.mTrace += "\n";
                        } else {
                            Matcher matcher = aBn.matcher(line);
                            if (matcher.lookingAt()) {
                                threadInfo.mName = matcher.group(1);
                                threadInfo.mTid = Integer.parseInt(matcher.group(2));
                                threadInfo.mIndex = Integer.parseInt(matcher.group(3));
                            }
                        }
                    }
                    memoryInfo.mNativeThreads = arrayList;
                    exceptionMessage.mMemoryInfo = memoryInfo.toJson().toString();
                } catch (IOException e) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                }
            } finally {
                com.kwad.sdk.crash.utils.b.closeQuietly(bufferedReader);
            }
        } catch (Exception e2) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e2);
        }
    }

    @Override // com.kwad.sdk.crash.report.d
    protected final ExceptionMessage a(File file, File file2, File file3, String str) throws Throwable {
        File file4 = new File(str + ".jtrace");
        NativeExceptionMessage nativeExceptionMessageD = D(file2);
        try {
            a(nativeExceptionMessageD, file);
            b(file3, nativeExceptionMessageD);
            a(file4, nativeExceptionMessageD);
            c(new File(str + ".ntrace"), nativeExceptionMessageD);
            com.kwad.sdk.crash.utils.g.a(file, (CharSequence) nativeExceptionMessageD.toString(), true);
            com.kwad.sdk.crash.utils.g.d(file3, file);
            file.renameTo(file3);
            new StringBuilder("------ Native Crash Report Begin ------\n").append(nativeExceptionMessageD);
            nativeExceptionMessageD.mDumpsys = q.V(new File(str + ".minfo"));
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            this.mErrorMessage += e + "\n";
        }
        if (!TextUtils.isEmpty(this.mErrorMessage)) {
            nativeExceptionMessageD.mErrorMessage += this.mErrorMessage;
        }
        return nativeExceptionMessageD;
    }
}
