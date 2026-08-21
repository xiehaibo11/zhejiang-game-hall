package com.bianfeng.fastvo.audio.amr;

public class ArmRecorder implements android.media.MediaRecorder.OnErrorListener, com.bianfeng.fastvo.ErrorCode, com.bianfeng.fastvo.audio.Recorder {
    public static final int QUALITY_44KHZ = 3;
    public static final int QUALITY_96KHZ = 4;
    public static final int SAMPLERATE_11KHZ = 1;
    public static final int SAMPLERATE_22KHZ = 2;
    public static final int SAMPLERATE_8KHZ = 0;
    com.bianfeng.fastvo.audio.AudioRecordCallback callback;
    boolean isCanceled;
    java.lang.String outputFile;
    android.media.MediaRecorder recorder;
    boolean recording;
    private int[] sampleRates;

    public ArmRecorder() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "VO"
            r0.append(r1)
            long r1 = java.lang.System.currentTimeMillis()
            r0.append(r1)
            java.lang.String r1 = ".m4a"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r0 = com.bianfeng.fastvo.FastResource.mkDataFile(r0)
            r3.<init>(r0)
            return
    }

    public ArmRecorder(java.lang.String r4) {
            r3 = this;
            r3.<init>()
            r0 = 5
            int[] r0 = new int[r0]
            r0 = {x0046: FILL_ARRAY_DATA , data: [8000, 11025, 22050, 44100, 96000} // fill-array
            r3.sampleRates = r0
            r3.outputFile = r4
            android.media.MediaRecorder r0 = new android.media.MediaRecorder
            r0.<init>()
            r3.recorder = r0
            r1 = 1
            r0.setAudioSource(r1)
            android.media.MediaRecorder r0 = r3.recorder
            r1 = 2
            r0.setOutputFormat(r1)
            android.media.MediaRecorder r0 = r3.recorder
            r1 = 3
            r0.setAudioEncoder(r1)
            android.media.MediaRecorder r0 = r3.recorder
            int[] r1 = r3.sampleRates
            int r2 = com.bianfeng.fastvo.FastConfig.getSampleRate()
            r1 = r1[r2]
            r0.setAudioSamplingRate(r1)
            android.media.MediaRecorder r0 = r3.recorder
            r0.setOutputFile(r4)
            android.media.MediaRecorder r4 = r3.recorder
            int r0 = com.bianfeng.fastvo.FastConfig.getMaxRecordTime()
            r4.setMaxDuration(r0)
            android.media.MediaRecorder r4 = r3.recorder
            r4.setOnErrorListener(r3)
            return
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
    public boolean isRecording() {
            r1 = this;
            boolean r0 = r1.recording
            return r0
    }

    @Override
    public void onError(android.media.MediaRecorder r1, int r2, int r3) {
            r0 = this;
            android.media.MediaRecorder r1 = r0.recorder
            r1.reset()
            r1 = 0
            r0.recording = r1
            return
    }

    @Override
    public void release() {
            r3 = this;
            r0 = 0
            r3.recording = r0     // Catch: java.lang.Exception -> L22
            android.media.MediaRecorder r0 = r3.recorder     // Catch: java.lang.Exception -> L22
            r0.stop()     // Catch: java.lang.Exception -> L22
            android.media.MediaRecorder r0 = r3.recorder     // Catch: java.lang.Exception -> L22
            r0.release()     // Catch: java.lang.Exception -> L22
            r0 = 0
            r3.recorder = r0     // Catch: java.lang.Exception -> L22
            boolean r0 = r3.isCanceled     // Catch: java.lang.Exception -> L22
            if (r0 == 0) goto L1a
            com.bianfeng.fastvo.audio.AudioRecordCallback r0 = r3.callback     // Catch: java.lang.Exception -> L22
            r0.onRecordCancel()     // Catch: java.lang.Exception -> L22
            goto L30
        L1a:
            com.bianfeng.fastvo.audio.AudioRecordCallback r0 = r3.callback     // Catch: java.lang.Exception -> L22
            java.lang.String r1 = r3.outputFile     // Catch: java.lang.Exception -> L22
            r0.onRecordSuccess(r1)     // Catch: java.lang.Exception -> L22
            goto L30
        L22:
            r0 = move-exception
            r0.printStackTrace()
            com.bianfeng.fastvo.audio.AudioRecordCallback r1 = r3.callback
            r2 = 2
            java.lang.String r0 = r0.getMessage()
            r1.onRecordFail(r2, r0)
        L30:
            return
    }

    @Override
    public void start(com.bianfeng.fastvo.audio.AudioRecordCallback r4) {
            r3 = this;
            r0 = 1
            r3.callback = r4     // Catch: java.lang.Exception -> L10
            android.media.MediaRecorder r1 = r3.recorder     // Catch: java.lang.Exception -> L10
            r1.prepare()     // Catch: java.lang.Exception -> L10
            android.media.MediaRecorder r1 = r3.recorder     // Catch: java.lang.Exception -> L10
            r1.start()     // Catch: java.lang.Exception -> L10
            r3.recording = r0     // Catch: java.lang.Exception -> L10
            goto L20
        L10:
            r1 = move-exception
            r1.printStackTrace()
            android.media.MediaRecorder r2 = r3.recorder
            r2.release()
            java.lang.String r1 = r1.getMessage()
            r4.onRecordFail(r0, r1)
        L20:
            return
    }
}
