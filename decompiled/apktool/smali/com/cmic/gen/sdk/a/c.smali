.class public Lcom/cmic/gen/sdk/a/c;
.super Ljava/lang/Object;
.source "UmcConfigManager.java"

# interfaces
.implements Lcom/cmic/gen/sdk/a/b$a;


# static fields
.field private static a:Lcom/cmic/gen/sdk/a/c;


# instance fields
.field private b:Lcom/cmic/gen/sdk/a/a;

.field private c:Lcom/cmic/gen/sdk/a/a;

.field private d:Lcom/cmic/gen/sdk/a/b;

.field private e:Landroid/content/Context;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 29
    iput-object p1, p0, Lcom/cmic/gen/sdk/a/c;->e:Landroid/content/Context;

    .line 30
    invoke-direct {p0}, Lcom/cmic/gen/sdk/a/c;->b()V

    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/cmic/gen/sdk/a/c;
    .locals 2

    .line 52
    sget-object v0, Lcom/cmic/gen/sdk/a/c;->a:Lcom/cmic/gen/sdk/a/c;

    if-nez v0, :cond_1

    .line 53
    const-class v0, Lcom/cmic/gen/sdk/a/c;

    monitor-enter v0

    .line 54
    :try_start_0
    sget-object v1, Lcom/cmic/gen/sdk/a/c;->a:Lcom/cmic/gen/sdk/a/c;

    if-nez v1, :cond_0

    .line 55
    new-instance v1, Lcom/cmic/gen/sdk/a/c;

    invoke-direct {v1, p0}, Lcom/cmic/gen/sdk/a/c;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/cmic/gen/sdk/a/c;->a:Lcom/cmic/gen/sdk/a/c;

    .line 57
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    .line 59
    :cond_1
    :goto_0
    sget-object p0, Lcom/cmic/gen/sdk/a/c;->a:Lcom/cmic/gen/sdk/a/c;

    return-object p0
.end method

.method private b()V
    .locals 2

    const-string v0, "sdk_config_version"

    const-string v1, ""

    .line 34
    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/k;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 36
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "quick_login_android_5.9.6"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v0, 0x0

    .line 37
    invoke-static {v0}, Lcom/cmic/gen/sdk/a/b;->a(Z)Lcom/cmic/gen/sdk/a/b;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/a/c;->d:Lcom/cmic/gen/sdk/a/b;

    .line 38
    invoke-virtual {v0}, Lcom/cmic/gen/sdk/a/b;->b()Lcom/cmic/gen/sdk/a/a;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/a/c;->b:Lcom/cmic/gen/sdk/a/a;

    goto :goto_0

    :cond_0
    const/4 v1, 0x1

    .line 40
    invoke-static {v1}, Lcom/cmic/gen/sdk/a/b;->a(Z)Lcom/cmic/gen/sdk/a/b;

    move-result-object v1

    iput-object v1, p0, Lcom/cmic/gen/sdk/a/c;->d:Lcom/cmic/gen/sdk/a/b;

    .line 41
    invoke-virtual {v1}, Lcom/cmic/gen/sdk/a/b;->a()Lcom/cmic/gen/sdk/a/a;

    move-result-object v1

    iput-object v1, p0, Lcom/cmic/gen/sdk/a/c;->b:Lcom/cmic/gen/sdk/a/a;

    .line 42
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 43
    invoke-direct {p0}, Lcom/cmic/gen/sdk/a/c;->c()V

    .line 47
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/a/c;->d:Lcom/cmic/gen/sdk/a/b;

    invoke-virtual {v0, p0}, Lcom/cmic/gen/sdk/a/b;->a(Lcom/cmic/gen/sdk/a/b$a;)V

    .line 48
    iget-object v0, p0, Lcom/cmic/gen/sdk/a/c;->d:Lcom/cmic/gen/sdk/a/b;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/a/b;->a()Lcom/cmic/gen/sdk/a/a;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/a/c;->c:Lcom/cmic/gen/sdk/a/a;

    return-void
.end method

.method private c()V
    .locals 2

    const-string v0, "UmcConfigManager"

    const-string v1, "delete localConfig"

    .line 81
    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 82
    iget-object v0, p0, Lcom/cmic/gen/sdk/a/c;->d:Lcom/cmic/gen/sdk/a/b;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/a/b;->c()V

    return-void
.end method


# virtual methods
.method public a()Lcom/cmic/gen/sdk/a/a;
    .locals 1

    .line 64
    :try_start_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/a/c;->b:Lcom/cmic/gen/sdk/a/a;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/a/a;->m()Lcom/cmic/gen/sdk/a/a;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 66
    :catch_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/a/c;->c:Lcom/cmic/gen/sdk/a/a;

    return-object v0
.end method

.method public a(Lcom/cmic/gen/sdk/a/a;)V
    .locals 0

    .line 72
    iput-object p1, p0, Lcom/cmic/gen/sdk/a/c;->b:Lcom/cmic/gen/sdk/a/a;

    return-void
.end method

.method public a(Lcom/cmic/gen/sdk/a;)V
    .locals 1

    .line 76
    iget-object v0, p0, Lcom/cmic/gen/sdk/a/c;->d:Lcom/cmic/gen/sdk/a/b;

    invoke-virtual {v0, p1}, Lcom/cmic/gen/sdk/a/b;->a(Lcom/cmic/gen/sdk/a;)V

    return-void
.end method
