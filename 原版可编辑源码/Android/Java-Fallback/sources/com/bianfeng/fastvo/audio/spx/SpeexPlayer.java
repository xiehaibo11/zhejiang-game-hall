package com.bianfeng.fastvo.audio.spx;

public class SpeexPlayer implements com.bianfeng.fastvo.audio.Player {
    com.bianfeng.fastvo.audio.AudioPlayCallback callback;
    boolean isPlay;
    com.bianfeng.fastvo.audio.spx.SpeexDecoder speexdec;
    java.lang.Thread th;

    class RecordPlayThread extends java.lang.Thread {
        final com.bianfeng.fastvo.audio.spx.SpeexPlayer this$0;

        RecordPlayThread(com.bianfeng.fastvo.audio.spx.SpeexPlayer r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r4 = this;
                r0 = 0
                com.bianfeng.fastvo.audio.spx.SpeexPlayer r1 = r4.this$0     // Catch: java.lang.Exception -> L33
                com.bianfeng.fastvo.audio.spx.SpeexDecoder r1 = r1.speexdec     // Catch: java.lang.Exception -> L33
                if (r1 == 0) goto L24
                java.lang.String r1 = "start decode"
                com.bianfeng.fastvo.util.LogUtil.d(r1)     // Catch: java.lang.Exception -> L33
                com.bianfeng.fastvo.audio.spx.SpeexPlayer r1 = r4.this$0     // Catch: java.lang.Exception -> L33
                com.bianfeng.fastvo.audio.spx.SpeexDecoder r1 = r1.speexdec     // Catch: java.lang.Exception -> L33
                r1.decode()     // Catch: java.lang.Exception -> L33
                java.lang.String r1 = "finish decode"
                com.bianfeng.fastvo.util.LogUtil.d(r1)     // Catch: java.lang.Exception -> L33
                com.bianfeng.fastvo.audio.spx.SpeexPlayer r1 = r4.this$0     // Catch: java.lang.Exception -> L33
                com.bianfeng.fastvo.audio.AudioPlayCallback r1 = r1.callback     // Catch: java.lang.Exception -> L33
                r1.onPlayComplete()     // Catch: java.lang.Exception -> L33
                com.bianfeng.fastvo.audio.spx.SpeexPlayer r1 = r4.this$0     // Catch: java.lang.Exception -> L33
                r1.isPlay = r0     // Catch: java.lang.Exception -> L33
                goto L47
            L24:
                com.bianfeng.fastvo.audio.spx.SpeexPlayer r1 = r4.this$0     // Catch: java.lang.Exception -> L33
                com.bianfeng.fastvo.audio.AudioPlayCallback r1 = r1.callback     // Catch: java.lang.Exception -> L33
                r2 = -6
                java.lang.String r3 = "speex decoder is null"
                r1.onPlayFail(r2, r3)     // Catch: java.lang.Exception -> L33
                com.bianfeng.fastvo.audio.spx.SpeexPlayer r1 = r4.this$0     // Catch: java.lang.Exception -> L33
                r1.isPlay = r0     // Catch: java.lang.Exception -> L33
                goto L47
            L33:
                r1 = move-exception
                r1.printStackTrace()
                com.bianfeng.fastvo.audio.spx.SpeexPlayer r2 = r4.this$0
                com.bianfeng.fastvo.audio.AudioPlayCallback r2 = r2.callback
                r3 = 2
                java.lang.String r1 = r1.getMessage()
                r2.onPlayFail(r3, r1)
                com.bianfeng.fastvo.audio.spx.SpeexPlayer r1 = r4.this$0
                r1.isPlay = r0
            L47:
                return
        }
    }

    public SpeexPlayer(java.lang.String r3) {
            r2 = this;
            r2.<init>()
            com.bianfeng.fastvo.audio.spx.SpeexDecoder r0 = new com.bianfeng.fastvo.audio.spx.SpeexDecoder     // Catch: java.lang.Exception -> L10
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L10
            r1.<init>(r3)     // Catch: java.lang.Exception -> L10
            r0.<init>(r1)     // Catch: java.lang.Exception -> L10
            r2.speexdec = r0     // Catch: java.lang.Exception -> L10
            goto L14
        L10:
            r3 = move-exception
            r3.printStackTrace()
        L14:
            return
    }

    @Override
    public boolean isPlaying() {
            r1 = this;
            boolean r0 = r1.isPlay
            return r0
    }

    @Override
    public void play(com.bianfeng.fastvo.audio.AudioPlayCallback r2) {
            r1 = this;
            r1.callback = r2
            r2 = 1
            r1.isPlay = r2
            com.bianfeng.fastvo.audio.spx.SpeexPlayer$RecordPlayThread r2 = new com.bianfeng.fastvo.audio.spx.SpeexPlayer$RecordPlayThread
            r2.<init>(r1)
            java.lang.Thread r0 = new java.lang.Thread
            r0.<init>(r2)
            r1.th = r0
            r0.start()
            return
    }

    @Override
    public void release() {
            r1 = this;
            java.lang.Thread r0 = r1.th
            r0.interrupt()
            r0 = 0
            r1.isPlay = r0
            return
    }
}
