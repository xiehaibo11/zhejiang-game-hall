package com.qihoo360.replugin.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class InterpretDex2OatHelper {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static class StreamConsumer {
        static final java.util.concurrent.Executor STREAM_CONSUMER = null;


        static {
                java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newSingleThreadExecutor()
                com.qihoo360.replugin.utils.InterpretDex2OatHelper.StreamConsumer.STREAM_CONSUMER = r0
                return
        }

        private StreamConsumer() {
                r0 = this;
                r0.<init>()
                return
        }

        static void consumeInputStream(java.io.InputStream r2) {
                java.util.concurrent.Executor r0 = com.qihoo360.replugin.utils.InterpretDex2OatHelper.StreamConsumer.STREAM_CONSUMER
                com.qihoo360.replugin.utils.InterpretDex2OatHelper$StreamConsumer$1 r1 = new com.qihoo360.replugin.utils.InterpretDex2OatHelper$StreamConsumer$1
                r1.<init>(r2)
                r0.execute(r1)
                return
        }
    }

    public InterpretDex2OatHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String getCurrentInstructionSet() throws java.lang.Exception {
            java.lang.String r0 = "dalvik.system.VMRuntime"
            java.lang.Class r0 = java.lang.Class.forName(r0)
            r1 = 0
            java.lang.Class[] r2 = new java.lang.Class[r1]
            java.lang.String r3 = "getCurrentInstructionSet"
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r3, r2)
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.Object r0 = r0.invoke(r2, r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public static long getOdexSize(java.lang.String r2) {
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            boolean r2 = r0.exists()
            if (r2 == 0) goto L10
            long r0 = r0.length()
            goto L12
        L10:
            r0 = -1
        L12:
            return r0
    }

    public static void interpretDex2Oat(java.lang.String r4, java.lang.String r5) throws java.io.IOException {
            java.lang.String r0 = getCurrentInstructionSet()     // Catch: java.lang.Exception -> L5
            goto La
        L5:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
        La:
            java.io.File r1 = new java.io.File
            r1.<init>(r5)
            boolean r2 = r1.exists()
            if (r2 != 0) goto L1c
            java.io.File r1 = r1.getParentFile()
            r1.mkdirs()
        L1c:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.lang.String r2 = "dex2oat"
            r1.add(r2)
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 24
            if (r2 < r3) goto L3e
            java.lang.String r2 = "--runtime-arg"
            r1.add(r2)
            java.lang.String r3 = "-classpath"
            r1.add(r3)
            r1.add(r2)
            java.lang.String r2 = "&"
            r1.add(r2)
        L3e:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "--dex-file="
            r2.append(r3)
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r1.add(r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r2 = "--oat-file="
            r4.append(r2)
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r1.add(r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "--instruction-set="
            r4.append(r5)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            r1.add(r4)
            int r4 = android.os.Build.VERSION.SDK_INT
            r5 = 25
            if (r4 <= r5) goto L86
            java.lang.String r4 = "--compiler-filter=quicken"
            r1.add(r4)
            goto L8b
        L86:
            java.lang.String r4 = "--compiler-filter=interpret-only"
            r1.add(r4)
        L8b:
            java.lang.ProcessBuilder r4 = new java.lang.ProcessBuilder
            r4.<init>(r1)
            r5 = 1
            r4.redirectErrorStream(r5)
            java.lang.Process r4 = r4.start()
            java.io.InputStream r5 = r4.getInputStream()
            com.qihoo360.replugin.utils.InterpretDex2OatHelper.StreamConsumer.consumeInputStream(r5)
            java.io.InputStream r5 = r4.getErrorStream()
            com.qihoo360.replugin.utils.InterpretDex2OatHelper.StreamConsumer.consumeInputStream(r5)
            int r4 = r4.waitFor()     // Catch: java.lang.InterruptedException -> Lc4
            if (r4 != 0) goto Lad
            return
        Lad:
            java.io.IOException r5 = new java.io.IOException     // Catch: java.lang.InterruptedException -> Lc4
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.InterruptedException -> Lc4
            r0.<init>()     // Catch: java.lang.InterruptedException -> Lc4
            java.lang.String r1 = "dex2oat works unsuccessfully, exit code: "
            r0.append(r1)     // Catch: java.lang.InterruptedException -> Lc4
            r0.append(r4)     // Catch: java.lang.InterruptedException -> Lc4
            java.lang.String r4 = r0.toString()     // Catch: java.lang.InterruptedException -> Lc4
            r5.<init>(r4)     // Catch: java.lang.InterruptedException -> Lc4
            throw r5     // Catch: java.lang.InterruptedException -> Lc4
        Lc4:
            r4 = move-exception
            java.io.IOException r5 = new java.io.IOException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "dex2oat is interrupted, msg: "
            r0.append(r1)
            java.lang.String r1 = r4.getMessage()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r5.<init>(r0, r4)
            throw r5
    }
}
