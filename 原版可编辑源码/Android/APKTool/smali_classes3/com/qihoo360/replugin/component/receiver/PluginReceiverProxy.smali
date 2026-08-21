.class public Lcom/qihoo360/replugin/component/receiver/PluginReceiverProxy;
.super Landroid/content/BroadcastReceiver;
.source "PluginReceiverProxy.java"


# static fields
.field public static final TAG:Ljava/lang/String; = "ms-receiver"


# instance fields
.field private mActionPluginComponents:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;>;>;"
        }
    .end annotation
.end field

.field private final mReceiverProcess:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 47
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    .line 56
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/component/receiver/PluginReceiverProxy;->mReceiverProcess:Ljava/util/HashMap;

    return-void
.end method

.method private getProcessOfReceiver(Ljava/lang/String;Ljava/lang/String;)I
    .locals 2

    .line 122
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "-"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 123
    iget-object v1, p0, Lcom/qihoo360/replugin/component/receiver/PluginReceiverProxy;->mReceiverProcess:Ljava/util/HashMap;

    invoke-virtual {v1, v0}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 126
    invoke-static {p1}, Lcom/qihoo360/i/Factory;->queryPluginComponentList(Ljava/lang/String;)Lcom/qihoo360/replugin/component/ComponentList;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 129
    invoke-virtual {p1}, Lcom/qihoo360/replugin/component/ComponentList;->getReceiverMap()Ljava/util/HashMap;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 132
    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/content/pm/ActivityInfo;

    if-eqz p1, :cond_0

    .line 134
    iget-object p2, p0, Lcom/qihoo360/replugin/component/receiver/PluginReceiverProxy;->mReceiverProcess:Ljava/util/HashMap;

    iget-object p1, p1, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    invoke-static {p1}, Lcom/qihoo360/replugin/component/utils/PluginClientHelper;->getProcessInt(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p2, v0, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 139
    :cond_0
    iget-object p1, p0, Lcom/qihoo360/replugin/component/receiver/PluginReceiverProxy;->mReceiverProcess:Ljava/util/HashMap;

    invoke-virtual {p1, v0}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 140
    iget-object p1, p0, Lcom/qihoo360/replugin/component/receiver/PluginReceiverProxy;->mReceiverProcess:Ljava/util/HashMap;

    invoke-virtual {p1, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    return p1

    :cond_1
    const/4 p1, -0x1

    return p1
.end method

.method public static loadClassSafety(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/ClassNotFoundException;
        }
    .end annotation

    .line 111
    invoke-virtual {p0, p1}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 7

    if-eqz p2, :cond_6

    .line 60
    iget-object p1, p0, Lcom/qihoo360/replugin/component/receiver/PluginReceiverProxy;->mActionPluginComponents:Ljava/util/HashMap;

    if-nez p1, :cond_0

    goto/16 :goto_2

    .line 64
    :cond_0
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    .line 65
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    .line 67
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const/4 v1, 0x0

    const-string v2, "ms-receiver"

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    aput-object p1, v0, v1

    const-string v3, "\u4ee3\u7406 Receiver \u6536\u5230 action: %s "

    .line 68
    invoke-static {v3, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 72
    :cond_1
    iget-object v0, p0, Lcom/qihoo360/replugin/component/receiver/PluginReceiverProxy;->mActionPluginComponents:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/HashMap;

    if-eqz p1, :cond_6

    .line 76
    invoke-virtual {p1}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_2
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_6

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 77
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 78
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v4

    if-nez v4, :cond_3

    goto :goto_0

    .line 83
    :cond_3
    new-instance v4, Ljava/util/ArrayList;

    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Collection;

    invoke-direct {v4, v0}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    .line 85
    invoke-interface {v4}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_4
    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 88
    :try_start_0
    invoke-direct {p0, v3, v4}, Lcom/qihoo360/replugin/component/receiver/PluginReceiverProxy;->getProcessOfReceiver(Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    const/4 v6, -0x2

    if-ne v5, v6, :cond_5

    .line 92
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->getPluginHost()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v5

    .line 93
    invoke-interface {v5, v3, v4, p2}, Lcom/qihoo360/loader2/IPluginHost;->onReceive(Ljava/lang/String;Ljava/lang/String;Landroid/content/Intent;)V

    goto :goto_1

    .line 95
    :cond_5
    new-instance v6, Lcom/qihoo360/loader2/PluginBinderInfo;

    invoke-direct {v6, v1}, Lcom/qihoo360/loader2/PluginBinderInfo;-><init>(I)V

    invoke-static {v3, v5, v6}, Lcom/qihoo360/loader2/MP;->startPluginProcess(Ljava/lang/String;ILcom/qihoo360/loader2/PluginBinderInfo;)Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v5

    .line 96
    invoke-interface {v5, v3, v4, p2}, Lcom/qihoo360/loader2/IPluginClient;->onReceive(Ljava/lang/String;Ljava/lang/String;Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v4

    .line 100
    sget-boolean v5, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v5, :cond_4

    .line 101
    invoke-virtual {v4}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_1

    :cond_6
    :goto_2
    return-void
.end method

.method public setActionPluginMap(Ljava/util/HashMap;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;>;>;)V"
        }
    .end annotation

    .line 146
    iput-object p1, p0, Lcom/qihoo360/replugin/component/receiver/PluginReceiverProxy;->mActionPluginComponents:Ljava/util/HashMap;

    return-void
.end method
