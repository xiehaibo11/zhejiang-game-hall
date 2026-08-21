package com.bianfeng.fastvo.audio.spx;

import java.io.IOException;

/* JADX INFO: loaded from: classes.dex */
public class SpeexWriteClient {
    private int mode = 0;
    protected int sampleRate = 8000;
    protected int channels = 1;
    protected int nframes = 1;
    protected boolean vbr = false;
    OggSpeexWriter speexWriter = null;

    public void start(String str) {
        init(str);
    }

    private void init(String str) {
        this.mode = 0;
        this.sampleRate = 8000;
        this.vbr = true;
        OggSpeexWriter oggSpeexWriter = new OggSpeexWriter(this.mode, this.sampleRate, this.channels, this.nframes, this.vbr);
        this.speexWriter = oggSpeexWriter;
        try {
            oggSpeexWriter.open(str);
            this.speexWriter.writeHeader("Encoded with:test by gauss ");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public void stop() throws IOException {
        OggSpeexWriter oggSpeexWriter = this.speexWriter;
        if (oggSpeexWriter != null) {
            oggSpeexWriter.close();
            this.speexWriter = null;
        }
    }

    public void writeTag(byte[] bArr, int i) {
        try {
            this.speexWriter.writePacket(bArr, 0, i);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public void setSampleRate(int i) {
        this.sampleRate = i;
    }
}
