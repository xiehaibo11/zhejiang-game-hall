package com.bianfeng.fastvo.audio.spx;

import android.os.Process;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;

public class SpeexEncoder implements Runnable {
    public static int encoder_packagesize = 1024;
    private String fileName;
    private volatile boolean isRecording;
    List<ReadData> list;
    private SpeexListener listener;
    private final Object mutex = new Object();
    private byte[] processedData;
    private Speex speex;

    public void setListener(SpeexListener speexListener) {
        this.listener = speexListener;
    }

    public SpeexEncoder(String str, int i) {
        Speex speex = new Speex();
        this.speex = speex;
        this.processedData = new byte[encoder_packagesize];
        this.list = null;
        speex.init(i);
        this.list = Collections.synchronizedList(new LinkedList());
        this.fileName = str;
    }

    @Override
    public void run() {
        int iEncode;
        SpeexWriter speexWriter = new SpeexWriter(this.fileName);
        Thread thread = new Thread(speexWriter);
        speexWriter.setRecording(true);
        thread.start();
        speexWriter.setListener(new SpeexListener() {
            @Override
            public void onStop() {
                if (SpeexEncoder.this.listener != null) {
                    SpeexEncoder.this.listener.onStop();
                }
            }

            @Override
            public void onError() {
                if (SpeexEncoder.this.listener != null) {
                    SpeexEncoder.this.listener.onError();
                }
            }
        });
        Process.setThreadPriority(-19);
        while (isRecording()) {
            if (this.list.size() == 0) {
                try {
                    Thread.sleep(20L);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            } else if (this.list.size() > 0) {
                synchronized (this.mutex) {
                    ReadData readDataRemove = this.list.remove(0);
                    iEncode = this.speex.encode(readDataRemove.ready, 0, this.processedData, readDataRemove.size);
                }
                if (iEncode > 0) {
                    speexWriter.putData(this.processedData, iEncode);
                    this.processedData = new byte[encoder_packagesize];
                }
            } else {
                continue;
            }
        }
        speexWriter.setRecording(false);
    }

    public void putData(short[] sArr, int i) {
        ReadData readData = new ReadData();
        synchronized (this.mutex) {
            readData.size = i;
            System.arraycopy(sArr, 0, readData.ready, 0, i);
            this.list.add(readData);
        }
    }

    public void setRecording(boolean z) {
        synchronized (this.mutex) {
            this.isRecording = z;
        }
    }

    public boolean isRecording() {
        boolean z;
        synchronized (this.mutex) {
            z = this.isRecording;
        }
        return z;
    }

    class ReadData {
        private short[] ready = new short[SpeexEncoder.encoder_packagesize];
        private int size;

        ReadData() {
        }
    }
}
