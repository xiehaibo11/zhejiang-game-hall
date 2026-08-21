.class public Lcom/vivo/push/c/d;
.super Ljava/lang/Object;


# static fields
.field private static volatile d:Lcom/vivo/push/c/d;


# instance fields
.field private a:Lcom/vivo/push/c/b;

.field private b:Lcom/vivo/push/c/c;

.field private c:Landroid/content/Context;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iget-object v0, p0, Lcom/vivo/push/c/d;->a:Lcom/vivo/push/c/b;

    if-nez v0, :cond_0

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/vivo/push/util/ContextDelegate;->getContext(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/vivo/push/c/d;->c:Landroid/content/Context;

    new-instance p1, Lcom/vivo/push/c/e;

    iget-object v0, p0, Lcom/vivo/push/c/d;->c:Landroid/content/Context;

    invoke-direct {p1, v0}, Lcom/vivo/push/c/e;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/vivo/push/c/d;->a:Lcom/vivo/push/c/b;

    :cond_0
    iget-object p1, p0, Lcom/vivo/push/c/d;->b:Lcom/vivo/push/c/c;

    if-nez p1, :cond_1

    new-instance p1, Lcom/vivo/push/c/a;

    invoke-direct {p1}, Lcom/vivo/push/c/a;-><init>()V

    iput-object p1, p0, Lcom/vivo/push/c/d;->b:Lcom/vivo/push/c/c;

    :cond_1
    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/vivo/push/c/d;
    .locals 2

    sget-object v0, Lcom/vivo/push/c/d;->d:Lcom/vivo/push/c/d;

    if-nez v0, :cond_1

    const-class v0, Lcom/vivo/push/c/d;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/vivo/push/c/d;->d:Lcom/vivo/push/c/d;

    if-nez v1, :cond_0

    if-eqz p0, :cond_0

    new-instance v1, Lcom/vivo/push/c/d;

    invoke-direct {v1, p0}, Lcom/vivo/push/c/d;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/vivo/push/c/d;->d:Lcom/vivo/push/c/d;

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
    sget-object p0, Lcom/vivo/push/c/d;->d:Lcom/vivo/push/c/d;

    return-object p0
.end method


# virtual methods
.method public final a()Lcom/vivo/push/c/b;
    .locals 1

    iget-object v0, p0, Lcom/vivo/push/c/d;->a:Lcom/vivo/push/c/b;

    return-object v0
.end method
