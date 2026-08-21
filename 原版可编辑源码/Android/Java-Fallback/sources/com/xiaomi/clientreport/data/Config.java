package com.xiaomi.clientreport.data;

public class Config {
    public static final boolean DEFAULT_EVENT_ENCRYPTED = true;
    public static final long DEFAULT_EVENT_UPLOAD_FREQUENCY = 86400;
    public static final boolean DEFAULT_EVENT_UPLOAD_SWITCH_OPEN = false;
    public static final long DEFAULT_MAX_FILE_LENGTH = 1048576;
    public static final long DEFAULT_PERF_UPLOAD_FREQUENCY = 86400;
    public static final boolean DEFAULT_PERF_UPLOAD_SWITCH_OPEN = false;
    private java.lang.String mAESKey;
    private boolean mEventEncrypted;
    private long mEventUploadFrequency;
    private boolean mEventUploadSwitchOpen;
    private long mMaxFileLength;
    private long mPerfUploadFrequency;
    private boolean mPerfUploadSwitchOpen;

    public class Builder {
        private java.lang.String mAESKey;
        private int mEventEncrypted;
        private long mEventUploadFrequency;
        private int mEventUploadSwitchOpen;
        private long mMaxFileLength;
        private long mPerfUploadFrequency;
        private int mPerfUploadSwitchOpen;

        public Builder() {
                r2 = this;
                r2.<init>()
                r0 = -1
                r2.mEventEncrypted = r0
                r2.mEventUploadSwitchOpen = r0
                r2.mPerfUploadSwitchOpen = r0
                r0 = 0
                r2.mAESKey = r0
                r0 = -1
                r2.mMaxFileLength = r0
                r2.mEventUploadFrequency = r0
                r2.mPerfUploadFrequency = r0
                return
        }

        static int access$000(com.xiaomi.clientreport.data.Config.Builder r0) {
                int r0 = r0.mEventEncrypted
                return r0
        }

        static java.lang.String access$100(com.xiaomi.clientreport.data.Config.Builder r0) {
                java.lang.String r0 = r0.mAESKey
                return r0
        }

        static long access$200(com.xiaomi.clientreport.data.Config.Builder r2) {
                long r0 = r2.mMaxFileLength
                return r0
        }

        static long access$300(com.xiaomi.clientreport.data.Config.Builder r2) {
                long r0 = r2.mEventUploadFrequency
                return r0
        }

        static long access$400(com.xiaomi.clientreport.data.Config.Builder r2) {
                long r0 = r2.mPerfUploadFrequency
                return r0
        }

        static int access$500(com.xiaomi.clientreport.data.Config.Builder r0) {
                int r0 = r0.mEventUploadSwitchOpen
                return r0
        }

        static int access$600(com.xiaomi.clientreport.data.Config.Builder r0) {
                int r0 = r0.mPerfUploadSwitchOpen
                return r0
        }

        public com.xiaomi.clientreport.data.Config build(android.content.Context r3) {
                r2 = this;
                com.xiaomi.clientreport.data.Config r0 = new com.xiaomi.clientreport.data.Config
                r1 = 0
                r0.<init>(r3, r2, r1)
                return r0
        }

        public com.xiaomi.clientreport.data.Config.Builder setAESKey(java.lang.String r1) {
                r0 = this;
                r0.mAESKey = r1
                return r0
        }

        public com.xiaomi.clientreport.data.Config.Builder setEventEncrypted(boolean r1) {
                r0 = this;
                r0.mEventEncrypted = r1
                return r0
        }

        public com.xiaomi.clientreport.data.Config.Builder setEventUploadFrequency(long r1) {
                r0 = this;
                r0.mEventUploadFrequency = r1
                return r0
        }

        public com.xiaomi.clientreport.data.Config.Builder setEventUploadSwitchOpen(boolean r1) {
                r0 = this;
                r0.mEventUploadSwitchOpen = r1
                return r0
        }

        public com.xiaomi.clientreport.data.Config.Builder setMaxFileLength(long r1) {
                r0 = this;
                r0.mMaxFileLength = r1
                return r0
        }

        public com.xiaomi.clientreport.data.Config.Builder setPerfUploadFrequency(long r1) {
                r0 = this;
                r0.mPerfUploadFrequency = r1
                return r0
        }

        public com.xiaomi.clientreport.data.Config.Builder setPerfUploadSwitchOpen(boolean r1) {
                r0 = this;
                r0.mPerfUploadSwitchOpen = r1
                return r0
        }
    }

    private Config() {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.mEventEncrypted = r0
            r0 = 0
            r2.mEventUploadSwitchOpen = r0
            r2.mPerfUploadSwitchOpen = r0
            r0 = 1048576(0x100000, double:5.180654E-318)
            r2.mMaxFileLength = r0
            r0 = 86400(0x15180, double:4.26873E-319)
            r2.mEventUploadFrequency = r0
            r2.mPerfUploadFrequency = r0
            return
    }

    private Config(android.content.Context r11, com.xiaomi.clientreport.data.Config.Builder r12) {
            r10 = this;
            r10.<init>()
            r0 = 1
            r10.mEventEncrypted = r0
            r1 = 0
            r10.mEventUploadSwitchOpen = r1
            r10.mPerfUploadSwitchOpen = r1
            r2 = 1048576(0x100000, double:5.180654E-318)
            r10.mMaxFileLength = r2
            r4 = 86400(0x15180, double:4.26873E-319)
            r10.mEventUploadFrequency = r4
            r10.mPerfUploadFrequency = r4
            int r6 = com.xiaomi.clientreport.data.Config.Builder.access$000(r12)
            if (r6 != 0) goto L20
            r10.mEventEncrypted = r1
            goto L26
        L20:
            int r6 = com.xiaomi.clientreport.data.Config.Builder.access$000(r12)
            r10.mEventEncrypted = r0
        L26:
            java.lang.String r6 = com.xiaomi.clientreport.data.Config.Builder.access$100(r12)
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L35
            java.lang.String r11 = com.xiaomi.clientreport.data.Config.Builder.access$100(r12)
            goto L39
        L35:
            java.lang.String r11 = com.xiaomi.push.bt.a(r11)
        L39:
            r10.mAESKey = r11
            long r6 = com.xiaomi.clientreport.data.Config.Builder.access$200(r12)
            r8 = -1
            int r11 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r11 <= 0) goto L49
            long r2 = com.xiaomi.clientreport.data.Config.Builder.access$200(r12)
        L49:
            r10.mMaxFileLength = r2
            long r2 = com.xiaomi.clientreport.data.Config.Builder.access$300(r12)
            int r11 = (r2 > r8 ? 1 : (r2 == r8 ? 0 : -1))
            if (r11 <= 0) goto L5a
            long r2 = com.xiaomi.clientreport.data.Config.Builder.access$300(r12)
            r10.mEventUploadFrequency = r2
            goto L5c
        L5a:
            r10.mEventUploadFrequency = r4
        L5c:
            long r2 = com.xiaomi.clientreport.data.Config.Builder.access$400(r12)
            int r11 = (r2 > r8 ? 1 : (r2 == r8 ? 0 : -1))
            if (r11 <= 0) goto L6b
            long r2 = com.xiaomi.clientreport.data.Config.Builder.access$400(r12)
            r10.mPerfUploadFrequency = r2
            goto L6d
        L6b:
            r10.mPerfUploadFrequency = r4
        L6d:
            int r11 = com.xiaomi.clientreport.data.Config.Builder.access$500(r12)
            if (r11 != 0) goto L76
        L73:
            r10.mEventUploadSwitchOpen = r1
            goto L7e
        L76:
            int r11 = com.xiaomi.clientreport.data.Config.Builder.access$500(r12)
            if (r11 != r0) goto L73
            r10.mEventUploadSwitchOpen = r0
        L7e:
            int r11 = com.xiaomi.clientreport.data.Config.Builder.access$600(r12)
            if (r11 != 0) goto L87
        L84:
            r10.mPerfUploadSwitchOpen = r1
            goto L8f
        L87:
            int r11 = com.xiaomi.clientreport.data.Config.Builder.access$600(r12)
            if (r11 != r0) goto L84
            r10.mPerfUploadSwitchOpen = r0
        L8f:
            return
    }

    Config(android.content.Context r1, com.xiaomi.clientreport.data.Config.Builder r2, com.xiaomi.clientreport.data.b r3) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.xiaomi.clientreport.data.Config defaultConfig(android.content.Context r4) {
            com.xiaomi.clientreport.data.Config$Builder r0 = getBuilder()
            r1 = 1
            com.xiaomi.clientreport.data.Config$Builder r0 = r0.setEventEncrypted(r1)
            java.lang.String r1 = com.xiaomi.push.bt.a(r4)
            com.xiaomi.clientreport.data.Config$Builder r0 = r0.setAESKey(r1)
            r1 = 1048576(0x100000, double:5.180654E-318)
            com.xiaomi.clientreport.data.Config$Builder r0 = r0.setMaxFileLength(r1)
            r1 = 0
            com.xiaomi.clientreport.data.Config$Builder r0 = r0.setEventUploadSwitchOpen(r1)
            r2 = 86400(0x15180, double:4.26873E-319)
            com.xiaomi.clientreport.data.Config$Builder r0 = r0.setEventUploadFrequency(r2)
            com.xiaomi.clientreport.data.Config$Builder r0 = r0.setPerfUploadSwitchOpen(r1)
            com.xiaomi.clientreport.data.Config$Builder r0 = r0.setPerfUploadFrequency(r2)
            com.xiaomi.clientreport.data.Config r4 = r0.build(r4)
            return r4
    }

    public static com.xiaomi.clientreport.data.Config.Builder getBuilder() {
            com.xiaomi.clientreport.data.Config$Builder r0 = new com.xiaomi.clientreport.data.Config$Builder
            r0.<init>()
            return r0
    }

    public long getEventUploadFrequency() {
            r2 = this;
            long r0 = r2.mEventUploadFrequency
            return r0
    }

    public long getMaxFileLength() {
            r2 = this;
            long r0 = r2.mMaxFileLength
            return r0
    }

    public long getPerfUploadFrequency() {
            r2 = this;
            long r0 = r2.mPerfUploadFrequency
            return r0
    }

    public boolean isEventEncrypted() {
            r1 = this;
            boolean r0 = r1.mEventEncrypted
            return r0
    }

    public boolean isEventUploadSwitchOpen() {
            r1 = this;
            boolean r0 = r1.mEventUploadSwitchOpen
            return r0
    }

    public boolean isPerfUploadSwitchOpen() {
            r1 = this;
            boolean r0 = r1.mPerfUploadSwitchOpen
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Config{mEventEncrypted="
            r0.append(r1)
            boolean r1 = r3.mEventEncrypted
            r0.append(r1)
            java.lang.String r1 = ", mAESKey='"
            r0.append(r1)
            java.lang.String r1 = r3.mAESKey
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r1 = ", mMaxFileLength="
            r0.append(r1)
            long r1 = r3.mMaxFileLength
            r0.append(r1)
            java.lang.String r1 = ", mEventUploadSwitchOpen="
            r0.append(r1)
            boolean r1 = r3.mEventUploadSwitchOpen
            r0.append(r1)
            java.lang.String r1 = ", mPerfUploadSwitchOpen="
            r0.append(r1)
            boolean r1 = r3.mPerfUploadSwitchOpen
            r0.append(r1)
            java.lang.String r1 = ", mEventUploadFrequency="
            r0.append(r1)
            long r1 = r3.mEventUploadFrequency
            r0.append(r1)
            java.lang.String r1 = ", mPerfUploadFrequency="
            r0.append(r1)
            long r1 = r3.mPerfUploadFrequency
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
