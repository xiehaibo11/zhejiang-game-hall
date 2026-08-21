.class public Lcom/tkay/core/common/d/c;
.super Lcom/tkay/core/common/d/a;


# static fields
.field private static volatile c:Lcom/tkay/core/common/d/c;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 16
    invoke-direct {p0, p1}, Lcom/tkay/core/common/d/a;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x1

    .line 17
    iput p1, p0, Lcom/tkay/core/common/d/c;->b:I

    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/tkay/core/common/d/c;
    .locals 2

    .line 21
    sget-object v0, Lcom/tkay/core/common/d/c;->c:Lcom/tkay/core/common/d/c;

    if-nez v0, :cond_1

    .line 22
    const-class v0, Lcom/tkay/core/common/d/c;

    monitor-enter v0

    .line 23
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/d/c;->c:Lcom/tkay/core/common/d/c;

    if-nez v1, :cond_0

    .line 24
    new-instance v1, Lcom/tkay/core/common/d/c;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/d/c;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/tkay/core/common/d/c;->c:Lcom/tkay/core/common/d/c;

    .line 25
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 27
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/core/common/d/c;->c:Lcom/tkay/core/common/d/c;

    return-object p0
.end method
