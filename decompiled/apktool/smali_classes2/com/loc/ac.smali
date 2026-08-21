.class public Lcom/loc/ac;
.super Ljava/lang/Object;
.source "AAIDManager.java"


# static fields
.field private static a:Lcom/loc/ac;

.field private static b:Z

.field private static c:Z


# instance fields
.field private d:Landroid/content/Context;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/loc/ac;
    .locals 2

    sget-object v0, Lcom/loc/ac;->a:Lcom/loc/ac;

    if-nez v0, :cond_1

    const-class v0, Lcom/loc/ac;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/loc/ac;->a:Lcom/loc/ac;

    if-nez v1, :cond_0

    new-instance v1, Lcom/loc/ac;

    invoke-direct {v1, p0}, Lcom/loc/ac;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/loc/ac;->a:Lcom/loc/ac;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_1
    :goto_0
    sget-object p0, Lcom/loc/ac;->a:Lcom/loc/ac;

    return-object p0
.end method

.method static synthetic a(Lcom/loc/ac;)V
    .locals 0

    invoke-direct {p0}, Lcom/loc/ac;->b()V

    return-void
.end method

.method private b()V
    .locals 7

    const-string v0, ""

    const/4 v1, 0x0

    :try_start_0
    sget-boolean v2, Lcom/loc/ac;->b:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v2, :cond_0

    sput-boolean v1, Lcom/loc/ac;->b:Z

    return-void

    :cond_0
    const/4 v2, 0x1

    :try_start_1
    sput-boolean v2, Lcom/loc/ac;->b:Z

    new-instance v2, Lcom/loc/aa;

    iget-object v3, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    invoke-direct {v2, v3}, Lcom/loc/aa;-><init>(Landroid/content/Context;)V

    new-instance v3, Lcom/loc/bo;

    invoke-direct {v3}, Lcom/loc/bo;-><init>()V

    invoke-static {v2}, Lcom/loc/bo;->a(Lcom/loc/bt;)Lcom/loc/bu;

    move-result-object v3

    if-eqz v3, :cond_3

    iget-object v3, v3, Lcom/loc/bu;->a:[B

    const-string v4, "YWDR1a2R2WEd0M3RXdHRocg=="

    invoke-static {v4}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->getBytes()[B

    move-result-object v4

    invoke-static {v3, v4}, Lcom/loc/ab;->a([B[B)[B

    move-result-object v3

    invoke-static {v3}, Lcom/loc/x;->a([B)Ljava/lang/String;

    move-result-object v3

    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4, v3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v3, "suc"

    invoke-virtual {v4, v3}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_3

    iget-object v3, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    iget-object v5, v2, Lcom/loc/aa;->a:Ljava/lang/String;

    invoke-static {v3, v5}, Lcom/loc/y;->f(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v3, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    iget-object v5, v2, Lcom/loc/aa;->b:Ljava/lang/String;

    invoke-static {v3, v5}, Lcom/loc/y;->g(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v3, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    iget-object v5, v2, Lcom/loc/aa;->c:Ljava/lang/String;

    invoke-static {v3, v5}, Lcom/loc/y;->h(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v3, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    iget-object v5, v2, Lcom/loc/aa;->d:Ljava/lang/String;

    invoke-static {v3, v5}, Lcom/loc/y;->i(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v3, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    iget-object v5, v2, Lcom/loc/aa;->e:Ljava/lang/String;

    invoke-static {v3, v5}, Lcom/loc/y;->j(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v3, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    iget-object v5, v2, Lcom/loc/aa;->f:Ljava/lang/String;

    invoke-static {v3, v5}, Lcom/loc/y;->k(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v3, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    iget-object v5, v2, Lcom/loc/aa;->g:Ljava/lang/String;

    invoke-static {v3, v5}, Lcom/loc/y;->l(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v3, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    iget-object v5, v2, Lcom/loc/aa;->i:Ljava/lang/String;

    invoke-static {v3, v5}, Lcom/loc/y;->b(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v3, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    iget-object v2, v2, Lcom/loc/aa;->h:Ljava/lang/String;

    invoke-static {v3, v2}, Lcom/loc/y;->m(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v2, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    invoke-static {v2, v5, v6}, Lcom/loc/y;->a(Landroid/content/Context;J)V

    const-string v2, "aaid"

    invoke-virtual {v4, v2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "resetToken"

    invoke-virtual {v4, v3, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v5, "uabc"

    invoke-virtual {v4, v5, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    iget-object v4, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    invoke-static {v4, v2}, Lcom/loc/y;->c(Landroid/content/Context;Ljava/lang/String;)V

    :cond_1
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    iget-object v2, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    invoke-static {v2, v3}, Lcom/loc/y;->e(Landroid/content/Context;Ljava/lang/String;)V

    :cond_2
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    iget-object v2, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    invoke-static {v2, v0}, Lcom/loc/y;->d(Landroid/content/Context;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_3
    sput-boolean v1, Lcom/loc/ac;->b:Z

    return-void

    :catchall_0
    sput-boolean v1, Lcom/loc/ac;->b:Z

    return-void
.end method

.method static synthetic b(Lcom/loc/ac;)V
    .locals 0

    invoke-direct {p0}, Lcom/loc/ac;->c()V

    return-void
.end method

.method private c()V
    .locals 7

    const-string v0, ""

    const/4 v1, 0x0

    :try_start_0
    sget-boolean v2, Lcom/loc/ac;->c:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v2, :cond_0

    sput-boolean v1, Lcom/loc/ac;->c:Z

    return-void

    :cond_0
    const/4 v2, 0x1

    :try_start_1
    sput-boolean v2, Lcom/loc/ac;->c:Z

    new-instance v2, Lcom/loc/ad;

    iget-object v3, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    invoke-direct {v2, v3}, Lcom/loc/ad;-><init>(Landroid/content/Context;)V

    new-instance v3, Lcom/loc/bo;

    invoke-direct {v3}, Lcom/loc/bo;-><init>()V

    invoke-static {v2}, Lcom/loc/bo;->a(Lcom/loc/bt;)Lcom/loc/bu;

    move-result-object v3

    if-eqz v3, :cond_3

    iget-object v3, v3, Lcom/loc/bu;->a:[B

    const-string v4, "YWDR1a2R2WEd0M3RXdHRocg=="

    invoke-static {v4}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->getBytes()[B

    move-result-object v4

    invoke-static {v3, v4}, Lcom/loc/ab;->a([B[B)[B

    move-result-object v3

    invoke-static {v3}, Lcom/loc/x;->a([B)Ljava/lang/String;

    move-result-object v3

    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4, v3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v3, "suc"

    invoke-virtual {v4, v3}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_3

    iget-object v3, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    iget-object v5, v2, Lcom/loc/ad;->a:Ljava/lang/String;

    invoke-static {v3, v5}, Lcom/loc/y;->f(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v3, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    iget-object v5, v2, Lcom/loc/ad;->b:Ljava/lang/String;

    invoke-static {v3, v5}, Lcom/loc/y;->g(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v3, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    iget-object v5, v2, Lcom/loc/ad;->c:Ljava/lang/String;

    invoke-static {v3, v5}, Lcom/loc/y;->h(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v3, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    iget-object v5, v2, Lcom/loc/ad;->d:Ljava/lang/String;

    invoke-static {v3, v5}, Lcom/loc/y;->i(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v3, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    iget-object v5, v2, Lcom/loc/ad;->e:Ljava/lang/String;

    invoke-static {v3, v5}, Lcom/loc/y;->j(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v3, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    iget-object v5, v2, Lcom/loc/ad;->f:Ljava/lang/String;

    invoke-static {v3, v5}, Lcom/loc/y;->k(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v3, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    iget-object v5, v2, Lcom/loc/ad;->g:Ljava/lang/String;

    invoke-static {v3, v5}, Lcom/loc/y;->l(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v3, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    iget-object v5, v2, Lcom/loc/ad;->i:Ljava/lang/String;

    invoke-static {v3, v5}, Lcom/loc/y;->b(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v3, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    iget-object v2, v2, Lcom/loc/ad;->h:Ljava/lang/String;

    invoke-static {v3, v2}, Lcom/loc/y;->m(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v2, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    invoke-static {v2, v5, v6}, Lcom/loc/y;->a(Landroid/content/Context;J)V

    const-string v2, "aaid"

    invoke-virtual {v4, v2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "resetToken"

    invoke-virtual {v4, v3, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v5, "uabc"

    invoke-virtual {v4, v5, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    iget-object v4, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    invoke-static {v4, v2}, Lcom/loc/y;->c(Landroid/content/Context;Ljava/lang/String;)V

    :cond_1
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    iget-object v2, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    invoke-static {v2, v3}, Lcom/loc/y;->e(Landroid/content/Context;Ljava/lang/String;)V

    :cond_2
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    iget-object v2, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    invoke-static {v2, v0}, Lcom/loc/y;->d(Landroid/content/Context;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_3
    sput-boolean v1, Lcom/loc/ac;->c:Z

    return-void

    :catchall_0
    sput-boolean v1, Lcom/loc/ac;->c:Z

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 6

    const-string v0, ""

    :try_start_0
    sget-boolean v1, Lcom/loc/z;->d:Z

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    invoke-static {v1}, Lcom/loc/y;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/loc/ac;->d:Landroid/content/Context;

    invoke-static {v1}, Lcom/loc/y;->d(Landroid/content/Context;)J

    move-result-wide v1

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v3

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_0

    invoke-static {}, Lcom/loc/cr;->a()Lcom/loc/cr;

    move-result-object v1

    new-instance v2, Lcom/loc/ac$1;

    invoke-direct {v2, p0}, Lcom/loc/ac$1;-><init>(Lcom/loc/ac;)V

    :goto_0
    invoke-virtual {v1, v2}, Lcom/loc/cr;->b(Lcom/loc/cs;)V

    goto :goto_1

    :cond_0
    sub-long/2addr v3, v1

    sget-wide v1, Lcom/loc/z;->b:J

    cmp-long v5, v3, v1

    if-lez v5, :cond_1

    invoke-static {}, Lcom/loc/cr;->a()Lcom/loc/cr;

    move-result-object v1

    new-instance v2, Lcom/loc/ac$2;

    invoke-direct {v2, p0}, Lcom/loc/ac$2;-><init>(Lcom/loc/ac;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    :cond_1
    :goto_1
    return-object v0
.end method
