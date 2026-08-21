.class final Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager$1;
.super Ljava/lang/Thread;
.source "PluginServiceReferenceManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->startMonitoring()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 81
    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 7

    const/4 v0, 0x0

    :cond_0
    :goto_0
    if-nez v0, :cond_4

    .line 86
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->access$000()Ljava/util/ArrayList;

    move-result-object v1

    monitor-enter v1

    .line 87
    :try_start_0
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->access$000()Ljava/util/ArrayList;

    move-result-object v2

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lez v2, :cond_2

    .line 89
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->access$100()Ljava/lang/ref/ReferenceQueue;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/ref/ReferenceQueue;->poll()Ljava/lang/ref/Reference;

    move-result-object v3

    check-cast v3, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager$ServicePhantomRef;

    :goto_1
    if-eqz v3, :cond_2

    .line 91
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->access$200()Z

    move-result v4

    if-eqz v4, :cond_1

    .line 92
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->access$300()Ljava/lang/String;

    move-result-object v4

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Plugin service ref released: "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v3, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager$ServicePhantomRef;->serviceName:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 95
    :cond_1
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->access$000()Ljava/util/ArrayList;

    move-result-object v4

    invoke-virtual {v4, v3}, Ljava/util/ArrayList;->remove(Ljava/lang/Object;)Z

    add-int/lit8 v2, v2, -0x1

    .line 98
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->access$400()Landroid/content/Context;

    move-result-object v4

    iget-object v5, v3, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager$ServicePhantomRef;->pluginName:Ljava/lang/String;

    iget-object v3, v3, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager$ServicePhantomRef;->serviceName:Ljava/lang/String;

    invoke-static {v4, v5, v3}, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->onPluginServiceReleased(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 100
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->access$100()Ljava/lang/ref/ReferenceQueue;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/ref/ReferenceQueue;->poll()Ljava/lang/ref/Reference;

    move-result-object v3

    check-cast v3, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager$ServicePhantomRef;

    goto :goto_1

    :cond_2
    if-gtz v2, :cond_3

    const/4 v0, 0x0

    .line 105
    invoke-static {v0}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->access$502(Ljava/lang/Thread;)Ljava/lang/Thread;

    const/4 v0, 0x1

    .line 108
    :cond_3
    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    const-wide/16 v1, 0x1388

    .line 113
    :try_start_1
    invoke-static {v1, v2}, Ljava/lang/Thread;->sleep(J)V
    :try_end_1
    .catch Ljava/lang/InterruptedException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 115
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->access$200()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 116
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->access$300()Ljava/lang/String;

    move-result-object v2

    const-string v3, "Thread sleeping interrupted: "

    invoke-static {v2, v3, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 108
    :try_start_2
    monitor-exit v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw v0

    .line 122
    :cond_4
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->access$200()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 123
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->access$300()Ljava/lang/String;

    move-result-object v0

    const-string v1, "sMonitorThread quits... "

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_5
    return-void
.end method
