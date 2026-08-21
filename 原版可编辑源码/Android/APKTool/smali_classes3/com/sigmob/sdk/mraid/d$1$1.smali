.class Lcom/sigmob/sdk/mraid/d$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/mraid/n$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid/d$1;->a(Ljava/lang/String;Lorg/json/JSONObject;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid/d$1;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid/d$1;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/d$1$1;->a:Lcom/sigmob/sdk/mraid/d$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/String;I)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$1$1;->a:Lcom/sigmob/sdk/mraid/d$1;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$1$1;->a:Lcom/sigmob/sdk/mraid/d$1;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;I)V

    :cond_0
    return-void
.end method

.method public a(Ljava/lang/String;ILjava/lang/String;)V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$1$1;->a:Lcom/sigmob/sdk/mraid/d$1;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$1$1;->a:Lcom/sigmob/sdk/mraid/d$1;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "code:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ", msg:"

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lcom/sigmob/sdk/mraid/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public a(Ljava/lang/String;J)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$1$1;->a:Lcom/sigmob/sdk/mraid/d$1;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$1$1;->a:Lcom/sigmob/sdk/mraid/d$1;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;

    move-result-object v0

    long-to-int p2, p2

    invoke-virtual {v0, p1, p2}, Lcom/sigmob/sdk/mraid/b;->a(Ljava/lang/String;I)V

    :cond_0
    return-void
.end method

.method public a(Ljava/lang/String;JII)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$1$1;->a:Lcom/sigmob/sdk/mraid/d$1;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$1$1;->a:Lcom/sigmob/sdk/mraid/d$1;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;

    move-result-object v0

    long-to-int p2, p2

    invoke-virtual {v0, p1, p2, p4, p5}, Lcom/sigmob/sdk/mraid/b;->a(Ljava/lang/String;III)V

    :cond_0
    return-void
.end method

.method public a(Ljava/lang/String;JJ)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$1$1;->a:Lcom/sigmob/sdk/mraid/d$1;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$1$1;->a:Lcom/sigmob/sdk/mraid/d$1;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;

    move-result-object v0

    long-to-int p2, p2

    long-to-int p3, p4

    invoke-virtual {v0, p1, p2, p3}, Lcom/sigmob/sdk/mraid/b;->a(Ljava/lang/String;II)V

    :cond_0
    return-void
.end method

.method public b(Ljava/lang/String;I)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$1$1;->a:Lcom/sigmob/sdk/mraid/d$1;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$1$1;->a:Lcom/sigmob/sdk/mraid/d$1;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/sigmob/sdk/mraid/b;->b(Ljava/lang/String;I)V

    :cond_0
    return-void
.end method
