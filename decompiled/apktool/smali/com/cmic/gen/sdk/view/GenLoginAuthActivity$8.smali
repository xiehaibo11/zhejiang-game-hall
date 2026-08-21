.class Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$8;
.super Ljava/lang/Object;
.source "GenLoginAuthActivity.java"

# interfaces
.implements Lcom/cmic/gen/sdk/view/b$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->d()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;


# direct methods
.method constructor <init>(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)V
    .locals 0

    .line 286
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$8;->a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 2

    .line 289
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$8;->a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    invoke-static {v0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->f(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    .line 290
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$8;->a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    invoke-static {v0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Lcom/cmic/gen/sdk/view/d;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$8;->a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    invoke-static {v0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Lcom/cmic/gen/sdk/view/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/d;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 291
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$8;->a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    invoke-static {v0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Lcom/cmic/gen/sdk/view/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/d;->dismiss()V

    .line 293
    :cond_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$8;->a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    invoke-static {v0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->b(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Lcom/cmic/gen/sdk/view/d;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$8;->a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    invoke-static {v0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->b(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Lcom/cmic/gen/sdk/view/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/d;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 294
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$8;->a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    invoke-static {v0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->b(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Lcom/cmic/gen/sdk/view/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/d;->dismiss()V

    .line 296
    :cond_1
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$8;->a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;Z)V

    return-void
.end method
