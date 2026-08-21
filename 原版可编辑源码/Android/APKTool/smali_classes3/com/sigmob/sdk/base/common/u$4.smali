.class Lcom/sigmob/sdk/base/common/u$4;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnTouchListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/u;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field a:Landroid/view/MotionEvent;

.field final synthetic b:Lcom/sigmob/sdk/base/common/u;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/u;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/u$4;->b:Lcom/sigmob/sdk/base/common/u;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/u$4;->a:Landroid/view/MotionEvent;

    return-void
.end method


# virtual methods
.method public onTouch(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 7

    invoke-virtual {p2}, Landroid/view/MotionEvent;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    const/4 v0, 0x0

    if-nez p1, :cond_0

    invoke-static {p2}, Landroid/view/MotionEvent;->obtain(Landroid/view/MotionEvent;)Landroid/view/MotionEvent;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/u$4;->a:Landroid/view/MotionEvent;

    goto/16 :goto_0

    :cond_0
    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    const/4 v1, 0x1

    if-ne p1, v1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/u$4;->a:Landroid/view/MotionEvent;

    const/4 v2, 0x3

    const/4 v3, 0x2

    const/4 v4, 0x4

    const-string v5, "%d,%d,%d,%d"

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/u$4;->b:Lcom/sigmob/sdk/base/common/u;

    new-array v4, v4, [Ljava/lang/Object;

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawX()F

    move-result v6

    float-to-int v6, v6

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v4, v0

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawY()F

    move-result v6

    float-to-int v6, v6

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v4, v1

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawX()F

    move-result v1

    float-to-int v1, v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, v4, v3

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawY()F

    move-result p2

    float-to-int p2, p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    aput-object p2, v4, v2

    invoke-static {v5, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/sigmob/sdk/base/common/u;->a(Lcom/sigmob/sdk/base/common/u;Ljava/lang/String;)Ljava/lang/String;

    goto :goto_0

    :cond_1
    iget-object v6, p0, Lcom/sigmob/sdk/base/common/u$4;->b:Lcom/sigmob/sdk/base/common/u;

    new-array v4, v4, [Ljava/lang/Object;

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawX()F

    move-result p1

    float-to-int p1, p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v4, v0

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/u$4;->a:Landroid/view/MotionEvent;

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawY()F

    move-result p1

    float-to-int p1, p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v4, v1

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawX()F

    move-result p1

    float-to-int p1, p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v4, v3

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawY()F

    move-result p1

    float-to-int p1, p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v4, v2

    invoke-static {v5, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v6, p1}, Lcom/sigmob/sdk/base/common/u;->a(Lcom/sigmob/sdk/base/common/u;Ljava/lang/String;)Ljava/lang/String;

    :cond_2
    :goto_0
    return v0
.end method
