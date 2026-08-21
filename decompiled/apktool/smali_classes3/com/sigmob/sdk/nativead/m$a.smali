.class Lcom/sigmob/sdk/nativead/m$a;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/nativead/m;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/nativead/m;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/nativead/m;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/m$a;->a:Lcom/sigmob/sdk/nativead/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 5

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/m$a;->a:Lcom/sigmob/sdk/nativead/m;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/m;->a(Lcom/sigmob/sdk/nativead/m;)Z

    move-result v0

    if-eqz v0, :cond_4

    check-cast p1, Lcom/sigmob/sdk/nativead/m$b;

    const/4 v0, -0x1

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/m$a;->a:Lcom/sigmob/sdk/nativead/m;

    invoke-virtual {v1}, Lcom/sigmob/sdk/nativead/m;->getSelectedItem()Lcom/sigmob/sdk/nativead/m$b;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/m$a;->a:Lcom/sigmob/sdk/nativead/m;

    invoke-static {v2}, Lcom/sigmob/sdk/nativead/m;->b(Lcom/sigmob/sdk/nativead/m;)Z

    move-result v2

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-nez v2, :cond_1

    if-eqz v1, :cond_0

    invoke-virtual {v1, v3}, Lcom/sigmob/sdk/nativead/m$b;->a(Z)V

    :cond_0
    invoke-virtual {p1, v4}, Lcom/sigmob/sdk/nativead/m$b;->a(Z)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/m$a;->a:Lcom/sigmob/sdk/nativead/m;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/m;->getSelectedIndex()I

    move-result v0

    goto :goto_1

    :cond_1
    invoke-static {p1}, Lcom/sigmob/sdk/nativead/m$b;->a(Lcom/sigmob/sdk/nativead/m$b;)Z

    move-result v1

    xor-int/2addr v1, v4

    invoke-virtual {p1, v1}, Lcom/sigmob/sdk/nativead/m$b;->a(Z)V

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/m$a;->a:Lcom/sigmob/sdk/nativead/m;

    invoke-virtual {v1}, Lcom/sigmob/sdk/nativead/m;->getChildCount()I

    move-result v1

    :goto_0
    if-ge v3, v1, :cond_3

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/m$a;->a:Lcom/sigmob/sdk/nativead/m;

    invoke-virtual {v2, v3}, Lcom/sigmob/sdk/nativead/m;->b(I)Lcom/sigmob/sdk/nativead/m$b;

    move-result-object v2

    if-ne v2, p1, :cond_2

    move v0, v3

    goto :goto_1

    :cond_2
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_3
    :goto_1
    iget-object v1, p0, Lcom/sigmob/sdk/nativead/m$a;->a:Lcom/sigmob/sdk/nativead/m;

    invoke-static {v1}, Lcom/sigmob/sdk/nativead/m;->c(Lcom/sigmob/sdk/nativead/m;)Lcom/sigmob/sdk/nativead/m$e;

    move-result-object v1

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/m$a;->a:Lcom/sigmob/sdk/nativead/m;

    invoke-static {v1}, Lcom/sigmob/sdk/nativead/m;->c(Lcom/sigmob/sdk/nativead/m;)Lcom/sigmob/sdk/nativead/m$e;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/nativead/m$b;->getText()Ljava/lang/CharSequence;

    move-result-object p1

    invoke-interface {p1}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v1, v0, p1}, Lcom/sigmob/sdk/nativead/m$e;->a(ILjava/lang/String;)V

    :cond_4
    return-void
.end method
