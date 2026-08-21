.class public Lcom/tkay/core/basead/b;
.super Ljava/lang/Object;


# static fields
.field private static volatile a:Lcom/tkay/core/basead/b;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/tkay/core/basead/b;
    .locals 2

    .line 24
    sget-object v0, Lcom/tkay/core/basead/b;->a:Lcom/tkay/core/basead/b;

    if-nez v0, :cond_1

    .line 25
    const-class v0, Lcom/tkay/core/basead/b;

    monitor-enter v0

    .line 26
    :try_start_0
    sget-object v1, Lcom/tkay/core/basead/b;->a:Lcom/tkay/core/basead/b;

    if-nez v1, :cond_0

    .line 27
    new-instance v1, Lcom/tkay/core/basead/b;

    invoke-direct {v1}, Lcom/tkay/core/basead/b;-><init>()V

    sput-object v1, Lcom/tkay/core/basead/b;->a:Lcom/tkay/core/basead/b;

    .line 28
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 30
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/core/basead/b;->a:Lcom/tkay/core/basead/b;

    return-object v0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const-string v0, "tkay_onlineapi_file"

    const-string v1, ""

    .line 38
    invoke-static {p0, v0, p1, v1}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a(Lcom/tkay/core/common/f/i;)Ljava/lang/String;
    .locals 2

    if-nez p0, :cond_0

    const-string p0, ""

    return-object p0

    .line 55
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/core/common/f/i;->c:Ljava/lang/String;

    iget p0, p0, Lcom/tkay/core/common/f/i;->f:I

    invoke-static {v0, v1, p0}, Lcom/tkay/core/basead/b;->a(Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;
    .locals 1

    .line 59
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "_"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    const-string v0, "tkay_onlineapi_file"

    .line 34
    invoke-static {p0, v0, p1, p2}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static b(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    const-string v0, "tkay_onlineapi_file"

    .line 42
    invoke-static {p0, v0, p1}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
