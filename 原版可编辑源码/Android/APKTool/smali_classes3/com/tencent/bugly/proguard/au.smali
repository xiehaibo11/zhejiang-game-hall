.class public final Lcom/tencent/bugly/proguard/au;
.super Ljava/lang/Object;
.source "BUGLY"


# static fields
.field private static a:Lcom/tencent/bugly/proguard/au;


# instance fields
.field private b:Lcom/tencent/bugly/proguard/ac;

.field private c:Lcom/tencent/bugly/proguard/aa;

.field private d:Lcom/tencent/bugly/proguard/as;

.field private e:Landroid/content/Context;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 35
    invoke-static {}, Lcom/tencent/bugly/proguard/at;->a()Lcom/tencent/bugly/proguard/at;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 39
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/proguard/ac;->a()Lcom/tencent/bugly/proguard/ac;

    move-result-object v1

    iput-object v1, p0, Lcom/tencent/bugly/proguard/au;->b:Lcom/tencent/bugly/proguard/ac;

    .line 40
    invoke-static {p1}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object v1

    iput-object v1, p0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    .line 41
    iget-object v0, v0, Lcom/tencent/bugly/proguard/at;->s:Lcom/tencent/bugly/proguard/as;

    iput-object v0, p0, Lcom/tencent/bugly/proguard/au;->d:Lcom/tencent/bugly/proguard/as;

    .line 42
    iput-object p1, p0, Lcom/tencent/bugly/proguard/au;->e:Landroid/content/Context;

    .line 45
    invoke-static {}, Lcom/tencent/bugly/proguard/ak;->a()Lcom/tencent/bugly/proguard/ak;

    move-result-object p1

    new-instance v0, Lcom/tencent/bugly/proguard/au$1;

    invoke-direct {v0, p0}, Lcom/tencent/bugly/proguard/au$1;-><init>(Lcom/tencent/bugly/proguard/au;)V

    invoke-virtual {p1, v0}, Lcom/tencent/bugly/proguard/ak;->a(Ljava/lang/Runnable;)Z

    return-void
.end method

.method static synthetic a()Lcom/tencent/bugly/proguard/au;
    .locals 1

    .line 22
    sget-object v0, Lcom/tencent/bugly/proguard/au;->a:Lcom/tencent/bugly/proguard/au;

    return-object v0
.end method

.method public static a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/au;
    .locals 1

    .line 60
    sget-object v0, Lcom/tencent/bugly/proguard/au;->a:Lcom/tencent/bugly/proguard/au;

    if-nez v0, :cond_0

    .line 61
    new-instance v0, Lcom/tencent/bugly/proguard/au;

    invoke-direct {v0, p0}, Lcom/tencent/bugly/proguard/au;-><init>(Landroid/content/Context;)V

    sput-object v0, Lcom/tencent/bugly/proguard/au;->a:Lcom/tencent/bugly/proguard/au;

    .line 63
    :cond_0
    sget-object p0, Lcom/tencent/bugly/proguard/au;->a:Lcom/tencent/bugly/proguard/au;

    return-object p0
.end method

.method static synthetic a(Lcom/tencent/bugly/proguard/au;)V
    .locals 3

    const/4 v0, 0x0

    .line 1095
    new-array v1, v0, [Ljava/lang/Object;

    const-string v2, "[ExtraCrashManager] Trying to notify Bugly agents."

    invoke-static {v2, v1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    :try_start_0
    const-string v1, "com.tencent.bugly.agent.GameAgent"

    .line 1098
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "com.tencent.bugly"

    .line 1100
    iget-object p0, p0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    const-string p0, "sdkPackageName"

    .line 1104
    invoke-static {v1, p0, v2}, Lcom/tencent/bugly/proguard/ap;->a(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Object;)V

    const-string p0, "[ExtraCrashManager] Bugly game agent has been notified."

    .line 1105
    new-array v1, v0, [Ljava/lang/Object;

    invoke-static {p0, v1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    .line 1107
    :catch_0
    new-array p0, v0, [Ljava/lang/Object;

    const-string v0, "[ExtraCrashManager] no game agent"

    invoke-static {v0, p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void
.end method

.method static synthetic a(Lcom/tencent/bugly/proguard/au;Ljava/lang/Thread;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 16

    move-object/from16 v0, p0

    move/from16 v1, p2

    move-object/from16 v2, p3

    move-object/from16 v3, p4

    move-object/from16 v4, p5

    move-object/from16 v5, p6

    const-string v6, "[ExtraCrashManager] Successfully handled."

    if-nez p1, :cond_0

    .line 1200
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v7

    goto :goto_0

    :cond_0
    move-object/from16 v7, p1

    :goto_0
    const/4 v8, 0x4

    const/4 v9, 0x6

    const/16 v10, 0x8

    const/4 v11, 0x5

    const/4 v12, 0x1

    const/4 v13, 0x0

    if-eq v1, v8, :cond_3

    if-eq v1, v11, :cond_2

    if-eq v1, v9, :cond_2

    if-eq v1, v10, :cond_1

    .line 1216
    new-array v0, v12, [Ljava/lang/Object;

    invoke-static/range {p2 .. p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, v0, v13

    const-string v1, "[ExtraCrashManager] Unknown extra crash type: %d"

    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void

    :cond_1
    const-string v8, "H5"

    goto :goto_1

    :cond_2
    const-string v8, "Cocos"

    goto :goto_1

    :cond_3
    const-string v8, "Unity"

    .line 1219
    :goto_1
    new-array v14, v12, [Ljava/lang/Object;

    aput-object v8, v14, v13

    const-string v15, "[ExtraCrashManager] %s Crash Happen"

    invoke-static {v15, v14}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 1222
    :try_start_0
    iget-object v14, v0, Lcom/tencent/bugly/proguard/au;->b:Lcom/tencent/bugly/proguard/ac;

    invoke-virtual {v14}, Lcom/tencent/bugly/proguard/ac;->b()Z

    move-result v14

    if-nez v14, :cond_4

    const-string v14, "[ExtraCrashManager] There is no remote strategy, but still store it."

    .line 1223
    new-array v15, v13, [Ljava/lang/Object;

    invoke-static {v14, v15}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 1226
    :cond_4
    iget-object v14, v0, Lcom/tencent/bugly/proguard/au;->b:Lcom/tencent/bugly/proguard/ac;

    invoke-virtual {v14}, Lcom/tencent/bugly/proguard/ac;->c()Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    move-result-object v14

    .line 1227
    iget-boolean v15, v14, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->f:Z
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v12, "\n"

    if-nez v15, :cond_5

    :try_start_1
    iget-object v15, v0, Lcom/tencent/bugly/proguard/au;->b:Lcom/tencent/bugly/proguard/ac;

    invoke-virtual {v15}, Lcom/tencent/bugly/proguard/ac;->b()Z

    move-result v15

    if-eqz v15, :cond_5

    const-string v1, "[ExtraCrashManager] Crash report was closed by remote. Will not upload to Bugly , print local for helpful!"

    .line 1228
    new-array v5, v13, [Ljava/lang/Object;

    invoke-static {v1, v5}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 1230
    invoke-static {}, Lcom/tencent/bugly/proguard/ap;->a()Ljava/lang/String;

    move-result-object v1

    iget-object v0, v0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    iget-object v0, v0, Lcom/tencent/bugly/proguard/aa;->d:Ljava/lang/String;

    .line 1231
    invoke-virtual {v7}, Ljava/lang/Thread;->getName()Ljava/lang/String;

    move-result-object v5

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    move-object/from16 p0, v8

    move-object/from16 p1, v1

    move-object/from16 p2, v0

    move-object/from16 p3, v5

    move-object/from16 p4, v2

    move-object/from16 p5, v3

    .line 1230
    invoke-static/range {p0 .. p5}, Lcom/tencent/bugly/proguard/as;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;)V
    :try_end_1
    .catch Ljava/lang/Throwable; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1276
    new-array v0, v13, [Ljava/lang/Object;

    invoke-static {v6, v0}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void

    :cond_5
    const-string v15, "[ExtraCrashManager] %s report is disabled."

    if-eq v1, v11, :cond_8

    if-eq v1, v9, :cond_8

    if-eq v1, v10, :cond_7

    :cond_6
    const/4 v9, 0x1

    goto :goto_2

    .line 1244
    :cond_7
    :try_start_2
    iget-boolean v9, v14, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->l:Z

    if-nez v9, :cond_6

    const/4 v0, 0x1

    .line 1245
    new-array v0, v0, [Ljava/lang/Object;

    aput-object v8, v0, v13

    invoke-static {v15, v0}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_2
    .catch Ljava/lang/Throwable; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 1276
    new-array v0, v13, [Ljava/lang/Object;

    invoke-static {v6, v0}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void

    .line 1238
    :cond_8
    :try_start_3
    iget-boolean v9, v14, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->k:Z

    if-nez v9, :cond_6

    const/4 v9, 0x1

    .line 1239
    new-array v0, v9, [Ljava/lang/Object;

    aput-object v8, v0, v13

    invoke-static {v15, v0}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_3
    .catch Ljava/lang/Throwable; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 1276
    new-array v0, v13, [Ljava/lang/Object;

    invoke-static {v6, v0}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void

    :goto_2
    if-ne v1, v10, :cond_9

    goto :goto_3

    :cond_9
    move v11, v1

    .line 2125
    :goto_3
    :try_start_4
    new-instance v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;

    invoke-direct {v1}, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;-><init>()V

    .line 2128
    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->j()J

    move-result-wide v14

    iput-wide v14, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->C:J

    .line 2129
    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->f()J

    move-result-wide v14

    iput-wide v14, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->D:J

    .line 2130
    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->l()J

    move-result-wide v14

    iput-wide v14, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->E:J

    .line 2131
    iget-object v10, v0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v10}, Lcom/tencent/bugly/proguard/aa;->k()J

    move-result-wide v14

    iput-wide v14, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->F:J

    .line 2132
    iget-object v10, v0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v10}, Lcom/tencent/bugly/proguard/aa;->j()J

    move-result-wide v14

    iput-wide v14, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->G:J

    .line 2133
    iget-object v10, v0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v10}, Lcom/tencent/bugly/proguard/aa;->l()J

    move-result-wide v14

    iput-wide v14, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->H:J

    .line 2134
    iget-object v10, v0, Lcom/tencent/bugly/proguard/au;->e:Landroid/content/Context;

    invoke-static {v10}, Lcom/tencent/bugly/proguard/ab;->b(Landroid/content/Context;)J

    move-result-wide v14

    iput-wide v14, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->I:J

    .line 2135
    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->g()J

    move-result-wide v14

    iput-wide v14, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->J:J

    .line 2136
    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->h()J

    move-result-wide v14

    iput-wide v14, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->K:J

    .line 2137
    iput v11, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->b:I

    .line 2138
    iget-object v10, v0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v10}, Lcom/tencent/bugly/proguard/aa;->g()Ljava/lang/String;

    move-result-object v10

    iput-object v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->e:Ljava/lang/String;

    .line 2139
    iget-object v10, v0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    iget-object v10, v10, Lcom/tencent/bugly/proguard/aa;->o:Ljava/lang/String;

    iput-object v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->f:Ljava/lang/String;

    .line 2140
    iget-object v10, v0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v10}, Lcom/tencent/bugly/proguard/aa;->q()Ljava/lang/String;

    move-result-object v10

    iput-object v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->g:Ljava/lang/String;

    .line 2141
    iget-object v10, v0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v10}, Lcom/tencent/bugly/proguard/aa;->f()Ljava/lang/String;

    move-result-object v10

    iput-object v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->m:Ljava/lang/String;

    .line 2142
    invoke-static/range {p3 .. p3}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v10

    iput-object v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->n:Ljava/lang/String;

    .line 2143
    invoke-static/range {p4 .. p4}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v10

    iput-object v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->o:Ljava/lang/String;
    :try_end_4
    .catch Ljava/lang/Throwable; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    const-string v10, ""

    if-eqz v4, :cond_b

    .line 2147
    :try_start_5
    invoke-virtual {v4, v12}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v11

    .line 2148
    array-length v14, v11

    if-lez v14, :cond_a

    .line 2149
    aget-object v10, v11, v13

    :cond_a
    move-object v11, v4

    goto :goto_4

    :cond_b
    move-object v11, v10

    .line 2155
    :goto_4
    iput-object v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->p:Ljava/lang/String;

    .line 2156
    iput-object v11, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->q:Ljava/lang/String;

    .line 2157
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v10

    iput-wide v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->r:J

    .line 2158
    iget-object v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->q:Ljava/lang/String;

    invoke-virtual {v10}, Ljava/lang/String;->getBytes()[B

    move-result-object v10

    invoke-static {v10}, Lcom/tencent/bugly/proguard/ap;->c([B)Ljava/lang/String;

    move-result-object v10

    iput-object v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->u:Ljava/lang/String;

    .line 2159
    iget-object v10, v0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    .line 2393
    iget-boolean v10, v10, Lcom/tencent/bugly/proguard/aa;->Q:Z

    .line 2159
    sget v11, Lcom/tencent/bugly/proguard/at;->h:I

    invoke-static {v10, v11}, Lcom/tencent/bugly/proguard/ap;->a(ZI)Ljava/util/Map;

    move-result-object v10

    iput-object v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->z:Ljava/util/Map;

    .line 2161
    iget-object v10, v0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    iget-object v10, v10, Lcom/tencent/bugly/proguard/aa;->d:Ljava/lang/String;

    iput-object v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->A:Ljava/lang/String;

    .line 2162
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7}, Ljava/lang/Thread;->getName()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "("

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/Thread;->getId()J

    move-result-wide v14

    invoke-virtual {v10, v14, v15}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v11, ")"

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    iput-object v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->B:Ljava/lang/String;

    .line 2163
    iget-object v10, v0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v10}, Lcom/tencent/bugly/proguard/aa;->s()Ljava/lang/String;

    move-result-object v10

    iput-object v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->L:Ljava/lang/String;

    .line 2164
    iget-object v10, v0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v10}, Lcom/tencent/bugly/proguard/aa;->p()Ljava/util/Map;

    move-result-object v10

    iput-object v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->h:Ljava/util/Map;

    .line 2165
    iget-object v10, v0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    iget-wide v10, v10, Lcom/tencent/bugly/proguard/aa;->a:J

    iput-wide v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->Q:J

    .line 2166
    iget-object v10, v0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v10}, Lcom/tencent/bugly/proguard/aa;->a()Z

    move-result v10

    iput-boolean v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->R:Z

    .line 2169
    iget-object v10, v0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v10}, Lcom/tencent/bugly/proguard/aa;->z()I

    move-result v10

    iput v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->U:I

    .line 2170
    iget-object v10, v0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    .line 2996
    iget v10, v10, Lcom/tencent/bugly/proguard/aa;->x:I

    .line 2170
    iput v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->V:I

    .line 2171
    iget-object v10, v0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v10}, Lcom/tencent/bugly/proguard/aa;->t()Ljava/util/Map;

    move-result-object v10

    iput-object v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->W:Ljava/util/Map;

    .line 2172
    iget-object v10, v0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v10}, Lcom/tencent/bugly/proguard/aa;->y()Ljava/util/Map;

    move-result-object v10

    iput-object v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->X:Ljava/util/Map;

    .line 2174
    invoke-static {}, Lcom/tencent/bugly/proguard/ao;->a()[B

    move-result-object v10

    iput-object v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->y:[B

    .line 2177
    iget-object v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->S:Ljava/util/Map;

    if-nez v10, :cond_c

    .line 2178
    new-instance v10, Ljava/util/LinkedHashMap;

    invoke-direct {v10}, Ljava/util/LinkedHashMap;-><init>()V

    iput-object v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->S:Ljava/util/Map;

    :cond_c
    if-eqz v5, :cond_d

    .line 2181
    iget-object v10, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->S:Ljava/util/Map;

    invoke-interface {v10, v5}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    .line 1266
    :cond_d
    invoke-static {}, Lcom/tencent/bugly/proguard/ap;->a()Ljava/lang/String;

    move-result-object v5

    iget-object v10, v0, Lcom/tencent/bugly/proguard/au;->c:Lcom/tencent/bugly/proguard/aa;

    iget-object v10, v10, Lcom/tencent/bugly/proguard/aa;->d:Ljava/lang/String;

    .line 1267
    invoke-virtual {v7}, Ljava/lang/Thread;->getName()Ljava/lang/String;

    move-result-object v7

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    move-object/from16 p1, v8

    move-object/from16 p2, v5

    move-object/from16 p3, v10

    move-object/from16 p4, v7

    move-object/from16 p5, v2

    move-object/from16 p6, v1

    .line 1266
    invoke-static/range {p1 .. p6}, Lcom/tencent/bugly/proguard/as;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;)V

    .line 1268
    iget-object v2, v0, Lcom/tencent/bugly/proguard/au;->d:Lcom/tencent/bugly/proguard/as;

    invoke-static {}, Lcom/tencent/bugly/proguard/at;->a()Lcom/tencent/bugly/proguard/at;

    move-result-object v3

    .line 3477
    iget-boolean v3, v3, Lcom/tencent/bugly/proguard/at;->C:Z

    if-nez v3, :cond_e

    goto :goto_5

    :cond_e
    const/4 v9, 0x0

    .line 4300
    :goto_5
    invoke-virtual {v2, v1, v9}, Lcom/tencent/bugly/proguard/as;->a(Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;Z)Z

    move-result v2

    if-nez v2, :cond_f

    .line 1269
    iget-object v0, v0, Lcom/tencent/bugly/proguard/au;->d:Lcom/tencent/bugly/proguard/as;

    invoke-virtual {v0, v1, v13}, Lcom/tencent/bugly/proguard/as;->b(Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;Z)V
    :try_end_5
    .catch Ljava/lang/Throwable; {:try_start_5 .. :try_end_5} :catch_0
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    .line 1276
    :cond_f
    new-array v0, v13, [Ljava/lang/Object;

    invoke-static {v6, v0}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void

    :catchall_0
    move-exception v0

    goto :goto_6

    :catch_0
    move-exception v0

    .line 1272
    :try_start_6
    invoke-static {v0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result v1

    if-nez v1, :cond_10

    .line 1273
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    .line 1276
    :cond_10
    new-array v0, v13, [Ljava/lang/Object;

    invoke-static {v6, v0}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void

    :goto_6
    new-array v1, v13, [Ljava/lang/Object;

    invoke-static {v6, v1}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 1277
    throw v0
.end method

.method public static a(Ljava/lang/Thread;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Thread;",
            "I",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 72
    invoke-static {}, Lcom/tencent/bugly/proguard/ak;->a()Lcom/tencent/bugly/proguard/ak;

    move-result-object v0

    new-instance v8, Lcom/tencent/bugly/proguard/au$2;

    move-object v1, v8

    move-object v2, p0

    move v3, p1

    move-object v4, p2

    move-object v5, p3

    move-object v6, p4

    move-object v7, p5

    invoke-direct/range {v1 .. v7}, Lcom/tencent/bugly/proguard/au$2;-><init>(Ljava/lang/Thread;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    invoke-virtual {v0, v8}, Lcom/tencent/bugly/proguard/ak;->a(Ljava/lang/Runnable;)Z

    return-void
.end method
