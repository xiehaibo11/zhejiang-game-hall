package com.bianfeng.seppellita.event;

public class EventManager {
    public EventManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void launch() {
            java.lang.String r0 = "launch"
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "act"
            java.lang.String r2 = "push"
            r0.put(r1, r2)
            java.lang.String r1 = "pg"
            java.lang.String r2 = "P0010"
            r0.put(r1, r2)
            java.lang.String r1 = "eid"
            java.lang.String r2 = "100"
            r0.put(r1, r2)
            com.bianfeng.seppellita.SepperllitaSdk r1 = com.bianfeng.seppellita.SepperllitaSdk.getInstance()
            java.lang.String r0 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.toJson(r0)
            r1.post(r0)
            return
    }

    public static void onPause(java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onPause--->"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = "----"
            r0.append(r1)
            long r1 = java.lang.System.currentTimeMillis()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "act"
            java.lang.String r2 = "access"
            r0.put(r1, r2)
            java.lang.String r1 = "pg"
            java.lang.String r2 = "P0100"
            r0.put(r1, r2)
            java.lang.String r1 = "dur"
            r0.put(r1, r3)
            com.bianfeng.seppellita.SepperllitaSdk r3 = com.bianfeng.seppellita.SepperllitaSdk.getInstance()
            java.lang.String r0 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.toJson(r0)
            r3.post(r0)
            return
    }
}
