.class final Lcom/kwad/sdk/ranger/b$1;
.super Lcom/kwad/sdk/utils/aw;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/ranger/b;->b(Lcom/kwad/sdk/ranger/d;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic aGA:Ljava/util/List;

.field final synthetic aGB:Lcom/kwad/sdk/ranger/b;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/ranger/b;Ljava/util/List;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/ranger/b$1;->aGB:Lcom/kwad/sdk/ranger/b;

    iput-object p2, p0, Lcom/kwad/sdk/ranger/b$1;->aGA:Ljava/util/List;

    invoke-direct {p0}, Lcom/kwad/sdk/utils/aw;-><init>()V

    return-void
.end method


# virtual methods
.method public final doTask()V
    .locals 5

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iget-object v1, p0, Lcom/kwad/sdk/ranger/b$1;->aGA:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/ranger/a/a;

    if-eqz v2, :cond_0

    iget-object v3, v2, Lcom/kwad/sdk/ranger/a/a;->aHe:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    iget-object v3, v2, Lcom/kwad/sdk/ranger/a/a;->aHe:Ljava/lang/String;

    iget-object v4, p0, Lcom/kwad/sdk/ranger/b$1;->aGB:Lcom/kwad/sdk/ranger/b;

    invoke-static {v4, v2}, Lcom/kwad/sdk/ranger/b;->a(Lcom/kwad/sdk/ranger/b;Lcom/kwad/sdk/ranger/a/a;)V

    iget-object v2, p0, Lcom/kwad/sdk/ranger/b$1;->aGB:Lcom/kwad/sdk/ranger/b;

    invoke-static {v2}, Lcom/kwad/sdk/ranger/b;->a(Lcom/kwad/sdk/ranger/b;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v3, v4}, Lcom/kwad/sdk/ranger/b;->a(Lcom/kwad/sdk/ranger/b;Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/ranger/b/a/c;

    move-result-object v2

    if-eqz v2, :cond_0

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_2

    new-instance v1, Lcom/kwad/sdk/ranger/b/a/d;

    invoke-direct {v1}, Lcom/kwad/sdk/ranger/b/a/d;-><init>()V

    iput-object v0, v1, Lcom/kwad/sdk/ranger/b/a/d;->aHt:Ljava/util/List;

    invoke-static {v1}, Lcom/kwad/sdk/ranger/b/a;->a(Lcom/kwad/sdk/ranger/b/a/d;)V

    :cond_2
    return-void
.end method
