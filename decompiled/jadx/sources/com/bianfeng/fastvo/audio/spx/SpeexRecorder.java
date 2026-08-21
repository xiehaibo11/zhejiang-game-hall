package com.bianfeng.fastvo.audio.spx;

import android.media.AudioRecord;
import android.os.Handler;
import android.os.Message;
import android.os.Process;
import com.bianfeng.fastvo.FastConfig;
import com.bianfeng.fastvo.audio.AudioRecordCallback;
import com.bianfeng.fastvo.audio.Recorder;

/* JADX INFO: loaded from: classes.dex */
public class SpeexRecorder implements Handler.Callback, Runnable, Recorder {
    static final int frequency = 8000;
    static int packagesize = 160;
    AudioRecordCallback callback;
    String fileName;
    boolean isCanceled;
    volatile boolean isRecording;
    int quality;
    final Object mutex = new Object();
    Handler handler = new Handler(this);
    AudioRecord recorder = new AudioRecord(1, 8000, 16, 2, AudioRecord.getMinBufferSize(8000, 16, 2));

    public SpeexRecorder(String str, int i) {
        this.fileName = str;
        this.quality = i;
    }

    @Override // java.lang.Runnable
    public void run() {
        SpeexEncoder speexEncoder = new SpeexEncoder(this.fileName, this.quality);
        speexEncoder.setListener(new SpeexListener() { // from class: com.bianfeng.fastvo.audio.spx.SpeexRecorder.1
            @Override // com.bianfeng.fastvo.audio.spx.SpeexListener
            public void onStop() {
                if (SpeexRecorder.this.isCanceled) {
                    SpeexRecorder.this.callback.onRecordCancel();
                } else {
                    SpeexRecorder.this.callback.onRecordSuccess(SpeexRecorder.this.fileName);
                }
            }

            @Override // com.bianfeng.fastvo.audio.spx.SpeexListener
            public void onError() {
                SpeexRecorder.this.callback.onRecordFail(-21, "录音文件写入出错，请检查存储空间");
            }
        });
        Thread thread = new Thread(speexEncoder);
        speexEncoder.setRecording(true);
        thread.start();
        synchronized (this.mutex) {
            while (!this.isRecording) {
                try {
                    this.mutex.wait();
                } catch (InterruptedException e) {
                    throw new IllegalStateException("Wait() interrupted!", e);
                }
            }
        }
        Process.setThreadPriority(-19);
        short[] sArr = new short[packagesize];
        try {
            this.recorder.startRecording();
            while (this.isRecording) {
                int i = this.recorder.read(sArr, 0, packagesize);
                if (i == -3 || i == -2) {
                    this.recorder.stop();
                    speexEncoder.setRecording(false);
                    this.callback.onRecordFail(i, "AudioRecord returned ERROR_INVALID_OPERATION or ERROR_BAD_VALUE");
                    return;
                }
                speexEncoder.putData(sArr, i);
            }
            this.recorder.stop();
            speexEncoder.setRecording(false);
        } catch (Exception e2) {
            e2.printStackTrace();
            this.callback.onRecordFail(-20, "语音权限未开启");
        }
    }

    private void setRecording(boolean z) {
        synchronized (this.mutex) {
            this.isRecording = z;
            if (this.isRecording) {
                this.mutex.notify();
            }
        }
    }

    @Override // com.bianfeng.fastvo.audio.Recorder
    public boolean isRecording() {
        boolean z;
        synchronized (this.mutex) {
            z = this.isRecording;
        }
        return z;
    }

    @Override // com.bianfeng.fastvo.audio.Recorder
    public void start(AudioRecordCallback audioRecordCallback) {
        this.callback = audioRecordCallback;
        setRecording(true);
        this.handler.sendEmptyMessageDelayed(0, FastConfig.getMaxRecordTime());
        new Thread(this).start();
    }

    @Override // com.bianfeng.fastvo.audio.Recorder
    public void release() {
        this.handler.removeMessages(0);
        this.handler = null;
        setRecording(false);
    }

    @Override // com.bianfeng.fastvo.audio.Recorder
    public void cancel() {
        this.isCanceled = true;
        release();
    }

    @Override // android.os.Handler.Callback
    public boolean handleMessage(Message message) {
        if (!this.isRecording) {
            return false;
        }
        release();
        return false;
    }
}
