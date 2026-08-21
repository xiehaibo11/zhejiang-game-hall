.class public Lcom/bykv/vk/openvk/TTAppContextHolder;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/TTAppContextHolder$rg;
    }
.end annotation


# static fields
.field private static volatile rg:Landroid/content/Context;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getContext()Landroid/content/Context;
    .locals 1

    .line 22
    sget-object v0, Lcom/bykv/vk/openvk/TTAppContextHolder;->rg:Landroid/content/Context;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    .line 23
    invoke-static {v0}, Lcom/bykv/vk/openvk/TTAppContextHolder;->setContext(Landroid/content/Context;)V

    .line 25
    :cond_0
    sget-object v0, Lcom/bykv/vk/openvk/TTAppContextHolder;->rg:Landroid/content/Context;

    return-object v0
.end method

.method public static declared-synchronized setContext(Landroid/content/Context;)V
    .locals 2

    const-class v0, Lcom/bykv/vk/openvk/TTAppContextHolder;

    monitor-enter v0

    .line 29
    :try_start_0
    sget-object v1, Lcom/bykv/vk/openvk/TTAppContextHolder;->rg:Landroid/content/Context;

    if-nez v1, :cond_1

    if-eqz p0, :cond_0

    .line 31
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    sput-object p0, Lcom/bykv/vk/openvk/TTAppContextHolder;->rg:Landroid/content/Context;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 32
    monitor-exit v0

    return-void

    .line 35
    :cond_0
    :try_start_1
    invoke-static {}, Lcom/bykv/vk/openvk/TTAppContextHolder$rg;->rg()Landroid/app/Application;

    move-result-object p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz p0, :cond_1

    .line 37
    :try_start_2
    invoke-static {}, Lcom/bykv/vk/openvk/TTAppContextHolder$rg;->rg()Landroid/app/Application;

    move-result-object p0

    sput-object p0, Lcom/bykv/vk/openvk/TTAppContextHolder;->rg:Landroid/content/Context;

    .line 38
    sget-object p0, Lcom/bykv/vk/openvk/TTAppContextHolder;->rg:Landroid/content/Context;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz p0, :cond_1

    .line 39
    monitor-exit v0

    return-void

    .line 45
    :catchall_0
    :cond_1
    monitor-exit v0

    return-void

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0
.end method
