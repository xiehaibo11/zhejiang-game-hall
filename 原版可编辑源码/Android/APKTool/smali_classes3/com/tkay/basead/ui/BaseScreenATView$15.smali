.class final Lcom/tkay/basead/ui/BaseScreenATView$15;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/ui/MraidEndCardView$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/BaseScreenATView;->b(Z)Lcom/tkay/basead/ui/BaseEndCardView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/BaseScreenATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/BaseScreenATView;)V
    .locals 0

    .line 623
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$15;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 634
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$15;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget v0, v0, Lcom/tkay/basead/ui/BaseScreenATView;->a:I

    const/4 v1, 0x3

    if-ne v1, v0, :cond_1

    .line 635
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$15;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->C()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$15;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->E()Z

    move-result v0

    if-nez v0, :cond_1

    .line 636
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$15;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->h()V

    :cond_1
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 626
    sget-object v0, Lcom/tkay/basead/ui/BaseScreenATView;->TAG:Ljava/lang/String;

    .line 627
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$15;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/h;->v(Ljava/lang/String;)V

    .line 629
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$15;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/BaseScreenATView;->b(I)V

    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method
