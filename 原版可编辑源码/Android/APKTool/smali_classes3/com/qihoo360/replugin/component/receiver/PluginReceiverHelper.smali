.class public Lcom/qihoo360/replugin/component/receiver/PluginReceiverHelper;
.super Ljava/lang/Object;
.source "PluginReceiverHelper.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 36
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static onPluginReceiverReceived(Ljava/lang/String;Ljava/lang/String;Ljava/util/HashMap;Landroid/content/Intent;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Landroid/content/BroadcastReceiver;",
            ">;",
            "Landroid/content/Intent;",
            ")V"
        }
    .end annotation

    .line 46
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, "ms-receiver"

    if-nez v0, :cond_8

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto/16 :goto_4

    .line 54
    :cond_0
    invoke-static {p0}, Lcom/qihoo360/i/Factory;->queryPluginContext(Ljava/lang/String;)Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_1

    return-void

    :cond_1
    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p0, v2, v3

    const/4 p0, 0x1

    aput-object p1, v2, p0

    const-string v4, "%s-%s"

    .line 59
    invoke-static {v4, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    const/4 v4, 0x0

    if-eqz p2, :cond_3

    .line 62
    invoke-virtual {p2, v2}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_2

    goto :goto_0

    .line 82
    :cond_2
    invoke-virtual {p2, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/BroadcastReceiver;

    goto :goto_3

    .line 65
    :cond_3
    :goto_0
    :try_start_0
    invoke-virtual {v0}, Landroid/content/Context;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v5

    invoke-static {v5, p1}, Lcom/qihoo360/replugin/component/receiver/PluginReceiverProxy;->loadClassSafety(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v5

    if-eqz v5, :cond_6

    .line 67
    invoke-virtual {v5}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Landroid/content/BroadcastReceiver;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz p2, :cond_4

    .line 69
    :try_start_1
    invoke-virtual {p2, v2, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 72
    :cond_4
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_5

    const-string p2, "\u53cd\u5c04\u521b\u5efa Receiver \u5b9e\u4f8b %s"

    new-array p0, p0, [Ljava/lang/Object;

    aput-object p1, p0, v3

    .line 73
    invoke-static {p2, p0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_5
    move-object v4, v5

    goto :goto_2

    :catchall_0
    move-exception p0

    move-object v4, v5

    goto :goto_1

    :catchall_1
    move-exception p0

    .line 77
    :goto_1
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_6

    .line 78
    invoke-virtual {p0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_6
    :goto_2
    move-object p0, v4

    :goto_3
    if-eqz p0, :cond_7

    .line 88
    new-instance p2, Lcom/qihoo360/replugin/component/receiver/PluginReceiverHelper$1;

    invoke-direct {p2, p1, p0, v0, p3}, Lcom/qihoo360/replugin/component/receiver/PluginReceiverHelper$1;-><init>(Ljava/lang/String;Landroid/content/BroadcastReceiver;Landroid/content/Context;Landroid/content/Intent;)V

    invoke-static {p2}, Lcom/qihoo360/mobilesafe/api/Tasks;->post2UI(Ljava/lang/Runnable;)Z

    :cond_7
    return-void

    .line 47
    :cond_8
    :goto_4
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_9

    const-string p0, "plugin or receiver or intent is null, return."

    .line 48
    invoke-static {v1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_9
    return-void
.end method
