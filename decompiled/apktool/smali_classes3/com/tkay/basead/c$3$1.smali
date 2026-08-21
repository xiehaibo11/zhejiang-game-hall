.class final Lcom/tkay/basead/c$3$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/c$3;->onClick(Landroid/view/View;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/c$3;


# direct methods
.method constructor <init>(Lcom/tkay/basead/c$3;)V
    .locals 0

    .line 155
    iput-object p1, p0, Lcom/tkay/basead/c$3$1;->a:Lcom/tkay/basead/c$3;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 158
    iget-object v0, p0, Lcom/tkay/basead/c$3$1;->a:Lcom/tkay/basead/c$3;

    iget-object v0, v0, Lcom/tkay/basead/c$3;->a:Lcom/tkay/basead/c;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/tkay/basead/c;->a(Lcom/tkay/basead/c;Z)Z

    .line 159
    iget-object v0, p0, Lcom/tkay/basead/c$3$1;->a:Lcom/tkay/basead/c$3;

    iget-object v0, v0, Lcom/tkay/basead/c$3;->a:Lcom/tkay/basead/c;

    invoke-static {v0}, Lcom/tkay/basead/c;->c(Lcom/tkay/basead/c;)Landroid/widget/EditText;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setCursorVisible(Z)V

    .line 160
    iget-object v0, p0, Lcom/tkay/basead/c$3$1;->a:Lcom/tkay/basead/c$3;

    iget-object v0, v0, Lcom/tkay/basead/c$3;->a:Lcom/tkay/basead/c;

    invoke-static {v0}, Lcom/tkay/basead/c;->c(Lcom/tkay/basead/c;)Landroid/widget/EditText;

    move-result-object v0

    const-string v1, ""

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setHint(Ljava/lang/CharSequence;)V

    return-void
.end method
