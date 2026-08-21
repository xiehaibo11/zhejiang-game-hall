package com.meizu.cloud.pushsdk.util;

public class b {
    public static java.lang.String a(android.content.Context r1, java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = "_"
            r0.append(r2)
            java.lang.String r2 = "pushId"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "com.meizu.flyme.push"
            java.lang.String r1 = a(r1, r0, r2)
            return r1
    }

    public static java.lang.String a(android.content.Context r0, java.lang.String r1, java.lang.String r2) {
            android.content.SharedPreferences r0 = n(r0, r1)
            java.lang.String r1 = ""
            java.lang.String r0 = r0.getString(r2, r1)
            return r0
    }

    public static void a(android.content.Context r1, int r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "_"
            r0.append(r3)
            java.lang.String r3 = "pushId_expire_time"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "com.meizu.flyme.push"
            a(r1, r0, r3, r2)
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2, int r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = ".notification_id"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "mz_push_preference"
            a(r1, r0, r2, r3)
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2, long r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = ".ad_last_close_time"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "mz_push_preference_new"
            a(r1, r0, r2, r3)
            return
    }

    public static void a(android.content.Context r0, java.lang.String r1, java.lang.String r2, int r3) {
            android.content.SharedPreferences r0 = n(r0, r1)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r0 = r0.putInt(r2, r3)
            r0.apply()
            return
    }

    public static void a(android.content.Context r0, java.lang.String r1, java.lang.String r2, long r3) {
            android.content.SharedPreferences r0 = n(r0, r1)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r0 = r0.putLong(r2, r3)
            r0.apply()
            return
    }

    public static void a(android.content.Context r0, java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            android.content.SharedPreferences r0 = n(r0, r1)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r0 = r0.putString(r2, r3)
            r0.apply()
            return
    }

    public static void a(android.content.Context r0, java.lang.String r1, java.lang.String r2, boolean r3) {
            android.content.SharedPreferences r0 = n(r0, r1)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r0 = r0.putBoolean(r2, r3)
            r0.apply()
            return
    }

    public static void a(android.content.Context r2, java.lang.String r3, boolean r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "switch_notification_message_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "mz_push_preference"
            a(r2, r0, r3, r4)
            return
    }

    public static int b(android.content.Context r1, java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = "_"
            r0.append(r2)
            java.lang.String r2 = "pushId_expire_time"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "com.meizu.flyme.push"
            int r1 = b(r1, r0, r2)
            return r1
    }

    public static int b(android.content.Context r0, java.lang.String r1, java.lang.String r2) {
            android.content.SharedPreferences r0 = n(r0, r1)
            r1 = 0
            int r0 = r0.getInt(r2, r1)
            return r0
    }

    public static void b(android.content.Context r1, java.lang.String r2, int r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = ".notification_push_task_id"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "mz_push_preference"
            a(r1, r0, r2, r3)
            return
    }

    public static void b(android.content.Context r1, java.lang.String r2, java.lang.String r3, int r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = "."
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            java.lang.String r3 = "mz_push_preference"
            a(r1, r3, r2, r4)
            return
    }

    public static void b(android.content.Context r2, java.lang.String r3, boolean r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "switch_through_message_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "mz_push_preference"
            a(r2, r0, r3, r4)
            return
    }

    public static int c(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "mz_push_preference"
            android.content.SharedPreferences r1 = n(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = ".notification_id"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r0 = 0
            int r1 = r1.getInt(r2, r0)
            return r1
    }

    public static long c(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            android.content.SharedPreferences r2 = n(r2, r3)
            r0 = 0
            long r2 = r2.getLong(r4, r0)
            return r2
    }

    public static void c(android.content.Context r1, java.lang.String r2, int r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = ".message_seq"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "mz_push_preference"
            a(r1, r0, r2, r3)
            return
    }

    public static void c(android.content.Context r1, java.lang.String r2, boolean r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = ".first_request_publicKey"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "mz_push_preference"
            a(r1, r0, r2, r3)
            return
    }

    public static int d(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "mz_push_preference"
            android.content.SharedPreferences r1 = n(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = ".notification_push_task_id"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r0 = 0
            int r1 = r1.getInt(r2, r0)
            return r1
    }

    public static boolean d(android.content.Context r0, java.lang.String r1, java.lang.String r2) {
            android.content.SharedPreferences r0 = n(r0, r1)
            r1 = 1
            boolean r0 = r0.getBoolean(r2, r1)
            return r0
    }

    public static boolean e(android.content.Context r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "switch_notification_message_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "mz_push_preference"
            boolean r2 = d(r2, r0, r3)
            return r2
    }

    public static boolean e(android.content.Context r0, java.lang.String r1, java.lang.String r2) {
            android.content.SharedPreferences r0 = n(r0, r1)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r0 = r0.remove(r2)
            boolean r0 = r0.commit()
            return r0
    }

    public static boolean f(android.content.Context r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "switch_notification_message_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "mz_push_preference"
            boolean r2 = f(r2, r0, r3)
            return r2
    }

    public static boolean f(android.content.Context r0, java.lang.String r1, java.lang.String r2) {
            android.content.SharedPreferences r0 = n(r0, r1)
            boolean r0 = r0.contains(r2)
            return r0
    }

    public static java.lang.String g(android.content.Context r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "push_alias_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "mz_push_preference"
            java.lang.String r2 = a(r2, r0, r3)
            return r2
    }

    public static void g(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "_"
            r0.append(r3)
            java.lang.String r3 = "pushId"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "com.meizu.flyme.push"
            a(r1, r0, r3, r2)
            return
    }

    public static void h(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "push_alias_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "mz_push_preference"
            a(r2, r0, r3, r4)
            return
    }

    public static boolean h(android.content.Context r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "switch_through_message_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "mz_push_preference"
            boolean r2 = d(r2, r0, r3)
            return r2
    }

    public static int i(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = "."
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            java.lang.String r3 = "mz_push_preference"
            int r1 = b(r1, r3, r2)
            return r1
    }

    public static boolean i(android.content.Context r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "switch_through_message_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "mz_push_preference"
            boolean r2 = f(r2, r0, r3)
            return r2
    }

    public static int j(android.content.Context r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r1 = ".message_seq"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "mz_push_preference"
            int r0 = b(r2, r1, r0)
            int r0 = r0 + 1
            c(r2, r3, r0)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "current messageSeq "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r2)
            return r0
    }

    public static boolean j(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = "."
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            java.lang.String r3 = "mz_push_preference"
            boolean r1 = e(r1, r3, r2)
            return r1
    }

    public static java.lang.String k(android.content.Context r1, java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = ".encryption_public_key"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "mz_push_preference"
            java.lang.String r1 = a(r1, r0, r2)
            return r1
    }

    public static void k(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = ".encryption_public_key"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "mz_push_preference"
            a(r1, r0, r2, r3)
            return
    }

    public static boolean l(android.content.Context r1, java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = ".first_request_publicKey"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "mz_push_preference"
            boolean r1 = d(r1, r0, r2)
            return r1
    }

    public static long m(android.content.Context r1, java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = ".ad_last_close_time"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "mz_push_preference_new"
            long r1 = c(r1, r0, r2)
            return r1
    }

    private static android.content.SharedPreferences n(android.content.Context r1, java.lang.String r2) {
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)
            return r1
    }
}
