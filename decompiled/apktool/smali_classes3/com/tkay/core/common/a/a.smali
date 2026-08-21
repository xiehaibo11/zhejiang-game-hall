.class public Lcom/tkay/core/common/a/a;
.super Ljava/lang/Object;


# static fields
.field private static volatile a:Lcom/tkay/core/common/a/a;


# instance fields
.field private b:Lcom/tkay/core/common/c/k;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 24
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 25
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/k;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/k;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/a/a;->b:Lcom/tkay/core/common/c/k;

    :cond_0
    return-void
.end method

.method public static a()Lcom/tkay/core/common/a/a;
    .locals 2

    .line 30
    sget-object v0, Lcom/tkay/core/common/a/a;->a:Lcom/tkay/core/common/a/a;

    if-nez v0, :cond_1

    .line 31
    const-class v0, Lcom/tkay/core/common/a/a;

    monitor-enter v0

    .line 32
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/a/a;->a:Lcom/tkay/core/common/a/a;

    if-nez v1, :cond_0

    .line 33
    new-instance v1, Lcom/tkay/core/common/a/a;

    invoke-direct {v1}, Lcom/tkay/core/common/a/a;-><init>()V

    sput-object v1, Lcom/tkay/core/common/a/a;->a:Lcom/tkay/core/common/a/a;

    .line 34
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 36
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/core/common/a/a;->a:Lcom/tkay/core/common/a/a;

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/core/common/a/a;)Lcom/tkay/core/common/c/k;
    .locals 0

    .line 19
    iget-object p0, p0, Lcom/tkay/core/common/a/a;->b:Lcom/tkay/core/common/c/k;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/core/common/a/a;Lcom/tkay/core/common/c/k;)Lcom/tkay/core/common/c/k;
    .locals 0

    .line 19
    iput-object p1, p0, Lcom/tkay/core/common/a/a;->b:Lcom/tkay/core/common/c/k;

    return-object p1
.end method

.method public static c(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    .line 90
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_win_notice"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "tkayadx_file"

    const/4 v1, 0x1

    invoke-static {p0, v0, p1, v1}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public static d(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 2

    .line 94
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_win_notice"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x0

    const-string v1, "tkayadx_file"

    invoke-static {p0, v1, p1, v0}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;I)I

    move-result p0

    const/4 p1, 0x1

    if-ne p0, p1, :cond_0

    return p1

    :cond_0
    return v0
.end method


# virtual methods
.method public final a(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 66
    iget-object v0, p0, Lcom/tkay/core/common/a/a;->b:Lcom/tkay/core/common/c/k;

    if-nez v0, :cond_0

    .line 67
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/c/k;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/k;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/a/a;->b:Lcom/tkay/core/common/c/k;

    .line 69
    :cond_0
    iget-object p1, p0, Lcom/tkay/core/common/a/a;->b:Lcom/tkay/core/common/c/k;

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/c/k;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public final a(Landroid/content/Context;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 40
    iget-object v0, p0, Lcom/tkay/core/common/a/a;->b:Lcom/tkay/core/common/c/k;

    if-nez v0, :cond_0

    .line 41
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/c/k;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/k;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/a/a;->b:Lcom/tkay/core/common/c/k;

    .line 57
    :cond_0
    new-instance p1, Lcom/tkay/core/common/a/h;

    invoke-direct {p1}, Lcom/tkay/core/common/a/h;-><init>()V

    .line 58
    invoke-virtual {p1, p4}, Lcom/tkay/core/common/a/h;->a(Ljava/lang/String;)V

    .line 59
    invoke-virtual {p1, p3}, Lcom/tkay/core/common/a/h;->b(Ljava/lang/String;)V

    .line 60
    invoke-virtual {p1, p2}, Lcom/tkay/core/common/a/h;->a(I)V

    .line 61
    invoke-virtual {p1, p5}, Lcom/tkay/core/common/a/h;->c(Ljava/lang/String;)V

    .line 62
    iget-object p2, p0, Lcom/tkay/core/common/a/a;->b:Lcom/tkay/core/common/c/k;

    invoke-virtual {p2, p1}, Lcom/tkay/core/common/c/k;->a(Lcom/tkay/core/common/a/h;)J

    return-void
.end method

.method public final b(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    .line 75
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/a/a$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/core/common/a/a$1;-><init>(Lcom/tkay/core/common/a/a;Landroid/content/Context;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    .line 85
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "_win_notice"

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v0, "tkayadx_file"

    invoke-static {p1, v0, p2}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
