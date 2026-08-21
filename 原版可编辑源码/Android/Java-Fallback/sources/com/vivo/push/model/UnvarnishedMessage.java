package com.vivo.push.model;

public class UnvarnishedMessage {
    private static final java.lang.String TAG = "UnvarnishedMessage";
    private java.lang.String mMessage;
    private long mMsgId;
    private java.util.Map<java.lang.String, java.lang.String> mParams;
    private int mTargetType;
    private java.lang.String mTragetContent;

    public UnvarnishedMessage() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mParams = r0
            return
    }

    public UnvarnishedMessage(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mParams = r0
            r1.packToObj(r2)
            return
    }

    private void packToObj(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "UnvarnishedMessage"
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: org.json.JSONException -> L39
            if (r1 == 0) goto Le
            java.lang.String r3 = "unvarnishedMsg pack to obj is null"
            com.vivo.push.util.p.a(r0, r3)     // Catch: org.json.JSONException -> L39
            return
        Le:
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: org.json.JSONException -> L39
            r1.<init>(r3)     // Catch: org.json.JSONException -> L39
            r3 = 0
            int r3 = r1.optInt(r3)     // Catch: org.json.JSONException -> L39
            r2.mTargetType = r3     // Catch: org.json.JSONException -> L39
            r3 = 1
            java.lang.String r3 = r1.getString(r3)     // Catch: org.json.JSONException -> L39
            r2.mTragetContent = r3     // Catch: org.json.JSONException -> L39
            r3 = 2
            java.lang.String r3 = r1.getString(r3)     // Catch: org.json.JSONException -> L39
            r2.mMessage = r3     // Catch: org.json.JSONException -> L39
            r3 = 3
            java.lang.String r3 = r1.getString(r3)     // Catch: org.json.JSONException -> L39
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L39
            r1.<init>(r3)     // Catch: org.json.JSONException -> L39
            java.util.Map r3 = com.vivo.push.util.m.a(r1)     // Catch: org.json.JSONException -> L39
            r2.mParams = r3     // Catch: org.json.JSONException -> L39
            return
        L39:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.String r1 = "unvarnishedMsg pack to obj error"
            com.vivo.push.util.p.a(r0, r1, r3)
            return
    }

    public java.lang.String getMessage() {
            r1 = this;
            java.lang.String r0 = r1.mMessage
            return r0
    }

    public long getMsgId() {
            r2 = this;
            long r0 = r2.mMsgId
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getParams() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mParams
            return r0
    }

    public int getTargetType() {
            r1 = this;
            int r0 = r1.mTargetType
            return r0
    }

    public java.lang.String getTragetContent() {
            r1 = this;
            java.lang.String r0 = r1.mTragetContent
            return r0
    }

    public void setMessage(java.lang.String r1) {
            r0 = this;
            r0.mMessage = r1
            return
    }

    public void setMsgId(long r1) {
            r0 = this;
            r0.mMsgId = r1
            return
    }

    public void setParams(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.mParams = r1
            return
    }

    public void setTargetType(int r1) {
            r0 = this;
            r0.mTargetType = r1
            return
    }

    public void setTragetContent(java.lang.String r1) {
            r0 = this;
            r0.mTragetContent = r1
            return
    }

    public java.lang.String unpackToJson() {
            r2 = this;
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            int r1 = r2.mTargetType
            r0.put(r1)
            java.lang.String r1 = r2.mTragetContent
            r0.put(r1)
            java.lang.String r1 = r2.mMessage
            r0.put(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r2.mParams
            if (r1 != 0) goto L1d
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
        L1d:
            r0.put(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
