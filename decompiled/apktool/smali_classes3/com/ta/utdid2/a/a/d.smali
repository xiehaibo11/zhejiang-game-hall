.class public Lcom/ta/utdid2/a/a/d;
.super Ljava/lang/Object;
.source "SourceFile"


# direct methods
.method private static a()Ljava/lang/String;
    .locals 3

    const-string v0, ""

    const-string v1, "ro.aliyun.clouduuid"

    .line 55
    invoke-static {v1, v0}, Lcom/ta/utdid2/a/a/g;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 56
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    const-string v1, "ro.sys.aliyun.clouduuid"

    .line 58
    invoke-static {v1, v0}, Lcom/ta/utdid2/a/a/g;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 61
    :cond_0
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 62
    invoke-static {}, Lcom/ta/utdid2/a/a/d;->b()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    return-object v1
.end method

.method private static b()Ljava/lang/String;
    .locals 4

    :try_start_0
    const-string v0, "com.yunos.baseservice.clouduuid.CloudUUID"

    .line 71
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "getCloudUUID"

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Class;

    .line 72
    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    const/4 v1, 0x0

    new-array v2, v2, [Ljava/lang/Object;

    .line 73
    invoke-virtual {v0, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string v0, ""

    :goto_0
    return-object v0
.end method

.method public static getImei(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x0

    if-eqz p0, :cond_0

    :try_start_0
    const-string v1, "phone"

    .line 34
    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/TelephonyManager;

    if-eqz p0, :cond_0

    .line 36
    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getDeviceId()Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, p0

    goto :goto_0

    :catch_0
    nop

    .line 42
    :cond_0
    :goto_0
    invoke-static {v0}, Lcom/ta/utdid2/a/a/f;->isEmpty(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_1

    .line 43
    invoke-static {}, Lcom/ta/utdid2/a/a/d;->a()Ljava/lang/String;

    move-result-object v0

    .line 45
    :cond_1
    invoke-static {v0}, Lcom/ta/utdid2/a/a/f;->isEmpty(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_2

    .line 46
    invoke-static {}, Lcom/ta/utdid2/a/a/d;->getUniqueID()Ljava/lang/String;

    move-result-object v0

    :cond_2
    return-object v0
.end method

.method public static getImsi(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x0

    if-eqz p0, :cond_0

    :try_start_0
    const-string v1, "phone"

    .line 85
    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/TelephonyManager;

    if-eqz p0, :cond_0

    .line 87
    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getSubscriberId()Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, p0

    goto :goto_0

    :catch_0
    nop

    .line 93
    :cond_0
    :goto_0
    invoke-static {v0}, Lcom/ta/utdid2/a/a/f;->isEmpty(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_1

    .line 94
    invoke-static {}, Lcom/ta/utdid2/a/a/d;->getUniqueID()Ljava/lang/String;

    move-result-object v0

    :cond_1
    return-object v0
.end method

.method public static getUniqueID()Ljava/lang/String;
    .locals 7

    .line 13
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    const-wide/16 v2, 0x3e8

    div-long/2addr v0, v2

    long-to-int v1, v0

    .line 14
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v2

    long-to-int v0, v2

    .line 15
    new-instance v2, Ljava/util/Random;

    invoke-direct {v2}, Ljava/util/Random;-><init>()V

    invoke-virtual {v2}, Ljava/util/Random;->nextInt()I

    move-result v2

    .line 16
    new-instance v3, Ljava/util/Random;

    invoke-direct {v3}, Ljava/util/Random;-><init>()V

    invoke-virtual {v3}, Ljava/util/Random;->nextInt()I

    move-result v3

    .line 17
    invoke-static {v1}, Lcom/ta/utdid2/a/a/c;->getBytes(I)[B

    move-result-object v1

    .line 18
    invoke-static {v0}, Lcom/ta/utdid2/a/a/c;->getBytes(I)[B

    move-result-object v0

    .line 19
    invoke-static {v2}, Lcom/ta/utdid2/a/a/c;->getBytes(I)[B

    move-result-object v2

    .line 20
    invoke-static {v3}, Lcom/ta/utdid2/a/a/c;->getBytes(I)[B

    move-result-object v3

    const/16 v4, 0x10

    new-array v4, v4, [B

    const/4 v5, 0x4

    const/4 v6, 0x0

    .line 22
    invoke-static {v1, v6, v4, v6, v5}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 23
    invoke-static {v0, v6, v4, v5, v5}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    const/16 v0, 0x8

    .line 24
    invoke-static {v2, v6, v4, v0, v5}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    const/16 v0, 0xc

    .line 25
    invoke-static {v3, v6, v4, v0, v5}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    const/4 v0, 0x2

    .line 26
    invoke-static {v4, v0}, Lcom/ta/utdid2/a/a/b;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
