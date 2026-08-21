.class Lcom/oppo/oiface/engine/OifaceGameEngineManager$1;
.super Lcom/oppo/oiface/engine/IOIfaceNotifier$Stub;
.source "OifaceGameEngineManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/oppo/oiface/engine/OifaceGameEngineManager;->connectOifaceService()Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/oppo/oiface/engine/OifaceGameEngineManager;


# direct methods
.method constructor <init>(Lcom/oppo/oiface/engine/OifaceGameEngineManager;)V
    .locals 0

    .line 43
    iput-object p1, p0, Lcom/oppo/oiface/engine/OifaceGameEngineManager$1;->this$0:Lcom/oppo/oiface/engine/OifaceGameEngineManager;

    invoke-direct {p0}, Lcom/oppo/oiface/engine/IOIfaceNotifier$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public onSystemNotify(Ljava/lang/String;)V
    .locals 1

    .line 46
    iget-object v0, p0, Lcom/oppo/oiface/engine/OifaceGameEngineManager$1;->this$0:Lcom/oppo/oiface/engine/OifaceGameEngineManager;

    invoke-static {v0}, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->access$000(Lcom/oppo/oiface/engine/OifaceGameEngineManager;)Ljava/lang/ref/WeakReference;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/oppo/oiface/engine/OifaceGameEngineManager$1;->this$0:Lcom/oppo/oiface/engine/OifaceGameEngineManager;

    invoke-static {v0}, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->access$000(Lcom/oppo/oiface/engine/OifaceGameEngineManager;)Ljava/lang/ref/WeakReference;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 47
    iget-object v0, p0, Lcom/oppo/oiface/engine/OifaceGameEngineManager$1;->this$0:Lcom/oppo/oiface/engine/OifaceGameEngineManager;

    invoke-static {v0}, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->access$000(Lcom/oppo/oiface/engine/OifaceGameEngineManager;)Ljava/lang/ref/WeakReference;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/oppo/oiface/engine/CallBack;

    invoke-interface {v0, p1}, Lcom/oppo/oiface/engine/CallBack;->systemCallBack(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
