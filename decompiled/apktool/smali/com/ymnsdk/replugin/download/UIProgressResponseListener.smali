.class public abstract Lcom/ymnsdk/replugin/download/UIProgressResponseListener;
.super Ljava/lang/Object;
.source "UIProgressResponseListener.java"

# interfaces
.implements Lcom/ymnsdk/replugin/download/ProgressResponseListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ymnsdk/replugin/download/UIProgressResponseListener$UIHandler;
    }
.end annotation


# static fields
.field private static final RESPONSE_UPDATE:I = 0x2


# instance fields
.field private final mHandler:Landroid/os/Handler;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 41
    new-instance v0, Lcom/ymnsdk/replugin/download/UIProgressResponseListener$UIHandler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1, p0}, Lcom/ymnsdk/replugin/download/UIProgressResponseListener$UIHandler;-><init>(Landroid/os/Looper;Lcom/ymnsdk/replugin/download/UIProgressResponseListener;)V

    iput-object v0, p0, Lcom/ymnsdk/replugin/download/UIProgressResponseListener;->mHandler:Landroid/os/Handler;

    return-void
.end method


# virtual methods
.method public onResponseProgress(JJZ)V
    .locals 8

    .line 45
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 46
    new-instance v7, Lcom/ymnsdk/replugin/download/ProgressModel;

    move-object v1, v7

    move-wide v2, p1

    move-wide v4, p3

    move v6, p5

    invoke-direct/range {v1 .. v6}, Lcom/ymnsdk/replugin/download/ProgressModel;-><init>(JJZ)V

    iput-object v7, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/4 p1, 0x2

    .line 47
    iput p1, v0, Landroid/os/Message;->what:I

    .line 48
    iget-object p1, p0, Lcom/ymnsdk/replugin/download/UIProgressResponseListener;->mHandler:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public abstract onUIResponseProgress(JJZ)V
.end method
