.class public Lcom/kuaishou/weapon/p0/do;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kuaishou/weapon/p0/do$d;,
        Lcom/kuaishou/weapon/p0/do$c;,
        Lcom/kuaishou/weapon/p0/do$b;,
        Lcom/kuaishou/weapon/p0/do$a;,
        Lcom/kuaishou/weapon/p0/do$e;
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static declared-synchronized a(Ljava/lang/ClassLoader;Ljava/io/File;)V
    .locals 3

    const-class v0, Lcom/kuaishou/weapon/p0/do;

    monitor-enter v0

    if-eqz p1, :cond_7

    :try_start_0
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_1

    :cond_0
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x19

    if-ne v1, v2, :cond_1

    sget v1, Landroid/os/Build$VERSION;->PREVIEW_SDK_INT:I

    if-nez v1, :cond_2

    :cond_1
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_5

    if-le v1, v2, :cond_3

    :cond_2
    :try_start_1
    invoke-static {p0, p1}, Lcom/kuaishou/weapon/p0/do$d;->a(Ljava/lang/ClassLoader;Ljava/io/File;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    :try_start_2
    invoke-static {p0, p1}, Lcom/kuaishou/weapon/p0/do$b;->a(Ljava/lang/ClassLoader;Ljava/io/File;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_5

    monitor-exit v0

    return-void

    :cond_3
    :try_start_3
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_5

    const/16 v2, 0x18

    if-ne v1, v2, :cond_4

    :try_start_4
    invoke-static {p0, p1}, Lcom/kuaishou/weapon/p0/do$c;->a(Ljava/lang/ClassLoader;Ljava/io/File;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    monitor-exit v0

    return-void

    :catchall_1
    move-exception v1

    :try_start_5
    invoke-static {p0, p1}, Lcom/kuaishou/weapon/p0/do$a;->a(Ljava/lang/ClassLoader;Ljava/io/File;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    goto :goto_0

    :catchall_2
    :try_start_6
    throw v1

    :cond_4
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_5

    const/16 v2, 0x17

    if-lt v1, v2, :cond_5

    :try_start_7
    invoke-static {p0, p1}, Lcom/kuaishou/weapon/p0/do$b;->a(Ljava/lang/ClassLoader;Ljava/io/File;)V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_3

    monitor-exit v0

    return-void

    :catchall_3
    move-exception v1

    :try_start_8
    invoke-static {p0, p1}, Lcom/kuaishou/weapon/p0/do$a;->a(Ljava/lang/ClassLoader;Ljava/io/File;)V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_4

    goto :goto_0

    :catchall_4
    :try_start_9
    throw v1

    :cond_5
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0xe

    if-lt v1, v2, :cond_6

    invoke-static {p0, p1}, Lcom/kuaishou/weapon/p0/do$a;->a(Ljava/lang/ClassLoader;Ljava/io/File;)V
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_5

    monitor-exit v0

    return-void

    :cond_6
    :try_start_a
    invoke-static {p0, p1}, Lcom/kuaishou/weapon/p0/do$e;->a(Ljava/lang/ClassLoader;Ljava/io/File;)V
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_5

    :goto_0
    monitor-exit v0

    return-void

    :catchall_5
    move-exception p0

    monitor-exit v0

    throw p0

    :cond_7
    :goto_1
    monitor-exit v0

    return-void
.end method
