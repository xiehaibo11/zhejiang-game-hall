.class public Lcom/igexin/push/config/h;
.super Ljava/lang/Object;


# static fields
.field private static a:Lcom/igexin/push/config/h;


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static declared-synchronized a()Lcom/igexin/push/config/h;
    .locals 2

    const-class v0, Lcom/igexin/push/config/h;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/igexin/push/config/h;->a:Lcom/igexin/push/config/h;

    if-nez v1, :cond_0

    new-instance v1, Lcom/igexin/push/config/h;

    invoke-direct {v1}, Lcom/igexin/push/config/h;-><init>()V

    sput-object v1, Lcom/igexin/push/config/h;->a:Lcom/igexin/push/config/h;

    :cond_0
    sget-object v1, Lcom/igexin/push/config/h;->a:Lcom/igexin/push/config/h;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method


# virtual methods
.method public b()Z
    .locals 1

    invoke-static {}, Lcom/igexin/push/config/m;->a()V

    invoke-static {}, Lcom/igexin/push/config/k;->a()V

    const/4 v0, 0x1

    return v0
.end method
