.class final Lcom/tkay/basead/c$3;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/c;->d()V
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

    .line 144
    iput-object p1, p0, Lcom/tkay/basead/c$3;->a:Lcom/tkay/basead/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 3

    .line 147
    iget-object p1, p0, Lcom/tkay/basead/c$3;->a:Lcom/tkay/basead/c;

    invoke-static {p1}, Lcom/tkay/basead/c;->c(Lcom/tkay/basead/c;)Landroid/widget/EditText;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 148
    iget-object p1, p0, Lcom/tkay/basead/c$3;->a:Lcom/tkay/basead/c;

    invoke-static {p1}, Lcom/tkay/basead/c;->c(Lcom/tkay/basead/c;)Landroid/widget/EditText;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    .line 149
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 150
    iget-object p1, p0, Lcom/tkay/basead/c$3;->a:Lcom/tkay/basead/c;

    invoke-static {p1}, Lcom/tkay/basead/c;->d(Lcom/tkay/basead/c;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 151
    iget-object p1, p0, Lcom/tkay/basead/c$3;->a:Lcom/tkay/basead/c;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/tkay/basead/c;->a(Lcom/tkay/basead/c;Z)Z

    .line 152
    iget-object p1, p0, Lcom/tkay/basead/c$3;->a:Lcom/tkay/basead/c;

    invoke-static {p1}, Lcom/tkay/basead/c;->c(Lcom/tkay/basead/c;)Landroid/widget/EditText;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/widget/EditText;->setCursorVisible(Z)V

    .line 153
    iget-object p1, p0, Lcom/tkay/basead/c$3;->a:Lcom/tkay/basead/c;

    invoke-static {p1}, Lcom/tkay/basead/c;->c(Lcom/tkay/basead/c;)Landroid/widget/EditText;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/basead/c$3;->a:Lcom/tkay/basead/c;

    invoke-static {v0}, Lcom/tkay/basead/c;->e(Lcom/tkay/basead/c;)Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_feedback_hint"

    const-string v2, "string"

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/EditText;->setHint(I)V

    .line 154
    iget-object p1, p0, Lcom/tkay/basead/c$3;->a:Lcom/tkay/basead/c;

    invoke-static {p1}, Lcom/tkay/basead/c;->c(Lcom/tkay/basead/c;)Landroid/widget/EditText;

    move-result-object p1

    const-string v0, "#999999"

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/EditText;->setHintTextColor(I)V

    .line 155
    iget-object p1, p0, Lcom/tkay/basead/c$3;->a:Lcom/tkay/basead/c;

    invoke-static {p1}, Lcom/tkay/basead/c;->c(Lcom/tkay/basead/c;)Landroid/widget/EditText;

    move-result-object p1

    new-instance v0, Lcom/tkay/basead/c$3$1;

    invoke-direct {v0, p0}, Lcom/tkay/basead/c$3$1;-><init>(Lcom/tkay/basead/c$3;)V

    const-wide/16 v1, 0x5dc

    invoke-virtual {p1, v0, v1, v2}, Landroid/widget/EditText;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void

    .line 165
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/c$3;->a:Lcom/tkay/basead/c;

    iget-object v0, v0, Lcom/tkay/basead/c;->a:Lcom/tkay/core/common/f/h;

    iget-object v1, p0, Lcom/tkay/basead/c$3;->a:Lcom/tkay/basead/c;

    iget-object v1, v1, Lcom/tkay/basead/c;->b:Lcom/tkay/core/common/f/i;

    const-string v2, "0"

    invoke-static {v0, v1, v2, p1}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Ljava/lang/String;Ljava/lang/String;)V

    .line 167
    iget-object p1, p0, Lcom/tkay/basead/c$3;->a:Lcom/tkay/basead/c;

    invoke-static {p1}, Lcom/tkay/basead/c;->b(Lcom/tkay/basead/c;)V

    .line 169
    iget-object p1, p0, Lcom/tkay/basead/c$3;->a:Lcom/tkay/basead/c;

    invoke-static {p1}, Lcom/tkay/basead/c;->a(Lcom/tkay/basead/c;)Lcom/tkay/basead/c$a;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 170
    iget-object p1, p0, Lcom/tkay/basead/c$3;->a:Lcom/tkay/basead/c;

    invoke-static {p1}, Lcom/tkay/basead/c;->a(Lcom/tkay/basead/c;)Lcom/tkay/basead/c$a;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/basead/c$a;->a()V

    :cond_1
    return-void
.end method
