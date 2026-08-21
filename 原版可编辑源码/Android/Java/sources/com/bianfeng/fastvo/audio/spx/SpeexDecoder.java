package com.bianfeng.fastvo.audio.spx;

import android.media.AudioTrack;
import android.os.RecoverySystem;
import java.io.EOFException;
import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.util.ArrayList;
import java.util.List;
import kotlin.UByte;

public class SpeexDecoder {
    protected boolean enhanced;
    private List<RecoverySystem.ProgressListener> listenerList = new ArrayList();
    private boolean paused;
    protected Speex speexDecoder;
    protected String srcFile;
    private File srcPath;
    private AudioTrack track;

    public SpeexDecoder(File file) throws Exception {
        this.srcPath = file;
    }

    private void initializeAndroidAudio(int i) throws Exception {
        int minBufferSize = AudioTrack.getMinBufferSize(i, 4, 2);
        if (minBufferSize < 0) {
            throw new Exception("Failed to get minimum buffer size: " + Integer.toString(minBufferSize));
        }
        this.track = new AudioTrack(3, i, 4, 2, minBufferSize, 1);
    }

    public void addOnMetadataListener(RecoverySystem.ProgressListener progressListener) {
        this.listenerList.add(progressListener);
    }

    public synchronized void setPaused(boolean z) {
        this.paused = z;
    }

    public synchronized boolean isPaused() {
        return this.paused;
    }

    public void decode() throws Exception {
        long j;
        int i;
        int iChecksum;
        short[] sArr;
        int iDecode;
        byte[] bArr = new byte[2048];
        byte[] bArr2 = new byte[65536];
        Speex speex = new Speex();
        this.speexDecoder = speex;
        speex.init(speex.getQuality());
        RandomAccessFile randomAccessFile = new RandomAccessFile(this.srcPath, "r");
        int i2 = 0;
        do {
            try {
                if (Thread.interrupted()) {
                    randomAccessFile.close();
                    this.track.stop();
                } else {
                    while (true) {
                        j = 100;
                        if (!isPaused()) {
                            break;
                        }
                        this.track.stop();
                        Thread.sleep(100L);
                    }
                    randomAccessFile.readFully(bArr, 0, 27);
                    i = readInt(bArr, 22);
                    readLong(bArr, 6);
                    bArr[22] = 0;
                    bArr[23] = 0;
                    bArr[24] = 0;
                    bArr[25] = 0;
                    int iChecksum2 = OggCrc.checksum(0, bArr, 0, 27);
                    if (!"OggS".equals(new String(bArr, 0, 4))) {
                        System.err.println("missing ogg id!");
                        randomAccessFile.close();
                    } else {
                        int i3 = bArr[26] & UByte.MAX_VALUE;
                        randomAccessFile.readFully(bArr, 27, i3);
                        iChecksum = OggCrc.checksum(iChecksum2, bArr, 27, i3);
                        int i4 = 0;
                        while (i4 < i3) {
                            if (Thread.interrupted()) {
                                randomAccessFile.close();
                                this.track.stop();
                            } else {
                                while (isPaused()) {
                                    this.track.stop();
                                    Thread.sleep(j);
                                }
                                int i5 = bArr[i4 + 27] & UByte.MAX_VALUE;
                                if (i5 == 255) {
                                    System.err.println("sorry, don't handle 255 sizes!");
                                    randomAccessFile.close();
                                } else {
                                    randomAccessFile.readFully(bArr2, 0, i5);
                                    iChecksum = OggCrc.checksum(iChecksum, bArr2, 0, i5);
                                    if (i2 == 0) {
                                        if (!readSpeexHeader(bArr2, 0, i5, true)) {
                                            i2 = 0;
                                            i4++;
                                            j = 100;
                                        }
                                    } else if (i2 != 1 && (iDecode = this.speexDecoder.decode(bArr2, (sArr = new short[160]), 160)) > 0) {
                                        this.track.write(sArr, 0, iDecode);
                                        this.track.setStereoVolume(0.7f, 0.7f);
                                        this.track.play();
                                    }
                                    i2++;
                                    i4++;
                                    j = 100;
                                }
                            }
                        }
                    }
                }
                this.track.stop();
                this.track.release();
                System.out.println("release............");
                return;
            } catch (EOFException unused) {
                this.track.stop();
                this.track.release();
                System.out.println("release............");
                randomAccessFile.close();
                return;
            } catch (Throwable th) {
                this.track.stop();
                this.track.release();
                System.out.println("release............");
                throw th;
            }
        } while (iChecksum == i);
        randomAccessFile.close();
        throw new IOException("Ogg CheckSums do not match");
    }

    private boolean readSpeexHeader(byte[] bArr, int i, int i2, boolean z) throws Exception {
        if (i2 != 80) {
            System.out.println("Oooops");
            return false;
        }
        if (!"Speex   ".equals(new String(bArr, i, 8))) {
            return false;
        }
        int i3 = bArr[i + 40] & UByte.MAX_VALUE;
        int i4 = readInt(bArr, i + 36);
        int i5 = readInt(bArr, i + 48);
        int i6 = readInt(bArr, i + 64);
        int i7 = readInt(bArr, i + 56);
        System.out.println("mode=" + i3 + " sampleRate==" + i4 + " channels=" + i5 + "nframes=" + i6 + "framesize=" + i7);
        initializeAndroidAudio(i4);
        if (z) {
        }
        return true;
    }

    protected static int readInt(byte[] bArr, int i) {
        return (bArr[i + 3] << 24) | (bArr[i] & UByte.MAX_VALUE) | ((bArr[i + 1] & UByte.MAX_VALUE) << 8) | ((bArr[i + 2] & UByte.MAX_VALUE) << 16);
    }

    protected static long readLong(byte[] bArr, int i) {
        return (bArr[i + 7] << 56) | (bArr[i] & UByte.MAX_VALUE) | ((bArr[i + 1] & UByte.MAX_VALUE) << 8) | ((bArr[i + 2] & UByte.MAX_VALUE) << 16) | ((bArr[i + 3] & UByte.MAX_VALUE) << 24) | ((bArr[i + 4] & UByte.MAX_VALUE) << 32) | ((bArr[i + 5] & UByte.MAX_VALUE) << 40) | ((bArr[i + 6] & UByte.MAX_VALUE) << 48);
    }

    protected static int readShort(byte[] bArr, int i) {
        return (bArr[i + 1] << 8) | (bArr[i] & UByte.MAX_VALUE);
    }
}
