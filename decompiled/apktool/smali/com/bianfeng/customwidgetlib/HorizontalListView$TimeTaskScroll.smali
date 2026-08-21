.class public Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;
.super Ljava/util/TimerTask;
.source "HorizontalListView.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/customwidgetlib/HorizontalListView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "TimeTaskScroll"
.end annotation


# instance fields
.field private handler:Landroid/os/Handler;

.field i:I

.field final synthetic this$0:Lcom/bianfeng/customwidgetlib/HorizontalListView;


# direct methods
.method public constructor <init>(Lcom/bianfeng/customwidgetlib/HorizontalListView;I)V
    .locals 1

    .line 308
    iput-object p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;->this$0:Lcom/bianfeng/customwidgetlib/HorizontalListView;

    invoke-direct {p0}, Ljava/util/TimerTask;-><init>()V

    .line 312
    new-instance p1, Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {p1, p0, v0}, Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll$1;-><init>(Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;Landroid/os/Looper;)V

    iput-object p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;->handler:Landroid/os/Handler;

    .line 309
    iput p2, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;->i:I

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 326
    iget-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;->handler:Landroid/os/Handler;

    invoke-virtual {v0}, Landroid/os/Handler;->obtainMessage()Landroid/os/Message;

    move-result-object v0

    const/16 v1, 0xc

    .line 327
    iput v1, v0, Landroid/os/Message;->what:I

    .line 328
    iget-object v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;->handler:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method
