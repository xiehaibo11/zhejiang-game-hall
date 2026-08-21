.class public final Lcom/tencent/bugly/proguard/az;
.super Ljava/lang/Object;
.source "BUGLY"


# direct methods
.method public static a(Landroid/app/ActivityManager;J)Landroid/app/ActivityManager$ProcessErrorStateInfo;
    .locals 9

    const/4 v0, 0x0

    const/4 v1, 0x0

    if-nez p0, :cond_0

    .line 53
    new-array p0, v1, [Ljava/lang/Object;

    const-string p1, "get anr state, ActivityManager is null"

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-object v0

    :cond_0
    const/4 v2, 0x1

    .line 56
    new-array v3, v2, [Ljava/lang/Object;

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    aput-object v4, v3, v1

    const-string v4, "get anr state, timeout:%d"

    invoke-static {v4, v3}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-wide/16 v3, 0x1f4

    .line 57
    div-long/2addr p1, v3

    const/4 v5, 0x0

    .line 60
    :goto_0
    invoke-virtual {p0}, Landroid/app/ActivityManager;->getProcessesInErrorState()Ljava/util/List;

    move-result-object v6

    .line 61
    invoke-static {v6}, Lcom/tencent/bugly/proguard/az;->a(Ljava/util/List;)Landroid/app/ActivityManager$ProcessErrorStateInfo;

    move-result-object v6

    if-nez v6, :cond_1

    .line 66
    new-array v6, v1, [Ljava/lang/Object;

    const-string v7, "found proc state is null"

    invoke-static {v7, v6}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    goto :goto_1

    .line 67
    :cond_1
    iget v7, v6, Landroid/app/ActivityManager$ProcessErrorStateInfo;->condition:I

    const/4 v8, 0x2

    if-ne v7, v8, :cond_2

    .line 70
    new-array p0, v2, [Ljava/lang/Object;

    iget-object p1, v6, Landroid/app/ActivityManager$ProcessErrorStateInfo;->processName:Ljava/lang/String;

    aput-object p1, p0, v1

    const-string p1, "found proc state is anr! proc:%s"

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-object v6

    .line 72
    :cond_2
    iget v6, v6, Landroid/app/ActivityManager$ProcessErrorStateInfo;->condition:I

    if-ne v6, v2, :cond_3

    .line 73
    new-array p0, v1, [Ljava/lang/Object;

    const-string p1, "found proc state is crashed!"

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-object v0

    :cond_3
    :goto_1
    add-int/lit8 v6, v5, 0x1

    int-to-long v7, v5

    cmp-long v5, v7, p1

    if-gez v5, :cond_4

    .line 79
    new-array v5, v2, [Ljava/lang/Object;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    aput-object v7, v5, v1

    const-string v7, "try the %s times:"

    invoke-static {v7, v5}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 80
    invoke-static {v3, v4}, Lcom/tencent/bugly/proguard/ap;->b(J)V

    move v5, v6

    goto :goto_0

    :cond_4
    const-string p0, "Find process anr, but unable to get anr message."

    .line 84
    invoke-static {p0}, Lcom/tencent/bugly/proguard/az;->a(Ljava/lang/String;)Landroid/app/ActivityManager$ProcessErrorStateInfo;

    move-result-object p0

    return-object p0
.end method

.method private static a(Ljava/lang/String;)Landroid/app/ActivityManager$ProcessErrorStateInfo;
    .locals 2

    .line 116
    new-instance v0, Landroid/app/ActivityManager$ProcessErrorStateInfo;

    invoke-direct {v0}, Landroid/app/ActivityManager$ProcessErrorStateInfo;-><init>()V

    .line 117
    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v1

    iput v1, v0, Landroid/app/ActivityManager$ProcessErrorStateInfo;->pid:I

    .line 118
    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v1

    invoke-static {v1}, Lcom/tencent/bugly/proguard/z;->a(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Landroid/app/ActivityManager$ProcessErrorStateInfo;->processName:Ljava/lang/String;

    .line 119
    iput-object p0, v0, Landroid/app/ActivityManager$ProcessErrorStateInfo;->shortMsg:Ljava/lang/String;

    return-object v0
.end method

.method private static a(Ljava/util/List;)Landroid/app/ActivityManager$ProcessErrorStateInfo;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Landroid/app/ActivityManager$ProcessErrorStateInfo;",
            ">;)",
            "Landroid/app/ActivityManager$ProcessErrorStateInfo;"
        }
    .end annotation

    const/4 v0, 0x0

    const/4 v1, 0x0

    if-eqz p0, :cond_4

    .line 94
    invoke-interface {p0}, Ljava/util/List;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_0

    .line 98
    :cond_0
    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v2

    .line 99
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_1
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/app/ActivityManager$ProcessErrorStateInfo;

    .line 101
    iget v4, v3, Landroid/app/ActivityManager$ProcessErrorStateInfo;->pid:I

    if-ne v4, v2, :cond_1

    .line 105
    iget-object p0, v3, Landroid/app/ActivityManager$ProcessErrorStateInfo;->longMsg:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_2

    return-object v0

    .line 108
    :cond_2
    new-array p0, v1, [Ljava/lang/Object;

    const-string v0, "found current proc in the error state"

    invoke-static {v0, p0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-object v3

    .line 111
    :cond_3
    new-array p0, v1, [Ljava/lang/Object;

    const-string v1, "current proc not in the error state"

    invoke-static {v1, p0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-object v0

    .line 95
    :cond_4
    :goto_0
    new-array p0, v1, [Ljava/lang/Object;

    const-string v1, "error state info list is null"

    invoke-static {v1, p0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-object v0
.end method
