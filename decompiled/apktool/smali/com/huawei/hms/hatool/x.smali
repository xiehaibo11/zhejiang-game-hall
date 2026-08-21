.class public Lcom/huawei/hms/hatool/x;
.super Ljava/lang/Object;
.source ""


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/huawei/hms/hatool/x$a;
    }
.end annotation


# static fields
.field public static b:Lcom/huawei/hms/hatool/x;


# instance fields
.field public a:Lcom/huawei/hms/hatool/x$a;


# direct methods
.method public static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/huawei/hms/hatool/x;

    invoke-direct {v0}, Lcom/huawei/hms/hatool/x;-><init>()V

    sput-object v0, Lcom/huawei/hms/hatool/x;->b:Lcom/huawei/hms/hatool/x;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/huawei/hms/hatool/x$a;

    invoke-direct {v0, p0}, Lcom/huawei/hms/hatool/x$a;-><init>(Lcom/huawei/hms/hatool/x;)V

    iput-object v0, p0, Lcom/huawei/hms/hatool/x;->a:Lcom/huawei/hms/hatool/x$a;

    return-void
.end method

.method public static synthetic a(Lcom/huawei/hms/hatool/x;)Lcom/huawei/hms/hatool/x$a;
    .locals 0

    iget-object p0, p0, Lcom/huawei/hms/hatool/x;->a:Lcom/huawei/hms/hatool/x$a;

    return-object p0
.end method

.method public static f()Lcom/huawei/hms/hatool/x;
    .locals 1

    sget-object v0, Lcom/huawei/hms/hatool/x;->b:Lcom/huawei/hms/hatool/x;

    return-object v0
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/huawei/hms/hatool/x;->a:Lcom/huawei/hms/hatool/x$a;

    iget-object v0, v0, Lcom/huawei/hms/hatool/x$a;->c:Ljava/lang/String;

    return-object v0
.end method

.method public b()J
    .locals 2

    iget-object v0, p0, Lcom/huawei/hms/hatool/x;->a:Lcom/huawei/hms/hatool/x$a;

    iget-wide v0, v0, Lcom/huawei/hms/hatool/x$a;->d:J

    return-wide v0
.end method

.method public c()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/huawei/hms/hatool/x;->a:Lcom/huawei/hms/hatool/x$a;

    iget-object v0, v0, Lcom/huawei/hms/hatool/x$a;->b:Ljava/lang/String;

    return-object v0
.end method

.method public d()V
    .locals 8

    invoke-virtual {p0}, Lcom/huawei/hms/hatool/x;->b()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    const/16 v3, 0x10

    if-nez v2, :cond_1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-virtual {p0}, Lcom/huawei/hms/hatool/x;->e()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    const-string v0, "hmsSdk"

    const-string v1, "get rsa pubkey config error"

    invoke-static {v0, v1}, Lcom/huawei/hms/hatool/y;->f(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-static {v3}, Lcom/huawei/secure/android/common/encrypt/utils/EncryptUtil;->generateSecureRandomStr(I)Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/huawei/hms/hatool/e;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/huawei/hms/hatool/x;->a:Lcom/huawei/hms/hatool/x$a;

    invoke-virtual {v5, v2}, Lcom/huawei/hms/hatool/x$a;->b(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/huawei/hms/hatool/x;->a:Lcom/huawei/hms/hatool/x$a;

    invoke-virtual {v2, v0, v1}, Lcom/huawei/hms/hatool/x$a;->a(J)V

    iget-object v0, p0, Lcom/huawei/hms/hatool/x;->a:Lcom/huawei/hms/hatool/x$a;

    invoke-virtual {v0, v3}, Lcom/huawei/hms/hatool/x$a;->c(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/huawei/hms/hatool/x;->a:Lcom/huawei/hms/hatool/x$a;

    invoke-virtual {v0, v4}, Lcom/huawei/hms/hatool/x$a;->a(Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    sub-long v0, v4, v0

    const-wide/32 v6, 0x2932e00

    cmp-long v0, v0, v6

    if-lez v0, :cond_2

    iget-object v0, p0, Lcom/huawei/hms/hatool/x;->a:Lcom/huawei/hms/hatool/x$a;

    iget-object v0, v0, Lcom/huawei/hms/hatool/x$a;->a:Ljava/lang/String;

    invoke-static {v3}, Lcom/huawei/secure/android/common/encrypt/utils/EncryptUtil;->generateSecureRandomStr(I)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/huawei/hms/hatool/e;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iget-object v2, p0, Lcom/huawei/hms/hatool/x;->a:Lcom/huawei/hms/hatool/x$a;

    invoke-virtual {v2, v4, v5}, Lcom/huawei/hms/hatool/x$a;->a(J)V

    iget-object v2, p0, Lcom/huawei/hms/hatool/x;->a:Lcom/huawei/hms/hatool/x$a;

    invoke-virtual {v2, v1}, Lcom/huawei/hms/hatool/x$a;->c(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/huawei/hms/hatool/x;->a:Lcom/huawei/hms/hatool/x$a;

    invoke-virtual {v1, v0}, Lcom/huawei/hms/hatool/x$a;->a(Ljava/lang/String;)V

    :cond_2
    :goto_0
    return-void
.end method

.method public final e()Ljava/lang/String;
    .locals 5

    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/huawei/hms/hatool/b;->f()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v1

    const-string v2, "hianalytics_njjn"

    invoke-virtual {v1, v2}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v1
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    invoke-static {v1}, Lcom/huawei/hms/hatool/r0;->a(Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object v0
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    invoke-static {v1}, Lcom/huawei/hms/hatool/r0;->a(Ljava/io/Closeable;)V

    return-object v0

    :catchall_0
    move-exception v1

    move-object v4, v1

    move-object v1, v0

    move-object v0, v4

    goto :goto_0

    :catch_0
    move-object v1, v0

    :catch_1
    :try_start_2
    const-string v2, "hmsSdk"

    const-string v3, "read pubKey error,the file is corrupted"

    invoke-static {v2, v3}, Lcom/huawei/hms/hatool/y;->f(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    invoke-static {v1}, Lcom/huawei/hms/hatool/r0;->a(Ljava/io/Closeable;)V

    return-object v0

    :catchall_1
    move-exception v0

    :goto_0
    invoke-static {v1}, Lcom/huawei/hms/hatool/r0;->a(Ljava/io/Closeable;)V

    throw v0
.end method
