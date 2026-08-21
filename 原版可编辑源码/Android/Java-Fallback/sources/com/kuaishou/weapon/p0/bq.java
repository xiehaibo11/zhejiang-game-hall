package com.kuaishou.weapon.p0;

public class bq {
    public static final java.lang.String a = "7";
    public static final java.lang.String b = "6";
    public static final java.lang.String c = "5";
    public static final java.lang.String d = "4";
    public static final java.lang.String e = "3";
    public static final java.lang.String f = "2";
    public static final java.lang.String g = "1";

    public bq() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.json.JSONArray a(android.content.Context r21) {
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            java.util.zip.CRC32 r2 = new java.util.zip.CRC32     // Catch: java.lang.Throwable -> L27d java.lang.Exception -> L285
            r2.<init>()     // Catch: java.lang.Throwable -> L27d java.lang.Exception -> L285
            android.content.ContentResolver r9 = r21.getContentResolver()     // Catch: java.lang.Throwable -> L27d java.lang.Exception -> L285
            android.content.Context r3 = r21.getApplicationContext()     // Catch: java.lang.Throwable -> L27d java.lang.Exception -> L285
            r4 = 1
            android.net.Uri r4 = android.media.RingtoneManager.getActualDefaultRingtoneUri(r3, r4)     // Catch: java.lang.Throwable -> L27d java.lang.Exception -> L285
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r3 = r9
            android.database.Cursor r3 = r3.query(r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L27d java.lang.Exception -> L285
            boolean r4 = r3.moveToNext()     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            java.lang.String r10 = "0"
            java.lang.String r11 = "date_modified"
            java.lang.String r12 = "3"
            java.lang.String r13 = "date_added"
            java.lang.String r14 = "4"
            java.lang.String r15 = "5"
            java.lang.String r8 = "_data"
            java.lang.String r7 = "2"
            java.lang.String r6 = "1"
            if (r4 == 0) goto L76
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.<init>()     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            int r5 = r3.getColumnIndexOrThrow(r8)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            java.lang.String r5 = r3.getString(r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r2.update(r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            long r16 = r2.getValue()     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            java.lang.String r5 = java.lang.Long.toHexString(r16)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.put(r15, r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            int r5 = r3.getColumnIndexOrThrow(r13)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            int r5 = r3.getInt(r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.put(r14, r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            int r5 = r3.getColumnIndexOrThrow(r11)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            int r5 = r3.getInt(r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.put(r12, r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.put(r7, r6)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.put(r6, r10)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r0.put(r4)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
        L76:
            r3.close()     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            android.content.Context r3 = r21.getApplicationContext()     // Catch: java.lang.Throwable -> L27d java.lang.Exception -> L285
            r4 = 2
            android.net.Uri r4 = android.media.RingtoneManager.getActualDefaultRingtoneUri(r3, r4)     // Catch: java.lang.Throwable -> L27d java.lang.Exception -> L285
            r5 = 0
            r16 = 0
            r17 = 0
            r18 = 0
            r3 = r9
            r1 = r6
            r6 = r16
            r19 = r7
            r7 = r17
            r16 = r10
            r10 = r8
            r8 = r18
            android.database.Cursor r3 = r3.query(r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L27d java.lang.Exception -> L285
            boolean r4 = r3.moveToNext()     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            if (r4 == 0) goto Le1
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.<init>()     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            int r5 = r3.getColumnIndexOrThrow(r10)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            java.lang.String r5 = r3.getString(r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r2.update(r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            long r5 = r2.getValue()     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            java.lang.String r5 = java.lang.Long.toHexString(r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.put(r15, r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            int r5 = r3.getColumnIndexOrThrow(r13)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            int r5 = r3.getInt(r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.put(r14, r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            int r5 = r3.getColumnIndexOrThrow(r11)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            int r5 = r3.getInt(r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.put(r12, r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r8 = r19
            r4.put(r8, r1)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.put(r1, r1)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r0.put(r4)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            goto Le3
        Le1:
            r8 = r19
        Le3:
            r3.close()     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            android.content.Context r3 = r21.getApplicationContext()     // Catch: java.lang.Throwable -> L27d java.lang.Exception -> L285
            r4 = 4
            android.net.Uri r4 = android.media.RingtoneManager.getActualDefaultRingtoneUri(r3, r4)     // Catch: java.lang.Throwable -> L27d java.lang.Exception -> L285
            r5 = 0
            r6 = 0
            r7 = 0
            r17 = 0
            r3 = r9
            r18 = r9
            r9 = r8
            r8 = r17
            android.database.Cursor r3 = r3.query(r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L27d java.lang.Exception -> L285
            boolean r4 = r3.moveToNext()     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            if (r4 == 0) goto L142
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.<init>()     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            int r5 = r3.getColumnIndexOrThrow(r10)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            java.lang.String r5 = r3.getString(r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r2.update(r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            long r5 = r2.getValue()     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            java.lang.String r5 = java.lang.Long.toHexString(r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.put(r15, r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            int r5 = r3.getColumnIndexOrThrow(r13)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            int r5 = r3.getInt(r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.put(r14, r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            int r5 = r3.getColumnIndexOrThrow(r11)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            int r5 = r3.getInt(r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.put(r12, r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.put(r9, r1)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.put(r1, r9)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r0.put(r4)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
        L142:
            r3.close()     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            android.net.Uri r4 = android.provider.MediaStore.Audio.Media.INTERNAL_CONTENT_URI     // Catch: java.lang.Throwable -> L27d java.lang.Exception -> L285
            r5 = 0
            java.lang.String r6 = "is_ringtone= ? "
            java.lang.String[] r7 = new java.lang.String[]{r1}     // Catch: java.lang.Throwable -> L27d java.lang.Exception -> L285
            java.lang.String r8 = "date_added"
            r3 = r18
            android.database.Cursor r3 = r3.query(r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L27d java.lang.Exception -> L285
            boolean r4 = r3.moveToNext()     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            if (r4 == 0) goto L19d
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.<init>()     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            int r5 = r3.getColumnIndexOrThrow(r10)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            java.lang.String r5 = r3.getString(r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r2.update(r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            long r5 = r2.getValue()     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            java.lang.String r5 = java.lang.Long.toHexString(r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.put(r15, r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            int r5 = r3.getColumnIndexOrThrow(r13)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            int r5 = r3.getInt(r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.put(r14, r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            int r5 = r3.getColumnIndexOrThrow(r11)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            int r5 = r3.getInt(r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.put(r12, r5)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r8 = r16
            r4.put(r9, r8)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r4.put(r1, r8)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            r0.put(r4)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            goto L19f
        L19d:
            r8 = r16
        L19f:
            r3.close()     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            android.net.Uri r4 = android.provider.MediaStore.Audio.Media.INTERNAL_CONTENT_URI     // Catch: java.lang.Throwable -> L27d java.lang.Exception -> L285
            r5 = 0
            java.lang.String r6 = "is_notification= ? "
            java.lang.String[] r7 = new java.lang.String[]{r1}     // Catch: java.lang.Throwable -> L27d java.lang.Exception -> L285
            java.lang.String r16 = "date_added"
            r3 = r18
            r17 = r0
            r0 = r8
            r8 = r16
            android.database.Cursor r3 = r3.query(r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L275 java.lang.Throwable -> L27d
            boolean r4 = r3.moveToNext()     // Catch: java.lang.Exception -> L272 java.lang.Throwable -> L278
            if (r4 == 0) goto L1ff
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L272 java.lang.Throwable -> L278
            r4.<init>()     // Catch: java.lang.Exception -> L272 java.lang.Throwable -> L278
            int r5 = r3.getColumnIndexOrThrow(r10)     // Catch: java.lang.Exception -> L272 java.lang.Throwable -> L278
            java.lang.String r5 = r3.getString(r5)     // Catch: java.lang.Exception -> L272 java.lang.Throwable -> L278
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L272 java.lang.Throwable -> L278
            r2.update(r5)     // Catch: java.lang.Exception -> L272 java.lang.Throwable -> L278
            long r5 = r2.getValue()     // Catch: java.lang.Exception -> L272 java.lang.Throwable -> L278
            java.lang.String r5 = java.lang.Long.toHexString(r5)     // Catch: java.lang.Exception -> L272 java.lang.Throwable -> L278
            r4.put(r15, r5)     // Catch: java.lang.Exception -> L272 java.lang.Throwable -> L278
            int r5 = r3.getColumnIndexOrThrow(r13)     // Catch: java.lang.Exception -> L272 java.lang.Throwable -> L278
            int r5 = r3.getInt(r5)     // Catch: java.lang.Exception -> L272 java.lang.Throwable -> L278
            r4.put(r14, r5)     // Catch: java.lang.Exception -> L272 java.lang.Throwable -> L278
            int r5 = r3.getColumnIndexOrThrow(r11)     // Catch: java.lang.Exception -> L272 java.lang.Throwable -> L278
            int r5 = r3.getInt(r5)     // Catch: java.lang.Exception -> L272 java.lang.Throwable -> L278
            r4.put(r12, r5)     // Catch: java.lang.Exception -> L272 java.lang.Throwable -> L278
            r4.put(r9, r0)     // Catch: java.lang.Exception -> L272 java.lang.Throwable -> L278
            r4.put(r1, r1)     // Catch: java.lang.Exception -> L272 java.lang.Throwable -> L278
            r8 = r17
            r8.put(r4)     // Catch: java.lang.Exception -> L270 java.lang.Throwable -> L278
            goto L201
        L1ff:
            r8 = r17
        L201:
            r3.close()     // Catch: java.lang.Exception -> L270 java.lang.Throwable -> L278
            android.net.Uri r4 = android.provider.MediaStore.Audio.Media.INTERNAL_CONTENT_URI     // Catch: java.lang.Exception -> L26e java.lang.Throwable -> L27d
            r5 = 0
            java.lang.String r6 = "is_alarm= ? "
            java.lang.String[] r7 = new java.lang.String[]{r1}     // Catch: java.lang.Exception -> L26e java.lang.Throwable -> L27d
            java.lang.String r16 = "date_added"
            r3 = r18
            r20 = r8
            r8 = r16
            android.database.Cursor r3 = r3.query(r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L26b java.lang.Throwable -> L27d
            boolean r4 = r3.moveToNext()     // Catch: java.lang.Exception -> L268 java.lang.Throwable -> L278
            if (r4 == 0) goto L260
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L268 java.lang.Throwable -> L278
            r4.<init>()     // Catch: java.lang.Exception -> L268 java.lang.Throwable -> L278
            int r5 = r3.getColumnIndexOrThrow(r10)     // Catch: java.lang.Exception -> L268 java.lang.Throwable -> L278
            java.lang.String r5 = r3.getString(r5)     // Catch: java.lang.Exception -> L268 java.lang.Throwable -> L278
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L268 java.lang.Throwable -> L278
            r2.update(r5)     // Catch: java.lang.Exception -> L268 java.lang.Throwable -> L278
            long r5 = r2.getValue()     // Catch: java.lang.Exception -> L268 java.lang.Throwable -> L278
            java.lang.String r2 = java.lang.Long.toHexString(r5)     // Catch: java.lang.Exception -> L268 java.lang.Throwable -> L278
            r4.put(r15, r2)     // Catch: java.lang.Exception -> L268 java.lang.Throwable -> L278
            int r2 = r3.getColumnIndexOrThrow(r13)     // Catch: java.lang.Exception -> L268 java.lang.Throwable -> L278
            int r2 = r3.getInt(r2)     // Catch: java.lang.Exception -> L268 java.lang.Throwable -> L278
            r4.put(r14, r2)     // Catch: java.lang.Exception -> L268 java.lang.Throwable -> L278
            int r2 = r3.getColumnIndexOrThrow(r11)     // Catch: java.lang.Exception -> L268 java.lang.Throwable -> L278
            int r2 = r3.getInt(r2)     // Catch: java.lang.Exception -> L268 java.lang.Throwable -> L278
            r4.put(r12, r2)     // Catch: java.lang.Exception -> L268 java.lang.Throwable -> L278
            r4.put(r9, r0)     // Catch: java.lang.Exception -> L268 java.lang.Throwable -> L278
            r4.put(r1, r9)     // Catch: java.lang.Exception -> L268 java.lang.Throwable -> L278
            r0 = r20
            r0.put(r4)     // Catch: java.lang.Throwable -> L278 java.lang.Exception -> L27b
            goto L262
        L260:
            r0 = r20
        L262:
            if (r3 == 0) goto L28b
            r3.close()
            goto L28b
        L268:
            r0 = r20
            goto L27b
        L26b:
            r0 = r20
            goto L285
        L26e:
            r0 = r8
            goto L285
        L270:
            r0 = r8
            goto L27b
        L272:
            r0 = r17
            goto L27b
        L275:
            r0 = r17
            goto L285
        L278:
            r0 = move-exception
            r1 = r3
            goto L27f
        L27b:
            r1 = r3
            goto L286
        L27d:
            r0 = move-exception
            r1 = 0
        L27f:
            if (r1 == 0) goto L284
            r1.close()
        L284:
            throw r0
        L285:
            r1 = 0
        L286:
            if (r1 == 0) goto L28b
            r1.close()
        L28b:
            return r0
    }
}
