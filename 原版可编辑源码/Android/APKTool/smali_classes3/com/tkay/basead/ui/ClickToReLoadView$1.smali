.class final Lcom/tkay/basead/ui/ClickToReLoadView$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/ClickToReLoadView;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field a:J

.field final synthetic b:Lcom/tkay/basead/ui/ClickToReLoadView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/ClickToReLoadView;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/tkay/basead/ui/ClickToReLoadView$1;->b:Lcom/tkay/basead/ui/ClickToReLoadView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 6

    .line 76
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 77
    iget-wide v2, p0, Lcom/tkay/basead/ui/ClickToReLoadView$1;->a:J

    sub-long v2, v0, v2

    const-wide/16 v4, 0x3e8

    cmp-long p1, v2, v4

    if-lez p1, :cond_0

    .line 78
    iput-wide v0, p0, Lcom/tkay/basead/ui/ClickToReLoadView$1;->a:J

    .line 79
    iget-object p1, p0, Lcom/tkay/basead/ui/ClickToReLoadView$1;->b:Lcom/tkay/basead/ui/ClickToReLoadView;

    invoke-static {p1}, Lcom/tkay/basead/ui/ClickToReLoadView;->a(Lcom/tkay/basead/ui/ClickToReLoadView;)Lcom/tkay/basead/ui/ClickToReLoadView$a;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 80
    iget-object p1, p0, Lcom/tkay/basead/ui/ClickToReLoadView$1;->b:Lcom/tkay/basead/ui/ClickToReLoadView;

    invoke-static {p1}, Lcom/tkay/basead/ui/ClickToReLoadView;->a(Lcom/tkay/basead/ui/ClickToReLoadView;)Lcom/tkay/basead/ui/ClickToReLoadView$a;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/basead/ui/ClickToReLoadView$a;->a()V

    :cond_0
    return-void
.end method
