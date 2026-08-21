package com.bianfeng.ymnsdk.fastvo;

@com.bianfeng.ymnsdk.feature.protocol.YPlugin(entrance = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.ACTIVITY, strategy = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE)
public class FastVoiceInterface extends com.bianfeng.ymnsdk.feature.YmnPluginWrapper {
    private static final int ADD_PERMISSION_FAIL = 26001;
    private static final int ADD_PERMISSION_SUCCESS = 26000;
    public static final java.lang.String FASTVOICE_FUNCTION_CANCEL_RECORD = "fastvo_cancel_record";
    public static final java.lang.String FASTVOICE_FUNCTION_START_NATIVE_RECORD = "fastvo_start_native_record";
    public static final java.lang.String FASTVOICE_FUNCTION_START_PLAY = "fastvo_start_play";
    public static final java.lang.String FASTVOICE_FUNCTION_START_PLAY_LOCAL = "fastvo_start_play_local";
    public static final java.lang.String FASTVOICE_FUNCTION_START_RECORD = "fastvo_start_record";
    public static final java.lang.String FASTVOICE_FUNCTION_STOP_PLAY = "fastvo_stop_play";
    public static final java.lang.String FASTVOICE_FUNCTION_STOP_RECORD = "fastvo_stop_record";
    private com.bianfeng.ymnsdk.fastvo.SpeakerManager speakerManager;

    class 1 implements com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.PermissCallback {
        final com.bianfeng.ymnsdk.fastvo.FastVoiceInterface this$0;


        1(com.bianfeng.ymnsdk.fastvo.FastVoiceInterface r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void onAllow(int r1, java.lang.String r2) {
                r0 = this;
                return
        }

        @Override
        public void onAllowAll(int r3) {
                r2 = this;
                java.lang.String r3 = "开始录音"
                com.bianfeng.ymnsdk.util.Logger.i(r3)
                com.bianfeng.ymnsdk.fastvo.FastVoiceInterface r3 = r2.this$0
                com.bianfeng.ymnsdk.fastvo.SpeakerManager r3 = com.bianfeng.ymnsdk.fastvo.FastVoiceInterface.access$000(r3)
                r3.closeVolume()
                boolean r3 = com.bianfeng.fastvo.FastVoice.isPlaying()
                if (r3 == 0) goto L1d
                com.bianfeng.ymnsdk.fastvo.FastVoiceInterface r3 = r2.this$0
                r0 = 1405(0x57d, float:1.969E-42)
                java.lang.String r1 = "播放失败，正在开始录音"
                r3.sendResult(r0, r1)
            L1d:
                com.bianfeng.fastvo.FastVoice.stopPlay()
                com.bianfeng.ymnsdk.fastvo.FastVoiceInterface r3 = r2.this$0
                com.bianfeng.ymnsdk.fastvo.FastVoiceInterface$1$1 r0 = new com.bianfeng.ymnsdk.fastvo.FastVoiceInterface$1$1
                r0.<init>(r2)
                r3.tryRunOnUiThreadOrJustRun(r0)
                return
        }

        @Override
        public void onDeny(int r4, java.lang.String r5) {
                r3 = this;
                com.bianfeng.ymnsdk.fastvo.FastVoiceInterface r4 = r3.this$0
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "授权失败"
                r0.append(r1)
                r0.append(r5)
                java.lang.String r0 = r0.toString()
                r2 = 26001(0x6591, float:3.6435E-41)
                r4.sendResult(r2, r0)
                com.bianfeng.ymnsdk.fastvo.FastVoiceInterface r4 = r3.this$0
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r1)
                r0.append(r5)
                java.lang.String r5 = r0.toString()
                r0 = 2209(0x8a1, float:3.095E-42)
                r4.sendResult(r0, r5)
                return
        }

        @Override
        public void onDenyIn48Hours(int r4, java.lang.String r5) {
                r3 = this;
                com.bianfeng.ymnsdk.fastvo.FastVoiceInterface r4 = r3.this$0
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "这个是48小时"
                r0.append(r1)
                r0.append(r5)
                java.lang.String r0 = r0.toString()
                r2 = 26001(0x6591, float:3.6435E-41)
                r4.sendResult(r2, r0)
                com.bianfeng.ymnsdk.fastvo.FastVoiceInterface r4 = r3.this$0
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r1)
                r0.append(r5)
                java.lang.String r5 = r0.toString()
                r0 = 2211(0x8a3, float:3.098E-42)
                r4.sendResult(r0, r5)
                return
        }
    }


    public FastVoiceInterface() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.bianfeng.ymnsdk.fastvo.SpeakerManager access$000(com.bianfeng.ymnsdk.fastvo.FastVoiceInterface r0) {
            com.bianfeng.ymnsdk.fastvo.SpeakerManager r0 = r0.speakerManager
            return r0
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "fastvo_start_play")
    private void startPlay(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "0.5"
            r1.startPlay(r2, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "fastvo_start_play")
    private void startPlay(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "开始播放--->"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            boolean r0 = com.bianfeng.fastvo.FastVoice.isRecording()
            if (r0 == 0) goto L22
            r3 = 1405(0x57d, float:1.969E-42)
            java.lang.String r4 = "语音播放失败，正在录音"
            r2.sendResult(r3, r4)
            return
        L22:
            com.bianfeng.ymnsdk.fastvo.SpeakerManager r0 = r2.speakerManager
            r0.openSpeakerphoneOn(r4)
            com.bianfeng.ymnsdk.fastvo.FastVoiceInterface$2 r4 = new com.bianfeng.ymnsdk.fastvo.FastVoiceInterface$2
            r4.<init>(r2)
            com.bianfeng.fastvo.FastVoice.startPlay(r4, r3)
            return
    }

    private void startRecord() {
            r2 = this;
            android.app.Activity r0 = r2.getActivity()
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r0 = com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.newInstance(r0)
            com.bianfeng.ymnsdk.fastvo.FastVoiceInterface$1 r1 = new com.bianfeng.ymnsdk.fastvo.FastVoiceInterface$1
            r1.<init>(r2)
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r0 = r0.setCallback(r1)
            java.lang.String r1 = "android.permission.RECORD_AUDIO"
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r0 = r0.setPermissions(r1)
            r1 = 1024(0x400, float:1.435E-42)
            r0.requestPermissions(r1)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "fastvo_cancel_record")
    public void cancelRecord() {
            r1 = this;
            com.bianfeng.ymnsdk.fastvo.SpeakerManager r0 = r1.speakerManager
            r0.openVolume()
            com.bianfeng.fastvo.FastVoice.cancelRecord()
            return
    }

    @Override
    public java.lang.String getPluginId() {
            r1 = this;
            java.lang.String r0 = "26"
            return r0
    }

    @Override
    public java.lang.String getPluginName() {
            r1 = this;
            java.lang.String r0 = "fastvo"
            return r0
    }

    @Override
    public int getPluginVersion() {
            r1 = this;
            r0 = 35
            return r0
    }

    @Override
    public java.lang.String getSdkVersion() {
            r1 = this;
            java.lang.String r0 = "1.0.2"
            return r0
    }

    @Override
    public void onInit(android.content.Context r3) {
            r2 = this;
            super.onInit(r3)
            com.bianfeng.fastvo.util.FastovAppConextUtils.init(r2)
            com.bianfeng.fastvo.FastVoice.init(r3)
            java.lang.String r0 = "TD_SDK_APP_ID"
            java.lang.String r0 = r2.getMetaData(r0)
            com.bianfeng.fastvo.FastConfig.setAppId(r0)
            java.lang.String r0 = "TD_CHANNEL_ID"
            java.lang.String r0 = r2.getMetaData(r0)
            com.bianfeng.fastvo.FastConfig.setChannel(r0)
            com.bianfeng.platform.PlatformSdk r0 = com.bianfeng.platform.PlatformSdk.getInstance()
            java.lang.String r0 = r0.getPlatformId()
            com.bianfeng.fastvo.FastConfig.setPlatformId(r0)
            java.lang.String r0 = "FASTVO_QUALITY"
            java.lang.String r1 = r2.getMetaData(r0)
            if (r1 == 0) goto L39
            java.lang.String r0 = r2.getMetaData(r0)
            int r0 = java.lang.Integer.parseInt(r0)
            com.bianfeng.fastvo.FastConfig.setQuality(r0)
        L39:
            java.lang.String r0 = "FASTVO_SAMPLE_RATE"
            java.lang.String r1 = r2.getMetaData(r0)
            if (r1 == 0) goto L4c
            java.lang.String r0 = r2.getMetaData(r0)
            int r0 = java.lang.Integer.parseInt(r0)
            com.bianfeng.fastvo.FastConfig.setSampleRate(r0)
        L4c:
            com.bianfeng.ymnsdk.fastvo.SpeakerManager r0 = new com.bianfeng.ymnsdk.fastvo.SpeakerManager
            r0.<init>(r3)
            r2.speakerManager = r0
            return
    }

    @Override
    public void onLogin(java.util.Map<java.lang.String, java.lang.String> r2) {
            r1 = this;
            super.onLogin(r2)
            java.lang.String r0 = "platformUserId"
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            com.bianfeng.fastvo.FastConfig.setUid(r2)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "fastvo_start_native_record")
    public void startNativeRecord() {
            r1 = this;
            r0 = 0
            com.bianfeng.fastvo.FastConfig.setSpeex(r0)
            r1.startRecord()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "fastvo_start_native_record")
    public void startNativeRecord(java.lang.String r1) {
            r0 = this;
            com.bianfeng.fastvo.FastConfig.setOpenId(r1)
            r1 = 0
            com.bianfeng.fastvo.FastConfig.setSpeex(r1)
            r0.startRecord()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "fastvo_start_record")
    public void startSpeexRecord() {
            r1 = this;
            r0 = 1
            com.bianfeng.fastvo.FastConfig.setSpeex(r0)
            r1.startRecord()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "fastvo_start_record")
    public void startSpeexRecord(java.lang.String r1) {
            r0 = this;
            com.bianfeng.fastvo.FastConfig.setOpenId(r1)
            r1 = 1
            com.bianfeng.fastvo.FastConfig.setSpeex(r1)
            r0.startRecord()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "fastvo_stop_play")
    public void stopPlay() {
            r1 = this;
            com.bianfeng.ymnsdk.fastvo.SpeakerManager r0 = r1.speakerManager
            r0.closeSpeakerphoneOn()
            com.bianfeng.fastvo.FastVoice.stopPlay()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "fastvo_stop_record")
    public void stopRecord() {
            r1 = this;
            com.bianfeng.ymnsdk.fastvo.SpeakerManager r0 = r1.speakerManager
            r0.openVolume()
            com.bianfeng.fastvo.FastVoice.stopRecord()
            return
    }
}
