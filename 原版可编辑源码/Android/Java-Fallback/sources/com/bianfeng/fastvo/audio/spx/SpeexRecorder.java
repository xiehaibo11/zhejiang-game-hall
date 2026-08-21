package com.bianfeng.fastvo.audio.spx;

public class SpeexRecorder implements android.os.Handler.Callback, java.lang.Runnable, com.bianfeng.fastvo.audio.Recorder {
    static final int frequency = 8000;
    static int packagesize = 160;
    com.bianfeng.fastvo.audio.AudioRecordCallback callback;
    java.lang.String fileName;
    android.os.Handler handler;
    boolean isCanceled;
    volatile boolean isRecording;
    final java.lang.Object mutex;
    int quality;
    android.media.AudioRecord recorder;


    static {
            return
    }

    public SpeexRecorder(java.lang.String r8, int r9) {
            r7 = this;
            r7.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r7.mutex = r0
            r7.fileName = r8
            r7.quality = r9
            android.os.Handler r8 = new android.os.Handler
            r8.<init>(r7)
            r7.handler = r8
            r8 = 2
            r9 = 8000(0x1f40, float:1.121E-41)
            r0 = 16
            int r6 = android.media.AudioRecord.getMinBufferSize(r9, r0, r8)
            android.media.AudioRecord r8 = new android.media.AudioRecord
            r2 = 1
            r3 = 8000(0x1f40, float:1.121E-41)
            r4 = 16
            r5 = 2
            r1 = r8
            r1.<init>(r2, r3, r4, r5, r6)
            r7.recorder = r8
            return
    }

    private void setRecording(boolean r2) {
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

    @Override
    public void cancel() {
            r1 = this;
            r0 = 1
            r1.isCanceled = r0
            r1.release()
            return
    }

    @Override
    public boolean handleMessage(android.os.Message r1) {
            r0 = this;
            boolean r1 = r0.isRecording
            if (r1 == 0) goto L7
            r0.release()
        L7:
            r1 = 0
            return r1
    }

    @Override
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

    @Override
    public void release() {
            r2 = this;
            android.os.Handler r0 = r2.handler
            r1 = 0
            r0.removeMessages(r1)
            r0 = 0
            r2.handler = r0
            r2.setRecording(r1)
            return
    }

    @Override
    public void run() {
            r5 = this;
            com.bianfeng.fastvo.audio.spx.SpeexEncoder r0 = new com.bianfeng.fastvo.audio.spx.SpeexEncoder
            java.lang.String r1 = r5.fileName
            int r2 = r5.quality
            r0.<init>(r1, r2)
            com.bianfeng.fastvo.audio.spx.SpeexRecorder$1 r1 = new com.bianfeng.fastvo.audio.spx.SpeexRecorder$1
            r1.<init>(r5)
            r0.setListener(r1)
            java.lang.Thread r1 = new java.lang.Thread
            r1.<init>(r0)
            r2 = 1
            r0.setRecording(r2)
            r1.start()
            java.lang.Object r1 = r5.mutex
            monitor-enter(r1)
        L20:
            boolean r2 = r5.isRecording     // Catch: java.lang.Throwable -> L81
            if (r2 != 0) goto L33
            java.lang.Object r2 = r5.mutex     // Catch: java.lang.InterruptedException -> L2a java.lang.Throwable -> L81
            r2.wait()     // Catch: java.lang.InterruptedException -> L2a java.lang.Throwable -> L81
            goto L20
        L2a:
            r0 = move-exception
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L81
            java.lang.String r3 = "Wait() interrupted!"
            r2.<init>(r3, r0)     // Catch: java.lang.Throwable -> L81
            throw r2     // Catch: java.lang.Throwable -> L81
        L33:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L81
            r1 = -19
            android.os.Process.setThreadPriority(r1)
            int r1 = com.bianfeng.fastvo.audio.spx.SpeexRecorder.packagesize
            short[] r1 = new short[r1]
            android.media.AudioRecord r2 = r5.recorder     // Catch: java.lang.Exception -> L73
            r2.startRecording()     // Catch: java.lang.Exception -> L73
        L42:
            boolean r2 = r5.isRecording
            r3 = 0
            if (r2 == 0) goto L6a
            android.media.AudioRecord r2 = r5.recorder
            int r4 = com.bianfeng.fastvo.audio.spx.SpeexRecorder.packagesize
            int r2 = r2.read(r1, r3, r4)
            r4 = -3
            if (r2 == r4) goto L5a
            r4 = -2
            if (r2 != r4) goto L56
            goto L5a
        L56:
            r0.putData(r1, r2)
            goto L42
        L5a:
            android.media.AudioRecord r1 = r5.recorder
            r1.stop()
            r0.setRecording(r3)
            com.bianfeng.fastvo.audio.AudioRecordCallback r0 = r5.callback
            java.lang.String r1 = "AudioRecord returned ERROR_INVALID_OPERATION or ERROR_BAD_VALUE"
            r0.onRecordFail(r2, r1)
            return
        L6a:
            android.media.AudioRecord r1 = r5.recorder
            r1.stop()
            r0.setRecording(r3)
            return
        L73:
            r0 = move-exception
            r0.printStackTrace()
            com.bianfeng.fastvo.audio.AudioRecordCallback r0 = r5.callback
            r1 = -20
            java.lang.String r2 = "语音权限未开启"
            r0.onRecordFail(r1, r2)
            return
        L81:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L81
            goto L85
        L84:
            throw r0
        L85:
            goto L84
    }

    @Override
    public void start(com.bianfeng.fastvo.audio.AudioRecordCallback r4) {
            r3 = this;
            r3.callback = r4
            r4 = 1
            r3.setRecording(r4)
            android.os.Handler r4 = r3.handler
            int r0 = com.bianfeng.fastvo.FastConfig.getMaxRecordTime()
            long r0 = (long) r0
            r2 = 0
            r4.sendEmptyMessageDelayed(r2, r0)
            java.lang.Thread r4 = new java.lang.Thread
            r4.<init>(r3)
            r4.start()
            return
    }
}
