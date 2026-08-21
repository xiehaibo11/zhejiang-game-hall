.class Lcom/sigmob/sdk/nativead/u$7;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/mraid/d$e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/nativead/u;->l()Landroid/view/View;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/nativead/u;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/nativead/u;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/u$7;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Z)V
    .locals 0

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/u$7;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/u;->n(Lcom/sigmob/sdk/nativead/u;)V

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/sigmob/sdk/nativead/u;->m()Lcom/sigmob/sdk/nativead/n;

    move-result-object p1

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/u$7;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/u;->o(Lcom/sigmob/sdk/nativead/u;)V

    :cond_1
    :goto_0
    return-void
.end method
