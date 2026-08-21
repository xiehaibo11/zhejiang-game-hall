.class public Lcom/kuaishou/weapon/p0/ba;
.super Ljava/lang/Object;


# instance fields
.field private a:Lorg/json/JSONObject;

.field private b:I


# direct methods
.method public constructor <init>(Landroid/content/Context;ILjava/lang/String;Z)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    sget-boolean v0, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSuccess:Z

    if-eqz v0, :cond_0

    if-eqz p4, :cond_0

    :try_start_0
    invoke-static {p1}, Lcom/kuaishou/weapon/p0/jni/Engine;->getInstance(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/jni/Engine;

    move-result-object p1

    sget-object p4, Lcom/kuaishou/weapon/p0/cj;->f:Ljava/lang/String;

    invoke-static {p4}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p4

    invoke-virtual {p4}, Ljava/lang/Integer;->intValue()I

    move-result p4

    const/4 v0, 0x0

    invoke-virtual {p1, p4, v0, p2, p3}, Lcom/kuaishou/weapon/p0/jni/Engine;->pqr(IIILjava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_0

    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    iput-object p2, p0, Lcom/kuaishou/weapon/p0/ba;->a:Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public static a(Landroid/content/Context;)Z
    .locals 3

    const/4 v0, 0x0

    :try_start_0
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x17

    if-lt v1, v2, :cond_0

    const-string v1, "android.permission.READ_EXTERNAL_STORAGE"

    invoke-static {p0, v1}, Lcom/kuaishou/weapon/p0/g;->a(Landroid/content/Context;Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, -0x1

    if-ne p0, v1, :cond_0

    return v0

    :cond_0
    const/4 p0, 0x1

    return p0

    :catch_0
    return v0
.end method


# virtual methods
.method public a()I
    .locals 1

    iget v0, p0, Lcom/kuaishou/weapon/p0/ba;->b:I

    return v0
.end method

.method public a(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/ba;->a:Lorg/json/JSONObject;

    if-eqz v0, :cond_0

    :try_start_0
    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public b()Lorg/json/JSONObject;
    .locals 1

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/ba;->a:Lorg/json/JSONObject;

    return-object v0
.end method

.method public c()Lorg/json/JSONObject;
    .locals 15

    const-string v0, "init.svc."

    const-string v1, "]:"

    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v4, 0x0

    iput v4, p0, Lcom/kuaishou/weapon/p0/ba;->b:I

    const/16 v5, 0xa

    const/4 v6, 0x0

    :try_start_0
    const-string v7, "2afcabd3eda8ae"

    const-string v8, "077f"

    invoke-static {v7, v8}, Lcom/kuaishou/weapon/p0/i;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v8

    invoke-virtual {v8, v7}, Ljava/lang/Runtime;->exec(Ljava/lang/String;)Ljava/lang/Process;

    move-result-object v7

    new-instance v8, Ljava/io/InputStreamReader;

    invoke-virtual {v7}, Ljava/lang/Process;->getInputStream()Ljava/io/InputStream;

    move-result-object v7

    invoke-direct {v8, v7}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    :try_start_1
    new-instance v7, Ljava/io/LineNumberReader;

    invoke-direct {v7, v8}, Ljava/io/LineNumberReader;-><init>(Ljava/io/Reader;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
    invoke-virtual {v7}, Ljava/io/LineNumberReader;->readLine()Ljava/lang/String;

    move-result-object v9

    move v10, v4

    :goto_0
    invoke-static {v9}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    if-nez v11, :cond_3

    invoke-virtual {v9, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v11

    const/4 v12, 0x1

    if-eqz v11, :cond_2

    invoke-virtual {v9, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v9

    array-length v11, v9

    const/4 v13, 0x2

    if-ne v11, v13, :cond_2

    aget-object v11, v9, v4

    invoke-virtual {v11}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v11

    aget-object v9, v9, v12

    invoke-virtual {v9}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v11}, Ljava/lang/String;->length()I

    move-result v14

    if-le v14, v13, :cond_2

    invoke-virtual {v9}, Ljava/lang/String;->length()I

    move-result v14

    if-le v14, v13, :cond_2

    invoke-virtual {v11, v12}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v9}, Ljava/lang/String;->length()I

    move-result v13

    sub-int/2addr v13, v12

    invoke-virtual {v9, v12, v13}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v11, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v13

    if-eqz v13, :cond_1

    const-string v13, "stopped"

    invoke-virtual {v9, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v13

    if-nez v13, :cond_0

    const-string v13, "running"

    invoke-virtual {v9, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v13

    if-eqz v13, :cond_1

    :cond_0
    const-string v13, ""

    invoke-virtual {v11, v0, v13}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    invoke-virtual {v2, v11, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_2
    add-int/2addr v10, v12

    const/16 v9, 0x514

    if-gt v10, v9, :cond_3

    invoke-virtual {v7}, Ljava/io/LineNumberReader;->readLine()Ljava/lang/String;

    move-result-object v9

    goto :goto_0

    :cond_3
    invoke-virtual {v2}, Lorg/json/JSONObject;->length()I

    move-result v0

    if-le v0, v5, :cond_4

    const-string v0, "n"

    invoke-virtual {v2}, Lorg/json/JSONObject;->length()I

    move-result v1

    invoke-virtual {v2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    :cond_4
    :try_start_3
    invoke-virtual {v8}, Ljava/io/InputStreamReader;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :catchall_0
    :goto_1
    :try_start_4
    invoke-virtual {v7}, Ljava/io/LineNumberReader;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_0

    goto :goto_3

    :catchall_1
    move-object v7, v6

    goto :goto_2

    :catchall_2
    move-object v7, v6

    move-object v8, v7

    :catchall_3
    :goto_2
    if-eqz v8, :cond_5

    :try_start_5
    invoke-virtual {v8}, Ljava/io/InputStreamReader;->close()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_4

    :catchall_4
    :cond_5
    if-eqz v7, :cond_6

    goto :goto_1

    :catch_0
    :cond_6
    :goto_3
    invoke-virtual {v2}, Lorg/json/JSONObject;->length()I

    move-result v0

    if-le v0, v5, :cond_7

    return-object v2

    :cond_7
    return-object v6
.end method
