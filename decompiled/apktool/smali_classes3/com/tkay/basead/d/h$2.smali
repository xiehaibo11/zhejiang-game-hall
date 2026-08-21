.class final Lcom/tkay/basead/d/h$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/a/c$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/d/h;->a(Landroid/view/View;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Lcom/tkay/basead/d/h;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/h;I)V
    .locals 0

    .line 103
    iput-object p1, p0, Lcom/tkay/basead/d/h$2;->b:Lcom/tkay/basead/d/h;

    iput p2, p0, Lcom/tkay/basead/d/h$2;->a:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 106
    iget-object v0, p0, Lcom/tkay/basead/d/h$2;->b:Lcom/tkay/basead/d/h;

    iget-object v0, v0, Lcom/tkay/basead/d/h;->b:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 107
    iget-object v0, p0, Lcom/tkay/basead/d/h$2;->b:Lcom/tkay/basead/d/h;

    iget-object v0, v0, Lcom/tkay/basead/d/h;->b:Lcom/tkay/basead/e/a;

    iget v1, p0, Lcom/tkay/basead/d/h$2;->a:I

    invoke-interface {v0, v1}, Lcom/tkay/basead/e/a;->onAdClick(I)V

    :cond_0
    return-void
.end method

.method public final a(Z)V
    .locals 1

    .line 124
    iget-object v0, p0, Lcom/tkay/basead/d/h$2;->b:Lcom/tkay/basead/d/h;

    iget-object v0, v0, Lcom/tkay/basead/d/h;->b:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 125
    iget-object v0, p0, Lcom/tkay/basead/d/h$2;->b:Lcom/tkay/basead/d/h;

    iget-object v0, v0, Lcom/tkay/basead/d/h;->b:Lcom/tkay/basead/e/a;

    invoke-interface {v0, p1}, Lcom/tkay/basead/e/a;->onDeeplinkCallback(Z)V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 1

    .line 113
    iget-object v0, p0, Lcom/tkay/basead/d/h$2;->b:Lcom/tkay/basead/d/h;

    iget-object v0, v0, Lcom/tkay/basead/d/h;->l:Lcom/tkay/basead/ui/BaseMediaATView;

    if-eqz v0, :cond_0

    .line 114
    iget-object v0, p0, Lcom/tkay/basead/d/h$2;->b:Lcom/tkay/basead/d/h;

    iget-object v0, v0, Lcom/tkay/basead/d/h;->l:Lcom/tkay/basead/ui/BaseMediaATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseMediaATView;->notifyClick()V

    :cond_0
    return-void
.end method

.method public final c()V
    .locals 0

    return-void
.end method
