package com.bianfeng.fastvo.audio.spx;

public class SpeexDecoder {
    protected boolean enhanced;
    private java.util.List<android.os.RecoverySystem.ProgressListener> listenerList;
    private boolean paused;
    protected com.bianfeng.fastvo.audio.spx.Speex speexDecoder;
    protected java.lang.String srcFile;
    private java.io.File srcPath;
    private android.media.AudioTrack track;

    public SpeexDecoder(java.io.File r2) throws java.lang.Exception {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.listenerList = r0
            r1.srcPath = r2
            return
    }

    private void initializeAndroidAudio(int r10) throws java.lang.Exception {
            r9 = this;
            r0 = 4
            r1 = 2
            int r7 = android.media.AudioTrack.getMinBufferSize(r10, r0, r1)
            if (r7 < 0) goto L16
            android.media.AudioTrack r0 = new android.media.AudioTrack
            r3 = 3
            r5 = 4
            r6 = 2
            r8 = 1
            r2 = r0
            r4 = r10
            r2.<init>(r3, r4, r5, r6, r7, r8)
            r9.track = r0
            return
        L16:
            java.lang.Exception r10 = new java.lang.Exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Failed to get minimum buffer size: "
            r0.append(r1)
            java.lang.String r1 = java.lang.Integer.toString(r7)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r10.<init>(r0)
            throw r10
    }

    protected static int readInt(byte[] r2, int r3) {
            r0 = r2[r3]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r1 = r3 + 1
            r1 = r2[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            r0 = r0 | r1
            int r1 = r3 + 2
            r1 = r2[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 16
            r0 = r0 | r1
            int r3 = r3 + 3
            r2 = r2[r3]
            int r2 = r2 << 24
            r2 = r2 | r0
            return r2
    }

    protected static long readLong(byte[] r2, int r3) {
            r0 = r2[r3]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r1 = r3 + 1
            r1 = r2[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            r0 = r0 | r1
            int r1 = r3 + 2
            r1 = r2[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 16
            r0 = r0 | r1
            int r1 = r3 + 3
            r1 = r2[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 24
            r0 = r0 | r1
            int r1 = r3 + 4
            r1 = r2[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 32
            r0 = r0 | r1
            int r1 = r3 + 5
            r1 = r2[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 40
            r0 = r0 | r1
            int r1 = r3 + 6
            r1 = r2[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 48
            r0 = r0 | r1
            int r3 = r3 + 7
            r2 = r2[r3]
            int r2 = r2 << 56
            r2 = r2 | r0
            long r2 = (long) r2
            return r2
    }

    protected static int readShort(byte[] r1, int r2) {
            r0 = r1[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r2 = r2 + 1
            r1 = r1[r2]
            int r1 = r1 << 8
            r1 = r1 | r0
            return r1
    }

    private boolean readSpeexHeader(byte[] r6, int r7, int r8, boolean r9) throws java.lang.Exception {
            r5 = this;
            r0 = 0
            r1 = 80
            if (r8 == r1) goto Ld
            java.io.PrintStream r6 = java.lang.System.out
            java.lang.String r7 = "Oooops"
            r6.println(r7)
            return r0
        Ld:
            java.lang.String r8 = new java.lang.String
            r1 = 8
            r8.<init>(r6, r7, r1)
            java.lang.String r1 = "Speex   "
            boolean r8 = r1.equals(r8)
            if (r8 != 0) goto L1d
            return r0
        L1d:
            int r8 = r7 + 40
            r8 = r6[r8]
            r8 = r8 & 255(0xff, float:3.57E-43)
            int r0 = r7 + 36
            int r0 = readInt(r6, r0)
            int r1 = r7 + 48
            int r1 = readInt(r6, r1)
            int r2 = r7 + 64
            int r2 = readInt(r6, r2)
            int r7 = r7 + 56
            int r6 = readInt(r6, r7)
            java.io.PrintStream r7 = java.lang.System.out
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "mode="
            r3.append(r4)
            r3.append(r8)
            java.lang.String r8 = " sampleRate=="
            r3.append(r8)
            r3.append(r0)
            java.lang.String r8 = " channels="
            r3.append(r8)
            r3.append(r1)
            java.lang.String r8 = "nframes="
            r3.append(r8)
            r3.append(r2)
            java.lang.String r8 = "framesize="
            r3.append(r8)
            r3.append(r6)
            java.lang.String r6 = r3.toString()
            r7.println(r6)
            r5.initializeAndroidAudio(r0)
            r6 = 1
            if (r9 == 0) goto L77
        L77:
            return r6
    }

    public void addOnMetadataListener(android.os.RecoverySystem.ProgressListener r2) {
            r1 = this;
            java.util.List<android.os.RecoverySystem$ProgressListener> r0 = r1.listenerList
            r0.add(r2)
            return
    }

    public void decode() throws java.lang.Exception {
            r16 = this;
            r1 = r16
            java.lang.String r2 = "release............"
            r0 = 2048(0x800, float:2.87E-42)
            byte[] r0 = new byte[r0]
            r3 = 65536(0x10000, float:9.1835E-41)
            byte[] r3 = new byte[r3]
            com.bianfeng.fastvo.audio.spx.Speex r4 = new com.bianfeng.fastvo.audio.spx.Speex
            r4.<init>()
            r1.speexDecoder = r4
            int r5 = r4.getQuality()
            r4.init(r5)
            java.io.RandomAccessFile r4 = new java.io.RandomAccessFile
            java.io.File r5 = r1.srcPath
            java.lang.String r6 = "r"
            r4.<init>(r5, r6)
            r5 = 0
            r6 = 0
        L25:
            boolean r7 = java.lang.Thread.interrupted()     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            if (r7 == 0) goto L43
            r4.close()     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            android.media.AudioTrack r0 = r1.track     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r0.stop()     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
        L33:
            android.media.AudioTrack r0 = r1.track
            r0.stop()
            android.media.AudioTrack r0 = r1.track
            r0.release()
            java.io.PrintStream r0 = java.lang.System.out
            r0.println(r2)
            return
        L43:
            boolean r7 = r16.isPaused()     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r8 = 100
            if (r7 == 0) goto L54
            android.media.AudioTrack r7 = r1.track     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r7.stop()     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            java.lang.Thread.sleep(r8)     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            goto L43
        L54:
            r7 = 27
            r4.readFully(r0, r5, r7)     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r10 = 22
            int r11 = readInt(r0, r10)     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r12 = 6
            readLong(r0, r12)     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r0[r10] = r5     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r10 = 23
            r0[r10] = r5     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r10 = 24
            r0[r10] = r5     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r10 = 25
            r0[r10] = r5     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            int r10 = com.bianfeng.fastvo.audio.spx.OggCrc.checksum(r5, r0, r5, r7)     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            java.lang.String r12 = "OggS"
            java.lang.String r13 = new java.lang.String     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r14 = 4
            r13.<init>(r0, r5, r14)     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            boolean r12 = r12.equals(r13)     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            if (r12 != 0) goto L8e
            java.io.PrintStream r0 = java.lang.System.err     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            java.lang.String r3 = "missing ogg id!"
            r0.println(r3)     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r4.close()     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            goto L33
        L8e:
            r12 = 26
            r12 = r0[r12]     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r13 = 255(0xff, float:3.57E-43)
            r12 = r12 & r13
            r4.readFully(r0, r7, r12)     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            int r7 = com.bianfeng.fastvo.audio.spx.OggCrc.checksum(r10, r0, r7, r12)     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r10 = 0
        L9d:
            if (r10 >= r12) goto L10c
            boolean r14 = java.lang.Thread.interrupted()     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            if (r14 == 0) goto Lae
            r4.close()     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            android.media.AudioTrack r0 = r1.track     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r0.stop()     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            goto L33
        Lae:
            boolean r14 = r16.isPaused()     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            if (r14 == 0) goto Lbd
            android.media.AudioTrack r14 = r1.track     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r14.stop()     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            java.lang.Thread.sleep(r8)     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            goto Lae
        Lbd:
            int r14 = r10 + 27
            r14 = r0[r14]     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r14 = r14 & r13
            if (r14 != r13) goto Ld0
            java.io.PrintStream r0 = java.lang.System.err     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            java.lang.String r3 = "sorry, don't handle 255 sizes!"
            r0.println(r3)     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r4.close()     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            goto L33
        Ld0:
            r4.readFully(r3, r5, r14)     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            int r7 = com.bianfeng.fastvo.audio.spx.OggCrc.checksum(r7, r3, r5, r14)     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r15 = 1
            if (r6 != 0) goto Le3
            boolean r14 = r1.readSpeexHeader(r3, r5, r14, r15)     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            if (r14 == 0) goto Le1
            goto Le5
        Le1:
            r6 = 0
            goto L107
        Le3:
            if (r6 != r15) goto Le8
        Le5:
            int r6 = r6 + 1
            goto L107
        Le8:
            r14 = 160(0xa0, float:2.24E-43)
            short[] r15 = new short[r14]     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            com.bianfeng.fastvo.audio.spx.Speex r8 = r1.speexDecoder     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            int r8 = r8.decode(r3, r15, r14)     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            if (r8 <= 0) goto Le5
            android.media.AudioTrack r9 = r1.track     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r9.write(r15, r5, r8)     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            android.media.AudioTrack r8 = r1.track     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r9 = 1060320051(0x3f333333, float:0.7)
            r8.setStereoVolume(r9, r9)     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            android.media.AudioTrack r8 = r1.track     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            r8.play()     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            goto Le5
        L107:
            int r10 = r10 + 1
            r8 = 100
            goto L9d
        L10c:
            if (r7 != r11) goto L110
            goto L25
        L110:
            r4.close()     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            java.io.IOException r0 = new java.io.IOException     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            java.lang.String r3 = "Ogg CheckSums do not match"
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
            throw r0     // Catch: java.lang.Throwable -> L11b java.io.EOFException -> L12c
        L11b:
            r0 = move-exception
            android.media.AudioTrack r3 = r1.track
            r3.stop()
            android.media.AudioTrack r3 = r1.track
            r3.release()
            java.io.PrintStream r3 = java.lang.System.out
            r3.println(r2)
            throw r0
        L12c:
            android.media.AudioTrack r0 = r1.track
            r0.stop()
            android.media.AudioTrack r0 = r1.track
            r0.release()
            java.io.PrintStream r0 = java.lang.System.out
            r0.println(r2)
            r4.close()
            return
    }

    public synchronized boolean isPaused() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.paused     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized void setPaused(boolean r1) {
            r0 = this;
            monitor-enter(r0)
            r0.paused = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }
}
