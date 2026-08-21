package com.xiaomi.mipush.sdk;

public class MiPushCommandMessage implements com.xiaomi.mipush.sdk.PushMessageHandler.a {
    private static final java.lang.String KEY_AUTO_MARK_PKGS = "autoMarkPkgs";
    private static final java.lang.String KEY_CATEGORY = "category";
    private static final java.lang.String KEY_COMMAND = "command";
    private static final java.lang.String KEY_COMMAND_ARGUMENTS = "commandArguments";
    private static final java.lang.String KEY_REASON = "reason";
    private static final java.lang.String KEY_RESULT_CODE = "resultCode";
    private static final long serialVersionUID = 1;
    private java.util.List<java.lang.String> autoMarkPkgs;
    private java.lang.String category;
    private java.lang.String command;
    private java.util.List<java.lang.String> commandArguments;
    private java.lang.String reason;
    private long resultCode;

    public MiPushCommandMessage() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.xiaomi.mipush.sdk.MiPushCommandMessage fromBundle(android.os.Bundle r3) {
            com.xiaomi.mipush.sdk.MiPushCommandMessage r0 = new com.xiaomi.mipush.sdk.MiPushCommandMessage
            r0.<init>()
            java.lang.String r1 = "command"
            java.lang.String r1 = r3.getString(r1)
            r0.command = r1
            java.lang.String r1 = "resultCode"
            long r1 = r3.getLong(r1)
            r0.resultCode = r1
            java.lang.String r1 = "reason"
            java.lang.String r1 = r3.getString(r1)
            r0.reason = r1
            java.lang.String r1 = "commandArguments"
            java.util.ArrayList r1 = r3.getStringArrayList(r1)
            r0.commandArguments = r1
            java.lang.String r1 = "category"
            java.lang.String r1 = r3.getString(r1)
            r0.category = r1
            java.lang.String r1 = "autoMarkPkgs"
            java.util.ArrayList r3 = r3.getStringArrayList(r1)
            r0.autoMarkPkgs = r3
            return r0
    }

    public java.util.List<java.lang.String> getAutoMarkPkgs() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.autoMarkPkgs
            return r0
    }

    public java.lang.String getCategory() {
            r1 = this;
            java.lang.String r0 = r1.category
            return r0
    }

    public java.lang.String getCommand() {
            r1 = this;
            java.lang.String r0 = r1.command
            return r0
    }

    public java.util.List<java.lang.String> getCommandArguments() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.commandArguments
            return r0
    }

    public java.lang.String getReason() {
            r1 = this;
            java.lang.String r0 = r1.reason
            return r0
    }

    public long getResultCode() {
            r2 = this;
            long r0 = r2.resultCode
            return r0
    }

    public void setAutoMarkPkgs(java.util.List<java.lang.String> r1) {
            r0 = this;
            r0.autoMarkPkgs = r1
            return
    }

    public void setCategory(java.lang.String r1) {
            r0 = this;
            r0.category = r1
            return
    }

    public void setCommand(java.lang.String r1) {
            r0 = this;
            r0.command = r1
            return
    }

    public void setCommandArguments(java.util.List<java.lang.String> r1) {
            r0 = this;
            r0.commandArguments = r1
            return
    }

    public void setReason(java.lang.String r1) {
            r0 = this;
            r0.reason = r1
            return
    }

    public void setResultCode(long r1) {
            r0 = this;
            r0.resultCode = r1
            return
    }

    public android.os.Bundle toBundle() {
            r4 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = r4.command
            java.lang.String r2 = "command"
            r0.putString(r2, r1)
            long r1 = r4.resultCode
            java.lang.String r3 = "resultCode"
            r0.putLong(r3, r1)
            java.lang.String r1 = r4.reason
            java.lang.String r2 = "reason"
            r0.putString(r2, r1)
            java.util.List<java.lang.String> r1 = r4.commandArguments
            if (r1 == 0) goto L25
            java.util.ArrayList r1 = (java.util.ArrayList) r1
            java.lang.String r2 = "commandArguments"
            r0.putStringArrayList(r2, r1)
        L25:
            java.lang.String r1 = r4.category
            java.lang.String r2 = "category"
            r0.putString(r2, r1)
            java.util.List<java.lang.String> r1 = r4.autoMarkPkgs
            if (r1 == 0) goto L37
            java.util.ArrayList r1 = (java.util.ArrayList) r1
            java.lang.String r2 = "autoMarkPkgs"
            r0.putStringArrayList(r2, r1)
        L37:
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "command={"
            r0.append(r1)
            java.lang.String r1 = r3.command
            r0.append(r1)
            java.lang.String r1 = "}, resultCode={"
            r0.append(r1)
            long r1 = r3.resultCode
            r0.append(r1)
            java.lang.String r1 = "}, reason={"
            r0.append(r1)
            java.lang.String r1 = r3.reason
            r0.append(r1)
            java.lang.String r1 = "}, category={"
            r0.append(r1)
            java.lang.String r1 = r3.category
            r0.append(r1)
            java.lang.String r1 = "}, commandArguments={"
            r0.append(r1)
            java.util.List<java.lang.String> r1 = r3.commandArguments
            r0.append(r1)
            java.lang.String r1 = "}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
