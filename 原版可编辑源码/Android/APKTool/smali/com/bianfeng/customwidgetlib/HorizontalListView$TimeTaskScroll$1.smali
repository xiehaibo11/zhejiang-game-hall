.class Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll$1;
.super Landroid/os/Handler;
.source "HorizontalListView.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;


# direct methods
.method constructor <init>(Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;Landroid/os/Looper;)V
    .locals 0

    .line 312
    iput-object p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll$1;->this$1:Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 2

    .line 314
    iget p1, p1, Landroid/os/Message;->what:I

    const/16 v0, 0xc

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 317
    :cond_0
    iget-object p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll$1;->this$1:Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;

    iget v0, p1, Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;->i:I

    iget-object v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll$1;->this$1:Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;

    iget-object v1, v1, Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;->this$0:Lcom/bianfeng/customwidgetlib/HorizontalListView;

    invoke-static {v1}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->access$300(Lcom/bianfeng/customwidgetlib/HorizontalListView;)I

    move-result v1

    div-int/lit8 v1, v1, 0x4

    add-int/2addr v0, v1

    iput v0, p1, Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;->i:I

    .line 318
    iget-object p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll$1;->this$1:Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;

    iget-object p1, p1, Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;->this$0:Lcom/bianfeng/customwidgetlib/HorizontalListView;

    iget-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll$1;->this$1:Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;

    iget v0, v0, Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;->i:I

    invoke-virtual {p1, v0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->scrollTo(I)V

    :goto_0
    return-void
.end method
