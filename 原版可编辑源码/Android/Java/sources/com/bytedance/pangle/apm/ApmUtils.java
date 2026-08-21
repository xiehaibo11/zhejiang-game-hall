package com.bytedance.pangle.apm;

import org.json.JSONObject;

public class ApmUtils {
    private static volatile AbsApm sApm;

    public static synchronized void register(AbsApm absApm) {
        sApm = absApm;
    }

    public static AbsApm getApmInstance() {
        if (sApm == null) {
            synchronized (AbsApm.class) {
                if (sApm == null) {
                    sApm = new AbsApm() {
                        @Override
                        public final String getDid() {
                            return "0";
                        }

                        @Override
                        public final void init() {
                        }

                        @Override
                        public final void monitorEvent(String str, JSONObject jSONObject, JSONObject jSONObject2, JSONObject jSONObject3) {
                        }

                        @Override
                        public final void reportError(String str, Throwable th) {
                        }
                    };
                }
            }
        }
        return sApm;
    }
}
