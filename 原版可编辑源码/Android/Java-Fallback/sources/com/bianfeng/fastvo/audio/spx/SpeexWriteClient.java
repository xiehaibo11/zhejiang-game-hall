package com.bianfeng.fastvo.audio.spx;

public class SpeexWriteClient {
    protected int channels;
    private int mode;
    protected int nframes;
    protected int sampleRate;
    com.bianfeng.fastvo.audio.spx.OggSpeexWriter speexWriter;
    protected boolean vbr;

    public SpeexWriteClient() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.mode = r0
            r1 = 8000(0x1f40, float:1.121E-41)
            r2.sampleRate = r1
            r1 = 1
            r2.channels = r1
            r2.nframes = r1
            r2.vbr = r0
            r0 = 0
            r2.speexWriter = r0
            return
    }

    private void init(java.lang.String r8) {
            r7 = this;
            r0 = 0
            r7.mode = r0
            r0 = 8000(0x1f40, float:1.121E-41)
            r7.sampleRate = r0
            r0 = 1
            r7.vbr = r0
            com.bianfeng.fastvo.audio.spx.OggSpeexWriter r0 = new com.bianfeng.fastvo.audio.spx.OggSpeexWriter
            int r2 = r7.mode
            int r3 = r7.sampleRate
            int r4 = r7.channels
            int r5 = r7.nframes
            boolean r6 = r7.vbr
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6)
            r7.speexWriter = r0
            r0.open(r8)     // Catch: java.io.IOException -> L27
            com.bianfeng.fastvo.audio.spx.OggSpeexWriter r8 = r7.speexWriter     // Catch: java.io.IOException -> L27
            java.lang.String r0 = "Encoded with:test by gauss "
            r8.writeHeader(r0)     // Catch: java.io.IOException -> L27
            goto L2b
        L27:
            r8 = move-exception
            r8.printStackTrace()
        L2b:
            return
    }

    public void setSampleRate(int r1) {
            r0 = this;
            r0.sampleRate = r1
            return
    }

    public void start(java.lang.String r1) {
            r0 = this;
            r0.init(r1)
            return
    }

    public void stop() throws java.io.IOException {
            r1 = this;
            com.bianfeng.fastvo.audio.spx.OggSpeexWriter r0 = r1.speexWriter
            if (r0 == 0) goto La
            r0.close()
            r0 = 0
            r1.speexWriter = r0
        La:
            return
    }

    public void writeTag(byte[] r3, int r4) {
            r2 = this;
            com.bianfeng.fastvo.audio.spx.OggSpeexWriter r0 = r2.speexWriter     // Catch: java.io.IOException -> L7
            r1 = 0
            r0.writePacket(r3, r1, r4)     // Catch: java.io.IOException -> L7
            goto Lb
        L7:
            r3 = move-exception
            r3.printStackTrace()
        Lb:
            return
    }
}
