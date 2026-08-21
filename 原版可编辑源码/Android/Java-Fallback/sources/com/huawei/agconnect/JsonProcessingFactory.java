package com.huawei.agconnect;

public final class JsonProcessingFactory {
    private static final java.util.Map<java.lang.String, com.huawei.agconnect.JsonProcessingFactory.JsonProcessor> PROCESSOR_MAP = null;

    public interface JsonProcessor {
        java.lang.String processOption(com.huawei.agconnect.AGConnectOptions r1);
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.huawei.agconnect.JsonProcessingFactory.PROCESSOR_MAP = r0
            return
    }

    public JsonProcessingFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.Map<java.lang.String, com.huawei.agconnect.JsonProcessingFactory.JsonProcessor> getProcessors() {
            java.util.Map<java.lang.String, com.huawei.agconnect.JsonProcessingFactory$JsonProcessor> r0 = com.huawei.agconnect.JsonProcessingFactory.PROCESSOR_MAP
            return r0
    }

    public static void registerProcessor(java.lang.String r1, com.huawei.agconnect.JsonProcessingFactory.JsonProcessor r2) {
            java.util.Map<java.lang.String, com.huawei.agconnect.JsonProcessingFactory$JsonProcessor> r0 = com.huawei.agconnect.JsonProcessingFactory.PROCESSOR_MAP
            r0.put(r1, r2)
            return
    }
}
