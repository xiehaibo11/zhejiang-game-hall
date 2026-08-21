package com.bytedance.android.live.base.api.push;

public interface ILivePush {
    public static final java.lang.String TAG = "livePush";

    public enum ClickType extends java.lang.Enum<com.bytedance.android.live.base.api.push.ILivePush.ClickType> {
        private static final com.bytedance.android.live.base.api.push.ILivePush.ClickType[] $VALUES = null;
        public static final com.bytedance.android.live.base.api.push.ILivePush.ClickType CLOSE = null;
        public static final com.bytedance.android.live.base.api.push.ILivePush.ClickType LIVE = null;
        private final java.lang.String value;

        static {
                com.bytedance.android.live.base.api.push.ILivePush$ClickType r0 = new com.bytedance.android.live.base.api.push.ILivePush$ClickType
                r1 = 0
                java.lang.String r2 = "LIVE"
                java.lang.String r3 = "live"
                r0.<init>(r2, r1, r3)
                com.bytedance.android.live.base.api.push.ILivePush.ClickType.LIVE = r0
                com.bytedance.android.live.base.api.push.ILivePush$ClickType r0 = new com.bytedance.android.live.base.api.push.ILivePush$ClickType
                r2 = 1
                java.lang.String r3 = "CLOSE"
                java.lang.String r4 = "close"
                r0.<init>(r3, r2, r4)
                com.bytedance.android.live.base.api.push.ILivePush.ClickType.CLOSE = r0
                r3 = 2
                com.bytedance.android.live.base.api.push.ILivePush$ClickType[] r3 = new com.bytedance.android.live.base.api.push.ILivePush.ClickType[r3]
                com.bytedance.android.live.base.api.push.ILivePush$ClickType r4 = com.bytedance.android.live.base.api.push.ILivePush.ClickType.LIVE
                r3[r1] = r4
                r3[r2] = r0
                com.bytedance.android.live.base.api.push.ILivePush.ClickType.$VALUES = r3
                return
        }

        ClickType(java.lang.String r1, int r2, java.lang.String r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.value = r3
                return
        }

        public static com.bytedance.android.live.base.api.push.ILivePush.ClickType valueOf(java.lang.String r1) {
                java.lang.Class<com.bytedance.android.live.base.api.push.ILivePush$ClickType> r0 = com.bytedance.android.live.base.api.push.ILivePush.ClickType.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.bytedance.android.live.base.api.push.ILivePush$ClickType r1 = (com.bytedance.android.live.base.api.push.ILivePush.ClickType) r1
                return r1
        }

        public static com.bytedance.android.live.base.api.push.ILivePush.ClickType[] values() {
                com.bytedance.android.live.base.api.push.ILivePush$ClickType[] r0 = com.bytedance.android.live.base.api.push.ILivePush.ClickType.$VALUES
                java.lang.Object r0 = r0.clone()
                com.bytedance.android.live.base.api.push.ILivePush$ClickType[] r0 = (com.bytedance.android.live.base.api.push.ILivePush.ClickType[]) r0
                return r0
        }

        public final java.lang.String getValue() {
                r1 = this;
                java.lang.String r0 = r1.value
                return r0
        }
    }

    public enum PushType extends java.lang.Enum<com.bytedance.android.live.base.api.push.ILivePush.PushType> {
        private static final com.bytedance.android.live.base.api.push.ILivePush.PushType[] $VALUES = null;
        public static final com.bytedance.android.live.base.api.push.ILivePush.PushType CLOD_LAUNCH = null;
        public static final com.bytedance.android.live.base.api.push.ILivePush.PushType SELF_DRIVING = null;
        public static final com.bytedance.android.live.base.api.push.ILivePush.PushType VIDEO = null;
        private final int value;

        static {
                com.bytedance.android.live.base.api.push.ILivePush$PushType r0 = new com.bytedance.android.live.base.api.push.ILivePush$PushType
                r1 = 0
                r2 = 1
                java.lang.String r3 = "SELF_DRIVING"
                r0.<init>(r3, r1, r2)
                com.bytedance.android.live.base.api.push.ILivePush.PushType.SELF_DRIVING = r0
                com.bytedance.android.live.base.api.push.ILivePush$PushType r0 = new com.bytedance.android.live.base.api.push.ILivePush$PushType
                r3 = 2
                java.lang.String r4 = "CLOD_LAUNCH"
                r0.<init>(r4, r2, r3)
                com.bytedance.android.live.base.api.push.ILivePush.PushType.CLOD_LAUNCH = r0
                com.bytedance.android.live.base.api.push.ILivePush$PushType r0 = new com.bytedance.android.live.base.api.push.ILivePush$PushType
                r4 = 3
                java.lang.String r5 = "VIDEO"
                r0.<init>(r5, r3, r4)
                com.bytedance.android.live.base.api.push.ILivePush.PushType.VIDEO = r0
                com.bytedance.android.live.base.api.push.ILivePush$PushType[] r4 = new com.bytedance.android.live.base.api.push.ILivePush.PushType[r4]
                com.bytedance.android.live.base.api.push.ILivePush$PushType r5 = com.bytedance.android.live.base.api.push.ILivePush.PushType.SELF_DRIVING
                r4[r1] = r5
                com.bytedance.android.live.base.api.push.ILivePush$PushType r1 = com.bytedance.android.live.base.api.push.ILivePush.PushType.CLOD_LAUNCH
                r4[r2] = r1
                r4[r3] = r0
                com.bytedance.android.live.base.api.push.ILivePush.PushType.$VALUES = r4
                return
        }

        PushType(java.lang.String r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.value = r3
                return
        }

        public static com.bytedance.android.live.base.api.push.ILivePush.PushType valueOf(java.lang.String r1) {
                java.lang.Class<com.bytedance.android.live.base.api.push.ILivePush$PushType> r0 = com.bytedance.android.live.base.api.push.ILivePush.PushType.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.bytedance.android.live.base.api.push.ILivePush$PushType r1 = (com.bytedance.android.live.base.api.push.ILivePush.PushType) r1
                return r1
        }

        public static com.bytedance.android.live.base.api.push.ILivePush.PushType[] values() {
                com.bytedance.android.live.base.api.push.ILivePush$PushType[] r0 = com.bytedance.android.live.base.api.push.ILivePush.PushType.$VALUES
                java.lang.Object r0 = r0.clone()
                com.bytedance.android.live.base.api.push.ILivePush$PushType[] r0 = (com.bytedance.android.live.base.api.push.ILivePush.PushType[]) r0
                return r0
        }

        public final int getValue() {
                r1 = this;
                int r0 = r1.value
                return r0
        }
    }

    void addPushInterceptor(com.bytedance.android.live.base.api.push.PushInterceptor r1);

    void clickPush(com.bytedance.android.live.base.api.push.model.PushData r1, android.content.Context r2);

    void dismiss();

    void enterRoom(android.content.Context r1, com.bytedance.android.live.base.api.push.model.PushData r2);

    boolean isShowing();

    void removePushInterceptor(com.bytedance.android.live.base.api.push.PushInterceptor r1);

    void reportPushClick(com.bytedance.android.live.base.api.push.model.PushData r1, com.bytedance.android.live.base.api.push.ILivePush.ClickType r2);

    void reportShow(com.bytedance.android.live.base.api.push.model.PushData r1);

    void requestPush(com.bytedance.android.live.base.api.push.PushCallback r1);

    void requestPushAndShow(boolean r1, android.app.Activity r2, com.bytedance.android.live.base.api.push.ILivePush.PushType r3, com.bytedance.android.live.base.api.push.PushCallback r4, com.bytedance.android.live.base.api.push.model.PushUIConfig r5);
}
