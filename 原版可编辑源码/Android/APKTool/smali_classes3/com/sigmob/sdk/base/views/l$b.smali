.class Lcom/sigmob/sdk/base/views/l$b;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnTouchListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/views/l;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "b"
.end annotation


# instance fields
.field a:Landroid/view/MotionEvent;

.field final synthetic b:Lcom/sigmob/sdk/base/views/l;

.field private c:Z


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/views/l;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/l$b;->b:Lcom/sigmob/sdk/base/views/l;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onTouch(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 2

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-eqz p1, :cond_2

    if-eq p1, v0, :cond_0

    goto :goto_0

    :cond_0
    iget-boolean p1, p0, Lcom/sigmob/sdk/base/views/l$b;->c:Z

    if-nez p1, :cond_1

    return v1

    :cond_1
    iput-boolean v1, p0, Lcom/sigmob/sdk/base/views/l$b;->c:Z

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/l$b;->b:Lcom/sigmob/sdk/base/views/l;

    invoke-static {p1}, Lcom/sigmob/sdk/base/views/l;->a(Lcom/sigmob/sdk/base/views/l;)Lcom/sigmob/sdk/base/views/l$a;

    move-result-object p1

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/l$b;->b:Lcom/sigmob/sdk/base/views/l;

    invoke-static {p1}, Lcom/sigmob/sdk/base/views/l;->a(Lcom/sigmob/sdk/base/views/l;)Lcom/sigmob/sdk/base/views/l$a;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/l$b;->a:Landroid/view/MotionEvent;

    invoke-interface {p1, v0, p2}, Lcom/sigmob/sdk/base/views/l$a;->a(Landroid/view/MotionEvent;Landroid/view/MotionEvent;)V

    goto :goto_0

    :cond_2
    iput-boolean v0, p0, Lcom/sigmob/sdk/base/views/l$b;->c:Z

    invoke-static {p2}, Landroid/view/MotionEvent;->obtain(Landroid/view/MotionEvent;)Landroid/view/MotionEvent;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/l$b;->a:Landroid/view/MotionEvent;

    :cond_3
    :goto_0
    return v1
.end method
