package com.ymnsdk.replugin.event.custom;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class RepluginCustomEvent extends com.ymnsdk.replugin.event.base.SepperllitaEvent {
    public RepluginCustomEvent(android.app.Activity r22, org.json.JSONObject r23) {
            r21 = this;
            r1 = r21
            r0 = r23
            java.lang.String r2 = "scene_id"
            java.lang.String r3 = "is_new_user"
            java.lang.String r4 = "reason"
            java.lang.String r5 = "ispatch"
            java.lang.String r6 = "is_allow"
            java.lang.String r7 = "source"
            java.lang.String r8 = "cpsid"
            java.lang.String r9 = "request_msg"
            java.lang.String r10 = "request_code"
            java.lang.String r11 = "pluginId"
            java.lang.String r12 = "dur"
            java.lang.String r13 = "eventId"
            java.lang.String r14 = "label"
            java.lang.String r15 = "bl"
            r16 = r2
            java.lang.String r2 = "blk"
            r17 = r3
            java.lang.String r3 = "pg"
            r18 = r4
            java.lang.String r4 = "Act"
            r19 = r5
            java.lang.String r5 = "buyu_uid"
            r21.<init>(r22)
            boolean r20 = r0.has(r4)     // Catch: java.lang.Exception -> L156
            if (r20 == 0) goto L40
            java.lang.String r4 = r0.getString(r4)     // Catch: java.lang.Exception -> L156
            r1.setAct(r4)     // Catch: java.lang.Exception -> L156
        L40:
            boolean r4 = r0.has(r3)     // Catch: java.lang.Exception -> L156
            if (r4 == 0) goto L4d
            java.lang.String r3 = r0.getString(r3)     // Catch: java.lang.Exception -> L156
            r1.setPg(r3)     // Catch: java.lang.Exception -> L156
        L4d:
            boolean r3 = r0.has(r2)     // Catch: java.lang.Exception -> L156
            if (r3 == 0) goto L5a
            java.lang.String r2 = r0.getString(r2)     // Catch: java.lang.Exception -> L156
            r1.setBlk(r2)     // Catch: java.lang.Exception -> L156
        L5a:
            boolean r2 = r0.has(r15)     // Catch: java.lang.Exception -> L156
            if (r2 == 0) goto L67
            java.lang.String r2 = r0.getString(r15)     // Catch: java.lang.Exception -> L156
            r1.setBl(r2)     // Catch: java.lang.Exception -> L156
        L67:
            boolean r2 = r0.has(r14)     // Catch: java.lang.Exception -> L156
            if (r2 == 0) goto L74
            java.lang.String r2 = r0.getString(r14)     // Catch: java.lang.Exception -> L156
            r1.setLabel(r2)     // Catch: java.lang.Exception -> L156
        L74:
            boolean r2 = r0.has(r13)     // Catch: java.lang.Exception -> L156
            if (r2 == 0) goto L81
            java.lang.String r2 = r0.getString(r13)     // Catch: java.lang.Exception -> L156
            r1.setEid(r2)     // Catch: java.lang.Exception -> L156
        L81:
            boolean r2 = r0.has(r12)     // Catch: java.lang.Exception -> L156
            if (r2 == 0) goto L9f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L156
            r2.<init>()     // Catch: java.lang.Exception -> L156
            long r3 = r0.getLong(r12)     // Catch: java.lang.Exception -> L156
            r2.append(r3)     // Catch: java.lang.Exception -> L156
            java.lang.String r3 = ""
            r2.append(r3)     // Catch: java.lang.Exception -> L156
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L156
            r1.setDur(r2)     // Catch: java.lang.Exception -> L156
        L9f:
            com.ymnsdk.replugin.event.base.CustEvent r2 = new com.ymnsdk.replugin.event.base.CustEvent     // Catch: java.lang.Exception -> L156
            r3 = r22
            r2.<init>(r3)     // Catch: java.lang.Exception -> L156
            boolean r3 = r0.has(r11)     // Catch: java.lang.Exception -> L156
            if (r3 == 0) goto Lb3
            java.lang.String r3 = r0.getString(r11)     // Catch: java.lang.Exception -> L156
            r2.setPlugin_id(r3)     // Catch: java.lang.Exception -> L156
        Lb3:
            boolean r3 = r0.has(r10)     // Catch: java.lang.Exception -> L156
            if (r3 == 0) goto Lc0
            java.lang.String r3 = r0.getString(r10)     // Catch: java.lang.Exception -> L156
            r2.setRequest_code(r3)     // Catch: java.lang.Exception -> L156
        Lc0:
            boolean r3 = r0.has(r9)     // Catch: java.lang.Exception -> L156
            if (r3 == 0) goto Lcd
            java.lang.String r3 = r0.getString(r9)     // Catch: java.lang.Exception -> L156
            r2.setRequest_code(r3)     // Catch: java.lang.Exception -> L156
        Lcd:
            boolean r3 = r0.has(r8)     // Catch: java.lang.Exception -> L156
            if (r3 == 0) goto Lda
            java.lang.String r3 = r0.getString(r8)     // Catch: java.lang.Exception -> L156
            r2.setCpsid(r3)     // Catch: java.lang.Exception -> L156
        Lda:
            boolean r3 = r0.has(r5)     // Catch: java.lang.Exception -> L156
            if (r3 == 0) goto Le7
            java.lang.String r3 = r0.getString(r5)     // Catch: java.lang.Exception -> L156
            r2.setBuyu_uid(r3)     // Catch: java.lang.Exception -> L156
        Le7:
            boolean r3 = r0.has(r7)     // Catch: java.lang.Exception -> L156
            if (r3 == 0) goto Lf4
            int r3 = r0.getInt(r7)     // Catch: java.lang.Exception -> L156
            r2.setSource(r3)     // Catch: java.lang.Exception -> L156
        Lf4:
            boolean r3 = r0.has(r6)     // Catch: java.lang.Exception -> L156
            if (r3 == 0) goto L101
            int r3 = r0.getInt(r6)     // Catch: java.lang.Exception -> L156
            r2.setIs_allow(r3)     // Catch: java.lang.Exception -> L156
        L101:
            r3 = r19
            boolean r4 = r0.has(r3)     // Catch: java.lang.Exception -> L156
            if (r4 == 0) goto L110
            int r3 = r0.getInt(r3)     // Catch: java.lang.Exception -> L156
            r2.setIspatch(r3)     // Catch: java.lang.Exception -> L156
        L110:
            r3 = r18
            boolean r4 = r0.has(r3)     // Catch: java.lang.Exception -> L156
            if (r4 == 0) goto L11f
            int r3 = r0.getInt(r3)     // Catch: java.lang.Exception -> L156
            r2.setReason(r3)     // Catch: java.lang.Exception -> L156
        L11f:
            r3 = r17
            boolean r4 = r0.has(r3)     // Catch: java.lang.Exception -> L156
            if (r4 == 0) goto L12e
            int r3 = r0.getInt(r3)     // Catch: java.lang.Exception -> L156
            r2.setIs_new_user(r3)     // Catch: java.lang.Exception -> L156
        L12e:
            r3 = r16
            boolean r4 = r0.has(r3)     // Catch: java.lang.Exception -> L156
            if (r4 == 0) goto L13d
            int r3 = r0.getInt(r3)     // Catch: java.lang.Exception -> L156
            r2.setScene_id(r3)     // Catch: java.lang.Exception -> L156
        L13d:
            boolean r3 = r0.has(r5)     // Catch: java.lang.Exception -> L156
            if (r3 == 0) goto L14a
            java.lang.String r0 = r0.getString(r5)     // Catch: java.lang.Exception -> L156
            r2.setBuyu_version(r0)     // Catch: java.lang.Exception -> L156
        L14a:
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()     // Catch: java.lang.Exception -> L156
            java.lang.String r0 = r0.toJson(r2)     // Catch: java.lang.Exception -> L156
            r1.setCust(r0)     // Catch: java.lang.Exception -> L156
            goto L15a
        L156:
            r0 = move-exception
            r0.printStackTrace()
        L15a:
            return
    }
}
