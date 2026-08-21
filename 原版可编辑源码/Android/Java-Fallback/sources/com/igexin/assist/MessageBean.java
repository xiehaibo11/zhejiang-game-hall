package com.igexin.assist;

public class MessageBean {
    private android.content.Context context;
    public final android.os.Bundle extra;
    private java.lang.Object message;
    private java.lang.String messageSource;
    private java.lang.String messageType;

    public MessageBean(android.content.Context r2, java.lang.String r3, java.lang.Object r4) {
            r1 = this;
            r1.<init>()
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r1.extra = r0
            r1.messageType = r3
            r1.message = r4
            r1.context = r2
            return
    }

    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = r1.context
            return r0
    }

    public java.lang.Object getMessage() {
            r1 = this;
            java.lang.Object r0 = r1.message
            return r0
    }

    public java.lang.String getMessageSource() {
            r1 = this;
            java.lang.String r0 = r1.messageSource
            return r0
    }

    public java.lang.String getMessageType() {
            r1 = this;
            java.lang.String r0 = r1.messageType
            return r0
    }

    public java.lang.Object getObjectMessage() {
            r1 = this;
            java.lang.Object r0 = r1.message
            return r0
    }

    public java.lang.String getStringMessage() {
            r2 = this;
            java.lang.Object r0 = r2.message
            boolean r1 = r0 instanceof java.lang.String
            if (r1 == 0) goto L9
            java.lang.String r0 = (java.lang.String) r0
            return r0
        L9:
            r0 = 0
            return r0
    }

    public void setMessageSource(java.lang.String r1) {
            r0 = this;
            r0.messageSource = r1
            return
    }
}
