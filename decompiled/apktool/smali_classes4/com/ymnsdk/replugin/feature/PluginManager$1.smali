.class Lcom/ymnsdk/replugin/feature/PluginManager$1;
.super Ljava/lang/Object;
.source "PluginManager.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/feature/PluginManager;->preLoadPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/PreloadListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

.field final synthetic val$listener:Lcom/ymnsdk/replugin/listener/PreloadListener;

.field final synthetic val$package_name:Ljava/lang/String;

.field final synthetic val$pluginId:Ljava/lang/String;

.field final synthetic val$startTime:J


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/feature/PluginManager;Ljava/lang/String;Ljava/lang/String;JLcom/ymnsdk/replugin/listener/PreloadListener;)V
    .locals 0

    .line 208
    iput-object p1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

    iput-object p2, p0, Lcom/ymnsdk/replugin/feature/PluginManager$1;->val$package_name:Ljava/lang/String;

    iput-object p3, p0, Lcom/ymnsdk/replugin/feature/PluginManager$1;->val$pluginId:Ljava/lang/String;

    iput-wide p4, p0, Lcom/ymnsdk/replugin/feature/PluginManager$1;->val$startTime:J

    iput-object p6, p0, Lcom/ymnsdk/replugin/feature/PluginManager$1;->val$listener:Lcom/ymnsdk/replugin/listener/PreloadListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 12

    .line 211
    iget-object v0, p0, Lcom/ymnsdk/replugin/feature/PluginManager$1;->val$package_name:Ljava/lang/String;

    invoke-static {v0}, Lcom/qihoo360/replugin/RePlugin;->preload(Ljava/lang/String;)Z

    move-result v0

    const-string v1, "ymn"

    if-eqz v0, :cond_0

    const-string v0, "\u9884\u52a0\u8f7d\u6210\u529f\u4e86"

    .line 212
    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 213
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v7, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v2, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const v3, 0x21f06

    const/4 v4, 0x0

    const-string v5, "\u9884\u52a0\u8f7d\u6210\u529f"

    const-string v6, ""

    move-object v1, v7

    invoke-direct/range {v1 .. v6}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v7}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 214
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v9, Lcom/ymnsdk/replugin/event/preplugin/PrePluginResponseEvent;

    iget-object v1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v2, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const/16 v3, 0x414

    iget-object v4, p0, Lcom/ymnsdk/replugin/feature/PluginManager$1;->val$pluginId:Ljava/lang/String;

    const/4 v5, 0x0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    iget-wide v10, p0, Lcom/ymnsdk/replugin/feature/PluginManager$1;->val$startTime:J

    sub-long v7, v6, v10

    const-string v6, "\u9884\u52a0\u8f7d\u6210\u529f"

    move-object v1, v9

    invoke-direct/range {v1 .. v8}, Lcom/ymnsdk/replugin/event/preplugin/PrePluginResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v0, v9}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 215
    iget-object v0, p0, Lcom/ymnsdk/replugin/feature/PluginManager$1;->val$listener:Lcom/ymnsdk/replugin/listener/PreloadListener;

    invoke-interface {v0}, Lcom/ymnsdk/replugin/listener/PreloadListener;->preloadSuccess()V

    goto :goto_0

    :cond_0
    const-string v0, "\u9884\u52a0\u8f7d\u5931\u8d25\u4e86"

    .line 217
    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 218
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v7, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v2, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const v3, 0x21f06

    const/4 v4, -0x1

    const-string v5, "\u9884\u52a0\u8f7d\u63d2\u4ef6\u5931\u8d25"

    const-string v6, ""

    move-object v1, v7

    invoke-direct/range {v1 .. v6}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v7}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 219
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v9, Lcom/ymnsdk/replugin/event/preplugin/PrePluginResponseEvent;

    iget-object v1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v2, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const/16 v3, 0x415

    iget-object v4, p0, Lcom/ymnsdk/replugin/feature/PluginManager$1;->val$pluginId:Ljava/lang/String;

    const/4 v5, -0x1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    iget-wide v10, p0, Lcom/ymnsdk/replugin/feature/PluginManager$1;->val$startTime:J

    sub-long v7, v6, v10

    const-string v6, "\u9884\u52a0\u8f7d\u63d2\u4ef6\u5931\u8d25"

    move-object v1, v9

    invoke-direct/range {v1 .. v8}, Lcom/ymnsdk/replugin/event/preplugin/PrePluginResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v0, v9}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 220
    iget-object v0, p0, Lcom/ymnsdk/replugin/feature/PluginManager$1;->val$listener:Lcom/ymnsdk/replugin/listener/PreloadListener;

    const-string v1, "\u9884\u52a0\u8f7d\u63d2\u4ef6\u5931\u8d25"

    invoke-interface {v0, v1}, Lcom/ymnsdk/replugin/listener/PreloadListener;->preloadFail(Ljava/lang/String;)V

    :goto_0
    return-void
.end method
