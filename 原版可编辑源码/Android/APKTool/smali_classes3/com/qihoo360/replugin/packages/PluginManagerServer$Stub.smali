.class Lcom/qihoo360/replugin/packages/PluginManagerServer$Stub;
.super Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;
.source "PluginManagerServer.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/replugin/packages/PluginManagerServer;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "Stub"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/qihoo360/replugin/packages/PluginManagerServer;


# direct methods
.method private constructor <init>(Lcom/qihoo360/replugin/packages/PluginManagerServer;)V
    .locals 0

    .line 654
    iput-object p1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer$Stub;->this$0:Lcom/qihoo360/replugin/packages/PluginManagerServer;

    invoke-direct {p0}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/qihoo360/replugin/packages/PluginManagerServer;Lcom/qihoo360/replugin/packages/PluginManagerServer$1;)V
    .locals 0

    .line 654
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/packages/PluginManagerServer$Stub;-><init>(Lcom/qihoo360/replugin/packages/PluginManagerServer;)V

    return-void
.end method


# virtual methods
.method public addToRunningPlugins(Ljava/lang/String;ILjava/lang/String;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 716
    invoke-static {}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$200()[B

    move-result-object v0

    monitor-enter v0

    .line 717
    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer$Stub;->this$0:Lcom/qihoo360/replugin/packages/PluginManagerServer;

    invoke-static {v1, p1, p2, p3}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$1100(Lcom/qihoo360/replugin/packages/PluginManagerServer;Ljava/lang/String;ILjava/lang/String;)V

    .line 718
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public getRunningPlugins()Lcom/qihoo360/replugin/packages/PluginRunningList;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 695
    invoke-static {}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$200()[B

    move-result-object v0

    monitor-enter v0

    .line 696
    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer$Stub;->this$0:Lcom/qihoo360/replugin/packages/PluginManagerServer;

    invoke-static {v1}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$800(Lcom/qihoo360/replugin/packages/PluginManagerServer;)Lcom/qihoo360/replugin/packages/PluginRunningList;

    move-result-object v1

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    .line 697
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public getRunningProcessesByPlugin(Ljava/lang/String;)[Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 723
    invoke-static {}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$200()[B

    move-result-object v0

    monitor-enter v0

    .line 724
    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer$Stub;->this$0:Lcom/qihoo360/replugin/packages/PluginManagerServer;

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$1200(Lcom/qihoo360/replugin/packages/PluginManagerServer;Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    monitor-exit v0

    return-object p1

    :catchall_0
    move-exception p1

    .line 725
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public install(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 658
    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer$Stub;->this$0:Lcom/qihoo360/replugin/packages/PluginManagerServer;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "LOCKER-\u5916\u90e8, \u7ebf\u7a0b\uff1a"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Thread;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "\uff0c\u5728\u4e34\u754c\u533a\u7b49\u5f85\uff0c\u5f53\u524d\u65f6\u95f4: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, "\n"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$100(Lcom/qihoo360/replugin/packages/PluginManagerServer;Ljava/lang/String;Z)V

    .line 659
    invoke-static {}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$200()[B

    move-result-object v0

    monitor-enter v0

    .line 660
    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer$Stub;->this$0:Lcom/qihoo360/replugin/packages/PluginManagerServer;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "LOCKER-\u5185\u90e8\uff0c\u7ebf\u7a0b\uff1a"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Thread;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "\uff0c\u8fdb\u5165\u4e34\u754c\u533a\uff0c\u5c06\u6267\u884c\u5b89\u88c5\u63d2\u4ef6\u64cd\u4f5c,\u5f53\u524d\u65f6\u95f4: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v3, "\n"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, p2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$100(Lcom/qihoo360/replugin/packages/PluginManagerServer;Ljava/lang/String;Z)V

    .line 661
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer$Stub;->this$0:Lcom/qihoo360/replugin/packages/PluginManagerServer;

    invoke-static {v1, p1, p2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$300(Lcom/qihoo360/replugin/packages/PluginManagerServer;Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p1

    monitor-exit v0

    return-object p1

    :catchall_0
    move-exception p1

    .line 662
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public isPluginRunning(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 702
    invoke-static {}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$200()[B

    move-result-object v0

    monitor-enter v0

    .line 703
    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer$Stub;->this$0:Lcom/qihoo360/replugin/packages/PluginManagerServer;

    invoke-static {v1, p1, p2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$900(Lcom/qihoo360/replugin/packages/PluginManagerServer;Ljava/lang/String;Ljava/lang/String;)Z

    move-result p1

    monitor-exit v0

    return p1

    :catchall_0
    move-exception p1

    .line 704
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public load()Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 667
    invoke-static {}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$200()[B

    move-result-object v0

    monitor-enter v0

    .line 668
    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer$Stub;->this$0:Lcom/qihoo360/replugin/packages/PluginManagerServer;

    invoke-static {v1}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$400(Lcom/qihoo360/replugin/packages/PluginManagerServer;)Ljava/util/List;

    move-result-object v1

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    .line 669
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public syncRunningPlugins(Lcom/qihoo360/replugin/packages/PluginRunningList;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 709
    invoke-static {}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$200()[B

    move-result-object v0

    monitor-enter v0

    .line 710
    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer$Stub;->this$0:Lcom/qihoo360/replugin/packages/PluginManagerServer;

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$1000(Lcom/qihoo360/replugin/packages/PluginManagerServer;Lcom/qihoo360/replugin/packages/PluginRunningList;)V

    .line 711
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public uninstall(Lcom/qihoo360/replugin/model/PluginInfo;)Z
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 688
    invoke-static {}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$200()[B

    move-result-object v0

    monitor-enter v0

    .line 689
    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer$Stub;->this$0:Lcom/qihoo360/replugin/packages/PluginManagerServer;

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$700(Lcom/qihoo360/replugin/packages/PluginManagerServer;Lcom/qihoo360/replugin/model/PluginInfo;)Z

    move-result p1

    monitor-exit v0

    return p1

    :catchall_0
    move-exception p1

    .line 690
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public updateAll()Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 674
    invoke-static {}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$200()[B

    move-result-object v0

    monitor-enter v0

    .line 675
    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer$Stub;->this$0:Lcom/qihoo360/replugin/packages/PluginManagerServer;

    invoke-static {v1}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$500(Lcom/qihoo360/replugin/packages/PluginManagerServer;)Ljava/util/List;

    move-result-object v1

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    .line 676
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public updateUsed(Ljava/lang/String;Z)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 681
    invoke-static {}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$200()[B

    move-result-object v0

    monitor-enter v0

    .line 682
    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer$Stub;->this$0:Lcom/qihoo360/replugin/packages/PluginManagerServer;

    invoke-static {v1, p1, p2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->access$600(Lcom/qihoo360/replugin/packages/PluginManagerServer;Ljava/lang/String;Z)V

    .line 683
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method
