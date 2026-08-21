package com.bianfeng.fastvo.audio.spx;

public class SpeexEncoder implements java.lang.Runnable {
    public static int encoder_packagesize = 1024;
    private java.lang.String fileName;
    private volatile boolean isRecording;
    java.util.List<com.bianfeng.fastvo.audio.spx.SpeexEncoder.ReadData> list;
    private com.bianfeng.fastvo.audio.spx.SpeexListener listener;
    private final java.lang.Object mutex;
    private byte[] processedData;
    private com.bianfeng.fastvo.audio.spx.Speex speex;


    class ReadData {
        private short[] ready;
        private int size;
        final com.bianfeng.fastvo.audio.spx.SpeexEncoder this$0;

        ReadData(com.bianfeng.fastvo.audio.spx.SpeexEncoder r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                int r1 = com.bianfeng.fastvo.audio.spx.SpeexEncoder.encoder_packagesize
                short[] r1 = new short[r1]
                r0.ready = r1
                return
        }

        static short[] access$100(com.bianfeng.fastvo.audio.spx.SpeexEncoder.ReadData r0) {
                short[] r0 = r0.ready
                return r0
        }

        static int access$200(com.bianfeng.fastvo.audio.spx.SpeexEncoder.ReadData r0) {
                int r0 = r0.size
                return r0
        }

        static int access$202(com.bianfeng.fastvo.audio.spx.SpeexEncoder.ReadData r0, int r1) {
                r0.size = r1
                return r1
        }
    }

    static {
            return
    }

    public SpeexEncoder(java.lang.String r3, int r4) {
            r2 = this;
            r2.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r2.mutex = r0
            com.bianfeng.fastvo.audio.spx.Speex r0 = new com.bianfeng.fastvo.audio.spx.Speex
            r0.<init>()
            r2.speex = r0
            int r1 = com.bianfeng.fastvo.audio.spx.SpeexEncoder.encoder_packagesize
            byte[] r1 = new byte[r1]
            r2.processedData = r1
            r1 = 0
            r2.list = r1
            r0.init(r4)
            java.util.LinkedList r4 = new java.util.LinkedList
            r4.<init>()
            java.util.List r4 = java.util.Collections.synchronizedList(r4)
            r2.list = r4
            r2.fileName = r3
            return
    }

    static com.bianfeng.fastvo.audio.spx.SpeexListener access$000(com.bianfeng.fastvo.audio.spx.SpeexEncoder r0) {
            com.bianfeng.fastvo.audio.spx.SpeexListener r0 = r0.listener
            return r0
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

    public void putData(short[] r5, int r6) {
            r4 = this;
            com.bianfeng.fastvo.audio.spx.SpeexEncoder$ReadData r0 = new com.bianfeng.fastvo.audio.spx.SpeexEncoder$ReadData
            r0.<init>(r4)
            java.lang.Object r1 = r4.mutex
            monitor-enter(r1)
            com.bianfeng.fastvo.audio.spx.SpeexEncoder.ReadData.access$202(r0, r6)     // Catch: java.lang.Throwable -> L1a
            short[] r2 = com.bianfeng.fastvo.audio.spx.SpeexEncoder.ReadData.access$100(r0)     // Catch: java.lang.Throwable -> L1a
            r3 = 0
            java.lang.System.arraycopy(r5, r3, r2, r3, r6)     // Catch: java.lang.Throwable -> L1a
            java.util.List<com.bianfeng.fastvo.audio.spx.SpeexEncoder$ReadData> r5 = r4.list     // Catch: java.lang.Throwable -> L1a
            r5.add(r0)     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L1a
            return
        L1a:
            r5 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L1a
            throw r5
    }

    @Override
    public void run() {
            r7 = this;
            com.bianfeng.fastvo.audio.spx.SpeexWriter r0 = new com.bianfeng.fastvo.audio.spx.SpeexWriter
            java.lang.String r1 = r7.fileName
            r0.<init>(r1)
            java.lang.Thread r1 = new java.lang.Thread
            r1.<init>(r0)
            r2 = 1
            r0.setRecording(r2)
            r1.start()
            com.bianfeng.fastvo.audio.spx.SpeexEncoder$1 r1 = new com.bianfeng.fastvo.audio.spx.SpeexEncoder$1
            r1.<init>(r7)
            r0.setListener(r1)
            r1 = -19
            android.os.Process.setThreadPriority(r1)
        L20:
            boolean r1 = r7.isRecording()
            r2 = 0
            if (r1 == 0) goto L6f
            java.util.List<com.bianfeng.fastvo.audio.spx.SpeexEncoder$ReadData> r1 = r7.list
            int r1 = r1.size()
            if (r1 != 0) goto L3a
            r1 = 20
            java.lang.Thread.sleep(r1)     // Catch: java.lang.InterruptedException -> L35
            goto L20
        L35:
            r1 = move-exception
            r1.printStackTrace()
            goto L20
        L3a:
            java.util.List<com.bianfeng.fastvo.audio.spx.SpeexEncoder$ReadData> r1 = r7.list
            int r1 = r1.size()
            if (r1 <= 0) goto L20
            java.lang.Object r1 = r7.mutex
            monitor-enter(r1)
            java.util.List<com.bianfeng.fastvo.audio.spx.SpeexEncoder$ReadData> r3 = r7.list     // Catch: java.lang.Throwable -> L6c
            java.lang.Object r3 = r3.remove(r2)     // Catch: java.lang.Throwable -> L6c
            com.bianfeng.fastvo.audio.spx.SpeexEncoder$ReadData r3 = (com.bianfeng.fastvo.audio.spx.SpeexEncoder.ReadData) r3     // Catch: java.lang.Throwable -> L6c
            com.bianfeng.fastvo.audio.spx.Speex r4 = r7.speex     // Catch: java.lang.Throwable -> L6c
            short[] r5 = com.bianfeng.fastvo.audio.spx.SpeexEncoder.ReadData.access$100(r3)     // Catch: java.lang.Throwable -> L6c
            byte[] r6 = r7.processedData     // Catch: java.lang.Throwable -> L6c
            int r3 = com.bianfeng.fastvo.audio.spx.SpeexEncoder.ReadData.access$200(r3)     // Catch: java.lang.Throwable -> L6c
            int r2 = r4.encode(r5, r2, r6, r3)     // Catch: java.lang.Throwable -> L6c
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L6c
            if (r2 <= 0) goto L20
            byte[] r1 = r7.processedData
            r0.putData(r1, r2)
            int r1 = com.bianfeng.fastvo.audio.spx.SpeexEncoder.encoder_packagesize
            byte[] r1 = new byte[r1]
            r7.processedData = r1
            goto L20
        L6c:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L6c
            throw r0
        L6f:
            r0.setRecording(r2)
            return
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
            r1.isRecording = r2     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return
        L7:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r2
    }
}
