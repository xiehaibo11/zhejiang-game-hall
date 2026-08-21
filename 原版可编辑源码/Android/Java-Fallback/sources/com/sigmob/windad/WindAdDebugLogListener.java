package com.sigmob.windad;

public interface WindAdDebugLogListener {

    public enum WindAdLogLevel extends java.lang.Enum<com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel> {
        public static final com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel WindLogLevelDebug = null;
        public static final com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel WindLogLevelError = null;
        public static final com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel WindLogLevelInformation = null;
        public static final com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel WindLogLevelWarning = null;
        private static final com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel[] a = null;

        static {
                com.sigmob.windad.WindAdDebugLogListener$WindAdLogLevel r0 = new com.sigmob.windad.WindAdDebugLogListener$WindAdLogLevel
                r1 = 0
                java.lang.String r2 = "WindLogLevelError"
                r0.<init>(r2, r1)
                com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel.WindLogLevelError = r0
                com.sigmob.windad.WindAdDebugLogListener$WindAdLogLevel r0 = new com.sigmob.windad.WindAdDebugLogListener$WindAdLogLevel
                r2 = 1
                java.lang.String r3 = "WindLogLevelWarning"
                r0.<init>(r3, r2)
                com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel.WindLogLevelWarning = r0
                com.sigmob.windad.WindAdDebugLogListener$WindAdLogLevel r0 = new com.sigmob.windad.WindAdDebugLogListener$WindAdLogLevel
                r3 = 2
                java.lang.String r4 = "WindLogLevelInformation"
                r0.<init>(r4, r3)
                com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel.WindLogLevelInformation = r0
                com.sigmob.windad.WindAdDebugLogListener$WindAdLogLevel r0 = new com.sigmob.windad.WindAdDebugLogListener$WindAdLogLevel
                r4 = 3
                java.lang.String r5 = "WindLogLevelDebug"
                r0.<init>(r5, r4)
                com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel.WindLogLevelDebug = r0
                r5 = 4
                com.sigmob.windad.WindAdDebugLogListener$WindAdLogLevel[] r5 = new com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel[r5]
                com.sigmob.windad.WindAdDebugLogListener$WindAdLogLevel r6 = com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel.WindLogLevelError
                r5[r1] = r6
                com.sigmob.windad.WindAdDebugLogListener$WindAdLogLevel r1 = com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel.WindLogLevelWarning
                r5[r2] = r1
                com.sigmob.windad.WindAdDebugLogListener$WindAdLogLevel r1 = com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel.WindLogLevelInformation
                r5[r3] = r1
                r5[r4] = r0
                com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel.a = r5
                return
        }

        WindAdLogLevel(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel valueOf(java.lang.String r1) {
                java.lang.Class<com.sigmob.windad.WindAdDebugLogListener$WindAdLogLevel> r0 = com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.sigmob.windad.WindAdDebugLogListener$WindAdLogLevel r1 = (com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel) r1
                return r1
        }

        public static com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel[] values() {
                com.sigmob.windad.WindAdDebugLogListener$WindAdLogLevel[] r0 = com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel.a
                java.lang.Object r0 = r0.clone()
                com.sigmob.windad.WindAdDebugLogListener$WindAdLogLevel[] r0 = (com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel[]) r0
                return r0
        }
    }

    void windAdDebugLog(java.lang.String r1, com.sigmob.windad.WindAdDebugLogListener.WindAdLogLevel r2);
}
