package com.bianfeng.fastvo.audio.spx;

import java.util.Collections;
import java.util.LinkedList;
import java.util.List;

public class SpeexWriter implements Runnable {
    public static int write_packageSize = 1024;
    private volatile boolean isRecording;
    private SpeexListener listener;
    private processedData pData;
    private final Object mutex = new Object();
    private SpeexWriteClient client = new SpeexWriteClient();
    private List<processedData> list = Collections.synchronizedList(new LinkedList());

    public void setListener(SpeexListener speexListener) {
        this.listener = speexListener;
    }

    public SpeexWriter(String str) {
        this.client.setSampleRate(8000);
        this.client.start(str);
    }

    @Override
    public void run() {
        while (true) {
            if (!isRecording() && this.list.size() <= 0) {
                break;
            }
            if (this.list.size() > 0) {
                processedData processeddataRemove = this.list.remove(0);
                this.pData = processeddataRemove;
                this.client.writeTag(processeddataRemove.processed, this.pData.size);
            } else {
                try {
                    Thread.sleep(20L);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }
        stop();
        SpeexListener speexListener = this.listener;
        if (speexListener != null) {
            speexListener.onStop();
        }
    }

    public void putData(byte[] bArr, int i) {
        processedData processeddata = new processedData();
        processeddata.size = i;
        System.arraycopy(bArr, 0, processeddata.processed, 0, i);
        this.list.add(processeddata);
    }

    public void stop() {
        try {
            this.client.stop();
        } catch (Exception e) {
            SpeexListener speexListener = this.listener;
            if (speexListener != null) {
                speexListener.onError();
            }
            e.printStackTrace();
        }
    }

    public void setRecording(boolean z) {
        synchronized (this.mutex) {
            this.isRecording = z;
            if (this.isRecording) {
                this.mutex.notify();
            }
        }
    }

    public boolean isRecording() {
        boolean z;
        synchronized (this.mutex) {
            z = this.isRecording;
        }
        return z;
    }

    class processedData {
        private byte[] processed = new byte[SpeexWriter.write_packageSize];
        private int size;

        processedData() {
        }
    }
}
