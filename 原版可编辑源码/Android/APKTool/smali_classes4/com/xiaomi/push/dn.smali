.class public Lcom/xiaomi/push/dn;
.super Ljava/lang/Object;


# static fields
.field private static volatile a:Lcom/xiaomi/push/dn;


# instance fields
.field private a:Lcom/xiaomi/push/dm;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/xiaomi/push/dn;
    .locals 2

    sget-object v0, Lcom/xiaomi/push/dn;->a:Lcom/xiaomi/push/dn;

    if-nez v0, :cond_1

    const-class v0, Lcom/xiaomi/push/dn;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/xiaomi/push/dn;->a:Lcom/xiaomi/push/dn;

    if-nez v1, :cond_0

    new-instance v1, Lcom/xiaomi/push/dn;

    invoke-direct {v1}, Lcom/xiaomi/push/dn;-><init>()V

    sput-object v1, Lcom/xiaomi/push/dn;->a:Lcom/xiaomi/push/dn;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_1
    :goto_0
    sget-object v0, Lcom/xiaomi/push/dn;->a:Lcom/xiaomi/push/dn;

    return-object v0
.end method


# virtual methods
.method public a()Lcom/xiaomi/push/dm;
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/dn;->a:Lcom/xiaomi/push/dm;

    return-object v0
.end method

.method public a(Lcom/xiaomi/push/dm;)V
    .locals 0

    iput-object p1, p0, Lcom/xiaomi/push/dn;->a:Lcom/xiaomi/push/dm;

    return-void
.end method
