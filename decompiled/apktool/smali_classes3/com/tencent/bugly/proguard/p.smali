.class public final Lcom/tencent/bugly/proguard/p;
.super Ljava/lang/Object;
.source "BUGLY"


# static fields
.field public static a:Z = true

.field public static b:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tencent/bugly/proguard/o;",
            ">;"
        }
    .end annotation
.end field

.field public static c:Z

.field private static d:Lcom/tencent/bugly/proguard/w;

.field private static e:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 34
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/tencent/bugly/proguard/p;->b:Ljava/util/List;

    return-void
.end method

.method public static declared-synchronized a(Landroid/content/Context;)V
    .locals 2

    const-class v0, Lcom/tencent/bugly/proguard/p;

    monitor-enter v0

    const/4 v1, 0x0

    .line 57
    :try_start_0
    invoke-static {p0, v1}, Lcom/tencent/bugly/proguard/p;->a(Landroid/content/Context;Lcom/tencent/bugly/BuglyStrategy;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 58
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static declared-synchronized a(Landroid/content/Context;Lcom/tencent/bugly/BuglyStrategy;)V
    .locals 4

    const-class v0, Lcom/tencent/bugly/proguard/p;

    monitor-enter v0

    .line 67
    :try_start_0
    sget-boolean v1, Lcom/tencent/bugly/proguard/p;->e:Z

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    const-string p0, "[init] initial Multi-times, ignore this."

    .line 68
    new-array p1, v2, [Ljava/lang/Object;

    invoke-static {p0, p1}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 69
    monitor-exit v0

    return-void

    :cond_0
    if-nez p0, :cond_1

    .line 72
    :try_start_1
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "[init] context of init() is null, check it."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 73
    monitor-exit v0

    return-void

    .line 75
    :cond_1
    :try_start_2
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object v1

    .line 78
    invoke-static {v1}, Lcom/tencent/bugly/proguard/p;->a(Lcom/tencent/bugly/proguard/aa;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 79
    sput-boolean v2, Lcom/tencent/bugly/proguard/p;->a:Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 80
    monitor-exit v0

    return-void

    .line 84
    :cond_2
    :try_start_3
    invoke-virtual {v1}, Lcom/tencent/bugly/proguard/aa;->e()Ljava/lang/String;

    move-result-object v2

    if-nez v2, :cond_3

    .line 86
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "[init] meta data of BUGLY_APPID in AndroidManifest.xml should be set."

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 88
    monitor-exit v0

    return-void

    .line 90
    :cond_3
    :try_start_4
    iget-boolean v1, v1, Lcom/tencent/bugly/proguard/aa;->D:Z

    invoke-static {p0, v2, v1, p1}, Lcom/tencent/bugly/proguard/p;->a(Landroid/content/Context;Ljava/lang/String;ZLcom/tencent/bugly/BuglyStrategy;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 91
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static declared-synchronized a(Landroid/content/Context;Ljava/lang/String;ZLcom/tencent/bugly/BuglyStrategy;)V
    .locals 12

    const-class v0, Lcom/tencent/bugly/proguard/p;

    monitor-enter v0

    .line 103
    :try_start_0
    sget-boolean v1, Lcom/tencent/bugly/proguard/p;->e:Z

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    const-string p0, "[init] initial Multi-times, ignore this."

    .line 104
    new-array p1, v2, [Ljava/lang/Object;

    invoke-static {p0, p1}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 105
    monitor-exit v0

    return-void

    :cond_0
    if-nez p0, :cond_1

    .line 108
    :try_start_1
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "[init] context is null, check it."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 109
    monitor-exit v0

    return-void

    :cond_1
    if-nez p1, :cond_2

    .line 113
    :try_start_2
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "init arg \'crashReportAppID\' should not be null!"

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 114
    monitor-exit v0

    return-void

    :cond_2
    const/4 v1, 0x1

    .line 116
    :try_start_3
    sput-boolean v1, Lcom/tencent/bugly/proguard/p;->e:Z

    if-eqz p2, :cond_3

    .line 119
    sput-boolean v1, Lcom/tencent/bugly/proguard/p;->c:Z

    .line 120
    sput-boolean v1, Lcom/tencent/bugly/proguard/al;->c:Z

    const-string v3, "Bugly debug\u6a21\u5f0f\u5f00\u542f\uff0c\u8bf7\u5728\u53d1\u5e03\u65f6\u628aisDebug\u5173\u95ed\u3002 -- Running in debug model for \'isDebug\' is enabled. Please disable it when you release."

    .line 121
    new-array v4, v2, [Ljava/lang/Object;

    invoke-static {v3, v4}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v3, "--------------------------------------------------------------------------------------------"

    .line 123
    new-array v4, v2, [Ljava/lang/Object;

    invoke-static {v3, v4}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v3, "Bugly debug\u6a21\u5f0f\u5c06\u6709\u4ee5\u4e0b\u884c\u4e3a\u7279\u6027 -- The following list shows the behaviour of debug model: "

    .line 125
    new-array v4, v2, [Ljava/lang/Object;

    invoke-static {v3, v4}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v3, "[1] \u8f93\u51fa\u8be6\u7ec6\u7684Bugly SDK\u7684Log -- More detailed log of Bugly SDK will be output to logcat;"

    .line 127
    new-array v4, v2, [Ljava/lang/Object;

    invoke-static {v3, v4}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v3, "[2] \u6bcf\u4e00\u6761Crash\u90fd\u4f1a\u88ab\u7acb\u5373\u4e0a\u62a5 -- Every crash caught by Bugly will be uploaded immediately."

    .line 129
    new-array v4, v2, [Ljava/lang/Object;

    invoke-static {v3, v4}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v3, "[3] \u81ea\u5b9a\u4e49\u65e5\u5fd7\u5c06\u4f1a\u5728Logcat\u4e2d\u8f93\u51fa -- Custom log will be output to logcat."

    .line 131
    new-array v4, v2, [Ljava/lang/Object;

    invoke-static {v3, v4}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v3, "--------------------------------------------------------------------------------------------"

    .line 132
    new-array v4, v2, [Ljava/lang/Object;

    invoke-static {v3, v4}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v3, "[init] Open debug mode of Bugly."

    .line 134
    new-array v4, v2, [Ljava/lang/Object;

    invoke-static {v3, v4}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/String;[Ljava/lang/Object;)Z

    :cond_3
    const-string v3, " crash report start initializing..."

    .line 137
    new-array v4, v2, [Ljava/lang/Object;

    invoke-static {v3, v4}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v3, "[init] Bugly start initializing..."

    .line 138
    new-array v4, v2, [Ljava/lang/Object;

    invoke-static {v3, v4}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v3, "[init] Bugly complete version: v%s"

    .line 139
    new-array v4, v1, [Ljava/lang/Object;

    const-string v5, "4.1.9.2"

    aput-object v5, v4, v2

    invoke-static {v3, v4}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 141
    invoke-static {p0}, Lcom/tencent/bugly/proguard/ap;->a(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    .line 144
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object v3

    .line 146
    invoke-virtual {v3}, Lcom/tencent/bugly/proguard/aa;->o()Ljava/lang/String;

    .line 147
    invoke-static {p0}, Lcom/tencent/bugly/proguard/ao;->a(Landroid/content/Context;)V

    .line 148
    sget-object v4, Lcom/tencent/bugly/proguard/p;->b:Ljava/util/List;

    invoke-static {p0, v4}, Lcom/tencent/bugly/proguard/w;->a(Landroid/content/Context;Ljava/util/List;)Lcom/tencent/bugly/proguard/w;

    move-result-object v4

    sput-object v4, Lcom/tencent/bugly/proguard/p;->d:Lcom/tencent/bugly/proguard/w;

    .line 149
    invoke-static {p0}, Lcom/tencent/bugly/proguard/ai;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/ai;

    .line 150
    sget-object v4, Lcom/tencent/bugly/proguard/p;->b:Ljava/util/List;

    invoke-static {p0, v4}, Lcom/tencent/bugly/proguard/ac;->a(Landroid/content/Context;Ljava/util/List;)Lcom/tencent/bugly/proguard/ac;

    .line 151
    invoke-static {p0}, Lcom/tencent/bugly/proguard/u;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/u;

    move-result-object v4

    .line 154
    invoke-static {v3}, Lcom/tencent/bugly/proguard/p;->a(Lcom/tencent/bugly/proguard/aa;)Z

    move-result v5

    if-eqz v5, :cond_4

    .line 155
    sput-boolean v2, Lcom/tencent/bugly/proguard/p;->a:Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 156
    monitor-exit v0

    return-void

    .line 1349
    :cond_4
    :try_start_4
    iput-object p1, v3, Lcom/tencent/bugly/proguard/aa;->r:Ljava/lang/String;

    const-string v5, "APP_ID"

    .line 1350
    invoke-virtual {v3, v5, p1}, Lcom/tencent/bugly/proguard/aa;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string v5, "[param] Set APP ID:%s"

    .line 160
    new-array v6, v1, [Ljava/lang/Object;

    aput-object p1, v6, v2

    invoke-static {v5, v6}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    if-eqz p3, :cond_10

    .line 2192
    invoke-virtual {p3}, Lcom/tencent/bugly/BuglyStrategy;->getAppVersion()Ljava/lang/String;

    move-result-object p1

    .line 2193
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    const/4 v6, 0x2

    const/4 v7, 0x3

    const/16 v8, 0x64

    if-nez v5, :cond_6

    .line 2194
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v5

    if-le v5, v8, :cond_5

    .line 2195
    invoke-virtual {p1, v2, v8}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v5

    const-string v9, "appVersion %s length is over limit %d substring to %s"

    .line 2196
    new-array v10, v7, [Ljava/lang/Object;

    aput-object p1, v10, v2

    .line 2197
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v10, v1

    aput-object v5, v10, v6

    .line 2196
    invoke-static {v9, v10}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    move-object p1, v5

    .line 2201
    :cond_5
    iput-object p1, v3, Lcom/tencent/bugly/proguard/aa;->o:Ljava/lang/String;

    const-string p1, "[param] Set App version: %s"

    .line 2202
    new-array v5, v1, [Ljava/lang/Object;

    invoke-virtual {p3}, Lcom/tencent/bugly/BuglyStrategy;->getAppVersion()Ljava/lang/String;

    move-result-object v9

    aput-object v9, v5, v2

    invoke-static {p1, v5}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 2207
    :cond_6
    :try_start_5
    invoke-virtual {p3}, Lcom/tencent/bugly/BuglyStrategy;->isReplaceOldChannel()Z

    move-result p1

    const/16 v5, 0x22c

    if-eqz p1, :cond_8

    .line 2209
    invoke-virtual {p3}, Lcom/tencent/bugly/BuglyStrategy;->getAppChannel()Ljava/lang/String;

    move-result-object p1

    .line 2210
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9

    if-nez v9, :cond_9

    .line 2211
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v9

    if-le v9, v8, :cond_7

    .line 2212
    invoke-virtual {p1, v2, v8}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v9

    const-string v10, "appChannel %s length is over limit %d substring to %s"

    .line 2213
    new-array v11, v7, [Ljava/lang/Object;

    aput-object p1, v11, v2

    .line 2214
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v11, v1

    aput-object v9, v11, v6

    .line 2213
    invoke-static {v10, v11}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    move-object p1, v9

    .line 2217
    :cond_7
    sget-object v9, Lcom/tencent/bugly/proguard/p;->d:Lcom/tencent/bugly/proguard/w;

    const-string v10, "app_channel"

    .line 2218
    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object v11

    .line 2217
    invoke-virtual {v9, v5, v10, v11, v2}, Lcom/tencent/bugly/proguard/w;->a(ILjava/lang/String;[BZ)Z

    .line 2219
    iput-object p1, v3, Lcom/tencent/bugly/proguard/aa;->s:Ljava/lang/String;

    goto :goto_0

    .line 2222
    :cond_8
    sget-object p1, Lcom/tencent/bugly/proguard/p;->d:Lcom/tencent/bugly/proguard/w;

    const/4 v9, 0x0

    .line 3270
    invoke-virtual {p1, v5, v9}, Lcom/tencent/bugly/proguard/w;->a(ILcom/tencent/bugly/proguard/v;)Ljava/util/Map;

    move-result-object p1

    if-eqz p1, :cond_9

    const-string v5, "app_channel"

    .line 2225
    invoke-interface {p1, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [B

    if-eqz p1, :cond_9

    .line 2227
    new-instance v5, Ljava/lang/String;

    invoke-direct {v5, p1}, Ljava/lang/String;-><init>([B)V

    iput-object v5, v3, Lcom/tencent/bugly/proguard/aa;->s:Ljava/lang/String;

    :cond_9
    :goto_0
    const-string p1, "[param] Set App channel: %s"

    .line 2232
    new-array v5, v1, [Ljava/lang/Object;

    iget-object v9, v3, Lcom/tencent/bugly/proguard/aa;->s:Ljava/lang/String;

    aput-object v9, v5, v2

    invoke-static {p1, v5}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_0
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 2234
    :try_start_6
    sget-boolean v5, Lcom/tencent/bugly/proguard/p;->c:Z

    if-eqz v5, :cond_a

    .line 2235
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 2240
    :cond_a
    :goto_1
    invoke-virtual {p3}, Lcom/tencent/bugly/BuglyStrategy;->getAppPackageName()Ljava/lang/String;

    move-result-object p1

    .line 2241
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_c

    .line 2242
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v5

    if-le v5, v8, :cond_b

    .line 2243
    invoke-virtual {p1, v2, v8}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v5

    const-string v9, "appPackageName %s length is over limit %d substring to %s"

    .line 2244
    new-array v10, v7, [Ljava/lang/Object;

    aput-object p1, v10, v2

    .line 2245
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v10, v1

    aput-object v5, v10, v6

    .line 2244
    invoke-static {v9, v10}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    move-object p1, v5

    .line 2249
    :cond_b
    iput-object p1, v3, Lcom/tencent/bugly/proguard/aa;->c:Ljava/lang/String;

    const-string p1, "[param] Set App package: %s"

    .line 2250
    new-array v5, v1, [Ljava/lang/Object;

    invoke-virtual {p3}, Lcom/tencent/bugly/BuglyStrategy;->getAppPackageName()Ljava/lang/String;

    move-result-object v9

    aput-object v9, v5, v2

    invoke-static {p1, v5}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 2254
    :cond_c
    invoke-virtual {p3}, Lcom/tencent/bugly/BuglyStrategy;->getDeviceID()Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_e

    .line 2256
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v5

    if-le v5, v8, :cond_d

    .line 2257
    invoke-virtual {p1, v2, v8}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v5

    const-string v9, "deviceId %s length is over limit %d substring to %s"

    .line 2258
    new-array v7, v7, [Ljava/lang/Object;

    aput-object p1, v7, v2

    .line 2259
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v7, v1

    aput-object v5, v7, v6

    .line 2258
    invoke-static {v9, v7}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    move-object p1, v5

    .line 2262
    :cond_d
    invoke-virtual {v3, p1}, Lcom/tencent/bugly/proguard/aa;->a(Ljava/lang/String;)V

    const-string v5, "[param] Set device ID: %s"

    .line 2263
    new-array v6, v1, [Ljava/lang/Object;

    aput-object p1, v6, v2

    invoke-static {v5, v6}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 2266
    :cond_e
    invoke-virtual {p3}, Lcom/tencent/bugly/BuglyStrategy;->getDeviceModel()Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_f

    .line 2268
    invoke-virtual {v3, p1}, Lcom/tencent/bugly/proguard/aa;->b(Ljava/lang/String;)V

    const-string v5, "[param] Set device model: %s"

    .line 2269
    new-array v1, v1, [Ljava/lang/Object;

    aput-object p1, v1, v2

    invoke-static {v5, v1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 2273
    :cond_f
    invoke-virtual {p3}, Lcom/tencent/bugly/BuglyStrategy;->isUploadProcess()Z

    move-result p1

    iput-boolean p1, v3, Lcom/tencent/bugly/proguard/aa;->f:Z

    .line 2276
    invoke-virtual {p3}, Lcom/tencent/bugly/BuglyStrategy;->isBuglyLogUpload()Z

    move-result p1

    .line 2277
    sput-boolean p1, Lcom/tencent/bugly/proguard/ao;->b:Z

    :cond_10
    const/4 p1, 0x0

    .line 165
    :goto_2
    sget-object v1, Lcom/tencent/bugly/proguard/p;->b:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    if-ge p1, v1, :cond_12

    .line 167
    :try_start_7
    sget-object v1, Lcom/tencent/bugly/proguard/p;->b:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tencent/bugly/proguard/o;

    iget v1, v1, Lcom/tencent/bugly/proguard/o;->id:I

    invoke-virtual {v4, v1}, Lcom/tencent/bugly/proguard/u;->b(I)Z

    move-result v1

    if-eqz v1, :cond_11

    .line 168
    sget-object v1, Lcom/tencent/bugly/proguard/p;->b:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tencent/bugly/proguard/o;

    invoke-virtual {v1, p0, p2, p3}, Lcom/tencent/bugly/proguard/o;->init(Landroid/content/Context;ZLcom/tencent/bugly/BuglyStrategy;)V
    :try_end_7
    .catch Ljava/lang/Throwable; {:try_start_7 .. :try_end_7} :catch_1
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    goto :goto_3

    :catch_1
    move-exception v1

    .line 171
    :try_start_8
    invoke-static {v1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result v3

    if-nez v3, :cond_11

    .line 172
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_11
    :goto_3
    add-int/lit8 p1, p1, 0x1

    goto :goto_2

    .line 177
    :cond_12
    invoke-static {p0, p3}, Lcom/tencent/bugly/proguard/s;->a(Landroid/content/Context;Lcom/tencent/bugly/BuglyStrategy;)V

    if-eqz p3, :cond_13

    .line 180
    invoke-virtual {p3}, Lcom/tencent/bugly/BuglyStrategy;->getAppReportDelay()J

    move-result-wide p0

    goto :goto_4

    :cond_13
    const-wide/16 p0, 0x0

    .line 181
    :goto_4
    invoke-static {}, Lcom/tencent/bugly/proguard/ac;->a()Lcom/tencent/bugly/proguard/ac;

    move-result-object p2

    .line 4085
    iget-object p3, p2, Lcom/tencent/bugly/proguard/ac;->c:Lcom/tencent/bugly/proguard/ak;

    new-instance v1, Lcom/tencent/bugly/proguard/ac$1;

    invoke-direct {v1, p2}, Lcom/tencent/bugly/proguard/ac$1;-><init>(Lcom/tencent/bugly/proguard/ac;)V

    invoke-virtual {p3, v1, p0, p1}, Lcom/tencent/bugly/proguard/ak;->a(Ljava/lang/Runnable;J)Z

    const-string p0, "[init] Bugly initialization finished."

    .line 183
    new-array p1, v2, [Ljava/lang/Object;

    invoke-static {p0, p1}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_0

    .line 184
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static declared-synchronized a(Lcom/tencent/bugly/proguard/o;)V
    .locals 2

    const-class v0, Lcom/tencent/bugly/proguard/p;

    monitor-enter v0

    .line 286
    :try_start_0
    sget-object v1, Lcom/tencent/bugly/proguard/p;->b:Ljava/util/List;

    invoke-interface {v1, p0}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 287
    sget-object v1, Lcom/tencent/bugly/proguard/p;->b:Ljava/util/List;

    invoke-interface {v1, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 289
    :cond_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private static a(Lcom/tencent/bugly/proguard/aa;)Z
    .locals 1

    .line 48
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->v:Ljava/util/List;

    .line 49
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    if-eqz v0, :cond_0

    const-string p0, "bugly"

    .line 50
    invoke-interface {v0, p0}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method
