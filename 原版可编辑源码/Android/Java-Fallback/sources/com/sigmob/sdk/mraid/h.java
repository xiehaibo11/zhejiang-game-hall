package com.sigmob.sdk.mraid;

public class h {
    public static final java.lang.String a = "vnd.android.cursor.item/event";
    private static final int b = 31;
    private static final java.lang.String[] c = null;

    public interface a {
        void a(com.sigmob.sdk.mraid.c r1);
    }

    private static class b implements android.media.MediaScannerConnection.MediaScannerConnectionClient {
        private final java.lang.String a;
        private final java.lang.String b;
        private android.media.MediaScannerConnection c;

        private b(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        private void a(android.media.MediaScannerConnection r1) {
                r0 = this;
                r0.c = r1
                return
        }

        @Override
        public void onMediaScannerConnected() {
                r3 = this;
                android.media.MediaScannerConnection r0 = r3.c
                if (r0 == 0) goto Lb
                java.lang.String r1 = r3.a
                java.lang.String r2 = r3.b
                r0.scanFile(r1, r2)
            Lb:
                return
        }

        @Override
        public void onScanCompleted(java.lang.String r1, android.net.Uri r2) {
                r0 = this;
                android.media.MediaScannerConnection r1 = r0.c
                if (r1 == 0) goto L7
                r1.disconnect()
            L7:
                return
        }
    }

    static {
            java.lang.String r0 = "yyyy-MM-dd'T'HH:mm:ssZZZZZ"
            java.lang.String r1 = "yyyy-MM-dd'T'HH:mmZZZZZ"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            com.sigmob.sdk.mraid.h.c = r0
            return
    }

    public h() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.lang.String a(int r4) throws java.lang.IllegalArgumentException {
            r3 = this;
            switch(r4) {
                case 0: goto L2c;
                case 1: goto L29;
                case 2: goto L26;
                case 3: goto L23;
                case 4: goto L20;
                case 5: goto L1d;
                case 6: goto L1a;
                default: goto L3;
            }
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "invalid day of week "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L1a:
            java.lang.String r4 = "SA"
            goto L2e
        L1d:
            java.lang.String r4 = "FR"
            goto L2e
        L20:
            java.lang.String r4 = "TH"
            goto L2e
        L23:
            java.lang.String r4 = "WE"
            goto L2e
        L26:
            java.lang.String r4 = "TU"
            goto L2e
        L29:
            java.lang.String r4 = "MO"
            goto L2e
        L2c:
            java.lang.String r4 = "SU"
        L2e:
            return r4
    }

    private java.util.Date a(java.lang.String r8) {
            r7 = this;
            java.lang.String[] r0 = com.sigmob.sdk.mraid.h.c
            int r1 = r0.length
            r2 = 0
            r3 = 0
        L5:
            if (r3 >= r1) goto L1a
            r4 = r0[r3]
            java.text.SimpleDateFormat r5 = new java.text.SimpleDateFormat     // Catch: java.text.ParseException -> L17
            java.util.Locale r6 = java.util.Locale.US     // Catch: java.text.ParseException -> L17
            r5.<init>(r4, r6)     // Catch: java.text.ParseException -> L17
            java.util.Date r2 = r5.parse(r8)     // Catch: java.text.ParseException -> L17
            if (r2 == 0) goto L17
            goto L1a
        L17:
            int r3 = r3 + 1
            goto L5
        L1a:
            return r2
    }

    private java.util.Map<java.lang.String, java.lang.Object> a(java.util.Map<java.lang.String, java.lang.String> r6) {
            r5 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "description"
            boolean r2 = r6.containsKey(r1)
            if (r2 == 0) goto Lca
            java.lang.String r2 = "start"
            boolean r3 = r6.containsKey(r2)
            if (r3 == 0) goto Lca
            java.lang.Object r3 = r6.get(r1)
            java.lang.String r4 = "title"
            r0.put(r4, r3)
            boolean r3 = r6.containsKey(r2)
            if (r3 == 0) goto Lc2
            java.lang.Object r3 = r6.get(r2)
            if (r3 == 0) goto Lc2
            java.lang.Object r2 = r6.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            java.util.Date r2 = r5.a(r2)
            if (r2 == 0) goto Lba
            long r2 = r2.getTime()
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            java.lang.String r3 = "beginTime"
            r0.put(r3, r2)
            java.lang.String r2 = "end"
            boolean r3 = r6.containsKey(r2)
            if (r3 == 0) goto L73
            java.lang.Object r3 = r6.get(r2)
            if (r3 == 0) goto L73
            java.lang.Object r2 = r6.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            java.util.Date r2 = r5.a(r2)
            if (r2 == 0) goto L6b
            long r2 = r2.getTime()
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            java.lang.String r3 = "endTime"
            r0.put(r3, r2)
            goto L73
        L6b:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Invalid calendar event: end time is malformed. Date format expecting (yyyy-MM-DDTHH:MM:SS-xx:xx) or (yyyy-MM-DDTHH:MM-xx:xx) i.e. 2013-08-14T09:00:01-08:00"
            r6.<init>(r0)
            throw r6
        L73:
            java.lang.String r2 = "location"
            boolean r3 = r6.containsKey(r2)
            if (r3 == 0) goto L84
            java.lang.Object r2 = r6.get(r2)
            java.lang.String r3 = "eventLocation"
            r0.put(r3, r2)
        L84:
            java.lang.String r2 = "summary"
            boolean r3 = r6.containsKey(r2)
            if (r3 == 0) goto L93
            java.lang.Object r2 = r6.get(r2)
            r0.put(r1, r2)
        L93:
            java.lang.String r1 = "transparency"
            boolean r2 = r6.containsKey(r1)
            if (r2 == 0) goto Lb0
            java.lang.Object r1 = r6.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "transparent"
            boolean r1 = r1.equals(r2)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "availability"
            r0.put(r2, r1)
        Lb0:
            java.lang.String r6 = r5.b(r6)
            java.lang.String r1 = "rrule"
            r0.put(r1, r6)
            return r0
        Lba:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Invalid calendar event: start time is malformed. Date format expecting (yyyy-MM-DDTHH:MM:SS-xx:xx) or (yyyy-MM-DDTHH:MM-xx:xx) i.e. 2013-08-14T09:00:01-08:00"
            r6.<init>(r0)
            throw r6
        Lc2:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Invalid calendar event: start is null."
            r6.<init>(r0)
            throw r6
        Lca:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Missing start and description fields"
            r6.<init>(r0)
            throw r6
    }

    private java.lang.String b(int r4) throws java.lang.IllegalArgumentException {
            r3 = this;
            if (r4 == 0) goto L1c
            r0 = -31
            if (r4 < r0) goto L1c
            r0 = 31
            if (r4 > r0) goto L1c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = ""
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            return r4
        L1c:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "invalid day of month "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    private java.lang.String b(java.lang.String r12) throws java.lang.IllegalArgumentException {
            r11 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 7
            boolean[] r2 = new boolean[r1]
            java.lang.String r3 = ","
            java.lang.String[] r12 = r12.split(r3)
            int r4 = r12.length
            r5 = 0
            r6 = r5
        L11:
            r7 = 1
            if (r6 >= r4) goto L3c
            r8 = r12[r6]
            int r8 = java.lang.Integer.parseInt(r8)
            if (r8 != r1) goto L1d
            r8 = r5
        L1d:
            boolean r9 = r2[r8]
            if (r9 != 0) goto L39
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = r11.a(r8)
            r9.append(r10)
            r9.append(r3)
            java.lang.String r9 = r9.toString()
            r0.append(r9)
            r2[r8] = r7
        L39:
            int r6 = r6 + 1
            goto L11
        L3c:
            int r12 = r12.length
            if (r12 == 0) goto L4c
            int r12 = r0.length()
            int r12 = r12 - r7
            r0.deleteCharAt(r12)
            java.lang.String r12 = r0.toString()
            return r12
        L4c:
            java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "must have at least 1 day of the week if specifying repeating weekly"
            r12.<init>(r0)
            throw r12
    }

    private java.lang.String b(java.util.Map<java.lang.String, java.lang.String> r8) throws java.lang.IllegalArgumentException {
            r7 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "frequency"
            boolean r2 = r8.containsKey(r1)
            if (r2 == 0) goto Lf5
            java.lang.Object r1 = r8.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "interval"
            boolean r3 = r8.containsKey(r2)
            r4 = -1
            if (r3 == 0) goto L27
            java.lang.Object r2 = r8.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            int r2 = java.lang.Integer.parseInt(r2)
            goto L28
        L27:
            r2 = r4
        L28:
            java.lang.String r3 = "daily"
            boolean r3 = r3.equals(r1)
            java.lang.String r5 = "INTERVAL="
            java.lang.String r6 = ";"
            if (r3 == 0) goto L52
            java.lang.String r8 = "FREQ=DAILY;"
            r0.append(r8)
            if (r2 == r4) goto Lf5
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r5)
            r8.append(r2)
            r8.append(r6)
            java.lang.String r8 = r8.toString()
        L4d:
            r0.append(r8)
            goto Lf5
        L52:
            java.lang.String r3 = "weekly"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto La7
            java.lang.String r1 = "FREQ=WEEKLY;"
            r0.append(r1)
            if (r2 == r4) goto L76
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            r1.append(r2)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
        L76:
            java.lang.String r1 = "daysInWeek"
            boolean r2 = r8.containsKey(r1)
            if (r2 == 0) goto Lf5
            java.lang.Object r8 = r8.get(r1)
            java.lang.String r8 = (java.lang.String) r8
            java.lang.String r8 = r7.b(r8)
            if (r8 == 0) goto L9f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "BYDAY="
        L91:
            r1.append(r2)
            r1.append(r8)
            r1.append(r6)
            java.lang.String r8 = r1.toString()
            goto L4d
        L9f:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "invalid "
            r8.<init>(r0)
            throw r8
        La7:
            java.lang.String r3 = "monthly"
            boolean r1 = r3.equals(r1)
            if (r1 == 0) goto Led
            java.lang.String r1 = "FREQ=MONTHLY;"
            r0.append(r1)
            if (r2 == r4) goto Lcb
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            r1.append(r2)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
        Lcb:
            java.lang.String r1 = "daysInMonth"
            boolean r2 = r8.containsKey(r1)
            if (r2 == 0) goto Lf5
            java.lang.Object r8 = r8.get(r1)
            java.lang.String r8 = (java.lang.String) r8
            java.lang.String r8 = r7.c(r8)
            if (r8 == 0) goto Le7
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "BYMONTHDAY="
            goto L91
        Le7:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            r8.<init>()
            throw r8
        Led:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "frequency is only supported for daily, weekly, and monthly."
            r8.<init>(r0)
            throw r8
        Lf5:
            java.lang.String r8 = r0.toString()
            return r8
    }

    private java.lang.String c(java.lang.String r10) throws java.lang.IllegalArgumentException {
            r9 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 63
            boolean[] r1 = new boolean[r1]
            java.lang.String r2 = ","
            java.lang.String[] r10 = r10.split(r2)
            int r3 = r10.length
            r4 = 0
        L11:
            r5 = 1
            if (r4 >= r3) goto L3b
            r6 = r10[r4]
            int r6 = java.lang.Integer.parseInt(r6)
            int r7 = r6 + 31
            boolean r8 = r1[r7]
            if (r8 != 0) goto L38
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r6 = r9.b(r6)
            r8.append(r6)
            r8.append(r2)
            java.lang.String r6 = r8.toString()
            r0.append(r6)
            r1[r7] = r5
        L38:
            int r4 = r4 + 1
            goto L11
        L3b:
            int r10 = r10.length
            if (r10 == 0) goto L4b
            int r10 = r0.length()
            int r10 = r10 - r5
            r0.deleteCharAt(r10)
            java.lang.String r10 = r0.toString()
            return r10
        L4b:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "must have at least 1 day of the month if specifying repeating weekly"
            r10.<init>(r0)
            throw r10
    }

    public static boolean c(android.content.Context r0) {
            r0 = 0
            return r0
    }

    public static boolean d(android.content.Context r0) {
            r0 = 0
            return r0
    }

    public void a(android.content.Context r1, java.lang.String r2, com.sigmob.sdk.mraid.h.a r3) throws com.sigmob.sdk.mraid.c {
            r0 = this;
            boolean r1 = c(r1)
            if (r1 == 0) goto L7
            return
        L7:
            java.lang.String r1 = "Error downloading file - the device does not have an SD card mounted, or the Android permission is not granted."
            com.czhj.sdk.logger.SigmobLog.e(r1)
            com.sigmob.sdk.mraid.c r1 = new com.sigmob.sdk.mraid.c
            java.lang.String r2 = "Error downloading file  - the device does not have an SD card mounted, or the Android permission is not granted."
            r1.<init>(r2)
            throw r1
    }

    public void a(android.content.Context r6, java.util.Map<java.lang.String, java.lang.String> r7) throws com.sigmob.sdk.mraid.c {
            r5 = this;
            boolean r0 = d(r6)
            if (r0 == 0) goto L92
            java.util.Map r7 = r5.a(r7)     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            java.lang.String r1 = "android.intent.action.INSERT"
            r0.<init>(r1)     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            java.lang.String r1 = "vnd.android.cursor.item/event"
            android.content.Intent r0 = r0.setType(r1)     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            java.util.Set r1 = r7.keySet()     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
        L1f:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            if (r2 == 0) goto L51
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            java.lang.Object r3 = r7.get(r2)     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            boolean r4 = r3 instanceof java.lang.Long     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            if (r4 == 0) goto L3d
            java.lang.Long r3 = (java.lang.Long) r3     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            long r3 = r3.longValue()     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            r0.putExtra(r2, r3)     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            goto L1f
        L3d:
            boolean r4 = r3 instanceof java.lang.Integer     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            if (r4 == 0) goto L4b
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            int r3 = r3.intValue()     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            r0.putExtra(r2, r3)     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            goto L1f
        L4b:
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            r0.putExtra(r2, r3)     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            goto L1f
        L51:
            r7 = 268435456(0x10000000, float:2.524355E-29)
            r0.setFlags(r7)     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            r6.startActivity(r0)     // Catch: java.lang.Exception -> L5a java.lang.IllegalArgumentException -> L66 android.content.ActivityNotFoundException -> L85
            return
        L5a:
            r6 = move-exception
            java.lang.String r7 = "could not create calendar event"
            com.czhj.sdk.logger.SigmobLog.e(r7)
            com.sigmob.sdk.mraid.c r7 = new com.sigmob.sdk.mraid.c
            r7.<init>(r6)
            throw r7
        L66:
            r6 = move-exception
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "create calendar: invalid parameters "
            r7.append(r0)
            java.lang.String r0 = r6.getMessage()
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            com.czhj.sdk.logger.SigmobLog.e(r7)
            com.sigmob.sdk.mraid.c r7 = new com.sigmob.sdk.mraid.c
            r7.<init>(r6)
            throw r7
        L85:
            java.lang.String r6 = "no calendar app installed"
            com.czhj.sdk.logger.SigmobLog.e(r6)
            com.sigmob.sdk.mraid.c r6 = new com.sigmob.sdk.mraid.c
            java.lang.String r7 = "Action is unsupported on this device - no calendar app installed"
            r6.<init>(r7)
            throw r6
        L92:
            java.lang.String r6 = "unsupported action createCalendarEvent for devices pre-ICS"
            com.czhj.sdk.logger.SigmobLog.e(r6)
            com.sigmob.sdk.mraid.c r6 = new com.sigmob.sdk.mraid.c
            java.lang.String r7 = "Action is unsupported on this device (need Android version Ice Cream Sandwich or above)"
            r6.<init>(r7)
            throw r6
    }

    public boolean a(android.app.Activity r1, android.view.View r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    public boolean a(android.content.Context r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    public boolean b(android.content.Context r1) {
            r0 = this;
            r1 = 0
            return r1
    }
}
