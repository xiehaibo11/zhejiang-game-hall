package com.bianfeng.ymnsdk.feature.protocol;

@java.lang.annotation.Target({java.lang.annotation.ElementType.TYPE})
@java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.RUNTIME)
public @interface YPlugin {

    public enum Entrance extends java.lang.Enum<com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance> {
        private static final com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance[] $VALUES = null;
        public static final com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance ACTIVITY = null;
        public static final com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance APPLICATION = null;
        public static final com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance CONTEXT = null;

        static {
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r0 = new com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance
                r1 = 0
                java.lang.String r2 = "CONTEXT"
                r0.<init>(r2, r1)
                com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.CONTEXT = r0
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r0 = new com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance
                r2 = 1
                java.lang.String r3 = "ACTIVITY"
                r0.<init>(r3, r2)
                com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.ACTIVITY = r0
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r0 = new com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance
                r3 = 2
                java.lang.String r4 = "APPLICATION"
                r0.<init>(r4, r3)
                com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.APPLICATION = r0
                r0 = 3
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance[] r0 = new com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance[r0]
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r4 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.CONTEXT
                r0[r1] = r4
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r1 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.ACTIVITY
                r0[r2] = r1
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r1 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.APPLICATION
                r0[r3] = r1
                com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.$VALUES = r0
                return
        }

        Entrance(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance valueOf(java.lang.String r1) {
                java.lang.Class<com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance> r0 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r1 = (com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance) r1
                return r1
        }

        public static com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance[] values() {
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance[] r0 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.$VALUES
                java.lang.Object r0 = r0.clone()
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance[] r0 = (com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance[]) r0
                return r0
        }
    }

    public enum Policy extends java.lang.Enum<com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy> {
        private static final com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy[] $VALUES = null;
        public static final com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy FORCE = null;
        public static final com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy LAZY = null;
        public static final com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy REMOTE = null;
        public static final com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy TRIGGER = null;

        static {
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy r0 = new com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy
                r1 = 0
                java.lang.String r2 = "LAZY"
                r0.<init>(r2, r1)
                com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.LAZY = r0
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy r0 = new com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy
                r2 = 1
                java.lang.String r3 = "FORCE"
                r0.<init>(r3, r2)
                com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE = r0
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy r0 = new com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy
                r3 = 2
                java.lang.String r4 = "REMOTE"
                r0.<init>(r4, r3)
                com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.REMOTE = r0
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy r0 = new com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy
                r4 = 3
                java.lang.String r5 = "TRIGGER"
                r0.<init>(r5, r4)
                com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.TRIGGER = r0
                r0 = 4
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy[] r0 = new com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy[r0]
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy r5 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.LAZY
                r0[r1] = r5
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy r1 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE
                r0[r2] = r1
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy r1 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.REMOTE
                r0[r3] = r1
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy r1 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.TRIGGER
                r0[r4] = r1
                com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.$VALUES = r0
                return
        }

        Policy(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy valueOf(java.lang.String r1) {
                java.lang.Class<com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy> r0 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy r1 = (com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy) r1
                return r1
        }

        public static com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy[] values() {
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy[] r0 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.$VALUES
                java.lang.Object r0 = r0.clone()
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy[] r0 = (com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy[]) r0
                return r0
        }
    }

    com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance entrance() default com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.CONTEXT;

    com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy strategy() default com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.LAZY;
}
