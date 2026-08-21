package com.bianfeng.fastvo.audio.amr;

import android.media.MediaRecorder;
import com.bianfeng.fastvo.ErrorCode;
import com.bianfeng.fastvo.FastConfig;
import com.bianfeng.fastvo.FastResource;
import com.bianfeng.fastvo.audio.AudioRecordCallback;
import com.bianfeng.fastvo.audio.Recorder;

/* JADX INFO: loaded from: classes.dex */
public class ArmRecorder implements MediaRecorder.OnErrorListener, ErrorCode, Recorder {
    public static final int QUALITY_44KHZ = 3;
    public static final int QUALITY_96KHZ = 4;
    public static final int SAMPLERATE_11KHZ = 1;
    public static final int SAMPLERATE_22KHZ = 2;
    public static final int SAMPLERATE_8KHZ = 0;
    AudioRecordCallback callback;
    boolean isCanceled;
    String outputFile;
    MediaRecorder recorder;
    boolean recording;
    private int[] sampleRates;

    public ArmRecorder() {
        this(FastResource.mkDataFile("VO" + System.currentTimeMillis() + ".m4a"));
    }

    public ArmRecorder(String str) {
        this.sampleRates = new int[]{8000, 11025, 22050, 44100, 96000};
        this.outputFile = str;
        MediaRecorder mediaRecorder = new MediaRecorder();
        this.recorder = mediaRecorder;
        mediaRecorder.setAudioSource(1);
        this.recorder.setOutputFormat(2);
        this.recorder.setAudioEncoder(3);
        this.recorder.setAudioSamplingRate(this.sampleRates[FastConfig.getSampleRate()]);
        this.recorder.setOutputFile(str);
        this.recorder.setMaxDuration(FastConfig.getMaxRecordTime());
        this.recorder.setOnErrorListener(this);
    }

    @Override // android.media.MediaRecorder.OnErrorListener
    public void onError(MediaRecorder mediaRecorder, int i, int i2) {
        this.recorder.reset();
        this.recording = false;
    }

    @Override // com.bianfeng.fastvo.audio.Recorder
    public boolean isRecording() {
        return this.recording;
    }

    @Override // com.bianfeng.fastvo.audio.Recorder
    public void start(AudioRecordCallback audioRecordCallback) {
        try {
            this.callback = audioRecordCallback;
            this.recorder.prepare();
            this.recorder.start();
            this.recording = true;
        } catch (Exception e) {
            e.printStackTrace();
            this.recorder.release();
            audioRecordCallback.onRecordFail(1, e.getMessage());
        }
    }

    @Override // com.bianfeng.fastvo.audio.Recorder
    public void release() {
        try {
            this.recording = false;
            this.recorder.stop();
            this.recorder.release();
            this.recorder = null;
            if (this.isCanceled) {
                this.callback.onRecordCancel();
            } else {
                this.callback.onRecordSuccess(this.outputFile);
            }
        } catch (Exception e) {
            e.printStackTrace();
            this.callback.onRecordFail(2, e.getMessage());
        }
    }

    @Override // com.bianfeng.fastvo.audio.Recorder
    public void cancel() {
        this.isCanceled = true;
        release();
    }
}
