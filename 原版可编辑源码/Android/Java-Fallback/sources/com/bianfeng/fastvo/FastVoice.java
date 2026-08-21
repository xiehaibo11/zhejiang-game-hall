package com.bianfeng.fastvo;

public class FastVoice implements com.bianfeng.fastvo.ErrorCode {
    public static final long MININUM_TIME = 1000;
    private static long durTime;
    private static boolean isPlaying;
    private static boolean isRecording;
    static com.bianfeng.fastvo.audio.Player player;
    static com.bianfeng.fastvo.audio.Recorder recorder;
    private static java.util.Map<java.lang.String, java.lang.String> voiceList;


    static class AudioPlayTask implements com.bianfeng.fastvo.audio.AudioPlayCallback, com.bianfeng.fastvo.action.DownloadListener {
        com.bianfeng.fastvo.audio.PlayCallback callback;
        int retryCount;

        public AudioPlayTask(com.bianfeng.fastvo.audio.PlayCallback r1) {
                r0 = this;
                r0.<init>()
                r0.callback = r1
                return
        }

        @Override
        public void onBegin(com.bianfeng.fastvo.action.DownloadFile r1) {
                r0 = this;
                java.lang.String r1 = "begin download spx file"
                com.bianfeng.fastvo.util.LogUtil.d(r1)
                return
        }

        @Override
        public void onComplete(com.bianfeng.fastvo.action.DownloadFile r3) {
                r2 = this;
                java.lang.String r0 = "complete download spx file"
                com.bianfeng.fastvo.util.LogUtil.d(r0)
                com.bianfeng.fastvo.audio.PlayCallback r0 = r2.callback
                java.lang.String r1 = r3.filePath
                r0.onDownloadComplete(r1)
                java.lang.String r0 = r3.filePath
                java.lang.String r0 = com.bianfeng.fastvo.util.FileUtil.getSuffix(r0)
                java.lang.String r1 = ".spx"
                boolean r0 = r0.equals(r1)
                if (r0 != 0) goto L24
                com.bianfeng.fastvo.audio.amr.ArmPlayer r1 = new com.bianfeng.fastvo.audio.amr.ArmPlayer
                java.lang.String r3 = r3.filePath
                r1.<init>(r3)
                com.bianfeng.fastvo.FastVoice.player = r1
                goto L2d
            L24:
                com.bianfeng.fastvo.audio.spx.SpeexPlayer r1 = new com.bianfeng.fastvo.audio.spx.SpeexPlayer
                java.lang.String r3 = r3.filePath
                r1.<init>(r3)
                com.bianfeng.fastvo.FastVoice.player = r1
            L2d:
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r1 = "use SpeexPlayer : "
                r3.append(r1)
                r3.append(r0)
                java.lang.String r3 = r3.toString()
                com.bianfeng.fastvo.util.LogUtil.d(r3)
                com.bianfeng.fastvo.audio.Player r3 = com.bianfeng.fastvo.FastVoice.player
                r3.play(r2)
                return
        }

        @Override
        public void onError(int r3, com.bianfeng.fastvo.action.DownloadFile r4) {
                r2 = this;
                r0 = 0
                com.bianfeng.fastvo.FastVoice.access$302(r0)
                int r0 = r2.retryCount
                int r1 = r0 + 1
                r2.retryCount = r1
                r1 = 3
                if (r0 >= r1) goto L13
                java.lang.String r3 = r4.url
                r2.start(r3)
                goto L1a
            L13:
                com.bianfeng.fastvo.audio.PlayCallback r4 = r2.callback
                java.lang.String r0 = "try download more than 3 times"
                r4.onPlayFail(r3, r0)
            L1a:
                return
        }

        @Override
        public void onPlayComplete() {
                r1 = this;
                r0 = 0
                com.bianfeng.fastvo.FastVoice.access$302(r0)
                java.lang.String r0 = "onPlayComplete"
                com.bianfeng.fastvo.util.LogUtil.d(r0)
                com.bianfeng.fastvo.audio.PlayCallback r0 = r1.callback
                r0.onPlayComplete()
                return
        }

        @Override
        public void onPlayFail(int r2, java.lang.String r3) {
                r1 = this;
                r0 = 0
                com.bianfeng.fastvo.FastVoice.access$302(r0)
                com.bianfeng.fastvo.audio.PlayCallback r0 = r1.callback
                r0.onPlayFail(r2, r3)
                return
        }

        @Override
        public void onUpdate(com.bianfeng.fastvo.action.DownloadFile r1) {
                r0 = this;
                return
        }

        public void start(java.lang.String r4) {
                r3 = this;
                com.bianfeng.fastvo.action.DownloadFile r0 = new com.bianfeng.fastvo.action.DownloadFile
                r0.<init>()
                r0.url = r4
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "P"
                r1.append(r2)
                int r2 = com.bianfeng.fastvo.FastConfig.getQuality()
                r1.append(r2)
                java.lang.String r2 = com.bianfeng.fastvo.util.SecurityUtil.md5(r4)
                r1.append(r2)
                java.lang.String r4 = com.bianfeng.fastvo.util.FileUtil.getSuffix(r4)
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                java.lang.String r4 = com.bianfeng.fastvo.FastResource.mkDataFile(r4)
                r0.filePath = r4
                com.bianfeng.fastvo.action.DownloadTask r4 = new com.bianfeng.fastvo.action.DownloadTask
                android.content.Context r1 = com.bianfeng.fastvo.FastResource.getApplication()
                r4.<init>(r1, r3)
                r4.start(r0)
                return
        }
    }

    static class AudioRecordTask implements com.bianfeng.fastvo.audio.AudioRecordCallback, com.bianfeng.fastvo.action.UploadListener {
        com.bianfeng.fastvo.audio.RecordCallback callback;
        private java.lang.String fileName;

        public AudioRecordTask(com.bianfeng.fastvo.audio.RecordCallback r1) {
                r0 = this;
                r0.<init>()
                r0.callback = r1
                return
        }

        @Override
        public void onComplete(java.lang.String r3) {
                r2 = this;
                java.util.Map r0 = com.bianfeng.fastvo.FastVoice.access$200()
                java.lang.String r1 = r2.fileName
                r0.put(r3, r1)
                com.bianfeng.fastvo.audio.RecordCallback r0 = r2.callback
                r0.onUploadSuccess(r3)
                return
        }

        @Override
        public void onError(int r2, java.lang.String r3) {
                r1 = this;
                com.bianfeng.fastvo.audio.RecordCallback r0 = r1.callback
                r0.onRecordFail(r2, r3)
                return
        }

        @Override
        public void onRecordCancel() {
                r1 = this;
                r0 = 0
                com.bianfeng.fastvo.FastVoice.access$002(r0)
                com.bianfeng.fastvo.audio.RecordCallback r0 = r1.callback
                r0.onRecordCancel()
                return
        }

        @Override
        public void onRecordFail(int r2, java.lang.String r3) {
                r1 = this;
                r0 = 0
                com.bianfeng.fastvo.FastVoice.access$002(r0)
                com.bianfeng.fastvo.audio.RecordCallback r0 = r1.callback
                r0.onRecordFail(r2, r3)
                return
        }

        @Override
        public void onRecordSuccess(java.lang.String r6) {
                r5 = this;
                r0 = 0
                com.bianfeng.fastvo.FastVoice.access$002(r0)
                long r0 = com.bianfeng.fastvo.FastVoice.access$100()
                r2 = 1000(0x3e8, double:4.94E-321)
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 <= 0) goto L19
                r5.fileName = r6
                com.bianfeng.fastvo.audio.RecordCallback r0 = r5.callback
                r0.onRecordSuccess(r6)
                com.bianfeng.fastvo.action.OSSHelper.upLoadFile(r6, r5)
                goto L21
            L19:
                com.bianfeng.fastvo.audio.RecordCallback r6 = r5.callback
                r0 = 1
                java.lang.String r1 = "录音时间过短"
                r6.onRecordFail(r0, r1)
            L21:
                return
        }
    }

    static {
            return
    }

    public FastVoice() {
            r0 = this;
            r0.<init>()
            return
    }

    static boolean access$002(boolean r0) {
            com.bianfeng.fastvo.FastVoice.isRecording = r0
            return r0
    }

    static long access$100() {
            long r0 = com.bianfeng.fastvo.FastVoice.durTime
            return r0
    }

    static java.util.Map access$200() {
            java.util.Map<java.lang.String, java.lang.String> r0 = com.bianfeng.fastvo.FastVoice.voiceList
            return r0
    }

    static boolean access$302(boolean r0) {
            com.bianfeng.fastvo.FastVoice.isPlaying = r0
            return r0
    }

    public static void cancelRecord() {
            com.bianfeng.fastvo.audio.Recorder r0 = com.bianfeng.fastvo.FastVoice.recorder
            if (r0 == 0) goto Lf
            boolean r0 = r0.isRecording()
            if (r0 == 0) goto Lf
            com.bianfeng.fastvo.audio.Recorder r0 = com.bianfeng.fastvo.FastVoice.recorder
            r0.cancel()
        Lf:
            return
    }

    public static void init(android.content.Context r1) {
            java.lang.String r0 = com.bianfeng.fastvo.FastResource.defaultDataDir(r1)
            com.bianfeng.fastvo.util.FileUtil.deleteDirectory(r0)
            android.content.Context r0 = r1.getApplicationContext()
            com.bianfeng.fastvo.FastResource.regist(r0)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bianfeng.fastvo.FastVoice.voiceList = r0
            com.bianfeng.fastvo.action.OSSHelper.init(r1)
            return
    }

    public static boolean isPlaying() {
            boolean r0 = com.bianfeng.fastvo.FastVoice.isPlaying
            return r0
    }

    public static boolean isRecording() {
            boolean r0 = com.bianfeng.fastvo.FastVoice.isRecording
            return r0
    }

    public static void startPlay(com.bianfeng.fastvo.audio.PlayCallback r3, java.lang.String r4) {
            java.util.Map<java.lang.String, java.lang.String> r0 = com.bianfeng.fastvo.FastVoice.voiceList
            java.lang.Object r0 = r0.get(r4)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "http"
            boolean r1 = r4.startsWith(r1)
            r2 = 1
            if (r1 != 0) goto L15
            startPlay(r3, r4, r2)
            goto L23
        L15:
            boolean r1 = com.bianfeng.fastvo.util.FileUtil.isFileExist(r0)
            if (r1 == 0) goto L1f
            startPlay(r3, r0, r2)
            goto L23
        L1f:
            r0 = 0
            startPlay(r3, r4, r0)
        L23:
            return
    }

    public static void startPlay(com.bianfeng.fastvo.audio.PlayCallback r3, java.lang.String r4, boolean r5) {
            boolean r0 = com.bianfeng.fastvo.FastVoice.isPlaying
            r1 = 1
            if (r0 != 0) goto L5e
            com.bianfeng.fastvo.audio.Player r0 = com.bianfeng.fastvo.FastVoice.player
            if (r0 == 0) goto L10
            boolean r0 = r0.isPlaying()
            if (r0 == 0) goto L10
            goto L5e
        L10:
            com.bianfeng.fastvo.FastVoice.isPlaying = r1
            com.bianfeng.fastvo.audio.Player r0 = com.bianfeng.fastvo.FastVoice.player
            if (r0 == 0) goto L1c
            r0.release()
            r0 = 0
            com.bianfeng.fastvo.FastVoice.player = r0
        L1c:
            java.lang.String r0 = com.bianfeng.fastvo.util.FileUtil.getSuffix(r4)
            java.lang.String r2 = ".spx"
            boolean r0 = r0.equals(r2)
            if (r5 == 0) goto L55
            java.io.File r5 = new java.io.File
            r5.<init>(r4)
            boolean r5 = r5.exists()
            if (r5 == 0) goto L4f
            if (r0 != 0) goto L3d
            com.bianfeng.fastvo.audio.amr.ArmPlayer r5 = new com.bianfeng.fastvo.audio.amr.ArmPlayer
            r5.<init>(r4)
            com.bianfeng.fastvo.FastVoice.player = r5
            goto L44
        L3d:
            com.bianfeng.fastvo.audio.spx.SpeexPlayer r5 = new com.bianfeng.fastvo.audio.spx.SpeexPlayer
            r5.<init>(r4)
            com.bianfeng.fastvo.FastVoice.player = r5
        L44:
            com.bianfeng.fastvo.audio.Player r4 = com.bianfeng.fastvo.FastVoice.player
            com.bianfeng.fastvo.FastVoice$1 r5 = new com.bianfeng.fastvo.FastVoice$1
            r5.<init>(r3)
            r4.play(r5)
            goto L5d
        L4f:
            java.lang.String r4 = "未找到本地语音文件"
            r3.onPlayFail(r1, r4)
            goto L5d
        L55:
            com.bianfeng.fastvo.FastVoice$AudioPlayTask r5 = new com.bianfeng.fastvo.FastVoice$AudioPlayTask
            r5.<init>(r3)
            r5.start(r4)
        L5d:
            return
        L5e:
            java.lang.String r4 = "--------------------------------------"
            com.bianfeng.fastvo.util.LogUtil.e(r4)
            java.lang.String r5 = "-- 上次播放未结束无法执行新的播放操作 --"
            com.bianfeng.fastvo.util.LogUtil.e(r5)
            com.bianfeng.fastvo.util.LogUtil.e(r4)
            java.lang.String r4 = "上次播放未结束无法执行新的播放操作"
            r3.onPlayFail(r1, r4)
            return
    }

    public static void startRecord(com.bianfeng.fastvo.audio.RecordCallback r7) {
            long r0 = java.lang.System.currentTimeMillis()
            com.bianfeng.fastvo.FastVoice.durTime = r0
            com.bianfeng.fastvo.audio.Recorder r0 = com.bianfeng.fastvo.FastVoice.recorder
            if (r0 == 0) goto L24
            boolean r0 = r0.isRecording()
            if (r0 == 0) goto L24
            java.lang.String r0 = "--------------------------------------"
            com.bianfeng.fastvo.util.LogUtil.e(r0)
            java.lang.String r1 = "-- 上次录音未结束无法执行新的录音操作 --"
            com.bianfeng.fastvo.util.LogUtil.e(r1)
            com.bianfeng.fastvo.util.LogUtil.e(r0)
            r0 = 3
            java.lang.String r1 = "上次录音未结束无法执行新的录音操作"
            r7.onRecordFail(r0, r1)
            return
        L24:
            r0 = 1
            com.bianfeng.fastvo.FastVoice.isRecording = r0
            int r1 = com.bianfeng.fastvo.FastConfig.getQuality()
            boolean r2 = com.bianfeng.fastvo.FastConfig.isSpeex()
            if (r2 == 0) goto L34
            java.lang.String r3 = ".spx"
            goto L36
        L34:
            java.lang.String r3 = ".m4a"
        L36:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "R"
            r4.append(r5)
            r4.append(r1)
            long r5 = java.lang.System.currentTimeMillis()
            r4.append(r5)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r3 = com.bianfeng.fastvo.FastResource.mkDataFile(r3)
            com.bianfeng.fastvo.util.FileUtil.deleteFile(r3)
            boolean r4 = com.bianfeng.fastvo.FastResource.createNewFile(r3)
            if (r4 != 0) goto L64
            java.lang.String r1 = "文件目录被占用，创建文件失败"
            r7.onRecordFail(r0, r1)
            return
        L64:
            if (r2 != 0) goto L6e
            com.bianfeng.fastvo.audio.amr.ArmRecorder r0 = new com.bianfeng.fastvo.audio.amr.ArmRecorder
            r0.<init>(r3)
            com.bianfeng.fastvo.FastVoice.recorder = r0
            goto L75
        L6e:
            com.bianfeng.fastvo.audio.spx.SpeexRecorder r0 = new com.bianfeng.fastvo.audio.spx.SpeexRecorder
            r0.<init>(r3, r1)
            com.bianfeng.fastvo.FastVoice.recorder = r0
        L75:
            com.bianfeng.fastvo.audio.Recorder r0 = com.bianfeng.fastvo.FastVoice.recorder
            com.bianfeng.fastvo.FastVoice$AudioRecordTask r1 = new com.bianfeng.fastvo.FastVoice$AudioRecordTask
            r1.<init>(r7)
            r0.start(r1)
            return
    }

    public static void stopPlay() {
            r0 = 0
            com.bianfeng.fastvo.FastVoice.isPlaying = r0
            com.bianfeng.fastvo.audio.Player r0 = com.bianfeng.fastvo.FastVoice.player
            if (r0 == 0) goto Ld
            r0.release()
            r0 = 0
            com.bianfeng.fastvo.FastVoice.player = r0
        Ld:
            return
    }

    public static void stopRecord() {
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = com.bianfeng.fastvo.FastVoice.durTime
            long r0 = r0 - r2
            com.bianfeng.fastvo.FastVoice.durTime = r0
            com.bianfeng.fastvo.audio.Recorder r0 = com.bianfeng.fastvo.FastVoice.recorder
            if (r0 == 0) goto L18
            boolean r0 = r0.isRecording()
            if (r0 == 0) goto L18
            com.bianfeng.fastvo.audio.Recorder r0 = com.bianfeng.fastvo.FastVoice.recorder
            r0.release()
        L18:
            return
    }
}
