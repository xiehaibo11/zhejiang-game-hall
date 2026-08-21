.class public Lcom/tkay/expressad/videocommon/b/l;
.super Ljava/lang/Object;


# static fields
.field private static volatile a:Lcom/tkay/expressad/videocommon/b/l;


# instance fields
.field private final b:Lcom/tkay/core/common/res/a/c;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    invoke-static {}, Lcom/tkay/core/common/res/a/c;->a()Lcom/tkay/core/common/res/a/c;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/l;->b:Lcom/tkay/core/common/res/a/c;

    return-void
.end method

.method public static a()Lcom/tkay/expressad/videocommon/b/l;
    .locals 2

    .line 24
    sget-object v0, Lcom/tkay/expressad/videocommon/b/l;->a:Lcom/tkay/expressad/videocommon/b/l;

    if-nez v0, :cond_1

    .line 25
    const-class v0, Lcom/tkay/expressad/videocommon/b/l;

    monitor-enter v0

    .line 26
    :try_start_0
    sget-object v1, Lcom/tkay/expressad/videocommon/b/l;->a:Lcom/tkay/expressad/videocommon/b/l;

    if-nez v1, :cond_0

    .line 27
    new-instance v1, Lcom/tkay/expressad/videocommon/b/l;

    invoke-direct {v1}, Lcom/tkay/expressad/videocommon/b/l;-><init>()V

    sput-object v1, Lcom/tkay/expressad/videocommon/b/l;->a:Lcom/tkay/expressad/videocommon/b/l;

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

    .line 31
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/expressad/videocommon/b/l;->a:Lcom/tkay/expressad/videocommon/b/l;

    return-object v0
.end method

.method public static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 35
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p0, ""

    return-object p0

    .line 38
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/res/d;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/d;

    move-result-object v0

    const/4 v1, 0x4

    .line 1116
    invoke-static {p0}, Lcom/tkay/core/common/l/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 39
    invoke-virtual {v0, v1, p0}, Lcom/tkay/core/common/res/d;->b(ILjava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static b(Ljava/lang/String;)Lcom/tkay/core/common/a/i;
    .locals 1

    .line 43
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 46
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/a/j;->a()Lcom/tkay/core/common/a/j;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/a/j;->a(Ljava/lang/String;)Lcom/tkay/core/common/a/i;

    move-result-object p0

    return-object p0
.end method
