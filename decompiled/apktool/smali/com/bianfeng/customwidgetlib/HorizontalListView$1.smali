.class Lcom/bianfeng/customwidgetlib/HorizontalListView$1;
.super Landroid/database/DataSetObserver;
.source "HorizontalListView.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/customwidgetlib/HorizontalListView;
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

    .line 73
    iput-object p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$1;->this$0:Lcom/bianfeng/customwidgetlib/HorizontalListView;

    invoke-direct {p0}, Landroid/database/DataSetObserver;-><init>()V

    return-void
.end method


# virtual methods
.method public onChanged()V
    .locals 3

    .line 77
    iget-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$1;->this$0:Lcom/bianfeng/customwidgetlib/HorizontalListView;

    monitor-enter v0

    .line 78
    :try_start_0
    iget-object v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$1;->this$0:Lcom/bianfeng/customwidgetlib/HorizontalListView;

    const/4 v2, 0x1

    invoke-static {v1, v2}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->access$002(Lcom/bianfeng/customwidgetlib/HorizontalListView;Z)Z

    .line 79
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 80
    iget-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$1;->this$0:Lcom/bianfeng/customwidgetlib/HorizontalListView;

    invoke-virtual {v0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->invalidate()V

    .line 81
    iget-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$1;->this$0:Lcom/bianfeng/customwidgetlib/HorizontalListView;

    invoke-virtual {v0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->requestLayout()V

    return-void

    :catchall_0
    move-exception v1

    .line 79
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method

.method public onInvalidated()V
    .locals 1

    .line 86
    iget-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$1;->this$0:Lcom/bianfeng/customwidgetlib/HorizontalListView;

    invoke-static {v0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->access$100(Lcom/bianfeng/customwidgetlib/HorizontalListView;)V

    .line 87
    iget-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$1;->this$0:Lcom/bianfeng/customwidgetlib/HorizontalListView;

    invoke-virtual {v0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->invalidate()V

    .line 88
    iget-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView$1;->this$0:Lcom/bianfeng/customwidgetlib/HorizontalListView;

    invoke-virtual {v0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->requestLayout()V

    return-void
.end method
