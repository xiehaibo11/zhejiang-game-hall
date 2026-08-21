package com.mbridge.msdk.playercommon.exoplayer2.decoder;

import com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer;
import com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer;
import java.lang.Exception;

public abstract class SimpleDecoder<I extends com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer, O extends com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer, E extends java.lang.Exception> implements com.mbridge.msdk.playercommon.exoplayer2.decoder.Decoder<I, O, E> {
    private int availableInputBufferCount;
    private final I[] availableInputBuffers;
    private int availableOutputBufferCount;
    private final O[] availableOutputBuffers;
    private final java.lang.Thread decodeThread;
    private I dequeuedInputBuffer;
    private E exception;
    private boolean flushed;
    private final java.lang.Object lock;
    private final java.util.ArrayDeque<I> queuedInputBuffers;
    private final java.util.ArrayDeque<O> queuedOutputBuffers;
    private boolean released;
    private int skippedOutputBufferCount;


    protected SimpleDecoder(I[] r4, O[] r5) {
            r3 = this;
            r3.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r3.lock = r0
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r3.queuedInputBuffers = r0
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r3.queuedOutputBuffers = r0
            r3.availableInputBuffers = r4
            int r4 = r4.length
            r3.availableInputBufferCount = r4
            r4 = 0
            r0 = r4
        L1f:
            int r1 = r3.availableInputBufferCount
            if (r0 >= r1) goto L2e
            I extends com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer[] r1 = r3.availableInputBuffers
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r2 = r3.createInputBuffer()
            r1[r0] = r2
            int r0 = r0 + 1
            goto L1f
        L2e:
            r3.availableOutputBuffers = r5
            int r5 = r5.length
            r3.availableOutputBufferCount = r5
        L33:
            int r5 = r3.availableOutputBufferCount
            if (r4 >= r5) goto L42
            O extends com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer[] r5 = r3.availableOutputBuffers
            com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer r0 = r3.createOutputBuffer()
            r5[r4] = r0
            int r4 = r4 + 1
            goto L33
        L42:
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder$1 r4 = new com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder$1
            r4.<init>(r3)
            r3.decodeThread = r4
            r4.start()
            return
    }

    static void access$000(com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder r0) {
            r0.run()
            return
    }

    private boolean canDecodeBuffer() {
            r1 = this;
            java.util.ArrayDeque<I extends com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer> r0 = r1.queuedInputBuffers
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto Le
            int r0 = r1.availableOutputBufferCount
            if (r0 <= 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    private boolean decode() throws java.lang.InterruptedException {
            r6 = this;
            java.lang.Object r0 = r6.lock
            monitor-enter(r0)
        L3:
            boolean r1 = r6.released     // Catch: java.lang.Throwable -> L96
            if (r1 != 0) goto L13
            boolean r1 = r6.canDecodeBuffer()     // Catch: java.lang.Throwable -> L96
            if (r1 != 0) goto L13
            java.lang.Object r1 = r6.lock     // Catch: java.lang.Throwable -> L96
            r1.wait()     // Catch: java.lang.Throwable -> L96
            goto L3
        L13:
            boolean r1 = r6.released     // Catch: java.lang.Throwable -> L96
            r2 = 0
            if (r1 == 0) goto L1a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L96
            return r2
        L1a:
            java.util.ArrayDeque<I extends com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer> r1 = r6.queuedInputBuffers     // Catch: java.lang.Throwable -> L96
            java.lang.Object r1 = r1.removeFirst()     // Catch: java.lang.Throwable -> L96
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r1 = (com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer) r1     // Catch: java.lang.Throwable -> L96
            O extends com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer[] r3 = r6.availableOutputBuffers     // Catch: java.lang.Throwable -> L96
            int r4 = r6.availableOutputBufferCount     // Catch: java.lang.Throwable -> L96
            r5 = 1
            int r4 = r4 - r5
            r6.availableOutputBufferCount = r4     // Catch: java.lang.Throwable -> L96
            r3 = r3[r4]     // Catch: java.lang.Throwable -> L96
            boolean r4 = r6.flushed     // Catch: java.lang.Throwable -> L96
            r6.flushed = r2     // Catch: java.lang.Throwable -> L96
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L96
            boolean r0 = r1.isEndOfStream()
            if (r0 == 0) goto L3c
            r0 = 4
            r3.addFlag(r0)
            goto L69
        L3c:
            boolean r0 = r1.isDecodeOnly()
            if (r0 == 0) goto L47
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r3.addFlag(r0)
        L47:
            java.lang.Exception r0 = r6.decode(r1, r3, r4)     // Catch: java.lang.OutOfMemoryError -> L4e java.lang.RuntimeException -> L56
            r6.exception = r0     // Catch: java.lang.OutOfMemoryError -> L4e java.lang.RuntimeException -> L56
            goto L5d
        L4e:
            r0 = move-exception
            java.lang.Exception r0 = r6.createUnexpectedDecodeException(r0)
            r6.exception = r0
            goto L5d
        L56:
            r0 = move-exception
            java.lang.Exception r0 = r6.createUnexpectedDecodeException(r0)
            r6.exception = r0
        L5d:
            E extends java.lang.Exception r0 = r6.exception
            if (r0 == 0) goto L69
            java.lang.Object r0 = r6.lock
            monitor-enter(r0)
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L66
            return r2
        L66:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L66
            throw r1
        L69:
            java.lang.Object r4 = r6.lock
            monitor-enter(r4)
            boolean r0 = r6.flushed     // Catch: java.lang.Throwable -> L93
            if (r0 == 0) goto L74
            r6.releaseOutputBufferInternal(r3)     // Catch: java.lang.Throwable -> L93
            goto L8e
        L74:
            boolean r0 = r3.isDecodeOnly()     // Catch: java.lang.Throwable -> L93
            if (r0 == 0) goto L83
            int r0 = r6.skippedOutputBufferCount     // Catch: java.lang.Throwable -> L93
            int r0 = r0 + r5
            r6.skippedOutputBufferCount = r0     // Catch: java.lang.Throwable -> L93
            r6.releaseOutputBufferInternal(r3)     // Catch: java.lang.Throwable -> L93
            goto L8e
        L83:
            int r0 = r6.skippedOutputBufferCount     // Catch: java.lang.Throwable -> L93
            r3.skippedOutputBufferCount = r0     // Catch: java.lang.Throwable -> L93
            r6.skippedOutputBufferCount = r2     // Catch: java.lang.Throwable -> L93
            java.util.ArrayDeque<O extends com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer> r0 = r6.queuedOutputBuffers     // Catch: java.lang.Throwable -> L93
            r0.addLast(r3)     // Catch: java.lang.Throwable -> L93
        L8e:
            r6.releaseInputBufferInternal(r1)     // Catch: java.lang.Throwable -> L93
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L93
            return r5
        L93:
            r0 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L93
            throw r0
        L96:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L96
            throw r1
    }

    private void maybeNotifyDecodeLoop() {
            r1 = this;
            boolean r0 = r1.canDecodeBuffer()
            if (r0 == 0) goto Lb
            java.lang.Object r0 = r1.lock
            r0.notify()
        Lb:
            return
    }

    private void maybeThrowException() throws java.lang.Exception {
            r1 = this;
            E extends java.lang.Exception r0 = r1.exception
            if (r0 != 0) goto L5
            return
        L5:
            throw r0
    }

    private void releaseInputBufferInternal(I r4) {
            r3 = this;
            r4.clear()
            I extends com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer[] r0 = r3.availableInputBuffers
            int r1 = r3.availableInputBufferCount
            int r2 = r1 + 1
            r3.availableInputBufferCount = r2
            r0[r1] = r4
            return
    }

    private void releaseOutputBufferInternal(O r4) {
            r3 = this;
            r4.clear()
            O extends com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer[] r0 = r3.availableOutputBuffers
            int r1 = r3.availableOutputBufferCount
            int r2 = r1 + 1
            r3.availableOutputBufferCount = r2
            r0[r1] = r4
            return
    }

    private void run() {
            r2 = this;
        L0:
            boolean r0 = r2.decode()     // Catch: java.lang.InterruptedException -> L8
            if (r0 == 0) goto L7
            goto L0
        L7:
            return
        L8:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            r1.<init>(r0)
            throw r1
    }

    protected abstract I createInputBuffer();

    protected abstract O createOutputBuffer();

    protected abstract E createUnexpectedDecodeException(java.lang.Throwable r1);

    protected abstract E decode(I r1, O r2, boolean r3);

    @Override
    public final I dequeueInputBuffer() throws java.lang.Exception {
            r4 = this;
            java.lang.Object r0 = r4.lock
            monitor-enter(r0)
            r4.maybeThrowException()     // Catch: java.lang.Throwable -> L24
            I extends com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r1 = r4.dequeuedInputBuffer     // Catch: java.lang.Throwable -> L24
            r2 = 1
            if (r1 != 0) goto Ld
            r1 = r2
            goto Le
        Ld:
            r1 = 0
        Le:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r1)     // Catch: java.lang.Throwable -> L24
            int r1 = r4.availableInputBufferCount     // Catch: java.lang.Throwable -> L24
            if (r1 != 0) goto L17
            r1 = 0
            goto L20
        L17:
            I extends com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer[] r1 = r4.availableInputBuffers     // Catch: java.lang.Throwable -> L24
            int r3 = r4.availableInputBufferCount     // Catch: java.lang.Throwable -> L24
            int r3 = r3 - r2
            r4.availableInputBufferCount = r3     // Catch: java.lang.Throwable -> L24
            r1 = r1[r3]     // Catch: java.lang.Throwable -> L24
        L20:
            r4.dequeuedInputBuffer = r1     // Catch: java.lang.Throwable -> L24
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L24
            return r1
        L24:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L24
            throw r1
    }

    @Override
    public java.lang.Object dequeueInputBuffer() throws java.lang.Exception {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = r1.dequeueInputBuffer()
            return r0
    }

    @Override
    public final O dequeueOutputBuffer() throws java.lang.Exception {
            r2 = this;
            java.lang.Object r0 = r2.lock
            monitor-enter(r0)
            r2.maybeThrowException()     // Catch: java.lang.Throwable -> L1b
            java.util.ArrayDeque<O extends com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer> r1 = r2.queuedOutputBuffers     // Catch: java.lang.Throwable -> L1b
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L1b
            if (r1 == 0) goto L11
            r1 = 0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            return r1
        L11:
            java.util.ArrayDeque<O extends com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer> r1 = r2.queuedOutputBuffers     // Catch: java.lang.Throwable -> L1b
            java.lang.Object r1 = r1.removeFirst()     // Catch: java.lang.Throwable -> L1b
            com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer r1 = (com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer) r1     // Catch: java.lang.Throwable -> L1b
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            return r1
        L1b:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            throw r1
    }

    @Override
    public java.lang.Object dequeueOutputBuffer() throws java.lang.Exception {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer r0 = r1.dequeueOutputBuffer()
            return r0
    }

    @Override
    public final void flush() {
            r2 = this;
            java.lang.Object r0 = r2.lock
            monitor-enter(r0)
            r1 = 1
            r2.flushed = r1     // Catch: java.lang.Throwable -> L3f
            r1 = 0
            r2.skippedOutputBufferCount = r1     // Catch: java.lang.Throwable -> L3f
            I extends com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r1 = r2.dequeuedInputBuffer     // Catch: java.lang.Throwable -> L3f
            if (r1 == 0) goto L15
            I extends com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r1 = r2.dequeuedInputBuffer     // Catch: java.lang.Throwable -> L3f
            r2.releaseInputBufferInternal(r1)     // Catch: java.lang.Throwable -> L3f
            r1 = 0
            r2.dequeuedInputBuffer = r1     // Catch: java.lang.Throwable -> L3f
        L15:
            java.util.ArrayDeque<I extends com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer> r1 = r2.queuedInputBuffers     // Catch: java.lang.Throwable -> L3f
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L3f
            if (r1 != 0) goto L29
            java.util.ArrayDeque<I extends com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer> r1 = r2.queuedInputBuffers     // Catch: java.lang.Throwable -> L3f
            java.lang.Object r1 = r1.removeFirst()     // Catch: java.lang.Throwable -> L3f
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r1 = (com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer) r1     // Catch: java.lang.Throwable -> L3f
            r2.releaseInputBufferInternal(r1)     // Catch: java.lang.Throwable -> L3f
            goto L15
        L29:
            java.util.ArrayDeque<O extends com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer> r1 = r2.queuedOutputBuffers     // Catch: java.lang.Throwable -> L3f
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L3f
            if (r1 != 0) goto L3d
            java.util.ArrayDeque<O extends com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer> r1 = r2.queuedOutputBuffers     // Catch: java.lang.Throwable -> L3f
            java.lang.Object r1 = r1.removeFirst()     // Catch: java.lang.Throwable -> L3f
            com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer r1 = (com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer) r1     // Catch: java.lang.Throwable -> L3f
            r2.releaseOutputBufferInternal(r1)     // Catch: java.lang.Throwable -> L3f
            goto L29
        L3d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3f
            return
        L3f:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3f
            throw r1
    }

    public final void queueInputBuffer(I r3) throws java.lang.Exception {
            r2 = this;
            java.lang.Object r0 = r2.lock
            monitor-enter(r0)
            r2.maybeThrowException()     // Catch: java.lang.Throwable -> L1d
            I extends com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r1 = r2.dequeuedInputBuffer     // Catch: java.lang.Throwable -> L1d
            if (r3 != r1) goto Lc
            r1 = 1
            goto Ld
        Lc:
            r1 = 0
        Ld:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r1)     // Catch: java.lang.Throwable -> L1d
            java.util.ArrayDeque<I extends com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer> r1 = r2.queuedInputBuffers     // Catch: java.lang.Throwable -> L1d
            r1.addLast(r3)     // Catch: java.lang.Throwable -> L1d
            r2.maybeNotifyDecodeLoop()     // Catch: java.lang.Throwable -> L1d
            r3 = 0
            r2.dequeuedInputBuffer = r3     // Catch: java.lang.Throwable -> L1d
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            return
        L1d:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            throw r3
    }

    @Override
    public void queueInputBuffer(java.lang.Object r1) throws java.lang.Exception {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r1 = (com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer) r1
            r0.queueInputBuffer(r1)
            return
    }

    @Override
    public void release() {
            r2 = this;
            java.lang.Object r0 = r2.lock
            monitor-enter(r0)
            r1 = 1
            r2.released = r1     // Catch: java.lang.Throwable -> L1a
            java.lang.Object r1 = r2.lock     // Catch: java.lang.Throwable -> L1a
            r1.notify()     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            java.lang.Thread r0 = r2.decodeThread     // Catch: java.lang.InterruptedException -> L12
            r0.join()     // Catch: java.lang.InterruptedException -> L12
            goto L19
        L12:
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r0.interrupt()
        L19:
            return
        L1a:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            throw r1
    }

    protected void releaseOutputBuffer(O r2) {
            r1 = this;
            java.lang.Object r0 = r1.lock
            monitor-enter(r0)
            r1.releaseOutputBufferInternal(r2)     // Catch: java.lang.Throwable -> Lb
            r1.maybeNotifyDecodeLoop()     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            return
        Lb:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            throw r2
    }

    protected final void setInitialInputBufferSize(int r5) {
            r4 = this;
            int r0 = r4.availableInputBufferCount
            I extends com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer[] r1 = r4.availableInputBuffers
            int r1 = r1.length
            r2 = 0
            if (r0 != r1) goto La
            r0 = 1
            goto Lb
        La:
            r0 = r2
        Lb:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            I extends com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer[] r0 = r4.availableInputBuffers
            int r1 = r0.length
        L11:
            if (r2 >= r1) goto L1b
            r3 = r0[r2]
            r3.ensureSpaceForWrite(r5)
            int r2 = r2 + 1
            goto L11
        L1b:
            return
    }
}
