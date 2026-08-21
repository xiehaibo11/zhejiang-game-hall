package com.github.lzyzsd.jsbridge;

public class Message {
    private static final java.lang.String CALLBACK_ID_STR = "callbackId";
    private static final java.lang.String DATA_STR = "data";
    private static final java.lang.String HANDLER_NAME_STR = "handlerName";
    private static final java.lang.String RESPONSE_DATA_STR = "responseData";
    private static final java.lang.String RESPONSE_ID_STR = "responseId";
    private java.lang.String callbackId;
    private java.lang.String data;
    private java.lang.String handlerName;
    private java.lang.String responseData;
    private java.lang.String responseId;

    public Message() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.List<com.github.lzyzsd.jsbridge.Message> toArrayList(java.lang.String r11) {
            java.lang.String r0 = "data"
            java.lang.String r1 = "responseId"
            java.lang.String r2 = "responseData"
            java.lang.String r3 = "callbackId"
            java.lang.String r4 = "handlerName"
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            org.json.JSONArray r6 = new org.json.JSONArray     // Catch: org.json.JSONException -> L74
            r6.<init>(r11)     // Catch: org.json.JSONException -> L74
            r11 = 0
        L15:
            int r7 = r6.length()     // Catch: org.json.JSONException -> L74
            if (r11 >= r7) goto L78
            com.github.lzyzsd.jsbridge.Message r7 = new com.github.lzyzsd.jsbridge.Message     // Catch: org.json.JSONException -> L74
            r7.<init>()     // Catch: org.json.JSONException -> L74
            org.json.JSONObject r8 = r6.getJSONObject(r11)     // Catch: org.json.JSONException -> L74
            boolean r9 = r8.has(r4)     // Catch: org.json.JSONException -> L74
            r10 = 0
            if (r9 == 0) goto L30
            java.lang.String r9 = r8.getString(r4)     // Catch: org.json.JSONException -> L74
            goto L31
        L30:
            r9 = r10
        L31:
            r7.setHandlerName(r9)     // Catch: org.json.JSONException -> L74
            boolean r9 = r8.has(r3)     // Catch: org.json.JSONException -> L74
            if (r9 == 0) goto L3f
            java.lang.String r9 = r8.getString(r3)     // Catch: org.json.JSONException -> L74
            goto L40
        L3f:
            r9 = r10
        L40:
            r7.setCallbackId(r9)     // Catch: org.json.JSONException -> L74
            boolean r9 = r8.has(r2)     // Catch: org.json.JSONException -> L74
            if (r9 == 0) goto L4e
            java.lang.String r9 = r8.getString(r2)     // Catch: org.json.JSONException -> L74
            goto L4f
        L4e:
            r9 = r10
        L4f:
            r7.setResponseData(r9)     // Catch: org.json.JSONException -> L74
            boolean r9 = r8.has(r1)     // Catch: org.json.JSONException -> L74
            if (r9 == 0) goto L5d
            java.lang.String r9 = r8.getString(r1)     // Catch: org.json.JSONException -> L74
            goto L5e
        L5d:
            r9 = r10
        L5e:
            r7.setResponseId(r9)     // Catch: org.json.JSONException -> L74
            boolean r9 = r8.has(r0)     // Catch: org.json.JSONException -> L74
            if (r9 == 0) goto L6b
            java.lang.String r10 = r8.getString(r0)     // Catch: org.json.JSONException -> L74
        L6b:
            r7.setData(r10)     // Catch: org.json.JSONException -> L74
            r5.add(r7)     // Catch: org.json.JSONException -> L74
            int r11 = r11 + 1
            goto L15
        L74:
            r11 = move-exception
            r11.printStackTrace()
        L78:
            return r5
    }

    public static com.github.lzyzsd.jsbridge.Message toObject(java.lang.String r8) {
            java.lang.String r0 = "data"
            java.lang.String r1 = "responseId"
            java.lang.String r2 = "responseData"
            java.lang.String r3 = "callbackId"
            java.lang.String r4 = "handlerName"
            com.github.lzyzsd.jsbridge.Message r5 = new com.github.lzyzsd.jsbridge.Message
            r5.<init>()
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: org.json.JSONException -> L5f
            r6.<init>(r8)     // Catch: org.json.JSONException -> L5f
            boolean r8 = r6.has(r4)     // Catch: org.json.JSONException -> L5f
            r7 = 0
            if (r8 == 0) goto L20
            java.lang.String r8 = r6.getString(r4)     // Catch: org.json.JSONException -> L5f
            goto L21
        L20:
            r8 = r7
        L21:
            r5.setHandlerName(r8)     // Catch: org.json.JSONException -> L5f
            boolean r8 = r6.has(r3)     // Catch: org.json.JSONException -> L5f
            if (r8 == 0) goto L2f
            java.lang.String r8 = r6.getString(r3)     // Catch: org.json.JSONException -> L5f
            goto L30
        L2f:
            r8 = r7
        L30:
            r5.setCallbackId(r8)     // Catch: org.json.JSONException -> L5f
            boolean r8 = r6.has(r2)     // Catch: org.json.JSONException -> L5f
            if (r8 == 0) goto L3e
            java.lang.String r8 = r6.getString(r2)     // Catch: org.json.JSONException -> L5f
            goto L3f
        L3e:
            r8 = r7
        L3f:
            r5.setResponseData(r8)     // Catch: org.json.JSONException -> L5f
            boolean r8 = r6.has(r1)     // Catch: org.json.JSONException -> L5f
            if (r8 == 0) goto L4d
            java.lang.String r8 = r6.getString(r1)     // Catch: org.json.JSONException -> L5f
            goto L4e
        L4d:
            r8 = r7
        L4e:
            r5.setResponseId(r8)     // Catch: org.json.JSONException -> L5f
            boolean r8 = r6.has(r0)     // Catch: org.json.JSONException -> L5f
            if (r8 == 0) goto L5b
            java.lang.String r7 = r6.getString(r0)     // Catch: org.json.JSONException -> L5f
        L5b:
            r5.setData(r7)     // Catch: org.json.JSONException -> L5f
            return r5
        L5f:
            r8 = move-exception
            r8.printStackTrace()
            return r5
    }

    public java.lang.String getCallbackId() {
            r1 = this;
            java.lang.String r0 = r1.callbackId
            return r0
    }

    public java.lang.String getData() {
            r1 = this;
            java.lang.String r0 = r1.data
            return r0
    }

    public java.lang.String getHandlerName() {
            r1 = this;
            java.lang.String r0 = r1.handlerName
            return r0
    }

    public java.lang.String getResponseData() {
            r1 = this;
            java.lang.String r0 = r1.responseData
            return r0
    }

    public java.lang.String getResponseId() {
            r1 = this;
            java.lang.String r0 = r1.responseId
            return r0
    }

    public void setCallbackId(java.lang.String r1) {
            r0 = this;
            r0.callbackId = r1
            return
    }

    public void setData(java.lang.String r1) {
            r0 = this;
            r0.data = r1
            return
    }

    public void setHandlerName(java.lang.String r1) {
            r0 = this;
            r0.handlerName = r1
            return
    }

    public void setResponseData(java.lang.String r1) {
            r0 = this;
            r0.responseData = r1
            return
    }

    public void setResponseId(java.lang.String r1) {
            r0 = this;
            r0.responseId = r1
            return
    }

    public java.lang.String toJson() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "callbackId"
            java.lang.String r2 = r4.getCallbackId()     // Catch: org.json.JSONException -> L51
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L51
            java.lang.String r1 = "data"
            java.lang.String r2 = r4.getData()     // Catch: org.json.JSONException -> L51
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L51
            java.lang.String r1 = "handlerName"
            java.lang.String r2 = r4.getHandlerName()     // Catch: org.json.JSONException -> L51
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L51
            java.lang.String r1 = r4.getResponseData()     // Catch: org.json.JSONException -> L51
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L51
            java.lang.String r3 = "responseData"
            if (r2 == 0) goto L30
            r0.put(r3, r1)     // Catch: org.json.JSONException -> L51
            goto L3c
        L30:
            org.json.JSONTokener r2 = new org.json.JSONTokener     // Catch: org.json.JSONException -> L51
            r2.<init>(r1)     // Catch: org.json.JSONException -> L51
            java.lang.Object r1 = r2.nextValue()     // Catch: org.json.JSONException -> L51
            r0.put(r3, r1)     // Catch: org.json.JSONException -> L51
        L3c:
            java.lang.String r1 = r4.getResponseData()     // Catch: org.json.JSONException -> L51
            r0.put(r3, r1)     // Catch: org.json.JSONException -> L51
            java.lang.String r1 = "responseId"
            java.lang.String r2 = r4.getResponseId()     // Catch: org.json.JSONException -> L51
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L51
            java.lang.String r0 = r0.toString()     // Catch: org.json.JSONException -> L51
            return r0
        L51:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }
}
