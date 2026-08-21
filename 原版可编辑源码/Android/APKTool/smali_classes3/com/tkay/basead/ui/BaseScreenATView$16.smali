.class final Lcom/tkay/basead/ui/BaseScreenATView$16;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/ui/EndCardView$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/BaseScreenATView;->N()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Lcom/tkay/basead/ui/BaseScreenATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/BaseScreenATView;Z)V
    .locals 0

    .line 678
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$16;->b:Lcom/tkay/basead/ui/BaseScreenATView;

    iput-boolean p2, p0, Lcom/tkay/basead/ui/BaseScreenATView$16;->a:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 681
    sget-object v0, Lcom/tkay/basead/ui/BaseScreenATView;->TAG:Ljava/lang/String;

    .line 682
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$16;->b:Lcom/tkay/basead/ui/BaseScreenATView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseScreenATView;->b(I)V

    return-void
.end method

.method public final b()V
    .locals 1

    .line 687
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$16;->b:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->I()V

    .line 689
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$16;->a:Z

    if-eqz v0, :cond_0

    .line 690
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$16;->b:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->E()V

    :cond_0
    return-void
.end method
