.class Lcom/sigmob/sdk/mraid/b$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/mraid/o$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/o;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid/b;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid/b;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/b$4;->a:Lcom/sigmob/sdk/mraid/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Z)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b$4;->a:Lcom/sigmob/sdk/mraid/b;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/b;->c(Lcom/sigmob/sdk/mraid/b;)Lcom/sigmob/sdk/mraid/b$b;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b$4;->a:Lcom/sigmob/sdk/mraid/b;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/b;->c(Lcom/sigmob/sdk/mraid/b;)Lcom/sigmob/sdk/mraid/b$b;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/mraid/b$b;->a(Z)V

    :cond_0
    return-void
.end method
