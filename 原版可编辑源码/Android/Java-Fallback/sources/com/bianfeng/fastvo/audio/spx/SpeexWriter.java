package com.bianfeng.fastvo.audio.spx;

public class SpeexWriter implements java.lang.Runnable {
    public static int write_packageSize = 1024;
    private com.bianfeng.fastvo.audio.spx.SpeexWriteClient client;
    private volatile boolean isRecording;
    private java.util.List<com.bianfeng.fastvo.audio.spx.SpeexWriter.processedData> list;
    private com.bianfeng.fastvo.audio.spx.SpeexListener listener;
    private final java.lang.Object mutex;
    private com.bianfeng.fastvo.audio.spx.SpeexWriter.processedData pData;

    class processedData {
        private byte[] processed;
        private int size;
        final com.bianfeng.fastvo.audio.spx.SpeexWriter this$0;

        processedData(com.bianfeng.fastvo.audio.spx.SpeexWriter r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                int r1 = com.bianfeng.fastvo.audio.spx.SpeexWriter.write_packageSize
                byte[] r1 = new byte[r1]
                r0.processed = r1
                return
        }

        static byte[] access$000(com.bianfeng.fastvo.audio.spx.SpeexWriter.processedData r0) {
                byte[] r0 = r0.processed
                return r0
        }

        static int access$100(com.bianfeng.fastvo.audio.spx.SpeexWriter.processedData r0) {
                int r0 = r0.size
                return r0
        }

        static int access$102(com.bianfeng.fastvo.audio.spx.SpeexWriter.processedData r0, int r1) {
                r0.size = r1
                return r1
        }
    }

    static {
            return
    }

    public SpeexWriter(java.lang.String r3) {
            r2 = this;
            r2.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r2.mutex = r0
            com.bianfeng.fastvo.audio.spx.SpeexWriteClient r0 = new com.bianfeng.fastvo.audio.spx.SpeexWriteClient
            r0.<init>()
            r2.client = r0
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            r2.list = r0
            com.bianfeng.fastvo.audio.spx.SpeexWriteClient r0 = r2.client
            r1 = 8000(0x1f40, float:1.121E-41)
            r0.setSampleRate(r1)
            com.bianfeng.fastvo.audio.spx.SpeexWriteClient r0 = r2.client
            r0.start(r3)
            return
    }

    public boolean isRecording() {
            r2 = this;
            java.lang.Object r0 = r2.mutex
            monitor-enter(r0)
            boolean r1 = r2.isRecording     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }

    public void putData(byte[] r4, int r5) {
            r3 = this;
            com.bianfeng.fastvo.audio.spx.SpeexWriter$processedData r0 = new com.bianfeng.fastvo.audio.spx.SpeexWriter$processedData
            r0.<init>(r3)
            com.bianfeng.fastvo.audio.spx.SpeexWriter.processedData.access$102(r0, r5)
            byte[] r1 = com.bianfeng.fastvo.audio.spx.SpeexWriter.processedData.access$000(r0)
            r2 = 0
            java.lang.System.arraycopy(r4, r2, r1, r2, r5)
            java.util.List<com.bianfeng.fastvo.audio.spx.SpeexWriter$processedData> r4 = r3.list
            r4.add(r0)
            return
    }

    @Override
    public void run() {
            r3 = this;
        L0:
            boolean r0 = r3.isRecording()
            if (r0 != 0) goto L1a
            java.util.List<com.bianfeng.fastvo.audio.spx.SpeexWriter$processedData> r0 = r3.list
            int r0 = r0.size()
            if (r0 <= 0) goto Lf
            goto L1a
        Lf:
            r3.stop()
            com.bianfeng.fastvo.audio.spx.SpeexListener r0 = r3.listener
            if (r0 == 0) goto L19
            r0.onStop()
        L19:
            return
        L1a:
            java.util.List<com.bianfeng.fastvo.audio.spx.SpeexWriter$processedData> r0 = r3.list
            int r0 = r0.size()
            if (r0 <= 0) goto L3d
            java.util.List<com.bianfeng.fastvo.audio.spx.SpeexWriter$processedData> r0 = r3.list
            r1 = 0
            java.lang.Object r0 = r0.remove(r1)
            com.bianfeng.fastvo.audio.spx.SpeexWriter$processedData r0 = (com.bianfeng.fastvo.audio.spx.SpeexWriter.processedData) r0
            r3.pData = r0
            com.bianfeng.fastvo.audio.spx.SpeexWriteClient r1 = r3.client
            byte[] r0 = com.bianfeng.fastvo.audio.spx.SpeexWriter.processedData.access$000(r0)
            com.bianfeng.fastvo.audio.spx.SpeexWriter$processedData r2 = r3.pData
            int r2 = com.bianfeng.fastvo.audio.spx.SpeexWriter.processedData.access$100(r2)
            r1.writeTag(r0, r2)
            goto L0
        L3d:
            r0 = 20
            java.lang.Thread.sleep(r0)     // Catch: java.lang.InterruptedException -> L43
            goto L0
        L43:
            r0 = move-exception
            r0.printStackTrace()
            goto L0
    }

    public void setListener(com.bianfeng.fastvo.audio.spx.SpeexListener r1) {
            r0 = this;
            r0.listener = r1
            return
    }

    public void setRecording(boolean r2) {
            r1 = this;
            java.lang.Object r0 = r1.mutex
            monitor-enter(r0)
            r1.isRecording = r2     // Catch: java.lang.Throwable -> L10
            boolean r2 = r1.isRecording     // Catch: java.lang.Throwable -> L10
            if (r2 == 0) goto Le
            java.lang.Object r2 = r1.mutex     // Catch: java.lang.Throwable -> L10
            r2.notify()     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            throw r2
    }

    public void stop() {
            r2 = this;
            com.bianfeng.fastvo.audio.spx.SpeexWriteClient r0 = r2.client     // Catch: java.lang.Exception -> L6
            r0.stop()     // Catch: java.lang.Exception -> L6
            goto L11
        L6:
            r0 = move-exception
            com.bianfeng.fastvo.audio.spx.SpeexListener r1 = r2.listener
            if (r1 == 0) goto Le
            r1.onError()
        Le:
            r0.printStackTrace()
        L11:
            return
    }
}
