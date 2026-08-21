.class Lcom/sigmob/sdk/mraid/m$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/mraid/d$e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid/m;->a()Landroid/view/View;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid/m;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid/m;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/m$4;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Z)V
    .locals 0

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$4;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/m;->o(Lcom/sigmob/sdk/mraid/m;)V

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$4;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/m;->p(Lcom/sigmob/sdk/mraid/m;)V

    :goto_0
    return-void
.end method
