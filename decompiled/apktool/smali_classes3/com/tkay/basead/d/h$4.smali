.class final Lcom/tkay/basead/d/h$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/ui/MraidMediaView$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/d/h;->b(Landroid/content/Context;ZZLcom/tkay/basead/ui/BaseMediaATView$a;)Landroid/view/View;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/d/h;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/h;)V
    .locals 0

    .line 395
    iput-object p1, p0, Lcom/tkay/basead/d/h$4;->a:Lcom/tkay/basead/d/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 416
    iget-object v0, p0, Lcom/tkay/basead/d/h$4;->a:Lcom/tkay/basead/d/h;

    iget-object v0, v0, Lcom/tkay/basead/d/h;->q:Lcom/tkay/basead/ui/OwnNativeATView;

    if-eqz v0, :cond_0

    .line 417
    iget-object v0, p0, Lcom/tkay/basead/d/h$4;->a:Lcom/tkay/basead/d/h;

    iget-object v1, v0, Lcom/tkay/basead/d/h;->q:Lcom/tkay/basead/ui/OwnNativeATView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/d/h;->b(Landroid/view/View;)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 398
    iget-object v0, p0, Lcom/tkay/basead/d/h$4;->a:Lcom/tkay/basead/d/h;

    iget-object v0, v0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    if-eqz v0, :cond_0

    .line 399
    iget-object v0, p0, Lcom/tkay/basead/d/h$4;->a:Lcom/tkay/basead/d/h;

    iget-object v0, v0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/z;->v(Ljava/lang/String;)V

    .line 411
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/d/h$4;->a:Lcom/tkay/basead/d/h;

    iget-object v0, p1, Lcom/tkay/basead/d/h;->l:Lcom/tkay/basead/ui/BaseMediaATView;

    const/4 v1, 0x1

    invoke-virtual {p1, v0, v1}, Lcom/tkay/basead/d/h;->a(Landroid/view/View;I)V

    return-void
.end method
