package com.mbridge.msdk.foundation.download.resource;

public class ResourceConfig {
    private long maxStorageSpace;
    private java.util.Map<java.lang.String, java.lang.Long> maxStorageSpacePerResourceType;
    private long maxStorageTime;
    private java.util.Map<java.lang.String, java.lang.Long> maxStorageTimePerResourceType;
    private java.util.Queue<com.mbridge.msdk.foundation.download.resource.ResourceStrategy> resourceStrategyQueue;

    static class 1 {
    }

    public static class Builder {
        private long maxStorageSpace;
        private java.util.Map<java.lang.String, java.lang.Long> maxStorageSpacePerResourceType;
        private long maxStorageTime;
        private java.util.Map<java.lang.String, java.lang.Long> maxStorageTimePerResourceType;
        private java.util.Queue<com.mbridge.msdk.foundation.download.resource.ResourceStrategy> resourceStrategyQueue;

        public Builder() {
                r0 = this;
                r0.<init>()
                return
        }

        static long access$000(com.mbridge.msdk.foundation.download.resource.ResourceConfig.Builder r2) {
                long r0 = r2.maxStorageSpace
                return r0
        }

        static long access$100(com.mbridge.msdk.foundation.download.resource.ResourceConfig.Builder r2) {
                long r0 = r2.maxStorageTime
                return r0
        }

        static java.util.Map access$200(com.mbridge.msdk.foundation.download.resource.ResourceConfig.Builder r0) {
                java.util.Map<java.lang.String, java.lang.Long> r0 = r0.maxStorageSpacePerResourceType
                return r0
        }

        static java.util.Map access$300(com.mbridge.msdk.foundation.download.resource.ResourceConfig.Builder r0) {
                java.util.Map<java.lang.String, java.lang.Long> r0 = r0.maxStorageTimePerResourceType
                return r0
        }

        static java.util.Queue access$400(com.mbridge.msdk.foundation.download.resource.ResourceConfig.Builder r0) {
                java.util.Queue<com.mbridge.msdk.foundation.download.resource.ResourceStrategy> r0 = r0.resourceStrategyQueue
                return r0
        }

        public com.mbridge.msdk.foundation.download.resource.ResourceConfig.Builder addMaxStorageSpace(com.mbridge.msdk.foundation.download.DownloadResourceType r2, long r3) {
                r1 = this;
                java.util.Map<java.lang.String, java.lang.Long> r0 = r1.maxStorageSpacePerResourceType
                if (r0 != 0) goto Lb
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                r1.maxStorageSpacePerResourceType = r0
            Lb:
                java.util.Map<java.lang.String, java.lang.Long> r0 = r1.maxStorageSpacePerResourceType
                java.lang.String r2 = r2.name()
                java.lang.Long r3 = java.lang.Long.valueOf(r3)
                r0.put(r2, r3)
                return r1
        }

        public com.mbridge.msdk.foundation.download.resource.ResourceConfig.Builder addMaxStorageTime(com.mbridge.msdk.foundation.download.DownloadResourceType r2, long r3) {
                r1 = this;
                java.util.Map<java.lang.String, java.lang.Long> r0 = r1.maxStorageTimePerResourceType
                if (r0 != 0) goto Lb
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                r1.maxStorageTimePerResourceType = r0
            Lb:
                java.util.Map<java.lang.String, java.lang.Long> r0 = r1.maxStorageTimePerResourceType
                java.lang.String r2 = r2.name()
                java.lang.Long r3 = java.lang.Long.valueOf(r3)
                r0.put(r2, r3)
                return r1
        }

        public com.mbridge.msdk.foundation.download.resource.ResourceConfig.Builder addResourceStrategy(com.mbridge.msdk.foundation.download.resource.ResourceStrategy r2) {
                r1 = this;
                java.util.Queue<com.mbridge.msdk.foundation.download.resource.ResourceStrategy> r0 = r1.resourceStrategyQueue
                if (r0 != 0) goto Lb
                java.util.ArrayDeque r0 = new java.util.ArrayDeque
                r0.<init>()
                r1.resourceStrategyQueue = r0
            Lb:
                java.util.Queue<com.mbridge.msdk.foundation.download.resource.ResourceStrategy> r0 = r1.resourceStrategyQueue
                r0.add(r2)
                return r1
        }

        public com.mbridge.msdk.foundation.download.resource.ResourceConfig build() {
                r2 = this;
                com.mbridge.msdk.foundation.download.resource.ResourceConfig r0 = new com.mbridge.msdk.foundation.download.resource.ResourceConfig
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }

        public com.mbridge.msdk.foundation.download.resource.ResourceConfig.Builder setMaxStorageSpace(long r1) {
                r0 = this;
                r0.maxStorageSpace = r1
                return r0
        }

        public com.mbridge.msdk.foundation.download.resource.ResourceConfig.Builder setMaxStorageTime(long r1) {
                r0 = this;
                r0.maxStorageTime = r1
                return r0
        }
    }

    private ResourceConfig(com.mbridge.msdk.foundation.download.resource.ResourceConfig.Builder r3) {
            r2 = this;
            r2.<init>()
            long r0 = com.mbridge.msdk.foundation.download.resource.ResourceConfig.Builder.access$000(r3)
            r2.maxStorageSpace = r0
            long r0 = com.mbridge.msdk.foundation.download.resource.ResourceConfig.Builder.access$100(r3)
            r2.maxStorageTime = r0
            java.util.Map r0 = com.mbridge.msdk.foundation.download.resource.ResourceConfig.Builder.access$200(r3)
            r2.maxStorageSpacePerResourceType = r0
            java.util.Map r0 = com.mbridge.msdk.foundation.download.resource.ResourceConfig.Builder.access$300(r3)
            r2.maxStorageTimePerResourceType = r0
            java.util.Queue r3 = com.mbridge.msdk.foundation.download.resource.ResourceConfig.Builder.access$400(r3)
            r2.resourceStrategyQueue = r3
            return
    }

    ResourceConfig(com.mbridge.msdk.foundation.download.resource.ResourceConfig.Builder r1, com.mbridge.msdk.foundation.download.resource.ResourceConfig.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public long getMaxStorageSpace() {
            r2 = this;
            long r0 = r2.maxStorageSpace
            return r0
    }

    public long getMaxStorageSpace(com.mbridge.msdk.foundation.download.DownloadResourceType r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Long> r0 = r2.maxStorageSpacePerResourceType
            if (r0 == 0) goto L1f
            java.lang.String r1 = r3.name()
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L1f
            java.util.Map<java.lang.String, java.lang.Long> r0 = r2.maxStorageSpacePerResourceType
            java.lang.String r3 = r3.name()
            java.lang.Object r3 = r0.get(r3)
            java.lang.Long r3 = (java.lang.Long) r3
            long r0 = r3.longValue()
            return r0
        L1f:
            r0 = 0
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.Long> getMaxStorageSpacePerResourceType() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Long> r0 = r1.maxStorageSpacePerResourceType
            return r0
    }

    public long getMaxStorageTime() {
            r2 = this;
            long r0 = r2.maxStorageTime
            return r0
    }

    public long getMaxStorageTime(com.mbridge.msdk.foundation.download.DownloadResourceType r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Long> r0 = r2.maxStorageTimePerResourceType
            if (r0 == 0) goto L1f
            java.lang.String r1 = r3.name()
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L1f
            java.util.Map<java.lang.String, java.lang.Long> r0 = r2.maxStorageTimePerResourceType
            java.lang.String r3 = r3.name()
            java.lang.Object r3 = r0.get(r3)
            java.lang.Long r3 = (java.lang.Long) r3
            long r0 = r3.longValue()
            return r0
        L1f:
            r0 = 0
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.Long> getMaxStorageTimePerResourceType() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Long> r0 = r1.maxStorageTimePerResourceType
            return r0
    }

    public java.util.Queue<com.mbridge.msdk.foundation.download.resource.ResourceStrategy> getResourceStrategyQueue() {
            r1 = this;
            java.util.Queue<com.mbridge.msdk.foundation.download.resource.ResourceStrategy> r0 = r1.resourceStrategyQueue
            return r0
    }
}
