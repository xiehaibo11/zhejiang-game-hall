.class Lcom/bianfeng/customwidgetlib/HorizontalListView$3;
.super Ljava/util/TimerTask;
.source "HorizontalListView.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/customwidgetlib/HorizontalListView;->isScrolling()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/customwidgetlib/HorizontalListView;


# direct methods
.method constructor <init>(Lcom/bianfeng/customwidgetlib/HorizontalListView;)V
    .locals 0

    .line 287
    iput-object p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$3;->this$0:Lcom/bianfeng/customwidgetlib/HorizontalListView;

    invoke-direct {p0}, Ljava/util/TimerTask;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .line 290
    iget-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$3;->this$0:Lcom/bianfeng/customwidgetlib/HorizontalListView;

    iget-object v0, v0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mScroller:Landroid/widget/Scroller;

    invoke-virtual {v0}, Landroid/widget/Scroller;->isFinished()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 291
    iget-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$3;->this$0:Lcom/bianfeng/customwidgetlib/HorizontalListView;

    invoke-static {v0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->access$200(Lcom/bianfeng/customwidgetlib/HorizontalListView;)Ljava/util/Timer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V

    .line 292
    iget-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$3;->this$0:Lcom/bianfeng/customwidgetlib/HorizontalListView;

    invoke-virtual {v0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->autoScroll()V

    :cond_0
    return-void
.end method
