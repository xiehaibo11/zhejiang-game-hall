.class final Lcom/tkay/basead/c$5;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/basead/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/c;


# direct methods
.method constructor <init>(Lcom/tkay/basead/c;)V
    .locals 0

    .line 194
    iput-object p1, p0, Lcom/tkay/basead/c$5;->a:Lcom/tkay/basead/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 3

    .line 197
    instance-of v0, p1, Landroid/widget/TextView;

    if-eqz v0, :cond_0

    .line 198
    check-cast p1, Landroid/widget/TextView;

    .line 200
    iget-object v0, p0, Lcom/tkay/basead/c$5;->a:Lcom/tkay/basead/c;

    iget-object v0, v0, Lcom/tkay/basead/c;->a:Lcom/tkay/core/common/f/h;

    iget-object v1, p0, Lcom/tkay/basead/c$5;->a:Lcom/tkay/basead/c;

    iget-object v1, v1, Lcom/tkay/basead/c;->b:Lcom/tkay/core/common/f/i;

    invoke-virtual {p1}, Landroid/widget/TextView;->getTag()Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v2, ""

    invoke-static {v0, v1, p1, v2}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Ljava/lang/String;Ljava/lang/String;)V

    .line 202
    iget-object p1, p0, Lcom/tkay/basead/c$5;->a:Lcom/tkay/basead/c;

    invoke-static {p1}, Lcom/tkay/basead/c;->b(Lcom/tkay/basead/c;)V

    .line 204
    iget-object p1, p0, Lcom/tkay/basead/c$5;->a:Lcom/tkay/basead/c;

    invoke-static {p1}, Lcom/tkay/basead/c;->a(Lcom/tkay/basead/c;)Lcom/tkay/basead/c$a;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 205
    iget-object p1, p0, Lcom/tkay/basead/c$5;->a:Lcom/tkay/basead/c;

    invoke-static {p1}, Lcom/tkay/basead/c;->a(Lcom/tkay/basead/c;)Lcom/tkay/basead/c$a;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/basead/c$a;->a()V

    :cond_0
    return-void
.end method
