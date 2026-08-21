package com.xiaomi.clientreport.processor;

public interface IEventProcessor extends com.xiaomi.clientreport.processor.c, com.xiaomi.clientreport.processor.d {
    java.lang.String bytesToString(byte[] r1);

    void setEventMap(java.util.HashMap<java.lang.String, java.util.ArrayList<com.xiaomi.clientreport.data.a>> r1);

    byte[] stringToBytes(java.lang.String r1);
}
