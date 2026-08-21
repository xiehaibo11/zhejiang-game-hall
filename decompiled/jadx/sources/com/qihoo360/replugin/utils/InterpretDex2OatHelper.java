package com.qihoo360.replugin.utils;

import android.os.Build;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class InterpretDex2OatHelper {
    private static String getCurrentInstructionSet() throws Exception {
        return (String) Class.forName("dalvik.system.VMRuntime").getDeclaredMethod("getCurrentInstructionSet", new Class[0]).invoke(null, new Object[0]);
    }

    public static long getOdexSize(String str) {
        File file = new File(str);
        if (file.exists()) {
            return file.length();
        }
        return -1L;
    }

    public static void interpretDex2Oat(String str, String str2) throws IOException {
        String currentInstructionSet;
        try {
            currentInstructionSet = getCurrentInstructionSet();
        } catch (Exception e) {
            e.printStackTrace();
            currentInstructionSet = null;
        }
        File file = new File(str2);
        if (!file.exists()) {
            file.getParentFile().mkdirs();
        }
        ArrayList arrayList = new ArrayList();
        arrayList.add("dex2oat");
        if (Build.VERSION.SDK_INT >= 24) {
            arrayList.add("--runtime-arg");
            arrayList.add("-classpath");
            arrayList.add("--runtime-arg");
            arrayList.add("&");
        }
        arrayList.add("--dex-file=" + str);
        arrayList.add("--oat-file=" + str2);
        arrayList.add("--instruction-set=" + currentInstructionSet);
        if (Build.VERSION.SDK_INT > 25) {
            arrayList.add("--compiler-filter=quicken");
        } else {
            arrayList.add("--compiler-filter=interpret-only");
        }
        ProcessBuilder processBuilder = new ProcessBuilder(arrayList);
        processBuilder.redirectErrorStream(true);
        Process processStart = processBuilder.start();
        StreamConsumer.consumeInputStream(processStart.getInputStream());
        StreamConsumer.consumeInputStream(processStart.getErrorStream());
        try {
            int iWaitFor = processStart.waitFor();
            if (iWaitFor == 0) {
                return;
            }
            throw new IOException("dex2oat works unsuccessfully, exit code: " + iWaitFor);
        } catch (InterruptedException e2) {
            throw new IOException("dex2oat is interrupted, msg: " + e2.getMessage(), e2);
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static class StreamConsumer {
        static final Executor STREAM_CONSUMER = Executors.newSingleThreadExecutor();

        private StreamConsumer() {
        }

        static void consumeInputStream(final InputStream inputStream) {
            STREAM_CONSUMER.execute(new Runnable() { // from class: com.qihoo360.replugin.utils.InterpretDex2OatHelper.StreamConsumer.1
                @Override // java.lang.Runnable
                public void run() {
                    if (inputStream == null) {
                        return;
                    }
                    do {
                        try {
                        } catch (IOException unused) {
                        } catch (Throwable th) {
                            try {
                                inputStream.close();
                            } catch (Exception unused2) {
                            }
                            throw th;
                        }
                    } while (inputStream.read(new byte[256]) > 0);
                    try {
                        inputStream.close();
                    } catch (Exception unused3) {
                    }
                }
            });
        }
    }
}
