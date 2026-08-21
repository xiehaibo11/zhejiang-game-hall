.class public Lcom/tkay/expressad/out/r;
.super Ljava/lang/Object;


# static fields
.field private static a:Lcom/tkay/expressad/e/b;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/tkay/expressad/e/b;
    .locals 2

    .line 12
    sget-object v0, Lcom/tkay/expressad/out/r;->a:Lcom/tkay/expressad/e/b;

    if-nez v0, :cond_1

    .line 13
    const-class v0, Lcom/tkay/expressad/out/r;

    monitor-enter v0

    .line 14
    :try_start_0
    sget-object v1, Lcom/tkay/expressad/out/r;->a:Lcom/tkay/expressad/e/b;

    if-nez v1, :cond_0

    .line 15
    new-instance v1, Lcom/tkay/expressad/e/b;

    invoke-direct {v1}, Lcom/tkay/expressad/e/b;-><init>()V

    sput-object v1, Lcom/tkay/expressad/out/r;->a:Lcom/tkay/expressad/e/b;

    .line 17
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 19
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/expressad/out/r;->a:Lcom/tkay/expressad/e/b;

    return-object v0
.end method
