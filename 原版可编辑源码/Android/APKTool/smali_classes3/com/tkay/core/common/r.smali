.class public Lcom/tkay/core/common/r;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String;

.field private static volatile b:Lcom/tkay/core/common/r;


# instance fields
.field private c:Landroid/content/Context;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 31
    const-class v0, Lcom/tkay/core/common/r;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/common/r;->a:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 36
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 37
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/r;->c:Landroid/content/Context;

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/r;)Landroid/content/Context;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/core/common/r;->c:Landroid/content/Context;

    return-object p0
.end method

.method public static a(Landroid/content/Context;)Lcom/tkay/core/common/r;
    .locals 2

    .line 41
    sget-object v0, Lcom/tkay/core/common/r;->b:Lcom/tkay/core/common/r;

    if-nez v0, :cond_1

    .line 42
    const-class v0, Lcom/tkay/core/common/r;

    monitor-enter v0

    .line 43
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/r;->b:Lcom/tkay/core/common/r;

    if-nez v1, :cond_0

    .line 44
    new-instance v1, Lcom/tkay/core/common/r;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/r;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/tkay/core/common/r;->b:Lcom/tkay/core/common/r;

    .line 46
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 48
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/core/common/r;->b:Lcom/tkay/core/common/r;

    return-object p0
.end method

.method private a(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/d;)V
    .locals 1

    .line 151
    iget-object v0, p0, Lcom/tkay/core/common/r;->c:Landroid/content/Context;

    if-nez v0, :cond_0

    return-void

    .line 156
    :cond_0
    :try_start_0
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0, p2}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string p2, "common"

    .line 157
    invoke-virtual {v0, p2, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p2, "data"

    .line 158
    invoke-virtual {v0, p2, p4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p2, "adsourceId"

    .line 159
    invoke-virtual {v0, p2, p5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p2, "networkType"

    .line 160
    invoke-virtual {p6}, Lcom/tkay/core/common/f/d;->H()I

    move-result p3

    invoke-static {p3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p2, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p2, "format"

    .line 161
    invoke-virtual {p6}, Lcom/tkay/core/common/f/d;->Y()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p2, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p2, "showid"

    .line 162
    invoke-virtual {p6}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p2, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p2, "tktype"

    .line 163
    invoke-virtual {v0, p2, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 165
    iget-object p1, p0, Lcom/tkay/core/common/r;->c:Landroid/content/Context;

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 166
    iget-object p1, p0, Lcom/tkay/core/common/r;->c:Landroid/content/Context;

    invoke-static {p1}, Lcom/tkay/core/common/b/j;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/j;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/b/j;->a(Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/r;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/d;)V
    .locals 1

    .line 1151
    iget-object v0, p0, Lcom/tkay/core/common/r;->c:Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 1156
    :try_start_0
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0, p2}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string p2, "common"

    .line 1157
    invoke-virtual {v0, p2, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p2, "data"

    .line 1158
    invoke-virtual {v0, p2, p4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p2, "adsourceId"

    .line 1159
    invoke-virtual {v0, p2, p5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p2, "networkType"

    .line 1160
    invoke-virtual {p6}, Lcom/tkay/core/common/f/d;->H()I

    move-result p3

    invoke-static {p3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p2, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p2, "format"

    .line 1161
    invoke-virtual {p6}, Lcom/tkay/core/common/f/d;->Y()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p2, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p2, "showid"

    .line 1162
    invoke-virtual {p6}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p2, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p2, "tktype"

    .line 1163
    invoke-virtual {v0, p2, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 1165
    iget-object p1, p0, Lcom/tkay/core/common/r;->c:Landroid/content/Context;

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 1166
    iget-object p0, p0, Lcom/tkay/core/common/r;->c:Landroid/content/Context;

    invoke-static {p0}, Lcom/tkay/core/common/b/j;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/j;

    move-result-object p0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/b/j;->a(Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method


# virtual methods
.method public final a(ILcom/tkay/core/common/f/e;Lcom/tkay/core/c/a;)V
    .locals 1

    .line 53
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    new-instance v0, Lcom/tkay/core/common/r$1;

    invoke-direct {v0, p0, p2, p1, p3}, Lcom/tkay/core/common/r$1;-><init>(Lcom/tkay/core/common/r;Lcom/tkay/core/common/f/e;ILcom/tkay/core/c/a;)V

    invoke-static {v0}, Lcom/tkay/core/common/b/m;->b(Ljava/lang/Runnable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final a(Lcom/tkay/core/c/a;)V
    .locals 1

    .line 121
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    new-instance v0, Lcom/tkay/core/common/r$2;

    invoke-direct {v0, p0, p1}, Lcom/tkay/core/common/r$2;-><init>(Lcom/tkay/core/common/r;Lcom/tkay/core/c/a;)V

    invoke-static {v0}, Lcom/tkay/core/common/b/m;->d(Ljava/lang/Runnable;)V

    return-void
.end method
