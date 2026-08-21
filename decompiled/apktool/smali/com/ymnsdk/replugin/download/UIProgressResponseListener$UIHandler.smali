.class Lcom/ymnsdk/replugin/download/UIProgressResponseListener$UIHandler;
.super Landroid/os/Handler;
.source "UIProgressResponseListener.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ymnsdk/replugin/download/UIProgressResponseListener;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "UIHandler"
.end annotation


# instance fields
.field private final mUIProgressResponseListenerWeakReference:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/ymnsdk/replugin/download/UIProgressResponseListener;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Landroid/os/Looper;Lcom/ymnsdk/replugin/download/UIProgressResponseListener;)V
    .locals 0

    .line 19
    invoke-direct {p0, p1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 20
    new-instance p1, Ljava/lang/ref/WeakReference;

    invoke-direct {p1, p2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object p1, p0, Lcom/ymnsdk/replugin/download/UIProgressResponseListener$UIHandler;->mUIProgressResponseListenerWeakReference:Ljava/lang/ref/WeakReference;

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 7

    .line 24
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    .line 35
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    goto :goto_0

    .line 26
    :cond_0
    iget-object v0, p0, Lcom/ymnsdk/replugin/download/UIProgressResponseListener$UIHandler;->mUIProgressResponseListenerWeakReference:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    move-object v1, v0

    check-cast v1, Lcom/ymnsdk/replugin/download/UIProgressResponseListener;

    if-eqz v1, :cond_1

    .line 29
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Lcom/ymnsdk/replugin/download/ProgressModel;

    .line 31
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/download/ProgressModel;->getCurrentBytes()J

    move-result-wide v2

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/download/ProgressModel;->getContentLength()J

    move-result-wide v4

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/download/ProgressModel;->isDone()Z

    move-result v6

    invoke-virtual/range {v1 .. v6}, Lcom/ymnsdk/replugin/download/UIProgressResponseListener;->onUIResponseProgress(JJZ)V

    :cond_1
    :goto_0
    return-void
.end method
