.class public Lcom/yxcorp/kuaishou/addfp/android/a/c;
.super Ljava/lang/Object;


# static fields
.field private static d:Z = true


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/util/concurrent/locks/ReentrantLock;


# direct methods
.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/yxcorp/kuaishou/addfp/android/a/c;->b:Ljava/lang/String;

    new-instance v0, Ljava/util/concurrent/locks/ReentrantLock;

    invoke-direct {v0}, Ljava/util/concurrent/locks/ReentrantLock;-><init>()V

    iput-object v0, p0, Lcom/yxcorp/kuaishou/addfp/android/a/c;->c:Ljava/util/concurrent/locks/ReentrantLock;

    return-void
.end method

.method synthetic constructor <init>(Lcom/yxcorp/kuaishou/addfp/android/a/a;)V
    .locals 0

    invoke-direct {p0}, Lcom/yxcorp/kuaishou/addfp/android/a/c;-><init>()V

    return-void
.end method

.method public static a(Landroid/content/Context;)Ljava/lang/String;
    .locals 7

    :try_start_0
    sget-boolean v0, Lcom/yxcorp/kuaishou/addfp/android/a/c;->d:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    if-nez v0, :cond_0

    const-string p0, "KWE_NPN"

    return-object p0

    :cond_0
    const/4 v0, 0x1

    const/4 v1, 0x0

    :try_start_1
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const/16 v3, 0x1a

    if-lt v2, v3, :cond_1

    move v2, v0

    goto :goto_0

    :catchall_0
    move-exception v2

    :try_start_2
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    move v2, v1

    :goto_0
    if-nez v2, :cond_2

    invoke-static {}, Lcom/yxcorp/kuaishou/addfp/android/a/c;->b()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    return-object v2

    :cond_2
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x1d

    if-lt v2, v3, :cond_4

    sget-object v2, Landroid/os/Build;->MODEL:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_3

    invoke-virtual {v2}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v3

    const-string v4, "redmi"

    invoke-virtual {v3, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-virtual {v2}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v2

    const-string v3, "note 7"

    invoke-virtual {v2, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_3

    move v2, v0

    goto :goto_1

    :cond_3
    move v2, v1

    :goto_1
    sget-object v3, Landroid/os/Build;->BRAND:Ljava/lang/String;

    const-string v4, "HONOR"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_5

    move v2, v0

    goto :goto_2

    :cond_4
    move v2, v1

    :cond_5
    :goto_2
    if-nez v2, :cond_6

    invoke-static {}, Lcom/yxcorp/kuaishou/addfp/android/Orange;->getInstance()Lcom/yxcorp/kuaishou/addfp/android/Orange;

    move-result-object v2

    invoke-virtual {v2}, Lcom/yxcorp/kuaishou/addfp/android/Orange;->gSer()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_6

    const-string v3, "KWE"

    invoke-virtual {v2, v3}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_6

    return-object v2

    :cond_6
    const-string v2, "android.permission.READ_PHONE_STATE"

    filled-new-array {v2}, [Ljava/lang/String;

    move-result-object v2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    move v3, v1

    :goto_3
    if-gtz v3, :cond_8

    :try_start_3
    aget-object v4, v2, v1

    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v5

    invoke-static {}, Landroid/os/Process;->myUid()I

    move-result v6

    invoke-virtual {p0, v4, v5, v6}, Landroid/content/Context;->checkPermission(Ljava/lang/String;II)I

    move-result v4
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    const/4 v5, -0x1

    if-eq v4, v5, :cond_7

    add-int/lit8 v3, v3, 0x1

    goto :goto_3

    :catchall_1
    :cond_7
    move v0, v1

    :cond_8
    const-string p0, "unknown"

    if-eqz v0, :cond_9

    :try_start_4
    invoke-static {}, Landroid/os/Build;->getSerial()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_9

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_9

    return-object v0

    :cond_9
    sget-object v0, Landroid/os/Build;->SERIAL:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_a

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    if-nez p0, :cond_a

    return-object v0

    :catchall_2
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_a
    const-string p0, "KWE_N"

    return-object p0
.end method

.method private static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p0, "KWE_N"

    return-object p0

    :cond_0
    const-string v0, ""

    const-string v1, "="

    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    const-string v1, "&"

    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a(Lorg/json/JSONObject;)V
    .locals 3

    :try_start_0
    invoke-virtual {p0}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const-string v2, "64"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/4 v2, 0x1

    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-nez v1, :cond_0

    const/4 v1, 0x0

    sput-boolean v1, Lcom/yxcorp/kuaishou/addfp/android/a/c;->d:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    return-void
.end method

.method public static b()Ljava/lang/String;
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    new-instance v1, Ljava/io/File;

    const-string v2, "/sys/class/android_usb/android0/iSerial"

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_0

    new-instance v2, Ljava/io/BufferedReader;

    new-instance v3, Ljava/io/FileReader;

    invoke-direct {v3, v1}, Ljava/io/FileReader;-><init>(Ljava/io/File;)V

    invoke-direct {v2, v3}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    :try_start_1
    invoke-virtual {v2}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
    invoke-virtual {v2}, Ljava/io/BufferedReader;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-object v0

    :catchall_1
    move-exception v1

    goto :goto_1

    :cond_0
    move-object v2, v0

    :cond_1
    if-eqz v2, :cond_2

    goto :goto_2

    :catchall_2
    move-exception v1

    move-object v2, v0

    :goto_1
    :try_start_3
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_4

    if-eqz v2, :cond_2

    :goto_2
    :try_start_4
    invoke-virtual {v2}, Ljava/io/BufferedReader;->close()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    goto :goto_3

    :catchall_3
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    :goto_3
    return-object v0

    :catchall_4
    move-exception v0

    if-eqz v2, :cond_3

    :try_start_5
    invoke-virtual {v2}, Ljava/io/BufferedReader;->close()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_5

    goto :goto_4

    :catchall_5
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_3
    :goto_4
    throw v0
.end method

.method public static c()Lcom/yxcorp/kuaishou/addfp/android/a/c;
    .locals 1

    sget-object v0, Lcom/yxcorp/kuaishou/addfp/android/a/b;->a:Lcom/yxcorp/kuaishou/addfp/android/a/c;

    return-object v0
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/yxcorp/kuaishou/addfp/android/a/c;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/yxcorp/kuaishou/addfp/android/a/c;->a:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    const-string v0, "KWE_N"

    return-object v0
.end method

.method public a(Landroid/content/Context;Lcom/yxcorp/kuaishou/addfp/ResponseDfpCallback;Z)Ljava/lang/String;
    .locals 22

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    const-string v3, " "

    const-string v4, "KWE_NPN"

    const-string v5, "AD_AND"

    const-string v6, "k14"

    const-string v7, ""

    const-string v8, "KWE_N"

    const-string v9, "KWE_PE"

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v10

    :try_start_0
    iget-object v0, v1, Lcom/yxcorp/kuaishou/addfp/android/a/c;->c:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->lock()V

    iget-object v0, v1, Lcom/yxcorp/kuaishou/addfp/android/a/c;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, v1, Lcom/yxcorp/kuaishou/addfp/android/a/c;->b:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_a

    iget-object v2, v1, Lcom/yxcorp/kuaishou/addfp/android/a/c;->c:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v2}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return-object v0

    :cond_0
    :try_start_1
    new-instance v12, Lorg/json/JSONObject;

    invoke-direct {v12}, Lorg/json/JSONObject;-><init>()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_a

    const-string v0, "k23"

    :try_start_2
    sget-object v13, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    invoke-static {v13}, Lcom/yxcorp/kuaishou/addfp/android/a/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-static {v13}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v0, v13}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_a

    const-string v0, "k61"

    :try_start_3
    sget-object v13, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-static {v13}, Lcom/yxcorp/kuaishou/addfp/android/a/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-static {v13}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v0, v13}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    sget-object v0, Landroid/os/Build;->MODEL:Ljava/lang/String;

    invoke-static {v0}, Lcom/yxcorp/kuaishou/addfp/android/a/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_a

    const-string v13, "k27"

    :try_start_4
    invoke-static {v0}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v13, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static/range {p1 .. p1}, Lcom/yxcorp/kuaishou/addfp/android/a/c;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_a

    const-string v13, "k64"

    :try_start_5
    invoke-static {v0}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v13, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const/4 v13, 0x0

    invoke-static {v13}, Lcom/yxcorp/kuaishou/addfp/android/b/d;->c(Z)Ljava/lang/String;

    move-result-object v0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_a

    const-string v14, "k31"

    :try_start_6
    invoke-static {v0}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v14, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const/4 v14, 0x1

    invoke-static {v14}, Lcom/yxcorp/kuaishou/addfp/android/b/d;->c(Z)Ljava/lang/String;

    move-result-object v0
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_a

    const-string v15, "k117"

    :try_start_7
    invoke-static {v0}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v15, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_a

    const-string v0, "k66"

    :try_start_8
    invoke-static {v13}, Lcom/yxcorp/kuaishou/addfp/android/b/d;->a(Z)Ljava/lang/String;

    move-result-object v15

    invoke-static {v15}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v12, v0, v15}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_a

    const-string v0, "k116"

    :try_start_9
    invoke-static {v14}, Lcom/yxcorp/kuaishou/addfp/android/b/d;->a(Z)Ljava/lang/String;

    move-result-object v15

    invoke-static {v15}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v12, v0, v15}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_a

    const-string v15, "k39"

    const-wide/16 v16, 0x0

    :try_start_a
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v18

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v20
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_0

    sub-long v18, v18, v20

    goto :goto_0

    :catchall_0
    move-exception v0

    :try_start_b
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    move-wide/from16 v18, v16

    :goto_0
    invoke-static/range {v18 .. v19}, Ljava/lang/Long;->toString(J)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v15, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance v0, Ljava/lang/String;

    const-string v15, "Y2F0IC9zeXMvZGV2aWNlcy9zb2MwL3NlcmlhbF9udW1iZXI="

    invoke-static {v15, v13}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object v15

    invoke-direct {v0, v15}, Ljava/lang/String;-><init>([B)V

    invoke-static {v0}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v15, "k101"

    invoke-virtual {v12, v15, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_a

    const-string v0, "k102"

    :try_start_c
    new-instance v15, Ljava/lang/String;

    const-string v14, "Y2F0IC9wcm9jL3N5cy9rZXJuZWwvcmFuZG9tL2Jvb3RfaWQ="

    invoke-static {v14, v13}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object v14

    invoke-direct {v15, v14}, Ljava/lang/String;-><init>([B)V

    invoke-static {v15}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    invoke-static {v14}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v12, v0, v14}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_a

    const-string v0, "k57"

    :try_start_d
    invoke-static {v13}, Lcom/yxcorp/kuaishou/addfp/android/b/d;->b(Z)Ljava/lang/String;

    move-result-object v14

    invoke-static {v14}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v12, v0, v14}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_d
    .catchall {:try_start_d .. :try_end_d} :catchall_a

    const-string v0, "k118"

    const/4 v14, 0x1

    :try_start_e
    invoke-static {v14}, Lcom/yxcorp/kuaishou/addfp/android/b/d;->b(Z)Ljava/lang/String;

    move-result-object v15

    invoke-static {v15}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v12, v0, v14}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_e
    .catchall {:try_start_e .. :try_end_e} :catchall_a

    const-string v0, "k68"

    :try_start_f
    invoke-static {v13}, Lcom/yxcorp/kuaishou/addfp/android/b/d;->e(Z)Ljava/lang/String;

    move-result-object v14

    invoke-static {v14}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v12, v0, v14}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_f
    .catchall {:try_start_f .. :try_end_f} :catchall_a

    const-string v0, "k120"

    const/4 v14, 0x1

    :try_start_10
    invoke-static {v14}, Lcom/yxcorp/kuaishou/addfp/android/b/d;->e(Z)Ljava/lang/String;

    move-result-object v15

    invoke-static {v15}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v12, v0, v14}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/yxcorp/kuaishou/addfp/android/Orange;->getInstance()Lcom/yxcorp/kuaishou/addfp/android/Orange;

    move-result-object v0

    invoke-virtual {v0}, Lcom/yxcorp/kuaishou/addfp/android/Orange;->gRdi()Ljava/lang/String;

    move-result-object v0
    :try_end_10
    .catchall {:try_start_10 .. :try_end_10} :catchall_a

    const-string v14, "k105"

    :try_start_11
    invoke-static {v0}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v14, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_11
    .catchall {:try_start_11 .. :try_end_11} :catchall_a

    const-string v14, "k83"

    :try_start_12
    invoke-static {}, Lcom/yxcorp/kuaishou/addfp/android/a/c;->c()Lcom/yxcorp/kuaishou/addfp/android/a/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/yxcorp/kuaishou/addfp/android/a/c;->a()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/yxcorp/kuaishou/addfp/KWEGIDDFP;->instance()Lcom/yxcorp/kuaishou/addfp/KWEGIDDFP;

    move-result-object v15

    invoke-virtual {v15, v2, v0, v13}, Lcom/yxcorp/kuaishou/addfp/KWEGIDDFP;->getEGidLocal(Landroid/content/Context;Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v15
    :try_end_12
    .catchall {:try_start_12 .. :try_end_12} :catchall_1

    if-eqz v15, :cond_1

    move-object v0, v8

    goto :goto_1

    :catchall_1
    move-exception v0

    :try_start_13
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    move-object v0, v9

    :cond_1
    :goto_1
    invoke-static {v0}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v14, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static/range {p1 .. p1}, Lcom/yxcorp/kuaishou/addfp/c/a/a;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0
    :try_end_13
    .catchall {:try_start_13 .. :try_end_13} :catchall_a

    const-string v14, "k86"

    :try_start_14
    invoke-static {v0}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v14, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_14
    .catchall {:try_start_14 .. :try_end_14} :catchall_a

    const-string v14, "k3"

    :try_start_15
    invoke-virtual/range {p1 .. p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    const-string v15, "="

    invoke-virtual {v0, v15, v7}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    const-string v15, "&"

    invoke-virtual {v0, v15, v7}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0
    :try_end_15
    .catchall {:try_start_15 .. :try_end_15} :catchall_2

    goto :goto_2

    :catchall_2
    move-exception v0

    :try_start_16
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    move-object v0, v9

    :goto_2
    invoke-static {v0}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v14, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_16
    .catchall {:try_start_16 .. :try_end_16} :catchall_a

    const-string v0, "k109"

    :try_start_17
    invoke-static {}, Lcom/yxcorp/kuaishou/addfp/android/Orange;->getInstance()Lcom/yxcorp/kuaishou/addfp/android/Orange;

    move-result-object v7

    invoke-virtual {v7}, Lcom/yxcorp/kuaishou/addfp/android/Orange;->gProps()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v12, v0, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_17
    .catchall {:try_start_17 .. :try_end_17} :catchall_a

    const-string v0, "k36"

    const-string v7, "1.3.6.92.f75f436d"

    :try_start_18
    invoke-static {v7}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v12, v0, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {v5}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v6, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_18
    .catchall {:try_start_18 .. :try_end_18} :catchall_a

    const-string v0, "k5"

    :try_start_19
    invoke-static {}, Landroid/os/Environment;->getDataDirectory()Ljava/io/File;

    move-result-object v7

    new-instance v14, Landroid/os/StatFs;

    invoke-virtual {v7}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v7

    invoke-direct {v14, v7}, Landroid/os/StatFs;-><init>(Ljava/lang/String;)V

    invoke-virtual {v14}, Landroid/os/StatFs;->getBlockSize()I

    move-result v7
    :try_end_19
    .catchall {:try_start_19 .. :try_end_19} :catchall_3

    move-object v15, v8

    int-to-long v7, v7

    :try_start_1a
    invoke-virtual {v14}, Landroid/os/StatFs;->getBlockCount()I

    move-result v14
    :try_end_1a
    .catchall {:try_start_1a .. :try_end_1a} :catchall_4

    int-to-long v13, v14

    mul-long/2addr v13, v7

    goto :goto_3

    :catchall_3
    move-object v15, v8

    :catchall_4
    move-wide/from16 v13, v16

    :goto_3
    :try_start_1b
    invoke-static {v13, v14}, Ljava/lang/Long;->toString(J)Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v12, v0, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1b
    .catchall {:try_start_1b .. :try_end_1b} :catchall_9

    const-string v7, "k46"

    const-string v0, "/proc/meminfo"

    const/4 v8, 0x0

    :try_start_1c
    new-instance v13, Ljava/io/FileReader;

    invoke-direct {v13, v0}, Ljava/io/FileReader;-><init>(Ljava/lang/String;)V

    new-instance v14, Ljava/io/BufferedReader;

    const/16 v0, 0x2000

    invoke-direct {v14, v13, v0}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;I)V
    :try_end_1c
    .catchall {:try_start_1c .. :try_end_1c} :catchall_6

    :try_start_1d
    invoke-virtual {v14}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v0

    const-string v8, "\\s+"

    invoke-virtual {v0, v8}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    const/4 v8, 0x1

    aget-object v0, v0, v8

    invoke-static {v0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v16
    :try_end_1d
    .catchall {:try_start_1d .. :try_end_1d} :catchall_5

    const-wide/16 v20, 0x400

    mul-long v16, v16, v20

    :try_start_1e
    invoke-virtual {v14}, Ljava/io/BufferedReader;->close()V
    :try_end_1e
    .catch Ljava/io/IOException; {:try_start_1e .. :try_end_1e} :catch_0
    .catchall {:try_start_1e .. :try_end_1e} :catchall_9

    goto :goto_5

    :catchall_5
    move-exception v0

    move-object v8, v14

    goto :goto_4

    :catchall_6
    move-exception v0

    :goto_4
    :try_start_1f
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_1f
    .catchall {:try_start_1f .. :try_end_1f} :catchall_8

    if-eqz v8, :cond_2

    :try_start_20
    invoke-virtual {v8}, Ljava/io/BufferedReader;->close()V
    :try_end_20
    .catch Ljava/io/IOException; {:try_start_20 .. :try_end_20} :catch_0
    .catchall {:try_start_20 .. :try_end_20} :catchall_9

    :catch_0
    :cond_2
    :goto_5
    :try_start_21
    invoke-static/range {v16 .. v17}, Ljava/lang/Long;->toString(J)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v7, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_21
    .catchall {:try_start_21 .. :try_end_21} :catchall_9

    const-string v0, "k110"

    :try_start_22
    invoke-static {}, Lcom/yxcorp/kuaishou/addfp/android/Orange;->getInstance()Lcom/yxcorp/kuaishou/addfp/android/Orange;

    move-result-object v7

    invoke-virtual {v7}, Lcom/yxcorp/kuaishou/addfp/android/Orange;->gKpsd()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v12, v0, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_22
    .catchall {:try_start_22 .. :try_end_22} :catchall_9

    const-string v0, "k111"

    :try_start_23
    invoke-static {v4}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v12, v0, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/yxcorp/kuaishou/addfp/android/Orange;->getInstance()Lcom/yxcorp/kuaishou/addfp/android/Orange;

    move-result-object v0

    invoke-static {}, Lcom/yxcorp/kuaishou/addfp/c/a/a;->a()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v2, v7}, Lcom/yxcorp/kuaishou/addfp/android/Orange;->gManu(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_23
    .catchall {:try_start_23 .. :try_end_23} :catchall_9

    const-string v7, "k113"

    :try_start_24
    invoke-static {v0}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v7, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const/4 v7, 0x1

    invoke-static {v7}, Lcom/yxcorp/kuaishou/addfp/android/b/d;->d(Z)Ljava/lang/String;

    move-result-object v0
    :try_end_24
    .catchall {:try_start_24 .. :try_end_24} :catchall_9

    const-string v7, "k115"

    :try_start_25
    invoke-static {v0}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v7, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const/4 v7, 0x0

    invoke-static {v7}, Lcom/yxcorp/kuaishou/addfp/android/b/d;->d(Z)Ljava/lang/String;

    move-result-object v0

    if-eqz p3, :cond_4

    invoke-virtual {v0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_4

    const-string v4, "KWE"

    invoke-virtual {v0, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_4

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x1d

    if-lt v0, v4, :cond_3

    new-instance v0, Ljava/util/concurrent/CountDownLatch;

    const/4 v4, 0x1

    invoke-direct {v0, v4}, Ljava/util/concurrent/CountDownLatch;-><init>(I)V
    :try_end_25
    .catchall {:try_start_25 .. :try_end_25} :catchall_9

    const-wide/16 v7, 0x3e8

    :try_start_26
    sget-object v13, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-virtual {v0, v7, v8, v13}, Ljava/util/concurrent/CountDownLatch;->await(JLjava/util/concurrent/TimeUnit;)Z
    :try_end_26
    .catch Ljava/lang/InterruptedException; {:try_start_26 .. :try_end_26} :catch_1
    .catchall {:try_start_26 .. :try_end_26} :catchall_9

    goto :goto_6

    :catch_1
    move-exception v0

    :try_start_27
    invoke-virtual {v0}, Ljava/lang/InterruptedException;->printStackTrace()V

    goto :goto_6

    :cond_3
    const/4 v4, 0x1

    :goto_6
    const/4 v7, 0x0

    invoke-static {v7}, Lcom/yxcorp/kuaishou/addfp/android/b/d;->d(Z)Ljava/lang/String;

    move-result-object v0
    :try_end_27
    .catchall {:try_start_27 .. :try_end_27} :catchall_9

    goto :goto_7

    :cond_4
    const/4 v4, 0x1

    :goto_7
    const-string v7, "k97"

    :try_start_28
    invoke-static {v0}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v7, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_28
    .catchall {:try_start_28 .. :try_end_28} :catchall_9

    :try_start_29
    new-instance v0, Ljava/util/zip/CRC32;

    invoke-direct {v0}, Ljava/util/zip/CRC32;-><init>()V

    move v14, v4

    :goto_8
    const/16 v4, 0x78

    if-gt v14, v4, :cond_6

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v7, "k"

    invoke-direct {v4, v7}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v12, v4}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_5

    invoke-virtual {v12, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->getBytes()[B

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/util/zip/CRC32;->update([B)V

    :cond_5
    add-int/lit8 v14, v14, 0x1

    goto :goto_8

    :cond_6
    invoke-virtual {v0}, Ljava/util/zip/CRC32;->getValue()J

    move-result-wide v7

    invoke-static {v7, v8}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ":"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v6, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_29
    .catchall {:try_start_29 .. :try_end_29} :catchall_7

    goto :goto_9

    :catchall_7
    move-exception v0

    :try_start_2a
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_9
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v4, "mimi :"

    invoke-direct {v0, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v12}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->getBytes()[B

    move-result-object v4

    array-length v4, v4

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    sub-long/2addr v3, v10

    invoke-virtual {v0, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/yxcorp/kuaishou/addfp/android/Orange;->getInstance()Lcom/yxcorp/kuaishou/addfp/android/Orange;

    move-result-object v0

    invoke-virtual {v12}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->getBytes()[B

    move-result-object v3

    const/4 v4, 0x0

    invoke-virtual {v0, v2, v3, v4}, Lcom/yxcorp/kuaishou/addfp/android/Orange;->getMagicWrapper(Landroid/content/Context;[BI)[B

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "get mini lenth "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    array-length v3, v0

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const/4 v2, 0x0

    invoke-static {v0, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    const-string v2, "utf-8"

    invoke-static {v0, v2}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/yxcorp/kuaishou/addfp/android/a/c;->b:Ljava/lang/String;
    :try_end_2a
    .catchall {:try_start_2a .. :try_end_2a} :catchall_9

    goto :goto_b

    :catchall_8
    move-exception v0

    move-object v2, v0

    if-eqz v8, :cond_7

    :try_start_2b
    invoke-virtual {v8}, Ljava/io/BufferedReader;->close()V
    :try_end_2b
    .catch Ljava/io/IOException; {:try_start_2b .. :try_end_2b} :catch_2
    .catchall {:try_start_2b .. :try_end_2b} :catchall_9

    :catch_2
    :cond_7
    :try_start_2c
    throw v2
    :try_end_2c
    .catchall {:try_start_2c .. :try_end_2c} :catchall_9

    :catchall_9
    move-exception v0

    goto :goto_a

    :catchall_a
    move-exception v0

    move-object v15, v8

    :goto_a
    :try_start_2d
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    iput-object v9, v1, Lcom/yxcorp/kuaishou/addfp/android/a/c;->b:Ljava/lang/String;

    invoke-static {v0}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object v0

    const/4 v2, -0x1

    move-object/from16 v3, p2

    invoke-interface {v3, v2, v0}, Lcom/yxcorp/kuaishou/addfp/ResponseDfpCallback;->onFailed(ILjava/lang/String;)V
    :try_end_2d
    .catchall {:try_start_2d .. :try_end_2d} :catchall_b

    :goto_b
    iget-object v0, v1, Lcom/yxcorp/kuaishou/addfp/android/a/c;->c:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    iget-object v0, v1, Lcom/yxcorp/kuaishou/addfp/android/a/c;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_8

    move-object v2, v15

    iput-object v2, v1, Lcom/yxcorp/kuaishou/addfp/android/a/c;->b:Ljava/lang/String;

    :cond_8
    iget-object v0, v1, Lcom/yxcorp/kuaishou/addfp/android/a/c;->b:Ljava/lang/String;

    return-object v0

    :catchall_b
    move-exception v0

    iget-object v2, v1, Lcom/yxcorp/kuaishou/addfp/android/a/c;->c:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v2}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    throw v0
.end method

.method public b(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/yxcorp/kuaishou/addfp/android/a/c;->a:Ljava/lang/String;

    return-void
.end method
